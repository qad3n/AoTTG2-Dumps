// Type: Controllers.WallColossalAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/WallColossalAIController.cs
// Prior source: NEW in this update
// --------------------------------

// Controllers.WallColossalAIController$$get__scriptedAI
// il2cpp: bool Controllers_WallColossalAIController__get__scriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x3f90380

bool_conflict
Controllers_WallColossalAIController__get__scriptedAI
          (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Controllers.WallColossalAIController$$get__stationaryAI
// il2cpp: bool Controllers_WallColossalAIController__get__stationaryAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x3f90390

bool_conflict
Controllers_WallColossalAIController__get__stationaryAI
          (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Controllers.WallColossalAIController$$UpdateScriptedAI
// il2cpp: void Controllers_WallColossalAIController__UpdateScriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x3f903a0

void Controllers_WallColossalAIController__UpdateScriptedAI
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_05703fa8 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703fa8 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter)) {
      if (1 < (int)pCVar2[1].fields._disableKinematicTimeLeft - 1U) {
        fVar4 = *(float *)&(__this->fields).LeftHandedAttacks;
        fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar4 = fVar4 - fVar3;
        *(float *)&(__this->fields).LeftHandedAttacks = fVar4;
        if ((fVar4 <= 0.0) && (pCVar2[1].fields._disableKinematicTimeLeft == 0.0)) {
          Controllers_WallColossalAIController__WallAttack(__this,method);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.WallColossalAIController$$Init
// il2cpp: void Controllers_WallColossalAIController__Init (Controllers_WallColossalAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x3f90590

void Controllers_WallColossalAIController__Init
               (Controllers_WallColossalAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  long *plVar1;
  undefined4 uVar2;
  
  if (DAT_05703fa9 == '\0') {
    il2cpp_init_method_metadata(&"WallAttackCooldown");
    DAT_05703fa9 = '\x01';
  }
  Controllers_BaseTitanAIController__Init
            ((Controllers_BaseTitanAIController_o *)__this,data,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar1 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"WallAttackCooldown",(data->klass->vtable)._7_get_Item.method);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x388))(plVar1,*(undefined8 *)(*plVar1 + 0x390));
      *(undefined4 *)((long)&(__this->fields).LeftHandedAttacks + 4) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.WallColossalAIController$$WallAttack
// il2cpp: void Controllers_WallColossalAIController__WallAttack (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x3f90460

void Controllers_WallColossalAIController__WallAttack
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  Characters_WallColossalShifter_o *pCVar4;
  Characters_BaseTitan_o *pCVar5;
  char cVar6;
  System_Collections_Generic_List_string__o **ppSVar7;
  Il2CppObject *pIVar8;
  Characters_WallColossalShifter_o *__this_00;
  System_Collections_Generic_List_string__o *items;
  bool bVar9;
  
  if (DAT_05703faa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ChooseRandom_String);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_05703faa = '\x01';
  }
  pCVar4 = (Characters_WallColossalShifter_o *)(__this->fields)._titan;
  if (pCVar4 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03f90581;
  bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
  if ((pCVar4->klass->_2).naturalAligment < bVar1) {
    __this_00 = (Characters_WallColossalShifter_o *)0x0;
  }
  else {
    __this_00 = (Characters_WallColossalShifter_o *)0x0;
    if ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter) {
      __this_00 = pCVar4;
    }
  }
  cVar6 = (*(pCVar4->klass->vtable)._129_CanAttack.methodPtr)();
  if (cVar6 == '\0') {
    return;
  }
  if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03f90581;
  items = (System_Collections_Generic_List_string__o *)(__this->fields)._mainCollider;
  fVar2 = (__this_00->fields)._steamTimeLeft;
  fVar3 = (__this_00->fields)._steamBlowAwayTimeLeft;
  if (fVar3 == 0.0) {
    bVar9 = true;
  }
  else {
    bVar9 = fVar3 == 1.4013e-45;
    if ((1 < (uint)fVar2) && (fVar3 != 1.4013e-45)) {
      Characters_WallColossalShifter__SteamAttack(__this_00,(MethodInfo *)0x0);
      goto LAB_03f9056b;
    }
  }
  if ((uint)fVar2 < 2) {
    if (!bVar9) {
      ppSVar7 = (System_Collections_Generic_List_string__o **)&(__this->fields)._setTargetThisFrame;
      goto LAB_03f9053d;
    }
  }
  else {
    ppSVar7 = &(__this->fields).WallAttacks;
LAB_03f9053d:
    items = *ppSVar7;
  }
  pIVar8 = Utility_RandomGen__ChooseRandom<object>
                     ((System_Collections_Generic_List_T__o *)items,MethodInfo_String_ChooseRandom_String);
  pCVar5 = (__this->fields)._titan;
  if (pCVar5 != (Characters_BaseTitan_o *)0x0) {
    (*(pCVar5->klass->vtable)._128_Attack.methodPtr)
              (pCVar5,pIVar8,(pCVar5->klass->vtable)._128_Attack.method);
LAB_03f9056b:
    *(undefined4 *)&(__this->fields).LeftHandedAttacks =
         *(undefined4 *)((long)&(__this->fields).LeftHandedAttacks + 4);
    return;
  }
LAB_03f90581:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.WallColossalAIController$$.ctor
// il2cpp: void Controllers_WallColossalAIController___ctor (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x3f90620

void Controllers_WallColossalAIController___ctor
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_String_array *pSVar4;
  long lVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_05703fab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"AttackWallSlap1R");
    il2cpp_init_method_metadata(&"AttackWallSlap2R");
    il2cpp_init_method_metadata(&"AttackWallSlap1L");
    il2cpp_init_method_metadata(&"AttackWallSlap2L");
    il2cpp_init_method_metadata(&"AttackSweep");
    DAT_05703fab = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar8,MethodInfo_List_1_System_String);
  pSVar6 = "AttackSweep";
  lVar5 = MethodInfo_Void_Add;
  if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar8->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (pSVar8->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar8->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar8,(Il2CppObject *)pSVar6,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar7 = "AttackWallSlap1L";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar8->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar7;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar8,pIVar7,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pSVar6 = "AttackWallSlap1R";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar8->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar8,(Il2CppObject *)pSVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar7 = "AttackWallSlap2L";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar8->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar7;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar8,pIVar7,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar6 = "AttackWallSlap2R";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar8->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (pSVar8->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar8,(Il2CppObject *)pSVar6,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              (__this->fields)._mainCollider = (UnityEngine_CapsuleCollider_o *)pSVar8;
              il2cpp_runtime_glue(&(__this->fields)._mainCollider,pSVar8);
              pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string)
              ;
              System_Collections_Generic_List<object>___ctor(pSVar8,MethodInfo_List_1_System_String);
              pIVar7 = "AttackWallSlap1L";
              lVar5 = MethodInfo_Void_Add;
              if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(pSVar8->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar8->fields)._items;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar8->fields)._size;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    (pSVar8->fields)._size = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = pIVar7;
                    il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar8,pIVar7,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  pIVar7 = "AttackWallSlap2L";
                  lVar5 = MethodInfo_Void_Add;
                  piVar1 = &(pSVar8->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (pSVar8->fields)._items;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    uVar2 = (pSVar8->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (pSVar8->fields)._size = uVar2 + 1;
                      pSVar3->m_Items[(int)uVar2] = pIVar7;
                      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (pSVar8,pIVar7,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    *(System_Collections_Generic_List_object__o **)
                     &(__this->fields)._setTargetThisFrame = pSVar8;
                    il2cpp_runtime_glue(&(__this->fields)._setTargetThisFrame,pSVar8);
                    __this_00 = (System_Collections_Generic_List_string__o *)
                                il2cpp_runtime_glue(TypeInfo_List_string);
                    System_Collections_Generic_List<object>___ctor
                              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
                    pSVar6 = "AttackSweep";
                    lVar5 = MethodInfo_Void_Add;
                    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                      piVar1 = &(__this_00->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar4 = (__this_00->fields)._items;
                      if (pSVar4 != (System_String_array *)0x0) {
                        uVar2 = (__this_00->fields)._size;
                        if (uVar2 < (uint)pSVar4->max_length) {
                          (__this_00->fields)._size = uVar2 + 1;
                          pSVar4->m_Items[(int)uVar2] = pSVar6;
                          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pSVar6,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar6 = "AttackWallSlap1R";
                        lVar5 = MethodInfo_Void_Add;
                        piVar1 = &(__this_00->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar4 = (__this_00->fields)._items;
                        if (pSVar4 != (System_String_array *)0x0) {
                          uVar2 = (__this_00->fields)._size;
                          if (uVar2 < (uint)pSVar4->max_length) {
                            (__this_00->fields)._size = uVar2 + 1;
                            pSVar4->m_Items[(int)uVar2] = pSVar6;
                            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_00,
                                       (Il2CppObject *)pSVar6,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar6 = "AttackWallSlap2R";
                          lVar5 = MethodInfo_Void_Add;
                          piVar1 = &(__this_00->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar4 = (__this_00->fields)._items;
                          if (pSVar4 != (System_String_array *)0x0) {
                            uVar2 = (__this_00->fields)._size;
                            if (uVar2 < (uint)pSVar4->max_length) {
                              (__this_00->fields)._size = uVar2 + 1;
                              pSVar4->m_Items[(int)uVar2] = pSVar6;
                              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pSVar6,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                            }
                            (__this->fields).WallAttacks = __this_00;
                            il2cpp_runtime_glue(&(__this->fields).WallAttacks);
                            (__this->fields).LeftHandedAttacks =
                                 (System_Collections_Generic_List_string__o *)0x40a0000040a00000;
                            Controllers_BaseTitanAIController___ctor
                                      ((Controllers_BaseTitanAIController_o *)__this,
                                       (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


