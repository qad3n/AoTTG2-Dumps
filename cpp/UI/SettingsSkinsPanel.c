// Type: UI.SettingsSkinsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSkinsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSkinsPanel.cs
// --------------------------------

// UI.SettingsSkinsPanel.<>c__DisplayClass13_0$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass13_0___ctor (UI_SettingsSkinsPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x444d480

void UI_SettingsSkinsPanel___c__DisplayClass13_0___ctor
               (UI_SettingsSkinsPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass13_0$$<CreateCharacterSelectorDropdown>b__0
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass13_0___CreateCharacterSelectorDropdown_b__0 (UI_SettingsSkinsPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x444d8c0

void UI_SettingsSkinsPanel___c__DisplayClass13_0___CreateCharacterSelectorDropdown_b__0
               (UI_SettingsSkinsPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  int index;
  void *pvVar1;
  Settings_TypedSetting_int__o *__this_00;
  long *plVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Threading_CancellationTokenSource_o *pSVar4;
  UnityEngine_Transform_c *__this_01;
  long lVar5;
  int32_t value;
  undefined8 *puVar6;
  UnityEngine_Transform_c *pUVar7;
  System_Type_o *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_Transform_c *pUVar10;
  long lVar11;
  UnityEngine_Transform_c *pUVar12;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *pIVar13;
  UI_SettingsSkinsPanel_o *pUVar14;
  UI_BasePanel_o *pUVar15;
  UI_BasePanel_o *pUVar16;
  UI_SettingsSkinsPanel_o *pUVar17;
  
  pUVar14 = (__this->fields).__4__this;
  if (pUVar14 != (UI_SettingsSkinsPanel_o *)0x0) {
    if (g_data_057ae701 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      g_data_057ae701 = '\x01';
    }
    plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    __this = (UI_SettingsSkinsPanel___c__DisplayClass13_0_o *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x238))();
      UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar14,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = (__this->fields).__4__this;
  if (pUVar14 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = (UI_BasePanel_o *)(pUVar14->fields).m_CachedPtr;
  if (pUVar15 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(pUVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = (UI_BasePanel_o *)(pUVar15->fields).m_CachedPtr;
  if (pUVar15 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(pUVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar16 = pUVar15;
  if (g_data_057ae706 == '\0') {
    pUVar16 = (UI_BasePanel_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae706 = '\x01';
  }
  pUVar3 = (pUVar15->fields).DoublePanelLeft;
  if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar4 = (pUVar15->fields).m_CancellationTokenSource,
     pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0)) {
    __this_01 = (UnityEngine_Transform_c *)(pUVar3->fields).m_CachedPtr;
    pUVar16 = (UI_BasePanel_o *)0x0;
    if (__this_01 != (UnityEngine_Transform_c *)0x0) {
      pUVar12 = pUVar3[1].klass;
      lVar5 = (pUVar15->fields).m_CachedPtr;
      pUVar7 = (UnityEngine_Transform_c *)(pUVar15->fields).SinglePanel;
      index = *(int *)((long)&(pSVar4->fields)._kernelEvent + 4);
      pUVar10 = __this_01;
      if (g_data_057ae702 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
        pUVar10 = (UnityEngine_Transform_c *)&MethodInfo_Void_set_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae702 = '\x01';
      }
      if (index < 0) {
        return;
      }
      if (pUVar7 != (UnityEngine_Transform_c *)0x0) {
        if (*(int *)&(pUVar7->_1).namespaze <= index) {
          return;
        }
        value = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)pUVar7,index,MethodInfo_Int32_get_Item);
        pUVar10 = pUVar7;
        if (pUVar12 != (UnityEngine_Transform_c *)0x0) {
          pvVar1 = (pUVar12->_1).image;
          if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
            lVar11 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar11) == TypeInfo_ISetSettingsContainer) {
                puVar6 = (undefined8 *)
                         ((long)pvVar1 +
                         (long)(*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar11) + 1) * 0x10 + 0x138);
                goto label_0444d5e2;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar11);
          }
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(pUVar12,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
          pUVar7 = (UnityEngine_Transform_c *)(*(code *)*puVar6)();
          pUVar10 = pUVar12;
          if ((pUVar7 != (UnityEngine_Transform_c *)0x0) &&
             (Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar7,value,MethodInfo_Void_set_Value)
             , pUVar10 = pUVar7, lVar5 != 0)) {
            __this_00 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x78);
            pUVar10 = (UnityEngine_Transform_c *)0x0;
            if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
              UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae704 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
        il2cpp_runtime_helper_023445d0(&"Human");
        il2cpp_runtime_helper_023445d0(&"Shifter");
        il2cpp_runtime_helper_023445d0(&"Skybox");
        g_data_057ae704 = '\x01';
      }
      handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
      pIVar13 = (pUVar10->_1).declaringType;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pIVar13 != (Il2CppClass *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,"Human",
                   (Il2CppObject *)pSVar8,MethodInfo_Void_Add);
        pIVar13 = (pUVar10->_1).declaringType;
        handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
        pSVar8 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
        if (pIVar13 != (Il2CppClass *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,"Shifter",
                     (Il2CppObject *)pSVar8,MethodInfo_Void_Add);
          pIVar13 = (pUVar10->_1).declaringType;
          handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
          pSVar8 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
          if (pIVar13 != (Il2CppClass *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,"Skybox",
                       (Il2CppObject *)pSVar8,MethodInfo_Void_Add);
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar13;
            if ((lVar5 != 0) &&
               (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar10->_1).typeMetadataHandle,
               handle.fields.value != 0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                         "Human",*(Il2CppObject **)(lVar5 + 0x20),MethodInfo_Void_Add);
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar5 != 0) &&
                 (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar10->_1).typeMetadataHandle,
                 handle.fields.value != 0)) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                           "Shifter",*(Il2CppObject **)(lVar5 + 0x30),MethodInfo_Void_Add);
                lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                if (lVar5 != 0) {
                  pSVar9 = (pUVar10->_1).typeMetadataHandle;
                  handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar9,"Skybox",*(Il2CppObject **)(lVar5 + 0x38),MethodInfo_Void_Add);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae705 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
        g_data_057ae705 = '\x01';
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar9,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
      (((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle = pSVar9;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle);
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pUVar16->fields).m_CancellationTokenSource;
  if (((pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) &&
      (lVar5 = *(long *)&(pSVar4->fields)._disposed, lVar5 != 0)) &&
     (pUVar14 = *(UI_SettingsSkinsPanel_o **)(lVar5 + 0x10), pUVar14 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar14,(System_String_o *)(pUVar16->fields).m_CachedPtr,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pUVar16->fields).m_CancellationTokenSource;
  if ((pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (pUVar14 = (UI_SettingsSkinsPanel_o *)(pSVar4->fields)._kernelEvent,
     pUVar14 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar14,(System_String_o *)(pUVar16->fields).m_CachedPtr,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = (UI_SettingsSkinsPanel_o *)(pUVar16->fields).m_CachedPtr;
  if (pUVar14 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar14,(System_String_o *)(pUVar16->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar17 = (UI_SettingsSkinsPanel_o *)(pUVar14->fields).m_CachedPtr;
  if (pUVar17 == (UI_SettingsSkinsPanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar14 = (UI_SettingsSkinsPanel_o *)(pUVar17->fields).m_CachedPtr;
    if (pUVar14 != (UI_SettingsSkinsPanel_o *)0x0) {
      UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
                (pUVar14,(System_String_o *)(pUVar17->fields).m_CancellationTokenSource,method_04);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar17 = (UI_SettingsSkinsPanel_o *)(pUVar14->fields).m_CachedPtr;
    if (pUVar17 == (UI_SettingsSkinsPanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar17,(System_String_o *)(pUVar14->fields).m_CancellationTokenSource,method_05);
    return;
  }
  UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
            (pUVar17,(System_String_o *)(pUVar14->fields).m_CancellationTokenSource,method_03);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_0$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_0___ctor (UI_SettingsSkinsPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x444baa0

void UI_SettingsSkinsPanel___c__DisplayClass7_0___ctor
               (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_0$$<CreateCommonSettings>b__0
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_0___CreateCommonSettings_b__0 (UI_SettingsSkinsPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x444d920

void UI_SettingsSkinsPanel___c__DisplayClass7_0___CreateCommonSettings_b__0
               (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  int index;
  void *pvVar1;
  Settings_TypedSetting_int__o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  UnityEngine_Transform_c *__this_01;
  long lVar4;
  int32_t value;
  undefined8 *puVar5;
  UnityEngine_Transform_c *pUVar6;
  System_Type_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_Transform_c *pUVar9;
  long lVar10;
  UnityEngine_Transform_c *pUVar11;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *pIVar12;
  UI_SettingsSkinsPanel_o *pUVar13;
  UI_BasePanel_o *pUVar14;
  UI_BasePanel_o *pUVar15;
  UI_SettingsSkinsPanel_o *pUVar16;
  
  pUVar13 = (__this->fields).__4__this;
  if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = (UI_BasePanel_o *)(pUVar13->fields).m_CachedPtr;
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = (UI_BasePanel_o *)(pUVar14->fields).m_CachedPtr;
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = pUVar14;
  if (g_data_057ae706 == '\0') {
    pUVar15 = (UI_BasePanel_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae706 = '\x01';
  }
  pUVar2 = (pUVar14->fields).DoublePanelLeft;
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = (pUVar14->fields).m_CancellationTokenSource,
     pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0)) {
    __this_01 = (UnityEngine_Transform_c *)(pUVar2->fields).m_CachedPtr;
    pUVar15 = (UI_BasePanel_o *)0x0;
    if (__this_01 != (UnityEngine_Transform_c *)0x0) {
      pUVar11 = pUVar2[1].klass;
      lVar4 = (pUVar14->fields).m_CachedPtr;
      pUVar6 = (UnityEngine_Transform_c *)(pUVar14->fields).SinglePanel;
      index = *(int *)((long)&(pSVar3->fields)._kernelEvent + 4);
      pUVar9 = __this_01;
      if (g_data_057ae702 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
        pUVar9 = (UnityEngine_Transform_c *)&MethodInfo_Void_set_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae702 = '\x01';
      }
      if (index < 0) {
        return;
      }
      if (pUVar6 != (UnityEngine_Transform_c *)0x0) {
        if (*(int *)&(pUVar6->_1).namespaze <= index) {
          return;
        }
        value = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)pUVar6,index,MethodInfo_Int32_get_Item);
        pUVar9 = pUVar6;
        if (pUVar11 != (UnityEngine_Transform_c *)0x0) {
          pvVar1 = (pUVar11->_1).image;
          if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
            lVar10 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar10) == TypeInfo_ISetSettingsContainer) {
                puVar5 = (undefined8 *)
                         ((long)pvVar1 +
                         (long)(*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar10) + 1) * 0x10 + 0x138);
                goto label_0444d5e2;
              }
              lVar10 = lVar10 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar10);
          }
          puVar5 = (undefined8 *)il2cpp_runtime_helper_02300d20(pUVar11,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
          pUVar6 = (UnityEngine_Transform_c *)(*(code *)*puVar5)();
          pUVar9 = pUVar11;
          if ((pUVar6 != (UnityEngine_Transform_c *)0x0) &&
             (Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar6,value,MethodInfo_Void_set_Value)
             , pUVar9 = pUVar6, lVar4 != 0)) {
            __this_00 = *(Settings_TypedSetting_int__o **)(lVar4 + 0x78);
            pUVar9 = (UnityEngine_Transform_c *)0x0;
            if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
              UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae704 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
        il2cpp_runtime_helper_023445d0(&"Human");
        il2cpp_runtime_helper_023445d0(&"Shifter");
        il2cpp_runtime_helper_023445d0(&"Skybox");
        g_data_057ae704 = '\x01';
      }
      handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
      pIVar12 = (pUVar9->_1).declaringType;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pIVar12 != (Il2CppClass *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Human",
                   (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
        pIVar12 = (pUVar9->_1).declaringType;
        handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
        if (pIVar12 != (Il2CppClass *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Shifter",
                     (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
          pIVar12 = (pUVar9->_1).declaringType;
          handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
          pSVar7 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
          if (pIVar12 != (Il2CppClass *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Skybox",
                       (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar12;
            if ((lVar4 != 0) &&
               (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar9->_1).typeMetadataHandle,
               handle.fields.value != 0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                         "Human",*(Il2CppObject **)(lVar4 + 0x20),MethodInfo_Void_Add);
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar4 != 0) &&
                 (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar9->_1).typeMetadataHandle,
                 handle.fields.value != 0)) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                           "Shifter",*(Il2CppObject **)(lVar4 + 0x30),MethodInfo_Void_Add);
                lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                if (lVar4 != 0) {
                  pSVar8 = (pUVar9->_1).typeMetadataHandle;
                  handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar8,"Skybox",*(Il2CppObject **)(lVar4 + 0x38),MethodInfo_Void_Add);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae705 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
        g_data_057ae705 = '\x01';
      }
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
      (((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle = pSVar8;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle);
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pUVar15->fields).m_CancellationTokenSource;
  if (((pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) &&
      (lVar4 = *(long *)&(pSVar3->fields)._disposed, lVar4 != 0)) &&
     (pUVar13 = *(UI_SettingsSkinsPanel_o **)(lVar4 + 0x10), pUVar13 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar13,(System_String_o *)(pUVar15->fields).m_CachedPtr,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pUVar15->fields).m_CancellationTokenSource;
  if ((pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (pUVar13 = (UI_SettingsSkinsPanel_o *)(pSVar3->fields)._kernelEvent,
     pUVar13 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar13,(System_String_o *)(pUVar15->fields).m_CachedPtr,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = (UI_SettingsSkinsPanel_o *)(pUVar15->fields).m_CachedPtr;
  if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar13,(System_String_o *)(pUVar15->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar16 = (UI_SettingsSkinsPanel_o *)(pUVar13->fields).m_CachedPtr;
  if (pUVar16 == (UI_SettingsSkinsPanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UI_SettingsSkinsPanel_o *)(pUVar16->fields).m_CachedPtr;
    if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
      UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
                (pUVar13,(System_String_o *)(pUVar16->fields).m_CancellationTokenSource,method_04);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar16 = (UI_SettingsSkinsPanel_o *)(pUVar13->fields).m_CachedPtr;
    if (pUVar16 == (UI_SettingsSkinsPanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar16,(System_String_o *)(pUVar13->fields).m_CancellationTokenSource,method_05);
    return;
  }
  UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
            (pUVar16,(System_String_o *)(pUVar13->fields).m_CancellationTokenSource,method_03);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_0$$<CreateCommonSettings>b__1
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_0___CreateCommonSettings_b__1 (UI_SettingsSkinsPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x444d940

void UI_SettingsSkinsPanel___c__DisplayClass7_0___CreateCommonSettings_b__1
               (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  int index;
  void *pvVar1;
  Settings_TypedSetting_int__o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  UnityEngine_Transform_c *__this_01;
  long lVar4;
  int32_t value;
  undefined8 *puVar5;
  UnityEngine_Transform_c *pUVar6;
  System_Type_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_Transform_c *pUVar9;
  long lVar10;
  UnityEngine_Transform_c *pUVar11;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *pIVar12;
  UI_SettingsSkinsPanel_o *pUVar13;
  UI_BasePanel_o *__this_02;
  UI_BasePanel_o *pUVar14;
  UI_SettingsSkinsPanel_o *pUVar15;
  
  pUVar13 = (__this->fields).__4__this;
  if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UI_BasePanel_o *)(pUVar13->fields).m_CachedPtr;
  if (__this_02 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = __this_02;
  if (g_data_057ae706 == '\0') {
    pUVar14 = (UI_BasePanel_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae706 = '\x01';
  }
  pUVar2 = (__this_02->fields).DoublePanelLeft;
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = (__this_02->fields).m_CancellationTokenSource,
     pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0)) {
    __this_01 = (UnityEngine_Transform_c *)(pUVar2->fields).m_CachedPtr;
    pUVar14 = (UI_BasePanel_o *)0x0;
    if (__this_01 != (UnityEngine_Transform_c *)0x0) {
      pUVar11 = pUVar2[1].klass;
      lVar4 = (__this_02->fields).m_CachedPtr;
      pUVar6 = (UnityEngine_Transform_c *)(__this_02->fields).SinglePanel;
      index = *(int *)((long)&(pSVar3->fields)._kernelEvent + 4);
      pUVar9 = __this_01;
      if (g_data_057ae702 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
        pUVar9 = (UnityEngine_Transform_c *)&MethodInfo_Void_set_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae702 = '\x01';
      }
      if (index < 0) {
        return;
      }
      if (pUVar6 != (UnityEngine_Transform_c *)0x0) {
        if (*(int *)&(pUVar6->_1).namespaze <= index) {
          return;
        }
        value = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)pUVar6,index,MethodInfo_Int32_get_Item);
        pUVar9 = pUVar6;
        if (pUVar11 != (UnityEngine_Transform_c *)0x0) {
          pvVar1 = (pUVar11->_1).image;
          if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
            lVar10 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar10) == TypeInfo_ISetSettingsContainer) {
                puVar5 = (undefined8 *)
                         ((long)pvVar1 +
                         (long)(*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar10) + 1) * 0x10 + 0x138);
                goto label_0444d5e2;
              }
              lVar10 = lVar10 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar10);
          }
          puVar5 = (undefined8 *)il2cpp_runtime_helper_02300d20(pUVar11,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
          pUVar6 = (UnityEngine_Transform_c *)(*(code *)*puVar5)();
          pUVar9 = pUVar11;
          if ((pUVar6 != (UnityEngine_Transform_c *)0x0) &&
             (Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar6,value,MethodInfo_Void_set_Value)
             , pUVar9 = pUVar6, lVar4 != 0)) {
            __this_00 = *(Settings_TypedSetting_int__o **)(lVar4 + 0x78);
            pUVar9 = (UnityEngine_Transform_c *)0x0;
            if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
              UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae704 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
        il2cpp_runtime_helper_023445d0(&"Human");
        il2cpp_runtime_helper_023445d0(&"Shifter");
        il2cpp_runtime_helper_023445d0(&"Skybox");
        g_data_057ae704 = '\x01';
      }
      handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
      pIVar12 = (pUVar9->_1).declaringType;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pIVar12 != (Il2CppClass *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Human",
                   (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
        pIVar12 = (pUVar9->_1).declaringType;
        handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
        if (pIVar12 != (Il2CppClass *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Shifter",
                     (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
          pIVar12 = (pUVar9->_1).declaringType;
          handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
          pSVar7 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
          if (pIVar12 != (Il2CppClass *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Skybox",
                       (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar12;
            if ((lVar4 != 0) &&
               (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar9->_1).typeMetadataHandle,
               handle.fields.value != 0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                         "Human",*(Il2CppObject **)(lVar4 + 0x20),MethodInfo_Void_Add);
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar4 != 0) &&
                 (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar9->_1).typeMetadataHandle,
                 handle.fields.value != 0)) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                           "Shifter",*(Il2CppObject **)(lVar4 + 0x30),MethodInfo_Void_Add);
                lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                if (lVar4 != 0) {
                  pSVar8 = (pUVar9->_1).typeMetadataHandle;
                  handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar8,"Skybox",*(Il2CppObject **)(lVar4 + 0x38),MethodInfo_Void_Add);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae705 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
        g_data_057ae705 = '\x01';
      }
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
      (((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle = pSVar8;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle);
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pUVar14->fields).m_CancellationTokenSource;
  if (((pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) &&
      (lVar4 = *(long *)&(pSVar3->fields)._disposed, lVar4 != 0)) &&
     (pUVar13 = *(UI_SettingsSkinsPanel_o **)(lVar4 + 0x10), pUVar13 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar13,(System_String_o *)(pUVar14->fields).m_CachedPtr,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pUVar14->fields).m_CancellationTokenSource;
  if ((pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (pUVar13 = (UI_SettingsSkinsPanel_o *)(pSVar3->fields)._kernelEvent,
     pUVar13 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar13,(System_String_o *)(pUVar14->fields).m_CachedPtr,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = (UI_SettingsSkinsPanel_o *)(pUVar14->fields).m_CachedPtr;
  if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar13,(System_String_o *)(pUVar14->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = (UI_SettingsSkinsPanel_o *)(pUVar13->fields).m_CachedPtr;
  if (pUVar15 == (UI_SettingsSkinsPanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UI_SettingsSkinsPanel_o *)(pUVar15->fields).m_CachedPtr;
    if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
      UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
                (pUVar13,(System_String_o *)(pUVar15->fields).m_CancellationTokenSource,method_04);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar15 = (UI_SettingsSkinsPanel_o *)(pUVar13->fields).m_CachedPtr;
    if (pUVar15 == (UI_SettingsSkinsPanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar15,(System_String_o *)(pUVar13->fields).m_CancellationTokenSource,method_05);
    return;
  }
  UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
            (pUVar15,(System_String_o *)(pUVar13->fields).m_CancellationTokenSource,method_03);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_0$$<CreateCommonSettings>b__4
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_0___CreateCommonSettings_b__4 (UI_SettingsSkinsPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x444d960

void UI_SettingsSkinsPanel___c__DisplayClass7_0___CreateCommonSettings_b__4
               (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  int index;
  void *pvVar1;
  Settings_TypedSetting_int__o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  UnityEngine_Transform_c *__this_01;
  long lVar4;
  int32_t value;
  undefined8 *puVar5;
  UnityEngine_Transform_c *pUVar6;
  System_Type_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_Transform_c *pUVar9;
  long lVar10;
  UnityEngine_Transform_c *pUVar11;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *pIVar12;
  UI_SettingsSkinsPanel_o *pUVar13;
  UI_SettingsSkinsPanel_o *pUVar14;
  
  pUVar13 = (__this->fields).__4__this;
  if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = pUVar13;
  if (g_data_057ae706 == '\0') {
    pUVar14 = (UI_SettingsSkinsPanel_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae706 = '\x01';
  }
  pUVar2 = (pUVar13->fields).DoublePanelLeft;
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = (pUVar13->fields).m_CancellationTokenSource,
     pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0)) {
    __this_01 = (UnityEngine_Transform_c *)(pUVar2->fields).m_CachedPtr;
    pUVar14 = (UI_SettingsSkinsPanel_o *)0x0;
    if (__this_01 != (UnityEngine_Transform_c *)0x0) {
      pUVar11 = pUVar2[1].klass;
      lVar4 = (pUVar13->fields).m_CachedPtr;
      pUVar6 = (UnityEngine_Transform_c *)(pUVar13->fields).SinglePanel;
      index = *(int *)((long)&(pSVar3->fields)._kernelEvent + 4);
      pUVar9 = __this_01;
      if (g_data_057ae702 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
        pUVar9 = (UnityEngine_Transform_c *)&MethodInfo_Void_set_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae702 = '\x01';
      }
      if (index < 0) {
        return;
      }
      if (pUVar6 != (UnityEngine_Transform_c *)0x0) {
        if (*(int *)&(pUVar6->_1).namespaze <= index) {
          return;
        }
        value = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)pUVar6,index,MethodInfo_Int32_get_Item);
        pUVar9 = pUVar6;
        if (pUVar11 != (UnityEngine_Transform_c *)0x0) {
          pvVar1 = (pUVar11->_1).image;
          if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
            lVar10 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar10) == TypeInfo_ISetSettingsContainer) {
                puVar5 = (undefined8 *)
                         ((long)pvVar1 +
                         (long)(*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar10) + 1) * 0x10 + 0x138);
                goto label_0444d5e2;
              }
              lVar10 = lVar10 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar10);
          }
          puVar5 = (undefined8 *)il2cpp_runtime_helper_02300d20(pUVar11,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
          pUVar6 = (UnityEngine_Transform_c *)(*(code *)*puVar5)();
          pUVar9 = pUVar11;
          if ((pUVar6 != (UnityEngine_Transform_c *)0x0) &&
             (Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar6,value,MethodInfo_Void_set_Value)
             , pUVar9 = pUVar6, lVar4 != 0)) {
            __this_00 = *(Settings_TypedSetting_int__o **)(lVar4 + 0x78);
            pUVar9 = (UnityEngine_Transform_c *)0x0;
            if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
              UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae704 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
        il2cpp_runtime_helper_023445d0(&"Human");
        il2cpp_runtime_helper_023445d0(&"Shifter");
        il2cpp_runtime_helper_023445d0(&"Skybox");
        g_data_057ae704 = '\x01';
      }
      handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
      pIVar12 = (pUVar9->_1).declaringType;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pIVar12 != (Il2CppClass *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Human",
                   (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
        pIVar12 = (pUVar9->_1).declaringType;
        handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
        if (pIVar12 != (Il2CppClass *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Shifter",
                     (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
          pIVar12 = (pUVar9->_1).declaringType;
          handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
          pSVar7 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
          if (pIVar12 != (Il2CppClass *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,"Skybox",
                       (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar12;
            if ((lVar4 != 0) &&
               (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar9->_1).typeMetadataHandle,
               handle.fields.value != 0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                         "Human",*(Il2CppObject **)(lVar4 + 0x20),MethodInfo_Void_Add);
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar4 != 0) &&
                 (handle.fields.value = (System_RuntimeTypeHandle_Fields)(pUVar9->_1).typeMetadataHandle,
                 handle.fields.value != 0)) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                           "Shifter",*(Il2CppObject **)(lVar4 + 0x30),MethodInfo_Void_Add);
                lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                if (lVar4 != 0) {
                  pSVar8 = (pUVar9->_1).typeMetadataHandle;
                  handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar8,"Skybox",*(Il2CppObject **)(lVar4 + 0x38),MethodInfo_Void_Add);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae705 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
        g_data_057ae705 = '\x01';
      }
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar8,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
      (((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle = pSVar8;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).typeMetadataHandle);
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pUVar14->fields).m_CancellationTokenSource;
  if (((pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) &&
      (lVar4 = *(long *)&(pSVar3->fields)._disposed, lVar4 != 0)) &&
     (pUVar13 = *(UI_SettingsSkinsPanel_o **)(lVar4 + 0x10), pUVar13 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar13,(System_String_o *)(pUVar14->fields).m_CachedPtr,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (pUVar14->fields).m_CancellationTokenSource;
  if ((pSVar3 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (pUVar13 = (UI_SettingsSkinsPanel_o *)(pSVar3->fields)._kernelEvent,
     pUVar13 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar13,(System_String_o *)(pUVar14->fields).m_CachedPtr,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = (UI_SettingsSkinsPanel_o *)(pUVar14->fields).m_CachedPtr;
  if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar13,(System_String_o *)(pUVar14->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = (UI_SettingsSkinsPanel_o *)(pUVar13->fields).m_CachedPtr;
  if (pUVar14 == (UI_SettingsSkinsPanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UI_SettingsSkinsPanel_o *)(pUVar14->fields).m_CachedPtr;
    if (pUVar13 != (UI_SettingsSkinsPanel_o *)0x0) {
      UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
                (pUVar13,(System_String_o *)(pUVar14->fields).m_CancellationTokenSource,method_04);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar14 = (UI_SettingsSkinsPanel_o *)(pUVar13->fields).m_CachedPtr;
    if (pUVar14 == (UI_SettingsSkinsPanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar14,(System_String_o *)(pUVar13->fields).m_CancellationTokenSource,method_05);
    return;
  }
  UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
            (pUVar14,(System_String_o *)(pUVar13->fields).m_CancellationTokenSource,method_03);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_1$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_1___ctor (UI_SettingsSkinsPanel___c__DisplayClass7_1_o* __this, const MethodInfo* method);
// 0x444bb10

void UI_SettingsSkinsPanel___c__DisplayClass7_1___ctor
               (UI_SettingsSkinsPanel___c__DisplayClass7_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_1$$<CreateCommonSettings>b__2
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_1___CreateCommonSettings_b__2 (UI_SettingsSkinsPanel___c__DisplayClass7_1_o* __this, const MethodInfo* method);
// 0x444d980

void UI_SettingsSkinsPanel___c__DisplayClass7_1___CreateCommonSettings_b__2
               (UI_SettingsSkinsPanel___c__DisplayClass7_1_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int index;
  UI_BasePanel_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  UI_SettingsSkinsPanel___c__DisplayClass7_0_o *pUVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_HumanCustomSkinSettings_o *pSVar7;
  void *pvVar8;
  int32_t value;
  VirtualInvokeData *pVVar9;
  UI_SettingsSkinsPanel_o *pUVar10;
  System_Type_o *pSVar11;
  UI_CategoryPanel_c *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo_2A23FA0 **ppMVar12;
  long lVar13;
  System_RuntimeTypeHandle_o handle;
  UI_CategoryPanel_o *__this_01;
  UI_SettingsSkinsPanel___c__DisplayClass7_1_o *pUVar14;
  UI_SettingsSkinsPanel_o *pUVar15;
  UI_SettingsSkinsPanel_o *pUVar16;
  
  pUVar14 = __this;
  if (g_data_057ae706 == '\0') {
    pUVar14 = (UI_SettingsSkinsPanel___c__DisplayClass7_1_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae706 = '\x01';
  }
  pUVar5 = (__this->fields).CS___8__locals1;
  if ((pUVar5 != (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *)0x0) &&
     (pSVar6 = (__this->fields).filteredSetIndex, pSVar6 != (Settings_IntSetting_o *)0x0)) {
    pUVar15 = (pUVar5->fields).__4__this;
    pUVar14 = (UI_SettingsSkinsPanel___c__DisplayClass7_1_o *)0x0;
    if (pUVar15 != (UI_SettingsSkinsPanel_o *)0x0) {
      pUVar16 = (UI_SettingsSkinsPanel_o *)(pUVar5->fields).settings;
      pSVar7 = (__this->fields).humanSettings;
      pUVar10 = (UI_SettingsSkinsPanel_o *)(__this->fields).originalIndices;
      index = (pSVar6->fields)._value;
      ppMVar12 = (MethodInfo_2A23FA0 **)pUVar15;
      if (g_data_057ae702 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
        ppMVar12 = &MethodInfo_Void_set_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae702 = '\x01';
      }
      if (index < 0) {
        return;
      }
      if (pUVar10 != (UI_SettingsSkinsPanel_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_CancellationTokenSource <= index) {
          return;
        }
        value = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)pUVar10,index,MethodInfo_Int32_get_Item);
        ppMVar12 = (MethodInfo_2A23FA0 **)pUVar10;
        if (pUVar16 != (UI_SettingsSkinsPanel_o *)0x0) {
          pUVar2 = (UI_BasePanel_c *)pUVar16->klass;
          uVar1._0_1_ = (pUVar2->_2).rank;
          uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar3 = (pUVar2->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_ISetSettingsContainer) {
                pVVar9 = &(pUVar2->vtable)._0_Equals + (*(int *)((long)&pIVar3->offset + lVar13) + 1);
                goto label_0444d5e2;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar13);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar16,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
          pUVar10 = (UI_SettingsSkinsPanel_o *)(*pVVar9->methodPtr)();
          ppMVar12 = (MethodInfo_2A23FA0 **)pUVar16;
          if ((pUVar10 != (UI_SettingsSkinsPanel_o *)0x0) &&
             (Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pUVar10,value,MethodInfo_Void_set_Value),
             ppMVar12 = (MethodInfo_2A23FA0 **)pUVar10, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0))
          {
            pSVar6 = (pSVar7->fields).LastGlobalPresetIndex;
            ppMVar12 = (MethodInfo_2A23FA0 **)0x0;
            if (pSVar6 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,value,MethodInfo_Void_set_Value)
              ;
              UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar15,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae704 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
        il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
        il2cpp_runtime_helper_023445d0(&"Human");
        il2cpp_runtime_helper_023445d0(&"Shifter");
        il2cpp_runtime_helper_023445d0(&"Skybox");
        g_data_057ae704 = '\x01';
      }
      handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (((UI_SettingsSkinsPanel_o *)ppMVar12)->fields)._categoryPanelTypes;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar4,"Human",(Il2CppObject *)pSVar11,MethodInfo_Void_Add);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (((UI_SettingsSkinsPanel_o *)ppMVar12)->fields)._categoryPanelTypes;
        handle = TypeRef_SettingsSkinsDefaultPanel;
        pSVar11 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,"Shifter",(Il2CppObject *)pSVar11,MethodInfo_Void_Add);
          __this_01 = (UI_CategoryPanel_o *)
                      (((UI_SettingsSkinsPanel_o *)ppMVar12)->fields)._categoryPanelTypes;
          handle = TypeRef_SettingsSkinsDefaultPanel;
          pSVar11 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
          if (__this_01 != (UI_CategoryPanel_o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,"Skybox",
                       (Il2CppObject *)pSVar11,MethodInfo_Void_Add);
            lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_01;
            if ((lVar13 != 0) &&
               (handle.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     (((UI_SettingsSkinsPanel_o *)ppMVar12)->fields)._settings, handle.fields.value != 0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                         "Human",*(Il2CppObject **)(lVar13 + 0x20),MethodInfo_Void_Add);
              lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar13 != 0) &&
                 (handle.fields.value =
                       (System_RuntimeTypeHandle_Fields)
                       (((UI_SettingsSkinsPanel_o *)ppMVar12)->fields)._settings, handle.fields.value != 0)) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                           "Shifter",*(Il2CppObject **)(lVar13 + 0x30),MethodInfo_Void_Add);
                lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                if (lVar13 != 0) {
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (((UI_SettingsSkinsPanel_o *)ppMVar12)->fields)._settings;
                  handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar4,"Skybox",*(Il2CppObject **)(lVar13 + 0x38),MethodInfo_Void_Add);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae705 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
        g_data_057ae705 = '\x01';
      }
      __this_00 = (UI_CategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
      ((UI_CategoryPanel_o *)((long)handle.fields.value + 0x68))->klass = __this_00;
      il2cpp_runtime_helper_022b4080((UI_CategoryPanel_o *)((long)handle.fields.value + 0x68));
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = (pUVar14->fields).filteredSetIndex;
  if (((pSVar6 != (Settings_IntSetting_o *)0x0) && (pvVar8 = pSVar6[1].monitor, pvVar8 != (void *)0x0)) &&
     (pUVar15 = *(UI_SettingsSkinsPanel_o **)((long)pvVar8 + 0x10), pUVar15 != (UI_SettingsSkinsPanel_o *)0x0)
     ) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar15,(System_String_o *)(pUVar14->fields).humanSettings,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = (pUVar14->fields).filteredSetIndex;
  if ((pSVar6 != (Settings_IntSetting_o *)0x0) &&
     (pUVar15 = *(UI_SettingsSkinsPanel_o **)&pSVar6->fields, pUVar15 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
              (pUVar15,(System_String_o *)(pUVar14->fields).humanSettings,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = (UI_SettingsSkinsPanel_o *)(pUVar14->fields).humanSettings;
  if (pUVar15 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar15,(System_String_o *)(pUVar14->fields).filteredSetIndex,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar16 = (UI_SettingsSkinsPanel_o *)(pUVar15->fields).m_CachedPtr;
  if (pUVar16 == (UI_SettingsSkinsPanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar15 = (UI_SettingsSkinsPanel_o *)(pUVar16->fields).m_CachedPtr;
    if (pUVar15 != (UI_SettingsSkinsPanel_o *)0x0) {
      UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
                (pUVar15,(System_String_o *)(pUVar16->fields).m_CancellationTokenSource,method_04);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar16 = (UI_SettingsSkinsPanel_o *)(pUVar15->fields).m_CachedPtr;
    if (pUVar16 == (UI_SettingsSkinsPanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar16,(System_String_o *)(pUVar15->fields).m_CancellationTokenSource,method_05);
    return;
  }
  UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
            (pUVar16,(System_String_o *)(pUVar15->fields).m_CancellationTokenSource,method_03);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_2$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_2___ctor (UI_SettingsSkinsPanel___c__DisplayClass7_2_o* __this, const MethodInfo* method);
// 0x444bb20

void UI_SettingsSkinsPanel___c__DisplayClass7_2___ctor
               (UI_SettingsSkinsPanel___c__DisplayClass7_2_o *__this,MethodInfo *method)

{
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_2$$<CreateCommonSettings>b__3
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_2___CreateCommonSettings_b__3 (UI_SettingsSkinsPanel___c__DisplayClass7_2_o* __this, const MethodInfo* method);
// 0x444d9e0

void UI_SettingsSkinsPanel___c__DisplayClass7_2___CreateCommonSettings_b__3
               (UI_SettingsSkinsPanel___c__DisplayClass7_2_o *__this,MethodInfo *method)

{
  UI_SettingsSkinsPanel___c__DisplayClass7_1_o *pUVar1;
  UI_SettingsSkinsPanel___c__DisplayClass7_0_o *pUVar2;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UI_SettingsSkinsPanel_o *pUVar3;
  UI_SettingsSkinsPanel_o *pUVar4;
  
  pUVar1 = (__this->fields).CS___8__locals2;
  if (((pUVar1 != (UI_SettingsSkinsPanel___c__DisplayClass7_1_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).CS___8__locals1,
      pUVar2 != (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *)0x0)) &&
     (pUVar3 = (pUVar2->fields).__4__this, pUVar3 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick(pUVar3,(__this->fields).button,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).CS___8__locals2;
  if ((pUVar1 != (UI_SettingsSkinsPanel___c__DisplayClass7_1_o *)0x0) &&
     (pUVar3 = (UI_SettingsSkinsPanel_o *)(pUVar1->fields).humanSettings,
     pUVar3 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick(pUVar3,(__this->fields).button,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_SettingsSkinsPanel_o *)(__this->fields).button;
  if (pUVar3 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar3,(System_String_o *)(__this->fields).CS___8__locals2,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UI_SettingsSkinsPanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar4 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar4,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_SettingsSkinsPanel_o *)(pUVar4->fields).m_CachedPtr;
  if (pUVar3 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar4->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UI_SettingsSkinsPanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar4 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar4,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_3$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_3___ctor (UI_SettingsSkinsPanel___c__DisplayClass7_3_o* __this, const MethodInfo* method);
// 0x444bed0

void UI_SettingsSkinsPanel___c__DisplayClass7_3___ctor
               (UI_SettingsSkinsPanel___c__DisplayClass7_3_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass7_3$$<CreateCommonSettings>b__5
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass7_3___CreateCommonSettings_b__5 (UI_SettingsSkinsPanel___c__DisplayClass7_3_o* __this, const MethodInfo* method);
// 0x444da10

void UI_SettingsSkinsPanel___c__DisplayClass7_3___CreateCommonSettings_b__5
               (UI_SettingsSkinsPanel___c__DisplayClass7_3_o *__this,MethodInfo *method)

{
  UI_SettingsSkinsPanel___c__DisplayClass7_0_o *pUVar1;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UI_SettingsSkinsPanel_o *pUVar2;
  UI_SettingsSkinsPanel_o *pUVar3;
  
  pUVar1 = (__this->fields).CS___8__locals3;
  if ((pUVar1 != (UI_SettingsSkinsPanel___c__DisplayClass7_0_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).__4__this, pUVar2 != (UI_SettingsSkinsPanel_o *)0x0)) {
    UI_SettingsSkinsPanel__OnSkinsPanelButtonClick(pUVar2,(__this->fields).button,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_SettingsSkinsPanel_o *)(__this->fields).button;
  if (pUVar2 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar2,(System_String_o *)(__this->fields).CS___8__locals3,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_SettingsSkinsPanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_SettingsSkinsPanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_SettingsSkinsPanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass8_0___ctor (UI_SettingsSkinsPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x444c580

void UI_SettingsSkinsPanel___c__DisplayClass8_0___ctor
               (UI_SettingsSkinsPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass8_0$$<OnSkinsPanelButtonClick>b__0
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__0 (UI_SettingsSkinsPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x444da40

void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__0
               (UI_SettingsSkinsPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_SettingsSkinsPanel_o *pUVar1;
  UI_SettingsSkinsPanel_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish(pUVar1,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_SettingsSkinsPanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_SettingsSkinsPanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_SettingsSkinsPanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass8_0$$<OnSkinsPanelButtonClick>b__1
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__1 (UI_SettingsSkinsPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x444da60

void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__1
               (UI_SettingsSkinsPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_SettingsSkinsPanel_o *pUVar1;
  UI_SettingsSkinsPanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish(pUVar1,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_SettingsSkinsPanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (__this_00,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_SettingsSkinsPanel_o *)(__this_00->fields).m_CachedPtr;
  if (pUVar1 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (pUVar1,(System_String_o *)(__this_00->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass8_0$$<OnSkinsPanelButtonClick>b__2
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__2 (UI_SettingsSkinsPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x444da80

void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__2
               (UI_SettingsSkinsPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UI_SettingsSkinsPanel_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  UI_SettingsSkinsPanel_o *__this_01;
  
  __this_01 = (__this->fields).__4__this;
  if (__this_01 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish(__this_01,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_SettingsSkinsPanel_o *)(__this_01->fields).m_CachedPtr;
  if (__this_00 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
              (__this_00,(System_String_o *)(__this_01->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsSkinsPanel.<>c__DisplayClass8_0$$<OnSkinsPanelButtonClick>b__3
// il2cpp: void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__3 (UI_SettingsSkinsPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x444daa0

void UI_SettingsSkinsPanel___c__DisplayClass8_0___OnSkinsPanelButtonClick_b__3
               (UI_SettingsSkinsPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UI_SettingsSkinsPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_SettingsSkinsPanel__OnSkinsSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsSkinsPanel$$get_CategoryPanel
// il2cpp: bool UI_SettingsSkinsPanel__get_CategoryPanel (UI_SettingsSkinsPanel_o* __this, const MethodInfo* method);
// 0x444ba60

bool_conflict UI_SettingsSkinsPanel__get_CategoryPanel(UI_SettingsSkinsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSkinsPanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsSkinsPanel__get_DefaultCategoryPanel (UI_SettingsSkinsPanel_o* __this, const MethodInfo* method);
// 0x444ba70

System_String_o *
UI_SettingsSkinsPanel__get_DefaultCategoryPanel(UI_SettingsSkinsPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae6f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Human");
    g_data_057ae6f9 = '\x01';
  }
  return "Human";
}


// UI.SettingsSkinsPanel$$CreateCommonSettings
// il2cpp: void UI_SettingsSkinsPanel__CreateCommonSettings (UI_SettingsSkinsPanel_o* __this, UnityEngine_Transform_o* panelLeft, UnityEngine_Transform_o* panelRight, const MethodInfo* method);
// 0x4448d60

void UI_SettingsSkinsPanel__CreateCommonSettings
               (UI_SettingsSkinsPanel_o *__this,UnityEngine_Transform_o *panelLeft,
               UnityEngine_Transform_o *panelRight,MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *pSVar2;
  int32_t *piVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  Settings_StringSetting_o *pSVar13;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long *plVar14;
  System_Int32_array *pSVar15;
  System_Collections_Generic_List_int__o *pSVar16;
  Settings_IntSetting_o *pSVar17;
  void *pvVar18;
  System_RuntimeTypeHandle_o SVar19;
  undefined4 uVar20;
  char cVar21;
  bool_conflict bVar22;
  int32_t iVar23;
  uint uVar24;
  bool_conflict bVar25;
  bool_conflict bVar26;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar27;
  System_String_o *pSVar28;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_01;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  UI_ElementStyle_o *pUVar29;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar30;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar31;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar32;
  UnityEngine_GameObject_o *pUVar33;
  UI_SettingsSkinsPanel_o *pUVar34;
  UnityEngine_Transform_o *pUVar35;
  VirtualInvokeData *pVVar36;
  System_String_o *pSVar37;
  undefined8 *puVar38;
  Settings_BaseSetting_o *pSVar39;
  System_String_o *pSVar40;
  Il2CppObject *pIVar41;
  System_Collections_Generic_List_object__o *__this_04;
  Il2CppClass *pIVar42;
  long *plVar43;
  System_Type_o *pSVar44;
  System_Type_o *pSVar45;
  Il2CppObject *pIVar46;
  int iVar47;
  Il2CppClass *extraout_RDX;
  Il2CppRuntimeInterfaceOffsetPair *pIVar48;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_RBX;
  System_Collections_Generic_Dictionary_string__BaseSetting__Fields *pSVar49;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_RBP;
  int32_t value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar50;
  Il2CppClass *pIVar51;
  MethodInfo *pMVar52;
  long lVar53;
  long lVar54;
  Settings_HumanCustomSkinSettings_Fields *pSVar55;
  long lVar56;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *in_R9;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar57;
  UI_SettingsSkinsPanel_o *pUVar58;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar59;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R15;
  float titleWidth;
  float in_XMM1_Da;
  undefined1 auVar60 [12];
  long *local_128;
  int local_11c;
  long local_108;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *local_88;
  
  if (g_data_057ae6fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SetSpecificSkinsEnabled");
    il2cpp_runtime_helper_023445d0(&"Custom Set:");
    il2cpp_runtime_helper_023445d0(&"SkinsLocal");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"GlobalSkinOverridesEnabled");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"SkinsLocalTooltip");
    il2cpp_runtime_helper_023445d0(&"SkinsEnabled");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"SkinMode");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"GlobalSkinOverridesEnabledTooltip");
    il2cpp_runtime_helper_023445d0(&"Skins.Common");
    il2cpp_runtime_helper_023445d0(&"Skybox");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"SetSpecificSkinsEnabledTooltip");
    il2cpp_runtime_helper_023445d0(&"Global");
    g_data_057ae6fa = '\x01';
  }
  pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
  pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  System_Object___ctor((Il2CppObject *)pSVar27,(MethodInfo *)0x0);
  pSVar57 = pSVar27;
  if (pSVar27 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
label_0444a677:
    do {
      do {
        il2cpp_runtime_helper_022b2c90();
        __this_03 = pSVar57;
label_0444a682:
        pUVar58 = __this;
        il2cpp_runtime_helper_022b2fd0(pSVar50);
label_0444a687:
        il2cpp_runtime_helper_022b2fd0(unaff_RBP);
        pUVar34 = pUVar58;
label_0444a68f:
        pIVar41 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_3);
        pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        System_Object___ctor(pIVar41,(MethodInfo *)0x0);
        pSVar57 = __this_03;
        __this = pUVar34;
      } while (pIVar41 == (Il2CppObject *)0x0);
      pIVar41[1].monitor = local_88;
      il2cpp_runtime_helper_022b4080(&pIVar41[1].monitor);
      iVar47 = (int)method;
      if (*(int *)&__this_03->max_length == 0) goto label_0444a721;
      pIVar41[1].klass = (unaff_RBP->obj).klass;
      il2cpp_runtime_helper_022b4080(pIVar41 + 1);
      il2cpp_runtime_helper_022b2c90();
label_0444a6e3:
      unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                  il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_2);
      pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
      iVar47 = (int)method;
      pSVar57 = __this_03;
      __this = pUVar34;
    } while ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX ==
             (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0);
    ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->max_length =
         (il2cpp_array_size_t)local_88;
    il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->
                        max_length);
    if (*(int *)&(pUVar34->fields).m_CancellationTokenSource == 0) goto label_0444a721;
  }
  else {
    pSVar27->bounds = (Il2CppArrayBounds *)__this;
    il2cpp_runtime_helper_022b4080(&pSVar27->bounds,__this);
    pSVar28 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x18,140.0,20.0,pSVar28,(MethodInfo *)0x0);
    pSVar28 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_02,0x18,200.0,20.0,pSVar28,(MethodInfo *)0x0);
    unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar29 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&g_data_00000018;
    in_XMM1_Da = 20.0;
    method = (MethodInfo *)0x0;
    UI_ElementStyle___ctor(pUVar29,0x18,0.0,20.0,(System_String_o *)unaff_RBX,(MethodInfo *)0x0);
    if (g_data_057ae6ff == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057ae6ff = '\x01';
    }
    pSVar13 = (__this->fields)._currentCategoryPanelName;
    unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&TypeInfo_ElementStyle;
    unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)__this_02;
    if ((pSVar13 == (Settings_StringSetting_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_0444a677;
    pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_00,(Il2CppObject *)(pSVar13->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
    pUVar58 = (UI_SettingsSkinsPanel_o *)&pSVar27->max_length;
    pSVar27->max_length = (il2cpp_array_size_t)pSVar50;
    il2cpp_runtime_helper_022b4080(pUVar58,pSVar50);
    pSVar13 = (__this->fields)._currentCategoryPanelName;
    if (pSVar13 == (Settings_StringSetting_o *)0x0) goto label_0444a677;
    pSVar28 = (pSVar13->fields)._value;
    pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x3;
    pSVar30 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
    iVar47 = (int)method;
    if (pSVar30 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0444a677;
    unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)pSVar30;
    if ((int)pSVar30->max_length != 0) {
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar30->m_Items[0].fields =
           "Human";
      il2cpp_runtime_helper_022b4080(pSVar30->m_Items);
      if (1 < (uint)pSVar30->max_length) {
        pSVar30->m_Items[0].fields.key = "Shifter";
        il2cpp_runtime_helper_022b4080(&pSVar30->m_Items[0].fields.key);
        if (2 < (uint)pSVar30->max_length) {
          pSVar30->m_Items[0].fields.value = "Skybox";
          il2cpp_runtime_helper_022b4080(&pSVar30->m_Items[0].fields.value);
          pSVar13 = (__this->fields)._currentCategoryPanelName;
          pSVar40 = "Category";
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar40 = "Category";
          }
          "Category" = pSVar40;
          if (g_data_057ae727 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"Common");
            il2cpp_runtime_helper_023445d0(&"");
            g_data_057ae727 = '\x01';
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                      UI_UIManager__GetLocale
                                ("Common",pSVar40,(System_String_o *)"",
                                 (System_String_o *)"",(System_String_o *)"",
                                 (MethodInfo *)in_R9);
          unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          in_XMM1_Da = 40.0;
          method = (MethodInfo *)unaff_R15;
          pSVar50 = __this_01;
          in_R9 = "";
          UI_ElementFactory__CreateDropdownSetting
                    (panelLeft,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar13,
                     (System_String_o *)unaff_R15,(System_String_array *)pSVar30,
                     (System_String_o *)"",260.0,40.0,300.0,(System_Nullable_float__o)0x0,
                     (UnityEngine_Events_UnityAction_o *)unaff_RBP,(MethodInfo *)0x0);
          pSVar30 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(__this->fields).Parent
          ;
          pSVar57 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&"";
          local_88 = pSVar27;
          if (pSVar30 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            pIVar51 = (pSVar30->obj).klass;
            bVar5 = (TypeInfo_SettingsPopup->_2).naturalAligment;
            method = (MethodInfo *)(ulong)bVar5;
            pSVar50 = pSVar30;
            __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&"";
            if ((pIVar51->_2).naturalAligment < bVar5) goto label_0444a682;
            if ((pIVar51->_2).typeHierarchy
                [(long)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               ((long)method + -0x180008))->m_Items[0xfffe].fields.value + 7)] != TypeInfo_SettingsPopup
               ) goto label_0444a682;
            pSVar40 = (System_String_o *)pSVar30->m_Items[5].fields.value;
            pSVar50 = "Human";
            bVar22 = System_String__op_Equality(pSVar28,(System_String_o *)"Human",(MethodInfo *)0x0);
            if ((char)bVar22 == '\0') {
              unaff_RBX = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array ***)pUVar58;
              unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pUVar58;
              pSVar57 = pSVar27;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX !=
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                plVar43 = &TypeInfo_ISetSettingsContainer;
                pIVar51 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->obj
                          ).klass;
                uVar6._0_1_ = (pIVar51->_2).rank;
                uVar6._1_1_ = (pIVar51->_2).minimumAlignment;
                if ((ulong)uVar6 != 0) {
                  pIVar48 = (pIVar51->_1).interfaceOffsets;
                  lVar53 = 0;
                  do {
                    if (*(long *)((long)&pIVar48->interfaceType + lVar53) == TypeInfo_ISetSettingsContainer) {
                      method = (MethodInfo *)
                               (pIVar51->vtable + (*(int *)((long)&pIVar48->offset + lVar53) + 1));
                      goto label_04449730;
                    }
                    lVar53 = lVar53 + 0x10;
                  } while ((ulong)uVar6 << 4 != lVar53);
                }
                method = (MethodInfo *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_ISetSettingsContainer,1);
label_04449730:
                pSVar50 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method)->obj).
                          monitor;
                pSVar39 = (Settings_BaseSetting_o *)
                          (*(code *)(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     method)->obj).klass)(unaff_RBX,pSVar50);
                plVar14 = *(long **)pUVar58;
                unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)plVar43;
                if (plVar14 != (long *)0x0) {
                  lVar53 = *plVar14;
                  if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
                    lVar54 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_ISetSettingsContainer) {
                        puVar38 = (undefined8 *)
                                  ((long)(*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) + 3) * 0x10 + lVar53
                                  + 0x138);
                        goto label_044497a9;
                      }
                      lVar54 = lVar54 + 0x10;
                    } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
                  }
                  puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_ISetSettingsContainer,3);
label_044497a9:
                  unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              (*(code *)*puVar38)(plVar14,puVar38[1]);
                  pUVar32 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_XMM1_Da = 40.0;
                  method = (MethodInfo *)"Set";
                  in_R9 = "";
                  UI_ElementFactory__CreateDropdownSetting
                            (panelLeft,(UI_ElementStyle_o *)__this_01,pSVar39,(System_String_o *)"Set",
                             (System_String_array *)unaff_RBP,(System_String_o *)"",260.0,40.0,300.0
                             ,(System_Nullable_float__o)0x0,pUVar32,(MethodInfo *)0x0);
                  pUVar33 = UI_ElementFactory__CreateHorizontalGroup(panelLeft,10.0,2,(MethodInfo *)0x0);
                  pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&g_data_00000004;
                  __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
                  iVar47 = (int)method;
                  unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)panelLeft;
                  if (__this_03 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    if (*(int *)&__this_03->max_length != 0) {
                      unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                  __this_03->m_Items;
                      *(UnityEngine_Transform_o **)&__this_03->m_Items[0].fields = "Create";
                      il2cpp_runtime_helper_022b4080(unaff_RBP);
                      iVar47 = (int)method;
                      if (1 < *(uint *)&__this_03->max_length) {
                        __this_03->m_Items[0].fields.key = (Il2CppObject *)"Delete";
                        il2cpp_runtime_helper_022b4080(&__this_03->m_Items[0].fields.key);
                        iVar47 = (int)method;
                        if (2 < *(uint *)&__this_03->max_length) {
                          __this_03->m_Items[0].fields.value = (Il2CppObject *)"Rename";
                          il2cpp_runtime_helper_022b4080(&__this_03->m_Items[0].fields.value);
                          iVar47 = (int)method;
                          if (3 < *(uint *)&__this_03->max_length) {
                            *(System_Collections_Generic_List_BasePopup__o **)&__this_03->m_Items[1].fields =
                                 "Copy";
                            il2cpp_runtime_helper_022b4080(__this_03->m_Items + 1);
                            if (0 < *(int *)&__this_03->max_length) {
                              pUVar34 = __this;
                              if (pUVar33 == (UnityEngine_GameObject_o *)0x0) goto label_0444a68f;
                              __this = (UI_SettingsSkinsPanel_o *)0x0;
                              do {
                                unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_3);
                                pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          0x0;
                                System_Object___ctor((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
                                iVar47 = (int)method;
                                pSVar57 = __this_03;
                                if (unaff_RBP ==
                                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                                goto label_0444a677;
                                unaff_RBP->max_length = (il2cpp_array_size_t)pSVar27;
                                il2cpp_runtime_helper_022b4080(&unaff_RBP->max_length);
                                unaff_RBX = &"";
                                if ((UI_SettingsSkinsPanel_o *)(ulong)*(uint *)&__this_03->max_length <=
                                    __this) goto label_0444a721;
                                unaff_RBP->bounds =
                                     *(Il2CppArrayBounds **)
                                      (&__this_03->m_Items[0].fields.hashCode + (long)__this * 2);
                                il2cpp_runtime_helper_022b4080(&unaff_RBP->bounds);
                                pUVar35 = UnityEngine_GameObject__get_transform(pUVar33,(MethodInfo *)0x0);
                                pSVar37 = (System_String_o *)unaff_RBP->bounds;
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                if (g_data_057ae727 == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                                  il2cpp_runtime_helper_023445d0(&"Common");
                                  il2cpp_runtime_helper_023445d0(&"");
                                  g_data_057ae727 = '\x01';
                                }
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar43 = (long *)UI_UIManager__GetLocale
                                                            ("Common",pSVar37,
                                                             (System_String_o *)"",
                                                             (System_String_o *)"",
                                                             (System_String_o *)"",
                                                             (MethodInfo *)in_R9);
                                panelLeft = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                UnityEngine_Events_UnityAction___ctor();
                                in_XMM1_Da = 0.0;
                                method = (MethodInfo *)panelLeft;
                                UI_ElementFactory__CreateDefaultButton
                                          (pUVar35,(UI_ElementStyle_o *)__this_01,(System_String_o *)plVar43,
                                           0.0,0.0,(UnityEngine_Events_UnityAction_o *)panelLeft,
                                           (MethodInfo *)0x0);
                                __this = (UI_SettingsSkinsPanel_o *)((long)&__this->klass + 1);
                                unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)panelLeft;
                                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)plVar43;
                              } while ((long)__this < (long)*(int *)&__this_03->max_length);
                            }
label_0444a0d2:
                            pSVar50 = "Human";
                            bVar22 = System_String__op_Equality
                                               (pSVar28,(System_String_o *)"Human",(MethodInfo *)0x0);
                            unaff_RBP = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                         pUVar58;
                            unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                        panelLeft;
                            __this = pUVar58;
                            if ((char)bVar22 == '\0') {
                              pSVar57 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                        panelRight;
                              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          plVar43;
                              if (unaff_RBP !=
                                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                                pIVar51 = (unaff_RBP->obj).klass;
                                uVar8._0_1_ = (pIVar51->_2).rank;
                                uVar8._1_1_ = (pIVar51->_2).minimumAlignment;
                                if ((ulong)uVar8 != 0) {
                                  pIVar48 = (pIVar51->_1).interfaceOffsets;
                                  lVar53 = 0;
                                  do {
                                    if (*(long *)((long)&pIVar48->interfaceType + lVar53) == TypeInfo_ICustomSkinSettings) {
                                      pVVar36 = &((System_Collections_Generic_Dictionary_string__BaseSetting__VTable
                                                   *)pIVar51->vtable)->_0_Equals +
                                                (*(int *)((long)&pIVar48->offset + lVar53) + 1);
                                      goto label_0444a209;
                                    }
                                    lVar53 = lVar53 + 0x10;
                                  } while ((ulong)uVar8 << 4 != lVar53);
                                }
                                pVVar36 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_ICustomSkinSettings,1);
label_0444a209:
                                pSVar39 = (Settings_BaseSetting_o *)
                                          (*pVVar36->methodPtr)(unaff_RBP,pVVar36->method);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar37 = UI_UIManager__GetLocale
                                                    (pSVar40,(System_String_o *)"Skins.Common","SkinsEnabled",
                                                     (System_String_o *)"",
                                                     (System_String_o *)"",(MethodInfo *)in_R9);
                                method = (MethodInfo *)
                                         System_String__Concat_3af7150
                                                   (pSVar28," ",pSVar37,(MethodInfo *)0x0);
                                in_XMM1_Da = 30.0;
                                in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                                ;
                                pSVar50 = __this_02;
                                UI_ElementFactory__CreateToggleSetting
                                          (panelRight,(UI_ElementStyle_o *)__this_02,pSVar39,
                                           (System_String_o *)method,(System_String_o *)"",30.0,30.0
                                           ,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                plVar43 = *(long **)pUVar58;
                                unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)0x0;
                                unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )&"";
                                pSVar57 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          panelRight;
                                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)__this_02;
                                if (plVar43 != (long *)0x0) {
                                  lVar53 = *plVar43;
                                  if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
                                    lVar54 = 0;
                                    do {
                                      if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_ICustomSkinSettings) {
                                        puVar38 = (undefined8 *)
                                                  ((long)*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) *
                                                   0x10 + lVar53 + 0x138);
                                        goto label_0444a317;
                                      }
                                      lVar54 = lVar54 + 0x10;
                                    } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
                                  }
                                  puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_ICustomSkinSettings,0);
label_0444a317:
                                  pIVar41 = (Il2CppObject *)(*(code *)*puVar38)(plVar43,puVar38[1]);
                                  pSVar37 = UI_UIManager__GetLocale
                                                      (pSVar40,(System_String_o *)"Skins.Common","SkinsLocal",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)in_R9);
                                  pSVar28 = System_String__Concat_3af7150
                                                      (pSVar28," ",pSVar37,(MethodInfo *)0x0);
                                  pSVar40 = UI_UIManager__GetLocale
                                                      (pSVar40,(System_String_o *)"Skins.Common","SkinsLocalTooltip",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)in_R9);
                                  goto label_0444a654;
                                }
                              }
                            }
                            else {
                              pSVar57 = __this_03;
                              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          plVar43;
                              if (unaff_RBP !=
                                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                                pIVar51 = (unaff_RBP->obj).klass;
                                bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
                                method = (MethodInfo *)(ulong)bVar5;
                                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)plVar43;
                                if ((pIVar51->_2).naturalAligment < bVar5) goto label_0444a687;
                                if ((pIVar51->_2).typeHierarchy
                                    [(long)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     *)((long)method + -0x180008))->m_Items[0xfffe].fields.
                                                   value + 7)] != TypeInfo_HumanCustomSkinSettings) goto label_0444a687;
                                pIVar51 = (unaff_RBP->obj).klass;
                                uVar7._0_1_ = (pIVar51->_2).rank;
                                uVar7._1_1_ = (pIVar51->_2).minimumAlignment;
                                if ((ulong)uVar7 != 0) {
                                  pIVar48 = (pIVar51->_1).interfaceOffsets;
                                  lVar53 = 0;
                                  do {
                                    if (*(long *)((long)&pIVar48->interfaceType + lVar53) == TypeInfo_ICustomSkinSettings) {
                                      pVVar36 = &((System_Collections_Generic_Dictionary_string__BaseSetting__VTable
                                                   *)pIVar51->vtable)->_0_Equals +
                                                (*(int *)((long)&pIVar48->offset + lVar53) + 1);
                                      goto label_0444a3c3;
                                    }
                                    lVar53 = lVar53 + 0x10;
                                  } while ((ulong)uVar7 << 4 != lVar53);
                                }
                                pVVar36 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_ICustomSkinSettings,1);
label_0444a3c3:
                                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)(*pVVar36->methodPtr)(unaff_RBP,pVVar36->method);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar37 = UI_UIManager__GetLocale
                                                    (pSVar40,(System_String_o *)"Skins.Common","SkinsEnabled",
                                                     (System_String_o *)"",
                                                     (System_String_o *)"",(MethodInfo *)in_R9);
                                method = (MethodInfo *)
                                         System_String__Concat_3af7150
                                                   (pSVar28," ",pSVar37,(MethodInfo *)0x0);
                                in_XMM1_Da = 30.0;
                                in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                                ;
                                pSVar50 = __this_02;
                                UI_ElementFactory__CreateToggleSetting
                                          (panelRight,(UI_ElementStyle_o *)__this_02,
                                           (Settings_BaseSetting_o *)unaff_R15,(System_String_o *)method,
                                           (System_String_o *)"",30.0,30.0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                plVar43 = *(long **)pUVar58;
                                unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)0x0;
                                pSVar57 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          &"Skins.Common";
                                if (plVar43 != (long *)0x0) {
                                  lVar53 = *plVar43;
                                  if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
                                    lVar54 = 0;
                                    do {
                                      if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_ICustomSkinSettings) {
                                        puVar38 = (undefined8 *)
                                                  ((long)*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) *
                                                   0x10 + lVar53 + 0x138);
                                        goto label_0444a4c1;
                                      }
                                      lVar54 = lVar54 + 0x10;
                                    } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
                                  }
                                  puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_ICustomSkinSettings,0);
label_0444a4c1:
                                  pSVar39 = (Settings_BaseSetting_o *)(*(code *)*puVar38)(plVar43,puVar38[1]);
                                  pSVar37 = UI_UIManager__GetLocale
                                                      (pSVar40,(System_String_o *)"Skins.Common","SkinsLocal",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)in_R9);
                                  pSVar28 = System_String__Concat_3af7150
                                                      (pSVar28," ",pSVar37,(MethodInfo *)0x0);
                                  pSVar37 = UI_UIManager__GetLocale
                                                      (pSVar40,(System_String_o *)"Skins.Common","SkinsLocalTooltip",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)in_R9);
                                  pMVar52 = (MethodInfo *)0x0;
                                  UI_ElementFactory__CreateToggleSetting
                                            (panelRight,(UI_ElementStyle_o *)__this_02,pSVar39,pSVar28,pSVar37
                                             ,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                             (MethodInfo *)0x0);
                                  pIVar41 = unaff_RBP->m_Items[2].fields.value;
                                  pSVar28 = UI_UIManager__GetLocale
                                                      (pSVar40,"Skins.Human","GlobalSkinOverridesEnabled",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",pMVar52);
                                  pSVar37 = UI_UIManager__GetLocale
                                                      (pSVar40,"Skins.Human","GlobalSkinOverridesEnabledTooltip",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",pMVar52);
                                  pMVar52 = (MethodInfo *)0x0;
                                  UI_ElementFactory__CreateToggleSetting
                                            (panelRight,(UI_ElementStyle_o *)__this_02,
                                             (Settings_BaseSetting_o *)pIVar41,pSVar28,pSVar37,30.0,30.0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                  pIVar41 = unaff_RBP->m_Items[2].fields.key;
                                  pSVar28 = UI_UIManager__GetLocale
                                                      (pSVar40,"Skins.Human","SetSpecificSkinsEnabled",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",pMVar52);
                                  pSVar40 = UI_UIManager__GetLocale
                                                      (pSVar40,"Skins.Human","SetSpecificSkinsEnabledTooltip",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",pMVar52);
label_0444a654:
                                  UI_ElementFactory__CreateToggleSetting
                                            (panelRight,(UI_ElementStyle_o *)__this_02,
                                             (Settings_BaseSetting_o *)pIVar41,pSVar28,pSVar40,30.0,30.0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                            goto label_0444a677;
                          }
                        }
                      }
                    }
                    goto label_0444a721;
                  }
                }
              }
            }
            else {
              pSVar30 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_1);
              pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              System_Object___ctor((Il2CppObject *)pSVar30,(MethodInfo *)0x0);
              unaff_RBX = &"";
              pSVar57 = pSVar27;
              if (pSVar30 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                unaff_R15 = &"";
                ppIVar1 = &pSVar30->m_Items[0].fields.key;
                pSVar30->m_Items[0].fields.key = (Il2CppObject *)pSVar27;
                pSVar50 = pSVar27;
                il2cpp_runtime_helper_022b4080(ppIVar1,pSVar27);
                pIVar51 = TypeInfo_HumanCustomSkinSettings;
                pIVar41 = pSVar30->m_Items[0].fields.key;
                unaff_RBP = pSVar30;
                local_88 = pSVar30;
                if (pIVar41 != (Il2CppObject *)0x0) {
                  pSVar50 = pIVar41[1].monitor;
                  if (pSVar50 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)&pSVar30->bounds)->
                    _buckets = (System_Int32_array *)0x0;
                  }
                  else {
                    pIVar42 = (pSVar50->obj).klass;
                    bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
                    method = (MethodInfo *)(ulong)bVar5;
                    __this_03 = pSVar27;
                    if ((pIVar42->_2).naturalAligment < bVar5) goto label_0444a682;
                    if ((pIVar42->_2).typeHierarchy
                        [(long)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                       ((long)method + -0x180008))->m_Items[0xfffe].fields.value + 7)] !=
                        TypeInfo_HumanCustomSkinSettings) goto label_0444a682;
                    ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)&pSVar30->bounds)->
                    _buckets = (System_Int32_array *)pSVar50;
                    pIVar42 = (pSVar50->obj).klass;
                    if ((pIVar42->_2).naturalAligment < bVar5) goto label_0444a682;
                    if ((pIVar42->_2).typeHierarchy
                        [(long)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                       ((long)method + -0x180008))->m_Items[0xfffe].fields.value + 7)] !=
                        pIVar51) goto label_0444a682;
                  }
                  pSVar49 = (System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)
                            &pSVar30->bounds;
                  il2cpp_runtime_helper_022b4080(pSVar49);
                  pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x2;
                  pSVar31 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                  iVar47 = (int)method;
                  unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)pSVar49;
                  if (pSVar31 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    unaff_RBP = pSVar31;
                    if ((int)pSVar31->max_length != 0) {
                      uVar20 = "Global"._4_4_;
                      pSVar31->m_Items[0].fields.hashCode = (undefined4)"Global";
                      pSVar31->m_Items[0].fields.next = uVar20;
                      il2cpp_runtime_helper_022b4080(pSVar31->m_Items);
                      pSVar50 = "Character";
                      iVar47 = (int)method;
                      if (1 < (uint)pSVar31->max_length) {
                        pSVar31->m_Items[0].fields.key = &"Character"->obj;
                        il2cpp_runtime_helper_022b4080(&pSVar31->m_Items[0].fields.key);
                        pSVar57 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                  &"";
                        if (pSVar49->_buckets != (System_Int32_array *)0x0) {
                          plVar43 = *(long **)(pSVar49->_buckets->m_Items + 0x12);
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      UI_UIManager__GetLocale
                                                (pSVar40,"Skins.Human","SkinMode",
                                                 (System_String_o *)"",
                                                 (System_String_o *)"",(MethodInfo *)in_R9);
                          unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                      *ppIVar1;
                          pUVar32 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_XMM1_Da = 40.0;
                          pSVar50 = __this_01;
                          in_R9 = "";
                          UI_ElementFactory__CreateDropdownSetting
                                    (panelLeft,(UI_ElementStyle_o *)__this_01,
                                     (Settings_BaseSetting_o *)plVar43,(System_String_o *)__this_03,
                                     (System_String_array *)pSVar31,(System_String_o *)"",260.0,40.0
                                     ,300.0,(System_Nullable_float__o)0x0,pUVar32,(MethodInfo *)0x0);
                          method = (MethodInfo *)pSVar49->_buckets;
                          pSVar57 = __this_03;
                          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      plVar43;
                          if (((Settings_HumanCustomSkinSettings_o *)method !=
                               (Settings_HumanCustomSkinSettings_o *)0x0) &&
                             (lVar53 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                   *)method)->m_Items[3].fields,
                             unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                         (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                         plVar43, lVar53 != 0)) {
                            if (*(int *)(lVar53 + 0x14) != 0) {
                              UI_SettingsSkinsPanel__CreateCharacterSelectorDropdown
                                        (__this,panelLeft,(UI_ElementStyle_o *)__this_01,
                                         (Settings_HumanCustomSkinSettings_o *)method,(MethodInfo *)pSVar31);
                              panelLeft = (UnityEngine_Transform_o *)unaff_RBX;
                              goto label_0444a0d2;
                            }
                            unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                        plVar43;
                            if (*ppIVar1 != (Il2CppObject *)0x0) {
                              plVar43 = (*ppIVar1)[1].monitor;
                              unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                          0x0;
                              if (plVar43 != (long *)0x0) {
                                lVar53 = *plVar43;
                                if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
                                  lVar54 = 0;
                                  do {
                                    if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_ISetSettingsContainer) {
                                      pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                 *)((long)(*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) + 3
                                                          ) * 0x10 + lVar53 + 0x138);
                                      goto label_04449ac6;
                                    }
                                    lVar54 = lVar54 + 0x10;
                                  } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
                                }
                                pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_ISetSettingsContainer,3);
label_04449ac6:
                                unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)(*(code *)(pSVar27->obj).klass)
                                                          (plVar43,(pSVar27->obj).monitor);
                                __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                                System_Collections_Generic_List_object____ctor
                                          ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String
                                          );
                                unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
                                System_Collections_Generic_List_int____ctor
                                          ((System_Collections_Generic_List_int__o *)unaff_RBP,MethodInfo_List_1_System_Int32);
                                pSVar2 = pSVar30->m_Items;
                                *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                 &pSVar30->m_Items[0].fields = unaff_RBP;
                                pSVar50 = unaff_RBP;
                                il2cpp_runtime_helper_022b4080();
                                iVar47 = (int)pSVar27;
                                method = (MethodInfo *)pSVar27;
                                pSVar57 = __this_03;
                                if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    unaff_RBX !=
                                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                                  uVar24 = *(uint *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length;
                                  if (__this_03 ==
                                      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                                  {
                                    if (0 < (int)uVar24) {
                                      unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                   *)0x0;
                                      do {
                                        iVar47 = (int)method;
                                        if (uVar24 <= (uint)unaff_RBP) goto label_0444a721;
                                        pSVar17 = *(Settings_IntSetting_o **)
                                                   ((long)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->m_Items[0].fields.hashCode +
                                                   unaff_RBP * 8);
                                        if (pSVar17 == (Settings_IntSetting_o *)0x0) goto label_0444a677;
                                        pSVar50 = "Custom Set:";
                                        bVar22 = System_String__StartsWith
                                                           ((System_String_o *)pSVar17,
                                                            (System_String_o *)"Custom Set:",(MethodInfo *)0x0)
                                        ;
                                        iVar47 = (int)method;
                                        if ((char)bVar22 == '\0') {
                                          if (*(uint *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length <= (uint)unaff_RBP)
                                          goto label_0444a721;
                                          goto label_0444a677;
                                        }
                                        uVar24 = *(uint *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length;
                                        unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     *)((long)&(unaff_RBP->obj).klass + 1);
                                      } while ((int)unaff_RBP < (int)uVar24);
                                    }
                                  }
                                  else if (0 < (int)uVar24) {
                                    unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                 *)0x0;
                                    if (uVar24 != 0) {
                                      do {
                                        uVar24 = (uint)unaff_RBP;
                                        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     **)(long)(int)uVar24;
                                        pSVar17 = *(Settings_IntSetting_o **)
                                                   ((long)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->m_Items[0].fields.hashCode +
                                                   unaff_R15 * 8);
                                        method = (MethodInfo *)pSVar27;
                                        if (pSVar17 == (Settings_IntSetting_o *)0x0) goto label_0444a677;
                                        pSVar50 = "Custom Set:";
                                        bVar22 = System_String__StartsWith
                                                           ((System_String_o *)pSVar17,
                                                            (System_String_o *)"Custom Set:",(MethodInfo *)0x0)
                                        ;
                                        method = (MethodInfo *)MethodInfo_Void_Add;
                                        iVar47 = (int)pSVar27;
                                        if ((char)bVar22 == '\0') {
                                          if (*(uint *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length <= uVar24) break;
                                          pSVar50 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                      **)((long)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->m_Items[0].fields.hashCode +
                                                       unaff_R15 * 8);
                                          piVar4 = (int *)((long)&__this_03->max_length + 4);
                                          *piVar4 = *piVar4 + 1;
                                          pSVar15 = ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                      *)&__this_03->bounds)->_buckets;
                                          if (pSVar15 == (System_Int32_array *)0x0) goto label_0444a677;
                                          uVar12 = *(uint *)&__this_03->max_length;
                                          if (uVar12 < (uint)pSVar15->max_length) {
                                            method = (MethodInfo *)(ulong)(uVar12 + 1);
                                            *(uint *)&__this_03->max_length = uVar12 + 1;
                                            *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                              **)(pSVar15->m_Items + (long)(int)uVar12 * 2) = pSVar50;
                                            il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (long)(int)uVar12 * 2);
                                            pSVar16 = *(System_Collections_Generic_List_int__o **)
                                                       &pSVar2->fields;
                                            pSVar27 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)__this_03,
                                                       &pSVar50->obj,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)method)->m_Items[0].fields + 0xc0) + 0x70));
                                            pSVar16 = *(System_Collections_Generic_List_int__o **)
                                                       &pSVar2->fields;
                                            pSVar27 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = pSVar27;
                                          if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0)
                                          goto label_0444a677;
                                          piVar3 = &(pSVar16->fields)._version;
                                          *piVar3 = *piVar3 + 1;
                                          pSVar15 = (pSVar16->fields)._items;
                                          method = (MethodInfo *)pSVar27;
                                          if (pSVar15 == (System_Int32_array *)0x0) goto label_0444a677;
                                          uVar12 = (pSVar16->fields)._size;
                                          if (uVar12 < (uint)pSVar15->max_length) {
                                            pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)(ulong)(uVar12 + 1);
                                            (pSVar16->fields)._size = uVar12 + 1;
                                            pSVar15->m_Items[(int)uVar12] = uVar24;
                                          }
                                          else {
                                            System_Collections_Generic_List_int___AddWithResize
                                                      (pSVar16,uVar24,
                                                       *(MethodInfo_35FDFF0 **)
                                                        (*(long *)(*(long *)&pSVar27->m_Items[0].fields + 0xc0
                                                                  ) + 0x70));
                                            pSVar50 = unaff_RBP;
                                          }
                                        }
                                        iVar47 = (int)pSVar27;
                                        uVar24 = uVar24 + 1;
                                        unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     *)(ulong)uVar24;
                                        if ((int)*(uint *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length <= (int)uVar24)
                                        goto label_04449cc3;
                                      } while (uVar24 < *(uint *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length);
                                    }
                                    goto label_0444a721;
                                  }
label_04449cc3:
                                  unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               **)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
                                  method = (MethodInfo *)0x7fffffff;
                                  Settings_IntSetting___ctor_40f39a0
                                            ((Settings_IntSetting_o *)unaff_RBX,0,-0x80000000,0x7fffffff,
                                             (MethodInfo *)0x0);
                                  ppSVar59 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                              **)&pSVar30->max_length;
                                  pSVar30->max_length = (il2cpp_array_size_t)unaff_RBX;
                                  pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )unaff_RBX;
                                  il2cpp_runtime_helper_022b4080(ppSVar59,unaff_RBX);
                                  pSVar16 = *(System_Collections_Generic_List_int__o **)
                                             &pSVar30->m_Items[0].fields;
                                  unaff_RBP = pSVar30;
                                  if (pSVar16 != (System_Collections_Generic_List_int__o *)0x0) {
                                    unaff_RBX = &"";
                                    if ((pSVar16->fields)._size < 1) {
label_04449d75:
                                      (__this->fields)._lastFilteredSetIndex =
                                           (Settings_IntSetting_o *)*ppSVar59;
                                      il2cpp_runtime_helper_022b4080(&(__this->fields)._lastFilteredSetIndex);
                                      (__this->fields)._lastFilteredOriginalIndices =
                                           *(System_Collections_Generic_List_int__o **)&pSVar2->fields;
                                      __this = (UI_SettingsSkinsPanel_o *)
                                               &(__this->fields)._lastFilteredOriginalIndices;
                                      il2cpp_runtime_helper_022b4080(__this);
                                      pSVar27 = *ppSVar59;
                                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      method = (MethodInfo *)"";
                                      pSVar50 = "Skins.Common";
                                      plVar43 = (long *)UI_UIManager__GetLocale
                                                                  (pSVar40,(System_String_o *)"Skins.Common",
                                                                   (System_String_o *)"Set",
                                                                   (System_String_o *)"",
                                                                   (System_String_o *)"",
                                                                   (MethodInfo *)in_R9);
                                      if (__this_03 !=
                                          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          0x0) {
                                        unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     **)System_Collections_Generic_List_object___ToArray
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)__this_03,MethodInfo_String_ToArray);
                                        pUVar32 = (UnityEngine_Events_UnityAction_o *)
                                                  il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor();
                                        in_XMM1_Da = 40.0;
                                        method = (MethodInfo *)plVar43;
                                        in_R9 = "";
                                        UI_ElementFactory__CreateDropdownSetting
                                                  (panelLeft,(UI_ElementStyle_o *)__this_01,
                                                   (Settings_BaseSetting_o *)pSVar27,
                                                   (System_String_o *)plVar43,(System_String_array *)unaff_RBX
                                                   ,(System_String_o *)"",260.0,40.0,300.0,
                                                   (System_Nullable_float__o)0x0,pUVar32,(MethodInfo *)0x0);
                                        pUVar33 = UI_ElementFactory__CreateHorizontalGroup
                                                            (panelLeft,10.0,2,(MethodInfo *)0x0);
                                        pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                   *)&g_data_00000004;
                                        pUVar34 = (UI_SettingsSkinsPanel_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
                                        iVar47 = (int)method;
                                        unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     *)panelLeft;
                                        __this = (UI_SettingsSkinsPanel_o *)&"";
                                        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     **)plVar43;
                                        if (pUVar34 != (UI_SettingsSkinsPanel_o *)0x0) {
                                          unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)panelLeft;
                                          if (*(int *)&(pUVar34->fields).m_CancellationTokenSource != 0) {
                                            unaff_RBP = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)&(pUVar34->fields).SinglePanel;
                                            (pUVar34->fields).SinglePanel = "Create";
                                            il2cpp_runtime_helper_022b4080(unaff_RBP);
                                            iVar47 = (int)method;
                                            if (1 < *(uint *)&(pUVar34->fields).m_CancellationTokenSource) {
                                              (pUVar34->fields).DoublePanelLeft = "Delete";
                                              il2cpp_runtime_helper_022b4080(&(pUVar34->fields).DoublePanelLeft);
                                              iVar47 = (int)method;
                                              if (2 < *(uint *)&(pUVar34->fields).m_CancellationTokenSource) {
                                                (pUVar34->fields).DoublePanelRight = "Rename";
                                                il2cpp_runtime_helper_022b4080(&(pUVar34->fields).DoublePanelRight);
                                                iVar47 = (int)method;
                                                if (3 < *(uint *)&(pUVar34->fields).m_CancellationTokenSource)
                                                {
                                                  (pUVar34->fields)._popups = "Copy";
                                                  il2cpp_runtime_helper_022b4080(&(pUVar34->fields)._popups);
                                                  panelLeft = (UnityEngine_Transform_o *)unaff_RBX;
                                                  if (0 < *(int *)&(pUVar34->fields).m_CancellationTokenSource
                                                     ) {
                                                    if (pUVar33 == (UnityEngine_GameObject_o *)0x0)
                                                    goto label_0444a6e3;
                                                    __this_03 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)0x0;
                                                    do {
                                                      unaff_RBP = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_2);
                                                      pSVar50 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)0x0;
                                                      System_Object___ctor
                                                                ((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
                                                      iVar47 = (int)method;
                                                      unaff_RBX = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)panelLeft;
                                                      pSVar57 = __this_03;
                                                      __this = pUVar34;
                                                      unaff_R15 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)plVar43;
                                                      if (unaff_RBP ==
                                                          (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)0x0) goto label_0444a677;
                                                      unaff_RBP->max_length = (il2cpp_array_size_t)pSVar30;
                                                      il2cpp_runtime_helper_022b4080(&unaff_RBP->max_length);
                                                      if ((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)(ulong)*(uint *)&(pUVar34->fields).
                                                                          m_CancellationTokenSource <=
                                                       __this_03) goto label_0444a721;
                                                      ((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_RBP->bounds)->_buckets =
                                                           (System_Int32_array *)
                                                           (&(pUVar34->fields).SinglePanel)[(long)__this_03];
                                                      il2cpp_runtime_helper_022b4080((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_RBP->bounds);
                                                      pUVar35 = UnityEngine_GameObject__get_transform
                                                                          (pUVar33,(MethodInfo *)0x0);
                                                      pSVar15 = ((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_RBP->bounds)->_buckets;
                                                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                        il2cpp_runtime_helper_02337ed0();
                                                      }
                                                      if (g_data_057ae727 == '\0') {
                                                        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                                                        il2cpp_runtime_helper_023445d0(&"Common");
                                                        il2cpp_runtime_helper_023445d0(&"");
                                                        g_data_057ae727 = '\x01';
                                                      }
                                                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                        il2cpp_runtime_helper_02337ed0();
                                                      }
                                                      plVar43 = (long *)UI_UIManager__GetLocale
                                                                                  ("Common",
                                                                                   (System_String_o *)pSVar15,
                                                                                   (System_String_o *)
                                                                                   "",
                                                                                   (System_String_o *)
                                                                                   "",
                                                                                   (System_String_o *)
                                                                                   "",
                                                                                   (MethodInfo *)in_R9);
                                                      panelLeft = (UnityEngine_Transform_o *)
                                                                  il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      in_XMM1_Da = 0.0;
                                                      method = (MethodInfo *)panelLeft;
                                                      UI_ElementFactory__CreateDefaultButton
                                                                (pUVar35,(UI_ElementStyle_o *)__this_01,
                                                                 (System_String_o *)plVar43,0.0,0.0,
                                                                 (UnityEngine_Events_UnityAction_o *)panelLeft
                                                                 ,(MethodInfo *)0x0);
                                                      __this_03 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)((long)&(__this_03->obj).klass + 1);
                                                    } while ((long)__this_03 <
                                                             (long)*(int *)&(pUVar34->fields).
                                                                            m_CancellationTokenSource);
                                                  }
                                                  goto label_0444a0d2;
                                                }
                                              }
                                            }
                                          }
                                          goto label_0444a721;
                                        }
                                      }
                                    }
                                    else if ((pSVar49->_buckets != (System_Int32_array *)0x0) &&
                                            (lVar53 = *(long *)(pSVar49->_buckets->m_Items + 0x16),
                                            lVar53 != 0)) {
                                      uVar24 = *(uint *)(lVar53 + 0x14);
                                      pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                 *)(ulong)uVar24;
                                      iVar23 = System_Collections_Generic_List_int___IndexOf
                                                         (pSVar16,uVar24,MethodInfo_Int32_IndexOf);
                                      if (*ppSVar59 !=
                                          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          0x0) {
                                        value = 0;
                                        if (-1 < iVar23) {
                                          value = iVar23;
                                        }
                                        Settings_TypedSetting_int___set_Value
                                                  ((Settings_TypedSetting_int__o *)*ppSVar59,value,
                                                   MethodInfo_Void_set_Value);
                                        goto label_04449d75;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto label_0444a677;
                      }
                    }
                    goto label_0444a721;
                  }
                }
              }
            }
          }
          goto label_0444a677;
        }
      }
    }
label_0444a721:
    il2cpp_runtime_helper_022b2ca0();
  }
  pIVar51 = (unaff_RBP->obj).klass;
  pSVar55 = (Settings_HumanCustomSkinSettings_Fields *)
            &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->bounds;
  ((Settings_HumanCustomSkinSettings_Fields *)
  &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->bounds)->Settings =
       (System_Collections_Specialized_OrderedDictionary_o *)pIVar51;
  il2cpp_runtime_helper_022b4080();
  titleWidth = (float)il2cpp_runtime_helper_022b2c90();
  local_128 = (long *)(ulong)(uint)titleWidth;
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
  pSVar28 = (System_String_o *)
            (*(code *)pSVar55->Settings[5].fields._objectsArray)
                      (pSVar55,pSVar55->Settings[5].fields._objectsTable);
  pUVar29 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar29,0x18,titleWidth,20.0,pSVar28,(MethodInfo *)0x0);
  if (pSVar55->SetSpecificSkinsEnabled != (Settings_BoolSetting_o *)0x0) {
    bVar22 = System_String__op_Equality
                       ((System_String_o *)pSVar55->SetSpecificSkinsEnabled[1].klass,
                        (System_String_o *)"Human",(MethodInfo *)0x0);
    if (g_data_057ae6ff == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057ae6ff = '\x01';
    }
    if ((pSVar55->SetSpecificSkinsEnabled != (Settings_BoolSetting_o *)0x0) &&
       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar55->LastGlobalPresetIndex !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      pIVar41 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           pSVar55->LastGlobalPresetIndex,
                           (Il2CppObject *)pSVar55->SetSpecificSkinsEnabled[1].klass,MethodInfo_ICustomSkinSettings_get_Item);
      if ((char)bVar22 == '\0') {
        if (pIVar41 != (Il2CppObject *)0x0) {
          pIVar42 = pIVar41->klass;
          uVar9._0_1_ = (pIVar42->_2).rank;
          uVar9._1_1_ = (pIVar42->_2).minimumAlignment;
          if ((ulong)uVar9 != 0) {
            pIVar48 = (pIVar42->_1).interfaceOffsets;
            lVar53 = 0;
            do {
              if (*(long *)((long)&pIVar48->interfaceType + lVar53) == TypeInfo_ISetSettingsContainer) {
                pVVar36 = pIVar42->vtable + *(int *)((long)&pIVar48->offset + lVar53);
                goto label_0444ab8b;
              }
              lVar53 = lVar53 + 0x10;
            } while ((ulong)uVar9 << 4 != lVar53);
          }
          pVVar36 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar41,TypeInfo_ISetSettingsContainer,0);
label_0444ab8b:
          pMVar52 = pVVar36->method;
          goto label_0444acf8;
        }
      }
      else if (pIVar41 != (Il2CppObject *)0x0) {
        bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
        if (((pIVar41->klass->_2).naturalAligment < bVar5) ||
           ((pIVar41->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_HumanCustomSkinSettings)) {
label_0444ac2c:
          il2cpp_runtime_helper_022b2fd0(pIVar41);
          goto label_0444ac34;
        }
        if (pIVar41[6].monitor != (void *)0x0) {
          if (*(int *)((long)pIVar41[6].monitor + 0x14) == 1) {
            lVar53 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar53 != 0) && (lVar53 = *(long *)(lVar53 + 0x20), lVar53 != 0)) &&
               (plVar43 = *(long **)(lVar53 + 0x28), plVar43 != (long *)0x0)) {
              lVar53 = *plVar43;
              if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
                lVar54 = 0;
                do {
                  if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_IListSetting) {
                    puVar38 = (undefined8 *)
                              ((long)(*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) + 2) * 0x10 + lVar53 +
                              0x138);
                    goto label_0444abaf;
                  }
                  lVar54 = lVar54 + 0x10;
                } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
              }
              puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IListSetting,2);
label_0444abaf:
              __this_04 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar38)(plVar43,puVar38[1])
              ;
              if (pIVar41[7].klass != (Il2CppClass *)0x0) {
                iVar23 = *(int32_t *)((long)&((pIVar41[7].klass)->_1).name + 4);
                if (iVar23 < 0) {
label_0444ac34:
                  if (g_data_057ae6ff == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                    g_data_057ae6ff = '\x01';
                  }
                  if (((pSVar55->SetSpecificSkinsEnabled != (Settings_BoolSetting_o *)0x0) &&
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       pSVar55->LastGlobalPresetIndex !=
                       (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
                     (pIVar41 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          ((System_Collections_Generic_Dictionary_object__object__o *)
                                           pSVar55->LastGlobalPresetIndex,
                                           (Il2CppObject *)pSVar55->SetSpecificSkinsEnabled[1].klass,
                                           MethodInfo_ICustomSkinSettings_get_Item), pIVar41 != (Il2CppObject *)0x0)) {
                    pIVar42 = pIVar41->klass;
                    uVar11._0_1_ = (pIVar42->_2).rank;
                    uVar11._1_1_ = (pIVar42->_2).minimumAlignment;
                    if ((ulong)uVar11 != 0) {
                      pIVar48 = (pIVar42->_1).interfaceOffsets;
                      lVar53 = 0;
                      do {
                        if (*(long *)((long)&pIVar48->interfaceType + lVar53) == TypeInfo_ISetSettingsContainer)
                        goto label_0444acde;
                        lVar53 = lVar53 + 0x10;
                      } while ((ulong)uVar11 << 4 != lVar53);
                    }
                    goto label_0444accf;
                  }
                }
                else if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                  if ((__this_04->fields)._size <= iVar23) goto label_0444ac34;
                  pIVar41 = System_Collections_Generic_List_object___get_Item(__this_04,iVar23,MethodInfo_BaseSetting_get_Item);
                  if (pIVar41 != (Il2CppObject *)0x0) {
                    bVar5 = (TypeInfo_BaseSettingsContainer->_2).naturalAligment;
                    if (((pIVar41->klass->_2).naturalAligment < bVar5) ||
                       ((pIVar41->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_BaseSettingsContainer))
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
            if (((pSVar55->SetSpecificSkinsEnabled != (Settings_BoolSetting_o *)0x0) &&
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar55->LastGlobalPresetIndex !=
                 (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
               (pIVar41 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     pSVar55->LastGlobalPresetIndex,
                                     (Il2CppObject *)pSVar55->SetSpecificSkinsEnabled[1].klass,MethodInfo_ICustomSkinSettings_get_Item),
               pIVar41 != (Il2CppObject *)0x0)) {
              pIVar42 = pIVar41->klass;
              uVar10._0_1_ = (pIVar42->_2).rank;
              uVar10._1_1_ = (pIVar42->_2).minimumAlignment;
              if ((ulong)uVar10 != 0) {
                pIVar48 = (pIVar42->_1).interfaceOffsets;
                lVar53 = 0;
                do {
                  if (*(long *)((long)&pIVar48->interfaceType + lVar53) == TypeInfo_ISetSettingsContainer) goto label_0444acde;
                  lVar53 = lVar53 + 0x10;
                } while ((ulong)uVar10 << 4 != lVar53);
              }
label_0444accf:
              pVVar36 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar41,TypeInfo_ISetSettingsContainer,0);
              goto label_0444acf1;
            }
          }
        }
      }
    }
  }
label_0444b38d:
  il2cpp_runtime_helper_022b2c90();
label_0444b392:
  il2cpp_runtime_helper_022b2fd0();
label_0444b397:
  auVar60 = il2cpp_runtime_helper_022b2c90();
  lVar53 = auVar60._0_8_;
  if (auVar60._8_4_ != 1) {
    local_108 = 0;
    goto label_0444b5c5;
  }
  plVar43 = (long *)__cxa_begin_catch(lVar53);
  local_108 = *plVar43;
  __cxa_end_catch();
label_0444b523:
  plVar43 = (long *)il2cpp_runtime_helper_023051f0(local_128,TypeInfo_IDisposable);
  if (plVar43 != (long *)0x0) {
    lVar53 = *plVar43;
    if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
      lVar54 = 0;
      do {
        if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_IDisposable) {
          puVar38 = (undefined8 *)
                    (lVar53 + (long)*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) * 0x10 + 0x138);
          goto label_0444b59d;
        }
        lVar54 = lVar54 + 0x10;
      } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
    }
    puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IDisposable,0);
label_0444b59d:
    (*(code *)*puVar38)(plVar43,puVar38[1]);
  }
  lVar53 = local_108;
  if (local_108 == 0) {
    return;
  }
  do {
    lVar53 = il2cpp_runtime_helper_022fefe0(lVar53);
label_0444b5c5:
    plVar43 = (long *)il2cpp_runtime_helper_023051f0(local_128,TypeInfo_IDisposable);
    if (plVar43 != (long *)0x0) {
      lVar54 = *plVar43;
      if ((ulong)*(ushort *)(lVar54 + 0x12e) != 0) {
        lVar56 = 0;
        do {
          if (*(long *)(*(long *)(lVar54 + 0xb0) + lVar56) == TypeInfo_IDisposable) {
            puVar38 = (undefined8 *)
                      (lVar54 + (long)*(int *)(*(long *)(lVar54 + 0xb0) + 8 + lVar56) * 0x10 + 0x138);
            goto label_0444b63d;
          }
          lVar56 = lVar56 + 0x10;
        } while ((ulong)*(ushort *)(lVar54 + 0x12e) << 4 != lVar56);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IDisposable,0);
label_0444b63d:
      (*(code *)*puVar38)(plVar43,puVar38[1]);
    }
    if (local_108 == 0) {
      _Unwind_Resume(lVar53);
    }
    il2cpp_runtime_helper_022fefe0(local_108);
  } while( true );
