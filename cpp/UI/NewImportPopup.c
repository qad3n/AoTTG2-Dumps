// Type: UI.NewImportPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/NewImportPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/NewImportPopup.cs
// --------------------------------

// UI.NewImportPopup$$get_Title
// il2cpp: System_String_o* UI_NewImportPopup__get_Title (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1821c6360

System_String_o * UI_NewImportPopup__get_Title(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"New");
    Il2CppMethodInitialized_184346f2e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("New",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.NewImportPopup$$get_Width
// il2cpp: float UI_NewImportPopup__get_Width (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_NewImportPopup__get_Width(UI_NewImportPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.NewImportPopup$$get_Height
// il2cpp: float UI_NewImportPopup__get_Height (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1821c6350

float UI_NewImportPopup__get_Height(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 615.0;
}


// UI.NewImportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_NewImportPopup__get_VerticalPadding (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_NewImportPopup__get_VerticalPadding(UI_NewImportPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.NewImportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_NewImportPopup__get_HorizontalPadding (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_NewImportPopup__get_HorizontalPadding(UI_NewImportPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.NewImportPopup$$get_VerticalSpacing
// il2cpp: float UI_NewImportPopup__get_VerticalSpacing (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_NewImportPopup__get_VerticalSpacing(UI_NewImportPopup_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.NewImportPopup$$get_DefaultInputHeight
// il2cpp: float UI_NewImportPopup__get_DefaultInputHeight (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1821c6340

float
UI_NewImportPopup__get_DefaultInputHeight(UI_NewImportPopup_o* __this, MethodInfo* method)

{
  return 380.0;
}


// UI.NewImportPopup$$Setup
// il2cpp: void UI_NewImportPopup__Setup (UI_NewImportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c5ca0

void UI_NewImportPopup__Setup(UI_NewImportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_InputSettingElement_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Color_Fields local_58 [2];
  
  if (Il2CppMethodInitialized_184346f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_NewImportPopup_Setup_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_NewImportPopup_Setup_b__21_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f2f = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_NewImportPopup_Setup_b__21_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_NewImportPopup_Setup_b__21_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  setting = (__this->fields).FileName;
  pSVar2 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateInputSetting
                     (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,pSVar2,"",460.0,
                      40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._nameElement = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._nameElement,pUVar5);
    pUVar4 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields).ImportSetting,
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"",460.0
                        ,380.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar4,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
      (__this->fields)._importElement = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._importElement,pUVar5);
      pUVar4 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        (__this->fields)._errorText = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._errorText,pUVar6);
        pUVar6 = (__this->fields)._errorText;
        if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
          local_58[0].r = 1.0;
          local_58[0].g = 0.0;
          local_58[0].b = 0.0;
          local_58[0].a = 1.0;
          (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                    (pUVar6,(UnityEngine_Color_o *)local_58,(pUVar6->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.NewImportPopup$$Show
// il2cpp: void UI_NewImportPopup__Show (UI_NewImportPopup_o* __this, UnityEngine_Events_UnityAction_o* onSave, bool manualHide, const MethodInfo* method);
// 0x1821c60b0

void UI_NewImportPopup__Show
               (UI_NewImportPopup_o *__this,UnityEngine_Events_UnityAction_o *onSave,bool manualHide,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_UI_Text_o *__this_00;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184346f30 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._onSave = onSave;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave,onSave);
    pSVar1 = (__this->fields).ImportSetting;
    (__this->fields)._manualHide = manualHide;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar1 = (__this->fields).FileName;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,
                   (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        __this_00 = (__this->fields)._errorText;
        if ((__this_00 != (UnityEngine_UI_Text_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                    (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.NewImportPopup$$ShowError
// il2cpp: void UI_NewImportPopup__ShowError (UI_NewImportPopup_o* __this, System_String_o* error, const MethodInfo* method);
// 0x1821c6050

void UI_NewImportPopup__ShowError(UI_NewImportPopup_o *__this,System_String_o *error,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pUVar1 = (__this->fields)._errorText;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,error,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._errorText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.NewImportPopup$$OnButtonClick
// il2cpp: void UI_NewImportPopup__OnButtonClick (UI_NewImportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c5bf0

void UI_NewImportPopup__OnButtonClick(UI_NewImportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f31 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((__this->fields)._manualHide != false) {
      return;
    }
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.NewImportPopup$$.ctor
// il2cpp: void UI_NewImportPopup___ctor (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1821c6260

void UI_NewImportPopup___ctor(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184346f32 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ImportSetting = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ImportSetting,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FileName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FileName,pSVar2);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.NewImportPopup$$<Setup>b__21_0
// il2cpp: void UI_NewImportPopup___Setup_b__21_0 (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1821c61e0

void UI_NewImportPopup___Setup_b__21_0(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f33 = '\x01';
  }
  UI_NewImportPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.NewImportPopup$$<Setup>b__21_1
// il2cpp: void UI_NewImportPopup___Setup_b__21_1 (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x1821c6220

void UI_NewImportPopup___Setup_b__21_1(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184346f34 = '\x01';
  }
  UI_NewImportPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


