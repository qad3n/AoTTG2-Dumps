// Type: Characters.ExtendedUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/ExtendedUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs
// --------------------------------

// Characters.ExtendedUseable$$get_ActiveTime
// il2cpp: float Characters_ExtendedUseable__get_ActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x5bbcc30

float Characters_ExtendedUseable__get_ActiveTime(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.ExtendedUseable$$.ctor
// il2cpp: void Characters_ExtendedUseable___ctor (Characters_ExtendedUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5bbcc40

void Characters_ExtendedUseable___ctor
               (Characters_ExtendedUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.ExtendedUseable$$GetActiveTime
// il2cpp: float Characters_ExtendedUseable__GetActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x5bbcc80

float Characters_ExtendedUseable__GetActiveTime(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                    (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
  return fVar1;
}


// Characters.ExtendedUseable$$ReadInput
// il2cpp: void Characters_ExtendedUseable__ReadInput (Characters_ExtendedUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x5bbcca0

void Characters_ExtendedUseable__ReadInput
               (Characters_ExtendedUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  bool bVar1;
  
  if (keybind == (Settings_KeybindSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Settings_KeybindSetting__GetKeyDown(keybind,false,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_SetInput.methodPtr)(__this,bVar1,(__this->klass->vtable)._12_SetInput.method);
  return;
}


// Characters.ExtendedUseable$$SetInput
// il2cpp: void Characters_ExtendedUseable__SetInput (Characters_ExtendedUseable_o* __this, bool key, const MethodInfo* method);
// 0x5bbcce0

void Characters_ExtendedUseable__SetInput(Characters_ExtendedUseable_o *__this,bool key,MethodInfo *method)

{
  bool bVar1;
  undefined7 in_register_00000031;
  float fVar2;
  
  if ((int)CONCAT71(in_register_00000031,key) != 0) {
    bVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if ((bVar1) && ((__this->fields).IsActive == false)) {
      (__this->fields).IsActive = true;
      fVar2 = (*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                        (__this,(__this->klass->vtable)._15_GetActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar2;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
      return;
    }
  }
  return;
}


// Characters.ExtendedUseable$$OnFixedUpdate
// il2cpp: void Characters_ExtendedUseable__OnFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x5bbcd50

void Characters_ExtendedUseable__OnFixedUpdate(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  VirtualInvokeData_6411beea80bb *pVVar1;
  VirtualInvokeData_6411beea80bb *pVVar2;
  float fVar3;
  float fVar4;
  
  if ((__this->fields).IsActive == false) {
    return;
  }
  fVar4 = (__this->fields)._activeTimeLeft;
  fVar3 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 - fVar3;
  (__this->fields)._activeTimeLeft = fVar4;
  if (fVar4 <= 0.0) {
    (__this->fields).IsActive = false;
    pVVar2 = &(__this->klass->vtable)._10_Deactivate;
    pVVar1 = &(__this->klass->vtable)._10_Deactivate;
  }
  else {
    pVVar2 = &(__this->klass->vtable)._16_ActiveFixedUpdate;
    pVVar1 = &(__this->klass->vtable)._16_ActiveFixedUpdate;
  }
  (*pVVar2->methodPtr)(__this,pVVar1->method);
  return;
}


// Characters.ExtendedUseable$$ActiveFixedUpdate
// il2cpp: void Characters_ExtendedUseable__ActiveFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x5bbcdd0

void Characters_ExtendedUseable__ActiveFixedUpdate(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  return;
}


