class Location {
  constructor () {
    this.x = Math.floor(Math.random() * 5)+1;
    this.y = Math.floor(Math.random() * 5)+1;
  }

  get location(){
    return this.x + "" + this.y;
  }

  drawlocation(){
    this.element = document.getElementById(this.location);
    this.element.innerText=".";
  }

  move(){
    if(this.x!=0 && this.x!=9){
      this.x = this.x + (Math.round(Math.random()) * 2 - 1);
    }else if(this.x==0){
      this.x++;
    }else if(this.y==9){
      this.x--;
    }

    if(this.x!=0 && this.y!=9)
    {
      this.y = this.y + (Math.round(Math.random()) * 2 - 1);
    }else if(this.y==0){
      this.y++;
    }else if(this.y==9){
      this.y--;
    }



  }


}

class Human extends Location{
  constructor (x,y,color){
    super(x,y);
    this.color = color;
  }

  drawlocation(){
    this.element = document.getElementById(this.location);
    this.element.innerText=".";
    this.element.style.color = this.color;
  }



}




class Console {
	constructor(id) {
		this.element = document.getElementById(id);
	}
	log(message) {
		this.element.innerText = message;
	}
}

let console = new Console("console");
let human = new Human(3,4,"red");


function clearMap() {
  var i, j;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      document.getElementById(i+""+j).innerText = "_";
    }
  }

}



var i = 0, howManyTimes = 1000;

function f() {
    human.move();
    clearMap();
    human.drawlocation();

    console.log("Human is at location " + human.location);
    i++;
    if( i < howManyTimes ){
        setTimeout( f, 500 );
    }
}






f();
