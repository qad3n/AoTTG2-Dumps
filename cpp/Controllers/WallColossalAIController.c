// Type: Controllers.WallColossalAIController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/WallColossalAIController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.WallColossalAIController$$get__scriptedAI
// il2cpp: bool Controllers_WallColossalAIController__get__scriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Controllers_WallColossalAIController__get__scriptedAI(Controllers_WallColossalAIController_o* __this, MethodInfo* method)

{
  return true;
}


// Controllers.WallColossalAIController$$get__stationaryAI
// il2cpp: bool Controllers_WallColossalAIController__get__stationaryAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Controllers_WallColossalAIController__get__stationaryAI(Controllers_WallColossalAIController_o* __this, MethodInfo* method)

{
  return true;
}


// Controllers.WallColossalAIController$$UpdateScriptedAI
// il2cpp: void Controllers_WallColossalAIController__UpdateScriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x18211f970

void Controllers_WallColossalAIController__UpdateScriptedAI
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  Characters_WallColossalShifter_o *pCVar3;
  Characters_WallColossalShifter_c *pCVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string__o *items;
  Characters_WallColossalShifter_o *__this_00;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_184346aec = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) goto label_18211fb73;
    if (*(int *)&(*(uint8_t *)((char *)pCVar2 + 0x308)) == 1) {
      return;
    }
    if (*(int *)&(*(uint8_t *)((char *)pCVar2 + 0x308)) == 2) {
      return;
    }
    fVar9 = (__this->fields).WallAttackCooldownLeft;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 - fVar8;
    (__this->fields).WallAttackCooldownLeft = fVar9;
    if (0.0 < fVar9) {
      return;
    }
    if (*(int *)&(*(uint8_t *)((char *)pCVar2 + 0x308)) != 0) {
      return;
    }
    if (Il2CppMethodInitialized_184346aee == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_RandomGen_ChooseRandom_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
      Il2CppMethodInitialized_184346aee = '\x01';
    }
    pCVar3 = (Characters_WallColossalShifter_o *)(__this->fields)._titan;
    if (pCVar3 == (Characters_WallColossalShifter_o *)0x0) goto label_18211fb73;
    bVar7 = true;
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    __this_00 = (Characters_WallColossalShifter_o *)0x0;
    if (bVar5) {
      __this_00 = pCVar3;
    }
    bVar5 = (*(pCVar4->vtable)._151_CanAttack.methodPtr)(pCVar3,(pCVar4->vtable)._151_CanAttack.method);
    if (!bVar5) {
      return;
    }
    if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto label_18211fb73;
    if ((__this_00->fields)._leftHandState == 0) {
      bVar5 = true;
    }
    else {
      bVar5 = (__this_00->fields)._leftHandState == 1;
    }
    if ((__this_00->fields)._rightHandState != 0) {
      bVar7 = (__this_00->fields)._rightHandState == 1;
    }
    if (bVar5) {
      if (bVar7) {
        items = (__this->fields).WallAttacks;
      }
      else {
        items = (__this->fields).LeftHandedAttacks;
      }
    }
    else {
      if (!bVar7) {
        Characters_WallColossalShifter__SteamAttack(__this_00,(MethodInfo *)0x0);
        goto label_18211fb14;
      }
      items = (__this->fields).RightHandedAttacks;
    }
    pSVar6 = Utility_RandomGen__ChooseRandom_object_
                       ((System_Collections_Generic_List_T__o *)items,
                        (MethodInfo_732DC0 *)MethodInfo_Utility_RandomGen_ChooseRandom_string);
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,pSVar6,(pCVar2->klass->vtable)._150_Attack.method);
label_18211fb14:
      (__this->fields).WallAttackCooldownLeft = (__this->fields).WallAttackCooldown;
      return;
    }
  }
label_18211fb73:
  ThrowNullReferenceException();
}


// Controllers.WallColossalAIController$$Init
// il2cpp: void Controllers_WallColossalAIController__Init (Controllers_WallColossalAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x18211f8e0

