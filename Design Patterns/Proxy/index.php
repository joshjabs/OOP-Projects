<?php

interface IPainter {
    public function paint();
}

class Painter implements IPainter {
	public function paint() {
		writeln("The painter is painting.");
	}
}



class ProxyPainter implements IPainter {
private $realPainter;
private $painting_cost;
private	$painting_offer;

function __construct($painting_offer) {
  $this->realPainter = new Painter();
  $this->painting_cost = 150;
  $this->painting_offer = $painting_offer;
}

public function paint() {
		if ($this->painting_cost <= $this->painting_offer)
			$this->realPainter->paint();
		else
			writeln('This painting is more expencive than that.');
	}
}


$painter = new ProxyPainter(500);
$painter->paint();

$painter = new ProxyPainter(75);
$painter->paint();

function writeln($line_in) {
  echo $line_in."<br/>";
}





?>
