```flow
start=>start: C = 30,Pv = 100, Pt = 150
e=>end: end
op0=>operationo: Cenerate C1
op1=>operation: Generate profit
cond=>condition:if 500?
start->op0->op1->cond
cond(yes)->out->e
cond(no)->op1
out=>inputoutput: Outputs
```

