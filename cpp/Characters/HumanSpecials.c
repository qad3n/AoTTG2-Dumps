// Type: Characters.HumanSpecials
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSpecials.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSpecials.cs
// --------------------------------

// Characters.HumanSpecials$$GetSpecialNames
// il2cpp: System_Collections_Generic_List_string__o* Characters_HumanSpecials__GetSpecialNames (System_String_o* loadout, bool includeShifters, const MethodInfo* method);
// 0x42e2eb0

System_Collections_Generic_List_string__o *
Characters_HumanSpecials__GetSpecialNames
          (System_String_o *loadout,bool_conflict includeShifters,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  Characters_BaseMovementSync_c *pCVar4;
  char *pcVar5;
  long lVar6;
  void *pvVar7;
  System_Threading_CancellationTokenSource_o *pSVar8;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar9;
  System_String_array *pSVar10;
  System_String_o *item;
  long lVar11;
  int iVar12;
  uint32_t uVar13;
  bool_conflict bVar14;
  Characters_BaseCharacter_o *pCVar15;
  System_Collections_Generic_List_string__o *pSVar16;
  System_Collections_Generic_List_string__o *extraout_RAX;
  Characters_BaseHoldAttackSpecial_o *pCVar17;
  undefined8 uVar18;
  Characters_StockSpecial_o *pCVar19;
  MethodInfo_362B8B0 *pMVar20;
  MethodInfo_362B8B0 *item_00;
  Characters_BaseCharacter_o *__this;
  undefined8 *puVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  char local_34;
  
  if (g_data_057ade6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSpecials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Stock");
    g_data_057ade6d = '\x01';
  }
  pCVar15 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pMVar20 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pCVar15,MethodInfo_List_1_System_String);
  if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = ((TypeInfo_HumanSpecials->fields).MovementSync)->klass;
  item_00 = pMVar20;
  __this = TypeInfo_HumanSpecials;
  if (pCVar4 == (Characters_BaseMovementSync_c *)0x0) goto label_042e3641;
  pcVar5 = (pCVar4->_1).namespaze;
  iVar12 = (int)pcVar5;
  if (pCVar15 == (Characters_BaseCharacter_o *)0x0) {
    if (iVar12 < 1) goto label_042e3068;
label_042e3617:
    if ((__this->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    item_00 = pMVar20;
    if (g_data_057ade6e == '\0') {
      __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
      il2cpp_runtime_helper_023445d0();
      g_data_057ade6e = '\x01';
      item_00 = pMVar20;
    }
  }
  else {
    if (0 < iVar12) {
      uVar22 = 0;
      if (((ulong)pcVar5 & 0xffffffff) != 0) {
        do {
          pMVar20 = (&(pCVar4->_1).byval_arg.data)[uVar22];
          __this = TypeInfo_HumanSpecials;
          if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ade6e == '\0') {
            __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
            il2cpp_runtime_helper_023445d0();
            g_data_057ade6e = '\x01';
          }
          lVar6 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&(pCVar15->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar10 = (System_String_array *)(pCVar15->fields).m_CachedPtr;
          if (pSVar10 == (System_String_array *)0x0) goto label_042e3641;
          uVar3 = *(uint *)&(pCVar15->fields).m_CancellationTokenSource;
          if (uVar3 < (uint)pSVar10->max_length) {
            *(uint *)&(pCVar15->fields).m_CancellationTokenSource = uVar3 + 1;
            __this = (Characters_BaseCharacter_o *)(pSVar10->m_Items + (int)uVar3);
            pSVar10->m_Items[(int)uVar3] = (System_String_o *)pMVar20;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            __this = pCVar15;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pCVar15,(Il2CppObject *)pMVar20,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          uVar22 = uVar22 + 1;
          uVar3 = *(uint *)&(pCVar4->_1).namespaze;
          if ((long)(int)uVar3 <= (long)uVar22) goto label_042e3068;
          item_00 = pMVar20;
        } while (uVar22 < uVar3);
      }
label_042e3612:
      il2cpp_runtime_helper_022b2ca0();
      goto label_042e3617;
    }
label_042e3068:
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo_362B8B0 *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    bVar14 = System_String__op_Equality(loadout,(System_String_o *)pMVar20,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = *(MethodInfo_362B8B0 **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
      bVar14 = System_String__op_Equality(loadout,(System_String_o *)pMVar20,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pvVar7 = ((TypeInfo_HumanSpecials->fields).MovementSync)->monitor;
        item_00 = pMVar20;
        __this = TypeInfo_HumanSpecials;
        if (pvVar7 == (void *)0x0) goto label_042e3641;
        iVar12 = (int)*(ulong *)((long)pvVar7 + 0x18);
        if (pCVar15 == (Characters_BaseCharacter_o *)0x0) goto label_042e3310;
        if (0 < iVar12) {
          uVar22 = 0;
          if ((*(ulong *)((long)pvVar7 + 0x18) & 0xffffffff) != 0) {
            do {
              pMVar20 = *(MethodInfo_362B8B0 **)((long)pvVar7 + uVar22 * 8 + 0x20);
              __this = TypeInfo_HumanSpecials;
              if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ade6e == '\0') {
                __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
                il2cpp_runtime_helper_023445d0();
                g_data_057ade6e = '\x01';
              }
              lVar6 = MethodInfo_Void_Add;
              piVar1 = (int32_t *)((long)&(pCVar15->fields).m_CancellationTokenSource + 4);
              *piVar1 = *piVar1 + 1;
              pSVar10 = (System_String_array *)(pCVar15->fields).m_CachedPtr;
              if (pSVar10 == (System_String_array *)0x0) goto label_042e3641;
              uVar3 = *(uint *)&(pCVar15->fields).m_CancellationTokenSource;
              if (uVar3 < (uint)pSVar10->max_length) {
                *(uint *)&(pCVar15->fields).m_CancellationTokenSource = uVar3 + 1;
                __this = (Characters_BaseCharacter_o *)(pSVar10->m_Items + (int)uVar3);
                pSVar10->m_Items[(int)uVar3] = (System_String_o *)pMVar20;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                __this = pCVar15;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pCVar15,(Il2CppObject *)pMVar20,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              uVar22 = uVar22 + 1;
              if ((long)(int)*(uint *)((long)pvVar7 + 0x18) <= (long)uVar22) goto label_042e3318;
              item_00 = pMVar20;
            } while (uVar22 < *(uint *)((long)pvVar7 + 0x18));
          }
          goto label_042e3612;
        }
      }
label_042e3318:
      local_34 = (char)includeShifters;
      if (local_34 != '\0') {
        if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (((TypeInfo_HumanSpecials->fields).MovementSync)->fields).m_CancellationTokenSource;
        item_00 = pMVar20;
        __this = TypeInfo_HumanSpecials;
        if (pSVar8 == (System_Threading_CancellationTokenSource_o *)0x0) goto label_042e3641;
        pSVar9 = (pSVar8->fields)._registeredCallbacksLists;
        iVar12 = (int)pSVar9;
        if (pCVar15 == (Characters_BaseCharacter_o *)0x0) {
          if (0 < iVar12) goto label_042e3617;
        }
        else if (0 < iVar12) {
          uVar22 = 0;
          if (((ulong)pSVar9 & 0xffffffff) != 0) {
            do {
              pMVar20 = *(MethodInfo_362B8B0 **)(&(pSVar8->fields)._state + uVar22 * 2);
              __this = TypeInfo_HumanSpecials;
              if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ade6e == '\0') {
                __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
                il2cpp_runtime_helper_023445d0();
                g_data_057ade6e = '\x01';
              }
              lVar6 = MethodInfo_Void_Add;
              piVar1 = (int32_t *)((long)&(pCVar15->fields).m_CancellationTokenSource + 4);
              *piVar1 = *piVar1 + 1;
              pSVar10 = (System_String_array *)(pCVar15->fields).m_CachedPtr;
              if (pSVar10 == (System_String_array *)0x0) goto label_042e3641;
              uVar3 = *(uint *)&(pCVar15->fields).m_CancellationTokenSource;
              if (uVar3 < (uint)pSVar10->max_length) {
                *(uint *)&(pCVar15->fields).m_CancellationTokenSource = uVar3 + 1;
                __this = (Characters_BaseCharacter_o *)(pSVar10->m_Items + (int)uVar3);
                pSVar10->m_Items[(int)uVar3] = (System_String_o *)pMVar20;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                __this = pCVar15;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pCVar15,(Il2CppObject *)pMVar20,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              uVar22 = uVar22 + 1;
              uVar3 = *(uint *)&(pSVar8->fields)._registeredCallbacksLists;
              if ((long)(int)uVar3 <= (long)uVar22) goto label_042e3448;
              item_00 = pMVar20;
            } while (uVar22 < uVar3);
          }
          goto label_042e3612;
        }
      }
label_042e3448:
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = *(MethodInfo_362B8B0 **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
      bVar14 = System_String__op_Equality(loadout,(System_String_o *)pMVar20,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
label_042e3520:
        iVar12 = (TypeInfo_HumanSpecials->fields)._stepPhase;
        __this = TypeInfo_HumanSpecials;
joined_r0x042e356d:
        TypeInfo_HumanSpecials = __this;
        item = "None";
        if (iVar12 == 0) {
          il2cpp_runtime_helper_02337ed0();
          item = "None";
        }
        lVar6 = MethodInfo_Void_Add;
        "None" = item;
        if (g_data_057ade6e == '\0') {
          __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
          il2cpp_runtime_helper_023445d0();
          g_data_057ade6e = '\x01';
          lVar6 = MethodInfo_Void_Add;
        }
        item_00 = pMVar20;
        MethodInfo_Void_Add = lVar6;
        if (pCVar15 != (Characters_BaseCharacter_o *)0x0) {
          piVar1 = (int32_t *)((long)&(pCVar15->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar10 = (System_String_array *)(pCVar15->fields).m_CachedPtr;
          if (pSVar10 != (System_String_array *)0x0) {
            uVar3 = *(uint *)&(pCVar15->fields).m_CancellationTokenSource;
            if (uVar3 < (uint)pSVar10->max_length) {
              *(uint *)&(pCVar15->fields).m_CancellationTokenSource = uVar3 + 1;
              pSVar10->m_Items[(int)uVar3] = item;
              il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar3,item);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pCVar15,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            return (System_Collections_Generic_List_string__o *)pCVar15;
          }
        }
      }
      else {
        item_00 = pMVar20;
        __this = TypeInfo_HumanSpecials;
        if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
          item_00 = pMVar20;
        }
        pMVar20 = "Stock";
        lVar6 = MethodInfo_Void_Add;
        "Stock" = pMVar20;
        if (g_data_057ade6e == '\0') {
          __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
          il2cpp_runtime_helper_023445d0();
          g_data_057ade6e = '\x01';
          lVar6 = MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = lVar6;
        if (pCVar15 != (Characters_BaseCharacter_o *)0x0) {
          piVar1 = (int32_t *)((long)&(pCVar15->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar10 = (System_String_array *)(pCVar15->fields).m_CachedPtr;
          if (pSVar10 != (System_String_array *)0x0) {
            uVar3 = *(uint *)&(pCVar15->fields).m_CancellationTokenSource;
            if (uVar3 < (uint)pSVar10->max_length) {
              *(uint *)&(pCVar15->fields).m_CancellationTokenSource = uVar3 + 1;
              pSVar10->m_Items[(int)uVar3] = (System_String_o *)pMVar20;
              il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar3);
              goto label_042e3520;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pCVar15,(Il2CppObject *)pMVar20,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            iVar12 = (TypeInfo_HumanSpecials->fields)._stepPhase;
            __this = TypeInfo_HumanSpecials;
            goto joined_r0x042e356d;
          }
        }
      }
    }
    else {
      if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar6 = (((TypeInfo_HumanSpecials->fields).MovementSync)->fields).m_CachedPtr;
      item_00 = pMVar20;
      __this = TypeInfo_HumanSpecials;
      if (lVar6 != 0) {
        iVar12 = (int)*(ulong *)(lVar6 + 0x18);
        if (pCVar15 == (Characters_BaseCharacter_o *)0x0) {
label_042e3310:
          __this = TypeInfo_HumanSpecials;
          if (0 < iVar12) goto label_042e3617;
        }
        else if (0 < iVar12) {
          uVar22 = 0;
          if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) != 0) {
            do {
              pMVar20 = *(MethodInfo_362B8B0 **)(lVar6 + 0x20 + uVar22 * 8);
              __this = TypeInfo_HumanSpecials;
              if ((TypeInfo_HumanSpecials->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ade6e == '\0') {
                __this = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
                il2cpp_runtime_helper_023445d0();
                g_data_057ade6e = '\x01';
              }
              lVar11 = MethodInfo_Void_Add;
              piVar1 = (int32_t *)((long)&(pCVar15->fields).m_CancellationTokenSource + 4);
              *piVar1 = *piVar1 + 1;
              pSVar10 = (System_String_array *)(pCVar15->fields).m_CachedPtr;
              if (pSVar10 == (System_String_array *)0x0) goto label_042e3641;
              uVar3 = *(uint *)&(pCVar15->fields).m_CancellationTokenSource;
              if (uVar3 < (uint)pSVar10->max_length) {
                *(uint *)&(pCVar15->fields).m_CancellationTokenSource = uVar3 + 1;
                __this = (Characters_BaseCharacter_o *)(pSVar10->m_Items + (int)uVar3);
                pSVar10->m_Items[(int)uVar3] = (System_String_o *)pMVar20;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                __this = pCVar15;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pCVar15,(Il2CppObject *)pMVar20,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              uVar22 = uVar22 + 1;
              if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar22) goto label_042e3318;
              item_00 = pMVar20;
            } while (uVar22 < *(uint *)(lVar6 + 0x18));
          }
          goto label_042e3612;
        }
        goto label_042e3318;
      }
    }
  }
label_042e3641:
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = item_00;
  pCVar15 = __this;
  if (g_data_057ade6e == '\0') {
    pCVar15 = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade6e = '\x01';
  }
  lVar6 = MethodInfo_Void_Add;
  if (__this != (Characters_BaseCharacter_o *)0x0) {
    piVar1 = (int32_t *)((long)&(__this->fields).m_CancellationTokenSource + 4);
    *piVar1 = *piVar1 + 1;
    pSVar10 = (System_String_array *)(__this->fields).m_CachedPtr;
    if (pSVar10 != (System_String_array *)0x0) {
      uVar3 = *(uint *)&(__this->fields).m_CancellationTokenSource;
      if (uVar3 < (uint)pSVar10->max_length) {
        *(uint *)&(__this->fields).m_CancellationTokenSource = uVar3 + 1;
        pSVar10->m_Items[(int)uVar3] = (System_String_o *)item_00;
        pSVar16 = (System_Collections_Generic_List_string__o *)
                  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar3,item_00);
        return pSVar16;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item_00,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeThrowSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CarrySpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ConfuseSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DanceSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DistractSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NoneSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PotatoSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SmellSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SmokeBombSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin1Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin2Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin3Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SupplySpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchbackSpecial);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Armored");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Stock");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ade6f = '\x01';
  }
  uVar13 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pMVar20,(MethodInfo *)0x0);
  if (uVar13 < 0x50d88c80) {
    if (uVar13 < 0x132fe373) {
      if (uVar13 < 0x23f06bf) {
        if (uVar13 != 0x3f0398) {
          if (uVar13 != 0x23f06be) {
            return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
          }
          bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Spin3",(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin3Special);
            pCVar19 = auVar23._0_8_;
            *(undefined8 *)&(pCVar19->fields)._keyIsReset = 0x3f0000003eb33333;
            *(undefined4 *)&pCVar19[1].klass = 3;
            pCVar19[1].fields.MaxUses = 0x41500000;
            Characters_BaseAttackSpecial___ctor
                      ((Characters_BaseAttackSpecial_o *)pCVar19,pCVar15,auVar23._8_8_);
            (pCVar19->fields).Cooldown = 3.5;
            return (System_Collections_Generic_List_string__o *)pCVar19;
          }
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Spin1",(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin1Special);
        uVar18 = 0x3f0000003eb33333;
      }
      else {
        if (uVar13 != 0x33f0851) {
          if (uVar13 == 0xfb12e57) {
            bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Distract",(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
            }
            auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_DistractSpecial);
            *(undefined4 *)(auVar23._0_8_ + 0x48) = 0x43960000;
          }
          else {
            if (uVar13 != 0x132fe372) {
              return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
            }
            bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Potato",(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
            }
            auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_PotatoSpecial);
          }
          goto label_042e407d;
        }
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin2Special);
        uVar18 = 0x3ef5c28f3eb33333;
      }
      pCVar19 = auVar23._0_8_;
      *(undefined8 *)&(pCVar19->fields)._keyIsReset = uVar18;
      *(undefined4 *)&pCVar19[1].klass = 3;
      Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)pCVar19,pCVar15,auVar23._8_8_);
      (pCVar19->fields).Cooldown = 5.0;
      return (System_Collections_Generic_List_string__o *)pCVar19;
    }
    if (uVar13 < 0x27e47193) {
      if (uVar13 == 0x184b43d0) {
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Carry",(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_CarrySpecial);
          pCVar17 = auVar23._0_8_;
          Characters_BaseHoldAttackSpecial___ctor(pCVar17,pCVar15,auVar23._8_8_);
          (pCVar17->fields).Cooldown = 2.0;
          return (System_Collections_Generic_List_string__o *)pCVar17;
        }
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      if (uVar13 != 0x27e47192) {
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      puVar21 = &"Annie";
    }
    else {
      if (uVar13 != 0x2ab69de5) {
        if (uVar13 == 0x304ff7fb) {
          bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"None",(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NoneSpecial);
            Characters_SimpleUseable___ctor((Characters_SimpleUseable_o *)pCVar19,pCVar15,(MethodInfo *)0x0);
            (pCVar19->fields).Cooldown = 0.0;
            return (System_Collections_Generic_List_string__o *)pCVar19;
          }
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        if (uVar13 != 0x50d88c7f) {
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"DownStrike",(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_DownStrikeSpecial);
          pCVar17 = auVar23._0_8_;
          Characters_BaseHoldAttackSpecial___ctor(pCVar17,pCVar15,auVar23._8_8_);
          (pCVar17->fields).Cooldown = 5.0;
          return (System_Collections_Generic_List_string__o *)pCVar17;
        }
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      puVar21 = &"Armored";
    }
  }
  else {
    if (0x9d6edc05 < uVar13) {
      if (0xb7bb7226 < uVar13) {
        if (uVar13 == 0xc7ef102c) {
          bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"AHSSTwinShot",(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AHSSTwinShot);
            Characters_ExtendedUseable___ctor
                      ((Characters_ExtendedUseable_o *)pCVar19,pCVar15,(MethodInfo *)0x0);
            (pCVar19->fields).Cooldown = 1.0;
            return (System_Collections_Generic_List_string__o *)pCVar19;
          }
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        if (uVar13 != 0xca0fab3c) {
          if (uVar13 != 0xdba7f44e) {
            return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
          }
          bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Supply",(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SupplySpecial);
            Characters_SupplySpecial___ctor((Characters_SupplySpecial_o *)pCVar19,pCVar15,(MethodInfo *)0x0);
            return (System_Collections_Generic_List_string__o *)pCVar19;
          }
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Dance",(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
        }
        auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_DanceSpecial);
        *(undefined4 *)(auVar23._0_8_ + 0x48) = 0x43480000;
label_042e407d:
        pCVar19 = auVar23._0_8_;
        Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)pCVar19,pCVar15,auVar23._8_8_);
        (pCVar19->fields).Cooldown = 20.0;
        return (System_Collections_Generic_List_string__o *)pCVar19;
      }
      if (uVar13 == 0x9fc581fa) {
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"SmokeBomb",(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SmokeBombSpecial);
          (pCVar19->fields)._activeTimeLeft = 150.0;
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
          }
          uVar18 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          *(ulong *)&(pCVar19->fields).field_0x2c =
               CONCAT44((float)((ulong)uVar18 >> 0x20) * 15.0,(float)uVar18 * 15.0);
          *(float *)((long)&(pCVar19->fields)._human + 4) = fVar2 * 15.0;
          Characters_SimpleUseable___ctor((Characters_SimpleUseable_o *)pCVar19,pCVar15,(MethodInfo *)0x0);
          (pCVar19->fields).Cooldown = 15.0;
          return (System_Collections_Generic_List_string__o *)pCVar19;
        }
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      if (uVar13 == 0xa499f21e) {
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Confuse",(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_ConfuseSpecial);
          pCVar19 = auVar23._0_8_;
          (pCVar19->fields)._keyIsReset = 0x437a0000;
          Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)pCVar19,pCVar15,auVar23._8_8_);
          (pCVar19->fields).Cooldown = 30.0;
          return (System_Collections_Generic_List_string__o *)pCVar19;
        }
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      if (uVar13 != 0xb7bb7226) {
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Escape",(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EscapeSpecial);
      Characters_RechargeableUseable___ctor
                ((Characters_RechargeableUseable_o *)pCVar19,pCVar15,0.0,(MethodInfo *)0x0);
      (pCVar19->fields).MaxUses = 1;
      (pCVar19->fields).Cooldown = 300.0;
      (pCVar19->fields).UsesLeft = -1;
      *(undefined4 *)&(pCVar19->fields).field_0x2c = 0x42480000;
      goto label_042e3f98;
    }
    if (uVar13 < 0x67c7f536) {
      if (uVar13 == 0x548b671e) {
        bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchbackSpecial);
          Characters_SwitchbackSpecial___ctor
                    ((Characters_SwitchbackSpecial_o *)pCVar19,pCVar15,(MethodInfo *)0x0);
          return (System_Collections_Generic_List_string__o *)pCVar19;
        }
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      if (uVar13 != 0x67c7f535) {
        return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
      }
      bVar14 = System_String__op_Equality
                         ((System_String_o *)pMVar20,(System_String_o *)"Stock",(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StockSpecial);
        Characters_StockSpecial___ctor(pCVar19,pCVar15,(MethodInfo *)0x0);
        return (System_Collections_Generic_List_string__o *)pCVar19;
      }
      return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
    }
    if (uVar13 == 0x8d87a40b) {
      bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_BladeThrowSpecial);
        pCVar19 = auVar23._0_8_;
        *(undefined8 *)&(pCVar19->fields).field_0x3c = 0x4000000042a00000;
        Characters_BaseAttackSpecial___ctor((Characters_BaseAttackSpecial_o *)pCVar19,pCVar15,auVar23._8_8_);
        (pCVar19->fields).Cooldown = 1.0;
        return (System_Collections_Generic_List_string__o *)pCVar19;
      }
      return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
    }
    if (uVar13 == 0x960fb720) {
      bVar14 = System_String__op_Equality((System_String_o *)pMVar20,"Smell",(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        auVar23 = il2cpp_runtime_helper_023052d0(TypeInfo_SmellSpecial);
        pCVar19 = auVar23._0_8_;
        *(undefined8 *)&(pCVar19->fields)._keyIsReset = 0x3f80000044160000;
        Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)pCVar19,pCVar15,auVar23._8_8_);
        (pCVar19->fields).Cooldown = 60.0;
        return (System_Collections_Generic_List_string__o *)pCVar19;
      }
      return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
    }
    if (uVar13 != 0x9d6edc05) {
      return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
    }
    puVar21 = &"Eren";
  }
  bVar14 = System_String__op_Equality
                     ((System_String_o *)pMVar20,(System_String_o *)*puVar21,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return (System_Collections_Generic_List_string__o *)(Characters_StockSpecial_o *)0x0;
  }
  pCVar19 = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ShifterTransformSpecial);
  uVar18 = *puVar21;
  *(undefined4 *)&(pCVar19->fields)._human = 0x42700000;
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)pCVar19,pCVar15,0.0,(MethodInfo *)0x0);
  *(undefined8 *)&(pCVar19->fields)._keyIsReset = uVar18;
  il2cpp_runtime_helper_022b4080(&(pCVar19->fields)._keyIsReset);
  (pCVar19->fields).MaxUses = 1;
  (pCVar19->fields).Cooldown = 300.0;
  (pCVar19->fields).UsesLeft = -1;
  *(undefined4 *)&(pCVar19->fields).field_0x2c = 0x41a00000;
