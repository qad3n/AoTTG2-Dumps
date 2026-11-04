// Type: UI.AboutPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/AboutPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutPopup.cs
// --------------------------------

// UI.AboutPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_AboutPopup___c__DisplayClass15_0___ctor (UI_AboutPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_AboutPopup___c__DisplayClass15_0___ctor(UI_AboutPopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_AboutPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_AboutPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x182283300

void
UI_AboutPopup___c__DisplayClass15_0___SetupTopButtons_b__0(UI_AboutPopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

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


// UI.AboutPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_AboutPopup___c__DisplayClass17_0___ctor (UI_AboutPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_AboutPopup___c__DisplayClass17_0___ctor(UI_AboutPopup___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_AboutPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_AboutPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x182283330

void UI_AboutPopup___c__DisplayClass17_0___SetupBottomButtons_b__0
               (UI_AboutPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_AboutPopup_o *pUVar1;
  System_String_o *a;
  bool bVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_AboutPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (__this->fields).buttonName;
  if (Il2CppMethodInitialized_1843473b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473b2 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if (bVar2) {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.AboutPopup$$get_Title
// il2cpp: System_String_o* UI_AboutPopup__get_Title (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_AboutPopup__get_Title(UI_AboutPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.AboutPopup$$get_Width
// il2cpp: float UI_AboutPopup__get_Width (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1821bb440

float
UI_AboutPopup__get_Width(UI_AboutPopup_o* __this, MethodInfo* method)

{
  return 800.0;
}


// UI.AboutPopup$$get_Height
// il2cpp: float UI_AboutPopup__get_Height (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1821500a0

float
UI_AboutPopup__get_Height(UI_AboutPopup_o* __this, MethodInfo* method)

{
  return 600.0;
}


// UI.AboutPopup$$get_CategoryPanel
// il2cpp: bool UI_AboutPopup__get_CategoryPanel (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_AboutPopup__get_CategoryPanel(UI_AboutPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.AboutPopup$$get_CategoryButtons
// il2cpp: bool UI_AboutPopup__get_CategoryButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_AboutPopup__get_CategoryButtons(UI_AboutPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.AboutPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_AboutPopup__get_DefaultCategoryPanel (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x18226ee50

System_String_o * UI_AboutPopup__get_DefaultCategoryPanel(UI_AboutPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    Il2CppMethodInitialized_1843473ae = '\x01';
  }
  return "Help";
}


// UI.AboutPopup$$get_UseSound
// il2cpp: bool UI_AboutPopup__get_UseSound (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_AboutPopup__get_UseSound(UI_AboutPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.AboutPopup$$Setup
// il2cpp: void UI_AboutPopup__Setup (UI_AboutPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18226ee30

void UI_AboutPopup__Setup(UI_AboutPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_AboutPopup__SetupBottomButtons(__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup$$SetupTopButtons
// il2cpp: void UI_AboutPopup__SetupTopButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x18226eb70

void UI_AboutPopup__SetupTopButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar2;
  UI_AboutPopup___c__DisplayClass15_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843473af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AboutPopup_c__DisplayClass15_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AboutPopup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"AboutPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843473af = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,1);
  pSVar1 = "Help";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor == 0) {
label_18226ee26:
      ThrowIndexOutOfRangeException();
    }
    pIVar2[2].klass = (Il2CppClass *)"Help";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
    uVar3 = 0;
    while( true ) {
      if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_AboutPopup_c__DisplayClass15_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_AboutPopup___c__DisplayClass15_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_18226ee26;
      value = (&pIVar2[2].klass)[(int)uVar3];
      (object->fields).buttonName = (System_String_o *)value;
      Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
      pSVar1 = (object->fields).buttonName;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = UI_UIManager__GetLocale
                         ("MainMenu","AboutPopup",pSVar1,"",
                          "",(MethodInfo *)0x0);
      parent = (__this->fields).TopBar;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_AboutPopup_c__DisplayClass15_0_SetupTopButtons_b__0,(MethodInfo *)0x0
                );
      __this_03 = UI_ElementFactory__CreateCategoryButton(parent,__this_01,pSVar1,__this_02,(MethodInfo *)0x0)
      ;
      if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
      pSVar1 = (object->fields).buttonName;
      value_00 = UnityEngine_GameObject__GetComponent_object_
                           (__this_03,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value_00,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.AboutPopup$$RegisterCategoryPanels
// il2cpp: void UI_AboutPopup__RegisterCategoryPanels (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x18226e8b0

void UI_AboutPopup__RegisterCategoryPanels(UI_AboutPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppType *handle;
  System_Type_o *value;
  
  if (Il2CppMethodInitialized_1843473b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_AboutHelpPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    Il2CppMethodInitialized_1843473b0 = '\x01';
  }
  handle = TypeRef_UI_AboutHelpPanel;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_00,(Il2CppObject *)"Help",(Il2CppObject *)value,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    return;
  }
  ThrowNullReferenceException();
}


// UI.AboutPopup$$SetupBottomButtons
// il2cpp: void UI_AboutPopup__SetupBottomButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x18226e950

void UI_AboutPopup__SetupBottomButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UI_AboutPopup___c__DisplayClass17_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843473b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AboutPopup_c__DisplayClass17_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AboutPopup_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473b1 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,1);
  pSVar1 = "Back";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor == 0) {
label_18226eb62:
      ThrowIndexOutOfRangeException();
    }
    pIVar2[2].klass = (Il2CppClass *)"Back";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
    uVar3 = 0;
    while( true ) {
      if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
        return;
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_AboutPopup_c__DisplayClass17_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_AboutPopup___c__DisplayClass17_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_18226eb62;
      value = (&pIVar2[2].klass)[(int)uVar3];
      (object->fields).buttonName = (System_String_o *)value;
      Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
      parent = (__this->fields).BottomBar;
      pSVar1 = (object->fields).buttonName;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_AboutPopup_c__DisplayClass17_0_SetupBottomButtons_b__0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.AboutPopup$$OnBottomBarButtonClick
// il2cpp: void UI_AboutPopup__OnBottomBarButtonClick (UI_AboutPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18226e850

void UI_AboutPopup__OnBottomBarButtonClick(UI_AboutPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843473b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843473b2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.AboutPopup$$.ctor
// il2cpp: void UI_AboutPopup___ctor (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_AboutPopup___ctor(UI_AboutPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


