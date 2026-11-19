// Type: UI.MapEditorCustomAssetPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorCustomAssetPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomAssetPopup.cs
// --------------------------------

// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22___ctor (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d703d0

void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22___ctor
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_IDisposable_Dispose (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x5d707f0

void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_IDisposable_Dispose
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$MoveNext
// il2cpp: bool UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__MoveNext (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x5d70800
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7093b: lea r15, [r12 + 0x30]
// asm:   0x5d70940: jmp 0x5d70af1

bool UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__MoveNext
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  UI_MapEditorCustomAssetPopup_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_array *pSVar8;
  System_Collections_Generic_List_CustomAssetEntry__o *__this_02;
  Map_CustomAssetEntry_array *pMVar9;
  UI_MessagePopup_o *pUVar10;
  UI_MapEditorMenu_c *pUVar11;
  bool bVar12;
  Map_CustomAssetEntry_o *__this_03;
  System_String_o *pSVar13;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar14;
  UI_MapEditorMenu_o *pUVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar16;
  UI_MapEditorMenu_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547fb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBundleError");
    Il2CppMethodInitialized_07547fb8 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    pSVar13 = (__this->fields).bundle;
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar12 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar13,(MethodInfo *)0x0);
    if (!bVar12) {
      pUVar15 = (__this->fields)._menu_5__2;
      if (pUVar15 != (UI_MapEditorMenu_o *)0x0) {
        pUVar10 = (pUVar15->fields).MessagePopup;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar13 = UI_UIManager__GetLocale
                            ("MapEditor","CustomAssets","LoadBundleError",
                             "","",(MethodInfo *)0x0);
        if (pUVar10 != (UI_MessagePopup_o *)0x0) {
          UI_MessagePopup__Show(pUVar10,pSVar13,true,(MethodInfo *)0x0);
          return false;
        }
      }
      goto label_05d70c4e;
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    Map_CustomAssetEntry___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 == (Map_CustomAssetEntry_o *)0x0) goto label_05d70c4e;
    (__this_03->fields).Bundle = (__this->fields).bundle;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).Bundle);
    if ((((__this_00 == (UI_MapEditorCustomAssetPopup_o *)0x0) ||
         (pGVar5 = (__this_00->fields)._gameManager, pGVar5 == (GameManagers_MapEditorGameManager_o *)0x0)) ||
        (pMVar6 = (pGVar5->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) ||
       (pMVar7 = (pMVar6->fields).CustomAssets, pMVar7 == (Map_MapScriptCustomAssets_o *)0x0))
    goto label_05d70c4e;
    __this_01 = (pMVar7->fields).CustomAssets;
    pSVar13 = Map_CustomAssetEntry__Serialize(__this_03,(MethodInfo *)0x0);
    pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d70c4e;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_01->fields)._items;
    if (pSVar8 == (System_String_array *)0x0) goto label_05d70c4e;
    uVar4 = (__this_01->fields)._size;
    if (uVar4 < (uint)pSVar8->max_length) {
      (__this_01->fields)._size = uVar4 + 1;
      pSVar8->m_Items[(int)uVar4] = pSVar13;
      Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar13,
                 (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
    }
    pMVar16 = MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Add;
    __this_02 = (__this_00->fields)._entries;
    if (__this_02 == (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) goto label_05d70c4e;
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar9 = (__this_02->fields)._items;
    if (pMVar9 == (Map_CustomAssetEntry_array *)0x0) goto label_05d70c4e;
    uVar4 = (__this_02->fields)._size;
    if (uVar4 < (uint)pMVar9->max_length) {
      (__this_02->fields)._size = uVar4 + 1;
      pMVar9->m_Items[(int)uVar4] = __this_03;
      Il2CppCodeGenWriteBarrier(pMVar9->m_Items + (int)uVar4);
      pMVar16 = extraout_RDX;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_03,
                 (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
      pMVar16 = extraout_RDX_00;
    }
    UI_MapEditorCustomAssetPopup__AddAssetRow(__this_00,__this_03,pMVar16);
    pUVar15 = (__this->fields)._menu_5__2;
  }
  else {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar15 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar15 != (UI_MapEditorMenu_o *)0x0) goto label_05d708e3;
label_05d70ae3:
      (__this->fields)._menu_5__2 = (UI_MapEditorMenu_o *)0x0;
    }
    else {
      pUVar15 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar15 == (UI_MapEditorMenu_o *)0x0) goto label_05d70ae3;
label_05d708e3:
      pUVar11 = TypeInfo_UI_MapEditorMenu;
      bVar2 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((((UI_BaseMenu_c *)pUVar15->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((UI_BaseMenu_c *)pUVar15->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
label_05d70c53:
        il2cpp_codegen_raise_invalid_cast_exception(pUVar15,pUVar11);
      }
      (__this->fields)._menu_5__2 = pUVar15;
      if (((((UI_BaseMenu_c *)pUVar15->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((UI_BaseMenu_c *)pUVar15->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pUVar11))
      goto label_05d70c53;
    }
    targetAddress = &(__this->fields)._menu_5__2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar13 = (__this->fields).bundle;
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar12 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar13,(MethodInfo *)0x0);
    if (!bVar12) {
      pSVar13 = (__this->fields).bundle;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      routine = ApplicationManagers_AssetBundleManager__LoadBundle
                          (pSVar13,"",true,(MethodInfo *)0x0);
      if (__this_00 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                            ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar14;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_05d70c4e;
    }
    pUVar15 = *targetAddress;
  }
  if ((pUVar15 != (UI_MapEditorMenu_o *)0x0) &&
     (pUVar10 = (pUVar15->fields).MessagePopup, pUVar10 != (UI_MessagePopup_o *)0x0)) {
    (*(pUVar10->klass->vtable)._22_Hide.methodPtr)(pUVar10,(pUVar10->klass->vtable)._22_Hide.method);
    return false;
  }
label_05d70c4e:
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x5d70c60

Il2CppObject *
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_IEnumerator_Reset (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x5d70c70

void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_IEnumerator_Reset
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_IEnumerator_get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x5d70cb0

Il2CppObject *
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_IEnumerator_get_Current
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomAssetPopup__get_Title (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6eb10

System_String_o *
UI_MapEditorCustomAssetPopup__get_Title(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fa8 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Top","CustomAssets","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorCustomAssetPopup$$get_Width
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Width (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6ebb0

float UI_MapEditorCustomAssetPopup__get_Width(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorCustomAssetPopup$$get_Height
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Height (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6ebc0

float UI_MapEditorCustomAssetPopup__get_Height(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 420.0;
}


// UI.MapEditorCustomAssetPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6ebd0

int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding
                  (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCustomAssetPopup$$Setup
// il2cpp: void UI_MapEditorCustomAssetPopup__Setup (UI_MapEditorCustomAssetPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d6ebe0

void UI_MapEditorCustomAssetPopup__Setup
               (UI_MapEditorCustomAssetPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_array *pSVar3;
  int32_t fontSize;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  System_String_o *tooltip;
  
  if (Il2CppMethodInitialized_07547fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_OnPlatformChange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorCustomAssetPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Platform");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"PlatformTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"Hint");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fa9 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,130.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Add",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Clear",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_2,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     ("MapEditor","CustomAssets","Hint","",
                      "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar1,__this_00,pSVar4,0,4,(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._platform;
  if ((TypeInfo_UI_MapEditorCustomAssetPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorCustomAssetPopup);
  }
  pSVar3 = TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions;
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3->m_Items[0],
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields).SinglePanel;
      pSVar2 = (__this->fields)._platform;
      pSVar4 = UI_UIManager__GetLocale
                         ("MapEditor","CustomAssets","Platform",
                          "","",(MethodInfo *)0x0);
      pSVar3 = TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions;
      tooltip = UI_UIManager__GetLocale
                          ("MapEditor","CustomAssets","PlatformTooltip",
                           "","",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnPlatformChange,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar1,__this_00,(Settings_BaseSetting_o *)pSVar2,pSVar4,pSVar3,tooltip,140.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,pUVar5,(System_Int32_array *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$Show
// il2cpp: void UI_MapEditorCustomAssetPopup__Show (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6f030
// eh: try 0x5d6f21f..0x5d6f2d0 -> pad 0x5d6f2e6 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d6f2fe..0x5d6f303 -> pad 0x5d6f322 cleanup
// eh: try 0x5d6f325..0x5d6f32f -> pad 0x5d6f337 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6f14b: lea rbx, [rbp + 0xa8]
// asm:   0x5d6f152: jmp 0x5d6f166
// asm:   0x5d6f2e0: jmp 0x5d6f2e6
// asm:   0x5d6f2e2: jmp 0x5d6f2e6
// asm:   0x5d6f2e4: jmp 0x5d6f2e6
// asm:   0x5d6f2e6: mov rbx, rax
// asm:   0x5d6f2e9: cmp edx, 1
// asm:   0x5d6f2ec: jne 0x5d6f325
// asm:   0x5d6f2ee: mov rdi, rbx
// asm:   0x5d6f2f1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d6f2f6: mov rbx, qword ptr [rax]
// asm:   0x5d6f2f9: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d6f2fe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d6f303: lea rax, [rip + 0x151f7ee]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d6f30a: mov rsi, qword ptr [rax]
// asm:   0x5d6f30d: mov rdi, rsp
// asm:   0x5d6f310: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d6f315: test rbx, rbx
// asm:   0x5d6f318: je 0x5d6f2b4
// asm:   0x5d6f31a: mov rdi, rbx
// asm:   0x5d6f31d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d6f322: mov rbx, rax
// asm:   0x5d6f325: lea rdi, [rsp + 0x18]
// asm:   0x5d6f32a: call 0x2fdd150  ; il2cpp_runtime_helper_02fdd150()
// asm:   0x5d6f32f: mov rdi, rbx
// asm:   0x5d6f332: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d6f337: mov rdi, rax
// asm:   0x5d6f33a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorCustomAssetPopup__Show(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  uint uVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_List_CustomAssetEntry__o *pSVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  System_Collections_Generic_List_string__o *__this_00;
  Map_CustomAssetEntry_array *pMVar8;
  GameManagers_MapEditorGameManager_c *pGVar9;
  Il2CppObject *str;
  bool bVar10;
  Map_CustomAssetEntry_o *item;
  GameManagers_MapEditorGameManager_o **targetAddress;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07547faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547faa = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pGVar9 = TypeInfo_GameManagers_MapEditorGameManager;
  pGVar4 = (GameManagers_MapEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if ((bVar2 <= (((GameManagers_BaseGameManager_c *)pGVar4->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_BaseGameManager_c *)pGVar4->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      (__this->fields)._gameManager = pGVar4;
      if ((bVar2 <= (((GameManagers_BaseGameManager_c *)pGVar4->klass)->_2).typeHierarchyDepth) &&
         ((((GameManagers_BaseGameManager_c *)pGVar4->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)pGVar9)) goto label_05d6f166;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pGVar4,pGVar9);
  }
  (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_05d6f166:
  targetAddress = &(__this->fields)._gameManager;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar5 = (__this->fields)._entries;
  if (pSVar5 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pGVar4 = *targetAddress;
    if ((((pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pMVar6 = (pGVar4->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) &&
        (pMVar7 = (pMVar6->fields).CustomAssets, pMVar7 != (Map_MapScriptCustomAssets_o *)0x0)) &&
       (__this_00 = (pMVar7->fields).CustomAssets,
       __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      uStack_40 = 0;
      puStack_38 = (undefined1 *)&SStack_58;
      while( true ) {
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        str = SStack_58.fields._current;
        if (!bVar10) {
          pMVar11 = MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          UI_MapEditorCustomAssetPopup__RebuildAssetRows(__this,pMVar11);
          return;
        }
        pSVar5 = (__this->fields)._entries;
        if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
        }
        item = Map_CustomAssetEntry__Parse((System_String_o *)str,(MethodInfo *)0x0);
        pMVar11 = MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Add;
        if (pSVar5 == (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) break;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar8 = (pSVar5->fields)._items;
        if (pMVar8 == (Map_CustomAssetEntry_array *)0x0) break;
        uVar3 = (pSVar5->fields)._size;
        if (uVar3 < (uint)pMVar8->max_length) {
          (pSVar5->fields)._size = uVar3 + 1;
          pMVar8->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pMVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$RebuildAssetRows
// il2cpp: void UI_MapEditorCustomAssetPopup__RebuildAssetRows (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6f340
// eh: try 0x5d6f470..0x5d6f56c -> pad 0x5d6f5e0 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d6f5b1..0x5d6f5b6 -> pad 0x5d6f5d1 cleanup
// eh: try 0x5d6f5d4..0x5d6f5de -> pad 0x5d6f637 catch (...) [compiler noexcept guard]
// eh: try 0x5d6f5f8..0x5d6f5fd -> pad 0x5d6f622 cleanup
// eh: try 0x5d6f625..0x5d6f62f -> pad 0x5d6f637 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6f595: jmp 0x5d6f599
// asm:   0x5d6f597: jmp 0x5d6f5e0
// asm:   0x5d6f599: mov r14, rax
// asm:   0x5d6f59c: cmp edx, 1
// asm:   0x5d6f59f: jne 0x5d6f5d4
// asm:   0x5d6f5a1: mov rdi, r14
// asm:   0x5d6f5a4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d6f5a9: mov rbx, qword ptr [rax]
// asm:   0x5d6f5ac: mov qword ptr [rsp + 8], rbx
// asm:   0x5d6f5b1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d6f5b6: lea rax, [rip + 0x151e3e3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose
// asm:   0x5d6f5bd: mov rsi, qword ptr [rax]
// asm:   0x5d6f5c0: lea rdi, [rsp + 0x40]
// asm:   0x5d6f5c5: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d6f5ca: test rbx, rbx
// asm:   0x5d6f5cd: je 0x5d6f582
// asm:   0x5d6f5cf: jmp 0x5d6f61a
// asm:   0x5d6f5d1: mov r14, rax
// asm:   0x5d6f5d4: lea rdi, [rsp + 8]
// asm:   0x5d6f5d9: call 0x2fdd1b0  ; il2cpp_runtime_helper_02fdd1b0()
// asm:   0x5d6f5de: jmp 0x5d6f62f
// asm:   0x5d6f5e0: mov r14, rax
// asm:   0x5d6f5e3: cmp edx, 1
// asm:   0x5d6f5e6: jne 0x5d6f625
// asm:   0x5d6f5e8: mov rdi, r14
// asm:   0x5d6f5eb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d6f5f0: mov rbx, qword ptr [rax]
// asm:   0x5d6f5f3: mov qword ptr [rsp + 8], rbx
// asm:   0x5d6f5f8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d6f5fd: lea rax, [rip + 0x151e774]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5d6f604: mov rsi, qword ptr [rax]
// asm:   0x5d6f607: lea rdi, [rsp + 0x20]
// asm:   0x5d6f60c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d6f611: test rbx, rbx
// asm:   0x5d6f614: je 0x5d6f4b7
// asm:   0x5d6f61a: mov rdi, rbx
// asm:   0x5d6f61d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d6f622: mov r14, rax
// asm:   0x5d6f625: lea rdi, [rsp + 8]
// asm:   0x5d6f62a: call 0x2fdd180  ; il2cpp_runtime_helper_02fdd180()
// asm:   0x5d6f62f: mov rdi, r14
// asm:   0x5d6f632: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d6f637: mov rdi, rax
// asm:   0x5d6f63a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorCustomAssetPopup__RebuildAssetRows(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_Collections_Generic_List_StringSetting__o *pSVar4;
  System_Collections_Generic_List_CustomAssetEntry__o *__this_00;
  UnityEngine_Object_o *obj;
  bool bVar5;
  MethodInfo *method_00;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  UnityEngine_Object_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07547fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fab = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._elements;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_58 = local_70;
    local_68 = (undefined1  [8])local_80._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58;
      if (!bVar5) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar3 = (__this->fields)._elements;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields)._settings;
      if (pSVar4 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        __this_00 = (__this->fields)._entries;
        if (__this_00 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_CustomAssetEntry_GetEnumerator);
          local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_80._8_8_ = &local_48;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext
                              );
            if (!bVar5) break;
            UI_MapEditorCustomAssetPopup__AddAssetRow
                      (__this,(Map_CustomAssetEntry_o *)local_48.fields._current,method_00);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$AddAssetRow
// il2cpp: void UI_MapEditorCustomAssetPopup__AddAssetRow (UI_MapEditorCustomAssetPopup_o* __this, Map_CustomAssetEntry_o* entry, const MethodInfo* method);
// 0x5d6f640

void UI_MapEditorCustomAssetPopup__AddAssetRow
               (UI_MapEditorCustomAssetPopup_o *__this,Map_CustomAssetEntry_o *entry,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  Settings_StringSetting_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  int32_t fontSize;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_02;
  System_String_o **ppSVar9;
  Settings_StringSetting_o *__this_03;
  System_String_o *value;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_07547fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PlatformUrlTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultUrlTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fac = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  bVar7 = System_String__op_Equality
                    ((__this->fields)._platformKey,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                     (MethodInfo *)0x0);
  uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  if (bVar7) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    ppSVar9 = &"DefaultUrlTooltip";
  }
  else {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    ppSVar9 = &"PlatformUrlTooltip";
  }
  pSVar8 = UI_UIManager__GetLocale
                     ("MapEditor","CustomAssets",*ppSVar9,"",
                      "",(MethodInfo *)0x0);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(__this_03,(MethodInfo *)0x0);
  if (entry != (Map_CustomAssetEntry_o *)0x0) {
    value = Map_CustomAssetEntry__GetPlatformUrl(entry,(__this->fields)._platformKey,(MethodInfo *)0x0);
    if (__this_03 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      item = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_02,(Settings_BaseSetting_o *)__this_03,
                        (entry->fields).Bundle,pSVar8,220.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0
                        ,(UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pMVar6 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._elements;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (__this_00->fields)._items;
        if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pUVar4->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pUVar4->m_Items[(int)uVar3] = item;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          pMVar6 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
          __this_01 = (__this->fields)._settings;
          if (__this_01 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_01->fields)._items;
            if (pSVar5 != (Settings_StringSetting_array *)0x0) {
              uVar3 = (__this_01->fields)._size;
              if (uVar3 < (uint)pSVar5->max_length) {
                (__this_01->fields)._size = uVar3 + 1;
                pSVar5->m_Items[(int)uVar3] = __this_03;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_03,
                         (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$ApplyAssetRows
// il2cpp: void UI_MapEditorCustomAssetPopup__ApplyAssetRows (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6f970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6f9de: nop 

void UI_MapEditorCustomAssetPopup__ApplyAssetRows(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomAssetEntry__o *__this_00;
  System_String_o *key;
  System_Collections_Generic_List_StringSetting__o *pSVar1;
  Map_CustomAssetEntry_o *__this_01;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  int32_t index;
  
  if (Il2CppMethodInitialized_07547fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547fad = '\x01';
  }
  pSVar1 = (__this->fields)._settings;
  if (pSVar1 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    index = 0;
    while( true ) {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      __this_00 = (__this->fields)._entries;
      if (__this_00 == (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) break;
      __this_01 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_CustomAssetEntry_get_Item);
      pSVar1 = (__this->fields)._settings;
      if (pSVar1 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      key = (__this->fields)._platformKey;
      pSVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
      if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
         (pSVar3 = (pSVar2->fields)._value, pSVar3 == (System_String_o *)0x0)) break;
      pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
      if (__this_01 == (Map_CustomAssetEntry_o *)0x0) break;
      Map_CustomAssetEntry__SetPlatformUrl(__this_01,key,pSVar3,(MethodInfo *)0x0);
      index = index + 1;
      pSVar1 = (__this->fields)._settings;
      if (pSVar1 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$OnPlatformChange
// il2cpp: void UI_MapEditorCustomAssetPopup__OnPlatformChange (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d6fa70

void UI_MapEditorCustomAssetPopup__OnPlatformChange(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547fae = '\x01';
  }
  UI_MapEditorCustomAssetPopup__ApplyAssetRows(__this,method);
  pSVar1 = (__this->fields)._platform;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  name = (pSVar1->fields)._value;
  if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  }
  method_00 = (MethodInfo *)Map_CustomAssetEntry__GetPlatformKey(name,(MethodInfo *)0x0);
  (__this->fields)._platformKey = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._platformKey);
  UI_MapEditorCustomAssetPopup__RebuildAssetRows(__this,method_00);
  return;
}


// UI.MapEditorCustomAssetPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomAssetPopup__OnButtonClick (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d6fb10
// eh: try 0x5d6fdcf..0x5d702df -> pad 0x5d702e9 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d70301..0x5d70306 -> pad 0x5d70329 cleanup
// eh: try 0x5d7032c..0x5d70336 -> pad 0x5d7033e catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6fcbc: jmp 0x5d6fd09
// asm:   0x5d6fda2: lea r13, [rip + 0x151dbff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext
// asm:   0x5d6fda9: mov r12, rsp
// asm:   0x5d6fdac: lea rbp, [rip + 0x1526ba5]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5d6fdb3: jmp 0x5d6fdda
// asm:   0x5d702df: jmp 0x5d702e9
// asm:   0x5d702e1: jmp 0x5d702e9
// asm:   0x5d702e3: jmp 0x5d702e9
// asm:   0x5d702e5: jmp 0x5d702e9
// asm:   0x5d702e7: jmp 0x5d702e9
// asm:   0x5d702e9: mov r12, rax
// asm:   0x5d702ec: cmp edx, 1
// asm:   0x5d702ef: jne 0x5d7032c
// asm:   0x5d702f1: mov rdi, r12
// asm:   0x5d702f4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d702f9: mov r12, qword ptr [rax]
// asm:   0x5d702fc: mov qword ptr [rsp + 0x20], r12
// asm:   0x5d70301: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d70306: lea rax, [rip + 0x151d693]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose
// asm:   0x5d7030d: mov rsi, qword ptr [rax]
// asm:   0x5d70310: mov rdi, rsp
// asm:   0x5d70313: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d70318: test r12, r12
// asm:   0x5d7031b: je 0x5d7000d
// asm:   0x5d70321: mov rdi, r12
// asm:   0x5d70324: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d70329: mov r12, rax
// asm:   0x5d7032c: lea rdi, [rsp + 0x20]
// asm:   0x5d70331: call 0x2fdd1e0  ; il2cpp_runtime_helper_02fdd1e0()
// asm:   0x5d70336: mov rdi, r12
// asm:   0x5d70339: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7033e: mov rdi, rax
// asm:   0x5d70341: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorCustomAssetPopup__OnButtonClick
               (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int32_t length;
  uint32_t uVar4;
  UI_BaseMenu_o *pUVar5;
  System_Collections_Generic_List_CustomAssetEntry__o *pSVar6;
  System_String_array *pSVar7;
  UI_ConfirmPopup_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar8;
  Map_MapScript_o *pMVar9;
  Map_MapScriptCustomAssets_o *pMVar10;
  UI_MapEditorTopPanel_o *__this_01;
  UI_SetNamePopup_o *pUVar11;
  Settings_StringSetting_o *pSVar12;
  UI_MessagePopup_o *__this_02;
  bool bVar13;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_o *pSVar14;
  UnityEngine_Events_UnityAction_o *pUVar15;
  MethodInfo *pMVar16;
  System_String_o *message;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Map_CustomAssetEntry_o *local_58;
  undefined1 local_48 [16];
  Map_CustomAssetEntry_o *local_38;
  
  if (Il2CppMethodInitialized_07547faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"EmptyName");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"AddBundle");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmClear");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadingBundle");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmAdd");
    Il2CppMethodInitialized_07547faf = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Map_CustomAssetEntry_o *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar5 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pMVar16 = (MethodInfo *)"Back";
  }
  else {
    pUVar5 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pMVar16 = (MethodInfo *)"Back";
  }
  "Back" = (System_String_o *)pMVar16;
  if (pUVar5 != (UI_BaseMenu_o *)0x0) {
    bVar2 = (((Il2CppClass *)TypeInfo_UI_MapEditorMenu)->_2).typeHierarchyDepth;
    if (((pUVar5->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  bVar13 = System_String__op_Equality(name,(System_String_o *)pMVar16,(MethodInfo *)0x0);
  if (bVar13) {
    UI_MapEditorCustomAssetPopup__ApplyAssetRows(__this,pMVar16);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar6 = (__this->fields)._entries;
    if (pSVar6 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar6,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_CustomAssetEntry_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      puStack_60 = (undefined1 *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
        local_48._8_8_ = local_68;
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext);
        if (bVar13) {
          if (local_58 != (Map_CustomAssetEntry_o *)0x0) {
            Map_CustomAssetEntry__Serialize(local_58,(MethodInfo *)0x0);
label_05d702da:
            ThrowNullReferenceException();
          }
label_05d702ce:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext
                                  ), bVar13) {
          if (local_58 == (Map_CustomAssetEntry_o *)0x0) goto label_05d702ce;
          pSVar14 = Map_CustomAssetEntry__Serialize(local_58,(MethodInfo *)0x0);
          pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_03->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_05d702da;
          uVar3 = (__this_03->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this_03->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = pSVar14;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar14,
                       (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose);
      pGVar8 = (__this->fields)._gameManager;
      if (((pGVar8 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pMVar9 = (pGVar8->fields).MapScript, pMVar9 != (Map_MapScript_o *)0x0)) &&
         (pMVar10 = (pMVar9->fields).CustomAssets, pMVar10 != (Map_MapScriptCustomAssets_o *)0x0)) {
        (pMVar10->fields).CustomAssets = __this_03;
        Il2CppCodeGenWriteBarrier(&(pMVar10->fields).CustomAssets);
        if ((pUVar5 != (UI_BaseMenu_o *)0x0) &&
           (__this_01 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar5 + 0xb8)),
           __this_01 != (UI_MapEditorTopPanel_o *)0x0)) {
          UI_MapEditorTopPanel__Save(__this_01,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
  }
  else {
    bVar13 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
    if (bVar13) {
      if (pUVar5 != (UI_BaseMenu_o *)0x0) {
        __this_00 = (pUVar5->fields).ConfirmPopup;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar14 = UI_UIManager__GetLocale
                            ("MapEditor","CustomAssets","ClearConfirm",
                             "","",(MethodInfo *)0x0);
        pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar15,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_0,(MethodInfo *)0x0);
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_00,pSVar14,pUVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      bVar13 = System_String__op_Equality(name,"ConfirmClear",(MethodInfo *)0x0);
      if (bVar13) {
        pGVar8 = (__this->fields)._gameManager;
        if ((pGVar8 != (GameManagers_MapEditorGameManager_o *)0x0) &&
           (pMVar9 = (pGVar8->fields).MapScript, pMVar9 != (Map_MapScript_o *)0x0)) {
          pMVar10 = (pMVar9->fields).CustomAssets;
          pMVar16 = (MethodInfo *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)pMVar16,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          if (pMVar10 != (Map_MapScriptCustomAssets_o *)0x0) {
            (pMVar10->fields).CustomAssets = (System_Collections_Generic_List_string__o *)pMVar16;
            Il2CppCodeGenWriteBarrier(&(pMVar10->fields).CustomAssets);
            if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
            }
            ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
            pSVar6 = (__this->fields)._entries;
            if (pSVar6 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
              piVar1 = &(pSVar6->fields)._version;
              *piVar1 = *piVar1 + 1;
              length = (pSVar6->fields)._size;
              (pSVar6->fields)._size = 0;
              if (0 < length) {
                pMVar16 = (MethodInfo *)0x0;
                System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
              }
              UI_MapEditorCustomAssetPopup__RebuildAssetRows(__this,pMVar16);
              return;
            }
          }
        }
      }
      else {
        bVar13 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
        if (bVar13) {
          if (pUVar5 != (UI_BaseMenu_o *)0x0) {
            pUVar11 = (pUVar5->fields).SetNamePopup;
            pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (pUVar15,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_1,
                       (MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar14 = UI_UIManager__GetLocale
                                ("MapEditor","CustomAssets","AddBundle",
                                 "","",(MethodInfo *)0x0);
            if (pUVar11 != (UI_SetNamePopup_o *)0x0) {
              UI_SetNamePopup__Show
                        (pUVar11,"",pUVar15,pSVar14,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          bVar13 = System_String__op_Equality(name,"ConfirmAdd",(MethodInfo *)0x0);
          if (!bVar13) {
            return;
          }
          if ((((pUVar5 != (UI_BaseMenu_o *)0x0) &&
               (pUVar11 = (pUVar5->fields).SetNamePopup, pUVar11 != (UI_SetNamePopup_o *)0x0)) &&
              (pSVar12 = (pUVar11->fields).NameSetting, pSVar12 != (Settings_StringSetting_o *)0x0)) &&
             (pSVar14 = (pSVar12->fields)._value, pSVar14 != (System_String_o *)0x0)) {
            pSVar14 = System_String__Trim(pSVar14,(MethodInfo *)0x0);
            bVar13 = System_String__op_Equality
                               (pSVar14,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                (MethodInfo *)0x0);
            __this_02 = (pUVar5->fields).MessagePopup;
            uVar4 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
            if (bVar13) {
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar14 = UI_UIManager__GetLocale
                                  ("Common","EmptyName","",
                                   "","",(MethodInfo *)0x0);
              if (__this_02 != (UI_MessagePopup_o *)0x0) {
                UI_MessagePopup__Show(__this_02,pSVar14,true,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              message = UI_UIManager__GetLocale
                                  ("MapEditor","CustomAssets","LoadingBundle",
                                   "","",(MethodInfo *)0x0);
              if (__this_02 != (UI_MessagePopup_o *)0x0) {
                UI_MessagePopup__Show(__this_02,message,false,(MethodInfo *)0x0);
                routine = UI_MapEditorCustomAssetPopup__LoadAssetBundle(__this,pSVar14,method_00);
                UnityEngine_MonoBehaviour__StartCoroutine_691c390
                          ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$LoadAssetBundle
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorCustomAssetPopup__LoadAssetBundle (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* bundle, const MethodInfo* method);
// 0x5d70350

System_Collections_IEnumerator_o *
UI_MapEditorCustomAssetPopup__LoadAssetBundle
          (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *bundle,MethodInfo *method)

{
  UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this_00;
  
  if (Il2CppMethodInitialized_07547fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22);
    Il2CppMethodInitialized_07547fb0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).bundle = bundle;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).bundle);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MapEditorCustomAssetPopup$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup___ctor (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d703f0

void UI_MapEditorCustomAssetPopup___ctor(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  System_Collections_Generic_List_CustomAssetEntry__o *__this_02;
  Settings_StringSetting_o *__this_03;
  
  if (Il2CppMethodInitialized_07547fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547fb1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._elements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._elements);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._settings = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._settings);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomAssetEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomAssetEntry_ctor);
  (__this->fields)._entries = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entries);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(__this_03,(MethodInfo *)0x0);
  (__this->fields)._platform = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._platform);
  (__this->fields)._platformKey = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._platformKey);
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$.cctor
// il2cpp: void UI_MapEditorCustomAssetPopup___cctor (const MethodInfo* method);
// 0x5d70580

void UI_MapEditorCustomAssetPopup___cctor(MethodInfo *method)

{
  Il2CppObject *first;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07547fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorCustomAssetPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07547fb2 = '\x01';
  }
  first = SZArrayNew(TypeInfo_string_array,1);
  if (first == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&first[1].monitor == 0) {
    ThrowIndexOutOfRangeException();
  }
  first[2].klass = (Il2CppClass *)"Default";
  Il2CppCodeGenWriteBarrier(&first[2].klass);
  if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  }
  source = System_Linq_Enumerable__Concat_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)
                      TypeInfo_Map_CustomAssetEntry->static_fields->PlatformNames,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__15_0
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__15_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d706b0

void UI_MapEditorCustomAssetPopup___Setup_b__15_0(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    Il2CppMethodInitialized_07547fb3 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Add",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__15_1
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__15_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d706f0

void UI_MapEditorCustomAssetPopup___Setup_b__15_1(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_07547fb4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__15_2
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__15_2 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d70730

void UI_MapEditorCustomAssetPopup___Setup_b__15_2(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547fb5 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__21_0
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d70770

void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_0
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmClear");
    Il2CppMethodInitialized_07547fb6 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"ConfirmClear",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__21_1
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x5d707b0

void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_1
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmAdd");
    Il2CppMethodInitialized_07547fb7 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"ConfirmAdd",in_RDX);
  return;
}


