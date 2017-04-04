<?php

//Presentation is @ https://docs.google.com/presentation/d/14WHYkTHMGl2KyiMQIaZVdd9PX6GRpFShzhQs-fLiPPo/edit?usp=sharing

  //This is the Strategy
  class StrategyContext {
      private $strategy = NULL;
      //MoveList is not instantiated at construct time
      public function __construct($strategy_ind_id) {
          switch ($strategy_ind_id) {
              case "KingPawn":
                  $this->strategy = new StrategyKingPawn();
              break;
              case "QueenPawn":
                  $this->strategy = new StrategyQueenPawn();
              break;
              case "Knight":
                  $this->strategy = new StrategyKnight();
              break;
          }
      }
      public function showMove($move) {
        return $this->strategy->showcolor($move);
      }
  }
  interface StrategyInterface {
      public function showcolor($move_in);
  }

  //These are the Concrete Strategies
  class StrategyKingPawn implements StrategyInterface {
      public function showcolor($move_in) {
          $color = $move_in->getcolor();
          return strtoupper ($color) . ' Moved the King Pawn';
      }
  }
  class StrategyQueenPawn implements StrategyInterface {
      public function showcolor($move_in) {
          $color = $move_in->getcolor();
          return strtoupper ($color) . ' Moved the Queen Pawn';
      }
  }
  class StrategyKnight implements StrategyInterface {
      public function showcolor($move_in) {
          $color = $move_in->getcolor();
          return strtoupper ($color) . ' Moved the Knight';
      }
  }

  class Move {
      private $player;
      private $color;
      function __construct($color_in, $player_in) {
          $this->player = $player_in;
          $this->color  = $color_in;
      }
      function getPlayer() {
          return $this->player;
      }
      function getColor() {
          return $this->color;
      }
      function getPlayerandColor() {
          return $this->getColor() . ' by ' . $this->getPlayer();
      }
  }

    writeln('Chess Strategic Mover');
    writeln('');

    $move = new Move('Black','Larry');

    //Declare Contexts with Concrete Strategies
    $strategyContextKP = new StrategyContext('KingPawn');
    $strategyContextQP = new StrategyContext('QueenPawn');
    $strategyContextK = new StrategyContext('Knight');

    writeln('Strategy - Move KingPawn');
    writeln($strategyContextKP->showMove($move));
    writeln('');

    writeln('Strategy - Move QueenPawn');
    writeln($strategyContextQP->showMove($move));
    writeln('');

    writeln('Strategy - Move Knight');
    writeln($strategyContextK->showMove($move));
    writeln('');

    function writeln($line_in) {
      echo $line_in."<br/>";
    }

  ?>
