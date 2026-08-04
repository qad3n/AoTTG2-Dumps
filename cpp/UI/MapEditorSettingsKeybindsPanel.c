// Type: UI.MapEditorSettingsKeybindsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsKeybindsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsKeybindsPanel.cs
// --------------------------------

// UI.MapEditorSettingsKeybindsPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_DoublePanel (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4438320

bool_conflict
UI_MapEditorSettingsKeybindsPanel__get_DoublePanel
          (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsKeybindsPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_ScrollBar (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4438330

bool_conflict
UI_MapEditorSettingsKeybindsPanel__get_ScrollBar
          (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsKeybindsPanel$$Setup
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__Setup (UI_MapEditorSettingsKeybindsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4438340

void UI_MapEditorSettingsKeybindsPanel__Setup
               (UI_MapEditorSettingsKeybindsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  Il2CppObject *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  System_RuntimeTypeHandle_o handle;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  MethodInfo *in_RAX;
  System_String_o *pSVar6;
  UI_BasePanel_o *__this_02;
  Il2CppClass *pIVar7;
  undefined8 *puVar8;
  long *plVar9;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar10;
  Il2CppClass *pIVar11;
  undefined8 uVar12;
  System_String_o **in_RCX;
  UI_KeybindPopup_o *keybindPopup;
  UI_BasePanel_o *pUVar13;
  long lVar14;
  System_String_o *in_R8;
  UI_ElementStyle_o *in_R9;
  Settings_BaseSettingsContainer_o *unaff_R13;
  undefined1 auVar15 [12];
  int iStack_a4;
  long lStack_a0;
  
  if (g_data_057ae6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorSettingsPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    g_data_057ae6a4 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar13 = (__this->fields).Parent;
  if (pUVar13 == (UI_BasePanel_o *)0x0) {
label_044384b8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_MapEditorSettingsPopup->_2).naturalAligment;
    in_RCX = (System_String_o **)(ulong)bVar1;
    parent = (UI_BasePanel_o *)TypeInfo_MapEditorSettingsPopup;
    if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
       ((pUVar13->klass->_2).typeHierarchy
        [(long)&(((System_String_o *)((long)in_RCX + -0x18))->fields).field_0x7] == TypeInfo_MapEditorSettingsPopup)) {
      pSVar10 = (System_String_o *)pUVar13[1].fields._currentCategoryPanel;
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_02 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      parent = (UI_BasePanel_o *)&g_data_00000018;
      in_RCX = (System_String_o **)0x0;
      pUVar13 = __this_02;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_02,0x18,140.0,20.0,pSVar6,(MethodInfo *)0x0);
      pSVar6 = "Keybinds";
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (lVar14 != 0) {
        in_RCX = &"Keybinds";
        unaff_R13 = *(Settings_BaseSettingsContainer_o **)(lVar14 + 0x50);
        if (*(int *)((long)&TypeInfo_UIManager[2].fields.m_CachedPtr + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar14 = *(long *)&((TypeInfo_UIManager[1].fields._categoryPanelTypes)->fields)._freeCount;
        pUVar13 = TypeInfo_UIManager;
        if (lVar14 != 0) {
          UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
                    (__this,unaff_R13,*(UI_KeybindPopup_o **)(lVar14 + 0x80),pSVar10,pSVar6,
                     (UI_ElementStyle_o *)__this_02,in_RAX);
          return;
        }
      }
      goto label_044384b8;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeRef_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6a5 = '\x01';
  }
  pIVar7 = (Il2CppClass *)parent;
  if ((Il2CppClass *)parent == (Il2CppClass *)0x0) {
label_04438849:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    plVar9 = (long *)(((Il2CppClass *)parent)->_1).name;
    if (plVar9 != (long *)0x0) {
      pIVar7 = (Il2CppClass *)(**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
      if (pIVar7 == (Il2CppClass *)0x0) goto label_04438853;
      lStack_a0 = 0;
      iStack_a4 = 0;
label_044385b0:
      pvVar2 = (pIVar7->_1).image;
      if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)pvVar2 +
                     (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
            goto label_04438603;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar14);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar7,TypeInfo_IEnumerator,0);
label_04438603:
      cVar3 = (*(code *)*puVar8)(pIVar7,puVar8[1]);
      if (cVar3 == '\0') goto label_04438954;
      pvVar2 = (pIVar7->_1).image;
      if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)pvVar2 +
                     (long)(*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar14) + 1) * 0x10 + 0x138);
            goto label_04438688;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar14);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar7,TypeInfo_IEnumerator,1);
label_04438688:
      plVar9 = (long *)(*(code *)*puVar8)(pIVar7,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        if (*(long *)(*plVar9 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
label_0443882a:
          il2cpp_runtime_helper_022b2fd0(plVar9);
          goto label_04438832;
        }
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar9);
        unaff_R13 = (Settings_BaseSettingsContainer_o *)*puVar8;
        __this_00 = (Il2CppObject *)puVar8[1];
        if (__this_00 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            plVar9 = (long *)il2cpp_runtime_helper_022b2fd0(__this_00);
            goto label_0443882a;
          }
        }
        if ((unaff_R13 != (Settings_BaseSettingsContainer_o *)0x0) && (unaff_R13->klass != g_data_057b9c00))
        goto label_0443883c;
        if (__this_00 == (Il2CppObject *)0x0) goto label_04438837;
        left = System_Object__GetType(__this_00,(MethodInfo *)0x0);
        handle = TypeRef_KeybindSetting;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar4 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          __this_01 = (System_Collections_Specialized_OrderedDictionary_o *)(((Il2CppClass *)parent)->_1).name
          ;
          if (__this_01 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04438844;
          iVar5 = System_Collections_Specialized_OrderedDictionary__get_Count(__this_01,(MethodInfo *)0x0);
          parent_00 = (&(pUVar13->fields).DoublePanelLeft)[iVar5 / 2 <= iStack_a4];
          if (*(int *)((long)&TypeInfo_UIManager[2].fields.m_CachedPtr + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = UI_UIManager__GetLocale
                              ((System_String_o *)in_RCX,in_R8,(System_String_o *)unaff_R13,"",
                               "",(MethodInfo *)0x0);
          UI_ElementFactory__CreateKeybindSetting
                    (parent_00,in_R9,(Settings_BaseSetting_o *)__this_00,pSVar10,keybindPopup,"",
                     120.0,35.0,2,(MethodInfo *)0x0);
          iStack_a4 = iStack_a4 + 1;
        }
        goto label_044385b0;
      }
label_04438832:
      il2cpp_runtime_helper_022b2c90();
label_04438837:
      il2cpp_runtime_helper_022b2c90();
label_0443883c:
      il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04438844:
      il2cpp_runtime_helper_022b2c90();
      goto label_04438849;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04438853:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar15._0_8_;
  if (auVar15._8_4_ != 1) {
    lStack_a0 = 0;
    do {
      pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023051f0(pIVar7,TypeInfo_IDisposable);
      if (pIVar7 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar7->_1).image;
        if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
              puVar8 = (undefined8 *)
                       ((long)pvVar2 +
                       (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
              goto label_04438a5d;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar14);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar7,TypeInfo_IDisposable,0);
label_04438a5d:
        (*(code *)*puVar8)(pIVar7,puVar8[1]);
      }
      if (lStack_a0 == 0) {
        _Unwind_Resume(uVar12);
      }
      il2cpp_runtime_helper_022fefe0();
label_04438a7d:
      uVar12 = il2cpp_runtime_helper_022fefe0();
    } while( true );
  }
  plVar9 = (long *)__cxa_begin_catch(uVar12);
  lStack_a0 = *plVar9;
  __cxa_end_catch();
label_04438954:
  pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_023051f0(pIVar7,TypeInfo_IDisposable);
  if (pIVar11 != (Il2CppClass *)0x0) {
    pvVar2 = (pIVar11->_1).image;
    if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar8 = (undefined8 *)
                   ((long)pvVar2 + (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar14) * 0x10 + 0x138)
          ;
          goto label_044389bd;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar14);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar11,TypeInfo_IDisposable,0);
label_044389bd:
    (*(code *)*puVar8)(pIVar11,puVar8[1]);
    pIVar7 = pIVar11;
  }
  if (lStack_a0 != 0) goto label_04438a7d;
  return;
}


