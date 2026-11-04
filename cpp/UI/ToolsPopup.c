// Type: UI.ToolsPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ToolsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ToolsPopup.cs
// --------------------------------

// UI.ToolsPopup$$get_Title
// il2cpp: System_String_o* UI_ToolsPopup__get_Title (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b7b0

System_String_o * UI_ToolsPopup__get_Title(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434748e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"ToolsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434748e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ToolsPopup$$get_Width
// il2cpp: float UI_ToolsPopup__get_Width (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x1821dda70

float
UI_ToolsPopup__get_Width(UI_ToolsPopup_o* __this, MethodInfo* method)

{
  return 280.0;
}


// UI.ToolsPopup$$get_Height
// il2cpp: float UI_ToolsPopup__get_Height (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x1821d9190

float UI_ToolsPopup__get_Height(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 425.0;
}


// UI.ToolsPopup$$get_VerticalSpacing
// il2cpp: float UI_ToolsPopup__get_VerticalSpacing (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_ToolsPopup__get_VerticalSpacing(UI_ToolsPopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.ToolsPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ToolsPopup__get_VerticalPadding (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_ToolsPopup__get_VerticalPadding(UI_ToolsPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.ToolsPopup$$get_UseSound
// il2cpp: bool UI_ToolsPopup__get_UseSound (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_ToolsPopup__get_UseSound(UI_ToolsPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.ToolsPopup$$Setup
// il2cpp: void UI_ToolsPopup__Setup (UI_ToolsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18229b210

void UI_ToolsPopup__Setup(UI_ToolsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434748f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToolsPopup_Setup_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToolsPopup_Setup_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToolsPopup_Setup_b__12_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToolsPopup_Setup_b__12_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToolsPopup_Setup_b__12_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToolsPopup_Setup_b__12_5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"GalleryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotViewerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditorButton");
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedConfigurationButton");
    il2cpp_codegen_initialize_runtime_metadata(&"ToolsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434748f = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar4 = "ToolsPopup";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ToolsPopup_Setup_b__12_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"MapEditorButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ToolsPopup_Setup_b__12_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"CharacterEditorButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ToolsPopup_Setup_b__12_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"SnapshotViewerButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ToolsPopup_Setup_b__12_3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"GalleryButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ToolsPopup_Setup_b__12_4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     (category,pSVar4,"AdvancedConfigurationButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ToolsPopup_Setup_b__12_5,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,220.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$OnButtonClick
// il2cpp: void UI_ToolsPopup__OnButtonClick (UI_ToolsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18229afe0

void UI_ToolsPopup__OnButtonClick(UI_ToolsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_Vector3Popup_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotViewer");
    il2cpp_codegen_initialize_runtime_metadata(&"Gallery");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedConfiguration");
    Il2CppMethodInitialized_184347490 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
  if (bVar4) {
    ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
  }
  else {
    bVar4 = System_String__op_Equality(name,"CharacterEditor",(MethodInfo *)0x0);
    if (bVar4) {
      ApplicationManagers_SceneLoader__LoadScene(4,(MethodInfo *)0x0);
      return;
    }
    bVar4 = System_String__op_Equality(name,"SnapshotViewer",(MethodInfo *)0x0);
    if (bVar4) {
      ApplicationManagers_SceneLoader__LoadScene(5,(MethodInfo *)0x0);
      return;
    }
    bVar4 = System_String__op_Equality(name,"Gallery",(MethodInfo *)0x0);
    if (bVar4) {
      ApplicationManagers_SceneLoader__LoadScene(6,(MethodInfo *)0x0);
      return;
    }
    bVar4 = System_String__op_Equality(name,"AdvancedConfiguration",(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_MainMenu->_2).typeHierarchyDepth;
        if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MainMenu)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
        }
        pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xf8));
        if (pUVar3 != (UI_Vector3Popup_o *)0x0) {
          (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
          return;
        }
      }
      ThrowNullReferenceException();
    }
    bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if (bVar4) {
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  return;
}


// UI.ToolsPopup$$.ctor
// il2cpp: void UI_ToolsPopup___ctor (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void UI_ToolsPopup___ctor(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_0
// il2cpp: void UI_ToolsPopup___Setup_b__12_0 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b630

void UI_ToolsPopup___Setup_b__12_0(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347491 = '\x01';
  }
  UI_ToolsPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_1
// il2cpp: void UI_ToolsPopup___Setup_b__12_1 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b670

void UI_ToolsPopup___Setup_b__12_1(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    Il2CppMethodInitialized_184347492 = '\x01';
  }
  UI_ToolsPopup__OnButtonClick(__this,"MapEditor",(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_2
// il2cpp: void UI_ToolsPopup___Setup_b__12_2 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b6b0

void UI_ToolsPopup___Setup_b__12_2(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347493 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    Il2CppMethodInitialized_184347493 = '\x01';
  }
  UI_ToolsPopup__OnButtonClick(__this,"CharacterEditor",(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_3
// il2cpp: void UI_ToolsPopup___Setup_b__12_3 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b6f0

void UI_ToolsPopup___Setup_b__12_3(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347494 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotViewer");
    Il2CppMethodInitialized_184347494 = '\x01';
  }
  UI_ToolsPopup__OnButtonClick(__this,"SnapshotViewer",(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_4
// il2cpp: void UI_ToolsPopup___Setup_b__12_4 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b730

void UI_ToolsPopup___Setup_b__12_4(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347495 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gallery");
    Il2CppMethodInitialized_184347495 = '\x01';
  }
  UI_ToolsPopup__OnButtonClick(__this,"Gallery",(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_5
// il2cpp: void UI_ToolsPopup___Setup_b__12_5 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x18229b770

void UI_ToolsPopup___Setup_b__12_5(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedConfiguration");
    Il2CppMethodInitialized_184347496 = '\x01';
  }
  UI_ToolsPopup__OnButtonClick(__this,"AdvancedConfiguration",(MethodInfo *)0x0);
  return;
}


