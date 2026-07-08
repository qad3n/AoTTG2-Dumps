// Type: Characters.StockSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/StockSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.StockSpecial$$.ctor
// il2cpp: void Characters_StockSpecial___ctor (Characters_StockSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fec6b0

void Characters_StockSpecial___ctor
               (Characters_StockSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor
            ((Characters_BaseHoldAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  return;
}


// Characters.StockSpecial$$CanUse
// il2cpp: bool Characters_StockSpecial__CanUse (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x3fec6c0

bool_conflict Characters_StockSpecial__CanUse(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar2 = Characters_BaseHoldAttackSpecial__CanUse
                    ((Characters_BaseHoldAttackSpecial_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)((pCVar1->fields).FinishSetup == 0);
  }
  return uVar3;
}


// Characters.StockSpecial$$FalseAttack
// il2cpp: void Characters_StockSpecial__FalseAttack (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x3fec700

void Characters_StockSpecial__FalseAttack(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  *(undefined1 *)&(__this->fields).IsActive = 0;
  vtable_dispatch = (__this->klass->vtable)._10_Deactivate.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._10_Deactivate.method,in_RDX,vtable_dispatch);
  return;
}


// Characters.StockSpecial$$Activate
// il2cpp: void Characters_StockSpecial__Activate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x3fec720

void Characters_StockSpecial__Activate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (DAT_05704183 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704183 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__StartBladeSwing(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.StockSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_StockSpecial__ActiveFixedUpdate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x3fec790

void Characters_StockSpecial__ActiveFixedUpdate
               (Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  Characters_ExtendedUseable__ActiveFixedUpdate
            ((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    fVar2 = Characters_AnimationHandler__GetNormalizedTime
                      (__this_00,*(System_String_o **)&(pCVar1->fields)._currentVelocity.fields,
                       (MethodInfo *)0x0);
    if (0.32 <= fVar2) {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03fec806;
      Characters_Human__PauseAnimation(pCVar1,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if (*(char *)((long)&(pCVar1->fields).Animation + 4) != '\0') {
        *(undefined1 *)&(__this->fields).IsActive = 0;
        (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                  (__this,(__this->klass->vtable)._10_Deactivate.method);
        return;
      }
      return;
    }
  }
LAB_03fec806:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.StockSpecial$$Deactivate
// il2cpp: void Characters_StockSpecial__Deactivate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x3fec810

void Characters_StockSpecial__Deactivate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__ContinueAnimation(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