label_0444acde:
  pVVar36 = pIVar42->vtable + *(int *)((long)&pIVar48->offset + lVar53);
label_0444acf1:
  pMVar52 = pVVar36->method;
label_0444acf8:
  pIVar41 = (Il2CppObject *)(*pVVar36->methodPtr)(pIVar41,pMVar52);
label_0444acfd:
  pSVar17 = pSVar55->SelectedCharacterIndex;
  if (pSVar17 == (Settings_IntSetting_o *)0x0) goto label_0444b38d;
  bVar5 = (TypeInfo_SettingsPopup->_2).naturalAligment;
  if ((bVar5 <= (pSVar17->klass->_2).naturalAligment) &&
     ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_SettingsPopup)) {
    if (pSVar55->SetSpecificSkinsEnabled != (Settings_BoolSetting_o *)0x0) {
      pSVar28 = pSVar17[5].monitor;
      pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Concat_3ae5ba0
                          ("Skins.",(System_String_o *)pSVar55->SetSpecificSkinsEnabled[1].klass,
                           (MethodInfo *)0x0);
      if ((pIVar41 != (Il2CppObject *)0x0) && (pIVar42 = pIVar41[1].klass, pIVar42 != (Il2CppClass *)0x0)) {
        pvVar18 = (pIVar42->_1).image;
        local_128 = (long *)(**(code **)((long)pvVar18 + 0x2a8))
                                      (pIVar42,*(undefined8 *)((long)pvVar18 + 0x2b0));
        if (local_128 == (long *)0x0) goto label_0444b397;
        local_11c = 1;
        local_108 = 0;
label_0444add3:
        lVar53 = *local_128;
        if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
          lVar54 = 0;
          do {
            if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_IEnumerator) {
              puVar38 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) * 0x10 + lVar53 + 0x138);
              goto label_0444ae33;
            }
            lVar54 = lVar54 + 0x10;
          } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
        }
        puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(local_128,TypeInfo_IEnumerator,0);
