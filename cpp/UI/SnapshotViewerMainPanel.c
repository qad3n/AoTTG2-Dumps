// Type: UI.SnapshotViewerMainPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotViewerMainPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMainPanel.cs
// --------------------------------

// UI.SnapshotViewerMainPanel$$get_Title
// il2cpp: System_String_o* UI_SnapshotViewerMainPanel__get_Title (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd3b0

System_String_o *
UI_SnapshotViewerMainPanel__get_Title(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347651 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotViewerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"ToolsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347651 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","SnapshotViewerButton","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.SnapshotViewerMainPanel$$get_Width
// il2cpp: float UI_SnapshotViewerMainPanel__get_Width (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1821dda70

float UI_SnapshotViewerMainPanel__get_Width(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.SnapshotViewerMainPanel$$get_Height
// il2cpp: float UI_SnapshotViewerMainPanel__get_Height (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd3a0

float UI_SnapshotViewerMainPanel__get_Height(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 270.0;
}


// UI.SnapshotViewerMainPanel$$get_VerticalSpacing
// il2cpp: float UI_SnapshotViewerMainPanel__get_VerticalSpacing (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_SnapshotViewerMainPanel__get_VerticalSpacing(UI_SnapshotViewerMainPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.SnapshotViewerMainPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_SnapshotViewerMainPanel__get_HorizontalPadding (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_SnapshotViewerMainPanel__get_HorizontalPadding(UI_SnapshotViewerMainPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.SnapshotViewerMainPanel$$get_VerticalPadding
// il2cpp: int32_t UI_SnapshotViewerMainPanel__get_VerticalPadding (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_SnapshotViewerMainPanel__get_VerticalPadding(UI_SnapshotViewerMainPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.SnapshotViewerMainPanel$$Setup
// il2cpp: void UI_SnapshotViewerMainPanel__Setup (UI_SnapshotViewerMainPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822fcce0

void UI_SnapshotViewerMainPanel__Setup
               (UI_SnapshotViewerMainPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *value;
  UnityEngine_Transform_o *pUVar5;
  UI_SnapshotViewerMenu_o *value_00;
  
  if (Il2CppMethodInitialized_184347652 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347652 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value_00 = (UI_SnapshotViewerMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value_00 == (UI_SnapshotViewerMenu_o *)0x0) {
    (__this->fields)._menu = (UI_SnapshotViewerMenu_o *)0x0;
    value_00 = (UI_SnapshotViewerMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_SnapshotViewerMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    (__this->fields)._menu = value_00;
    bVar1 = (TypeInfo_UI_SnapshotViewerMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value_00);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar5,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponent_object_
                      (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._indexLabel = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._indexLabel,value);
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,4,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      pSVar2 = UI_UIManager__GetLocaleCommon("Previous",(MethodInfo *)0x0);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_1,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_00,pSVar2,0.0,0.0,pUVar3,(MethodInfo *)0x0);
      pSVar2 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_2,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_00,pSVar2,0.0,0.0,pUVar3,(MethodInfo *)0x0);
      pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_SnapshotViewerMainPanel_Setup_b__15_3,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_00,pSVar2,0.0,0.0,pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMainPanel$$OnButtonClick
// il2cpp: void UI_SnapshotViewerMainPanel__OnButtonClick (UI_SnapshotViewerMainPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822fcb10

void UI_SnapshotViewerMainPanel__OnButtonClick
               (UI_SnapshotViewerMainPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  UI_SnapshotViewerMenu_o *pUVar3;
  bool bVar4;
  int iVar5;
  UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *routine;
  
  if (Il2CppMethodInitialized_184347653 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347653 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar4) {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  bVar4 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 != (UI_SnapshotViewerMenu_o *)0x0) {
      if (Il2CppMethodInitialized_18434765a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10);
        Il2CppMethodInitialized_18434765a = '\x01';
      }
      routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = pUVar3;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pUVar3);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)pUVar3,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar4 = System_String__op_Equality(name,"Previous",(MethodInfo *)0x0);
    if (bVar4) {
      if ((__this->fields)._index < 1) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + -1;
    }
    else {
      bVar4 = System_String__op_Equality(name,"Next",(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      iVar2 = (__this->fields)._index;
      if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
      }
      iVar5 = il2cpp_runtime_helper_1822eaa40(0);
      if (iVar5 + -1 <= iVar2) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + 1;
    }
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 != (UI_SnapshotViewerMenu_o *)0x0) {
      UI_SnapshotViewerMenu__LoadSnapshot(pUVar3,(__this->fields)._index,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMainPanel$$UpdateIndexLabel
// il2cpp: void UI_SnapshotViewerMainPanel__UpdateIndexLabel (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd200

void UI_SnapshotViewerMainPanel__UpdateIndexLabel(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347654 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"0/0");
    Il2CppMethodInitialized_184347654 = '\x01';
  }
  local_res18[0] = 0;
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  if (Il2CppMethodInitialized_1843476bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843476bf = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pUVar1 = (__this->fields)._indexLabel;
  if (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId == 0) {
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,"0/0",(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  else {
    local_res18[0] = (__this->fields)._index + 1;
    pSVar2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    if (Il2CppMethodInitialized_1843476bf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
      Il2CppMethodInitialized_1843476bf = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    local_res18[0] = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId;
    str2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969b70(pSVar2,"/",str2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMainPanel$$.ctor
// il2cpp: void UI_SnapshotViewerMainPanel___ctor (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void UI_SnapshotViewerMainPanel___ctor(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_0
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_0 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd100

void UI_SnapshotViewerMainPanel___Setup_b__15_0(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347655 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347655 = '\x01';
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_1
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_1 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd140

void UI_SnapshotViewerMainPanel___Setup_b__15_1(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347656 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Previous");
    Il2CppMethodInitialized_184347656 = '\x01';
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Previous",(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_2
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_2 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd180

void UI_SnapshotViewerMainPanel___Setup_b__15_2(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    Il2CppMethodInitialized_184347657 = '\x01';
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Next",(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_3
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_3 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x1822fd1c0

void UI_SnapshotViewerMainPanel___Setup_b__15_3(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347658 = '\x01';
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


