// Type: Controllers.WallColossalAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/WallColossalAIController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.WallColossalAIController$$get__scriptedAI
// il2cpp: bool Controllers_WallColossalAIController__get__scriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x5baf8d0

bool Controllers_WallColossalAIController__get__scriptedAI
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  return true;
}


// Controllers.WallColossalAIController$$get__stationaryAI
// il2cpp: bool Controllers_WallColossalAIController__get__stationaryAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x5baf8e0

bool Controllers_WallColossalAIController__get__stationaryAI
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  return true;
}


// Controllers.WallColossalAIController$$UpdateScriptedAI
// il2cpp: void Controllers_WallColossalAIController__UpdateScriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x5baf8f0

void Controllers_WallColossalAIController__UpdateScriptedAI
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075474b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_075474b9 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
      if (1 < *(int *)&(*(uint64_t *)((char *)pCVar2 + 0x320)) - 1U) {
        fVar4 = (__this->fields).WallAttackCooldownLeft;
        fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar4 = fVar4 - fVar3;
        (__this->fields).WallAttackCooldownLeft = fVar4;
        if ((fVar4 <= 0.0) && (*(int *)&(*(uint64_t *)((char *)pCVar2 + 0x320)) == 0)) {
          Controllers_WallColossalAIController__WallAttack(__this,method);
          return;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.WallColossalAIController$$Init
// il2cpp: void Controllers_WallColossalAIController__Init (Controllers_WallColossalAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x5bafb00

void Controllers_WallColossalAIController__Init
               (Controllers_WallColossalAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075474ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttackCooldown");
    Il2CppMethodInitialized_075474ba = '\x01';
  }
  Controllers_BaseTitanAIController__Init
            ((Controllers_BaseTitanAIController_o *)__this,data,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                       (data,"WallAttackCooldown",(data->klass->vtable)._7_get_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      fVar2 = (*(pSVar1->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar1,(pSVar1->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).WallAttackCooldown = fVar2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.WallColossalAIController$$WallAttack
// il2cpp: void Controllers_WallColossalAIController__WallAttack (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x5baf9b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bafa8c: jmp 0x5bafab2
// asm:   0x5bafa93: jmp 0x5bafab2

void Controllers_WallColossalAIController__WallAttack
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Characters_WallColossalShifter_o *pCVar4;
  Characters_WallColossalShifter_c *pCVar5;
  Characters_BaseTitan_o *pCVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o **ppSVar8;
  System_String_o *pSVar9;
  Characters_WallColossalShifter_o *__this_00;
  System_Collections_Generic_List_string__o *items;
  
  if (Il2CppMethodInitialized_075474bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_RandomGen_ChooseRandom_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_075474bb = '\x01';
  }
  pCVar4 = (Characters_WallColossalShifter_o *)(__this->fields)._titan;
  if (pCVar4 == (Characters_WallColossalShifter_o *)0x0) goto label_05bafafa;
  pCVar5 = pCVar4->klass;
  bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
  if ((pCVar5->_2).typeHierarchyDepth < bVar1) {
    __this_00 = (Characters_WallColossalShifter_o *)0x0;
    bVar7 = (*(pCVar5->vtable)._151_CanAttack.methodPtr)(pCVar4,(pCVar5->vtable)._151_CanAttack.method);
  }
  else {
    __this_00 = (Characters_WallColossalShifter_o *)0x0;
    if ((pCVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_WallColossalShifter
       ) {
      __this_00 = pCVar4;
    }
    bVar7 = (*(pCVar5->vtable)._151_CanAttack.methodPtr)(pCVar4,(pCVar5->vtable)._151_CanAttack.method);
  }
  if (!bVar7) {
    return;
  }
  if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto label_05bafafa;
  items = (__this->fields).WallAttacks;
  iVar2 = (__this_00->fields)._leftHandState;
  if (iVar2 == 0) {
    if (1 < (uint)(__this_00->fields)._rightHandState) {
label_05bafa9f:
      ppSVar8 = &(__this->fields).LeftHandedAttacks;
label_05bafaaf:
      items = *ppSVar8;
    }
  }
  else {
    iVar3 = (__this_00->fields)._rightHandState;
    if (iVar3 == 0) {
      if (iVar2 != 1) {
label_05bafaa8:
        ppSVar8 = &(__this->fields).RightHandedAttacks;
        goto label_05bafaaf;
      }
    }
    else {
      if ((iVar2 != 1) && (iVar3 != 1)) {
        Characters_WallColossalShifter__SteamAttack(__this_00,(MethodInfo *)0x0);
        goto label_05bafae0;
      }
      if (iVar2 != 1) goto label_05bafaa8;
      if (iVar3 != 1) goto label_05bafa9f;
    }
  }
  pSVar9 = Utility_RandomGen__ChooseRandom_object_
                     ((System_Collections_Generic_List_T__o *)items,
                      (MethodInfo_365F3C0 *)MethodInfo_Utility_RandomGen_ChooseRandom_string);
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 != (Characters_BaseTitan_o *)0x0) {
    (*(pCVar6->klass->vtable)._150_Attack.methodPtr)(pCVar6,pSVar9,(pCVar6->klass->vtable)._150_Attack.method)
    ;
label_05bafae0:
    (__this->fields).WallAttackCooldownLeft = (__this->fields).WallAttackCooldown;
    return;
  }
label_05bafafa:
  ThrowNullReferenceException();
}


// Controllers.WallColossalAIController$$.ctor
// il2cpp: void Controllers_WallColossalAIController___ctor (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x5bafb90

void Controllers_WallColossalAIController___ctor
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  
  if (Il2CppMethodInitialized_075474bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1R");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2R");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1L");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2L");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSweep");
    Il2CppMethodInitialized_075474bc = '\x01';
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "AttackSweep";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pSVar5 = "AttackWallSlap1L";
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar6->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pSVar5 = "AttackWallSlap1R";
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar6->fields)._items;
        if (pSVar3 != (System_String_array *)0x0) {
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          pSVar5 = "AttackWallSlap2L";
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar6->fields)._items;
          if (pSVar3 != (System_String_array *)0x0) {
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            pSVar5 = "AttackWallSlap2R";
            pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar6->fields)._items;
            if (pSVar3 != (System_String_array *)0x0) {
              uVar2 = (pSVar6->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (pSVar6->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pSVar5;
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                           (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              }
              (__this->fields).WallAttacks = pSVar6;
              Il2CppCodeGenWriteBarrier(&(__this->fields).WallAttacks);
              pSVar6 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pSVar6,
                         (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
              pSVar5 = "AttackWallSlap1L";
              pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar6->fields)._items;
                if (pSVar3 != (System_String_array *)0x0) {
                  uVar2 = (pSVar6->fields)._size;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    (pSVar6->fields)._size = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = pSVar5;
                    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                               (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                  }
                  pSVar5 = "AttackWallSlap2L";
                  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
                  piVar1 = &(pSVar6->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (pSVar6->fields)._items;
                  if (pSVar3 != (System_String_array *)0x0) {
                    uVar2 = (pSVar6->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (pSVar6->fields)._size = uVar2 + 1;
                      pSVar3->m_Items[(int)uVar2] = pSVar5;
                      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                    }
                    (__this->fields).LeftHandedAttacks = pSVar6;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).LeftHandedAttacks);
                    pSVar6 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_List_object__o *)pSVar6,
                               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                    pSVar5 = "AttackSweep";
                    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
                    if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
                      piVar1 = &(pSVar6->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar3 = (pSVar6->fields)._items;
                      if (pSVar3 != (System_String_array *)0x0) {
                        uVar2 = (pSVar6->fields)._size;
                        if (uVar2 < (uint)pSVar3->max_length) {
                          (pSVar6->fields)._size = uVar2 + 1;
                          pSVar3->m_Items[(int)uVar2] = pSVar5;
                          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar6,
                                     (Il2CppObject *)pSVar5,
                                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                        }
                        pSVar5 = "AttackWallSlap1R";
                        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
                        piVar1 = &(pSVar6->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar3 = (pSVar6->fields)._items;
                        if (pSVar3 != (System_String_array *)0x0) {
                          uVar2 = (pSVar6->fields)._size;
                          if (uVar2 < (uint)pSVar3->max_length) {
                            (pSVar6->fields)._size = uVar2 + 1;
                            pSVar3->m_Items[(int)uVar2] = pSVar5;
                            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar6,
                                       (Il2CppObject *)pSVar5,
                                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                          }
                          pSVar5 = "AttackWallSlap2R";
                          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
                          piVar1 = &(pSVar6->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar3 = (pSVar6->fields)._items;
                          if (pSVar3 != (System_String_array *)0x0) {
                            uVar2 = (pSVar6->fields)._size;
                            if (uVar2 < (uint)pSVar3->max_length) {
                              (pSVar6->fields)._size = uVar2 + 1;
                              pSVar3->m_Items[(int)uVar2] = pSVar5;
                              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar6,
                                         (Il2CppObject *)pSVar5,
                                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                            }
                            (__this->fields).RightHandedAttacks = pSVar6;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).RightHandedAttacks);
                            (__this->fields).WallAttackCooldownLeft = 5.0;
                            (__this->fields).WallAttackCooldown = 5.0;
                            if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor ==
                                0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
                            }
                            Controllers_BaseTitanAIController___ctor
                                      ((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


