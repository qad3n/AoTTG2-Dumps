// Type: Gisketch.Aottg2UI.Actions.AottgSearchResultSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchResultSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* owner, int32_t index, const MethodInfo* method);
// 0x3b8fcc0

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *owner,int32_t index,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b903d0

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar15;
  bool_conflict bVar16;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_RBX;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong unaff_RBP;
  MethodInfo *pMVar22;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar23;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar24;
  float fVar26;
  undefined8 extraout_XMM0_Qa;
  UnityEngine_Vector2_Fields UVar25;
  undefined4 uVar27;
  long in_XMM1_Qa;
  uint uVar28;
  UnityEngine_Vector3_o UVar29;
  undefined8 uStack_30;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_28;
  ulong uStack_20;
  undefined1 auStack_18 [8];
  
  uVar28 = (uint)((ulong)in_XMM1_Qa >> 0x20);
  __this_02 = (__this->fields)._owner;
  if (__this_02 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    uVar12 = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)0x0;
      uStack_20 = 0x3b9045c;
      UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = (ulong)uVar28 << 0x20;
      UVar25 = UVar29.fields._0_8_;
      cVar11 = *(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1);
    }
    else {
      UVar25 = (eventData->fields)._position_k__BackingField.fields;
      cVar11 = *(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1);
    }
    if (cVar11 != '\0') {
      uVar4 = (__this_02->fields)._pointerSelectionLocked;
      uVar9 = (__this_02->fields)._pointerLockPosition.fields.x;
      fVar24 = UVar25.x - (float)uVar4;
      fVar26 = UVar25.y - (float)uVar9;
      fVar26 = fVar26 * fVar26;
      fVar24 = fVar26 + fVar24 * fVar24;
      in_XMM1_Qa = CONCAT44(fVar26,fVar24);
      if (fVar24 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this_02->fields)._hasAnimatedResults + 1) = 0;
    }
    if (g_data_057a9eb5 == '\0') {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)&MethodInfo_Int32_get_Count;
      uStack_20 = 0x3b9040b;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar15 = (__this_02->fields)._results;
    if (pSVar15 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      uStack_20 = 0x3b904a7;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      uVar28 = (uint)((ulong)in_XMM1_Qa >> 0x20);
      puVar21 = &uStack_30;
      pGVar23 = (__this->fields)._owner;
      if (pGVar23 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
        uVar14 = (__this->fields)._index;
        unaff_RBP = (ulong)uVar14;
        pGStack_28 = __this_02;
        uStack_20 = (ulong)uVar12;
        if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)0x0;
          UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          in_XMM1_Qa = (ulong)uVar28 << 0x20;
          UVar25 = UVar29.fields._0_8_;
          cVar11 = *(char *)((long)&(pGVar23->fields)._hasAnimatedResults + 1);
        }
        else {
          UVar25 = (eventData->fields)._position_k__BackingField.fields;
          cVar11 = *(char *)((long)&(pGVar23->fields)._hasAnimatedResults + 1);
        }
        if (cVar11 != '\0') {
          uVar5 = (pGVar23->fields)._pointerSelectionLocked;
          uVar10 = (pGVar23->fields)._pointerLockPosition.fields.x;
          fVar24 = UVar25.x - (float)uVar5;
          fVar26 = UVar25.y - (float)uVar10;
          fVar26 = fVar26 * fVar26;
          fVar24 = fVar26 + fVar24 * fVar24;
          in_XMM1_Qa = CONCAT44(fVar26,fVar24);
          if (fVar24 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(pGVar23->fields)._hasAnimatedResults + 1) = 0;
        }
        if (g_data_057a9eb5 == '\0') {
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar15 = (pGVar23->fields)._results;
        if (pSVar15 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          __this_02 = (__this->fields)._owner;
          if (__this_02 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
            iVar13 = (__this->fields)._index;
            if (g_data_057a9eb5 == '\0') {
              __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)&MethodInfo_Int32_get_Count;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9eb5 = '\x01';
            }
            pSVar15 = (__this_02->fields)._results;
            if (pSVar15 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
              return;
            }
            iVar18 = (pSVar15->fields)._size;
            iVar19 = 8;
            if (iVar18 < 9) {
              iVar19 = iVar18;
            }
            if (iVar19 != 0) {
              (__this_02->fields)._pointerLockPosition.fields.y = (float)((iVar13 % iVar19 + iVar19) % iVar19)
              ;
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                        (__this_02,(MethodInfo *)eventData);
              unaff_RBX = pGVar23;
              goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
            }
          }
          return;
        }
        iVar13 = (pSVar15->fields)._size;
        iVar18 = 8;
        if (iVar13 < 9) {
          iVar18 = iVar13;
        }
        if (iVar18 != 0) {
          (pGVar23->fields)._pointerLockPosition.fields.y = (float)(((int)uVar14 % iVar18 + iVar18) % iVar18);
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                    (pGVar23,(MethodInfo *)eventData);
          puVar21 = (undefined8 *)auStack_18;
          unaff_RBX = pGStack_28;
          unaff_RBP = uStack_20;
          __this_02 = pGVar23;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
          while( true ) {
            while( true ) {
              uVar27 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
              *(undefined8 **)((long)puVar21 + -8) = unaff_R15;
              *(UnityEngine_Object_o **)((long)puVar21 + -0x10) = unaff_R14;
              *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)puVar21 + -0x18) = unaff_RBX;
              if (g_data_057a9eb7 == '\0') {
                *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fded;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fdf9;
                il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
                *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057a9eb7 = '\x01';
              }
              fVar24 = (__this_02->fields)._pointerLockPosition.fields.y;
              pMVar22 = (MethodInfo *)(ulong)(uint)fVar24;
              if ((int)fVar24 < 0) {
                return;
              }
              __this_00 = (__this_02->fields)._feedback;
              pGVar23 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
              if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
                if ((__this_00->fields)._size <= (int)fVar24) {
                  return;
                }
                unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
                *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe30;
                unaff_R14 = (UnityEngine_Object_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar24,
                                       MethodInfo_GisketchDropdownItemFeedback_get_Item);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe4b;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar22 = (MethodInfo *)0x0;
                *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe57;
                bVar16 = UnityEngine_Object__op_Equality
                                   (unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar16 != '\0') {
                  return;
                }
                pGVar23 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)
                          (__this_02->fields)._feedback;
                if (pGVar23 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
                  fVar24 = (__this_02->fields)._pointerLockPosition.fields.y;
                  pMVar22 = (MethodInfo *)(ulong)(uint)fVar24;
                  *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe75;
                  __this_01 = (UnityEngine_Component_o *)
                              System_Collections_Generic_List_object___get_Item
                                        ((System_Collections_Generic_List_object__o *)pGVar23,(int32_t)fVar24,
                                         MethodInfo_GisketchDropdownItemFeedback_get_Item);
                  if (__this_01 != (UnityEngine_Component_o *)0x0) {
                    pMVar22 = (MethodInfo *)0x0;
                    *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe84;
                    focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar22);
                    return;
                  }
                }
              }
              *(undefined8 *)((long)puVar21 + -0x20) = 0x3b8fe9e;
              uVar17 = il2cpp_runtime_helper_022b2c90();
              *(ulong *)((long)puVar21 + -0x20) = unaff_RBP;
              *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)puVar21 + -0x28) = __this_02;
              *(undefined8 *)((long)puVar21 + -0x30) = uVar17;
              __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
              *(undefined8 *)((long)puVar21 + -0x38) = 0x3b8feaf;
              method_00 = pMVar22;
              UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              in_XMM1_Qa = CONCAT44(uVar27,UVar29.fields.z);
              uVar17 = UVar29.fields._0_8_;
              if (*(char *)((long)&(pGVar23->fields)._hasAnimatedResults + 1) != '\0') {
                uVar1 = (pGVar23->fields)._pointerSelectionLocked;
                uVar6 = (pGVar23->fields)._pointerLockPosition.fields.x;
                fVar24 = UVar29.fields.x - (float)uVar1;
                fVar26 = UVar29.fields.y - (float)uVar6;
                fVar26 = fVar26 * fVar26;
                fVar24 = fVar26 + fVar24 * fVar24;
                in_XMM1_Qa = CONCAT44(fVar26,fVar24);
                uVar17 = 0x40800000;
                if (fVar24 < 4.0) {
                  return;
                }
                *(undefined1 *)((long)&(pGVar23->fields)._hasAnimatedResults + 1) = 0;
              }
              if (g_data_057a9eb5 == '\0') {
                __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
                *(undefined8 *)((long)puVar21 + -0x38) = 0x3b8fef1;
                il2cpp_runtime_helper_023445d0(uVar17,in_XMM1_Qa);
                g_data_057a9eb5 = '\x01';
              }
              pSVar15 = (pGVar23->fields)._results;
              if (pSVar15 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
              iVar13 = (pSVar15->fields)._size;
              iVar18 = 8;
              if (iVar13 < 9) {
                iVar18 = iVar13;
              }
              if (iVar18 == 0) {
                return;
              }
              (pGVar23->fields)._pointerLockPosition.fields.y =
                   (float)(((int)((long)((ulong)(uint)((int)pMVar22 >> 0x1f) << 0x20 |
                                        (ulong)pMVar22 & 0xffffffff) % (long)iVar18) + iVar18) % iVar18);
              *(undefined8 *)((long)puVar21 + -0x38) = 0x3b8ff29;
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar23,method_00);
              unaff_RBP = *(ulong *)((long)puVar21 + -0x20);
              unaff_RBX = *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)puVar21 + -0x28);
              puVar21 = (undefined8 *)((long)puVar21 + -0x18);
              __this_02 = pGVar23;
            }
            *(undefined8 *)((long)puVar21 + -0x38) = 0x3b8ff43;
            uVar17 = il2cpp_runtime_helper_022b2c90();
            *(ulong *)((long)puVar21 + -0x38) = (ulong)pMVar22 & 0xffffffff;
            *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)puVar21 + -0x40) = pGVar23;
            *(undefined8 *)((long)puVar21 + -0x48) = uVar17;
            if (*(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1) != '\0') {
              uVar2 = (__this_02->fields)._pointerSelectionLocked;
              uVar7 = (__this_02->fields)._pointerLockPosition.fields.x;
              fVar24 = (float)extraout_XMM0_Qa - (float)uVar2;
              fVar26 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar7;
              fVar26 = fVar26 * fVar26;
              fVar24 = fVar26 + fVar24 * fVar24;
              in_XMM1_Qa = CONCAT44(fVar26,fVar24);
              if (fVar24 < 4.0) {
                return;
              }
              *(undefined1 *)((long)&(__this_02->fields)._hasAnimatedResults + 1) = 0;
            }
            pMVar22 = method_00;
            pGVar23 = __this_02;
            if (g_data_057a9eb5 == '\0') {
              pGVar23 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
              *(undefined8 *)((long)puVar21 + -0x50) = 0x3b8ff9a;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9eb5 = '\x01';
            }
            pSVar15 = (__this_02->fields)._results;
            if (pSVar15 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
            iVar13 = (pSVar15->fields)._size;
            iVar18 = 8;
            if (iVar13 < 9) {
              iVar18 = iVar13;
            }
            if (iVar18 == 0) {
              return;
            }
            (__this_02->fields)._pointerLockPosition.fields.y =
                 (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 |
                                      (ulong)method_00 & 0xffffffff) % (long)iVar18) + iVar18) % iVar18);
            *(undefined8 *)((long)puVar21 + -0x50) = 0x3b8ffd2;
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,pMVar22);
            puVar20 = (undefined8 *)((long)puVar21 + -0x40);
            unaff_RBP = *(ulong *)((long)puVar21 + -0x38);
            puVar21 = (undefined8 *)((long)puVar21 + -0x30);
            unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)*puVar20;
          }
          *(undefined8 *)((long)puVar21 + -0x50) = 0x3b8ffec;
          uVar17 = il2cpp_runtime_helper_022b2c90();
          if (*(char *)((long)&(pGVar23->fields)._hasAnimatedResults + 1) != '\0') {
            uVar3 = (pGVar23->fields)._pointerSelectionLocked;
            uVar8 = (pGVar23->fields)._pointerLockPosition.fields.x;
            fVar24 = (float)uVar17 - (float)uVar3;
            fVar26 = (float)((ulong)uVar17 >> 0x20) - (float)uVar8;
            if (fVar26 * fVar26 + fVar24 * fVar24 < 4.0) {
              return;
            }
            *(undefined1 *)((long)&(pGVar23->fields)._hasAnimatedResults + 1) = 0;
          }
          return;
        }
      }
      return;
    }
    iVar13 = (pSVar15->fields)._size;
    iVar18 = 8;
    if (iVar13 < 9) {
      iVar18 = iVar13;
    }
    if (iVar18 != 0) {
      (__this_02->fields)._pointerLockPosition.fields.y = (float)(((int)uVar12 % iVar18 + iVar18) % iVar18);
      uStack_20 = 0x3b90447;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,(MethodInfo *)eventData)
      ;
      puVar21 = (undefined8 *)register0x00000020;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b904b0

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar12;
  bool_conflict bVar13;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_RBX;
  undefined8 *puVar17;
  undefined1 *puVar18;
  ulong unaff_RBP;
  ulong uVar19;
  MethodInfo *pMVar20;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar21;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar22;
  float fVar24;
  undefined8 extraout_XMM0_Qa;
  UnityEngine_Vector2_Fields UVar23;
  undefined4 uVar25;
  long in_XMM1_Qa;
  uint uVar26;
  UnityEngine_Vector3_o UVar27;
  undefined1 auStack_18 [8];
  
  uVar26 = (uint)((ulong)in_XMM1_Qa >> 0x20);
  puVar18 = auStack_18;
  pGVar21 = (__this->fields)._owner;
  if (pGVar21 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    uVar10 = (__this->fields)._index;
    uVar19 = (ulong)uVar10;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)0x0;
      UVar27 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = (ulong)uVar26 << 0x20;
      UVar23 = UVar27.fields._0_8_;
      cVar9 = *(char *)((long)&(pGVar21->fields)._hasAnimatedResults + 1);
    }
    else {
      UVar23 = (eventData->fields)._position_k__BackingField.fields;
      cVar9 = *(char *)((long)&(pGVar21->fields)._hasAnimatedResults + 1);
    }
    if (cVar9 != '\0') {
      uVar4 = (pGVar21->fields)._pointerSelectionLocked;
      uVar8 = (pGVar21->fields)._pointerLockPosition.fields.x;
      fVar22 = UVar23.x - (float)uVar4;
      fVar24 = UVar23.y - (float)uVar8;
      fVar24 = fVar24 * fVar24;
      fVar22 = fVar24 + fVar22 * fVar22;
      in_XMM1_Qa = CONCAT44(fVar24,fVar22);
      if (fVar22 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pGVar21->fields)._hasAnimatedResults + 1) = 0;
    }
    if (g_data_057a9eb5 == '\0') {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar12 = (pGVar21->fields)._results;
    if (pSVar12 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_02 = (__this->fields)._owner;
      if (__this_02 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
        iVar11 = (__this->fields)._index;
        if (g_data_057a9eb5 == '\0') {
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar12 = (__this_02->fields)._results;
        if (pSVar12 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
        iVar15 = (pSVar12->fields)._size;
        iVar16 = 8;
        if (iVar15 < 9) {
          iVar16 = iVar15;
        }
        if (iVar16 != 0) {
          (__this_02->fields)._pointerLockPosition.fields.y = (float)((iVar11 % iVar16 + iVar16) % iVar16);
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                    (__this_02,(MethodInfo *)eventData);
          unaff_RBX = pGVar21;
          goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
        }
      }
      return;
    }
    iVar11 = (pSVar12->fields)._size;
    iVar15 = 8;
    if (iVar11 < 9) {
      iVar15 = iVar11;
    }
    if (iVar15 != 0) {
      (pGVar21->fields)._pointerLockPosition.fields.y = (float)(((int)uVar10 % iVar15 + iVar15) % iVar15);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar21,(MethodInfo *)eventData);
      puVar18 = (undefined1 *)register0x00000020;
      uVar19 = unaff_RBP;
      __this_02 = pGVar21;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
      while( true ) {
        while( true ) {
          uVar25 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
          *(undefined8 **)(puVar18 + -8) = unaff_R15;
          *(UnityEngine_Object_o **)(puVar18 + -0x10) = unaff_R14;
          *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar18 + -0x18) = unaff_RBX;
          if (g_data_057a9eb7 == '\0') {
            *(undefined8 *)(puVar18 + -0x20) = 0x3b8fded;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            *(undefined8 *)(puVar18 + -0x20) = 0x3b8fdf9;
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
            *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe05;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9eb7 = '\x01';
          }
          fVar22 = (__this_02->fields)._pointerLockPosition.fields.y;
          pMVar20 = (MethodInfo *)(ulong)(uint)fVar22;
          if ((int)fVar22 < 0) {
            return;
          }
          __this_00 = (__this_02->fields)._feedback;
          pGVar21 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
          if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
            if ((__this_00->fields)._size <= (int)fVar22) {
              return;
            }
            unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
            *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe30;
            unaff_R14 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar22,
                                   MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe4b;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar20 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe57;
            bVar13 = UnityEngine_Object__op_Equality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar13 != '\0') {
              return;
            }
            pGVar21 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this_02->fields)._feedback;
            if (pGVar21 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
              fVar22 = (__this_02->fields)._pointerLockPosition.fields.y;
              pMVar20 = (MethodInfo *)(ulong)(uint)fVar22;
              *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe75;
              __this_01 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pGVar21,(int32_t)fVar22,
                                     MethodInfo_GisketchDropdownItemFeedback_get_Item);
              if (__this_01 != (UnityEngine_Component_o *)0x0) {
                pMVar20 = (MethodInfo *)0x0;
                *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe84;
                focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar20);
                return;
              }
            }
          }
          *(undefined8 *)(puVar18 + -0x20) = 0x3b8fe9e;
          uVar14 = il2cpp_runtime_helper_022b2c90();
          *(ulong *)(puVar18 + -0x20) = uVar19;
          *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar18 + -0x28) = __this_02;
          *(undefined8 *)(puVar18 + -0x30) = uVar14;
          __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
          *(undefined8 *)(puVar18 + -0x38) = 0x3b8feaf;
          method_00 = pMVar20;
          UVar27 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          in_XMM1_Qa = CONCAT44(uVar25,UVar27.fields.z);
          uVar14 = UVar27.fields._0_8_;
          if (*(char *)((long)&(pGVar21->fields)._hasAnimatedResults + 1) != '\0') {
            uVar1 = (pGVar21->fields)._pointerSelectionLocked;
            uVar5 = (pGVar21->fields)._pointerLockPosition.fields.x;
            fVar22 = UVar27.fields.x - (float)uVar1;
            fVar24 = UVar27.fields.y - (float)uVar5;
            fVar24 = fVar24 * fVar24;
            fVar22 = fVar24 + fVar22 * fVar22;
            in_XMM1_Qa = CONCAT44(fVar24,fVar22);
            uVar14 = 0x40800000;
            if (fVar22 < 4.0) {
              return;
            }
            *(undefined1 *)((long)&(pGVar21->fields)._hasAnimatedResults + 1) = 0;
          }
          if (g_data_057a9eb5 == '\0') {
            __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
            *(undefined8 *)(puVar18 + -0x38) = 0x3b8fef1;
            il2cpp_runtime_helper_023445d0(uVar14,in_XMM1_Qa);
            g_data_057a9eb5 = '\x01';
          }
          pSVar12 = (pGVar21->fields)._results;
          if (pSVar12 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
          iVar11 = (pSVar12->fields)._size;
          iVar15 = 8;
          if (iVar11 < 9) {
            iVar15 = iVar11;
          }
          if (iVar15 == 0) {
            return;
          }
          (pGVar21->fields)._pointerLockPosition.fields.y =
               (float)(((int)((long)((ulong)(uint)((int)pMVar20 >> 0x1f) << 0x20 | (ulong)pMVar20 & 0xffffffff
                                    ) % (long)iVar15) + iVar15) % iVar15);
          *(undefined8 *)(puVar18 + -0x38) = 0x3b8ff29;
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar21,method_00);
          uVar19 = *(ulong *)(puVar18 + -0x20);
          unaff_RBX = *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar18 + -0x28);
          puVar18 = puVar18 + -0x18;
          __this_02 = pGVar21;
        }
        *(undefined8 *)(puVar18 + -0x38) = 0x3b8ff43;
        uVar14 = il2cpp_runtime_helper_022b2c90();
        *(ulong *)(puVar18 + -0x38) = (ulong)pMVar20 & 0xffffffff;
        *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar18 + -0x40) = pGVar21;
        *(undefined8 *)(puVar18 + -0x48) = uVar14;
        if (*(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1) != '\0') {
          uVar2 = (__this_02->fields)._pointerSelectionLocked;
          uVar6 = (__this_02->fields)._pointerLockPosition.fields.x;
          fVar22 = (float)extraout_XMM0_Qa - (float)uVar2;
          fVar24 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar6;
          fVar24 = fVar24 * fVar24;
          fVar22 = fVar24 + fVar22 * fVar22;
          in_XMM1_Qa = CONCAT44(fVar24,fVar22);
          if (fVar22 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(__this_02->fields)._hasAnimatedResults + 1) = 0;
        }
        pMVar20 = method_00;
        pGVar21 = __this_02;
        if (g_data_057a9eb5 == '\0') {
          pGVar21 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
          *(undefined8 *)(puVar18 + -0x50) = 0x3b8ff9a;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar12 = (__this_02->fields)._results;
        if (pSVar12 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
        iVar11 = (pSVar12->fields)._size;
        iVar15 = 8;
        if (iVar11 < 9) {
          iVar15 = iVar11;
        }
        if (iVar15 == 0) {
          return;
        }
        (__this_02->fields)._pointerLockPosition.fields.y =
             (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 |
                                  (ulong)method_00 & 0xffffffff) % (long)iVar15) + iVar15) % iVar15);
        *(undefined8 *)(puVar18 + -0x50) = 0x3b8ffd2;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,pMVar20);
        puVar17 = (undefined8 *)(puVar18 + -0x40);
        uVar19 = *(ulong *)(puVar18 + -0x38);
        puVar18 = puVar18 + -0x30;
        unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)*puVar17;
      }
      *(undefined8 *)(puVar18 + -0x50) = 0x3b8ffec;
      uVar14 = il2cpp_runtime_helper_022b2c90();
      if (*(char *)((long)&(pGVar21->fields)._hasAnimatedResults + 1) != '\0') {
        uVar3 = (pGVar21->fields)._pointerSelectionLocked;
        uVar7 = (pGVar21->fields)._pointerLockPosition.fields.x;
        fVar22 = (float)uVar14 - (float)uVar3;
        fVar24 = (float)((ulong)uVar14 >> 0x20) - (float)uVar7;
        if (fVar24 * fVar24 + fVar22 * fVar22 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pGVar21->fields)._hasAnimatedResults + 1) = 0;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b90590

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  bool_conflict bVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 unaff_RBX;
  undefined1 *puVar13;
  undefined8 unaff_RBP;
  MethodInfo *pMVar14;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar15;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar18;
  undefined8 in_XMM1_Qa;
  UnityEngine_Vector3_o UVar19;
  
  __this_02 = (__this->fields)._owner;
  if (__this_02 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    iVar7 = (__this->fields)._index;
    if (g_data_057a9eb5 == '\0') {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar8 = (__this_02->fields)._results;
    if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
    iVar11 = (pSVar8->fields)._size;
    iVar12 = 8;
    if (iVar11 < 9) {
      iVar12 = iVar11;
    }
    if (iVar12 != 0) {
      (__this_02->fields)._pointerLockPosition.fields.y = (float)((iVar7 % iVar12 + iVar12) % iVar12);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,(MethodInfo *)eventData)
      ;
      puVar13 = (undefined1 *)register0x00000020;
      while( true ) {
        while( true ) {
          uVar18 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
          *(undefined8 **)(puVar13 + -8) = unaff_R15;
          *(UnityEngine_Object_o **)(puVar13 + -0x10) = unaff_R14;
          *(undefined8 *)(puVar13 + -0x18) = unaff_RBX;
          if (g_data_057a9eb7 == '\0') {
            *(undefined8 *)(puVar13 + -0x20) = 0x3b8fded;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            *(undefined8 *)(puVar13 + -0x20) = 0x3b8fdf9;
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
            *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe05;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9eb7 = '\x01';
          }
          fVar16 = (__this_02->fields)._pointerLockPosition.fields.y;
          pMVar14 = (MethodInfo *)(ulong)(uint)fVar16;
          if ((int)fVar16 < 0) {
            return;
          }
          __this_00 = (__this_02->fields)._feedback;
          pGVar15 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
          if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
            if ((__this_00->fields)._size <= (int)fVar16) {
              return;
            }
            unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
            *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe30;
            unaff_R14 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar16,
                                   MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe4b;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar14 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe57;
            bVar9 = UnityEngine_Object__op_Equality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return;
            }
            pGVar15 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this_02->fields)._feedback;
            if (pGVar15 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
              fVar16 = (__this_02->fields)._pointerLockPosition.fields.y;
              pMVar14 = (MethodInfo *)(ulong)(uint)fVar16;
              *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe75;
              __this_01 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pGVar15,(int32_t)fVar16,
                                     MethodInfo_GisketchDropdownItemFeedback_get_Item);
              if (__this_01 != (UnityEngine_Component_o *)0x0) {
                pMVar14 = (MethodInfo *)0x0;
                *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe84;
                focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar14);
                return;
              }
            }
          }
          *(undefined8 *)(puVar13 + -0x20) = 0x3b8fe9e;
          uVar10 = il2cpp_runtime_helper_022b2c90();
          *(undefined8 *)(puVar13 + -0x20) = unaff_RBP;
          *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar13 + -0x28) = __this_02;
          *(undefined8 *)(puVar13 + -0x30) = uVar10;
          __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
          *(undefined8 *)(puVar13 + -0x38) = 0x3b8feaf;
          method_00 = pMVar14;
          UVar19 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          in_XMM1_Qa = CONCAT44(uVar18,UVar19.fields.z);
          uVar10 = UVar19.fields._0_8_;
          if (*(char *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) != '\0') {
            uVar1 = (pGVar15->fields)._pointerSelectionLocked;
            uVar4 = (pGVar15->fields)._pointerLockPosition.fields.x;
            fVar16 = UVar19.fields.x - (float)uVar1;
            fVar17 = UVar19.fields.y - (float)uVar4;
            fVar17 = fVar17 * fVar17;
            fVar16 = fVar17 + fVar16 * fVar16;
            in_XMM1_Qa = CONCAT44(fVar17,fVar16);
            uVar10 = 0x40800000;
            if (fVar16 < 4.0) {
              return;
            }
            *(undefined1 *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) = 0;
          }
          if (g_data_057a9eb5 == '\0') {
            __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
            *(undefined8 *)(puVar13 + -0x38) = 0x3b8fef1;
            il2cpp_runtime_helper_023445d0(uVar10,in_XMM1_Qa);
            g_data_057a9eb5 = '\x01';
          }
          pSVar8 = (pGVar15->fields)._results;
          if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
          iVar7 = (pSVar8->fields)._size;
          iVar11 = 8;
          if (iVar7 < 9) {
            iVar11 = iVar7;
          }
          if (iVar11 == 0) {
            return;
          }
          (pGVar15->fields)._pointerLockPosition.fields.y =
               (float)(((int)((long)((ulong)(uint)((int)pMVar14 >> 0x1f) << 0x20 | (ulong)pMVar14 & 0xffffffff
                                    ) % (long)iVar11) + iVar11) % iVar11);
          *(undefined8 *)(puVar13 + -0x38) = 0x3b8ff29;
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar15,method_00);
          unaff_RBX = *(undefined8 *)(puVar13 + -0x28);
          unaff_RBP = *(undefined8 *)(puVar13 + -0x20);
          puVar13 = puVar13 + -0x18;
          __this_02 = pGVar15;
        }
        *(undefined8 *)(puVar13 + -0x38) = 0x3b8ff43;
        uVar10 = il2cpp_runtime_helper_022b2c90();
        *(ulong *)(puVar13 + -0x38) = (ulong)pMVar14 & 0xffffffff;
        *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar13 + -0x40) = pGVar15;
        *(undefined8 *)(puVar13 + -0x48) = uVar10;
        if (*(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1) != '\0') {
          uVar2 = (__this_02->fields)._pointerSelectionLocked;
          uVar5 = (__this_02->fields)._pointerLockPosition.fields.x;
          fVar16 = (float)extraout_XMM0_Qa - (float)uVar2;
          fVar17 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar5;
          fVar17 = fVar17 * fVar17;
          fVar16 = fVar17 + fVar16 * fVar16;
          in_XMM1_Qa = CONCAT44(fVar17,fVar16);
          if (fVar16 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(__this_02->fields)._hasAnimatedResults + 1) = 0;
        }
        pMVar14 = method_00;
        pGVar15 = __this_02;
        if (g_data_057a9eb5 == '\0') {
          pGVar15 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
          *(undefined8 *)(puVar13 + -0x50) = 0x3b8ff9a;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar8 = (__this_02->fields)._results;
        if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
        iVar7 = (pSVar8->fields)._size;
        iVar11 = 8;
        if (iVar7 < 9) {
          iVar11 = iVar7;
        }
        if (iVar11 == 0) {
          return;
        }
        (__this_02->fields)._pointerLockPosition.fields.y =
             (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 |
                                  (ulong)method_00 & 0xffffffff) % (long)iVar11) + iVar11) % iVar11);
        *(undefined8 *)(puVar13 + -0x50) = 0x3b8ffd2;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,pMVar14);
        unaff_RBX = *(undefined8 *)(puVar13 + -0x40);
        unaff_RBP = *(undefined8 *)(puVar13 + -0x38);
        puVar13 = puVar13 + -0x30;
      }
      *(undefined8 *)(puVar13 + -0x50) = 0x3b8ffec;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      if (*(char *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) != '\0') {
        uVar3 = (pGVar15->fields)._pointerSelectionLocked;
        uVar6 = (pGVar15->fields)._pointerLockPosition.fields.x;
        fVar16 = (float)uVar10 - (float)uVar3;
        fVar17 = (float)((ulong)uVar10 >> 0x20) - (float)uVar6;
        if (fVar17 * fVar17 + fVar16 * fVar16 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) = 0;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, const MethodInfo* method);
// 0x3b90610

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


