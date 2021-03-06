<?php
userelation("atkManyToOneRelation");

class bug_dependency extends atkNode 
{
  
  function bug_dependency()
  {
    $this->atkNode("bug_dependency",NF_NO_EDIT|NF_NO_VIEW);
    $this->add(new atkManyToOneRelation("bug_id","achilles.bug",AF_PRIMARY|AF_LARGE));
    $this->add(new atkManyToOneRelation("depends_on","achilles.bug",AF_PRIMARY|AF_LARGE));
    $this->setSecurityAlias("achilles.bug");    
    $this->setOrder("depends_on");
    $this->setTable("achilles_bug_dependency");  
  }
  
  function descriptor_def()
  {
    return "[bug_id],[depends_on]"; 
  }
}