// Type: UI.MapEditorCustomAssetPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorCustomAssetPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomAssetPopup.cs
// --------------------------------

// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22___ctor (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22___ctor(UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_IDisposable_Dispose (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_IDisposable_Dispose(UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, MethodInfo* method)

{
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$MoveNext
// il2cpp: bool UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__MoveNext (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x1822b8b30
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b8e37: mov rax, qword ptr [rcx]
// asm:   0x1822b8e3a: mov rdx, qword ptr [rax + 0x2a0]
// asm:   0x1822b8e41: call qword ptr [rax + 0x298]  ; vtable slot 22
// asm:   0x1822b8e47: jmp 0x1822b8d62

bool UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__MoveNext
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_MapEditorCustomAssetPopup_o *__this_00;
  UI_MapEditorMenu_o *pUVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  Map_MapScript_o *pMVar5;
  Map_MapScriptCustomAssets_o *pMVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_List_CustomAssetEntry__o *pSVar8;
  UI_MessagePopup_o *pUVar9;
  bool bVar10;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  Map_CustomAssetEntry_o *__this_01;
  System_String_o *pSVar11;
  
  if (Il2CppMethodInitialized_1843474ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Error loading asset bundle");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843474ff = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 == (UI_MapEditorMenu_o *)0x0) {
      (__this->fields)._menu_5__2 = (UI_MapEditorMenu_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
      (__this->fields)._menu_5__2 = pUVar3;
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._menu_5__2,pUVar3);
    pSVar11 = (__this->fields).bundle;
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar10 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar11,(MethodInfo *)0x0);
    if (!bVar10) {
      pSVar11 = (__this->fields).bundle;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      routine = ApplicationManagers_AssetBundleManager__LoadBundle
                          (pSVar11,"",true,(MethodInfo *)0x0);
      if (__this_00 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_1822b8e4c;
    }
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    pSVar11 = (__this->fields).bundle;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar10 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar11,(MethodInfo *)0x0);
    if (!bVar10) {
      pUVar3 = (__this->fields)._menu_5__2;
      if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar9 = (pUVar3->fields).MessagePopup, pUVar9 != (UI_MessagePopup_o *)0x0)) {
        UI_MessagePopup__Show(pUVar9,"Error loading asset bundle",true,(MethodInfo *)0x0);
        return false;
      }
      goto label_1822b8e4c;
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    Map_CustomAssetEntry___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (Map_CustomAssetEntry_o *)0x0) goto label_1822b8e4c;
    pSVar11 = (__this->fields).bundle;
    (__this_01->fields).Bundle = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Bundle,pSVar11);
    if ((((__this_00 == (UI_MapEditorCustomAssetPopup_o *)0x0) ||
         (pGVar4 = (__this_00->fields)._gameManager, pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0)) ||
        (pMVar5 = (pGVar4->fields).MapScript, pMVar5 == (Map_MapScript_o *)0x0)) ||
       (pMVar6 = (pMVar5->fields).CustomAssets, pMVar6 == (Map_MapScriptCustomAssets_o *)0x0))
    goto label_1822b8e4c;
    pSVar7 = (pMVar6->fields).CustomAssets;
    pSVar11 = Map_CustomAssetEntry__Serialize(__this_01,(MethodInfo *)0x0);
    if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822b8e4c;
    il2cpp_runtime_helper_180012890(pSVar7,pSVar11,MethodInfo_System_Collections_Generic_List_string_Add);
    pSVar8 = (__this_00->fields)._entries;
    if (pSVar8 == (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) goto label_1822b8e4c;
    il2cpp_runtime_helper_180012890(pSVar8,__this_01);
    UI_MapEditorCustomAssetPopup__AddAssetRow(__this_00,__this_01,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._menu_5__2;
  if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
     (pUVar9 = (pUVar3->fields).MessagePopup, pUVar9 != (UI_MessagePopup_o *)0x0)) {
    (*(pUVar9->klass->vtable)._22_Hide.methodPtr)(pUVar9,(pUVar9->klass->vtable)._22_Hide.method);
    return false;
  }
label_1822b8e4c:
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_IEnumerator_Reset (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, const MethodInfo* method);
// 0x1822b8e70

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
// 0x180573e90

Il2CppObject*
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22__System_Collections_IEnumerator_get_Current(UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomAssetPopup__get_Title (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac940

System_String_o *
UI_MapEditorCustomAssetPopup__get_Title(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Assets");
    Il2CppMethodInitialized_1843474ef = '\x01';
  }
  return "Custom Assets";
}


// UI.MapEditorCustomAssetPopup$$get_Width
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Width (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_MapEditorCustomAssetPopup__get_Width(UI_MapEditorCustomAssetPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.MapEditorCustomAssetPopup$$get_Height
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Height (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac930

float UI_MapEditorCustomAssetPopup__get_Height(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 420.0;
}


// UI.MapEditorCustomAssetPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MapEditorCustomAssetPopup__get_VerticalPadding(UI_MapEditorCustomAssetPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MapEditorCustomAssetPopup$$Setup
// il2cpp: void UI_MapEditorCustomAssetPopup__Setup (UI_MapEditorCustomAssetPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822abe90

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
  
  if (Il2CppMethodInitialized_1843474f0 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Add any asset bundle located in Documents/Aottg2/CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"Which platform's download URL to edit. Asset bundles must be built for the platform they are downloaded on.");
    Il2CppMethodInitialized_1843474f0 = '\x01';
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
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Clear",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_00,"Add any asset bundle located in Documents/Aottg2/CustomAssets",0,4,(MethodInfo *)0x0);
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
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields).SinglePanel;
      pSVar2 = (__this->fields)._platform;
      pSVar3 = TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions;
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnPlatformChange,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar1,__this_00,(Settings_BaseSetting_o *)pSVar2,"Platform",pSVar3,
                 "Which platform's download URL to edit. Asset bundles must be built for the platform they are downloaded on.",140.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar5,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$Show
// il2cpp: void UI_MapEditorCustomAssetPopup__Show (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac240
// eh: try 0x1822ac423..0x1822ac539 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ac378: xor ebx, ebx
// asm:   0x1822ac4e8: mov rdx, qword ptr [rip + 0x1deb429]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1822ac4ef: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822ac4f4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ac4f9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ac4fe: test rcx, rcx
// asm:   0x1822ac501: jne 0x1822ac539
// asm:   0x1822ac503: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1822ac539: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorCustomAssetPopup__Show(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  uint uVar3;
  System_Collections_Generic_List_CustomAssetEntry__o *pSVar4;
  Map_MapScript_o *pMVar5;
  Map_MapScriptCustomAssets_o *pMVar6;
  System_Collections_Generic_List_string__o *__this_00;
  Map_CustomAssetEntry_array *pMVar7;
  MethodInfo *pMVar8;
  Il2CppObject *str;
  bool bVar9;
  Map_CustomAssetEntry_o *item;
  GameManagers_MapEditorGameManager_o *pGVar10;
  undefined1 local_60 [16];
  System_String_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843474f1 == '\0') {
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
    Il2CppMethodInitialized_1843474f1 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pGVar10 = (GameManagers_MapEditorGameManager_o *)
            TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar10 == (GameManagers_MapEditorGameManager_o *)0x0) {
    pGVar10 = (GameManagers_MapEditorGameManager_o *)0x0;
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pGVar10->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((GameManagers_BaseGameManager_c *)pGVar10->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar10);
    }
    (__this->fields)._gameManager = pGVar10;
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pGVar10->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((GameManagers_BaseGameManager_c *)pGVar10->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar10);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pGVar10);
  pSVar4 = (__this->fields)._entries;
  if (pSVar4 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pGVar10 = (__this->fields)._gameManager;
    if ((((pGVar10 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pMVar5 = (pGVar10->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) &&
        (pMVar6 = (pMVar5->fields).CustomAssets, pMVar6 != (Map_MapScriptCustomAssets_o *)0x0)) &&
       (__this_00 = (pMVar6->fields).CustomAssets,
       __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        str = local_48.fields._current;
        if (!bVar9) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          UI_MapEditorCustomAssetPopup__RebuildAssetRows(__this,(MethodInfo *)0x0);
          return;
        }
        pSVar4 = (__this->fields)._entries;
        if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
        }
        item = Map_CustomAssetEntry__Parse((System_String_o *)str,(MethodInfo *)0x0);
        pMVar8 = MethodInfo_System_Collections_Generic_List_CustomAssetEntry_Add;
        if (pSVar4 == (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) break;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar7 = (pSVar4->fields)._items;
        if (pMVar7 == (Map_CustomAssetEntry_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pMVar7->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          if ((uint)pMVar7->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pMVar7->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pMVar7->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$RebuildAssetRows
// il2cpp: void UI_MapEditorCustomAssetPopup__RebuildAssetRows (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822abbd0
// eh: try 0x1822abcf0..0x1822abe37 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822abd3c: mov rdx, qword ptr [rip + 0x1dd47a5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1822abd43: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822abd48: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822abd4d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822abd52: test rcx, rcx
// asm:   0x1822abd55: jne 0x1822abe78
// asm:   0x1822abd5b: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1822abe0f: nop 
// asm:   0x1822abe48: mov rdx, qword ptr [rip + 0x1dcdb01]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose
// asm:   0x1822abe4f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822abe54: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822abe59: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822abe5e: test rcx, rcx
// asm:   0x1822abe61: jne 0x1822abe7e
// asm:   0x1822abe78: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822abe7e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_MapEditorCustomAssetPopup__RebuildAssetRows(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_Collections_Generic_List_StringSetting__o *pSVar4;
  System_Collections_Generic_List_CustomAssetEntry__o *__this_00;
  Map_CustomAssetEntry_o *obj;
  bool bVar5;
  undefined1 local_58 [16];
  Map_CustomAssetEntry_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Map_CustomAssetEntry_o *local_30;
  undefined1 local_28 [8];
  uint64_t uStack_20;
  Map_CustomAssetEntry_o *local_18;
  
  if (Il2CppMethodInitialized_1843474f2 == '\0') {
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
    Il2CppMethodInitialized_1843474f2 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Map_CustomAssetEntry_o *)0x0;
  local_28 = (undefined1  [8])0x0;
  uStack_20 = 0;
  local_18 = (Map_CustomAssetEntry_o *)0x0;
  pSVar3 = (__this->fields)._elements;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_40 = (undefined1  [8])local_58._0_8_;
    pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
    local_30 = local_48;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_30;
      if (!bVar5) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
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
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                     (System_Collections_Generic_List_T__o *)__this_00,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_CustomAssetEntry_GetEnumerator);
          local_28 = (undefined1  [8])local_58._0_8_;
          uStack_20 = local_58._8_8_;
          local_18 = local_48;
          local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext
                              );
            if (!bVar5) break;
            UI_MapEditorCustomAssetPopup__AddAssetRow(__this,local_18,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
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
// 0x1822ab000

void UI_MapEditorCustomAssetPopup__AddAssetRow
               (UI_MapEditorCustomAssetPopup_o *__this,Map_CustomAssetEntry_o *entry,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  Settings_StringSetting_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_02;
  Settings_StringSetting_o *__this_03;
  System_String_o *value;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_1843474f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Optional: add a URL for players to download the asset bundle, otherwise they must also have the file in CustomAssets folder");
    il2cpp_codegen_initialize_runtime_metadata(&"Optional: add a URL used only by players on this platform, otherwise the default URL is used");
    Il2CppMethodInitialized_1843474f3 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  bVar6 = System_String__op_Equality
                    ((__this->fields)._platformKey,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  pSVar7 = "Optional: add a URL used only by players on this platform, otherwise the default URL is used";
  if (bVar6) {
    pSVar7 = "Optional: add a URL for players to download the asset bundle, otherwise they must also have the file in CustomAssets folder";
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(__this_03,(MethodInfo *)0x0);
  if (entry != (Map_CustomAssetEntry_o *)0x0) {
    value = Map_CustomAssetEntry__GetPlatformUrl(entry,(__this->fields)._platformKey,(MethodInfo *)0x0);
    if (__this_03 == (Settings_StringSetting_o *)0x0) goto label_1822ab298;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    item = UI_ElementFactory__CreateInputSetting
                     ((__this->fields).SinglePanel,__this_02,(Settings_BaseSetting_o *)__this_03,
                      (entry->fields).Bundle,pSVar7,220.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    __this_00 = (__this->fields)._elements;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1822ab298;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_1822ab298;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pUVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pUVar3->max_length <= uVar2) goto label_1822ab29e;
      pUVar3->m_Items[(int)uVar2] = item;
      Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    __this_01 = (__this->fields)._settings;
    if (__this_01 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_01->fields)._items;
      if (pSVar4 != (Settings_StringSetting_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if ((uint)pSVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_03,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (__this_01->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[(int)uVar2] = __this_03;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,__this_03);
          return;
        }
label_1822ab29e:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822ab298:
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$ApplyAssetRows
// il2cpp: void UI_MapEditorCustomAssetPopup__ApplyAssetRows (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ab2b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ab31b: nop dword ptr [rax + rax]
// asm:   0x1822ab3a6: jmp 0x1822ab320

void UI_MapEditorCustomAssetPopup__ApplyAssetRows(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomAssetEntry__o *__this_00;
  System_String_o *key;
  System_Collections_Generic_List_StringSetting__o *pSVar1;
  Map_CustomAssetEntry_o *__this_01;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  int index;
  
  if (Il2CppMethodInitialized_1843474f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843474f4 = '\x01';
  }
  pSVar1 = (__this->fields)._settings;
  index = 0;
  if (pSVar1 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    while( true ) {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      __this_00 = (__this->fields)._entries;
      if (__this_00 == (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) break;
      __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_CustomAssetEntry_get_Item);
      pSVar1 = (__this->fields)._settings;
      if (pSVar1 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      key = (__this->fields)._platformKey;
      pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
      if (((pSVar2 == (Settings_StringSetting_o *)0x0) ||
          (pSVar3 = (pSVar2->fields)._value, pSVar3 == (System_String_o *)0x0)) ||
         (pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0), __this_01 == (Map_CustomAssetEntry_o *)0x0))
      break;
      Map_CustomAssetEntry__SetPlatformUrl(__this_01,key,pSVar3,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._settings;
      index = index + 1;
      if (pSVar1 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$OnPlatformChange
// il2cpp: void UI_MapEditorCustomAssetPopup__OnPlatformChange (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822abb30

void UI_MapEditorCustomAssetPopup__OnPlatformChange(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843474f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843474f5 = '\x01';
  }
  UI_MapEditorCustomAssetPopup__ApplyAssetRows(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._platform;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar2 = (pSVar1->fields)._value;
    if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    }
    pSVar2 = Map_CustomAssetEntry__GetPlatformKey(pSVar2,(MethodInfo *)0x0);
    (__this->fields)._platformKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._platformKey,pSVar2);
    UI_MapEditorCustomAssetPopup__RebuildAssetRows(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomAssetPopup__OnButtonClick (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822ab460
// eh: try 0x1822ab9c0..0x1822abb20 -> pad 0x183315b20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ab63f: mov qword ptr [rsp + 0xa8], rsi
// asm:   0x1822ab647: xor r15d, r15d
// asm:   0x1822ab81a: mov qword ptr [rsp + 0x28], r15
// asm:   0x1822ab81f: mov qword ptr [rsp + 0x20], r15
// asm:   0x1822ab824: mov r9, qword ptr [rip + 0x1ddb70d]  ; "Add asset bundle"
// asm:   0x1822ab82b: mov r8, rdi
// asm:   0x1822ab82e: mov rdx, qword ptr [rip + 0x1dd36f3]  ; ""
// asm:   0x1822ab835: mov rcx, rbx
// asm:   0x1822ab838: call 0x1821cb5d0  ; UI_SetNamePopup__Show()
// asm:   0x1822ab83d: jmp 0x1822ab7b6
// asm:   0x1822ab8e4: xor edx, edx
// asm:   0x1822ab8e6: mov rcx, r14
// asm:   0x1822ab8e9: call 0x1822abbd0  ; UI_MapEditorCustomAssetPopup__RebuildAssetRows()
// asm:   0x1822ab8ee: jmp 0x1822ab7b6
// asm:   0x1822ab92d: mov qword ptr [rsp + 0x20], r15
// asm:   0x1822ab932: xor r9d, r9d
// asm:   0x1822ab935: mov r8, rdi
// asm:   0x1822ab938: mov rdx, qword ptr [rip + 0x1e09559]  ; "Do you want to clear all custom asset bundles?"
// asm:   0x1822ab93f: mov rcx, rbx
// asm:   0x1822ab942: call 0x1821c1060  ; UI_ConfirmPopup__Show()
// asm:   0x1822ab947: jmp 0x1822ab7b6
// asm:   0x1822ab9bf: nop 
// asm:   0x1822aba70: mov rdx, qword ptr [rip + 0x1dcded9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose
// asm:   0x1822aba77: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822aba7c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822aba81: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822aba86: test rcx, rcx
// asm:   0x1822aba89: jne 0x1822abb20
// asm:   0x1822aba8f: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1822aba97: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x1822aba9c: mov rsi, qword ptr [rsp + 0xa8]
// asm:   0x1822abae3: xor edx, edx
// asm:   0x1822abae5: call 0x1822d8c60  ; UI_MapEditorTopPanel__Save()
// asm:   0x1822abaea: mov rax, qword ptr [r14]
// asm:   0x1822abaed: mov rdx, qword ptr [rax + 0x2a0]
// asm:   0x1822abaf4: mov rcx, r14
// asm:   0x1822abaf7: call qword ptr [rax + 0x298]  ; vtable slot 22
// asm:   0x1822abafd: jmp 0x1822ab7b6
// asm:   0x1822abb20: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

void UI_MapEditorCustomAssetPopup__OnButtonClick
               (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  uint uVar3;
  UI_SetNamePopup_o *pUVar4;
  Settings_StringSetting_o *pSVar5;
  UI_MessagePopup_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar6;
  Map_MapScript_o *pMVar7;
  Map_MapScriptCustomAssets_o *pMVar8;
  System_Collections_Generic_List_CustomAssetEntry__o *pSVar9;
  UI_ConfirmPopup_o *__this_01;
  System_String_array *pSVar10;
  UI_MapEditorTopPanel_o *__this_02;
  MethodInfo *pMVar11;
  bool bVar12;
  System_String_o *pSVar13;
  UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *routine;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_Collections_Generic_List_string__o *pSVar15;
  UI_BaseMenu_o *pUVar16;
  undefined1 local_48 [16];
  Map_CustomAssetEntry_o *local_38;
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  Map_CustomAssetEntry_o *local_20;
  
  if (Il2CppMethodInitialized_1843474f6 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Do you want to clear all custom asset bundles?");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Add asset bundle");
    il2cpp_codegen_initialize_runtime_metadata(&"Loading asset bundle...");
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmClear");
    il2cpp_codegen_initialize_runtime_metadata(&"Error: bundle name cannot be empty.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmAdd");
    Il2CppMethodInitialized_1843474f6 = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (Map_CustomAssetEntry_o *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar16 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar16 == (UI_BaseMenu_o *)0x0) {
    pUVar16 = (UI_BaseMenu_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar16->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar16->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar16);
    }
  }
  bVar12 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar12) {
    UI_MapEditorCustomAssetPopup__ApplyAssetRows(__this,(MethodInfo *)0x0);
    pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar15,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar9 = (__this->fields)._entries;
    if (pSVar9 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_T__o *)pSVar9,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomAssetEntry_GetEnumerator);
      local_30 = (undefined1  [8])local_48._0_8_;
      pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
      local_20 = local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
      while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_30,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_MoveNext
                                ), bVar12) {
        if (local_20 == (Map_CustomAssetEntry_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar13 = Map_CustomAssetEntry__Serialize(local_20,(MethodInfo *)0x0);
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (pSVar15->fields)._items;
        if (pSVar10 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar3 = (pSVar15->fields)._size;
        if (uVar3 < (uint)pSVar10->max_length) {
          (pSVar15->fields)._size = uVar3 + 1;
          if ((uint)pSVar10->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar10->m_Items[(int)uVar3] = pSVar13;
          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar3,pSVar13);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar15,(Il2CppObject *)pSVar13,
                     (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomAssetEntry_Dispose);
      pGVar6 = (__this->fields)._gameManager;
      if (((pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pMVar7 = (pGVar6->fields).MapScript, pMVar7 != (Map_MapScript_o *)0x0)) &&
         (pMVar8 = (pMVar7->fields).CustomAssets, pMVar8 != (Map_MapScriptCustomAssets_o *)0x0)) {
        (pMVar8->fields).CustomAssets = pSVar15;
        Il2CppCodeGenWriteBarrier(&(pMVar8->fields).CustomAssets,pSVar15);
        if ((pUVar16 != (UI_BaseMenu_o *)0x0) &&
           (__this_02 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar16 + 0xb8)),
           __this_02 != (UI_MapEditorTopPanel_o *)0x0)) {
          UI_MapEditorTopPanel__Save(__this_02,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
  }
  else {
    bVar12 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
    if (bVar12) {
      if (pUVar16 != (UI_BaseMenu_o *)0x0) {
        __this_01 = (pUVar16->fields).ConfirmPopup;
        pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_0,(MethodInfo *)0x0);
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_01,"Do you want to clear all custom asset bundles?",pUVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      bVar12 = System_String__op_Equality(name,"ConfirmClear",(MethodInfo *)0x0);
      if (bVar12) {
        pGVar6 = (__this->fields)._gameManager;
        if ((pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) &&
           (pMVar7 = (pGVar6->fields).MapScript, pMVar7 != (Map_MapScript_o *)0x0)) {
          pMVar8 = (pMVar7->fields).CustomAssets;
          pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)pSVar15,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          if (pMVar8 != (Map_MapScriptCustomAssets_o *)0x0) {
            (pMVar8->fields).CustomAssets = pSVar15;
            Il2CppCodeGenWriteBarrier(&(pMVar8->fields).CustomAssets,pSVar15);
            if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
            }
            ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
            pSVar9 = (__this->fields)._entries;
            if (pSVar9 != (System_Collections_Generic_List_CustomAssetEntry__o *)0x0) {
              piVar1 = &(pSVar9->fields)._version;
              *piVar1 = *piVar1 + 1;
              length = (pSVar9->fields)._size;
              (pSVar9->fields)._size = 0;
              if (0 < length) {
                System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,(MethodInfo *)0x0);
              }
              UI_MapEditorCustomAssetPopup__RebuildAssetRows(__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        bVar12 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
        if (bVar12) {
          if (pUVar16 != (UI_BaseMenu_o *)0x0) {
            pUVar4 = (pUVar16->fields).SetNamePopup;
            pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_1,
                       (MethodInfo *)0x0);
            if (pUVar4 != (UI_SetNamePopup_o *)0x0) {
              UI_SetNamePopup__Show
                        (pUVar4,"",pUVar14,"Add asset bundle",(System_String_o *)0x0,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          bVar12 = System_String__op_Equality(name,"ConfirmAdd",(MethodInfo *)0x0);
          if (!bVar12) {
            return;
          }
          if ((((pUVar16 != (UI_BaseMenu_o *)0x0) &&
               (pUVar4 = (pUVar16->fields).SetNamePopup, pUVar4 != (UI_SetNamePopup_o *)0x0)) &&
              (pSVar5 = (pUVar4->fields).NameSetting, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
             (pSVar13 = (pSVar5->fields)._value, pSVar13 != (System_String_o *)0x0)) {
            pSVar13 = System_String__Trim(pSVar13,(MethodInfo *)0x0);
            bVar12 = System_String__op_Equality
                               (pSVar13,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                (MethodInfo *)0x0);
            __this_00 = (pUVar16->fields).MessagePopup;
            if (__this_00 != (UI_MessagePopup_o *)0x0) {
              if (!bVar12) {
                UI_MessagePopup__Show(__this_00,"Loading asset bundle...",false,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_1843474f7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22);
                  Il2CppMethodInitialized_1843474f7 = '\x01';
                }
                routine = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22);
                System_Object___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                           (MethodInfo *)0x0);
                (routine->fields).__1__state = 0;
                (routine->fields).__4__this = __this;
                Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
                (routine->fields).bundle = pSVar13;
                Il2CppCodeGenWriteBarrier(&(routine->fields).bundle,pSVar13);
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                           (MethodInfo *)0x0);
                return;
              }
              UI_MessagePopup__Show(__this_00,"Error: bundle name cannot be empty.",true,(MethodInfo *)0x0);
              return;
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
// 0x1822ab3d0

System_Collections_IEnumerator_o *
UI_MapEditorCustomAssetPopup__LoadAssetBundle
          (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *bundle,MethodInfo *method)

{
  UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__22_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22);
    Il2CppMethodInitialized_1843474f7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).bundle = bundle;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).bundle,bundle);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MapEditorCustomAssetPopup$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup___ctor (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac7b0

void UI_MapEditorCustomAssetPopup___ctor(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  System_Collections_Generic_List_CustomAssetEntry__o *__this_02;
  Settings_StringSetting_o *__this_03;
  
  if (Il2CppMethodInitialized_1843474f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomAssetEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_1843474f8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._elements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._elements,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._settings = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._settings,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomAssetEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomAssetEntry_ctor);
  (__this->fields)._entries = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entries,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(__this_03,(MethodInfo *)0x0);
  (__this->fields)._platform = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._platform,__this_03);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._platformKey = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._platformKey,value);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$.cctor
// il2cpp: void UI_MapEditorCustomAssetPopup___cctor (const MethodInfo* method);
// 0x1822ac690

void UI_MapEditorCustomAssetPopup___cctor(MethodInfo *method)

{
  System_String_o *value;
  Il2CppObject *first;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *value_00;
  
  if (Il2CppMethodInitialized_1843474f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorCustomAssetPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_1843474f9 = '\x01';
  }
  first = SZArrayNew(TypeInfo_string_array,1);
  value = "Default";
  if (first != (Il2CppObject *)0x0) {
    if (*(int *)&first[1].monitor != 0) {
      first[2].klass = (Il2CppClass *)"Default";
      Il2CppCodeGenWriteBarrier(&first[2].klass,value);
      if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
      }
      source = System_Linq_Enumerable__Concat_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                          (System_Collections_Generic_IEnumerable_TSource__o *)
                          TypeInfo_Map_CustomAssetEntry->static_fields->PlatformNames,
                          (MethodInfo_6B9850 *)MethodInfo_System_Linq_Enumerable_Concat_string);
      value_00 = (System_String_array *)
                 System_Linq_Enumerable__ToArray_object_
                           (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions = value_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_UI_MapEditorCustomAssetPopup->static_fields->PlatformOptions,value_00);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__15_0
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__15_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac5d0

void UI_MapEditorCustomAssetPopup___Setup_b__15_0(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    Il2CppMethodInitialized_1843474fa = '\x01';
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Add",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__15_1
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__15_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac610

void UI_MapEditorCustomAssetPopup___Setup_b__15_1(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_1843474fb = '\x01';
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Clear",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__15_2
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__15_2 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac650

void UI_MapEditorCustomAssetPopup___Setup_b__15_2(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843474fc = '\x01';
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__21_0
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac550

void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_0
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmClear");
    Il2CppMethodInitialized_1843474fd = '\x01';
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"ConfirmClear",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__21_1
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x1822ac590

void UI_MapEditorCustomAssetPopup___OnButtonClick_b__21_1
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ConfirmAdd");
    Il2CppMethodInitialized_1843474fe = '\x01';
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"ConfirmAdd",(MethodInfo *)0x0);
  return;
}


