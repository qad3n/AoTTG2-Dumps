// Type: Characters.BaseAttackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseAttackSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseAttackSpecial$$.ctor
// il2cpp: void Characters_BaseAttackSpecial___ctor (Characters_BaseAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fe60e0

void Characters_BaseAttackSpecial___ctor
               (Characters_BaseAttackSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (DAT_05704161 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704161 = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_Human;
  if (owner != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      (__this->fields)._human = (Characters_Human_o *)owner;
      if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
         ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto LAB_03fe616b;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(owner);
  }
  (__this->fields)._human = (Characters_Human_o *)0x0;
LAB_03fe616b:
  il2cpp_runtime_glue(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseAttackSpecial__CanUse (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x3fe6190

bool_conflict
Characters_BaseAttackSpecial__CanUse(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  bool_conflict bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return 0;
  }
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = Characters_Human__CanBladeAttack(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseAttackSpecial$$InSpecial
// il2cpp: bool Characters_BaseAttackSpecial__InSpecial (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x3fe61c0

bool_conflict
Characters_BaseAttackSpecial__InSpecial(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),(pCVar1->fields).FinishSetup == 9);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseAttackSpecial__Deactivate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x3fe61e0

void Characters_BaseAttackSpecial__Deactivate
               (Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseAttackSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BaseAttackSpecial__ActiveFixedUpdate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x3fe6200

void Characters_BaseAttackSpecial__ActiveFixedUpdate
               (Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).FinishSetup != 9) {
      *(undefined1 *)&(__this->fields).IsActive = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


