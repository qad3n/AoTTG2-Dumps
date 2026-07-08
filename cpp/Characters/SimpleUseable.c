// Type: Characters.SimpleUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/SimpleUseable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/BaseUseable/SimpleUseable.cs  [CHANGED since prior version]
// --------------------------------

// Characters.SimpleUseable$$.ctor
// il2cpp: void Characters_SimpleUseable___ctor (Characters_SimpleUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3f9c9f0

void Characters_SimpleUseable___ctor
               (Characters_SimpleUseable_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.SimpleUseable$$ReadInput
// il2cpp: void Characters_SimpleUseable__ReadInput (Characters_SimpleUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x3f9ca40

void Characters_SimpleUseable__ReadInput
               (Characters_SimpleUseable_o *__this,Settings_KeybindSetting_o *keybind,
               MethodInfo *method)

{
  Characters_SimpleUseable_c *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  uint uVar2;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    uVar2 = Settings_KeybindSetting__GetKeyDown(keybind,0,(MethodInfo *)0x0);
    pCVar1 = __this->klass;
    vtable_dispatch = (pCVar1->vtable)._12_SetInput.methodPtr;
    (*vtable_dispatch)
              (__this,(ulong)(uVar2 & 0xff),(pCVar1->vtable)._12_SetInput.method,pCVar1,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.SimpleUseable$$SetInput
// il2cpp: void Characters_SimpleUseable__SetInput (Characters_SimpleUseable_o* __this, bool key, const MethodInfo* method);
// 0x3f9ca80

void Characters_SimpleUseable__SetInput
               (Characters_SimpleUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  undefined8 extraout_RDX;
  
  if ((char)key != '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                      (__this,(__this->klass->vtable)._6_CanUse.method);
    if (cVar1 != '\0') {
      (*(__this->klass->vtable)._9_Activate.methodPtr)
                (__this,(__this->klass->vtable)._9_Activate.method);
      vtable_dispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,vtable_dispatch);
      return;
    }
  }
  return;
}


