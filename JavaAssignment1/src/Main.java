import src.car.*;
import java.util.*;

public class Main extends Object {

  public static void main(String[] args) {
    Lambo mike = new Lambo(3, 4, 2, 10);
    Car jeep = new Car(3,1,3,7);

    System.out.println("Mike's Lambo traveled " + mike.getDistanceTraveled());
    System.out.println("Bob's Jeep traveled " + jeep.getDistanceTraveled());

    mike.drive();
    jeep.drive();

    Mustang dave = new Mustange(4,6,2,67);
    System.out.println("Dave's traveled " + dave.getDistanceTraveled());
    dave.drive();

    ArrayList<Car> cars = new ArrayList<Car>();
    cars.add(new Minivan(4,5,2,10));

    cars.add(new Minivan(4,3,2,10));
    cars.add(new Lambo(4,10,2,10));


    for(Cars car : cars) {
      System.out.println("CAR: " + car.getDistanceTraveled());
    }

    System.out.println("Test");

  }
}