label_0444ae33:
        cVar21 = (*(code *)*puVar38)(local_128,puVar38[1]);
        if (cVar21 == '\0') goto label_0444b523;
        lVar53 = *local_128;
        if ((ulong)*(ushort *)(lVar53 + 0x12e) != 0) {
          lVar54 = 0;
          do {
            if (*(long *)(*(long *)(lVar53 + 0xb0) + lVar54) == TypeInfo_IEnumerator) {
              puVar38 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar53 + 0xb0) + 8 + lVar54) + 1) * 0x10 + lVar53 + 0x138);
              goto label_0444aeb8;
            }
            lVar54 = lVar54 + 0x10;
          } while ((ulong)*(ushort *)(lVar53 + 0x12e) << 4 != lVar54);
        }
        puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(local_128,TypeInfo_IEnumerator,1);
label_0444aeb8:
        plVar43 = (long *)(*(code *)*puVar38)(local_128,puVar38[1]);
        if (plVar43 != (long *)0x0) {
          if (*(long *)(*plVar43 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
label_0444b348:
            il2cpp_runtime_helper_022b2fd0(plVar43);
label_0444b350:
            il2cpp_runtime_helper_022b2fd0(unaff_R15);
            goto label_0444b358;
          }
          puVar38 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar43);
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)*puVar38;
          pIVar41 = (Il2CppObject *)puVar38[1];
          if (pIVar41 != (Il2CppObject *)0x0) {
            bVar5 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if (((pIVar41->klass->_2).naturalAligment < bVar5) ||
               ((pIVar41->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_BaseSetting)) {
              plVar43 = (long *)il2cpp_runtime_helper_022b2fd0(pIVar41);
              goto label_0444b348;
            }
          }
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_R15 ==
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0444b35d;
          if ((((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_R15)->obj).klass !=
              g_data_057b9c00) goto label_0444b350;
          bVar22 = System_String__StartsWith((System_String_o *)unaff_R15,"Skin",(MethodInfo *)0x0);
          uVar24 = 0;
          if ((char)bVar22 != '\0') {
            if (pIVar41 != (Il2CppObject *)0x0) {
              pSVar44 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
              SVar19 = TypeRef_StringSetting;
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar45 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
              bVar22 = System_Type__op_Equality(pSVar44,pSVar45,(MethodInfo *)0x0);
              uVar24 = 1;
              if ((char)bVar22 == '\0') {
                pSVar44 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
                SVar19 = TypeRef_FloatSetting;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar45 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
                uVar24 = System_Type__op_Equality(pSVar44,pSVar45,(MethodInfo *)0x0);
                uVar24 = uVar24 & 0xff;
              }
              goto label_0444b013;
            }
            goto label_0444b374;
          }
label_0444b013:
          bVar22 = System_String__op_Equality((System_String_o *)unaff_R15,"Name",(MethodInfo *)0x0);
          if (pSVar55->SetSpecificSkinsEnabled == (Settings_BoolSetting_o *)0x0) goto label_0444b362;
          bVar25 = System_String__op_Equality
                             ((System_String_o *)pSVar55->SetSpecificSkinsEnabled[1].klass,
                              (System_String_o *)"Human",(MethodInfo *)0x0);
          if ((char)bVar25 == '\0') {
label_0444b1b0:
            bVar25 = System_String__op_Equality((System_String_o *)unaff_R15,"UniqueId",(MethodInfo *)0x0);
            if (pIVar41 == (Il2CppObject *)0x0) goto label_0444b36f;
            pSVar44 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
            SVar19 = TypeRef_StringSetting;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar45 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
            bVar26 = System_Type__op_Equality(pSVar44,pSVar45,(MethodInfo *)0x0);
            if ((char)bVar26 != '\0') goto label_0444adc0;
            pSVar44 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
            SVar19 = TypeRef_FloatSetting;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar45 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
            bVar26 = System_Type__op_Equality(pSVar44,pSVar45,(MethodInfo *)0x0);
            if ((char)bVar25 == '\0' && ((char)bVar22 == '\0' && (char)bVar26 == '\x01')) goto label_0444b284;
          }
          else {
            if (g_data_057ae6ff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
              g_data_057ae6ff = '\x01';
            }
            if (pSVar55->SetSpecificSkinsEnabled == (Settings_BoolSetting_o *)0x0) goto label_0444b379;
            if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar55->LastGlobalPresetIndex ==
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0444b37e;
            pIVar46 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 pSVar55->LastGlobalPresetIndex,
                                 (Il2CppObject *)pSVar55->SetSpecificSkinsEnabled[1].klass,MethodInfo_ICustomSkinSettings_get_Item);
            if (pIVar46 == (Il2CppObject *)0x0) goto label_0444b383;
            bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
            if (((pIVar46->klass->_2).naturalAligment < bVar5) ||
               ((pIVar46->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_HumanCustomSkinSettings)) goto label_0444b367;
            if (pIVar46[6].monitor == (void *)0x0) goto label_0444b388;
            if (*(int *)((long)pIVar46[6].monitor + 0x14) != 1) goto label_0444b1b0;
            if (uVar24 != 0) {
              pIVar42 = pIVar51;
              if (iVar47 < local_11c) {
                pIVar42 = extraout_RDX;
              }
              pSVar40 = System_String__Substring((System_String_o *)unaff_R15,4,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar40 = UI_UIManager__GetLocale
                                  (pSVar28,(System_String_o *)pSVar50,pSVar40,(System_String_o *)"",
                                   (System_String_o *)"",(MethodInfo *)in_R9);
              in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)pIVar42,pUVar29,(Settings_BaseSetting_o *)pIVar41,pSVar40,
                         (System_String_o *)"",in_XMM1_Da,40.0,0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
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
        pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0444b367:
        il2cpp_runtime_helper_022b2fd0(pIVar46);
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
  goto label_0444b392;
label_0444adc0:
  if ((char)bVar22 == '\0' && (char)bVar25 == '\0') {
label_0444b284:
    pIVar42 = pIVar51;
    if (iVar47 < local_11c) {
      pIVar42 = extraout_RDX;
    }
    bVar22 = System_String__op_Equality((System_String_o *)unaff_R15,"Ground",(MethodInfo *)0x0);
    pSVar57 = pSVar50;
    if ((char)bVar22 != '\0') {
      pSVar57 = "Skins.Common";
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar40 = UI_UIManager__GetLocale
                        (pSVar28,(System_String_o *)pSVar57,(System_String_o *)unaff_R15,
                         (System_String_o *)"",(System_String_o *)"",(MethodInfo *)in_R9);
    in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    UI_ElementFactory__CreateInputSetting
              ((UnityEngine_Transform_o *)pIVar42,pUVar29,(Settings_BaseSetting_o *)pIVar41,pSVar40,
               (System_String_o *)"",in_XMM1_Da,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
label_0444b336:
    local_11c = local_11c + 1;
  }
  goto label_0444add3;
}


// UI.SettingsSkinsPanel$$OnSkinsPanelButtonClick
// il2cpp: void UI_SettingsSkinsPanel__OnSkinsPanelButtonClick (UI_SettingsSkinsPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x444bee0

void UI_SettingsSkinsPanel__OnSkinsPanelButtonClick
               (UI_SettingsSkinsPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_String_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  UI_ConfirmPopup_o *__this_02;
  char cVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  Il2CppMethodPointer *ppIVar12;
  System_String_o **ppSVar13;
  System_String_o *__this_03;
  long lVar14;
  MethodInfo *in_R9;
  
  if (g_data_057ae6fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSkinsPanelButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSkinsPanelButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSkinsPanelButtonClick_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSkinsPanelButtonClick_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"DeleteWarning");
    il2cpp_runtime_helper_023445d0(&"New set");
    g_data_057ae6fb = '\x01';
  }
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  __this_03 = pSVar9;
  System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  if (pSVar9 == (System_String_o *)0x0) goto label_0444c577;
  pSVar9->fields = (System_String_Fields)__this;
  il2cpp_runtime_helper_022b4080(&pSVar9->fields,__this);
  pSVar9[1].klass = (System_String_c *)name;
  il2cpp_runtime_helper_022b4080(pSVar9 + 1);
  if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar14 = *(long *)((long)TypeInfo_UIManager[7].fields + 0x28);
  __this_03 = TypeInfo_UIManager;
  if ((lVar14 == 0) ||
     (pSVar4 = (__this->fields)._currentCategoryPanelName, pSVar4 == (Settings_StringSetting_o *)0x0))
  goto label_0444c577;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings;
  __this_03 = (System_String_o *)0x0;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0444c577;
  __this_01 = *(UI_SetNamePopup_o **)(lVar14 + 0x88);
  pSVar10 = (System_String_o *)
            System_Collections_Generic_Dictionary_object__object___get_Item
                      (__this_00,(Il2CppObject *)(pSVar4->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
  pSVar9 = (System_String_o *)pSVar9[1].klass;
  ppSVar13 = &"Create";
  bVar8 = System_String__op_Equality(pSVar9,"Create",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    __this_03 = pSVar9;
    bVar8 = System_String__op_Equality(pSVar9,"Delete",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pSVar10 != (System_String_o *)0x0) {
        pSVar5 = pSVar10->klass;
        uVar1._0_1_ = (pSVar5->_2).rank;
        uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar6 = (pSVar5->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_ISetSettingsContainer) {
              ppIVar12 = &(&(pSVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar14) + 7].
                          methodPtr;
              goto label_0444c2f3;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar14);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_ISetSettingsContainer,7);
label_0444c2f3:
        cVar7 = (**ppIVar12)(pSVar10);
        if (cVar7 == '\0') {
          return;
        }
        if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = "DeleteWarning";
        lVar14 = *(long *)((long)TypeInfo_UIManager[7].fields + 0x28);
        __this_03 = TypeInfo_UIManager;
        if (lVar14 != 0) {
          __this_02 = *(UI_ConfirmPopup_o **)(lVar14 + 0x38);
          if (g_data_057ae727 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"Common");
            il2cpp_runtime_helper_023445d0(&"");
            g_data_057ae727 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = UI_UIManager__GetLocale("Common",pSVar9,"","","",in_R9);
          pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pSVar9 = "Delete";
          if (g_data_057ae727 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"Common");
            il2cpp_runtime_helper_023445d0(&"");
            g_data_057ae727 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = "Common";
          pSVar9 = UI_UIManager__GetLocale("Common",pSVar9,"","","",in_R9);
          if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
            UI_ConfirmPopup__Show(__this_02,pSVar10,pUVar11,pSVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_0444c577;
    }
    __this_03 = pSVar9;
    bVar8 = System_String__op_Equality(pSVar9,"Rename",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      ppSVar13 = &"Copy";
      bVar8 = System_String__op_Equality(pSVar9,"Copy",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      goto label_0444c0b0;
    }
    if (pSVar10 == (System_String_o *)0x0) goto label_0444c577;
    pSVar5 = pSVar10->klass;
    uVar2._0_1_ = (pSVar5->_2).rank;
    uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_ISetSettingsContainer) {
          ppIVar12 = &(&(pSVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar14)].methodPtr;
          goto label_0444c481;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_ISetSettingsContainer,0);
label_0444c481:
    lVar14 = (**ppIVar12)();
    __this_03 = pSVar10;
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto label_0444c577;
    pSVar9 = *(System_String_o **)(*(long *)(lVar14 + 0x20) + 0x18);
    pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae727 == '\0') goto label_0444c536;
label_0444c4e6:
      iVar3 = *(int *)((long)&TypeInfo_UIManager[9].monitor + 4);
      pSVar10 = "Rename";
    }
    else {
      if (g_data_057ae727 != '\0') goto label_0444c4e6;
label_0444c536:
      pSVar10 = "Rename";
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&"Common");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae727 = '\x01';
      iVar3 = *(int *)((long)&TypeInfo_UIManager[9].monitor + 4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = "Common";
    pSVar10 = UI_UIManager__GetLocale("Common",pSVar10,"","","",in_R9);
  }
  else {
    pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_0444c0b0:
    UnityEngine_Events_UnityAction___ctor();
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = *ppSVar13;
      if (g_data_057ae727 == '\0') goto label_0444c25b;
label_0444c0e1:
      iVar3 = *(int *)((long)&TypeInfo_UIManager[9].monitor + 4);
    }
    else {
      pSVar9 = *ppSVar13;
      if (g_data_057ae727 != '\0') goto label_0444c0e1;
label_0444c25b:
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&"Common");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae727 = '\x01';
      iVar3 = *(int *)((long)&TypeInfo_UIManager[9].monitor + 4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = "Common";
    pSVar10 = UI_UIManager__GetLocale("Common",pSVar9,"","","",in_R9);
    pSVar9 = "New set";
  }
  if (__this_01 != (UI_SetNamePopup_o *)0x0) {
    UI_SetNamePopup__Show(__this_01,pSVar9,pUVar11,pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_0444c577:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel$$OnSkinsSetOperationFinish
// il2cpp: void UI_SettingsSkinsPanel__OnSkinsSetOperationFinish (UI_SettingsSkinsPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x444c590

void UI_SettingsSkinsPanel__OnSkinsSetOperationFinish
               (UI_SettingsSkinsPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_c *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  Settings_TypedSetting_int__o *__this_05;
  long lVar7;
  System_String_Fields SVar8;
  long *plVar9;
  System_String_o *pSVar10;
  UI_ElementStyle_o *__this_06;
  MethodInfo_2A23FA0 **in_RCX;
  Il2CppType **extraout_RDX;
  UnityEngine_Transform_o *parent;
  System_String_Fields *pSVar11;
  MethodInfo_2A23FA0 **ppMVar12;
  System_String_Fields *pSVar13;
  System_String_Fields a;
  long lVar14;
  long *unaff_R12;
  long *unaff_R13;
  System_String_Fields unaff_R15;
  undefined1 auVar15 [12];
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  Il2CppObject *in_stack_ffffffffffffff38;
  undefined1 auStack_a8 [80];
  System_String_Fields SStack_58;
  UI_SettingsSkinsPanel_o *pUStack_50;
  System_String_Fields SStack_48;
  _union_249689 _Stack_40;
  
  ppMVar12 = (MethodInfo_2A23FA0 **)name;
  if (g_data_057ae6fc == '\0') {
    _Stack_40 = (_union_249689)0x444c673;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSettings);
    _Stack_40 = (_union_249689)0x444c67f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    _Stack_40 = (_union_249689)0x444c68b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    _Stack_40 = (_union_249689)0x444c697;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    _Stack_40 = (_union_249689)0x444c6a3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    _Stack_40 = (_union_249689)0x444c6af;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    _Stack_40 = (_union_249689)0x444c6bb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    _Stack_40 = (_union_249689)0x444c6c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    _Stack_40 = (_union_249689)0x444c6d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    _Stack_40 = (_union_249689)0x444c6df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    _Stack_40 = (_union_249689)0x444c6eb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    _Stack_40 = (_union_249689)0x444c6f7;
    il2cpp_runtime_helper_023445d0(&"Human");
    _Stack_40 = (_union_249689)0x444c703;
    il2cpp_runtime_helper_023445d0(&"Create");
    _Stack_40 = (_union_249689)0x444c70f;
    il2cpp_runtime_helper_023445d0(&"Copy");
    _Stack_40 = (_union_249689)0x444c71b;
    il2cpp_runtime_helper_023445d0(&"Delete");
    _Stack_40 = (_union_249689)0x444c727;
    il2cpp_runtime_helper_023445d0(&"Rename");
    g_data_057ae6fc = '\x01';
    if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) goto label_0444c746;
label_0444c5c6:
    lVar7 = *(long *)(*(long *)((long)TypeInfo_UIManager + 0xb8) + 0x28);
    a = TypeInfo_UIManager;
  }
  else {
    if (*(int *)((long)TypeInfo_UIManager + 0xe4) != 0) goto label_0444c5c6;
label_0444c746:
    _Stack_40 = (_union_249689)0x444c74b;
    il2cpp_runtime_helper_02337ed0();
    lVar7 = *(long *)(*(long *)((long)TypeInfo_UIManager + 0xb8) + 0x28);
    a = TypeInfo_UIManager;
  }
  pSVar13 = &TypeInfo_UIManager;
  TypeInfo_UIManager = a;
  if (lVar7 != 0) {
    pSVar13 = &TypeInfo_UIManager;
    unaff_R13 = *(long **)(lVar7 + 0x88);
    if (g_data_057ae6ff == '\0') {
      _Stack_40 = (_union_249689)0x444c5f6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
      a = (System_String_Fields)&MethodInfo_String_get_Value;
      _Stack_40 = (_union_249689)0x444c602;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae6ff = '\x01';
    }
    pSVar1 = (__this->fields)._currentCategoryPanelName;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings;
      a._stringLength = 0;
      a._firstChar = 0;
      a._6_2_ = 0;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        _Stack_40 = (_union_249689)0x444c636;
        unaff_R12 = (long *)System_Collections_Generic_Dictionary_object__object___get_Item
                                      (__this_00,(Il2CppObject *)(pSVar1->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
        if ((System_String_Fields)unaff_R12 == (System_String_Fields)0x0) {
label_0444c65f:
          unaff_R15._stringLength = 0;
          unaff_R15._firstChar = 0;
          unaff_R15._6_2_ = 0;
        }
        else {
          in_RCX = (MethodInfo_2A23FA0 **)(ulong)*(byte *)(TypeInfo_HumanCustomSkinSettings + 0x130);
          if (*(byte *)(*unaff_R12 + 0x130) < *(byte *)(TypeInfo_HumanCustomSkinSettings + 0x130)) goto label_0444c65f;
          unaff_R15._stringLength = 0;
          unaff_R15._firstChar = 0;
          unaff_R15._6_2_ = 0;
          if (*(long *)(*(long *)(*unaff_R12 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_HumanCustomSkinSettings) {
            unaff_R15 = (System_String_Fields)unaff_R12;
          }
        }
        _Stack_40 = (_union_249689)0x444c78f;
        ppMVar12 = (MethodInfo_2A23FA0 **)"Create";
        a = (System_String_Fields)name;
        bVar3 = System_String__op_Equality(name,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          _Stack_40 = (_union_249689)0x444c829;
          ppMVar12 = (MethodInfo_2A23FA0 **)"Delete";
          a = (System_String_Fields)name;
          bVar3 = System_String__op_Equality(name,(System_String_o *)"Delete",(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            _Stack_40 = (_union_249689)0x444c899;
            ppMVar12 = (MethodInfo_2A23FA0 **)"Rename";
            a = (System_String_Fields)name;
            bVar3 = System_String__op_Equality(name,(System_String_o *)"Rename",(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              _Stack_40 = (_union_249689)0x444ca4c;
              ppMVar12 = (MethodInfo_2A23FA0 **)"Copy";
              a = (System_String_Fields)name;
              bVar3 = System_String__op_Equality(name,(System_String_o *)"Copy",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') goto label_0444cdc4;
              if ((((System_String_Fields)unaff_R13 != (System_String_Fields)0x0) &&
                  (*(long *)((long)unaff_R13 + 0xb8) != 0)) &&
                 ((System_String_Fields)unaff_R12 != (System_String_Fields)0x0)) {
                name = *(System_String_o **)(*(long *)((long)unaff_R13 + 0xb8) + 0x18);
                lVar7 = *unaff_R12;
                if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                  lVar14 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                      puVar6 = (undefined8 *)
                               (lVar7 + (long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 5) * 0x10 +
                               0x138);
                      goto label_0444cdf3;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                }
                _Stack_40 = (_union_249689)0x444cad0;
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,5);
label_0444cdf3:
                _Stack_40 = (_union_249689)0x444cdff;
                (*(code *)*puVar6)(unaff_R12,name,puVar6[1]);
                lVar7 = *unaff_R12;
                if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                  lVar14 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                      puVar6 = (undefined8 *)
                               ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 1) * 0x10 + lVar7 +
                               0x138);
                      goto label_0444ce59;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                }
                _Stack_40 = (_union_249689)0x444ce3c;
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,1);
label_0444ce59:
                _Stack_40 = (_union_249689)0x444ce62;
                unaff_R13 = (long *)(*(code *)*puVar6)(unaff_R12,puVar6[1]);
                lVar7 = *unaff_R12;
                if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                  lVar14 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                      in_RCX = (MethodInfo_2A23FA0 **)
                               ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar7 +
                               0x138);
                      goto label_0444cec9;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                }
                _Stack_40 = (_union_249689)0x444ceac;
                in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,2);
label_0444cec9:
                ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
                _Stack_40 = (_union_249689)0x444ced2;
                a = (System_String_Fields)unaff_R12;
                SVar8 = (System_String_Fields)(*((MethodInfo *)in_RCX)->methodPointer)();
                pSVar13 = (System_String_Fields *)&TypeInfo_ISetSettingsContainer;
                if (SVar8 != (System_String_Fields)0x0) {
                  lVar7 = *(long *)SVar8;
                  if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
                        in_RCX = (MethodInfo_2A23FA0 **)
                                 ((long)*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) * 0x10 + lVar7 + 0x138)
                        ;
                        goto label_0444cf41;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                  }
                  _Stack_40 = (_union_249689)0x444cf29;
                  in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(SVar8,TypeInfo_IListSetting,0);
label_0444cf41:
                  ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
                  _Stack_40 = (_union_249689)0x444cf4a;
                  a = SVar8;
                  iVar4 = (*((MethodInfo *)in_RCX)->methodPointer)();
                  name = (System_String_o *)SVar8;
                  if ((System_String_Fields)unaff_R13 != (System_String_Fields)0x0) {
                    in_RCX = &MethodInfo_Void_set_Value;
                    ppMVar12._4_4_ = 0;
                    ppMVar12._0_4_ = iVar4 - 1U;
                    _Stack_40 = (_union_249689)0x444cf66;
                    a = (System_String_Fields)unaff_R13;
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)unaff_R13,iVar4 - 1U,MethodInfo_Void_set_Value);
                    pSVar1 = (__this->fields)._currentCategoryPanelName;
                    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
                      a = (System_String_Fields)(pSVar1->fields)._value;
                      _Stack_40 = (_union_249689)0x444cf84;
                      ppMVar12 = (MethodInfo_2A23FA0 **)"Human";
                      bVar3 = System_String__op_Equality
                                        ((System_String_o *)a,(System_String_o *)"Human",
                                         (MethodInfo *)0x0);
                      if ((unaff_R15 == (System_String_Fields)0x0) || ((char)bVar3 == '\0'))
                      goto label_0444cdc4;
                      if (*(long *)((long)unaff_R15 + 0x68) != 0) {
                        if (*(int *)(*(long *)((long)unaff_R15 + 0x68) + 0x14) == 0) {
                          _Stack_40 = (_union_249689)0x444cfb6;
                          UI_SettingsSkinsPanel__SelectNewlyCreatedOrCopiedSetInDropdown
                                    (__this,(Settings_ICustomSkinSettings_o *)unaff_R12,
                                     (Settings_HumanCustomSkinSettings_o *)unaff_R15,(MethodInfo *)in_RCX);
                        }
                        goto label_0444cdc4;
                      }
                    }
                  }
                }
              }
            }
            else if ((System_String_Fields)unaff_R12 != (System_String_Fields)0x0) {
              lVar7 = *unaff_R12;
              if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                lVar14 = 0;
                do {
                  if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                    in_RCX = (MethodInfo_2A23FA0 **)
                             ((long)*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) * 0x10 + lVar7 + 0x138);
                    goto label_0444cba7;
                  }
                  lVar14 = lVar14 + 0x10;
                } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
              }
              _Stack_40 = (_union_249689)0x444c8fd;
              in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,0);
label_0444cba7:
              ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
              _Stack_40 = (_union_249689)0x444cbb0;
              a = (System_String_Fields)unaff_R12;
              lVar7 = (*((MethodInfo *)in_RCX)->methodPointer)();
              if (((lVar7 != 0) && ((System_String_Fields)unaff_R13 != (System_String_Fields)0x0)) &&
                 (in_RCX = *(MethodInfo_2A23FA0 ***)((long)unaff_R13 + 0xb8),
                 (MethodInfo *)in_RCX != (MethodInfo *)0x0)) {
                a._stringLength = 0;
                a._firstChar = 0;
                a._6_2_ = 0;
                if (*(Settings_TypedSetting_T__o **)(lVar7 + 0x20) != (Settings_TypedSetting_T__o *)0x0) {
                  _Stack_40 = (_union_249689)0x444cbf2;
                  Settings_TypedSetting_object___set_Value
                            (*(Settings_TypedSetting_T__o **)(lVar7 + 0x20),
                             (Il2CppObject *)((MethodInfo *)in_RCX)->name,MethodInfo_Void_set_Value);
                  goto label_0444cdc4;
                }
              }
            }
          }
          else if ((System_String_Fields)unaff_R12 != (System_String_Fields)0x0) {
            lVar7 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
              lVar14 = 0;
              do {
                if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                  puVar6 = (undefined8 *)
                           (lVar7 + (long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 6) * 0x10 + 0x138)
                  ;
                  goto label_0444caff;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
            }
            _Stack_40 = (_union_249689)0x444c880;
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,6);
label_0444caff:
            _Stack_40 = (_union_249689)0x444cb08;
            (*(code *)*puVar6)(unaff_R12,puVar6[1]);
            lVar7 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
              lVar14 = 0;
              do {
                if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                  in_RCX = (MethodInfo_2A23FA0 **)
                           ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 1) * 0x10 + lVar7 + 0x138)
                  ;
                  goto label_0444cb69;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
            }
            _Stack_40 = (_union_249689)0x444cb4c;
            in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,1);
