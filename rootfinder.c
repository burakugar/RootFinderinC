double root3(double a0, double a1, double a2, double a3, double xs, double xe)
{  double delta= 0.001;/* user defined epsilon value corresponds to the minimum interval that we will search through */
   double mid ; /*declaring the mid point as double */
    while ((xe-xs) >= delta) /* calculation can be done until the given interval(xs-xe) is large enough to search (bigger than delta) */
    { 
        mid = (xs+xe)/2; /*Finding the middle point of the given interval */
        if (poly3(a0,a1,a2,a3,mid) == 0.0) /* After find the mid point of the given int. we have to check whether it is the root or not*/
            break; /* if it is root then break */
       	/* after we make sure ourselves mid point is not the root then we have to check which side of the midpoint we have to search through*/
        else if (poly3(a0,a1,a2,a3,mid)*poly3(a0,a1,a2,a3,xs)< 0) 
            xe = mid; /* if f(mid).f(xs)<0 that means there is one root in that interval,
			 			we have to assignt mid point as a end point so that we divide the interval by half */
        else
            xs = mid;  /* if f(mid).f(xs)>0 that means there is no root between xs and mid so we have to search through mid-xe */
						/*so that we have to assign mid point as a start point so that we divide the interval by half */
    } 
	return mid; /*final mid point have to be the root */
}


double root4(double a0, double a1, double a2, double a3, double a4, double xs, double xe)
{	double delta= 0.001; /* user defined epsilon value corresponds to the minimum interval that we will search through */
    double mid ; 
    while ((xe-xs) >= delta) 
    { 
        mid = (xs+xe)/2; /*Finding the middle point of the given interval */
        if (poly4(a0,a1,a2,a3,a4,mid) == 0.0) 
            break; 

        else if (poly4(a0,a1,a2,a3,a4,mid)*poly4(a0,a1,a2,a3,a4,xs)< 0) 
            xe = mid; /* if f(mid).f(xs)<0 that means there is one root in that interval,
			 			we have to assignt mid point as a end point so that we divide the interval by half */
        else
            xs = mid; /* if f(mid).f(xs)>0 that means there is no root between xs and mid so we have to search through mid-xe */
						/*so that we have to assign mid point as a start point so that we divide the interval by half */
    } 
	return mid;	/*final mid point have to be the root */
}