// Type: UI.SettingsSkinsHumanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSkinsHumanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSkinsHumanPanel.cs
// --------------------------------

// UI.SettingsSkinsHumanPanel$$get_VerticalSpacing
// il2cpp: float UI_SettingsSkinsHumanPanel__get_VerticalSpacing (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x444b6d0

float UI_SettingsSkinsHumanPanel__get_VerticalSpacing(UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.SettingsSkinsHumanPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSkinsHumanPanel__get_ScrollBar (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x444b6e0

bool_conflict
UI_SettingsSkinsHumanPanel__get_ScrollBar(UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSkinsHumanPanel$$Setup
// il2cpp: void UI_SettingsSkinsHumanPanel__Setup (UI_SettingsSkinsHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x444b6f0

void UI_SettingsSkinsHumanPanel__Setup
               (UI_SettingsSkinsHumanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int32_t index;
  Settings_StringSetting_o *pSVar5;
  void *pvVar6;
  UnityEngine_Transform_o *pUVar7;
  Settings_BaseSetting_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  System_RuntimeTypeHandle_o SVar10;
  char cVar11;
  bool_conflict bVar12;
  uint uVar13;
  bool_conflict bVar14;
  bool_conflict bVar15;
  Il2CppObject *pIVar16;
  undefined8 *puVar17;
  System_Collections_Generic_List_object__o *__this_00;
  VirtualInvokeData *pVVar18;
  Il2CppClass *pIVar19;
  System_String_o *subCategory;
  long *plVar20;
  System_Type_o *pSVar21;
  System_Type_o *pSVar22;
  Il2CppObject *pIVar23;
  System_String_o *pSVar24;
  System_String_o *pSVar25;
  UI_ElementStyle_o *pUVar26;
  MethodInfo *pMVar27;
  Il2CppRuntimeInterfaceOffsetPair *pIVar28;
  UnityEngine_Transform_o *pUVar29;
  MethodInfo *pMVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  UI_BasePanel_o *pUVar34;
  MethodInfo *in_R9;
  UI_BasePanel_o *unaff_R15;
  undefined1 auVar35 [12];
  long *plStack_80;
  int iStack_74;
  long lStack_60;
  
  if (g_data_057ae6f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsSkinsPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    il2cpp_runtime_helper_023445d0(&"HookEnabled");
    il2cpp_runtime_helper_023445d0(&"GasEnabled");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6f8 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar34 = unaff_R15;
  if (parent == (UI_BasePanel_o *)0x0) {
label_0444ba2e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_SettingsSkinsPanel->_2).naturalAligment;
    pMVar27 = (MethodInfo *)(ulong)bVar1;
    if ((bVar1 <= (parent->klass->_2).naturalAligment) &&
       ((parent->klass->_2).typeHierarchy[(long)&pMVar27[-1].field_0x57] == TypeInfo_SettingsSkinsPanel)) {
      pUVar34 = (parent->fields).Parent;
      if (pUVar34 != (UI_BasePanel_o *)0x0) {
        bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
        pMVar27 = (MethodInfo *)(ulong)bVar1;
        if (((pUVar34->klass->_2).naturalAligment < bVar1) ||
           ((pUVar34->klass->_2).typeHierarchy[(long)&pMVar27[-1].field_0x57] != TypeInfo_SettingsPopup))
        goto label_0444ba3b;
      }
      lVar32 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (lVar32 != 0) {
        lVar32 = *(long *)(lVar32 + 0x20);
        UI_SettingsSkinsPanel__CreateCommonSettings
                  ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                   (__this->fields).DoublePanelRight,pMVar27);
        pUVar7 = (__this->fields).DoublePanelRight;
        pSVar25 = (System_String_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUVar26 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(pUVar26,0x18,200.0,20.0,pSVar25,(MethodInfo *)0x0);
        if ((lVar32 != 0) && (pUVar34 != (UI_BasePanel_o *)0x0)) {
          pSVar8 = *(Settings_BaseSetting_o **)(lVar32 + 0x48);
          pSVar25 = (System_String_o *)pUVar34[1].fields._currentCategoryPanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar25 = UI_UIManager__GetLocale(pSVar25,"Skins.Human","GasEnabled","","",in_R9)
          ;
          pMVar27 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar7,pUVar26,pSVar8,pSVar25,"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pUVar7 = (__this->fields).DoublePanelRight;
          pSVar25 = (System_String_o *)
                    (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                              (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          pUVar26 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          UI_ElementStyle___ctor(pUVar26,0x18,200.0,20.0,pSVar25,(MethodInfo *)0x0);
          pSVar8 = *(Settings_BaseSetting_o **)(lVar32 + 0x50);
          pSVar25 = UI_UIManager__GetLocale
                              ((System_String_o *)pUVar34[1].fields._currentCategoryPanel,"Skins.Human",
                               "HookEnabled","","",pMVar27);
          pMVar27 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar7,pUVar26,pSVar8,pSVar25,"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          UI_BasePanel__CreateHorizontalDivider
                    ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
          UI_BasePanel__CreateHorizontalDivider
                    ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
          pUVar7 = (__this->fields).DoublePanelLeft;
          pUVar9 = (__this->fields).DoublePanelRight;
          plStack_80 = (long *)0x43480000;
          if (g_data_057ae6fe == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
            il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSettingsContainer);
            il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
            il2cpp_runtime_helper_023445d0(&TypeRef_FloatSetting);
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSettings);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
            il2cpp_runtime_helper_023445d0(&TypeRef_StringSetting);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"Human");
            il2cpp_runtime_helper_023445d0(&"UniqueId");
            il2cpp_runtime_helper_023445d0(&"Name");
            il2cpp_runtime_helper_023445d0(&"Ground");
            il2cpp_runtime_helper_023445d0(&"Skins.");
            il2cpp_runtime_helper_023445d0(&"Skins.Common");
            il2cpp_runtime_helper_023445d0(&"");
            il2cpp_runtime_helper_023445d0(&"Skin");
            g_data_057ae6fe = '\x01';
          }
          pSVar25 = (System_String_o *)
                    (*(parent->klass->vtable)._4_get_ThemePanel.methodPtr)
                              (parent,(parent->klass->vtable)._4_get_ThemePanel.method);
          pUVar26 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          UI_ElementStyle___ctor(pUVar26,0x18,200.0,20.0,pSVar25,(MethodInfo *)0x0);
          pSVar5 = (parent->fields)._currentCategoryPanelName;
          if (pSVar5 != (Settings_StringSetting_o *)0x0) {
            bVar12 = System_String__op_Equality((pSVar5->fields)._value,"Human",(MethodInfo *)0x0);
            if (g_data_057ae6ff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
              g_data_057ae6ff = '\x01';
            }
            pSVar5 = (parent->fields)._currentCategoryPanelName;
            if ((pSVar5 != (Settings_StringSetting_o *)0x0) && (parent[1].klass != (UI_BasePanel_c *)0x0)) {
              pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)parent[1].klass,
                                   (Il2CppObject *)(pSVar5->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
              if ((char)bVar12 == '\0') {
                if (pIVar16 != (Il2CppObject *)0x0) {
                  pIVar19 = pIVar16->klass;
                  uVar2._0_1_ = (pIVar19->_2).rank;
                  uVar2._1_1_ = (pIVar19->_2).minimumAlignment;
                  if ((ulong)uVar2 != 0) {
                    pIVar28 = (pIVar19->_1).interfaceOffsets;
                    lVar32 = 0;
                    do {
                      if (*(long *)((long)&pIVar28->interfaceType + lVar32) == TypeInfo_ISetSettingsContainer) {
                        pVVar18 = pIVar19->vtable + *(int *)((long)&pIVar28->offset + lVar32);
                        goto label_0444ab8b;
                      }
                      lVar32 = lVar32 + 0x10;
                    } while ((ulong)uVar2 << 4 != lVar32);
                  }
                  pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar16,TypeInfo_ISetSettingsContainer,0);
label_0444ab8b:
                  pMVar30 = pVVar18->method;
                  goto label_0444acf8;
                }
              }
              else if (pIVar16 != (Il2CppObject *)0x0) {
                bVar1 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
                if (((pIVar16->klass->_2).naturalAligment < bVar1) ||
                   ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSkinSettings)) {
label_0444ac2c:
                  il2cpp_runtime_helper_022b2fd0(pIVar16);
                  goto label_0444ac34;
                }
                if (pIVar16[6].monitor != (void *)0x0) {
                  if (*(int *)((long)pIVar16[6].monitor + 0x14) == 1) {
                    lVar32 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                    if (((lVar32 != 0) && (lVar32 = *(long *)(lVar32 + 0x20), lVar32 != 0)) &&
                       (plVar20 = *(long **)(lVar32 + 0x28), plVar20 != (long *)0x0)) {
                      lVar32 = *plVar20;
                      if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
                        lVar31 = 0;
                        do {
                          if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar31) == TypeInfo_IListSetting) {
                            puVar17 = (undefined8 *)
                                      ((long)(*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar31) + 2) * 0x10 +
                                       lVar32 + 0x138);
                            goto label_0444abaf;
                          }
                          lVar31 = lVar31 + 0x10;
                        } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar31);
                      }
                      puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IListSetting,2);
label_0444abaf:
                      __this_00 = (System_Collections_Generic_List_object__o *)
                                  (*(code *)*puVar17)(plVar20,puVar17[1]);
                      if (pIVar16[7].klass != (Il2CppClass *)0x0) {
                        index = *(int32_t *)((long)&((pIVar16[7].klass)->_1).name + 4);
                        if (index < 0) {
label_0444ac34:
                          if (g_data_057ae6ff == '\0') {
                            il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
                            il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                            g_data_057ae6ff = '\x01';
                          }
                          pSVar5 = (parent->fields)._currentCategoryPanelName;
                          if (((pSVar5 != (Settings_StringSetting_o *)0x0) &&
                              (parent[1].klass != (UI_BasePanel_c *)0x0)) &&
                             (pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                                   parent[1].klass,(Il2CppObject *)(pSVar5->fields)._value,
                                                   MethodInfo_ICustomSkinSettings_get_Item), pIVar16 != (Il2CppObject *)0x0)) {
                            pIVar19 = pIVar16->klass;
                            uVar4._0_1_ = (pIVar19->_2).rank;
                            uVar4._1_1_ = (pIVar19->_2).minimumAlignment;
                            if ((ulong)uVar4 != 0) {
                              pIVar28 = (pIVar19->_1).interfaceOffsets;
                              lVar32 = 0;
                              do {
                                if (*(long *)((long)&pIVar28->interfaceType + lVar32) == TypeInfo_ISetSettingsContainer)
                                goto label_0444acde;
                                lVar32 = lVar32 + 0x10;
                              } while ((ulong)uVar4 << 4 != lVar32);
                            }
                            goto label_0444accf;
                          }
                        }
                        else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                          if ((__this_00->fields)._size <= index) goto label_0444ac34;
                          pIVar16 = System_Collections_Generic_List_object___get_Item
                                              (__this_00,index,MethodInfo_BaseSetting_get_Item);
                          if (pIVar16 != (Il2CppObject *)0x0) {
                            bVar1 = (TypeInfo_BaseSettingsContainer->_2).naturalAligment;
                            if (((pIVar16->klass->_2).naturalAligment < bVar1) ||
                               ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSettingsContainer))
                            goto label_0444ac2c;
                          }
                          goto label_0444acfd;
                        }
                      }
                    }
                  }
                  else {
                    if (g_data_057ae6ff == '\0') {
                      il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                      g_data_057ae6ff = '\x01';
                    }
                    pSVar5 = (parent->fields)._currentCategoryPanelName;
                    if (((pSVar5 != (Settings_StringSetting_o *)0x0) &&
                        (parent[1].klass != (UI_BasePanel_c *)0x0)) &&
                       (pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                                            ((System_Collections_Generic_Dictionary_object__object__o *)
                                             parent[1].klass,(Il2CppObject *)(pSVar5->fields)._value,
                                             MethodInfo_ICustomSkinSettings_get_Item), pIVar16 != (Il2CppObject *)0x0)) {
                      pIVar19 = pIVar16->klass;
                      uVar3._0_1_ = (pIVar19->_2).rank;
                      uVar3._1_1_ = (pIVar19->_2).minimumAlignment;
                      if ((ulong)uVar3 != 0) {
                        pIVar28 = (pIVar19->_1).interfaceOffsets;
                        lVar32 = 0;
                        do {
                          if (*(long *)((long)&pIVar28->interfaceType + lVar32) == TypeInfo_ISetSettingsContainer)
                          goto label_0444acde;
                          lVar32 = lVar32 + 0x10;
                        } while ((ulong)uVar3 << 4 != lVar32);
                      }
label_0444accf:
                      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar16,TypeInfo_ISetSettingsContainer,0);
                      goto label_0444acf1;
                    }
                  }
                }
              }
            }
          }
          goto label_0444b38d;
        }
      }
      goto label_0444ba2e;
    }
  }
  il2cpp_runtime_helper_022b2fd0(parent);
