  t2 = b_dy*dt;
  t3 = dt*dt;
  t4 = b_ay*t3*(1.0/2.0);
  t5 = t2+t4;
  t6 = b_az*t3*(1.0/2.0);
  t7 = t2+t6;
  t8 = b_dx*dt;
  t9 = b_ax*t3*(1.0/2.0);
  t10 = t8+t9;
  t11 = b_dy*2.0;
  t12 = qy*qy;
  t13 = t12*2.0;
  t14 = qz*qz;
  t15 = t14*2.0;
  t16 = t13+t15-1.0;
  t17 = qw*qy*2.0;
  t46 = qx*qz*2.0;
  t18 = t17-t46;
  t19 = qw*qz*2.0;
  t20 = qx*qy*2.0;
  t21 = t19+t20;
  t22 = lambda*qx*t7*2.0;
  t23 = lambda*qz*t7*2.0;
  t24 = b_ay*dt;
  t25 = t11+t24;
  t26 = b_dx*2.0;
  t27 = b_ax*dt;
  t28 = t26+t27;
  t29 = b_az*dt;
  t30 = t11+t29;
  t31 = qw*qz;
  t32 = qx*qy;
  t33 = qw*qx*2.0;
  t34 = qy*qz*2.0;
  t35 = t33+t34;
  t36 = qx*qx;
  t37 = t36*2.0;
  t38 = t15+t37-1.0;
  t39 = t31-t32;
  t40 = lambda*qx*t5*2.0;
  t41 = lambda*qy*t10*2.0;
  t42 = lambda*qw*t5*2.0;
  t43 = lambda*qz*t5*2.0;
  t44 = lambda*qx*t10*2.0;
  t45 = lambda*qy*t5*2.0;
  t47 = t17+t46;
  t48 = t33-t34;
  t49 = t13+t37-1.0;
  t50 = qw*qy;
  t51 = qw*qx;
  t52 = qy*qz;
  t53 = fabs(b_wx);
  t54 = fabs(b_wy);
  t55 = fabs(b_wz);
  t56 = t53*t53;
  t57 = t54*t54;
  t58 = t55*t55;
  t59 = t56+t57+t58;
  t60 = sqrt(t59);
  t61 = dt*t60*(1.0/2.0);
  t62 = sin(t61);
  t63 = 1.0/sqrt(t59);
  t64 = (b_wx/fabs(b_wx));
  t65 = 1.0/pow(t59,3.0/2.0);
  t66 = cos(t61);
  t67 = 1.0/t59;
  t68 = (b_wy/fabs(b_wy));
  t69 = (b_wz/fabs(b_wz));
  t70 = b_wz*t62*t63;
  t71 = b_wx*t62*t63;
  t72 = qw*t62*t63;
  t73 = b_wy*t62*t63;
  t74 = qy*t62*t63;
  t75 = t62*t62;
  t76 = 1.0/(t59*t59);
  t77 = b_wy*b_wy;
  t78 = b_wz*b_wz;
  t79 = t66*t66;
  t80 = dt*t60;
  t81 = sin(t80);
  t82 = t63*t81;
  t83 = b_wx*t67*t75*2.0;
  t84 = t53*t64*t75*t76*t78*4.0;
  t85 = b_wx*b_wx;
  t86 = b_wy*t67*t75*2.0;
  t87 = b_wz*t53*t62*t64*t65*t66*2.0;
  t88 = b_wz*dt*t53*t64*t67*t75;
  t89 = b_wx*b_wy*dt*t53*t62*t64*t65*t66*2.0;
  t90 = dt*t54*t62*t65*t66*t68*t78*2.0;
  t91 = b_wz*t54*t62*t65*t66*t68*2.0;
  t92 = b_wz*dt*t54*t67*t68*t75;
  t93 = b_wx*b_wy*dt*t54*t62*t65*t66*t68*2.0;
  t94 = b_wz*t67*t75*2.0;
  t95 = b_wz*t67*t75*4.0;
  t96 = dt*t55*t62*t65*t66*t69*t78*2.0;
  t97 = b_wz*dt*t55*t67*t69*t79;
  t98 = b_wx*b_wy*t55*t69*t75*t76*4.0;
  t99 = b_wx*b_wy*t67*t75*2.0;
  t100 = b_wx*t67*t75*4.0;
  t101 = t53*t64*t75*t76*t77*4.0;
  t102 = dt*t53*t62*t64*t65*t66*t85*2.0;
  t103 = b_wx*dt*t53*t64*t67*t79;
  t104 = b_wy*b_wz*t53*t64*t75*t76*4.0;
  t105 = b_wy*dt*t53*t64*t67*t79;
  t106 = b_wx*b_wz*dt*t53*t62*t64*t65*t66*2.0;
  t107 = b_wy*t67*t75*4.0;
  t108 = dt*t54*t62*t65*t66*t68*t85*2.0;
  t109 = dt*t54*t62*t65*t66*t68*t77*2.0;
  t110 = b_wy*dt*t54*t67*t68*t79;
  t111 = b_wx*b_wz*dt*t54*t62*t65*t66*t68*2.0;
  t112 = b_wx*t54*t62*t65*t66*t68*2.0;
  t113 = b_wx*dt*t54*t67*t68*t75;
  t114 = b_wy*b_wz*dt*t54*t62*t65*t66*t68*2.0;
  t115 = dt*t55*t62*t65*t66*t69*t85*2.0;
  t116 = dt*t55*t62*t65*t66*t69*t77*2.0;
  t117 = b_wy*dt*t55*t67*t69*t79;
  t118 = b_wx*b_wz*dt*t55*t62*t65*t66*t69*2.0;
  t119 = b_wx*t55*t62*t65*t66*t69*2.0;
  t120 = b_wx*dt*t55*t67*t69*t75;
  t121 = b_wy*b_wz*dt*t55*t62*t65*t66*t69*2.0;
  t122 = b_wy*t63*t81;
  t123 = b_wx*b_wz*t67*t75*2.0;
  t124 = b_wy*b_wz*t67*t75*2.0;
  A0[0][0] = 1.0;
  A0[0][3] = t43-lambda*qy*t7*2.0;
  A0[0][4] = t23+t45;
  A0[0][5] = t40-lambda*qw*t7*2.0-lambda*qy*t10*4.0;
  A0[0][6] = t22+t42-lambda*qz*t10*4.0;
  A0[0][7] = dt*t16*t28*(-1.0/2.0)+dt*t21*t25*(1.0/2.0)-dt*t18*t30*(1.0/2.0);
  A0[0][8] = -dt*lambda*t16;
  A0[0][9] = -dt*lambda*t18+dt*lambda*t21;
  A0[0][14] = lambda*t3*t16*(-1.0/2.0);
  A0[0][15] = lambda*t3*(t31+t32);
  A0[0][16] = -lambda*t3*(t50-qx*qz);
  A0[1][1] = 1.0;
  A0[1][3] = t22-lambda*qz*t10*2.0;
  A0[1][4] = t41+lambda*qw*t7*2.0-lambda*qx*t5*4.0;
  A0[1][5] = t23+t44;
  A0[1][6] = lambda*qw*t10*-2.0+lambda*qy*t7*2.0-lambda*qz*t5*4.0;
  A0[1][7] = dt*t25*t38*(-1.0/2.0)+dt*t30*t35*(1.0/2.0)-dt*t28*(t19-t20)*(1.0/2.0);
  A0[1][8] = dt*lambda*t39*-2.0;
  A0[1][9] = dt*lambda*t35-dt*lambda*t38;
  A0[1][14] = -lambda*t3*t39;
  A0[1][15] = lambda*t3*t38*(-1.0/2.0);
  A0[1][16] = lambda*t3*(t51+t52);
  A0[2][2] = 1.0;
  A0[2][3] = -t40+t41;
  A0[2][4] = -t42-lambda*qx*t7*4.0+lambda*qz*t10*2.0;
  A0[2][5] = t43+lambda*qw*t10*2.0-lambda*qy*t7*4.0;
  A0[2][6] = t44+t45;
  A0[2][7] = dt*t25*t48*(-1.0/2.0)+dt*t28*t47*(1.0/2.0)-dt*t30*t49*(1.0/2.0);
  A0[2][8] = dt*lambda*t47;
  A0[2][9] = -dt*lambda*t48-dt*lambda*t49;
  A0[2][14] = lambda*t3*(t50+qx*qz);
  A0[2][15] = -lambda*t3*(t51-t52);
  A0[2][16] = lambda*t3*t49*(-1.0/2.0);
  A0[3][3] = t66;
  A0[3][4] = -b_wx*t62*t63;
  A0[3][5] = -b_wy*t62*t63;
  A0[3][6] = -b_wz*t62*t63;
  A0[3][11] = -qx*t62*t63+b_wx*qx*t53*t62*t64*t65+b_wy*qy*t53*t62*t64*t65+b_wz*qz*t53*t62*t64*t65-dt*qw*t53*t62*t63*t64*(1.0/2.0)-b_wx*dt*qx*t53*t64*t66*t67*(1.0/2.0)-b_wy*dt*qy*t53*t64*t66*t67*(1.0/2.0)-b_wz*dt*qz*t53*t64*t66*t67*(1.0/2.0);
  A0[3][12] = -qy*t62*t63+b_wx*qx*t54*t62*t65*t68+b_wy*qy*t54*t62*t65*t68+b_wz*qz*t54*t62*t65*t68-dt*qw*t54*t62*t63*t68*(1.0/2.0)-b_wx*dt*qx*t54*t66*t67*t68*(1.0/2.0)-b_wy*dt*qy*t54*t66*t67*t68*(1.0/2.0)-b_wz*dt*qz*t54*t66*t67*t68*(1.0/2.0);
  A0[3][13] = -qz*t62*t63+b_wx*qx*t55*t62*t65*t69+b_wy*qy*t55*t62*t65*t69+b_wz*qz*t55*t62*t65*t69-dt*qw*t55*t62*t63*t69*(1.0/2.0)-b_wx*dt*qx*t55*t66*t67*t69*(1.0/2.0)-b_wy*dt*qy*t55*t66*t67*t69*(1.0/2.0)-b_wz*dt*qz*t55*t66*t67*t69*(1.0/2.0);
  A0[4][3] = t71;
  A0[4][4] = t66;
  A0[4][5] = t70;
  A0[4][6] = -b_wy*t62*t63;
  A0[4][11] = t72-b_wx*qw*t53*t62*t64*t65-b_wz*qy*t53*t62*t64*t65+b_wy*qz*t53*t62*t64*t65-dt*qx*t53*t62*t63*t64*(1.0/2.0)+b_wx*dt*qw*t53*t64*t66*t67*(1.0/2.0)+b_wz*dt*qy*t53*t64*t66*t67*(1.0/2.0)-b_wy*dt*qz*t53*t64*t66*t67*(1.0/2.0);
  A0[4][12] = -qz*t62*t63-b_wx*qw*t54*t62*t65*t68-b_wz*qy*t54*t62*t65*t68+b_wy*qz*t54*t62*t65*t68-dt*qx*t54*t62*t63*t68*(1.0/2.0)+b_wx*dt*qw*t54*t66*t67*t68*(1.0/2.0)+b_wz*dt*qy*t54*t66*t67*t68*(1.0/2.0)-b_wy*dt*qz*t54*t66*t67*t68*(1.0/2.0);
  A0[4][13] = t74-b_wx*qw*t55*t62*t65*t69-b_wz*qy*t55*t62*t65*t69+b_wy*qz*t55*t62*t65*t69-dt*qx*t55*t62*t63*t69*(1.0/2.0)+b_wx*dt*qw*t55*t66*t67*t69*(1.0/2.0)+b_wz*dt*qy*t55*t66*t67*t69*(1.0/2.0)-b_wy*dt*qz*t55*t66*t67*t69*(1.0/2.0);
  A0[5][3] = t73;
  A0[5][4] = -t70;
  A0[5][5] = t66;
  A0[5][6] = t71;
  A0[5][11] = qz*t62*t63-b_wy*qw*t53*t62*t64*t65+b_wz*qx*t53*t62*t64*t65-b_wx*qz*t53*t62*t64*t65-dt*qy*t53*t62*t63*t64*(1.0/2.0)+b_wy*dt*qw*t53*t64*t66*t67*(1.0/2.0)-b_wz*dt*qx*t53*t64*t66*t67*(1.0/2.0)+b_wx*dt*qz*t53*t64*t66*t67*(1.0/2.0);
  A0[5][12] = t72-b_wy*qw*t54*t62*t65*t68+b_wz*qx*t54*t62*t65*t68-b_wx*qz*t54*t62*t65*t68-dt*qy*t54*t62*t63*t68*(1.0/2.0)+b_wy*dt*qw*t54*t66*t67*t68*(1.0/2.0)-b_wz*dt*qx*t54*t66*t67*t68*(1.0/2.0)+b_wx*dt*qz*t54*t66*t67*t68*(1.0/2.0);
  A0[5][13] = -qx*t62*t63-b_wy*qw*t55*t62*t65*t69+b_wz*qx*t55*t62*t65*t69-b_wx*qz*t55*t62*t65*t69-dt*qy*t55*t62*t63*t69*(1.0/2.0)+b_wy*dt*qw*t55*t66*t67*t69*(1.0/2.0)-b_wz*dt*qx*t55*t66*t67*t69*(1.0/2.0)+b_wx*dt*qz*t55*t66*t67*t69*(1.0/2.0);
  A0[6][3] = t70;
  A0[6][4] = t73;
  A0[6][5] = -t71;
  A0[6][6] = t66;
  A0[6][11] = -t74-b_wz*qw*t53*t62*t64*t65-b_wy*qx*t53*t62*t64*t65+b_wx*qy*t53*t62*t64*t65-dt*qz*t53*t62*t63*t64*(1.0/2.0)+b_wz*dt*qw*t53*t64*t66*t67*(1.0/2.0)+b_wy*dt*qx*t53*t64*t66*t67*(1.0/2.0)-b_wx*dt*qy*t53*t64*t66*t67*(1.0/2.0);
  A0[6][12] = qx*t62*t63-b_wz*qw*t54*t62*t65*t68-b_wy*qx*t54*t62*t65*t68+b_wx*qy*t54*t62*t65*t68-dt*qz*t54*t62*t63*t68*(1.0/2.0)+b_wz*dt*qw*t54*t66*t67*t68*(1.0/2.0)+b_wy*dt*qx*t54*t66*t67*t68*(1.0/2.0)-b_wx*dt*qy*t54*t66*t67*t68*(1.0/2.0);
  A0[6][13] = t72-b_wz*qw*t55*t62*t65*t69-b_wy*qx*t55*t62*t65*t69+b_wx*qy*t55*t62*t65*t69-dt*qz*t55*t62*t63*t69*(1.0/2.0)+b_wz*dt*qw*t55*t66*t67*t69*(1.0/2.0)+b_wy*dt*qx*t55*t66*t67*t69*(1.0/2.0)-b_wx*dt*qy*t55*t66*t67*t69*(1.0/2.0);
  A0[7][7] = 1.0;
  A0[8][8] = 1.0;
  A0[8][14] = dt;
  A0[9][9] = 1.0;
  A0[9][15] = dt;
  A0[10][9] = 1.0;
  A0[10][16] = dt;
  A0[11][11] = 1.0;
  A0[12][12] = 1.0;
  A0[13][13] = 1.0;
  A0[14][14] = 1.0;
  A0[15][15] = 1.0;
  A0[16][16] = 1.0;
  A0[17][11] = gx*(t84+t101-dt*t53*t62*t64*t65*t66*t77*2.0-dt*t53*t62*t64*t65*t66*t78*2.0)+gz*(t94+t105+t106-b_wy*t53*t62*t64*t65*t66*2.0-b_wx*b_wz*t53*t64*t75*t76*4.0-b_wy*dt*t53*t64*t67*t75)+gy*(t86+t87+t88+t89-b_wx*b_wy*t53*t64*t75*t76*4.0-b_wz*dt*t53*t64*t67*t79);
  A0[17][12] = gz*(t82+t110+t111-b_wy*t54*t62*t65*t66*t68*2.0-b_wx*b_wz*t54*t68*t75*t76*4.0-b_wy*dt*t54*t67*t68*t75)-gx*(t90+t107+t109-t54*t68*t75*t76*t77*4.0-t54*t68*t75*t76*t78*4.0)+gy*(t83+t91+t92+t93-b_wx*b_wy*t54*t68*t75*t76*4.0-b_wz*dt*t54*t67*t68*t79);
  A0[17][13] = -gy*(t82+t97+t98-b_wz*t55*t62*t65*t66*t69*2.0-b_wz*dt*t55*t67*t69*t75-b_wx*b_wy*dt*t55*t62*t65*t66*t69*2.0)+gz*(t83+t117+t118-b_wy*t55*t62*t65*t66*t69*2.0-b_wx*b_wz*t55*t69*t75*t76*4.0-b_wy*dt*t55*t67*t69*t75)-gx*(t95+t96+t116-t55*t69*t75*t76*t77*4.0-t55*t69*t75*t76*t78*4.0);
  A0[17][17] = t67*t75*t77*-2.0-t67*t75*t78*2.0+1.0;
  A0[17][18] = t99-b_wz*t63*t81;
  A0[17][19] = t122+t123;
  A0[18][11] = -gy*(-t84+t100+t102-t53*t64*t75*t76*t85*4.0+dt*t53*t62*t64*t65*t66*t78*2.0)-gz*(t82+t103+t104-b_wx*t53*t62*t64*t65*t66*2.0-b_wx*dt*t53*t64*t67*t75-b_wy*b_wz*dt*t53*t62*t64*t65*t66*2.0)+gx*(t86-t87-t88+t89-b_wx*b_wy*t53*t64*t75*t76*4.0+b_wz*dt*t53*t64*t67*t79);
  A0[18][12] = -gy*(t90+t108-t54*t68*t75*t76*t78*4.0-t54*t68*t75*t76*t85*4.0)+gx*(t83-t91-t92+t93-b_wx*b_wy*t54*t68*t75*t76*4.0+b_wz*dt*t54*t67*t68*t79)+gz*(t94+t112+t113+t114-b_wy*b_wz*t54*t68*t75*t76*4.0-b_wx*dt*t54*t67*t68*t79);
  A0[18][13] = gx*(t82+t97-t98-b_wz*t55*t62*t65*t66*t69*2.0-b_wz*dt*t55*t67*t69*t75+b_wx*b_wy*dt*t55*t62*t65*t66*t69*2.0)-gy*(t95+t96+t115-t55*t69*t75*t76*t78*4.0-t55*t69*t75*t76*t85*4.0)+gz*(t86+t119+t120+t121-b_wy*b_wz*t55*t69*t75*t76*4.0-b_wx*dt*t55*t67*t69*t79);
  A0[18][17] = t99+b_wz*t63*t81;
  A0[18][18] = t67*t75*t78*-2.0-t67*t75*t85*2.0+1.0;
  A0[18][19] = t124-b_wx*t63*t81;
  A0[19][11] = -gz*(t100-t101+t102-t53*t64*t75*t76*t85*4.0+dt*t53*t62*t64*t65*t66*t77*2.0)+gy*(t82+t103-t104-b_wx*t53*t62*t64*t65*t66*2.0-b_wx*dt*t53*t64*t67*t75+b_wy*b_wz*dt*t53*t62*t64*t65*t66*2.0)+gx*(t94-t105+t106+b_wy*t53*t62*t64*t65*t66*2.0-b_wx*b_wz*t53*t64*t75*t76*4.0+b_wy*dt*t53*t64*t67*t75);
  A0[19][12] = gy*(t94-t112-t113+t114-b_wy*b_wz*t54*t68*t75*t76*4.0+b_wx*dt*t54*t67*t68*t79)-gz*(t107+t108+t109-t54*t68*t75*t76*t77*4.0-t54*t68*t75*t76*t85*4.0)-gx*(t82+t110-t111-b_wy*t54*t62*t65*t66*t68*2.0+b_wx*b_wz*t54*t68*t75*t76*4.0-b_wy*dt*t54*t67*t68*t75);
  A0[19][13] = -gz*(t115+t116-t55*t69*t75*t76*t77*4.0-t55*t69*t75*t76*t85*4.0)+gy*(t86-t119-t120+t121-b_wy*b_wz*t55*t69*t75*t76*4.0+b_wx*dt*t55*t67*t69*t79)+gx*(t83-t117+t118+b_wy*t55*t62*t65*t66*t69*2.0-b_wx*b_wz*t55*t69*t75*t76*4.0+b_wy*dt*t55*t67*t69*t75);
  A0[19][17] = -t122+t123;
  A0[19][18] = t124+b_wx*t63*t81;
  A0[19][19] = t67*t75*t77*-2.0-t67*t75*t85*2.0+1.0;
  A0[20][20] = 1.0;
  A0[21][21] = 1.0;
  A0[22][22] = 1.0;
  A0[23][23] = 1.0;
  A0[24][24] = 1.0;
  A0[25][25] = 1.0;