void Controllers_WallColossalAIController__Init
               (Controllers_WallColossalAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_o *pSVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttackCooldown");
    Il2CppMethodInitialized_184346aed = '\x01';
  }
  Controllers_BaseTitanAIController__Init
            ((Controllers_BaseTitanAIController_o *)__this,data,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"WallAttackCooldown");
    if (pSVar1 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      fVar2 = (float)(*(code *)((Il2CppClass *)pSVar1->klass)->vtable[37].methodPtr)
                               (pSVar1,((Il2CppClass *)pSVar1->klass)->vtable[37].method);
      (__this->fields).WallAttackCooldown = fVar2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.WallColossalAIController$$WallAttack
// il2cpp: void Controllers_WallColossalAIController__WallAttack (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x18211fb80

void Controllers_WallColossalAIController__WallAttack
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_WallColossalShifter_o *pCVar2;
  Characters_WallColossalShifter_c *pCVar3;
  Characters_BaseTitan_o *pCVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string__o *items;
  Characters_WallColossalShifter_o *__this_00;
  bool bVar7;
  
  if (Il2CppMethodInitialized_184346aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_RandomGen_ChooseRandom_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_184346aee = '\x01';
  }
  pCVar2 = (Characters_WallColossalShifter_o *)(__this->fields)._titan;
  if (pCVar2 != (Characters_WallColossalShifter_o *)0x0) {
    bVar7 = true;
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    __this_00 = (Characters_WallColossalShifter_o *)0x0;
    if (bVar5) {
      __this_00 = pCVar2;
    }
    bVar5 = (*(pCVar3->vtable)._151_CanAttack.methodPtr)(pCVar2,(pCVar3->vtable)._151_CanAttack.method);
    if (!bVar5) {
      return;
    }
    if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto label_18211fccd;
    if ((__this_00->fields)._leftHandState == 0) {
      bVar5 = true;
    }
    else {
      bVar5 = (__this_00->fields)._leftHandState == 1;
    }
    if ((__this_00->fields)._rightHandState != 0) {
      bVar7 = (__this_00->fields)._rightHandState == 1;
    }
    if (bVar5) {
      if (bVar7) {
        items = (__this->fields).WallAttacks;
      }
      else {
        items = (__this->fields).LeftHandedAttacks;
      }
    }
    else {
      if (!bVar7) {
        Characters_WallColossalShifter__SteamAttack(__this_00,(MethodInfo *)0x0);
        goto label_18211fc6e;
      }
      items = (__this->fields).RightHandedAttacks;
    }
    pSVar6 = Utility_RandomGen__ChooseRandom_object_
                       ((System_Collections_Generic_List_T__o *)items,
                        (MethodInfo_732DC0 *)MethodInfo_Utility_RandomGen_ChooseRandom_string);
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
      (*(pCVar4->klass->vtable)._150_Attack.methodPtr)
                (pCVar4,pSVar6,(pCVar4->klass->vtable)._150_Attack.method);
label_18211fc6e:
      (__this->fields).WallAttackCooldownLeft = (__this->fields).WallAttackCooldown;
      return;
    }
  }
label_18211fccd:
  ThrowNullReferenceException();
}


// Controllers.WallColossalAIController$$.ctor
// il2cpp: void Controllers_WallColossalAIController___ctor (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x18211fce0

void Controllers_WallColossalAIController___ctor
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  
  if (Il2CppMethodInitialized_184346aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1R");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2R");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1L");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2L");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSweep");
    Il2CppMethodInitialized_184346aef = '\x01';
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar4 = "AttackSweep";
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap1L";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap1R";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap2L";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap2R";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    (__this->fields).WallAttacks = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).WallAttacks,pSVar6);
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap1L";
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_182120241;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap2L";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    (__this->fields).LeftHandedAttacks = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).LeftHandedAttacks,pSVar6);
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackSweep";
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_182120241;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap1R";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_182120241;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_182120247;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "AttackWallSlap2R";
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_182120247:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      (__this->fields).RightHandedAttacks = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).RightHandedAttacks,pSVar6);
      (__this->fields).WallAttackCooldownLeft = 5.0;
      (__this->fields).WallAttackCooldown = 5.0;
      if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
      }
      Controllers_BaseTitanAIController___ctor
                ((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
label_182120241:
  ThrowNullReferenceException();
}


