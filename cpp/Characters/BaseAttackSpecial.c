// Type: Characters.BaseAttackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseAttackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// --------------------------------

// Characters.BaseAttackSpecial$$.ctor
// il2cpp: void Characters_BaseAttackSpecial___ctor (Characters_BaseAttackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42f29a0

void Characters_BaseAttackSpecial___ctor
               (Characters_BaseAttackSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (g_data_057adecf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adecf = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_Human;
  if (owner != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      (__this->fields)._human = (Characters_Human_o *)owner;
      if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
         ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto label_042f2a2b;
    }
    il2cpp_runtime_helper_022b2fd0(owner);
  }
  (__this->fields)._human = (Characters_Human_o *)owner;
label_042f2a2b:
  il2cpp_runtime_helper_022b4080(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseAttackSpecial$$CanUse
// il2cpp: bool Characters_BaseAttackSpecial__CanUse (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2a50

bool_conflict Characters_BaseAttackSpecial__CanUse(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  undefined8 uVar6;
  Characters_Human_o *pCVar7;
  
  bVar5 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  pCVar7 = (__this->fields)._human;
  if (pCVar7 != (Characters_Human_o *)0x0) {
    if (g_data_057ade2f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon,0);
      g_data_057ade2f = '\x01';
    }
    pSVar2 = (pCVar7->fields).crossfadeCache;
    if (pSVar2 != (System_Object_array *)0x0) {
      pIVar3 = (pSVar2->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (0.0 < *(float *)(pSVar2->m_Items + 4)) {
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),(pCVar7->fields).FinishSetup == 0);
        }
        return 0;
      }
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pCVar7->fields).RichTextName;
  if (pSVar4 != (System_String_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),*(int *)&pSVar4[0xe].monitor == 9);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = (Characters_Human_o *)(pCVar7->fields).RichTextName;
  if (pCVar7 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(pCVar7,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pCVar7->fields).RichTextName;
  if (pSVar4 != (System_String_o *)0x0) {
    if (*(int *)&pSVar4[0xe].monitor != 9) {
      *(undefined1 *)((long)&(pCVar7->fields).m_CancellationTokenSource + 4) = 0;
    }
    return bVar5;
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),1);
}


// Characters.BaseAttackSpecial$$InSpecial
// il2cpp: bool Characters_BaseAttackSpecial__InSpecial (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2a80

bool_conflict
Characters_BaseAttackSpecial__InSpecial(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict extraout_EAX;
  bool_conflict bVar2;
  undefined8 uVar3;
  Characters_Human_o *pCVar4;
  
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar4 >> 8),(pCVar4->fields).FinishSetup == 9);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(pCVar4,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  bVar2 = il2cpp_runtime_helper_022b2c90();
  pSVar1 = (pCVar4->fields).RichTextName;
  if (pSVar1 != (System_String_o *)0x0) {
    if (*(int *)&pSVar1[0xe].monitor != 9) {
      *(undefined1 *)((long)&(pCVar4->fields).m_CancellationTokenSource + 4) = 0;
    }
    return bVar2;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// Characters.BaseAttackSpecial$$Deactivate
// il2cpp: void Characters_BaseAttackSpecial__Deactivate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2aa0

void Characters_BaseAttackSpecial__Deactivate(Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__Idle(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (__this_00->fields).RichTextName;
  if (pSVar1 != (System_String_o *)0x0) {
    if (*(int *)&pSVar1[0xe].monitor != 9) {
      *(undefined1 *)((long)&(__this_00->fields).m_CancellationTokenSource + 4) = 0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseAttackSpecial$$ActiveFixedUpdate
// il2cpp: void Characters_BaseAttackSpecial__ActiveFixedUpdate (Characters_BaseAttackSpecial_o* __this, const MethodInfo* method);
// 0x42f2ac0

void Characters_BaseAttackSpecial__ActiveFixedUpdate
               (Characters_BaseAttackSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).FinishSetup != 9) {
      *(undefined1 *)&(__this->fields).IsActive = 0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


