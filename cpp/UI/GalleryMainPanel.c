// Type: UI.GalleryMainPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GalleryMainPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMainPanel.cs
// --------------------------------

// UI.GalleryMainPanel$$get_Title
// il2cpp: System_String_o* UI_GalleryMainPanel__get_Title (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x182236e30

System_String_o * UI_GalleryMainPanel__get_Title(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"GalleryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"ToolsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347162 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","GalleryButton","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.GalleryMainPanel$$get_Width
// il2cpp: float UI_GalleryMainPanel__get_Width (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x182236ed0

float
UI_GalleryMainPanel__get_Width(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 1960.0;
}


// UI.GalleryMainPanel$$get_Height
// il2cpp: float UI_GalleryMainPanel__get_Height (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x1821c11c0

float
UI_GalleryMainPanel__get_Height(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 60.0;
}


// UI.GalleryMainPanel$$get_TopBarHeight
// il2cpp: float UI_GalleryMainPanel__get_TopBarHeight (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_GalleryMainPanel__get_TopBarHeight(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_BottomBarHeight
// il2cpp: float UI_GalleryMainPanel__get_BottomBarHeight (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_GalleryMainPanel__get_BottomBarHeight(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_VerticalSpacing
// il2cpp: float UI_GalleryMainPanel__get_VerticalSpacing (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_GalleryMainPanel__get_VerticalSpacing(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_GalleryMainPanel__get_HorizontalPadding (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x180846f60

int32_t
UI_GalleryMainPanel__get_HorizontalPadding(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 0x28;
}


// UI.GalleryMainPanel$$get_VerticalPadding
// il2cpp: int32_t UI_GalleryMainPanel__get_VerticalPadding (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_GalleryMainPanel__get_VerticalPadding(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.GalleryMainPanel$$Setup
// il2cpp: void UI_GalleryMainPanel__Setup (UI_GalleryMainPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182236900

void UI_GalleryMainPanel__Setup(UI_GalleryMainPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_Text_o *value;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UI_GalleryMenu_o *value_00;
  
  if (Il2CppMethodInitialized_184347163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GalleryMainPanel_Setup_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GalleryMainPanel_Setup_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GalleryMainPanel_Setup_b__19_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_GalleryMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347163 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value_00 = (UI_GalleryMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value_00 == (UI_GalleryMenu_o *)0x0) {
    (__this->fields)._menu = (UI_GalleryMenu_o *)0x0;
    value_00 = (UI_GalleryMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_GalleryMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_GalleryMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    (__this->fields)._menu = value_00;
    bVar1 = (TypeInfo_UI_GalleryMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_GalleryMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value_00);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    parent_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateDefaultLabel
                       (parent_00,__this_00,"",0,4,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__GetComponent_object_
                        (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      (__this->fields)._indexLabel = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._indexLabel,value);
      UI_GalleryMainPanel__UpdateIndexLabel(__this,(MethodInfo *)0x0);
      pSVar2 = UI_UIManager__GetLocaleCommon("Previous",(MethodInfo *)0x0);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_GalleryMainPanel_Setup_b__19_0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(parent_00,__this_00,pSVar2,0.0,0.0,pUVar4,(MethodInfo *)0x0);
      pSVar2 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_GalleryMainPanel_Setup_b__19_1,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(parent_00,__this_00,pSVar2,0.0,0.0,pUVar4,(MethodInfo *)0x0);
      pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_GalleryMainPanel_Setup_b__19_2,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(parent_00,__this_00,pSVar2,0.0,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.GalleryMainPanel$$OnButtonClick
// il2cpp: void UI_GalleryMainPanel__OnButtonClick (UI_GalleryMainPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822367f0

void UI_GalleryMainPanel__OnButtonClick
               (UI_GalleryMainPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  UI_GalleryMenu_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    Il2CppMethodInitialized_184347164 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar3) {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  bVar3 = System_String__op_Equality(name,"Previous",(MethodInfo *)0x0);
  if (bVar3) {
    if ((__this->fields)._index < 1) {
      return;
    }
    piVar1 = &(__this->fields)._index;
    *piVar1 = *piVar1 + -1;
  }
  else {
    bVar3 = System_String__op_Equality(name,"Next",(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 == (UI_GalleryMenu_o *)0x0) goto label_1822368f2;
    if ((pUVar2->fields).TotalBackgroundCount + -1 <= (__this->fields)._index) {
      return;
    }
    piVar1 = &(__this->fields)._index;
    *piVar1 = *piVar1 + 1;
  }
  UI_GalleryMainPanel__UpdateIndexLabel(__this,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
    UI_GalleryMenu__LoadGallery(pUVar2,(__this->fields)._index,(MethodInfo *)0x0);
    return;
  }
label_1822368f2:
  ThrowNullReferenceException();
}


// UI.GalleryMainPanel$$UpdateIndexLabel
// il2cpp: void UI_GalleryMainPanel__UpdateIndexLabel (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x182236d70

void UI_GalleryMainPanel__UpdateIndexLabel(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UI_GalleryMenu_o *pUVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  int local_res8 [2];
  
  if (Il2CppMethodInitialized_184347165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184347165 = '\x01';
  }
  pUVar1 = (__this->fields)._indexLabel;
  local_res8[0] = (__this->fields)._index + 1;
  pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
    str2 = System_Int32__ToString(&(pUVar2->fields).TotalBackgroundCount,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969b70(pSVar3,"/",str2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.GalleryMainPanel$$.ctor
// il2cpp: void UI_GalleryMainPanel___ctor (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_GalleryMainPanel___ctor(UI_GalleryMainPanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_0
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_0 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x182236cb0

void UI_GalleryMainPanel___Setup_b__19_0(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Previous");
    Il2CppMethodInitialized_184347166 = '\x01';
  }
  UI_GalleryMainPanel__OnButtonClick(__this,"Previous",(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_1
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_1 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x182236cf0

void UI_GalleryMainPanel___Setup_b__19_1(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    Il2CppMethodInitialized_184347167 = '\x01';
  }
  UI_GalleryMainPanel__OnButtonClick(__this,"Next",(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_2
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_2 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x182236d30

void UI_GalleryMainPanel___Setup_b__19_2(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347168 = '\x01';
  }
  UI_GalleryMainPanel__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


