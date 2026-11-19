// Type: Characters.BaseAttackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseAttackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// --------------------------------

// Characters.BaseAttackSpecial$$.ctor
// il2cpp: void Characters_BaseAttackSpecial___ctor (Characters_BaseAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c08c40

void Characters_BaseAttackSpecial___ctor
               (Characters_BaseAttackSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_c *pCVar2;
  
  if (Il2CppMethodInitialized_075476ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476ac = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  pCVar2 = TypeInfo_Characters_Human;
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    (__this->fields)._human = (Characters_Human_o *)0x0;
label_05c08ccf:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
    return;
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 <= (owner->klass->_2).typeHierarchyDepth) &&
     ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
    (__this->fields)._human = (Characters_Human_o *)owner;
    if ((bVar1 <= (owner->klass->_2).typeHierarchyDepth) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pCVar2)) goto label_05c08ccf;
  }
  il2cpp_codegen_raise_invalid_cast_exception(owner);
}


// Characters.BaseAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseAttackSpecial__CanUse (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c08cf0

bool Characters_BaseAttackSpecial__CanUse(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_Human__CanBladeAttack(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseAttackSpecial$$InSpecial
// il2cpp: bool Characters_BaseAttackSpecial__InSpecial (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c08d20

bool Characters_BaseAttackSpecial__InSpecial(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._state == 9;
}


// Characters.BaseAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseAttackSpecial__Deactivate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c08d40

void Characters_BaseAttackSpecial__Deactivate(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
  return;
}


// Characters.BaseAttackSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BaseAttackSpecial__ActiveFixedUpdate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x5c08d60

void Characters_BaseAttackSpecial__ActiveFixedUpdate
               (Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields)._state != 9) {
    (__this->fields).IsActive = false;
  }
  return;
}