label_0444cb69:
            ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
            _Stack_40 = (_union_249689)0x444cb72;
            a = (System_String_Fields)unaff_R12;
            __this_05 = (Settings_TypedSetting_int__o *)(*((MethodInfo *)in_RCX)->methodPointer)();
            name = (System_String_o *)&TypeInfo_ISetSettingsContainer;
            if (__this_05 != (Settings_TypedSetting_int__o *)0x0) {
              _Stack_40 = (_union_249689)0x444cb8f;
              Settings_TypedSetting_int___set_Value(__this_05,0,MethodInfo_Void_set_Value);
              goto label_0444cdc4;
            }
          }
        }
        else if ((((System_String_Fields)unaff_R13 != (System_String_Fields)0x0) &&
                 (*(long *)((long)unaff_R13 + 0xb8) != 0)) &&
                ((System_String_Fields)unaff_R12 != (System_String_Fields)0x0)) {
          name = *(System_String_o **)(*(long *)((long)unaff_R13 + 0xb8) + 0x18);
          unaff_R13 = &TypeInfo_ISetSettingsContainer;
          lVar7 = *unaff_R12;
          in_RCX = (MethodInfo_2A23FA0 **)0x0;
          if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
            in_RCX = (MethodInfo_2A23FA0 **)((ulong)*(ushort *)(lVar7 + 0x12e) << 4);
            lVar14 = 0;
            do {
              if (*(long *)(lVar14 + *(long *)(lVar7 + 0xb0)) == TypeInfo_ISetSettingsContainer) {
                in_RCX = (MethodInfo_2A23FA0 **)
                         ((long)(*(int *)(lVar14 + 8 + *(long *)(lVar7 + 0xb0)) + 4) * 0x10);
                puVar6 = (undefined8 *)((long)&((MethodInfo *)((long)in_RCX + 0x108))->parameters + lVar7);
                goto label_0444c91c;
              }
              lVar14 = lVar14 + 0x10;
            } while (in_RCX != (MethodInfo_2A23FA0 **)lVar14);
          }
          _Stack_40 = (_union_249689)0x444c810;
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,4);
label_0444c91c:
          _Stack_40 = (_union_249689)0x444c928;
          ppMVar12 = (MethodInfo_2A23FA0 **)name;
          a = (System_String_Fields)unaff_R12;
          (*(code *)*puVar6)(unaff_R12,name,puVar6[1]);
          pSVar1 = (__this->fields)._currentCategoryPanelName;
          if (pSVar1 != (Settings_StringSetting_o *)0x0) {
            a = (System_String_Fields)(pSVar1->fields)._value;
            pSVar11 = &"Human";
            _Stack_40 = (_union_249689)0x444c94a;
            ppMVar12 = (MethodInfo_2A23FA0 **)"Human";
            bVar3 = System_String__op_Equality
                              ((System_String_o *)a,(System_String_o *)"Human",(MethodInfo *)0x0);
            if ((unaff_R15 == (System_String_Fields)0x0) || ((char)bVar3 == '\0')) {
label_0444c96a:
              pSVar1 = (__this->fields)._currentCategoryPanelName;
              name = (System_String_o *)pSVar11;
              if (pSVar1 != (Settings_StringSetting_o *)0x0) {
                a = (System_String_Fields)(pSVar1->fields)._value;
                _Stack_40 = (_union_249689)0x444c985;
                ppMVar12 = (MethodInfo_2A23FA0 **)"Human";
                bVar3 = System_String__op_Equality
                                  ((System_String_o *)a,(System_String_o *)"Human",(MethodInfo *)0x0);
                if ((unaff_R15 == (System_String_Fields)0x0) || ((char)bVar3 == '\0')) {
label_0444cc43:
                  lVar7 = *unaff_R12;
                  if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                        puVar6 = (undefined8 *)
                                 ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 1) * 0x10 + lVar7 +
                                 0x138);
                        goto label_0444cca9;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                  }
                  _Stack_40 = (_union_249689)0x444cc8c;
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,1);
label_0444cca9:
                  _Stack_40 = (_union_249689)0x444ccb2;
                  unaff_R15 = (System_String_Fields)(*(code *)*puVar6)(unaff_R12,puVar6[1]);
                  lVar7 = *unaff_R12;
                  if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
                        in_RCX = (MethodInfo_2A23FA0 **)
                                 ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar7 +
                                 0x138);
                        goto label_0444cd19;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                  }
                  _Stack_40 = (_union_249689)0x444ccfc;
                  in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_ISetSettingsContainer,2);
