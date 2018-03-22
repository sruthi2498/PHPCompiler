<?php  	

	# INLINE COMMENT
	//if else-if else statement with OR conditon
	$a=3;
	$b=4;
	$c=2;

	if($a>$b || $a==$b){
	   echo "ok";
	}
	else if($c==2){
	  echo "ok";
	}
	else{
		echo "not ok"; # INLINE COMMENT
	}
	/* MULTI LINE COMMENT
		jdocs
	*/
	// NOTE :
		// nested if
		// mutiple assignment statements and conditions in for loop
		// both unary and assigment together
	for($a=1,$b=3;$a<3;$b=$b+1,$a=$a+2,$c++){
		if($r < 4){
			$a = 3;
		}
	}
	// normal string
	echo "abc";
	//concatenated string
	echo "aaa"."bbb";
	//concatenated string and expression
	echo "aaa".$abc+$bcd;

?>