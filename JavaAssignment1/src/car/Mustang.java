package car;

public class Mustang extends Car {
  private int _color;
  private int _speed;
  private int _time;
  private int _distanceTraveled;
}

public Lambo(int color, int speed, int time, int distanceTraveled) {
  _color = color;
  _speed = speed;
  _time = time;
  _distanceTraveled = distanceTraveled;
}

public void _updateCache() {
  _distanceTraveled = _speed * _time;
  _cached = true;
}

public int getColor() {return _color;}
public void setColor(int c) {
  if(c != _color) {
    _color = c;
    _cached = false;
  }
}

public int getSpeed() {return _speed;}
public void setSpeed(int speed) {
  if(speed != _speed) {
    _speed = speed;
    _cached = false;
  }
}

public int getTime() {return _time;}
public void setTime(int time) {
  if(time != _time) {
    _time = time;
    _cached = false;
  }
}


public int getDistanceTraveled() {

  if(!_cached) {
    _updateCache();
  }

  return _distanceTraveled;}
  }

public void drive() {
  System.out.println("Driving a Mustang");
}
}
