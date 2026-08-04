// Type: Characters.BaseEmoteSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseEmoteSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// --------------------------------

// Characters.BaseEmoteSpecial$$get_GroundedOnly
// il2cpp: bool Characters_BaseEmoteSpecial__get_GroundedOnly (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x42f2ae0

bool_conflict
Characters_BaseEmoteSpecial__get_GroundedOnly(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Characters.BaseEmoteSpecial$$.ctor
// il2cpp: void Characters_BaseEmoteSpecial___ctor (Characters_BaseEmoteSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42f2af0

void Characters_BaseEmoteSpecial___ctor
               (Characters_BaseEmoteSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (g_data_057aded0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057aded0 = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_Human;
  if (owner != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      (__this->fields)._human = (Characters_Human_o *)owner;
      if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
         ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto label_042f2b7b;
    }
    il2cpp_runtime_helper_022b2fd0(owner);
  }
  (__this->fields)._human = (Characters_Human_o *)owner;
label_042f2b7b:
  il2cpp_runtime_helper_022b4080(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseEmoteSpecial$$CanUse
// il2cpp: bool Characters_BaseEmoteSpecial__CanUse (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x42f2ba0

bool_conflict Characters_BaseEmoteSpecial__CanUse(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  char cVar3;
  bool_conflict bVar4;
  Characters_Human_o *pCVar5;
  
  bVar4 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return 0;
  }
  cVar3 = (*(__this->klass->vtable)._17_get_GroundedOnly.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_GroundedOnly.method);
  pCVar5 = (__this->fields)._human;
  if (cVar3 == '\0') {
    if (pCVar5 != (Characters_Human_o *)0x0) goto Characters_Human__CanEmote;
  }
  else if (pCVar5 != (Characters_Human_o *)0x0) {
    if (*(char *)((long)&(pCVar5->fields).Animation + 4) == '\0') {
      return 0;
    }
Characters_Human__CanEmote:
    if ((((*(char *)&(pCVar5->fields).FeedVictimName == '\0') &&
         (uVar1 = (pCVar5->fields).FinishSetup, uVar1 != 7)) &&
        (*(int *)((long)&(pCVar5->fields).Weapon + 4) != 1)) &&
       ((9 < uVar1 || ((0x308U >> (uVar1 & 0x1f) & 1) == 0)))) {
      return CONCAT31((int3)(uVar1 >> 8),
                      uVar1 != 0xf && *(char *)((long)&(pCVar5->fields)._mountedVelocity.fields.x + 2) != '\0'
                     );
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = (pCVar5->fields).RichTextName;
  if (pSVar2 == (System_String_o *)0x0) {
    bVar4 = il2cpp_runtime_helper_022b2c90();
    return bVar4;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),*(int *)&pSVar2[0xe].monitor == 8);
}


// Characters.BaseEmoteSpecial$$InSpecial
// il2cpp: bool Characters_BaseEmoteSpecial__InSpecial (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x42f2bf0

bool_conflict Characters_BaseEmoteSpecial__InSpecial(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),(pCVar1->fields).FinishSetup == 8);
  }
  bVar2 = il2cpp_runtime_helper_022b2c90();
  return bVar2;
}


