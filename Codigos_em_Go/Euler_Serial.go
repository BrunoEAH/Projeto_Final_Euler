package main

import ("fmt")


func Fatorial(n float64) float64{
  if n == 0 {
    return 1;
  }else{
    return n*Fatorial(n-1)
  }
}

func Calc(){
  var e float64
  e = 0
  var i float64
  for i =0; i<10000; i++{
      e = e + 1/Fatorial(i)
  }
  fmt.Printf("%.30f\n",e)
}

func main() {
	Calc()
}
