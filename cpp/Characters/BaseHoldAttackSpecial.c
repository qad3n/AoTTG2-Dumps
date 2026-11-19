// Type: Characters.BaseHoldAttackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/BaseHoldAttackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// --------------------------------

// Characters.BaseHoldAttackSpecial$$get_ActiveTime
// il2cpp: float Characters_BaseHoldAttackSpecial__get_ActiveTime (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c08eb0

float Characters_BaseHoldAttackSpecial__get_ActiveTime
                (Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  return INFINITY;
}


// Characters.BaseHoldAttackSpecial$$.ctor
// il2cpp: void Characters_BaseHoldAttackSpecial___ctor (Characters_BaseHoldAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c08ec0

void Characters_BaseHoldAttackSpecial___ctor
               (Characters_StockSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_c *pCVar2;
  
  if (Il2CppMethodInitialized_075476ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476ae = '\x01';
  }
  (__this->fields)._keyIsReset = true;
  Characters_HoldUseable___ctor((Characters_HoldUseable_o *)__this,owner,(MethodInfo *)0x0);
  pCVar2 = TypeInfo_Characters_Human;
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    (__this->fields)._human = (Characters_Human_o *)0x0;
label_05c08f53:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
    return;
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 <= (owner->klass->_2).typeHierarchyDepth) &&
     ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
    (__this->fields)._human = (Characters_Human_o *)owner;
    if ((bVar1 <= (owner->klass->_2).typeHierarchyDepth) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pCVar2)) goto label_05c08f53;
  }
  il2cpp_codegen_raise_invalid_cast_exception(owner);
}


// Characters.BaseHoldAttackSpecial$$SetInput
// il2cpp: void Characters_BaseHoldAttackSpecial__SetInput (Characters_BaseHoldAttackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x5c08f70

void Characters_BaseHoldAttackSpecial__SetInput
               (Characters_BaseHoldAttackSpecial_o *__this,bool key,MethodInfo *method)

{
  VirtualInvokeData_6411beea80bb *pVVar1;
  bool bVar2;
  VirtualInvokeData_6411beea80bb *pVVar3;
  undefined7 in_register_00000031;
  float fVar4;
  
  bVar2 = (__this->fields).IsActive;
  if ((int)CONCAT71(in_register_00000031,key) == 0) {
    if (bVar2 == false) goto label_05c0900d;
    (__this->fields).IsActive = false;
    pVVar3 = &(__this->klass->vtable)._10_Deactivate;
    pVVar1 = &(__this->klass->vtable)._10_Deactivate;
  }
  else {
    if (bVar2 != false) goto label_05c0900d;
    bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if ((!bVar2) || ((__this->fields)._keyIsReset == false)) goto label_05c0900d;
    (__this->fields).IsActive = true;
    fVar4 = (*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                      (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
    (__this->fields)._activeTimeLeft = fVar4;
    (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
    pVVar3 = &(__this->klass->vtable)._8_OnUse;
    pVVar1 = &(__this->klass->vtable)._8_OnUse;
  }
  (*pVVar3->methodPtr)(__this,pVVar1->method);
label_05c0900d:
  (__this->fields)._keyIsReset = !key;
  return;
}


// Characters.BaseHoldAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseHoldAttackSpecial__CanUse (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c09020

bool Characters_BaseHoldAttackSpecial__CanUse(Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseHoldAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseHoldAttackSpecial__Deactivate (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c09030

void Characters_BaseHoldAttackSpecial__Deactivate
               (Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
  return;
}


