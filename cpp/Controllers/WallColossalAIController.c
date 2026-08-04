// Type: Controllers.WallColossalAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/WallColossalAIController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.WallColossalAIController$$get__scriptedAI
// il2cpp: bool Controllers_WallColossalAIController__get__scriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x429c920

bool_conflict
Controllers_WallColossalAIController__get__scriptedAI
          (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Controllers.WallColossalAIController$$get__stationaryAI
// il2cpp: bool Controllers_WallColossalAIController__get__stationaryAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x429c930

bool_conflict
Controllers_WallColossalAIController__get__stationaryAI
          (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Controllers.WallColossalAIController$$UpdateScriptedAI
// il2cpp: void Controllers_WallColossalAIController__UpdateScriptedAI (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x429c940

void Controllers_WallColossalAIController__UpdateScriptedAI
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  byte bVar3;
  uint uVar4;
  Characters_BaseTitan_o *pCVar5;
  Il2CppArrayBounds *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  long lVar8;
  char cVar9;
  System_Collections_Generic_List_string__o **ppSVar10;
  Il2CppObject *pIVar11;
  long *plVar12;
  System_Object_array *pSVar13;
  System_Collections_Generic_List_object__o *__this_00;
  Characters_BaseTitanComponentCache_o *__this_01;
  Characters_WallColossalShifter_o *pCVar14;
  Il2CppClass **ppIVar15;
  Characters_WallColossalShifter_o *__this_02;
  System_Collections_Generic_List_string__o *items;
  bool bVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  
  ppIVar15 = (Il2CppClass **)__this;
  if (g_data_057add15 == '\0') {
    ppIVar15 = &TypeInfo_WallColossalShifter;
    il2cpp_runtime_helper_023445d0();
    g_data_057add15 = '\x01';
  }
  pCVar5 = (__this->fields)._titan;
  if (pCVar5 != (Characters_BaseTitan_o *)0x0) {
    bVar3 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
    if ((bVar3 <= (pCVar5->klass->_2).naturalAligment) &&
       ((pCVar5->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_WallColossalShifter)) {
      if (1 < (int)pCVar5[1].fields._disableKinematicTimeLeft - 1U) {
        fVar19 = *(float *)&(__this->fields).LeftHandedAttacks;
        fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar19 = fVar19 - fVar17;
        *(float *)&(__this->fields).LeftHandedAttacks = fVar19;
        if ((fVar19 <= 0.0) && (pCVar5[1].fields._disableKinematicTimeLeft == 0.0)) {
          Controllers_WallColossalAIController__WallAttack(__this,method);
          return;
        }
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ChooseRandom_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    g_data_057add17 = '\x01';
  }
  __this_02 = (Characters_WallColossalShifter_o *)
              (((Controllers_WallColossalAIController_o *)ppIVar15)->fields)._titan;
  if (__this_02 == (Characters_WallColossalShifter_o *)0x0) goto label_0429cb21;
  bVar3 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
  if ((__this_02->klass->_2).naturalAligment < bVar3) {
    pCVar14 = (Characters_WallColossalShifter_o *)0x0;
  }
  else {
    pCVar14 = (Characters_WallColossalShifter_o *)0x0;
    if ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_WallColossalShifter) {
      pCVar14 = __this_02;
    }
  }
  method = (__this_02->klass->vtable)._129_CanAttack.method;
  cVar9 = (*(__this_02->klass->vtable)._129_CanAttack.methodPtr)();
  if (cVar9 == '\0') {
    return;
  }
  if (pCVar14 == (Characters_WallColossalShifter_o *)0x0) goto label_0429cb21;
  items = (System_Collections_Generic_List_string__o *)
          (((Controllers_WallColossalAIController_o *)ppIVar15)->fields)._mainCollider;
  fVar19 = (pCVar14->fields)._steamTimeLeft;
  fVar17 = (pCVar14->fields)._steamBlowAwayTimeLeft;
  if (fVar17 == 0.0) {
    bVar16 = true;
  }
  else {
    bVar16 = fVar17 == 1.4013e-45;
    if ((1 < (uint)fVar19) && (fVar17 != 1.4013e-45)) {
      Characters_WallColossalShifter__SteamAttack(pCVar14,(MethodInfo *)0x0);
      goto label_0429cb0b;
    }
  }
  if ((uint)fVar19 < 2) {
    if (!bVar16) {
      ppSVar10 = (System_Collections_Generic_List_string__o **)
                 &(((Controllers_WallColossalAIController_o *)ppIVar15)->fields)._setTargetThisFrame;
      goto label_0429cadd;
    }
  }
  else {
    ppSVar10 = &(((Controllers_WallColossalAIController_o *)ppIVar15)->fields).WallAttacks;
label_0429cadd:
    items = *ppSVar10;
  }
  method = (MethodInfo *)MethodInfo_String_ChooseRandom_String;
  pIVar11 = Utility_RandomGen__ChooseRandom_object_
                      ((System_Collections_Generic_List_T__o *)items,(MethodInfo_25B5840 *)MethodInfo_String_ChooseRandom_String);
  pCVar5 = (((Controllers_WallColossalAIController_o *)ppIVar15)->fields)._titan;
  __this_02 = (Characters_WallColossalShifter_o *)0x0;
  if (pCVar5 != (Characters_BaseTitan_o *)0x0) {
    (*(pCVar5->klass->vtable)._128_Attack.methodPtr)
              (pCVar5,pIVar11,(pCVar5->klass->vtable)._128_Attack.method);
label_0429cb0b:
    *(undefined4 *)&(((Controllers_WallColossalAIController_o *)ppIVar15)->fields).LeftHandedAttacks =
         *(undefined4 *)
          ((long)&(((Controllers_WallColossalAIController_o *)ppIVar15)->fields).LeftHandedAttacks + 4);
    return;
  }
label_0429cb21:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add16 == '\0') {
    il2cpp_runtime_helper_023445d0(&"WallAttackCooldown");
    g_data_057add16 = '\x01';
  }
  pCVar14 = __this_02;
  Controllers_BaseTitanAIController__Init
            ((Controllers_BaseTitanAIController_o *)__this_02,(SimpleJSONFixed_JSONNode_o *)method,
             (MethodInfo *)0x0);
  if (((Characters_WallColossalShifter_o *)method != (Characters_WallColossalShifter_o *)0x0) &&
     (plVar12 = (long *)(*(((Characters_WallColossalShifter_o *)method)->klass->vtable)._7_unknown.methodPtr)
                                  (method,"WallAttackCooldown",
                                   (((Characters_WallColossalShifter_o *)method)->klass->vtable)._7_unknown.
                                   method), pCVar14 = (Characters_WallColossalShifter_o *)method,
     plVar12 != (long *)0x0)) {
    uVar18 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    *(undefined4 *)((long)&(__this_02->fields).TitanColliderToggler + 4) = uVar18;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057add18 = '\x01';
  }
  pSVar13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar13,MethodInfo_List_1_System_String);
  pIVar11 = "AttackSweep";
  lVar8 = MethodInfo_Void_Add;
  if (pSVar13 != (System_Object_array *)0x0) {
    piVar1 = (int *)((long)&pSVar13->max_length + 4);
    *piVar1 = *piVar1 + 1;
    pIVar6 = pSVar13->bounds;
    if (pIVar6 != (Il2CppArrayBounds *)0x0) {
      uVar4 = (uint)pSVar13->max_length;
      if (uVar4 < (uint)pIVar6[1].lower_bound) {
        *(uint *)&pSVar13->max_length = uVar4 + 1;
        (&pIVar6[2].length)[(int)uVar4] = (il2cpp_array_size_t)pIVar11;
        il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar13,pIVar11,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      pIVar11 = "AttackWallSlap1L";
      lVar8 = MethodInfo_Void_Add;
      piVar1 = (int *)((long)&pSVar13->max_length + 4);
      *piVar1 = *piVar1 + 1;
      pIVar6 = pSVar13->bounds;
      if (pIVar6 != (Il2CppArrayBounds *)0x0) {
        uVar4 = (uint)pSVar13->max_length;
        if (uVar4 < (uint)pIVar6[1].lower_bound) {
          *(uint *)&pSVar13->max_length = uVar4 + 1;
          (&pIVar6[2].length)[(int)uVar4] = (il2cpp_array_size_t)pIVar11;
          il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,pIVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        pIVar11 = "AttackWallSlap1R";
        lVar8 = MethodInfo_Void_Add;
        piVar1 = (int *)((long)&pSVar13->max_length + 4);
        *piVar1 = *piVar1 + 1;
        pIVar6 = pSVar13->bounds;
        if (pIVar6 != (Il2CppArrayBounds *)0x0) {
          uVar4 = (uint)pSVar13->max_length;
          if (uVar4 < (uint)pIVar6[1].lower_bound) {
            *(uint *)&pSVar13->max_length = uVar4 + 1;
            (&pIVar6[2].length)[(int)uVar4] = (il2cpp_array_size_t)pIVar11;
            il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar13,pIVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          pIVar11 = "AttackWallSlap2L";
          lVar8 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar13->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar6 = pSVar13->bounds;
          if (pIVar6 != (Il2CppArrayBounds *)0x0) {
            uVar4 = (uint)pSVar13->max_length;
            if (uVar4 < (uint)pIVar6[1].lower_bound) {
              *(uint *)&pSVar13->max_length = uVar4 + 1;
              (&pIVar6[2].length)[(int)uVar4] = (il2cpp_array_size_t)pIVar11;
              il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar13,pIVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            pIVar11 = "AttackWallSlap2R";
            lVar8 = MethodInfo_Void_Add;
            piVar1 = (int *)((long)&pSVar13->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = pSVar13->bounds;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = (uint)pSVar13->max_length;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                *(uint *)&pSVar13->max_length = uVar4 + 1;
                (&pIVar6[2].length)[(int)uVar4] = (il2cpp_array_size_t)pIVar11;
                il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar13,pIVar11,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              (pCVar14->fields).crossfadeCache = pSVar13;
              il2cpp_runtime_helper_022b4080(&(pCVar14->fields).crossfadeCache,pSVar13);
              __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
              pIVar11 = "AttackWallSlap1L";
              lVar8 = MethodInfo_Void_Add;
              if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar2 = &(__this_00->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar13 = (__this_00->fields)._items;
                if (pSVar13 != (System_Object_array *)0x0) {
                  uVar4 = (__this_00->fields)._size;
                  if (uVar4 < (uint)pSVar13->max_length) {
                    (__this_00->fields)._size = uVar4 + 1;
                    pSVar13->m_Items[(int)uVar4] = pIVar11;
                    il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar4);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_00,pIVar11,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  pIVar11 = "AttackWallSlap2L";
                  lVar8 = MethodInfo_Void_Add;
                  piVar2 = &(__this_00->fields)._version;
                  *piVar2 = *piVar2 + 1;
                  pSVar13 = (__this_00->fields)._items;
                  if (pSVar13 != (System_Object_array *)0x0) {
                    uVar4 = (__this_00->fields)._size;
                    if (uVar4 < (uint)pSVar13->max_length) {
                      (__this_00->fields)._size = uVar4 + 1;
                      pSVar13->m_Items[(int)uVar4] = pIVar11;
                      il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar4);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (__this_00,pIVar11,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    }
                    *(System_Collections_Generic_List_object__o **)&(pCVar14->fields).State = __this_00;
                    il2cpp_runtime_helper_022b4080(&(pCVar14->fields).State,__this_00);
                    __this_01 = (Characters_BaseTitanComponentCache_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
                    pIVar11 = "AttackSweep";
                    lVar8 = MethodInfo_Void_Add;
                    if (__this_01 != (Characters_BaseTitanComponentCache_o *)0x0) {
                      piVar1 = (int *)((long)&(__this_01->fields).Rigidbody + 4);
                      *piVar1 = *piVar1 + 1;
                      pUVar7 = (__this_01->fields).Transform;
                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                        uVar4 = *(uint *)&(__this_01->fields).Rigidbody;
                        if (uVar4 < *(uint *)&pUVar7[1].klass) {
                          *(uint *)&(__this_01->fields).Rigidbody = uVar4 + 1;
                          (&pUVar7[1].monitor)[(int)uVar4] = pIVar11;
                          il2cpp_runtime_helper_022b4080(&pUVar7[1].monitor + (int)uVar4);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_01,pIVar11,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        pIVar11 = "AttackWallSlap1R";
                        lVar8 = MethodInfo_Void_Add;
                        piVar1 = (int *)((long)&(__this_01->fields).Rigidbody + 4);
                        *piVar1 = *piVar1 + 1;
                        pUVar7 = (__this_01->fields).Transform;
                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                          uVar4 = *(uint *)&(__this_01->fields).Rigidbody;
                          if (uVar4 < *(uint *)&pUVar7[1].klass) {
                            *(uint *)&(__this_01->fields).Rigidbody = uVar4 + 1;
                            (&pUVar7[1].monitor)[(int)uVar4] = pIVar11;
                            il2cpp_runtime_helper_022b4080(&pUVar7[1].monitor + (int)uVar4);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_01,pIVar11,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          pIVar11 = "AttackWallSlap2R";
                          lVar8 = MethodInfo_Void_Add;
                          piVar1 = (int *)((long)&(__this_01->fields).Rigidbody + 4);
                          *piVar1 = *piVar1 + 1;
                          pUVar7 = (__this_01->fields).Transform;
                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                            uVar4 = *(uint *)&(__this_01->fields).Rigidbody;
                            if (uVar4 < *(uint *)&pUVar7[1].klass) {
                              *(uint *)&(__this_01->fields).Rigidbody = uVar4 + 1;
                              (&pUVar7[1].monitor)[(int)uVar4] = pIVar11;
                              il2cpp_runtime_helper_022b4080(&pUVar7[1].monitor + (int)uVar4);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_01,pIVar11,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                            }
                            (pCVar14->fields).BaseTitanCache = __this_01;
                            il2cpp_runtime_helper_022b4080(&(pCVar14->fields).BaseTitanCache);
                            (pCVar14->fields).TitanColliderToggler =
                                 (Characters_TitanColliderToggler_o *)0x40a0000040a00000;
                            Controllers_BaseTitanAIController___ctor
                                      ((Controllers_BaseTitanAIController_o *)pCVar14,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add19 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057add19 = '\x01';
  }
  return;
}


// Controllers.WallColossalAIController$$Init
// il2cpp: void Controllers_WallColossalAIController__Init (Controllers_WallColossalAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x429cb30

void Controllers_WallColossalAIController__Init
               (Controllers_WallColossalAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_String_array *pSVar4;
  long lVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  long *plVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_string__o *__this_00;
  Controllers_WallColossalAIController_o *__this_01;
  undefined4 uVar10;
  
  if (g_data_057add16 == '\0') {
    il2cpp_runtime_helper_023445d0(&"WallAttackCooldown");
    g_data_057add16 = '\x01';
  }
  __this_01 = __this;
  Controllers_BaseTitanAIController__Init
            ((Controllers_BaseTitanAIController_o *)__this,data,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar8 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"WallAttackCooldown",(data->klass->vtable)._7_get_Item.method);
    __this_01 = (Controllers_WallColossalAIController_o *)data;
    if (plVar8 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      *(undefined4 *)((long)&(__this->fields).LeftHandedAttacks + 4) = uVar10;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057add18 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_System_String);
  pSVar6 = "AttackSweep";
  lVar5 = MethodInfo_Void_Add;
  if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar9->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (pSVar9->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar9->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar9,(Il2CppObject *)pSVar6,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar7 = "AttackWallSlap1L";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar9->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar9,pIVar7,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pSVar6 = "AttackWallSlap1R";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar9->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar9,(Il2CppObject *)pSVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar7 = "AttackWallSlap2L";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar9->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (pSVar9->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar9->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar7;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar9,pIVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pSVar6 = "AttackWallSlap2R";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar9->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (pSVar9->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (pSVar9->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar9,(Il2CppObject *)pSVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              (__this_01->fields)._mainCollider = (UnityEngine_CapsuleCollider_o *)pSVar9;
              il2cpp_runtime_helper_022b4080(&(__this_01->fields)._mainCollider,pSVar9);
              pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_System_String);
              pIVar7 = "AttackWallSlap1L";
              lVar5 = MethodInfo_Void_Add;
              if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(pSVar9->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar9->fields)._items;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar9->fields)._size;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    (pSVar9->fields)._size = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = pIVar7;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar9,pIVar7,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  pIVar7 = "AttackWallSlap2L";
                  lVar5 = MethodInfo_Void_Add;
                  piVar1 = &(pSVar9->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (pSVar9->fields)._items;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    uVar2 = (pSVar9->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (pSVar9->fields)._size = uVar2 + 1;
                      pSVar3->m_Items[(int)uVar2] = pIVar7;
                      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar9,pIVar7,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    *(System_Collections_Generic_List_object__o **)&(__this_01->fields)._setTargetThisFrame =
                         pSVar9;
                    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setTargetThisFrame,pSVar9);
                    __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                    System_Collections_Generic_List_object____ctor
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
                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pSVar6,
                                     *(MethodInfo_362C220 **)
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
                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_00,
                                       (Il2CppObject *)pSVar6,
                                       *(MethodInfo_362C220 **)
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
                              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pSVar6,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                            }
                            (__this_01->fields).WallAttacks = __this_00;
                            il2cpp_runtime_helper_022b4080(&(__this_01->fields).WallAttacks);
                            (__this_01->fields).LeftHandedAttacks =
                                 (System_Collections_Generic_List_string__o *)0x40a0000040a00000;
                            Controllers_BaseTitanAIController___ctor
                                      ((Controllers_BaseTitanAIController_o *)__this_01,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add19 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057add19 = '\x01';
  }
  return;
}


// Controllers.WallColossalAIController$$WallAttack
// il2cpp: void Controllers_WallColossalAIController__WallAttack (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x429ca00

void Controllers_WallColossalAIController__WallAttack
               (Controllers_WallColossalAIController_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  Characters_BaseTitan_o *pCVar7;
  Il2CppArrayBounds *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  long lVar10;
  char cVar11;
  System_Collections_Generic_List_string__o **ppSVar12;
  Il2CppObject *pIVar13;
  long *plVar14;
  System_Object_array *pSVar15;
  System_Collections_Generic_List_object__o *__this_00;
  Characters_BaseTitanComponentCache_o *__this_01;
  Characters_WallColossalShifter_o *pCVar16;
  Characters_WallColossalShifter_o *__this_02;
  System_Collections_Generic_List_string__o *items;
  bool bVar17;
  undefined4 uVar18;
  
  if (g_data_057add17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ChooseRandom_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    g_data_057add17 = '\x01';
  }
  __this_02 = (Characters_WallColossalShifter_o *)(__this->fields)._titan;
  if (__this_02 == (Characters_WallColossalShifter_o *)0x0) goto label_0429cb21;
  bVar3 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
  if ((__this_02->klass->_2).naturalAligment < bVar3) {
    pCVar16 = (Characters_WallColossalShifter_o *)0x0;
  }
  else {
    pCVar16 = (Characters_WallColossalShifter_o *)0x0;
    if ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_WallColossalShifter) {
      pCVar16 = __this_02;
    }
  }
  method = (__this_02->klass->vtable)._129_CanAttack.method;
  cVar11 = (*(__this_02->klass->vtable)._129_CanAttack.methodPtr)();
  if (cVar11 == '\0') {
    return;
  }
  if (pCVar16 == (Characters_WallColossalShifter_o *)0x0) goto label_0429cb21;
  items = (System_Collections_Generic_List_string__o *)(__this->fields)._mainCollider;
  fVar4 = (pCVar16->fields)._steamTimeLeft;
  fVar5 = (pCVar16->fields)._steamBlowAwayTimeLeft;
  if (fVar5 == 0.0) {
    bVar17 = true;
  }
  else {
    bVar17 = fVar5 == 1.4013e-45;
    if ((1 < (uint)fVar4) && (fVar5 != 1.4013e-45)) {
      Characters_WallColossalShifter__SteamAttack(pCVar16,(MethodInfo *)0x0);
      goto label_0429cb0b;
    }
  }
  if ((uint)fVar4 < 2) {
    if (!bVar17) {
      ppSVar12 = (System_Collections_Generic_List_string__o **)&(__this->fields)._setTargetThisFrame;
      goto label_0429cadd;
    }
  }
  else {
    ppSVar12 = &(__this->fields).WallAttacks;
label_0429cadd:
    items = *ppSVar12;
  }
  method = (MethodInfo *)MethodInfo_String_ChooseRandom_String;
  pIVar13 = Utility_RandomGen__ChooseRandom_object_
                      ((System_Collections_Generic_List_T__o *)items,(MethodInfo_25B5840 *)MethodInfo_String_ChooseRandom_String);
  pCVar7 = (__this->fields)._titan;
  __this_02 = (Characters_WallColossalShifter_o *)0x0;
  if (pCVar7 != (Characters_BaseTitan_o *)0x0) {
    (*(pCVar7->klass->vtable)._128_Attack.methodPtr)
              (pCVar7,pIVar13,(pCVar7->klass->vtable)._128_Attack.method);
label_0429cb0b:
    *(undefined4 *)&(__this->fields).LeftHandedAttacks =
         *(undefined4 *)((long)&(__this->fields).LeftHandedAttacks + 4);
    return;
  }
label_0429cb21:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add16 == '\0') {
    il2cpp_runtime_helper_023445d0(&"WallAttackCooldown");
    g_data_057add16 = '\x01';
  }
  pCVar16 = __this_02;
  Controllers_BaseTitanAIController__Init
            ((Controllers_BaseTitanAIController_o *)__this_02,(SimpleJSONFixed_JSONNode_o *)method,
             (MethodInfo *)0x0);
  if (((Characters_WallColossalShifter_o *)method != (Characters_WallColossalShifter_o *)0x0) &&
     (plVar14 = (long *)(*(((Characters_WallColossalShifter_o *)method)->klass->vtable)._7_unknown.methodPtr)
                                  (method,"WallAttackCooldown",
                                   (((Characters_WallColossalShifter_o *)method)->klass->vtable)._7_unknown.
                                   method), pCVar16 = (Characters_WallColossalShifter_o *)method,
     plVar14 != (long *)0x0)) {
    uVar18 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
    *(undefined4 *)((long)&(__this_02->fields).TitanColliderToggler + 4) = uVar18;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057add18 = '\x01';
  }
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_System_String);
  pIVar13 = "AttackSweep";
  lVar10 = MethodInfo_Void_Add;
  if (pSVar15 != (System_Object_array *)0x0) {
    piVar1 = (int *)((long)&pSVar15->max_length + 4);
    *piVar1 = *piVar1 + 1;
    pIVar8 = pSVar15->bounds;
    if (pIVar8 != (Il2CppArrayBounds *)0x0) {
      uVar6 = (uint)pSVar15->max_length;
      if (uVar6 < (uint)pIVar8[1].lower_bound) {
        *(uint *)&pSVar15->max_length = uVar6 + 1;
        (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pIVar13;
        il2cpp_runtime_helper_022b4080(&pIVar8[2].length + (int)uVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar15,pIVar13,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      pIVar13 = "AttackWallSlap1L";
      lVar10 = MethodInfo_Void_Add;
      piVar1 = (int *)((long)&pSVar15->max_length + 4);
      *piVar1 = *piVar1 + 1;
      pIVar8 = pSVar15->bounds;
      if (pIVar8 != (Il2CppArrayBounds *)0x0) {
        uVar6 = (uint)pSVar15->max_length;
        if (uVar6 < (uint)pIVar8[1].lower_bound) {
          *(uint *)&pSVar15->max_length = uVar6 + 1;
          (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pIVar13;
          il2cpp_runtime_helper_022b4080(&pIVar8[2].length + (int)uVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar15,pIVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        pIVar13 = "AttackWallSlap1R";
        lVar10 = MethodInfo_Void_Add;
        piVar1 = (int *)((long)&pSVar15->max_length + 4);
        *piVar1 = *piVar1 + 1;
        pIVar8 = pSVar15->bounds;
        if (pIVar8 != (Il2CppArrayBounds *)0x0) {
          uVar6 = (uint)pSVar15->max_length;
          if (uVar6 < (uint)pIVar8[1].lower_bound) {
            *(uint *)&pSVar15->max_length = uVar6 + 1;
            (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pIVar13;
            il2cpp_runtime_helper_022b4080(&pIVar8[2].length + (int)uVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar15,pIVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          pIVar13 = "AttackWallSlap2L";
          lVar10 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar15->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar8 = pSVar15->bounds;
          if (pIVar8 != (Il2CppArrayBounds *)0x0) {
            uVar6 = (uint)pSVar15->max_length;
            if (uVar6 < (uint)pIVar8[1].lower_bound) {
              *(uint *)&pSVar15->max_length = uVar6 + 1;
              (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pIVar13;
              il2cpp_runtime_helper_022b4080(&pIVar8[2].length + (int)uVar6);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar15,pIVar13,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            pIVar13 = "AttackWallSlap2R";
            lVar10 = MethodInfo_Void_Add;
            piVar1 = (int *)((long)&pSVar15->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar15->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = (uint)pSVar15->max_length;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                *(uint *)&pSVar15->max_length = uVar6 + 1;
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pIVar13;
                il2cpp_runtime_helper_022b4080(&pIVar8[2].length + (int)uVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar15,pIVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              (pCVar16->fields).crossfadeCache = pSVar15;
              il2cpp_runtime_helper_022b4080(&(pCVar16->fields).crossfadeCache,pSVar15);
              __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
              pIVar13 = "AttackWallSlap1L";
              lVar10 = MethodInfo_Void_Add;
              if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar2 = &(__this_00->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar15 = (__this_00->fields)._items;
                if (pSVar15 != (System_Object_array *)0x0) {
                  uVar6 = (__this_00->fields)._size;
                  if (uVar6 < (uint)pSVar15->max_length) {
                    (__this_00->fields)._size = uVar6 + 1;
                    pSVar15->m_Items[(int)uVar6] = pIVar13;
                    il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_00,pIVar13,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  }
                  pIVar13 = "AttackWallSlap2L";
                  lVar10 = MethodInfo_Void_Add;
                  piVar2 = &(__this_00->fields)._version;
                  *piVar2 = *piVar2 + 1;
                  pSVar15 = (__this_00->fields)._items;
                  if (pSVar15 != (System_Object_array *)0x0) {
                    uVar6 = (__this_00->fields)._size;
                    if (uVar6 < (uint)pSVar15->max_length) {
                      (__this_00->fields)._size = uVar6 + 1;
                      pSVar15->m_Items[(int)uVar6] = pIVar13;
                      il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar6);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (__this_00,pIVar13,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                    *(System_Collections_Generic_List_object__o **)&(pCVar16->fields).State = __this_00;
                    il2cpp_runtime_helper_022b4080(&(pCVar16->fields).State,__this_00);
                    __this_01 = (Characters_BaseTitanComponentCache_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
                    pIVar13 = "AttackSweep";
                    lVar10 = MethodInfo_Void_Add;
                    if (__this_01 != (Characters_BaseTitanComponentCache_o *)0x0) {
                      piVar1 = (int *)((long)&(__this_01->fields).Rigidbody + 4);
                      *piVar1 = *piVar1 + 1;
                      pUVar9 = (__this_01->fields).Transform;
                      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                        uVar6 = *(uint *)&(__this_01->fields).Rigidbody;
                        if (uVar6 < *(uint *)&pUVar9[1].klass) {
                          *(uint *)&(__this_01->fields).Rigidbody = uVar6 + 1;
                          (&pUVar9[1].monitor)[(int)uVar6] = pIVar13;
                          il2cpp_runtime_helper_022b4080(&pUVar9[1].monitor + (int)uVar6);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_01,pIVar13,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        pIVar13 = "AttackWallSlap1R";
                        lVar10 = MethodInfo_Void_Add;
                        piVar1 = (int *)((long)&(__this_01->fields).Rigidbody + 4);
                        *piVar1 = *piVar1 + 1;
                        pUVar9 = (__this_01->fields).Transform;
                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                          uVar6 = *(uint *)&(__this_01->fields).Rigidbody;
                          if (uVar6 < *(uint *)&pUVar9[1].klass) {
                            *(uint *)&(__this_01->fields).Rigidbody = uVar6 + 1;
                            (&pUVar9[1].monitor)[(int)uVar6] = pIVar13;
                            il2cpp_runtime_helper_022b4080(&pUVar9[1].monitor + (int)uVar6);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_01,pIVar13,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                          pIVar13 = "AttackWallSlap2R";
                          lVar10 = MethodInfo_Void_Add;
                          piVar1 = (int *)((long)&(__this_01->fields).Rigidbody + 4);
                          *piVar1 = *piVar1 + 1;
                          pUVar9 = (__this_01->fields).Transform;
                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                            uVar6 = *(uint *)&(__this_01->fields).Rigidbody;
                            if (uVar6 < *(uint *)&pUVar9[1].klass) {
                              *(uint *)&(__this_01->fields).Rigidbody = uVar6 + 1;
                              (&pUVar9[1].monitor)[(int)uVar6] = pIVar13;
                              il2cpp_runtime_helper_022b4080(&pUVar9[1].monitor + (int)uVar6);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_01,pIVar13,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            }
                            (pCVar16->fields).BaseTitanCache = __this_01;
                            il2cpp_runtime_helper_022b4080(&(pCVar16->fields).BaseTitanCache);
                            (pCVar16->fields).TitanColliderToggler =
                                 (Characters_TitanColliderToggler_o *)0x40a0000040a00000;
                            Controllers_BaseTitanAIController___ctor
                                      ((Controllers_BaseTitanAIController_o *)pCVar16,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add19 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057add19 = '\x01';
  }
  return;
}


// Controllers.WallColossalAIController$$.ctor
// il2cpp: void Controllers_WallColossalAIController___ctor (Controllers_WallColossalAIController_o* __this, const MethodInfo* method);
// 0x429cbc0

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
  
  if (g_data_057add18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057add18 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
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
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar8,(Il2CppObject *)pSVar6,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar8,pIVar7,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
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
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar8,(Il2CppObject *)pSVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar8,pIVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar8,(Il2CppObject *)pSVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              (__this->fields)._mainCollider = (UnityEngine_CapsuleCollider_o *)pSVar8;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._mainCollider,pSVar8);
              pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
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
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar8,pIVar7,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar8,pIVar7,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    *(System_Collections_Generic_List_object__o **)&(__this->fields)._setTargetThisFrame =
                         pSVar8;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._setTargetThisFrame,pSVar8);
                    __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                    System_Collections_Generic_List_object____ctor
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
                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pSVar6,
                                     *(MethodInfo_362C220 **)
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
                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_00,
                                       (Il2CppObject *)pSVar6,
                                       *(MethodInfo_362C220 **)
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
                              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pSVar6,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                            }
                            (__this->fields).WallAttacks = __this_00;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).WallAttacks);
                            (__this->fields).LeftHandedAttacks =
                                 (System_Collections_Generic_List_string__o *)0x40a0000040a00000;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add19 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MoveTo");
    g_data_057add19 = '\x01';
  }
  return;
}


