// Type: Characters.BaseAttackSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseAttackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// --------------------------------

// Characters.BaseAttackSpecial$$.ctor
// il2cpp: void Characters_BaseAttackSpecial___ctor (Characters_BaseAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182166e60

void Characters_BaseAttackSpecial___ctor
               (Characters_BaseAttackSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_184346cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346cdc = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
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


// Characters.BaseAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseAttackSpecial__CanUse (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x182166dd0

bool
Characters_BaseAttackSpecial__CanUse(Characters_BaseAttackSpecial_o* __this, MethodInfo* method)

{
  Characters_Human_o *__this_00;
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = Characters_Human__CanBladeAttack(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BaseAttackSpecial$$InSpecial
// il2cpp: bool Characters_BaseAttackSpecial__InSpecial (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x182166e30

bool Characters_BaseAttackSpecial__InSpecial(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields)._state == 9;
  }
  ThrowNullReferenceException();
}


// Characters.BaseAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseAttackSpecial__Deactivate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x182166e10

void
Characters_BaseAttackSpecial__Deactivate(Characters_BaseAttackSpecial_o* __this, MethodInfo* method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseAttackSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BaseAttackSpecial__ActiveFixedUpdate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x182166da0

void Characters_BaseAttackSpecial__ActiveFixedUpdate
               (Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields)._state != 9) {
      (__this->fields).IsActive = false;
    }
    return;
  }
  ThrowNullReferenceException();
}