label_0444cd19:
                  ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
                  _Stack_40 = (_union_249689)0x444cd22;
                  a = (System_String_Fields)unaff_R12;
                  SVar8 = (System_String_Fields)(*((MethodInfo *)in_RCX)->methodPointer)();
                  name = (System_String_o *)pSVar11;
                  if (SVar8 != (System_String_Fields)0x0) {
                    lVar7 = *(long *)SVar8;
                    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                      lVar14 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
                          in_RCX = (MethodInfo_2A23FA0 **)
                                   ((long)*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) * 0x10 + lVar7 +
                                   0x138);
                          goto label_0444cd91;
                        }
                        lVar14 = lVar14 + 0x10;
                      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                    }
                    _Stack_40 = (_union_249689)0x444cd79;
                    in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(SVar8,TypeInfo_IListSetting,0);
label_0444cd91:
                    ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
                    _Stack_40 = (_union_249689)0x444cd9a;
                    a = SVar8;
                    iVar4 = (*((MethodInfo *)in_RCX)->methodPointer)();
                    name = (System_String_o *)SVar8;
                    if (unaff_R15 != (System_String_Fields)0x0) {
                      _Stack_40 = (_union_249689)0x444cdba;
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)unaff_R15,iVar4 + -1,MethodInfo_Void_set_Value);
                      _Stack_40 = (_union_249689)0x444cdc4;
                      UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
