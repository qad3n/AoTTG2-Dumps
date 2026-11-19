// Type: Characters.StockSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/StockSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// --------------------------------

// Characters.StockSpecial$$.ctor
// il2cpp: void Characters_StockSpecial___ctor (Characters_StockSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0f520

void Characters_StockSpecial___ctor
               (Characters_StockSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor(__this,owner,method);
  return;
}


// Characters.StockSpecial$$CanUse
// il2cpp: bool Characters_StockSpecial__CanUse (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x5c0f530

bool Characters_StockSpecial__CanUse(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = false;
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields)._state == 0;
  }
  return bVar3;
}


// Characters.StockSpecial$$FalseAttack
// il2cpp: void Characters_StockSpecial__FalseAttack (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x5c0f570

void Characters_StockSpecial__FalseAttack(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  (__this->fields).IsActive = false;
  (*(__this->klass->vtable)._10_Deactivate.methodPtr)(__this,(__this->klass->vtable)._10_Deactivate.method);
  return;
}


// Characters.StockSpecial$$Activate
// il2cpp: void Characters_StockSpecial__Activate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x5c0f590

void Characters_StockSpecial__Activate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476ce = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Characters_Human__StartBladeSwing(__this_00,(MethodInfo *)0x0);
  return;
}


// Characters.StockSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_StockSpecial__ActiveFixedUpdate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x5c0f600

void Characters_StockSpecial__ActiveFixedUpdate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    fVar2 = Characters_AnimationHandler__GetNormalizedTime
                      (__this_00,(pCVar1->fields).AttackAnimation,(MethodInfo *)0x0);
    if (0.32 <= fVar2) {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_05c0f676;
      Characters_Human__PauseAnimation(pCVar1,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Grounded == false) {
        return;
      }
      (__this->fields).IsActive = false;
      (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                (__this,(__this->klass->vtable)._10_Deactivate.method);
      return;
    }
  }
label_05c0f676:
  ThrowNullReferenceException();
}


// Characters.StockSpecial$$Deactivate
// il2cpp: void Characters_StockSpecial__Deactivate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x5c0f680

void Characters_StockSpecial__Deactivate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__ContinueAnimation(__this_00,(MethodInfo *)0x0);
  return;
}