label_0444ba3b:
  il2cpp_runtime_helper_022b2fd0();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)pUVar34,(MethodInfo *)0x0);
  return;
label_0444acde:
  pVVar18 = pIVar19->vtable + *(int *)((long)&pIVar28->offset + lVar32);
label_0444acf1:
  pMVar30 = pVVar18->method;
label_0444acf8:
  pIVar16 = (Il2CppObject *)(*pVVar18->methodPtr)(pIVar16,pMVar30);
label_0444acfd:
  pUVar34 = (parent->fields).Parent;
  if (pUVar34 == (UI_BasePanel_o *)0x0) {
label_0444b38d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar34->klass->_2).naturalAligment) &&
       ((pUVar34->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SettingsPopup)) {
      pSVar5 = (parent->fields)._currentCategoryPanelName;
      if (pSVar5 != (Settings_StringSetting_o *)0x0) {
        pSVar25 = (System_String_o *)pUVar34[1].fields._currentCategoryPanel;
        subCategory = System_String__Concat_3ae5ba0("Skins.",(pSVar5->fields)._value,(MethodInfo *)0x0);
        if ((pIVar16 != (Il2CppObject *)0x0) && (pIVar19 = pIVar16[1].klass, pIVar19 != (Il2CppClass *)0x0)) {
          pvVar6 = (pIVar19->_1).image;
          plStack_80 = (long *)(**(code **)((long)pvVar6 + 0x2a8))
                                         (pIVar19,*(undefined8 *)((long)pvVar6 + 0x2b0));
          if (plStack_80 == (long *)0x0) goto label_0444b397;
          iStack_74 = 1;
          lStack_60 = 0;
label_0444add3:
          lVar32 = *plStack_80;
          if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
            lVar31 = 0;
            do {
              if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
                puVar17 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar31) * 0x10 + lVar32 + 0x138);
                goto label_0444ae33;
              }
              lVar31 = lVar31 + 0x10;
            } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar31);
          }
          puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plStack_80,TypeInfo_IEnumerator,0);