label_0444cdc4:
                      UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  name = (System_String_o *)pSVar11;
                  if (*(long *)((long)unaff_R15 + 0x68) != 0) {
                    if (*(int *)(*(long *)((long)unaff_R15 + 0x68) + 0x14) != 1) goto label_0444cc43;
                    lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                    name = (System_String_o *)pSVar11;
                    if (((lVar7 != 0) &&
                        (lVar7 = *(long *)(lVar7 + 0x20), name = (System_String_o *)pSVar11, lVar7 != 0)) &&
                       (pSVar11 = *(System_String_Fields **)(lVar7 + 0x28), name = (System_String_o *)pSVar11,
                       (System_String_Fields)pSVar11 != (System_String_Fields)0x0)) {
                      lVar7 = *(long *)pSVar11;
                      if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
                        lVar14 = 0;
                        do {
                          if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
                            in_RCX = (MethodInfo_2A23FA0 **)
                                     ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 2) * 0x10 +
                                      lVar7 + 0x138);
                            goto label_0444cc0f;
                          }
                          lVar14 = lVar14 + 0x10;
                        } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
                      }
                      _Stack_40 = (_union_249689)0x444ca30;
                      in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IListSetting,2);
label_0444cc0f:
                      ppMVar12 = (MethodInfo_2A23FA0 **)((MethodInfo *)in_RCX)->virtualMethodPointer;
                      _Stack_40 = (_union_249689)0x444cc18;
                      a = (System_String_Fields)pSVar11;
                      lVar7 = (*((MethodInfo *)in_RCX)->methodPointer)();
                      if (lVar7 != 0) {
                        a._stringLength = 0;
                        a._firstChar = 0;
                        a._6_2_ = 0;
                        if (*(Settings_TypedSetting_int__o **)((long)unaff_R15 + 0x70) !=
                            (Settings_TypedSetting_int__o *)0x0) {
                          _Stack_40 = (_union_249689)0x444cc43;
                          Settings_TypedSetting_int___set_Value
                                    (*(Settings_TypedSetting_int__o **)((long)unaff_R15 + 0x70),
                                     *(int *)(lVar7 + 0x18) + -1,MethodInfo_Void_set_Value);
                          goto label_0444cc43;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              name = (System_String_o *)pSVar11;
              if (*(long *)((long)unaff_R15 + 0x68) != 0) {
                if (*(int *)(*(long *)((long)unaff_R15 + 0x68) + 0x14) != 0) goto label_0444c96a;
                _Stack_40 = (_union_249689)0x444cae3;
                UI_SettingsSkinsPanel__SelectNewlyCreatedOrCopiedSetInDropdown
                          (__this,(Settings_ICustomSkinSettings_o *)unaff_R12,
                           (Settings_HumanCustomSkinSettings_o *)unaff_R15,(MethodInfo *)in_RCX);
                goto label_0444cc43;
              }
            }
          }
        }
      }
    }
  }
  _Stack_40.genericMethod = UI_SettingsSkinsPanel__SelectNewlyCreatedOrCopiedSetInDropdown;
  il2cpp_runtime_helper_022b2c90();
  SVar8 = (System_String_Fields)ppMVar12;
  pSVar11 = (System_String_Fields *)a;
  auStack_a8._72_8_ = name;
  SStack_58 = (System_String_Fields)unaff_R12;
  pUStack_50 = __this;
  SStack_48 = unaff_R15;
  _Stack_40 = (_union_249689)pSVar13;
  if (g_data_057ae703 == '\0') {
    auStack_a8._64_8_ = (void *)0x444cfe6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    auStack_a8._64_8_ = (void *)0x444cff2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    auStack_a8._64_8_ = (void *)0x444cffe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    auStack_a8._64_8_ = (void *)0x444d00a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSVar11 = &"Custom Set:";
    auStack_a8._64_8_ = (void *)0x444d016;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae703 = '\x01';
  }
  if ((((System_String_o *)((long)a + 0x78))->klass == (System_String_c *)0x0) ||
     (*(System_String_Fields *)((long)a + 0x70) == (System_String_Fields)0x0)) {
    return;
  }
  if ((System_String_Fields)ppMVar12 != (System_String_Fields)0x0) {
    unaff_R12 = &TypeInfo_ISetSettingsContainer;
    lVar7 = (long)*ppMVar12;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
          in_RCX = (MethodInfo_2A23FA0 **)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar7 + 0x138);
          goto label_0444d0a9;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
    }
    auStack_a8._64_8_ = (void *)0x444d08c;
    in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(ppMVar12,TypeInfo_ISetSettingsContainer,2);
label_0444d0a9:
    SVar8 = (System_String_Fields)((MethodInfo *)in_RCX)->virtualMethodPointer;
    auStack_a8._64_8_ = (void *)0x444d0b2;
    pSVar11 = (System_String_Fields *)ppMVar12;
    plVar9 = (long *)(*((MethodInfo *)in_RCX)->methodPointer)();
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
            puVar6 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) * 0x10 + lVar7 + 0x138);
            goto label_0444d121;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
      }
      auStack_a8._64_8_ = (void *)0x444d109;
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IListSetting,0);
label_0444d121:
      auStack_a8._64_8_ = (void *)0x444d12a;
      uVar5 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      pSVar13._4_4_ = 0;
      pSVar13._0_4_ = uVar5;
      lVar7 = (long)*ppMVar12;
      if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar14) == TypeInfo_ISetSettingsContainer) {
            in_RCX = (MethodInfo_2A23FA0 **)
                     ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar14) + 3) * 0x10 + lVar7 + 0x138);
            goto label_0444d189;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar14);
      }
      auStack_a8._64_8_ = (void *)0x444d16c;
      in_RCX = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_02300d20(ppMVar12,TypeInfo_ISetSettingsContainer,3);
