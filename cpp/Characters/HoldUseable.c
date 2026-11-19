// Type: Characters.HoldUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HoldUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/HoldUseable.cs
// --------------------------------

// Characters.HoldUseable$$.ctor
// il2cpp: void Characters_HoldUseable___ctor (Characters_HoldUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5bbcde0

void Characters_HoldUseable___ctor
               (Characters_HoldUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

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


// Characters.HoldUseable$$OnFixedUpdate
// il2cpp: void Characters_HoldUseable__OnFixedUpdate (Characters_HoldUseable_o* __this, const MethodInfo* method);
// 0x5bbce20

void Characters_HoldUseable__OnFixedUpdate(Characters_HoldUseable_o *__this,MethodInfo *method)

{
  if ((__this->fields).IsActive == false) {
    return;
  }
  (*(__this->klass->vtable)._16_ActiveFixedUpdate.methodPtr)
            (__this,(__this->klass->vtable)._16_ActiveFixedUpdate.method);
  return;
}


// Characters.HoldUseable$$SetInput
// il2cpp: void Characters_HoldUseable__SetInput (Characters_HoldUseable_o* __this, bool key, const MethodInfo* method);
// 0x5bbce40

void Characters_HoldUseable__SetInput(Characters_HoldUseable_o *__this,bool key,MethodInfo *method)

{
  VirtualInvokeData_6411beea80bb *pVVar1;
  bool bVar2;
  VirtualInvokeData_6411beea80bb *pVVar3;
  undefined7 in_register_00000031;
  float fVar4;
  
  bVar2 = (__this->fields).IsActive;
  if ((int)CONCAT71(in_register_00000031,key) == 0) {
    if (bVar2 != false) {
      (__this->fields).IsActive = false;
      pVVar3 = &(__this->klass->vtable)._10_Deactivate;
      pVVar1 = &(__this->klass->vtable)._10_Deactivate;
label_05bbcec0:
      (*pVVar3->methodPtr)(__this,pVVar1->method);
      return;
    }
  }
  else if (bVar2 == false) {
    bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (bVar2) {
      (__this->fields).IsActive = true;
      fVar4 = (*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                        (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar4;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      pVVar3 = &(__this->klass->vtable)._8_OnUse;
      pVVar1 = &(__this->klass->vtable)._8_OnUse;
      goto label_05bbcec0;
    }
  }
  return;
}


// Characters.HoldUseable$$ReadInput
// il2cpp: void Characters_HoldUseable__ReadInput (Characters_HoldUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x5bbced0

void Characters_HoldUseable__ReadInput
               (Characters_HoldUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  bool bVar1;
  
  if (keybind == (Settings_KeybindSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Settings_KeybindSetting__GetKey(keybind,false,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_SetInput.methodPtr)(__this,bVar1,(__this->klass->vtable)._12_SetInput.method);
  return;
}