label_042e3f98:
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)pCVar19,300.0,(MethodInfo *)0x0);
  return (System_Collections_Generic_List_string__o *)pCVar19;
}


// Characters.HumanSpecials$$AddSpecialName
// il2cpp: void Characters_HumanSpecials__AddSpecialName (System_Collections_Generic_List_string__o* specials, System_String_o* special, const MethodInfo* method);
// 0x42e3650

void Characters_HumanSpecials__AddSpecialName
               (System_Collections_Generic_List_string__o *specials,System_String_o *special,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  System_String_array *pSVar5;
  void *pvVar6;
  long lVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  Characters_StockSpecial_o *__this;
  Characters_SupplySpecial_o *__this_00;
  Characters_BaseAttackSpecial_c *pCVar10;
  Characters_SwitchbackSpecial_o *__this_01;
  Characters_BaseEmoteSpecial_o *pCVar11;
  Characters_RechargeableUseable_o *__this_02;
  Characters_SimpleUseable_o *pCVar12;
  Characters_ExtendedUseable_o *__this_03;
  System_String_o *s;
  Characters_BaseCharacter_o *owner;
  undefined8 *puVar13;
  Characters_BaseAttackSpecial_o *pCVar14;
  undefined1 auVar15 [16];
  
  s = special;
  owner = (Characters_BaseCharacter_o *)specials;
  if (g_data_057ade6e == '\0') {
    owner = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade6e = '\x01';
  }
  lVar7 = MethodInfo_Void_Add;
  if (specials != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(specials->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (specials->fields)._items;
    if (pSVar5 != (System_String_array *)0x0) {
      uVar4 = (specials->fields)._size;
      if (uVar4 < (uint)pSVar5->max_length) {
        (specials->fields)._size = uVar4 + 1;
        pSVar5->m_Items[(int)uVar4] = special;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,special);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)specials,(Il2CppObject *)special,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeThrowSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CarrySpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ConfuseSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DanceSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DistractSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NoneSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PotatoSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SmellSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SmokeBombSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin1Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin2Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin3Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SupplySpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchbackSpecial);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Armored");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Stock");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ade6f = '\x01';
  }
  uVar8 = _PrivateImplementationDetails___ComputeStringHash(s,(MethodInfo *)0x0);
  if (uVar8 < 0x50d88c80) {
    if (uVar8 < 0x132fe373) {
      if (uVar8 < 0x23f06bf) {
        if (uVar8 != 0x3f0398) {
          if (uVar8 != 0x23f06be) {
            return;
          }
          bVar9 = System_String__op_Equality(s,"Spin3",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin3Special);
          pCVar14 = auVar15._0_8_;
          pCVar14[1].klass = (Characters_BaseAttackSpecial_c *)0x3f0000003eb33333;
          *(undefined4 *)&pCVar14[1].monitor = 3;
          *(undefined4 *)&pCVar14[1].fields.Name = 0x41500000;
          Characters_BaseAttackSpecial___ctor(pCVar14,owner,auVar15._8_8_);
          (pCVar14->fields).Cooldown = 3.5;
          return;
        }
        bVar9 = System_String__op_Equality(s,"Spin1",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin1Special);
        pCVar10 = (Characters_BaseAttackSpecial_c *)0x3f0000003eb33333;
      }
      else {
        if (uVar8 != 0x33f0851) {
          if (uVar8 == 0xfb12e57) {
            bVar9 = System_String__op_Equality(s,"Distract",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_DistractSpecial);
            *(undefined4 *)(auVar15._0_8_ + 0x48) = 0x43960000;
          }
          else {
            if (uVar8 != 0x132fe372) {
              return;
            }
            bVar9 = System_String__op_Equality(s,"Potato",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_PotatoSpecial);
          }
          goto label_042e407d;
        }
        bVar9 = System_String__op_Equality(s,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin2Special);
        pCVar10 = (Characters_BaseAttackSpecial_c *)0x3ef5c28f3eb33333;
      }
      pCVar14 = auVar15._0_8_;
      pCVar14[1].klass = pCVar10;
      *(undefined4 *)&pCVar14[1].monitor = 3;
      Characters_BaseAttackSpecial___ctor(pCVar14,owner,auVar15._8_8_);
      (pCVar14->fields).Cooldown = 5.0;
      return;
    }
    if (uVar8 < 0x27e47193) {
      if (uVar8 == 0x184b43d0) {
        bVar9 = System_String__op_Equality(s,"Carry",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CarrySpecial);
        Characters_BaseHoldAttackSpecial___ctor(auVar15._0_8_,owner,auVar15._8_8_);
        ((auVar15._0_8_)->fields).Cooldown = 2.0;
        return;
      }
      if (uVar8 != 0x27e47192) {
        return;
      }
      puVar13 = &"Annie";
    }
    else {
      if (uVar8 != 0x2ab69de5) {
        if (uVar8 == 0x304ff7fb) {
          bVar9 = System_String__op_Equality(s,"None",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pCVar12 = (Characters_SimpleUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NoneSpecial);
          Characters_SimpleUseable___ctor(pCVar12,owner,(MethodInfo *)0x0);
          (pCVar12->fields).Cooldown = 0.0;
          return;
        }
        if (uVar8 != 0x50d88c7f) {
          return;
        }
        bVar9 = System_String__op_Equality(s,"DownStrike",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_DownStrikeSpecial);
        Characters_BaseHoldAttackSpecial___ctor(auVar15._0_8_,owner,auVar15._8_8_);
        ((auVar15._0_8_)->fields).Cooldown = 5.0;
        return;
      }
      puVar13 = &"Armored";
    }
  }
  else {
    if (0x9d6edc05 < uVar8) {
      if (0xb7bb7226 < uVar8) {
        if (uVar8 == 0xc7ef102c) {
          bVar9 = System_String__op_Equality(s,"AHSSTwinShot",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          __this_03 = (Characters_ExtendedUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AHSSTwinShot);
          Characters_ExtendedUseable___ctor(__this_03,owner,(MethodInfo *)0x0);
          (__this_03->fields).Cooldown = 1.0;
          return;
        }
        if (uVar8 != 0xca0fab3c) {
          if (uVar8 != 0xdba7f44e) {
            return;
          }
          bVar9 = System_String__op_Equality(s,"Supply",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          __this_00 = (Characters_SupplySpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SupplySpecial);
          Characters_SupplySpecial___ctor(__this_00,owner,(MethodInfo *)0x0);
          return;
        }
        bVar9 = System_String__op_Equality(s,"Dance",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_DanceSpecial);
        *(undefined4 *)(auVar15._0_8_ + 0x48) = 0x43480000;
label_042e407d:
        Characters_BaseEmoteSpecial___ctor(auVar15._0_8_,owner,auVar15._8_8_);
        ((auVar15._0_8_)->fields).Cooldown = 20.0;
        return;
      }
      if (uVar8 == 0x9fc581fa) {
        bVar9 = System_String__op_Equality(s,"SmokeBomb",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pCVar12 = (Characters_SimpleUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SmokeBombSpecial);
        *(undefined4 *)&pCVar12[1].klass = 0x43160000;
        if (g_data_057ac31b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057ac31b = '\x01';
        }
        uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
        *(ulong *)((long)&pCVar12[1].klass + 4) =
             CONCAT44((float)((ulong)uVar3 >> 0x20) * 15.0,(float)uVar3 * 15.0);
        *(float *)((long)&pCVar12[1].monitor + 4) = fVar2 * 15.0;
        Characters_SimpleUseable___ctor(pCVar12,owner,(MethodInfo *)0x0);
        (pCVar12->fields).Cooldown = 15.0;
        return;
      }
      if (uVar8 == 0xa499f21e) {
        bVar9 = System_String__op_Equality(s,"Confuse",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_ConfuseSpecial);
        pCVar11 = auVar15._0_8_;
        *(undefined4 *)&pCVar11[1].klass = 0x437a0000;
        Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar15._8_8_);
        (pCVar11->fields).Cooldown = 30.0;
        return;
      }
      if (uVar8 != 0xb7bb7226) {
        return;
      }
      bVar9 = System_String__op_Equality(s,"Escape",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_02 = (Characters_RechargeableUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EscapeSpecial);
      Characters_RechargeableUseable___ctor(__this_02,owner,0.0,(MethodInfo *)0x0);
      (__this_02->fields).MaxUses = 1;
      (__this_02->fields).Cooldown = 300.0;
      (__this_02->fields).UsesLeft = -1;
      (__this_02->fields).ReduceCooldownAmount = 50.0;
      goto label_042e3f98;
    }
    if (uVar8 < 0x67c7f536) {
      if (uVar8 == 0x548b671e) {
        bVar9 = System_String__op_Equality(s,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        __this_01 = (Characters_SwitchbackSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchbackSpecial);
        Characters_SwitchbackSpecial___ctor(__this_01,owner,(MethodInfo *)0x0);
        return;
      }
      if (uVar8 != 0x67c7f535) {
        return;
      }
      bVar9 = System_String__op_Equality(s,"Stock",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StockSpecial);
      Characters_StockSpecial___ctor(__this,owner,(MethodInfo *)0x0);
      return;
    }
    if (uVar8 == 0x8d87a40b) {
      bVar9 = System_String__op_Equality(s,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_BladeThrowSpecial);
      pCVar14 = auVar15._0_8_;
      *(undefined8 *)((long)&pCVar14[1].klass + 4) = 0x4000000042a00000;
      Characters_BaseAttackSpecial___ctor(pCVar14,owner,auVar15._8_8_);
      (pCVar14->fields).Cooldown = 1.0;
      return;
    }
    if (uVar8 == 0x960fb720) {
      bVar9 = System_String__op_Equality(s,"Smell",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_SmellSpecial);
      pCVar11 = auVar15._0_8_;
      pCVar11[1].klass = (Characters_BaseEmoteSpecial_c *)0x3f80000044160000;
      Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar15._8_8_);
      (pCVar11->fields).Cooldown = 60.0;
      return;
    }
    if (uVar8 != 0x9d6edc05) {
      return;
    }
    puVar13 = &"Eren";
  }
  bVar9 = System_String__op_Equality(s,(System_String_o *)*puVar13,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  __this_02 = (Characters_RechargeableUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ShifterTransformSpecial);
  pvVar6 = (void *)*puVar13;
  *(undefined4 *)&__this_02[1].klass = 0x42700000;
  Characters_RechargeableUseable___ctor(__this_02,owner,0.0,(MethodInfo *)0x0);
  __this_02[1].monitor = pvVar6;
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  (__this_02->fields).MaxUses = 1;
  (__this_02->fields).Cooldown = 300.0;
  (__this_02->fields).UsesLeft = -1;
  (__this_02->fields).ReduceCooldownAmount = 20.0;
label_042e3f98:
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this_02,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSpecials$$GetSpecialUseable
// il2cpp: Characters_BaseUseable_o* Characters_HumanSpecials__GetSpecialUseable (Characters_BaseCharacter_o* owner, System_String_o* special, const MethodInfo* method);
// 0x42e36f0

Characters_BaseUseable_o *
Characters_HumanSpecials__GetSpecialUseable
          (Characters_BaseCharacter_o *owner,System_String_o *special,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint32_t uVar4;
  bool_conflict bVar5;
  Characters_StockSpecial_o *__this;
  Characters_BaseHoldAttackSpecial_o *pCVar6;
  Characters_SupplySpecial_o *__this_00;
  Characters_BaseAttackSpecial_c *pCVar7;
  Characters_SwitchbackSpecial_o *__this_01;
  Characters_RechargeableUseable_o *__this_02;
  Characters_SimpleUseable_o *pCVar8;
  Characters_ExtendedUseable_o *__this_03;
  undefined8 *puVar9;
  Characters_BaseAttackSpecial_o *pCVar10;
  Characters_BaseEmoteSpecial_o *pCVar11;
  undefined1 auVar12 [16];
  
  if (g_data_057ade6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeThrowSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CarrySpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ConfuseSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DanceSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DistractSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NoneSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PotatoSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SmellSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SmokeBombSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin1Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin2Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Spin3Special);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SupplySpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchbackSpecial);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Armored");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Stock");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ade6f = '\x01';
  }
  uVar4 = _PrivateImplementationDetails___ComputeStringHash(special,(MethodInfo *)0x0);
  if (uVar4 < 0x50d88c80) {
    if (uVar4 < 0x132fe373) {
      if (uVar4 < 0x23f06bf) {
        if (uVar4 != 0x3f0398) {
          if (uVar4 != 0x23f06be) {
            return (Characters_BaseUseable_o *)0x0;
          }
          bVar5 = System_String__op_Equality(special,"Spin3",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin3Special);
            pCVar10 = auVar12._0_8_;
            pCVar10[1].klass = (Characters_BaseAttackSpecial_c *)0x3f0000003eb33333;
            *(undefined4 *)&pCVar10[1].monitor = 3;
            *(undefined4 *)&pCVar10[1].fields.Name = 0x41500000;
            Characters_BaseAttackSpecial___ctor(pCVar10,owner,auVar12._8_8_);
            (pCVar10->fields).Cooldown = 3.5;
            return (Characters_BaseUseable_o *)pCVar10;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        bVar5 = System_String__op_Equality(special,"Spin1",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Characters_BaseUseable_o *)0x0;
        }
        auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin1Special);
        pCVar7 = (Characters_BaseAttackSpecial_c *)0x3f0000003eb33333;
      }
      else {
        if (uVar4 != 0x33f0851) {
          if (uVar4 == 0xfb12e57) {
            bVar5 = System_String__op_Equality(special,"Distract",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return (Characters_BaseUseable_o *)0x0;
            }
            auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_DistractSpecial);
            *(undefined4 *)(auVar12._0_8_ + 0x48) = 0x43960000;
          }
          else {
            if (uVar4 != 0x132fe372) {
              return (Characters_BaseUseable_o *)0x0;
            }
            bVar5 = System_String__op_Equality(special,"Potato",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return (Characters_BaseUseable_o *)0x0;
            }
            auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_PotatoSpecial);
          }
          goto label_042e407d;
        }
        bVar5 = System_String__op_Equality(special,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Characters_BaseUseable_o *)0x0;
        }
        auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_Spin2Special);
        pCVar7 = (Characters_BaseAttackSpecial_c *)0x3ef5c28f3eb33333;
      }
      pCVar10 = auVar12._0_8_;
      pCVar10[1].klass = pCVar7;
      *(undefined4 *)&pCVar10[1].monitor = 3;
      Characters_BaseAttackSpecial___ctor(pCVar10,owner,auVar12._8_8_);
      (pCVar10->fields).Cooldown = 5.0;
      return (Characters_BaseUseable_o *)pCVar10;
    }
    if (uVar4 < 0x27e47193) {
      if (uVar4 == 0x184b43d0) {
        bVar5 = System_String__op_Equality(special,"Carry",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_CarrySpecial);
          pCVar6 = auVar12._0_8_;
          Characters_BaseHoldAttackSpecial___ctor(pCVar6,owner,auVar12._8_8_);
          (pCVar6->fields).Cooldown = 2.0;
          return (Characters_BaseUseable_o *)pCVar6;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 != 0x27e47192) {
        return (Characters_BaseUseable_o *)0x0;
      }
      puVar9 = &"Annie";
    }
    else {
      if (uVar4 != 0x2ab69de5) {
        if (uVar4 == 0x304ff7fb) {
          bVar5 = System_String__op_Equality(special,"None",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pCVar8 = (Characters_SimpleUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NoneSpecial);
            Characters_SimpleUseable___ctor(pCVar8,owner,(MethodInfo *)0x0);
            (pCVar8->fields).Cooldown = 0.0;
            return (Characters_BaseUseable_o *)pCVar8;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar4 != 0x50d88c7f) {
          return (Characters_BaseUseable_o *)0x0;
        }
        bVar5 = System_String__op_Equality(special,"DownStrike",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_DownStrikeSpecial);
          pCVar6 = auVar12._0_8_;
          Characters_BaseHoldAttackSpecial___ctor(pCVar6,owner,auVar12._8_8_);
          (pCVar6->fields).Cooldown = 5.0;
          return (Characters_BaseUseable_o *)pCVar6;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      puVar9 = &"Armored";
    }
  }
  else {
    if (0x9d6edc05 < uVar4) {
      if (0xb7bb7226 < uVar4) {
        if (uVar4 == 0xc7ef102c) {
          bVar5 = System_String__op_Equality(special,"AHSSTwinShot",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            __this_03 = (Characters_ExtendedUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AHSSTwinShot);
            Characters_ExtendedUseable___ctor(__this_03,owner,(MethodInfo *)0x0);
            (__this_03->fields).Cooldown = 1.0;
            return (Characters_BaseUseable_o *)__this_03;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar4 != 0xca0fab3c) {
          if (uVar4 != 0xdba7f44e) {
            return (Characters_BaseUseable_o *)0x0;
          }
          bVar5 = System_String__op_Equality(special,"Supply",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            __this_00 = (Characters_SupplySpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SupplySpecial);
            Characters_SupplySpecial___ctor(__this_00,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_00;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        bVar5 = System_String__op_Equality(special,"Dance",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Characters_BaseUseable_o *)0x0;
        }
        auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_DanceSpecial);
        *(undefined4 *)(auVar12._0_8_ + 0x48) = 0x43480000;
label_042e407d:
        pCVar11 = auVar12._0_8_;
        Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar12._8_8_);
        (pCVar11->fields).Cooldown = 20.0;
        return (Characters_BaseUseable_o *)pCVar11;
      }
      if (uVar4 == 0x9fc581fa) {
        bVar5 = System_String__op_Equality(special,"SmokeBomb",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pCVar8 = (Characters_SimpleUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SmokeBombSpecial);
          *(undefined4 *)&pCVar8[1].klass = 0x43160000;
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          *(ulong *)((long)&pCVar8[1].klass + 4) =
               CONCAT44((float)((ulong)uVar2 >> 0x20) * 15.0,(float)uVar2 * 15.0);
          *(float *)((long)&pCVar8[1].monitor + 4) = fVar1 * 15.0;
          Characters_SimpleUseable___ctor(pCVar8,owner,(MethodInfo *)0x0);
          (pCVar8->fields).Cooldown = 15.0;
          return (Characters_BaseUseable_o *)pCVar8;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 == 0xa499f21e) {
        bVar5 = System_String__op_Equality(special,"Confuse",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_ConfuseSpecial);
          pCVar11 = auVar12._0_8_;
          *(undefined4 *)&pCVar11[1].klass = 0x437a0000;
          Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar12._8_8_);
          (pCVar11->fields).Cooldown = 30.0;
          return (Characters_BaseUseable_o *)pCVar11;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 != 0xb7bb7226) {
        return (Characters_BaseUseable_o *)0x0;
      }
      bVar5 = System_String__op_Equality(special,"Escape",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Characters_BaseUseable_o *)0x0;
      }
      __this_02 = (Characters_RechargeableUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EscapeSpecial);
      Characters_RechargeableUseable___ctor(__this_02,owner,0.0,(MethodInfo *)0x0);
      (__this_02->fields).MaxUses = 1;
      (__this_02->fields).Cooldown = 300.0;
      (__this_02->fields).UsesLeft = -1;
      (__this_02->fields).ReduceCooldownAmount = 50.0;
      goto label_042e3f98;
    }
    if (uVar4 < 0x67c7f536) {
      if (uVar4 == 0x548b671e) {
        bVar5 = System_String__op_Equality(special,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          __this_01 = (Characters_SwitchbackSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchbackSpecial);
          Characters_SwitchbackSpecial___ctor(__this_01,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_01;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 != 0x67c7f535) {
        return (Characters_BaseUseable_o *)0x0;
      }
      bVar5 = System_String__op_Equality(special,"Stock",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        __this = (Characters_StockSpecial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StockSpecial);
        Characters_StockSpecial___ctor(__this,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar4 == 0x8d87a40b) {
      bVar5 = System_String__op_Equality(special,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_BladeThrowSpecial);
        pCVar10 = auVar12._0_8_;
        *(undefined8 *)((long)&pCVar10[1].klass + 4) = 0x4000000042a00000;
        Characters_BaseAttackSpecial___ctor(pCVar10,owner,auVar12._8_8_);
        (pCVar10->fields).Cooldown = 1.0;
        return (Characters_BaseUseable_o *)pCVar10;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar4 == 0x960fb720) {
      bVar5 = System_String__op_Equality(special,"Smell",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_SmellSpecial);
        pCVar11 = auVar12._0_8_;
        pCVar11[1].klass = (Characters_BaseEmoteSpecial_c *)0x3f80000044160000;
        Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar12._8_8_);
        (pCVar11->fields).Cooldown = 60.0;
        return (Characters_BaseUseable_o *)pCVar11;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar4 != 0x9d6edc05) {
      return (Characters_BaseUseable_o *)0x0;
    }
    puVar9 = &"Eren";
  }
  bVar5 = System_String__op_Equality(special,(System_String_o *)*puVar9,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (Characters_BaseUseable_o *)0x0;
  }
  __this_02 = (Characters_RechargeableUseable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ShifterTransformSpecial);
  pvVar3 = (void *)*puVar9;
  *(undefined4 *)&__this_02[1].klass = 0x42700000;
  Characters_RechargeableUseable___ctor(__this_02,owner,0.0,(MethodInfo *)0x0);
  __this_02[1].monitor = pvVar3;
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  (__this_02->fields).MaxUses = 1;
  (__this_02->fields).Cooldown = 300.0;
  (__this_02->fields).UsesLeft = -1;
  (__this_02->fields).ReduceCooldownAmount = 20.0;
label_042e3f98:
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this_02,300.0,(MethodInfo *)0x0);
  return (Characters_BaseUseable_o *)__this_02;
}


// Characters.HumanSpecials$$GetSpecialIcon
// il2cpp: System_String_o* Characters_HumanSpecials__GetSpecialIcon (System_String_o* special, const MethodInfo* method);
// 0x42e4390

System_String_o * Characters_HumanSpecials__GetSpecialIcon(System_String_o *special,MethodInfo *method)

{
  System_String_o *extraout_RAX;
  System_String_o *pSVar1;
  
  pSVar1 = special;
  if (g_data_057ade70 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SpecialIcon");
    il2cpp_runtime_helper_023445d0(&" ");
    pSVar1 = (System_String_o *)&"";
    il2cpp_runtime_helper_023445d0();
    g_data_057ade70 = '\x01';
  }
  if (special != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace_3af9030(special," ","",(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"SpecialIcon",(MethodInfo *)0x0);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSpecials$$.ctor
// il2cpp: void Characters_HumanSpecials___ctor (Characters_HumanSpecials_o* __this, const MethodInfo* method);
// 0x42e4410

void Characters_HumanSpecials___ctor(Characters_HumanSpecials_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSpecials$$.cctor
// il2cpp: void Characters_HumanSpecials___cctor (const MethodInfo* method);
// 0x42e4420

void Characters_HumanSpecials___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o **ppSVar1;
  byte bVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_object__int__o *pSVar8;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar9;
  MethodInfo *method_00;
  Characters_Human_o *pCVar10;
  Characters_Human_o *pCVar11;
  Characters_Human_o *pCVar12;
  Characters_HumanStats_o *__this;
  float fVar13;
  
  if (g_data_057ade71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSpecials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ade71 = '\x01';
  }
  pCVar10 = (Characters_Human_o *)0xa;
  __this = TypeInfo_string;
  lVar5 = il2cpp_runtime_helper_022b2a40();
  pCVar11 = "Potato";
  if (lVar5 == 0) goto label_042e4891;
  if (*(int *)(lVar5 + 0x18) == 0) {
label_042e488c:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this = (Characters_HumanStats_o *)(lVar5 + 0x20);
    *(Characters_Human_o **)(lVar5 + 0x20) = "Potato";
    il2cpp_runtime_helper_022b4080();
    pCVar12 = "Escape";
    pCVar10 = pCVar11;
    if (*(uint *)(lVar5 + 0x18) < 2) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x28);
    *(Characters_Human_o **)(lVar5 + 0x28) = "Escape";
    il2cpp_runtime_helper_022b4080();
    pCVar11 = "Dance";
    pCVar10 = pCVar12;
    if (*(uint *)(lVar5 + 0x18) < 3) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x30);
    *(Characters_Human_o **)(lVar5 + 0x30) = "Dance";
    il2cpp_runtime_helper_022b4080();
    pCVar12 = "Distract";
    pCVar10 = pCVar11;
    if (*(uint *)(lVar5 + 0x18) < 4) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x38);
    *(Characters_Human_o **)(lVar5 + 0x38) = "Distract";
    il2cpp_runtime_helper_022b4080();
    pCVar11 = "Smell";
    pCVar10 = pCVar12;
    if (*(uint *)(lVar5 + 0x18) < 5) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x40);
    *(Characters_Human_o **)(lVar5 + 0x40) = "Smell";
    il2cpp_runtime_helper_022b4080();
    pCVar12 = "Supply";
    pCVar10 = pCVar11;
    if (*(uint *)(lVar5 + 0x18) < 6) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x48);
    *(Characters_Human_o **)(lVar5 + 0x48) = "Supply";
    il2cpp_runtime_helper_022b4080();
    pCVar11 = "SmokeBomb";
    pCVar10 = pCVar12;
    if (*(uint *)(lVar5 + 0x18) < 7) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x50);
    *(Characters_Human_o **)(lVar5 + 0x50) = "SmokeBomb";
    il2cpp_runtime_helper_022b4080();
    pCVar12 = "Carry";
    pCVar10 = pCVar11;
    if (*(uint *)(lVar5 + 0x18) < 8) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x58);
    *(Characters_Human_o **)(lVar5 + 0x58) = "Carry";
    il2cpp_runtime_helper_022b4080();
    pCVar11 = "Switchback";
    pCVar10 = pCVar12;
    if (*(uint *)(lVar5 + 0x18) < 9) goto label_042e488c;
    __this = (Characters_HumanStats_o *)(lVar5 + 0x60);
    *(Characters_Human_o **)(lVar5 + 0x60) = "Switchback";
    il2cpp_runtime_helper_022b4080();
    pCVar10 = pCVar11;
    if (*(uint *)(lVar5 + 0x18) < 10) goto label_042e488c;
    *(undefined8 *)(lVar5 + 0x68) = "Confuse";
    il2cpp_runtime_helper_022b4080(lVar5 + 0x68);
    **(long **)(TypeInfo_HumanSpecials + 0xb8) = lVar5;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HumanSpecials + 0xb8),lVar5);
    pCVar10 = (Characters_Human_o *)0x1;
    __this = TypeInfo_string;
    lVar5 = il2cpp_runtime_helper_022b2a40();
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = "AHSSTwinShot";
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20);
        lVar3 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
        *(long *)(lVar3 + 8) = lVar5;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,lVar5);
        pCVar10 = (Characters_Human_o *)&g_data_00000005;
        __this = TypeInfo_string;
        lVar5 = il2cpp_runtime_helper_022b2a40();
        pCVar11 = "DownStrike";
        if (lVar5 == 0) goto label_042e4891;
        if (*(int *)(lVar5 + 0x18) != 0) {
          __this = (Characters_HumanStats_o *)(lVar5 + 0x20);
          *(Characters_Human_o **)(lVar5 + 0x20) = "DownStrike";
          il2cpp_runtime_helper_022b4080();
          pCVar12 = "Spin1";
          pCVar10 = pCVar11;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            __this = (Characters_HumanStats_o *)(lVar5 + 0x28);
            *(Characters_Human_o **)(lVar5 + 0x28) = "Spin1";
            il2cpp_runtime_helper_022b4080();
            pCVar11 = "Spin2";
            pCVar10 = pCVar12;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              __this = (Characters_HumanStats_o *)(lVar5 + 0x30);
              *(Characters_Human_o **)(lVar5 + 0x30) = "Spin2";
              il2cpp_runtime_helper_022b4080();
              pCVar12 = "Spin3";
              pCVar10 = pCVar11;
              if (3 < *(uint *)(lVar5 + 0x18)) {
                __this = (Characters_HumanStats_o *)(lVar5 + 0x38);
                *(Characters_Human_o **)(lVar5 + 0x38) = "Spin3";
                il2cpp_runtime_helper_022b4080();
                pCVar10 = pCVar12;
                if (4 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x40) = "BladeThrow";
                  il2cpp_runtime_helper_022b4080(lVar5 + 0x40);
                  lVar3 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                  *(long *)(lVar3 + 0x10) = lVar5;
                  il2cpp_runtime_helper_022b4080(lVar3 + 0x10,lVar5);
                  pCVar10 = (Characters_Human_o *)0x2;
                  __this = TypeInfo_string;
                  lVar5 = il2cpp_runtime_helper_022b2a40();
                  pCVar11 = "Eren";
                  if (lVar5 == 0) goto label_042e4891;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    __this = (Characters_HumanStats_o *)(lVar5 + 0x20);
                    *(Characters_Human_o **)(lVar5 + 0x20) = "Eren";
                    il2cpp_runtime_helper_022b4080();
                    pCVar10 = pCVar11;
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = "Annie";
                      il2cpp_runtime_helper_022b4080(lVar5 + 0x28);
                      lVar3 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                      *(long *)(lVar3 + 0x18) = lVar5;
                      il2cpp_runtime_helper_022b4080(lVar3 + 0x18,lVar5);
                      lVar5 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                      *(Characters_Human_o **)(lVar5 + 0x20) = "Switchback";
                      il2cpp_runtime_helper_022b4080(lVar5 + 0x20);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_042e488c;
    }
  }