label_0444ae33:
          cVar11 = (*(code *)*puVar17)(plStack_80,puVar17[1]);
          if (cVar11 == '\0') goto label_0444b523;
          lVar32 = *plStack_80;
          if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
            lVar31 = 0;
            do {
              if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
                puVar17 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar31) + 1) * 0x10 + lVar32 + 0x138
                          );
                goto label_0444aeb8;
              }
              lVar31 = lVar31 + 0x10;
            } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar31);
          }
          puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plStack_80,TypeInfo_IEnumerator,1);
label_0444aeb8:
          plVar20 = (long *)(*(code *)*puVar17)(plStack_80,puVar17[1]);
          if (plVar20 != (long *)0x0) {
            if (*(long *)(*plVar20 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
label_0444b348:
              il2cpp_runtime_helper_022b2fd0(plVar20);
label_0444b350:
              il2cpp_runtime_helper_022b2fd0(unaff_R15);
              goto label_0444b358;
            }
            puVar17 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar20);
            unaff_R15 = (UI_BasePanel_o *)*puVar17;
            pIVar16 = (Il2CppObject *)puVar17[1];
            if (pIVar16 != (Il2CppObject *)0x0) {
              bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
              if (((pIVar16->klass->_2).naturalAligment < bVar1) ||
                 ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                plVar20 = (long *)il2cpp_runtime_helper_022b2fd0(pIVar16);
                goto label_0444b348;
              }
            }
            if (unaff_R15 == (UI_BasePanel_o *)0x0) goto label_0444b35d;
            if (unaff_R15->klass != g_data_057b9c00) goto label_0444b350;
            bVar12 = System_String__StartsWith((System_String_o *)unaff_R15,"Skin",(MethodInfo *)0x0);
            uVar13 = 0;
            if ((char)bVar12 != '\0') {
              if (pIVar16 != (Il2CppObject *)0x0) {
                pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
                SVar10 = TypeRef_StringSetting;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar22 = System_Type__GetTypeFromHandle(SVar10,(MethodInfo *)0x0);
                bVar12 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
                uVar13 = 1;
                if ((char)bVar12 == '\0') {
                  pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
                  SVar10 = TypeRef_FloatSetting;
                  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar22 = System_Type__GetTypeFromHandle(SVar10,(MethodInfo *)0x0);
                  uVar13 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
                  uVar13 = uVar13 & 0xff;
                }
                goto label_0444b013;
              }
              goto label_0444b374;
            }
label_0444b013:
            bVar12 = System_String__op_Equality((System_String_o *)unaff_R15,"Name",(MethodInfo *)0x0);
            pSVar5 = (parent->fields)._currentCategoryPanelName;
            if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0444b362;
            bVar14 = System_String__op_Equality((pSVar5->fields)._value,"Human",(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
label_0444b1b0:
              bVar14 = System_String__op_Equality((System_String_o *)unaff_R15,"UniqueId",(MethodInfo *)0x0)
              ;
              if (pIVar16 == (Il2CppObject *)0x0) goto label_0444b36f;
              pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
              SVar10 = TypeRef_StringSetting;
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar22 = System_Type__GetTypeFromHandle(SVar10,(MethodInfo *)0x0);
              bVar15 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
              if ((char)bVar15 != '\0') goto label_0444adc0;
              pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
              SVar10 = TypeRef_FloatSetting;
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar22 = System_Type__GetTypeFromHandle(SVar10,(MethodInfo *)0x0);
              bVar15 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0' && ((char)bVar12 == '\0' && (char)bVar15 == '\x01')) goto label_0444b284;
            }
            else {
              if (g_data_057ae6ff == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                g_data_057ae6ff = '\x01';
              }
              pSVar5 = (parent->fields)._currentCategoryPanelName;
              if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0444b379;
              if (parent[1].klass == (UI_BasePanel_c *)0x0) goto label_0444b37e;
              pIVar23 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)parent[1].klass,
                                   (Il2CppObject *)(pSVar5->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
              if (pIVar23 == (Il2CppObject *)0x0) goto label_0444b383;
              bVar1 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
              if (((pIVar23->klass->_2).naturalAligment < bVar1) ||
                 ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSkinSettings)) goto label_0444b367;
              if (pIVar23[6].monitor == (void *)0x0) goto label_0444b388;
              if (*(int *)((long)pIVar23[6].monitor + 0x14) != 1) goto label_0444b1b0;
              if (uVar13 != 0) {
                pUVar29 = pUVar7;
                if (0xb < iStack_74) {
                  pUVar29 = pUVar9;
                }
                pSVar24 = System_String__Substring((System_String_o *)unaff_R15,4,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar24 = UI_UIManager__GetLocale
                                    (pSVar25,subCategory,pSVar24,"","",pMVar27);
                pMVar27 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar29,pUVar26,(Settings_BaseSetting_o *)pIVar16,pSVar24,"",200.0,40.0,0
                           ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                goto label_0444b336;
              }
            }
            goto label_0444add3;
          }
label_0444b358:
          il2cpp_runtime_helper_022b2c90();
label_0444b35d:
          il2cpp_runtime_helper_022b2c90();
label_0444b362:
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0444b367:
          il2cpp_runtime_helper_022b2fd0(pIVar23);
label_0444b36f:
          il2cpp_runtime_helper_022b2c90();
label_0444b374:
          il2cpp_runtime_helper_022b2c90();
label_0444b379:
          il2cpp_runtime_helper_022b2c90();
label_0444b37e:
          il2cpp_runtime_helper_022b2c90();
label_0444b383:
          il2cpp_runtime_helper_022b2c90();
label_0444b388:
          il2cpp_runtime_helper_022b2c90();
        }
      }
      goto label_0444b38d;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_0444b397:
  auVar35 = il2cpp_runtime_helper_022b2c90();
  lVar32 = auVar35._0_8_;
  if (auVar35._8_4_ != 1) {
    lStack_60 = 0;
    goto label_0444b5c5;
  }
  plVar20 = (long *)__cxa_begin_catch(lVar32);
  lStack_60 = *plVar20;
  __cxa_end_catch();
