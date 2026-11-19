// Type: Characters.SimpleUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/SimpleUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/SimpleUseable.cs
// --------------------------------

// Characters.SimpleUseable$$.ctor
// il2cpp: void Characters_SimpleUseable___ctor (Characters_SimpleUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5be19c0

void Characters_SimpleUseable___ctor
               (Characters_SimpleUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseUseable___ctor((Characters_BaseUseable_o *)__this,owner,0.0,-1,(MethodInfo *)0x0);
  return;
}


// Characters.SimpleUseable$$ReadInput
// il2cpp: void Characters_SimpleUseable__ReadInput (Characters_SimpleUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x5be19d0

void Characters_SimpleUseable__ReadInput
               (Characters_SimpleUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  bool bVar1;
  
  if (keybind == (Settings_KeybindSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Settings_KeybindSetting__GetKeyDown(keybind,false,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_SetInput.methodPtr)(__this,bVar1,(__this->klass->vtable)._12_SetInput.method);
  return;
}


// Characters.SimpleUseable$$SetInput
// il2cpp: void Characters_SimpleUseable__SetInput (Characters_SimpleUseable_o* __this, bool key, const MethodInfo* method);
// 0x5be1a10

void Characters_SimpleUseable__SetInput(Characters_SimpleUseable_o *__this,bool key,MethodInfo *method)

{
  bool bVar1;
  undefined7 in_register_00000031;
  
  if ((int)CONCAT71(in_register_00000031,key) != 0) {
    bVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (bVar1) {
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
      return;
    }
  }
  return;
}


