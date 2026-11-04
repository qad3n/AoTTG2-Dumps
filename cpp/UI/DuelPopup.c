// Type: UI.DuelPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DuelPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelPopup.cs
// --------------------------------

// UI.DuelPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_DuelPopup___c__DisplayClass15_0___ctor (UI_DuelPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_DuelPopup___c__DisplayClass15_0___ctor(UI_DuelPopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_DuelPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_DuelPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x182283300

void
UI_DuelPopup___c__DisplayClass15_0___SetupTopButtons_b__0(UI_DuelPopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  UI_SettingsPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SettingsPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.DuelPopup$$get_Title
// il2cpp: System_String_o* UI_DuelPopup__get_Title (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_DuelPopup__get_Title(UI_DuelPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.DuelPopup$$get_Width
// il2cpp: float UI_DuelPopup__get_Width (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x18210fa90

float
UI_DuelPopup__get_Width(UI_DuelPopup_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// UI.DuelPopup$$get_Height
// il2cpp: float UI_DuelPopup__get_Height (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x1821bb440

float
UI_DuelPopup__get_Height(UI_DuelPopup_o* __this, MethodInfo* method)

{
  return 800.0;
}


// UI.DuelPopup$$get_CategoryPanel
// il2cpp: bool UI_DuelPopup__get_CategoryPanel (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_DuelPopup__get_CategoryPanel(UI_DuelPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.DuelPopup$$get_CategoryButtons
// il2cpp: bool UI_DuelPopup__get_CategoryButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_DuelPopup__get_CategoryButtons(UI_DuelPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.DuelPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_DuelPopup__get_DefaultCategoryPanel (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x182279170

System_String_o * UI_DuelPopup__get_DefaultCategoryPanel(UI_DuelPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    Il2CppMethodInitialized_1843473ef = '\x01';
  }
  return "Play";
}


// UI.DuelPopup$$Setup
// il2cpp: void UI_DuelPopup__Setup (UI_DuelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182278eb0

void UI_DuelPopup__Setup(UI_DuelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843473f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_DuelPopup_SetupBottomButtons_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473f2 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_DuelPopup_SetupBottomButtons_b__18_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$Show
// il2cpp: void UI_DuelPopup__Show (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x182278ff0

void UI_DuelPopup__Show(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupTopButtons
// il2cpp: void UI_DuelPopup__SetupTopButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x182278c10

void UI_DuelPopup__SetupTopButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar2;
  UI_DuelPopup___c__DisplayClass15_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843473f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_DuelPopup_c__DisplayClass15_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DuelPopup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Spectate");
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    Il2CppMethodInitialized_1843473f0 = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "Play";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"Play";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
      pSVar1 = "Spectate";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Spectate";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar1);
        uVar3 = 0;
        while( true ) {
          if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
            UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
            return;
          }
          object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_DuelPopup_c__DisplayClass15_0);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
          if (object == (UI_DuelPopup___c__DisplayClass15_0_o *)0x0) break;
          (object->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
          if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_182278ea1;
          value = (&pIVar2[2].klass)[(int)uVar3];
          (object->fields).buttonName = (System_String_o *)value;
          Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
          parent = (__this->fields).TopBar;
          pSVar1 = (object->fields).buttonName;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_DuelPopup_c__DisplayClass15_0_SetupTopButtons_b__0,
                     (MethodInfo *)0x0);
          __this_03 = UI_ElementFactory__CreateCategoryButton
                                (parent,__this_01,pSVar1,__this_02,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
          pSVar1 = (object->fields).buttonName;
          value_00 = UnityEngine_GameObject__GetComponent_object_
                               (__this_03,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value_00,
                     (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add)
          ;
          uVar3 = uVar3 + 1;
        }
        goto label_182278e9b;
      }
    }
label_182278ea1:
    ThrowIndexOutOfRangeException();
  }
label_182278e9b:
  ThrowNullReferenceException();
}


// UI.DuelPopup$$RegisterCategoryPanels
// il2cpp: void UI_DuelPopup__RegisterCategoryPanels (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x1822789e0

void UI_DuelPopup__RegisterCategoryPanels(UI_DuelPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843473f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_DuelPlayPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_DuelSpectatePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Spectate");
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    Il2CppMethodInitialized_1843473f1 = '\x01';
  }
  handle = TypeRef_UI_DuelPlayPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Play",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_DuelSpectatePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Spectate",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.DuelPopup$$SetupPopups
// il2cpp: void UI_DuelPopup__SetupPopups (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_DuelPopup__SetupPopups(UI_DuelPopup_o* __this, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupBottomButtons
// il2cpp: void UI_DuelPopup__SetupBottomButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x182278ad0

void UI_DuelPopup__SetupBottomButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843473f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_DuelPopup_SetupBottomButtons_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473f2 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_DuelPopup_SetupBottomButtons_b__18_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$OnBottomBarButtonClick
// il2cpp: void UI_DuelPopup__OnBottomBarButtonClick (UI_DuelPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822788f0

void UI_DuelPopup__OnBottomBarButtonClick(UI_DuelPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MainMenu_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843473f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473f3 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (UI_MainMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 == (UI_MainMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_MainMenu->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MainMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_MainMenu);
    }
    UI_MainMenu__ShowMultiplayerMapPopup(__this_00,(MethodInfo *)0x0);
  }
  return;
}


// UI.DuelPopup$$.ctor
// il2cpp: void UI_DuelPopup___ctor (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x182279110

void UI_DuelPopup___ctor(UI_DuelPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DuelPopup");
    Il2CppMethodInitialized_1843473f4 = '\x01';
  }
  (__this->fields).LocaleCategory = "DuelPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"DuelPopup");
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$<SetupBottomButtons>b__18_0
// il2cpp: void UI_DuelPopup___SetupBottomButtons_b__18_0 (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x182279000

void UI_DuelPopup___SetupBottomButtons_b__18_0(UI_DuelPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_MainMenu_o *__this_00;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843473f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473f5 = '\x01';
  }
  a = "Back";
  if (Il2CppMethodInitialized_1843473f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473f3 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (UI_MainMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 == (UI_MainMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_MainMenu->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MainMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_MainMenu);
    }
    UI_MainMenu__ShowMultiplayerMapPopup(__this_00,(MethodInfo *)0x0);
  }
  return;
}


