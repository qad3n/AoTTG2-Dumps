// Type: Characters.HoldUseable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HoldUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/HoldUseable.cs
// --------------------------------

// Characters.HoldUseable$$.ctor
// il2cpp: void Characters_HoldUseable___ctor (Characters_HoldUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821177e0

void
Characters_HoldUseable___ctor(Characters_HoldUseable_o* __this, Characters_BaseCharacter_o* owner, MethodInfo* method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.HoldUseable$$OnFixedUpdate
// il2cpp: void Characters_HoldUseable__OnFixedUpdate (Characters_HoldUseable_o* __this, const MethodInfo* method);
// 0x182117830

void Characters_HoldUseable__OnFixedUpdate(Characters_HoldUseable_o *__this,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if ((__this->fields).IsActive != false) {
    (*(__this->klass->vtable)._16_ActiveFixedUpdate.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._16_ActiveFixedUpdate.method,in_R8);
    return;
  }
  return;
}


// Characters.HoldUseable$$SetInput
// il2cpp: void Characters_HoldUseable__SetInput (Characters_HoldUseable_o* __this, bool key, const MethodInfo* method);
// 0x182117890

void Characters_HoldUseable__SetInput(Characters_HoldUseable_o *__this,bool key,MethodInfo *method)

{
  Characters_HoldUseable_c *pCVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = (__this->fields).IsActive;
  if (key) {
    if (bVar2 == false) {
      bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
      if (bVar2) {
        pCVar1 = __this->klass;
        (__this->fields).IsActive = true;
        fVar3 = (*(pCVar1->vtable)._14_get_ActiveTime.methodPtr)
                          (__this,(pCVar1->vtable)._14_get_ActiveTime.method);
        pCVar1 = __this->klass;
        (__this->fields)._activeTimeLeft = fVar3;
        (*(pCVar1->vtable)._9_Activate.methodPtr)
                  (__this,(System_Type_o *)(pCVar1->vtable)._9_Activate.method,method);
        (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
        return;
      }
    }
  }
  else if (bVar2 != false) {
    pCVar1 = __this->klass;
    (__this->fields).IsActive = false;
    (*(pCVar1->vtable)._10_Deactivate.methodPtr)
              (__this,(System_Type_o *)(pCVar1->vtable)._10_Deactivate.method,method);
    return;
  }
  return;
}


// Characters.HoldUseable$$ReadInput
// il2cpp: void Characters_HoldUseable__ReadInput (Characters_HoldUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x182117850

void Characters_HoldUseable__ReadInput
               (Characters_HoldUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  bool bVar1;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    bVar1 = Settings_KeybindSetting__GetKey(keybind,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._12_SetInput.methodPtr)
              (__this,bVar1,(__this->klass->vtable)._12_SetInput.method);
    return;
  }
  ThrowNullReferenceException();
}