label_0444b523:
  plVar20 = (long *)il2cpp_runtime_helper_023051f0(plStack_80,TypeInfo_IDisposable);
  if (plVar20 != (long *)0x0) {
    lVar32 = *plVar20;
    if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar31) == TypeInfo_IDisposable) {
          puVar17 = (undefined8 *)
                    (lVar32 + (long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar31) * 0x10 + 0x138);
          goto label_0444b59d;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar31);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_0444b59d:
    (*(code *)*puVar17)(plVar20,puVar17[1]);
  }
  lVar32 = lStack_60;
  if (lStack_60 == 0) {
    return;
  }
  do {
    lVar32 = il2cpp_runtime_helper_022fefe0(lVar32);
label_0444b5c5:
    plVar20 = (long *)il2cpp_runtime_helper_023051f0(plStack_80,TypeInfo_IDisposable);
    if (plVar20 != (long *)0x0) {
      lVar31 = *plVar20;
      if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
        lVar33 = 0;
        do {
          if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IDisposable) {
            puVar17 = (undefined8 *)
                      (lVar31 + (long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + 0x138);
            goto label_0444b63d;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
      }
      puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_0444b63d:
      (*(code *)*puVar17)(plVar20,puVar17[1]);
    }
    if (lStack_60 == 0) {
      _Unwind_Resume(lVar32);
    }
    il2cpp_runtime_helper_022fefe0(lStack_60);
  } while( true );
label_0444adc0:
  if ((char)bVar12 == '\0' && (char)bVar14 == '\0') {
label_0444b284:
    pUVar29 = pUVar7;
    if (0xb < iStack_74) {
      pUVar29 = pUVar9;
    }
    bVar12 = System_String__op_Equality((System_String_o *)unaff_R15,"Ground",(MethodInfo *)0x0);
    pSVar24 = subCategory;
    if ((char)bVar12 != '\0') {
      pSVar24 = "Skins.Common";
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar24 = UI_UIManager__GetLocale
                        (pSVar25,pSVar24,(System_String_o *)unaff_R15,"","",pMVar27);
    pMVar27 = (MethodInfo *)0x0;
    UI_ElementFactory__CreateInputSetting
              (pUVar29,pUVar26,(Settings_BaseSetting_o *)pIVar16,pSVar24,"",200.0,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
label_0444b336:
    iStack_74 = iStack_74 + 1;
  }
  goto label_0444add3;
}


// UI.SettingsSkinsHumanPanel$$.ctor
// il2cpp: void UI_SettingsSkinsHumanPanel___ctor (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x444ba50

void UI_SettingsSkinsHumanPanel___ctor(UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