// UI.MapEditorSettingsKeybindsPanel$$CreateKeybindSettings
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings (UI_MapEditorSettingsKeybindsPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x44384d0

void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
               (UI_MapEditorSettingsKeybindsPanel_o *__this,Settings_BaseSettingsContainer_o *container,
               UI_KeybindPopup_o *popup,System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Specialized_OrderedDictionary_o *pSVar6;
  Settings_BaseSettingsContainer_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *parent;
  System_RuntimeTypeHandle_o handle;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  Settings_BaseSettingsContainer_o *pSVar12;
  VirtualInvokeData *pVVar13;
  long *plVar14;
  undefined8 *puVar15;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *title;
  Settings_BaseSettingsContainer_o *pSVar16;
  undefined8 uVar17;
  long lVar18;
  System_String_o *unaff_R13;
  undefined1 auVar19 [12];
  int local_6c;
  long local_68;
  
  if (g_data_057ae6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeRef_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6a5 = '\x01';
  }
  pSVar12 = container;
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
label_04438849:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar6 = (container->fields).Settings;
    if (pSVar6 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      pSVar12 = (Settings_BaseSettingsContainer_o *)
                (*(pSVar6->klass->vtable)._23_GetEnumerator.methodPtr)
                          (pSVar6,(pSVar6->klass->vtable)._23_GetEnumerator.method);
      if (pSVar12 == (Settings_BaseSettingsContainer_o *)0x0) goto label_04438853;
      local_68 = 0;
      local_6c = 0;
label_044385b0:
      pSVar7 = pSVar12->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IEnumerator) {
            pVVar13 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
            goto label_04438603;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar18);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IEnumerator,0);
label_04438603:
      cVar9 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (cVar9 == '\0') goto label_04438954;
      pSVar7 = pSVar12->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IEnumerator) {
            pVVar13 = &(pSVar7->vtable)._0_Equals + (*(int *)((long)&pIVar8->offset + lVar18) + 1);
            goto label_04438688;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar18);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IEnumerator,1);
