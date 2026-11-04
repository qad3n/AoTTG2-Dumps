// Type: Characters.BaseHoldAttackSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseHoldAttackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// --------------------------------

// Characters.BaseHoldAttackSpecial$$get_ActiveTime
// il2cpp: float Characters_BaseHoldAttackSpecial__get_ActiveTime (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x1820a7610

float
Characters_BaseHoldAttackSpecial__get_ActiveTime(Characters_BaseHoldAttackSpecial_o* __this, MethodInfo* method)

{
  return INFINITY;
}


// Characters.BaseHoldAttackSpecial$$.ctor
// il2cpp: void Characters_BaseHoldAttackSpecial___ctor (Characters_BaseHoldAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182167160

void Characters_BaseHoldAttackSpecial___ctor
               (Characters_BaseHoldAttackSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_184346cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346cde = '\x01';
  }
  (__this->fields)._keyIsReset = true;
  Characters_HoldUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    (__this->fields)._human = (Characters_Human_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar1) ||
       ((owner->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(owner);
    }
    (__this->fields)._human = (Characters_Human_o *)owner;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar1) ||
       ((owner->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(owner);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseHoldAttackSpecial$$SetInput
// il2cpp: void Characters_BaseHoldAttackSpecial__SetInput (Characters_BaseHoldAttackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x1821670a0

void Characters_BaseHoldAttackSpecial__SetInput
               (Characters_BaseHoldAttackSpecial_o *__this,bool key,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial_c *pCVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = (__this->fields).IsActive;
  if (key) {
    if (bVar2 == false) {
      bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
      if ((bVar2) && ((__this->fields)._keyIsReset != false)) {
        pCVar1 = __this->klass;
        (__this->fields).IsActive = true;
        fVar3 = (*(pCVar1->vtable)._14_get_ActiveTime.methodPtr)
                          (__this,(pCVar1->vtable)._14_get_ActiveTime.method);
        pCVar1 = __this->klass;
        (__this->fields)._activeTimeLeft = fVar3;
        (*(pCVar1->vtable)._9_Activate.methodPtr)
                  (__this,(System_Type_o *)(pCVar1->vtable)._9_Activate.method,method);
        (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
      }
    }
  }
  else if (bVar2 != false) {
    pCVar1 = __this->klass;
    (__this->fields).IsActive = false;
    (*(pCVar1->vtable)._10_Deactivate.methodPtr)(__this,(pCVar1->vtable)._10_Deactivate.method);
    (__this->fields)._keyIsReset = true;
    return;
  }
  (__this->fields)._keyIsReset = !key;
  return;
}


// Characters.BaseHoldAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseHoldAttackSpecial__CanUse (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x182167090

bool Characters_BaseHoldAttackSpecial__CanUse(Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseHoldAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseHoldAttackSpecial__Deactivate (Characters_BaseHoldAttackSpecial_o* __this, const MethodInfo* method);
// 0x182166e10

void Characters_BaseHoldAttackSpecial__Deactivate
               (Characters_BaseHoldAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


