// Type: UI.ExportPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ExportPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/ExportPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ExportPopup$$get_Title
// il2cpp: System_String_o* UI_ExportPopup__get_Title (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4021e30

System_String_o * UI_ExportPopup__get_Title(UI_ExportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057042ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Export");
    DAT_057042ed = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Export",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ExportPopup$$get_Width
// il2cpp: float UI_ExportPopup__get_Width (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4021e90

float UI_ExportPopup__get_Width(UI_ExportPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.ExportPopup$$get_Height
// il2cpp: float UI_ExportPopup__get_Height (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4021ea0

float UI_ExportPopup__get_Height(UI_ExportPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.ExportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ExportPopup__get_VerticalPadding (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4021eb0

int32_t UI_ExportPopup__get_VerticalPadding(UI_ExportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ExportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ExportPopup__get_HorizontalPadding (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4021ec0

int32_t UI_ExportPopup__get_HorizontalPadding(UI_ExportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ExportPopup$$Setup
// il2cpp: void UI_ExportPopup__Setup (UI_ExportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4021ed0

void UI_ExportPopup__Setup(UI_ExportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  MethodInfo *extraout_RDX;
  
  if (DAT_057042ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Done");
    DAT_057042ee = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Done",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.ExportPopup$$Show
// il2cpp: void UI_ExportPopup__Show (UI_ExportPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4022010

void UI_ExportPopup__Show(UI_ExportPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  Settings_StringSetting_o *__this_00;
  bool_conflict bVar3;
  int32_t fontSize;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057042ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"");
    DAT_057042ef = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._element;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields)._element;
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                         (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
    __this_00 = (__this->fields).ExportSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      pUVar4 = UI_ElementFactory__CreateInputSetting
                         ((__this->fields).SinglePanel,__this_01,
                          (Settings_BaseSetting_o *)(__this->fields).ExportSetting,
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),"",
                          460.0,435.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                          (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0
                          ,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._element = pUVar4;
      il2cpp_runtime_glue(ppUVar1,pUVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ExportPopup$$OnButtonClick
// il2cpp: void UI_ExportPopup__OnButtonClick (UI_ExportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4022200

void UI_ExportPopup__OnButtonClick
               (UI_ExportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057042f0 == '\0') {
    il2cpp_init_method_metadata(&"Done");
    DAT_057042f0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Done",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.ExportPopup$$.ctor
// il2cpp: void UI_ExportPopup___ctor (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4022270

void UI_ExportPopup___ctor(UI_ExportPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (DAT_057042f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057042f1 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ExportSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).ExportSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ExportPopup$$<Setup>b__12_0
// il2cpp: void UI_ExportPopup___Setup_b__12_0 (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x4022300

void UI_ExportPopup__<Setup>b__12_0(UI_ExportPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (DAT_057042f2 == '\0') {
    il2cpp_init_method_metadata(&"Done");
    DAT_057042f2 = '\x01';
  }
  a = "Done";
  if (DAT_057042f0 == '\0') {
    il2cpp_init_method_metadata(&"Done");
    DAT_057042f0 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Done",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