label_04438688:
      plVar14 = (long *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (plVar14 != (long *)0x0) {
        if (*(long *)(*plVar14 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
label_0443882a:
          il2cpp_runtime_helper_022b2fd0(plVar14);
          goto label_04438832;
        }
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar14);
        unaff_R13 = (System_String_o *)*puVar15;
        __this_00 = (Il2CppObject *)puVar15[1];
        if (__this_00 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            plVar14 = (long *)il2cpp_runtime_helper_022b2fd0(__this_00);
            goto label_0443882a;
          }
        }
        if ((unaff_R13 != (System_String_o *)0x0) && (unaff_R13->klass != g_data_057b9c00)) goto label_0443883c;
        if (__this_00 == (Il2CppObject *)0x0) goto label_04438837;
        left = System_Object__GetType(__this_00,(MethodInfo *)0x0);
        handle = TypeRef_KeybindSetting;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar10 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          pSVar6 = (container->fields).Settings;
          if (pSVar6 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04438844;
          iVar11 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar6,(MethodInfo *)0x0);
          parent = (&(__this->fields).DoublePanelLeft)[iVar11 / 2 <= local_6c];
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          title = UI_UIManager__GetLocale(cat,sub,unaff_R13,"","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateKeybindSetting
                    (parent,style,(Settings_BaseSetting_o *)__this_00,title,popup,"",120.0,35.0,2,
                     (MethodInfo *)0x0);
          local_6c = local_6c + 1;
        }
        goto label_044385b0;
      }
label_04438832:
      il2cpp_runtime_helper_022b2c90();
label_04438837:
      il2cpp_runtime_helper_022b2c90();
label_0443883c:
      il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04438844:
      il2cpp_runtime_helper_022b2c90();
      goto label_04438849;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04438853:
  auVar19 = il2cpp_runtime_helper_022b2c90();
  uVar17 = auVar19._0_8_;
  if (auVar19._8_4_ != 1) {
    local_68 = 0;
    do {
      pSVar12 = (Settings_BaseSettingsContainer_o *)il2cpp_runtime_helper_023051f0(pSVar12,TypeInfo_IDisposable);
      if (pSVar12 != (Settings_BaseSettingsContainer_o *)0x0) {
        pSVar7 = pSVar12->klass;
        uVar5._0_1_ = (pSVar7->_2).rank;
        uVar5._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IDisposable) {
              pVVar13 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
              goto label_04438a5d;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar18);
        }
        pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IDisposable,0);
label_04438a5d:
        (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      }
      if (local_68 == 0) {
        _Unwind_Resume(uVar17);
      }
      il2cpp_runtime_helper_022fefe0();
label_04438a7d:
      uVar17 = il2cpp_runtime_helper_022fefe0();
    } while( true );
  }
  plVar14 = (long *)__cxa_begin_catch(uVar17);
  local_68 = *plVar14;
  __cxa_end_catch();
label_04438954:
  pSVar16 = (Settings_BaseSettingsContainer_o *)il2cpp_runtime_helper_023051f0(pSVar12,TypeInfo_IDisposable);
  if (pSVar16 != (Settings_BaseSettingsContainer_o *)0x0) {
    pSVar7 = pSVar16->klass;
    uVar4._0_1_ = (pSVar7->_2).rank;
    uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar8 = (pSVar7->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IDisposable) {
          pVVar13 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
          goto label_044389bd;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar18);
    }
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar16,TypeInfo_IDisposable,0);
label_044389bd:
    (*pVVar13->methodPtr)(pSVar16,pVVar13->method);
    pSVar12 = pSVar16;
  }
  if (local_68 != 0) goto label_04438a7d;
  return;
}


// UI.MapEditorSettingsKeybindsPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsKeybindsPanel___ctor (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4438aa0

void UI_MapEditorSettingsKeybindsPanel___ctor(UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