label_0444d189:
      SVar8 = (System_String_Fields)((MethodInfo *)in_RCX)->virtualMethodPointer;
      auStack_a8._64_8_ = (void *)0x444d192;
      pSVar11 = (System_String_Fields *)ppMVar12;
      lVar7 = (*((MethodInfo *)in_RCX)->methodPointer)();
      if (lVar7 != 0) {
        pSVar13._0_4_ = uVar5 - 1;
        pSVar13._4_4_ = 0;
        if (*(uint *)(lVar7 + 0x18) <= (uint)pSVar13._0_4_) goto label_0444d230;
        in_RCX = (MethodInfo_2A23FA0 **)(long)(int)pSVar13._0_4_;
        pSVar10 = *(System_String_o **)(lVar7 + 0x20 + (long)in_RCX * 8);
        pSVar11._0_4_ = 0;
        pSVar11._4_2_ = 0;
        pSVar11._6_2_ = 0;
        if (pSVar10 != (System_String_o *)0x0) {
          auStack_a8._64_8_ = (void *)0x444d1c5;
          SVar8 = "Custom Set:";
          bVar3 = System_String__StartsWith(pSVar10,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return;
          }
          pSVar2 = ((System_String_o *)((long)a + 0x78))->klass;
          pSVar11._0_4_ = 0;
          pSVar11._4_2_ = 0;
          pSVar11._6_2_ = 0;
          if (pSVar2 != (System_String_c *)0x0) {
            SVar8._4_4_ = 0;
            SVar8._stringLength = pSVar13._0_4_;
            auStack_a8._64_8_ = (void *)0x444d1ec;
            uVar5 = System_Collections_Generic_List_int___IndexOf
                              ((System_Collections_Generic_List_int__o *)pSVar2,pSVar13._0_4_,MethodInfo_Int32_IndexOf);
            pSVar11 = *(System_String_Fields **)((long)a + 0x70);
            if ((System_String_Fields)pSVar11 != (System_String_Fields)0x0) {
              SVar8._stringLength = 0;
              SVar8._firstChar = 0;
              SVar8._6_2_ = 0;
              if (-1 < (int)uVar5) {
                SVar8._4_4_ = 0;
                SVar8._stringLength = uVar5;
              }
              ppMVar12 = &MethodInfo_Void_set_Value;
              auStack_a8._64_8_ = (void *)0x444d20b;
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar11,SVar8._stringLength,MethodInfo_Void_set_Value);
              if (extraout_RDX != (Il2CppType **)0x0) {
                pSVar11._0_4_ = 0;
                pSVar11._4_2_ = 0;
                pSVar11._6_2_ = 0;
                if ((Settings_TypedSetting_int__o *)extraout_RDX[0xf] != (Settings_TypedSetting_int__o *)0x0)
                {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)extraout_RDX[0xf],pSVar13._0_4_,MethodInfo_Void_set_Value);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  auStack_a8._64_8_ = (void *)0x444d230;
  il2cpp_runtime_helper_022b2c90();
label_0444d230:
  auStack_a8._64_8_ = (void *)0x444d235;
  il2cpp_runtime_helper_022b2ca0();
  auStack_a8._24_8_ = ppMVar12;
  auStack_a8._32_8_ = unaff_R12;
  auStack_a8._40_8_ = unaff_R13;
  auStack_a8._48_8_ = extraout_RDX;
  auStack_a8._56_8_ = a;
  auStack_a8._64_8_ = pSVar13;
  if (g_data_057ae6fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6fd = '\x01';
  }
  auStack_a8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_a8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_a8._16_8_ = (Settings_BaseSetting_o *)0x0;
  pSVar10 = (System_String_o *)
            (**(code **)(*(long *)pSVar11 + 0x178))(pSVar11,*(undefined8 *)(*(long *)pSVar11 + 0x180));
  __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_06,0x18,0.0,20.0,pSVar10,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(parent,__this_06,(System_String_o *)in_RCX,0,4,(MethodInfo *)0x0);
  if ((SVar8 != (System_String_Fields)0x0) &&
     (pSVar2 = ((System_String_o *)((long)SVar8 + 0x18))->klass, pSVar2 != (System_String_c *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    while (__this_01.fields._index = (int)in_stack_ffffffffffffff30,
          __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20),
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
          __this_01.fields._current = in_stack_ffffffffffffff38,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)auStack_a8), (char)bVar3 != '\0') {
      in_stack_ffffffffffffff38 = (Il2CppObject *)0x0;
      in_stack_ffffffffffffff28 = 0;
      in_stack_ffffffffffffff30 = 0;
      UI_ElementFactory__CreateInputSetting
                (parent,__this_06,(Settings_BaseSetting_o *)auStack_a8._16_8_,
                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",420.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    }
    __this_02.fields._index = (int)in_stack_ffffffffffffff30;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_02.fields._current = in_stack_ffffffffffffff38;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)auStack_a8);
    return;
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar7 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_ffffffffffffff30;
    __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_03.fields._current = in_stack_ffffffffffffff38;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)auStack_a8);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_04.fields._index = (int)in_stack_ffffffffffffff30;
  __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_04.fields._current = in_stack_ffffffffffffff38;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_a8);
  _Unwind_Resume(auVar15._0_8_);
}


// UI.SettingsSkinsPanel$$CreateSkinListStringSettings
// il2cpp: void UI_SettingsSkinsPanel__CreateSkinListStringSettings (UI_SettingsSkinsPanel_o* __this, Settings_ListSetting_StringSetting__o* list, UnityEngine_Transform_o* panel, System_String_o* title, const MethodInfo* method);
// 0x444d240

void UI_SettingsSkinsPanel__CreateSkinListStringSettings
               (UI_SettingsSkinsPanel_o *__this,Settings_ListSetting_StringSetting__o *list,
               UnityEngine_Transform_o *panel,System_String_o *title,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  Il2CppObject *in_stack_ffffffffffffff98;
  Il2CppMethodPointer pIStack_48;
  Il2CppMethodPointer pIStack_40;
  Settings_BaseSetting_o *pSStack_38;
  
  if (g_data_057ae6fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6fd = '\x01';
  }
  pIStack_48 = (Il2CppMethodPointer)0x0;
  pIStack_40 = (Il2CppMethodPointer)0x0;
  pSStack_38 = (Settings_BaseSetting_o *)0x0;
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_05,0x18,0.0,20.0,themePanel,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(panel,__this_05,title,0,4,(MethodInfo *)0x0);
  if ((list != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(list->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00,
               MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    while (__this_01.fields._index = (int)in_stack_ffffffffffffff90,
          __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20),
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
          __this_01.fields._current = in_stack_ffffffffffffff98,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar2 != '\0') {
      in_stack_ffffffffffffff98 = (Il2CppObject *)0x0;
      in_stack_ffffffffffffff88 = 0;
      in_stack_ffffffffffffff90 = 0;
      UI_ElementFactory__CreateInputSetting
                (panel,__this_05,pSStack_38,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                 "",420.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    }
    __this_02.fields._index = (int)in_stack_ffffffffffffff90;
    __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_02.fields._current = in_stack_ffffffffffffff98;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    return;
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_ffffffffffffff90;
    __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = in_stack_ffffffffffffff98;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._index = (int)in_stack_ffffffffffffff90;
  __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_04.fields._current = in_stack_ffffffffffffff98;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.SettingsSkinsPanel$$CreateSkinStringSettings
// il2cpp: void UI_SettingsSkinsPanel__CreateSkinStringSettings (UI_SettingsSkinsPanel_o* __this, UnityEngine_Transform_o* panelLeft, UnityEngine_Transform_o* panelRight, float titleWidth, float elementWidth, int32_t leftCount, const MethodInfo* method);
// 0x444a740

void UI_SettingsSkinsPanel__CreateSkinStringSettings
               (UI_SettingsSkinsPanel_o *__this,UnityEngine_Transform_o *panelLeft,
               UnityEngine_Transform_o *panelRight,float titleWidth,float elementWidth,int32_t leftCount,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int32_t index;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UI_BasePanel_o *pUVar7;
  void *pvVar8;
  System_RuntimeTypeHandle_o SVar9;
  char cVar10;
  bool_conflict bVar11;
  uint uVar12;
  bool_conflict bVar13;
  bool_conflict bVar14;
  System_String_o *pSVar15;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar16;
  undefined8 *puVar17;
  System_Collections_Generic_List_object__o *__this_01;
  VirtualInvokeData *pVVar18;
  Il2CppClass *pIVar19;
  System_String_o *subCategory;
  long *plVar20;
  System_Type_o *pSVar21;
  System_Type_o *pSVar22;
  Il2CppObject *pIVar23;
  System_String_o *pSVar24;
  Il2CppRuntimeInterfaceOffsetPair *pIVar25;
  UnityEngine_Transform_o *pUVar26;
  MethodInfo *pMVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  MethodInfo *in_R9;
  System_String_o *unaff_R15;
  undefined1 auVar31 [12];
  long *plStack_80;
  int iStack_74;
  long lStack_60;
  
  plStack_80 = (long *)(ulong)(uint)titleWidth;
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
  pSVar15 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,titleWidth,20.0,pSVar15,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._currentCategoryPanelName;
  if (pSVar5 != (Settings_StringSetting_o *)0x0) {
    bVar11 = System_String__op_Equality((pSVar5->fields)._value,"Human",(MethodInfo *)0x0);
    if (g_data_057ae6ff == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057ae6ff = '\x01';
    }
    pSVar5 = (__this->fields)._currentCategoryPanelName;
    if ((pSVar5 != (Settings_StringSetting_o *)0x0) &&
       (pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings,
       pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar6,(Il2CppObject *)(pSVar5->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
      if ((char)bVar11 == '\0') {
        if (pIVar16 != (Il2CppObject *)0x0) {
          pIVar19 = pIVar16->klass;
          uVar2._0_1_ = (pIVar19->_2).rank;
          uVar2._1_1_ = (pIVar19->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar25 = (pIVar19->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar25->interfaceType + lVar29) == TypeInfo_ISetSettingsContainer) {
                pVVar18 = pIVar19->vtable + *(int *)((long)&pIVar25->offset + lVar29);
                goto label_0444ab8b;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar29);
          }
          pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar16,TypeInfo_ISetSettingsContainer,0);
label_0444ab8b:
          pMVar27 = pVVar18->method;
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
            lVar29 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x20), lVar29 != 0)) &&
               (plVar20 = *(long **)(lVar29 + 0x28), plVar20 != (long *)0x0)) {
              lVar29 = *plVar20;
              if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
                lVar28 = 0;
                do {
                  if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar28) == TypeInfo_IListSetting) {
                    puVar17 = (undefined8 *)
                              ((long)(*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar28) + 2) * 0x10 + lVar29 +
                              0x138);
                    goto label_0444abaf;
                  }
                  lVar28 = lVar28 + 0x10;
                } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar28);
              }
              puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IListSetting,2);
label_0444abaf:
              __this_01 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar17)(plVar20,puVar17[1])
              ;
              if (pIVar16[7].klass != (Il2CppClass *)0x0) {
                index = *(int32_t *)((long)&((pIVar16[7].klass)->_1).name + 4);
                if (index < 0) {
label_0444ac34:
                  if (g_data_057ae6ff == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                    g_data_057ae6ff = '\x01';
                  }
                  pSVar5 = (__this->fields)._currentCategoryPanelName;
                  if (((pSVar5 != (Settings_StringSetting_o *)0x0) &&
                      (pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                (__this->fields)._settings,
                      pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
                     (pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar6,(Il2CppObject *)(pSVar5->fields)._value,MethodInfo_ICustomSkinSettings_get_Item),
                     pIVar16 != (Il2CppObject *)0x0)) {
                    pIVar19 = pIVar16->klass;
                    uVar4._0_1_ = (pIVar19->_2).rank;
                    uVar4._1_1_ = (pIVar19->_2).minimumAlignment;
                    if ((ulong)uVar4 != 0) {
                      pIVar25 = (pIVar19->_1).interfaceOffsets;
                      lVar29 = 0;
                      do {
                        if (*(long *)((long)&pIVar25->interfaceType + lVar29) == TypeInfo_ISetSettingsContainer)
                        goto label_0444acde;
                        lVar29 = lVar29 + 0x10;
                      } while ((ulong)uVar4 << 4 != lVar29);
                    }
                    goto label_0444accf;
                  }
                }
                else if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                  if ((__this_01->fields)._size <= index) goto label_0444ac34;
                  pIVar16 = System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_BaseSetting_get_Item);
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
            pSVar5 = (__this->fields)._currentCategoryPanelName;
            if (((pSVar5 != (Settings_StringSetting_o *)0x0) &&
                (pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._settings,
                pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
               (pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar6,(Il2CppObject *)(pSVar5->fields)._value,MethodInfo_ICustomSkinSettings_get_Item),
               pIVar16 != (Il2CppObject *)0x0)) {
              pIVar19 = pIVar16->klass;
              uVar3._0_1_ = (pIVar19->_2).rank;
              uVar3._1_1_ = (pIVar19->_2).minimumAlignment;
              if ((ulong)uVar3 != 0) {
                pIVar25 = (pIVar19->_1).interfaceOffsets;
                lVar29 = 0;
                do {
                  if (*(long *)((long)&pIVar25->interfaceType + lVar29) == TypeInfo_ISetSettingsContainer) goto label_0444acde;
                  lVar29 = lVar29 + 0x10;
                } while ((ulong)uVar3 << 4 != lVar29);
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
label_0444b38d:
  il2cpp_runtime_helper_022b2c90();
label_0444b392:
  il2cpp_runtime_helper_022b2fd0();
label_0444b397:
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar29 = auVar31._0_8_;
  if (auVar31._8_4_ != 1) {
    lStack_60 = 0;
    goto label_0444b5c5;
  }
  plVar20 = (long *)__cxa_begin_catch(lVar29);
  lStack_60 = *plVar20;
  __cxa_end_catch();
label_0444b523:
  plVar20 = (long *)il2cpp_runtime_helper_023051f0(plStack_80,TypeInfo_IDisposable);
  if (plVar20 != (long *)0x0) {
    lVar29 = *plVar20;
    if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
      lVar28 = 0;
      do {
        if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar28) == TypeInfo_IDisposable) {
          puVar17 = (undefined8 *)
                    (lVar29 + (long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar28) * 0x10 + 0x138);
          goto label_0444b59d;
        }
        lVar28 = lVar28 + 0x10;
      } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar28);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_0444b59d:
    (*(code *)*puVar17)(plVar20,puVar17[1]);
  }
  lVar29 = lStack_60;
  if (lStack_60 == 0) {
    return;
  }
  do {
    lVar29 = il2cpp_runtime_helper_022fefe0(lVar29);
label_0444b5c5:
    plVar20 = (long *)il2cpp_runtime_helper_023051f0(plStack_80,TypeInfo_IDisposable);
    if (plVar20 != (long *)0x0) {
      lVar28 = *plVar20;
      if ((ulong)*(ushort *)(lVar28 + 0x12e) != 0) {
        lVar30 = 0;
        do {
          if (*(long *)(*(long *)(lVar28 + 0xb0) + lVar30) == TypeInfo_IDisposable) {
            puVar17 = (undefined8 *)
                      (lVar28 + (long)*(int *)(*(long *)(lVar28 + 0xb0) + 8 + lVar30) * 0x10 + 0x138);
            goto label_0444b63d;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)*(ushort *)(lVar28 + 0x12e) << 4 != lVar30);
      }
      puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_0444b63d:
      (*(code *)*puVar17)(plVar20,puVar17[1]);
    }
    if (lStack_60 == 0) {
      _Unwind_Resume(lVar29);
    }
    il2cpp_runtime_helper_022fefe0(lStack_60);
  } while( true );
label_0444acde:
  pVVar18 = pIVar19->vtable + *(int *)((long)&pIVar25->offset + lVar29);
label_0444acf1:
  pMVar27 = pVVar18->method;
label_0444acf8:
  pIVar16 = (Il2CppObject *)(*pVVar18->methodPtr)(pIVar16,pMVar27);
label_0444acfd:
  pUVar7 = (__this->fields).Parent;
  if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_0444b38d;
  bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
  if ((bVar1 <= (pUVar7->klass->_2).naturalAligment) &&
     ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SettingsPopup)) {
    pSVar5 = (__this->fields)._currentCategoryPanelName;
    if (pSVar5 != (Settings_StringSetting_o *)0x0) {
      pSVar15 = (System_String_o *)pUVar7[1].fields._currentCategoryPanel;
      subCategory = System_String__Concat_3ae5ba0("Skins.",(pSVar5->fields)._value,(MethodInfo *)0x0);
      if ((pIVar16 != (Il2CppObject *)0x0) && (pIVar19 = pIVar16[1].klass, pIVar19 != (Il2CppClass *)0x0)) {
        pvVar8 = (pIVar19->_1).image;
        plStack_80 = (long *)(**(code **)((long)pvVar8 + 0x2a8))
                                       (pIVar19,*(undefined8 *)((long)pvVar8 + 0x2b0));
        if (plStack_80 == (long *)0x0) goto label_0444b397;
        iStack_74 = 1;
        lStack_60 = 0;
label_0444add3:
        lVar29 = *plStack_80;
        if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
          lVar28 = 0;
          do {
            if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar28) == TypeInfo_IEnumerator) {
              puVar17 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar28) * 0x10 + lVar29 + 0x138);
              goto label_0444ae33;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar28);
        }
        puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plStack_80,TypeInfo_IEnumerator,0);
label_0444ae33:
        cVar10 = (*(code *)*puVar17)(plStack_80,puVar17[1]);
        if (cVar10 == '\0') goto label_0444b523;
        lVar29 = *plStack_80;
        if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
          lVar28 = 0;
          do {
            if (*(long *)(*(long *)(lVar29 + 0xb0) + lVar28) == TypeInfo_IEnumerator) {
              puVar17 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar29 + 0xb0) + 8 + lVar28) + 1) * 0x10 + lVar29 + 0x138);
              goto label_0444aeb8;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar28);
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
          unaff_R15 = (System_String_o *)*puVar17;
          pIVar16 = (Il2CppObject *)puVar17[1];
          if (pIVar16 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if (((pIVar16->klass->_2).naturalAligment < bVar1) ||
               ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
              plVar20 = (long *)il2cpp_runtime_helper_022b2fd0(pIVar16);
              goto label_0444b348;
            }
          }
          if (unaff_R15 == (System_String_o *)0x0) goto label_0444b35d;
          if (unaff_R15->klass != g_data_057b9c00) goto label_0444b350;
          bVar11 = System_String__StartsWith(unaff_R15,"Skin",(MethodInfo *)0x0);
          uVar12 = 0;
          if ((char)bVar11 != '\0') {
            if (pIVar16 != (Il2CppObject *)0x0) {
              pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
              SVar9 = TypeRef_StringSetting;
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar22 = System_Type__GetTypeFromHandle(SVar9,(MethodInfo *)0x0);
              bVar11 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
              uVar12 = 1;
              if ((char)bVar11 == '\0') {
                pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
                SVar9 = TypeRef_FloatSetting;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar22 = System_Type__GetTypeFromHandle(SVar9,(MethodInfo *)0x0);
                uVar12 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
                uVar12 = uVar12 & 0xff;
              }
              goto label_0444b013;
            }
            goto label_0444b374;
          }