label_042e4891:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AdvancedAlloyPerk);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Characters_BasePerk);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BasePerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DurableBladesPerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OmniDashPerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RefillTimePerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VerticalDashPerk);
    il2cpp_runtime_helper_023445d0(&"AdvancedAlloy");
    il2cpp_runtime_helper_023445d0(&"DurableBlades");
    il2cpp_runtime_helper_023445d0(&"RefillTime");
    il2cpp_runtime_helper_023445d0(&"OmniDash");
    il2cpp_runtime_helper_023445d0(&"VerticalDash");
    g_data_057ade72 = '\x01';
  }
  (__this->fields).Speed = 0x50;
  (__this->fields).Gas = 0x50;
  (__this->fields).Ammunition = 0x50;
  (__this->fields).Acceleration = 0x50;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BasePerk);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_Characters_BasePerk);
  ppSVar1 = &(__this->fields).Perks;
  (__this->fields).Perks = (System_Collections_Generic_Dictionary_string__BasePerk__o *)pSVar6;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  (__this->fields).CurrentGas = -1.0;
  (__this->fields).MaxGas = -1.0;
  (__this->fields).GasUsage = 0.2;
  (__this->fields).HorseSpeed = 50.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._human = pCVar10;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._human,pCVar10);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AdvancedAlloyPerk);
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_System_Int32);
  pIVar7[1].monitor = pSVar8;
  il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor);
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  (*pIVar7->klass->vtable[6].methodPtr)(pIVar7,pIVar7->klass->vtable[6].method);
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add(pSVar6,"AdvancedAlloy",pIVar7,MethodInfo_Void_Add);
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DurableBladesPerk);
    if (g_data_057ade7f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
      g_data_057ade7f = '\x01';
    }
    pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
    System_Collections_Generic_Dictionary_object__int____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_System_Int32);
    pIVar7[1].monitor = pSVar8;
    il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    (*pIVar7->klass->vtable[6].methodPtr)(pIVar7,pIVar7->klass->vtable[6].method);
    if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add(pSVar6,"DurableBlades",pIVar7,MethodInfo_Void_Add);
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RefillTimePerk);
      if (g_data_057ade7f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
        g_data_057ade7f = '\x01';
      }
      pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
      System_Collections_Generic_Dictionary_object__int____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_System_Int32);
      pIVar7[1].monitor = pSVar8;
      il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor);
      System_Object___ctor(pIVar7,(MethodInfo *)0x0);
      (*pIVar7->klass->vtable[6].methodPtr)(pIVar7,pIVar7->klass->vtable[6].method);
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add(pSVar6,"RefillTime",pIVar7,MethodInfo_Void_Add);
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
        pAVar9 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)il2cpp_runtime_helper_023052d0(TypeInfo_VerticalDashPerk)
        ;
        Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(pAVar9,(MethodInfo *)0x0);
        if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar6,"VerticalDash",(Il2CppObject *)pAVar9,MethodInfo_Void_Add);
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
          pAVar9 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                   il2cpp_runtime_helper_023052d0(TypeInfo_OmniDashPerk);
          Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(pAVar9,(MethodInfo *)0x0);
          if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar6,"OmniDash",(Il2CppObject *)pAVar9,MethodInfo_Void_Add);
            if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              method_00 = (MethodInfo *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                                     "VerticalDash",MethodInfo_BasePerk_get_Item);
              pIVar4 = TypeInfo_VerticalDashPerk;
              if (method_00 == (MethodInfo *)0x0) {
                (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)0x0;
              }
              else {
                bVar2 = (TypeInfo_VerticalDashPerk->_2).naturalAligment;
                if (((((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment < bVar2) ||
                   ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                    TypeInfo_VerticalDashPerk)) goto label_042e4de5;
                (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)method_00;
                if (((((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment < bVar2) ||
                   ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar4)
                   ) goto label_042e4de5;
              }
              il2cpp_runtime_helper_022b4080(&(__this->fields).VerticalDashPerk,method_00);
              if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                method_00 = (MethodInfo *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                                       "OmniDash",MethodInfo_BasePerk_get_Item);
                pIVar4 = TypeInfo_OmniDashPerk;
                if (method_00 == (MethodInfo *)0x0) {
                  (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)0x0;
label_042e4da1:
                  il2cpp_runtime_helper_022b4080(&(__this->fields).OmniDashPerk);
                  fVar13 = (float)(__this->fields).Gas;
                  fVar13 = fVar13 + fVar13 + -35.0;
                  (__this->fields).MaxGas = fVar13;
                  (__this->fields).CurrentGas = fVar13;
                  Characters_HumanStats__UpdateStats(__this,method_00);
                  return;
                }
                bVar2 = (TypeInfo_OmniDashPerk->_2).naturalAligment;
                if ((bVar2 <= (((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment) &&
                   ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                    TypeInfo_OmniDashPerk)) {
                  (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)method_00;
                  if ((bVar2 <= (((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment) &&
                     ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                      pIVar4)) goto label_042e4da1;
                }
                goto label_042e4de5;
              }
            }
          }
        }
      }
    }
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
label_042e4de5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_System_Int32);
  method_00->name = (char *)pSVar8;
  il2cpp_runtime_helper_022b4080(&method_00->name);
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  (**(code **)(method_00->methodPointer + 0x198))(method_00,*(undefined8 *)(method_00->methodPointer + 0x1a0))
  ;
  return;
}


