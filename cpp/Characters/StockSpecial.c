// Type: Characters.StockSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/StockSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// --------------------------------

// Characters.StockSpecial$$.ctor
// il2cpp: void Characters_StockSpecial___ctor (Characters_StockSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182177570

void Characters_StockSpecial___ctor
               (Characters_StockSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor
            ((Characters_BaseHoldAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  return;
}


// Characters.StockSpecial$$CanUse
// il2cpp: bool Characters_StockSpecial__CanUse (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x1821774f0

bool Characters_StockSpecial__CanUse(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields)._state == 0;
  }
  ThrowNullReferenceException();
}


// Characters.StockSpecial$$FalseAttack
// il2cpp: void Characters_StockSpecial__FalseAttack (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x182177550

void Characters_StockSpecial__FalseAttack(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_StockSpecial_c *pCVar1;
  
  pCVar1 = __this->klass;
  (__this->fields).IsActive = false;
  (*(pCVar1->vtable)._10_Deactivate.methodPtr)(__this,(pCVar1->vtable)._10_Deactivate.method);
  return;
}


// Characters.StockSpecial$$Activate
// il2cpp: void Characters_StockSpecial__Activate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x1821773e0

void Characters_StockSpecial__Activate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346cfe = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
       )) {
      Characters_Human__StartBladeSwing(__this_00,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Characters_Human);
  }
  ThrowNullReferenceException();
}


// Characters.StockSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_StockSpecial__ActiveFixedUpdate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x182177460

void Characters_StockSpecial__ActiveFixedUpdate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  Characters_StockSpecial_c *pCVar2;
  float fVar3;
  
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    fVar3 = Characters_AnimationHandler__GetNormalizedTime
                      (__this_00,(pCVar1->fields).AttackAnimation,(MethodInfo *)0x0);
    if (0.32 <= fVar3) {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_1821774e2;
      Characters_Human__PauseAnimation(pCVar1,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Grounded != false) {
        pCVar2 = __this->klass;
        (__this->fields).IsActive = false;
        (*(pCVar2->vtable)._10_Deactivate.methodPtr)(__this,(pCVar2->vtable)._10_Deactivate.method);
        return;
      }
      return;
    }
  }
label_1821774e2:
  ThrowNullReferenceException();
}


// Characters.StockSpecial$$Deactivate
// il2cpp: void Characters_StockSpecial__Deactivate (Characters_StockSpecial_o* __this, const MethodInfo* method);
// 0x182177530

void Characters_StockSpecial__Deactivate(Characters_StockSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__ContinueAnimation(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