label_0444b013:
          bVar11 = System_String__op_Equality(unaff_R15,"Name",(MethodInfo *)0x0);
          pSVar5 = (__this->fields)._currentCategoryPanelName;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0444b362;
          bVar13 = System_String__op_Equality((pSVar5->fields)._value,"Human",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
label_0444b1b0:
            bVar13 = System_String__op_Equality(unaff_R15,"UniqueId",(MethodInfo *)0x0);
            if (pIVar16 == (Il2CppObject *)0x0) goto label_0444b36f;
            pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
            SVar9 = TypeRef_StringSetting;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar22 = System_Type__GetTypeFromHandle(SVar9,(MethodInfo *)0x0);
            bVar14 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
            if ((char)bVar14 != '\0') goto label_0444adc0;
            pSVar21 = System_Object__GetType(pIVar16,(MethodInfo *)0x0);
            SVar9 = TypeRef_FloatSetting;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar22 = System_Type__GetTypeFromHandle(SVar9,(MethodInfo *)0x0);
            bVar14 = System_Type__op_Equality(pSVar21,pSVar22,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0' && ((char)bVar11 == '\0' && (char)bVar14 == '\x01')) goto label_0444b284;
          }
          else {
            if (g_data_057ae6ff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
              g_data_057ae6ff = '\x01';
            }
            pSVar5 = (__this->fields)._currentCategoryPanelName;
            if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0444b379;
            pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings;
            if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0444b37e;
            pIVar23 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar6,(Il2CppObject *)(pSVar5->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
            if (pIVar23 == (Il2CppObject *)0x0) goto label_0444b383;
            bVar1 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
            if (((pIVar23->klass->_2).naturalAligment < bVar1) ||
               ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSkinSettings)) goto label_0444b367;
            if (pIVar23[6].monitor == (void *)0x0) goto label_0444b388;
            if (*(int *)((long)pIVar23[6].monitor + 0x14) != 1) goto label_0444b1b0;
            if (uVar12 != 0) {
              pUVar26 = panelLeft;
              if (leftCount < iStack_74) {
                pUVar26 = panelRight;
              }
              pSVar24 = System_String__Substring(unaff_R15,4,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar24 = UI_UIManager__GetLocale(pSVar15,subCategory,pSVar24,"","",in_R9);
              in_R9 = (MethodInfo *)0x0;
              UI_ElementFactory__CreateInputSetting
                        (pUVar26,__this_00,(Settings_BaseSetting_o *)pIVar16,pSVar24,"",elementWidth
                         ,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
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
  goto label_0444b392;
label_0444adc0:
  if ((char)bVar11 == '\0' && (char)bVar13 == '\0') {
label_0444b284:
    pUVar26 = panelLeft;
    if (leftCount < iStack_74) {
      pUVar26 = panelRight;
    }
    bVar11 = System_String__op_Equality(unaff_R15,"Ground",(MethodInfo *)0x0);
    pSVar24 = subCategory;
    if ((char)bVar11 != '\0') {
      pSVar24 = "Skins.Common";
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar24 = UI_UIManager__GetLocale(pSVar15,pSVar24,unaff_R15,"","",in_R9);
    in_R9 = (MethodInfo *)0x0;
    UI_ElementFactory__CreateInputSetting
              (pUVar26,__this_00,(Settings_BaseSetting_o *)pIVar16,pSVar24,"",elementWidth,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
label_0444b336:
    iStack_74 = iStack_74 + 1;
  }
  goto label_0444add3;
}


// UI.SettingsSkinsPanel$$GetCurrentSettings
// il2cpp: Settings_ICustomSkinSettings_o* UI_SettingsSkinsPanel__GetCurrentSettings (UI_SettingsSkinsPanel_o* __this, const MethodInfo* method);
// 0x444bab0

Settings_ICustomSkinSettings_o *
UI_SettingsSkinsPanel__GetCurrentSettings(UI_SettingsSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  Settings_ICustomSkinSettings_o *extraout_RAX;
  UI_SettingsSkinsPanel_o *__this_01;
  
  __this_01 = __this;
  if (g_data_057ae6ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
    __this_01 = (UI_SettingsSkinsPanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6ff = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings,
     __this_01 = (UI_SettingsSkinsPanel_o *)0x0,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)(pSVar1->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
    return (Settings_ICustomSkinSettings_o *)pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.SettingsSkinsPanel$$CreateCharacterSelectorDropdown
// il2cpp: void UI_SettingsSkinsPanel__CreateCharacterSelectorDropdown (UI_SettingsSkinsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, Settings_HumanCustomSkinSettings_o* humanSettings, const MethodInfo* method);
// 0x444bb30

void UI_SettingsSkinsPanel__CreateCharacterSelectorDropdown
               (UI_SettingsSkinsPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               Settings_HumanCustomSkinSettings_o *humanSettings,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  Settings_BaseSetting_o *setting;
  Il2CppObject *__this_00;
  undefined8 *puVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_array *options;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  System_String_o **ppSVar6;
  long lVar7;
  ulong uVar8;
  
  if (g_data_057ae700 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCharacterSelectorDropdown_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae700 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass13_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    __this_00[1].monitor = humanSettings;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,humanSettings);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0x28), plVar3 != (long *)0x0)) {
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar7 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar7) == TypeInfo_IListSetting) {
            puVar5 = (undefined8 *)
                     ((long)(*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar7) + 2) * 0x10 + lVar2 + 0x138);
            goto label_0444bcf9;
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar7);
      }
      puVar5 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_IListSetting,2);
label_0444bcf9:
      __this_01 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar5)(plVar3,puVar5[1]);
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        options = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
        if (0 < (__this_01->fields)._size) {
          if (options == (System_String_array *)0x0) {
label_0444be6c:
            __this_02 = System_Collections_Generic_List_object___get_Item(__this_01,0,MethodInfo_BaseSetting_get_Item);
            if (__this_02 != (Il2CppObject *)0x0) goto label_0444be8a;
            goto label_0444be85;
          }
          ppSVar6 = options->m_Items;
          uVar8 = 0;
          do {
            __this_02 = System_Collections_Generic_List_object___get_Item
                                  (__this_01,(int32_t)uVar8,MethodInfo_BaseSetting_get_Item);
            if (__this_02 == (Il2CppObject *)0x0) goto label_0444be85;
            bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
            if (((__this_02->klass->_2).naturalAligment < bVar1) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_0444bebe;
            if (__this_02[2].klass == (Il2CppClass *)0x0) goto label_0444be85;
            if ((uint)options->max_length <= uVar8) {
              il2cpp_runtime_helper_022b2ca0();
              goto label_0444be6c;
            }
            *ppSVar6 = (System_String_o *)((__this_02[2].klass)->_1).namespaze;
            il2cpp_runtime_helper_022b4080(ppSVar6);
            uVar8 = uVar8 + 1;
            ppSVar6 = ppSVar6 + 1;
          } while ((long)uVar8 < (long)(__this_01->fields)._size);
        }
        pvVar4 = __this_00[1].monitor;
        if (pvVar4 != (void *)0x0) {
          setting = *(Settings_BaseSetting_o **)((long)pvVar4 + 0x70);
          onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateDropdownSetting
                    (panel,style,setting,"Character",options,"",260.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0444be85:
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0444be8a:
  bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
  if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
     ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) {
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
label_0444bebe:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel$$OnCharacterSelected
// il2cpp: void UI_SettingsSkinsPanel__OnCharacterSelected (UI_SettingsSkinsPanel_o* __this, Settings_HumanCustomSkinSettings_o* humanSettings, const MethodInfo* method);
// 0x444d490

void UI_SettingsSkinsPanel__OnCharacterSelected
               (UI_SettingsSkinsPanel_o *__this,Settings_HumanCustomSkinSettings_o *humanSettings,
               MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_List_int__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t value;
  VirtualInvokeData *pVVar4;
  UI_BasePanel_o *__this_00;
  System_Type_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UI_BasePanel_o *in_RCX;
  UI_BasePanel_o *__this_01;
  int index;
  UI_BasePanel_o *__this_02;
  MethodInfo_2A23FA0 **ppMVar7;
  long lVar8;
  System_RuntimeTypeHandle_o handle;
  UI_BasePanel_c *__this_03;
  long in_R8;
  
  index = (int)humanSettings;
  if (g_data_057ae701 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae701 = '\x01';
  }
  __this_02 = *(UI_BasePanel_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (__this_02 != (UI_BasePanel_o *)0x0) {
    (*(__this_02->klass->vtable)._16_get_CategoryPanel.methodPtr)();
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar7 = (MethodInfo_2A23FA0 **)__this_02;
  if (g_data_057ae702 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    ppMVar7 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae702 = '\x01';
  }
  if (index < 0) {
    return;
  }
  if (__this_01 != (UI_BasePanel_o *)0x0) {
    if (*(int *)&(__this_01->fields).m_CancellationTokenSource <= index) {
      return;
    }
    ppMVar7 = (MethodInfo_2A23FA0 **)__this_01;
    value = System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_int__o *)__this_01,index,MethodInfo_Int32_get_Item);
    if (in_RCX != (UI_BasePanel_o *)0x0) {
      pSVar2 = (System_Collections_Generic_List_int__c *)in_RCX->klass;
      uVar1._0_1_ = (pSVar2->_2).rank;
      uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pSVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_ISetSettingsContainer) {
            pVVar4 = &(pSVar2->vtable)._0_Equals + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
            goto label_0444d5e2;
          }
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar8);
      }
      pVVar4 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(in_RCX,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
      __this_00 = (UI_BasePanel_o *)(*pVVar4->methodPtr)();
      ppMVar7 = (MethodInfo_2A23FA0 **)in_RCX;
      if ((__this_00 != (UI_BasePanel_o *)0x0) &&
         (Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,value,MethodInfo_Void_set_Value),
         ppMVar7 = (MethodInfo_2A23FA0 **)__this_00, in_R8 != 0)) {
        ppMVar7 = (MethodInfo_2A23FA0 **)0x0;
        if (*(Settings_TypedSetting_int__o **)(in_R8 + 0x78) != (Settings_TypedSetting_int__o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    (*(Settings_TypedSetting_int__o **)(in_R8 + 0x78),value,MethodInfo_Void_set_Value);
          UI_BasePanel__RebuildCategoryPanel(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae704 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"Skybox");
    g_data_057ae704 = '\x01';
  }
  handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           (((UI_BasePanel_o *)ppMVar7)->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar6,"Human",(Il2CppObject *)pSVar5,MethodInfo_Void_Add);
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
             (((UI_BasePanel_o *)ppMVar7)->fields)._categoryPanelTypes;
    handle = TypeRef_SettingsSkinsDefaultPanel;
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
    if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar6,"Shifter",(Il2CppObject *)pSVar5,MethodInfo_Void_Add);
      __this_03 = (UI_BasePanel_c *)(((UI_BasePanel_o *)ppMVar7)->fields)._categoryPanelTypes;
      handle = TypeRef_SettingsSkinsDefaultPanel;
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
      if (__this_03 != (UI_BasePanel_c *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,"Skybox",
                   (Il2CppObject *)pSVar5,MethodInfo_Void_Add);
        lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_03;
        if ((lVar8 != 0) &&
           (handle.fields.value =
                 (System_RuntimeTypeHandle_Fields)((UI_BasePanel_o *)((long)ppMVar7 + 0x68))->klass,
           handle.fields.value != 0)) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                     "Human",*(Il2CppObject **)(lVar8 + 0x20),MethodInfo_Void_Add);
          lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if ((lVar8 != 0) &&
             (handle.fields.value =
                   (System_RuntimeTypeHandle_Fields)((UI_BasePanel_o *)((long)ppMVar7 + 0x68))->klass,
             handle.fields.value != 0)) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                       "Shifter",*(Il2CppObject **)(lVar8 + 0x30),MethodInfo_Void_Add);
            lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (lVar8 != 0) {
              handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
              if (((UI_BasePanel_o *)((long)ppMVar7 + 0x68))->klass != (UI_BasePanel_c *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           ((UI_BasePanel_o *)((long)ppMVar7 + 0x68))->klass,"Skybox",
                           *(Il2CppObject **)(lVar8 + 0x38),MethodInfo_Void_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae705 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
    g_data_057ae705 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
  (((UI_BasePanel_c *)handle.fields.value)->_1).typeMetadataHandle = pSVar6;
  il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_c *)handle.fields.value)->_1).typeMetadataHandle);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel$$OnGlobalPresetSelected
// il2cpp: void UI_SettingsSkinsPanel__OnGlobalPresetSelected (UI_SettingsSkinsPanel_o* __this, int32_t filteredIndex, System_Collections_Generic_List_int__o* originalIndices, Settings_ICustomSkinSettings_o* settings, Settings_HumanCustomSkinSettings_o* humanSettings, const MethodInfo* method);
// 0x444d4f0

void UI_SettingsSkinsPanel__OnGlobalPresetSelected
               (UI_SettingsSkinsPanel_o *__this,int32_t filteredIndex,
               System_Collections_Generic_List_int__o *originalIndices,
               Settings_ICustomSkinSettings_o *settings,Settings_HumanCustomSkinSettings_o *humanSettings,
               MethodInfo *method)

{
  ushort uVar1;
  Settings_ICustomSkinSettings_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  int32_t value;
  VirtualInvokeData *pVVar5;
  UI_SettingsSkinsPanel_o *__this_01;
  System_Type_o *pSVar6;
  UI_CategoryPanel_c *__this_02;
  MethodInfo_2A23FA0 **ppMVar7;
  long lVar8;
  System_RuntimeTypeHandle_o handle;
  UI_CategoryPanel_o *__this_03;
  
  ppMVar7 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae702 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    ppMVar7 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae702 = '\x01';
  }
  if (filteredIndex < 0) {
    return;
  }
  if (originalIndices != (System_Collections_Generic_List_int__o *)0x0) {
    if ((originalIndices->fields)._size <= filteredIndex) {
      return;
    }
    value = System_Collections_Generic_List_int___get_Item(originalIndices,filteredIndex,MethodInfo_Int32_get_Item);
    ppMVar7 = (MethodInfo_2A23FA0 **)originalIndices;
    if (settings != (Settings_ICustomSkinSettings_o *)0x0) {
      pSVar2 = settings->klass;
      uVar1._0_1_ = (pSVar2->_2).rank;
      uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pSVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_ISetSettingsContainer) {
            pVVar5 = pSVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
            goto label_0444d5e2;
          }
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar8);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(settings,TypeInfo_ISetSettingsContainer,1);
label_0444d5e2:
      __this_01 = (UI_SettingsSkinsPanel_o *)(*pVVar5->methodPtr)();
      ppMVar7 = (MethodInfo_2A23FA0 **)(UI_SettingsSkinsPanel_o *)settings;
      if ((__this_01 != (UI_SettingsSkinsPanel_o *)0x0) &&
         (Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,value,MethodInfo_Void_set_Value),
         ppMVar7 = (MethodInfo_2A23FA0 **)__this_01,
         humanSettings != (Settings_HumanCustomSkinSettings_o *)0x0)) {
        __this_00 = (humanSettings->fields).LastGlobalPresetIndex;
        ppMVar7 = (MethodInfo_2A23FA0 **)0x0;
        if (__this_00 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,value,MethodInfo_Void_set_Value);
          UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae704 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"Skybox");
    g_data_057ae704 = '\x01';
  }
  handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           (((UI_SettingsSkinsPanel_o *)ppMVar7)->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar4,"Human",(Il2CppObject *)pSVar6,MethodInfo_Void_Add);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             (((UI_SettingsSkinsPanel_o *)ppMVar7)->fields)._categoryPanelTypes;
    handle = TypeRef_SettingsSkinsDefaultPanel;
    pSVar6 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,"Shifter",(Il2CppObject *)pSVar6,MethodInfo_Void_Add);
      __this_03 = (UI_CategoryPanel_o *)(((UI_SettingsSkinsPanel_o *)ppMVar7)->fields)._categoryPanelTypes;
      handle = TypeRef_SettingsSkinsDefaultPanel;
      pSVar6 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
      if (__this_03 != (UI_CategoryPanel_o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,"Skybox",
                   (Il2CppObject *)pSVar6,MethodInfo_Void_Add);
        lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_03;
        if ((lVar8 != 0) &&
           (handle.fields.value =
                 (System_RuntimeTypeHandle_Fields)(((UI_SettingsSkinsPanel_o *)ppMVar7)->fields)._settings,
           handle.fields.value != 0)) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                     "Human",*(Il2CppObject **)(lVar8 + 0x20),MethodInfo_Void_Add);
          lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if ((lVar8 != 0) &&
             (handle.fields.value =
                   (System_RuntimeTypeHandle_Fields)(((UI_SettingsSkinsPanel_o *)ppMVar7)->fields)._settings,
             handle.fields.value != 0)) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                       "Shifter",*(Il2CppObject **)(lVar8 + 0x30),MethodInfo_Void_Add);
            lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (lVar8 != 0) {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (((UI_SettingsSkinsPanel_o *)ppMVar7)->fields)._settings;
              handle.fields.value = (System_RuntimeTypeHandle_Fields)0;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar4,"Skybox",*(Il2CppObject **)(lVar8 + 0x38),MethodInfo_Void_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae705 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
    g_data_057ae705 = '\x01';
  }
  __this_02 = (UI_CategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
  ((UI_CategoryPanel_o *)((long)handle.fields.value + 0x68))->klass = __this_02;
  il2cpp_runtime_helper_022b4080((UI_CategoryPanel_o *)((long)handle.fields.value + 0x68));
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel$$SelectNewlyCreatedOrCopiedSetInDropdown
// il2cpp: void UI_SettingsSkinsPanel__SelectNewlyCreatedOrCopiedSetInDropdown (UI_SettingsSkinsPanel_o* __this, Settings_ICustomSkinSettings_o* allSets, Settings_HumanCustomSkinSettings_o* humanSettings, const MethodInfo* method);
// 0x444cfc0

void UI_SettingsSkinsPanel__SelectNewlyCreatedOrCopiedSetInDropdown
               (UI_SettingsSkinsPanel_o *__this,Settings_ICustomSkinSettings_o *allSets,
               Settings_HumanCustomSkinSettings_o *humanSettings,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Settings_ICustomSkinSettings_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_List_int__o *__this_00;
  Settings_IntSetting_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  int iVar5;
  bool_conflict bVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  UI_ElementStyle_o *__this_06;
  UnityEngine_Transform_o *parent;
  uint item;
  System_String_o *pSVar11;
  System_String_o **__this_07;
  long lVar12;
  long lVar13;
  long *unaff_R12;
  undefined1 auVar14 [12];
  undefined8 in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  Il2CppObject *in_stack_ffffffffffffff70;
  Il2CppMethodPointer local_70;
  Il2CppMethodPointer pIStack_68;
  Settings_BaseSetting_o *local_60;
  Settings_ICustomSkinSettings_o *pSStack_58;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_50;
  
  pSVar11 = (System_String_o *)allSets;
  __this_07 = (System_String_o **)__this;
  if (g_data_057ae703 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_07 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae703 = '\x01';
  }
  if (((__this->fields)._lastFilteredOriginalIndices == (System_Collections_Generic_List_int__o *)0x0) ||
     ((__this->fields)._lastFilteredSetIndex == (Settings_IntSetting_o *)0x0)) {
    return;
  }
  if (allSets != (Settings_ICustomSkinSettings_o *)0x0) {
    unaff_R12 = &TypeInfo_ISetSettingsContainer;
    pSVar3 = allSets->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_ISetSettingsContainer) {
          method = (MethodInfo *)(pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 2));
          goto label_0444d0a9;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar12);
    }
    method = (MethodInfo *)il2cpp_runtime_helper_02300d20(allSets,TypeInfo_ISetSettingsContainer,2);
label_0444d0a9:
    pSVar11 = (System_String_o *)method->virtualMethodPointer;
    __this_07 = (System_String_o **)allSets;
    plVar8 = (long *)(*method->methodPointer)();
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IListSetting) {
            puVar9 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + lVar12 + 0x138);
            goto label_0444d121;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IListSetting,0);
label_0444d121:
      iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      pSVar3 = allSets->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_ISetSettingsContainer) {
            method = (MethodInfo *)(pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 3));
            goto label_0444d189;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar12);
      }
      method = (MethodInfo *)il2cpp_runtime_helper_02300d20(allSets,TypeInfo_ISetSettingsContainer,3);
label_0444d189:
      pSVar11 = (System_String_o *)method->virtualMethodPointer;
      __this_07 = (System_String_o **)allSets;
      lVar12 = (*method->methodPointer)();
      if (lVar12 != 0) {
        item = iVar5 - 1;
        if (*(uint *)(lVar12 + 0x18) <= item) goto label_0444d230;
        method = (MethodInfo *)(long)(int)item;
        pSVar10 = *(System_String_o **)(lVar12 + 0x20 + (long)method * 8);
        __this_07 = (System_String_o **)0x0;
        if (pSVar10 != (System_String_o *)0x0) {
          pSVar11 = "Custom Set:";
          bVar6 = System_String__StartsWith(pSVar10,"Custom Set:",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return;
          }
          __this_00 = (__this->fields)._lastFilteredOriginalIndices;
          __this_07 = (System_String_o **)0x0;
          if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
            pSVar11 = (System_String_o *)(ulong)item;
            uVar7 = System_Collections_Generic_List_int___IndexOf(__this_00,item,MethodInfo_Int32_IndexOf);
            __this_07 = (System_String_o **)(__this->fields)._lastFilteredSetIndex;
            if ((UI_SettingsSkinsPanel_o *)__this_07 != (UI_SettingsSkinsPanel_o *)0x0) {
              pSVar11 = (System_String_o *)0x0;
              if (-1 < (int)uVar7) {
                pSVar11 = (System_String_o *)(ulong)uVar7;
              }
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)__this_07,(int32_t)pSVar11,MethodInfo_Void_set_Value);
              allSets = (Settings_ICustomSkinSettings_o *)&MethodInfo_Void_set_Value;
              if (humanSettings != (Settings_HumanCustomSkinSettings_o *)0x0) {
                __this_01 = (humanSettings->fields).LastGlobalPresetIndex;
                __this_07 = (System_String_o **)0x0;
                if (__this_01 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)__this_01,item,MethodInfo_Void_set_Value);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0444d230:
  il2cpp_runtime_helper_022b2ca0();
  pSStack_58 = allSets;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_T__c *)unaff_R12;
  if (g_data_057ae6fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6fd = '\x01';
  }
  local_70 = (Il2CppMethodPointer)0x0;
  pIStack_68 = (Il2CppMethodPointer)0x0;
  local_60 = (Settings_BaseSetting_o *)0x0;
  pSVar10 = (System_String_o *)
            (*(((UI_SettingsSkinsPanel_o *)__this_07)->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this_07,
                       (((UI_SettingsSkinsPanel_o *)__this_07)->klass->vtable)._4_get_ThemePanel.method);
  __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_06,0x18,0.0,20.0,pSVar10,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(parent,__this_06,(System_String_o *)method,0,4,(MethodInfo *)0x0);
  if ((pSVar11 != (System_String_o *)0x0) && (pSVar11[1].klass != (System_String_c *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_70,
               (System_Collections_Generic_List_object__o *)pSVar11[1].klass,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    while (__this_02.fields._index = (int)in_stack_ffffffffffffff68,
          __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff68 >> 0x20),
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60,
          __this_02.fields._current = in_stack_ffffffffffffff70,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&local_70), (char)bVar6 != '\0') {
      in_stack_ffffffffffffff70 = (Il2CppObject *)0x0;
      in_stack_ffffffffffffff60 = 0;
      in_stack_ffffffffffffff68 = 0;
      UI_ElementFactory__CreateInputSetting
                (parent,__this_06,local_60,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                 "",420.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    }
    __this_03.fields._index = (int)in_stack_ffffffffffffff68;
    __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
    __this_03.fields._current = in_stack_ffffffffffffff70;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&local_70);
    return;
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar12 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._index = (int)in_stack_ffffffffffffff68;
    __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
    __this_04.fields._current = in_stack_ffffffffffffff70;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_70);
    if (lVar12 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar12);
  }
  __this_05.fields._index = (int)in_stack_ffffffffffffff68;
  __this_05.fields._version = (int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
  __this_05.fields._current = in_stack_ffffffffffffff70;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&local_70);
  _Unwind_Resume(auVar14._0_8_);
}


// UI.SettingsSkinsPanel$$RegisterCategoryPanels
// il2cpp: void UI_SettingsSkinsPanel__RegisterCategoryPanels (UI_SettingsSkinsPanel_o* __this, const MethodInfo* method);
// 0x444d640

void UI_SettingsSkinsPanel__RegisterCategoryPanels(UI_SettingsSkinsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Type_o *pSVar3;
  UI_CategoryPanel_c *__this_00;
  System_RuntimeTypeHandle_o handle;
  UI_CategoryPanel_o *__this_01;
  
  if (g_data_057ae704 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsDefaultPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsHumanPanel);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"Skybox");
    g_data_057ae704 = '\x01';
  }
  handle.fields.value = TypeRef_SettingsSkinsHumanPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"Human",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
    pSVar3 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Shifter",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
      __this_01 = (UI_CategoryPanel_o *)(__this->fields)._categoryPanelTypes;
      handle.fields.value = TypeRef_SettingsSkinsDefaultPanel.fields.value;
      pSVar3 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsDefaultPanel,(MethodInfo *)0x0);
      if (__this_01 != (UI_CategoryPanel_o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,"Skybox",
                   (Il2CppObject *)pSVar3,MethodInfo_Void_Add);
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_01;
        if ((lVar2 != 0) &&
           (handle.fields.value = (System_RuntimeTypeHandle_Fields)(__this->fields)._settings,
           handle.fields.value != 0)) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                     "Human",*(Il2CppObject **)(lVar2 + 0x20),MethodInfo_Void_Add);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if ((lVar2 != 0) &&
             (handle.fields.value = (System_RuntimeTypeHandle_Fields)(__this->fields)._settings,
             handle.fields.value != 0)) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)handle.fields.value,
                       "Shifter",*(Il2CppObject **)(lVar2 + 0x30),MethodInfo_Void_Add);
            lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if ((lVar2 != 0) &&
               (pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._settings
               , handle.fields.value = (System_RuntimeTypeHandle_Fields)0,
               pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar1,"Skybox",*(Il2CppObject **)(lVar2 + 0x38),MethodInfo_Void_Add);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae705 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
    g_data_057ae705 = '\x01';
  }
  __this_00 = (UI_CategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
  ((UI_CategoryPanel_o *)((long)handle.fields.value + 0x68))->klass = __this_00;
  il2cpp_runtime_helper_022b4080((UI_CategoryPanel_o *)((long)handle.fields.value + 0x68));
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSkinsPanel$$.ctor
// il2cpp: void UI_SettingsSkinsPanel___ctor (UI_SettingsSkinsPanel_o* __this, const MethodInfo* method);
// 0x444d840

void UI_SettingsSkinsPanel___ctor(UI_SettingsSkinsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ae705 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ICustomSkinSettings);
    g_data_057ae705 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICustomSkinSettings);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_Settings_ICustomSkinSettings);
  (__this->fields)._settings =
       (System_Collections_Generic_Dictionary_string__ICustomSkinSettings__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._settings);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


