// Type: UI.BaseSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BaseSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/BaseSettingElement.cs
// --------------------------------

// UI.BaseSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_BaseSettingElement__get_SupportedSettingTypes (UI_BaseSettingElement_o* __this, const MethodInfo* method);
// 0x182201f40

System_Collections_Generic_HashSet_SettingType__o *
UI_BaseSettingElement__get_SupportedSettingTypes(UI_BaseSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347101 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  return __this_00;
}


// UI.BaseSettingElement$$Setup
// il2cpp: void UI_BaseSettingElement__Setup (UI_BaseSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, const MethodInfo* method);
// 0x182201e10

void UI_BaseSettingElement__Setup
               (UI_BaseSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184347102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_Contains);
    Il2CppMethodInitialized_184347102 = '\x01';
  }
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,style);
  __this_00 = (*(__this->klass->vtable)._4_get_SupportedSettingTypes.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_SupportedSettingTypes.method);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,(__this->fields)._settingType,
                       (MethodInfo_1759C90 *)
                       MethodInfo_System_Collections_Generic_HashSet_SettingType_Contains);
    if (!bVar1) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"Unsupported setting type being used for UI element.");
      System_ArgumentException___ctor_1a77cc0(__this_01,message,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BaseSettingElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    if (style != (UI_ElementStyle_o *)0x0) {
      UI_BaseSettingElement__SetupTitle
                (__this,title,(style->fields).FontSize,(style->fields).TitleWidth,(MethodInfo *)0x0);
      UI_BaseSettingElement__SetupTooltip(__this,tooltip,style,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._6_SyncElement.methodPtr)
                (__this,(__this->klass->vtable)._6_SyncElement.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.BaseSettingElement$$SetupTooltip
// il2cpp: void UI_BaseSettingElement__SetupTooltip (UI_BaseSettingElement_o* __this, System_String_o* tooltip, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x182201d10

void UI_BaseSettingElement__SetupTooltip
               (UI_BaseSettingElement_o *__this,System_String_o *tooltip,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_TooltipButton_o *pUVar3;
  
  if (Il2CppMethodInitialized_184347103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TooltipButton);
    il2cpp_codegen_initialize_runtime_metadata(&"TooltipIcon");
    Il2CppMethodInitialized_184347103 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"TooltipIcon",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality
                        (tooltip,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0)
      ;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        if (bVar1) {
          UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
          return;
        }
        pUVar3 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TooltipButton)
        ;
        if (pUVar3 != (UI_TooltipButton_o *)0x0) {
          (*(pUVar3->klass->vtable)._43_Setup.methodPtr)
                    (pUVar3,tooltip,style,(pUVar3->klass->vtable)._43_Setup.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BaseSettingElement$$GetSettingType
// il2cpp: int32_t UI_BaseSettingElement__GetSettingType (UI_BaseSettingElement_o* __this, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x182201960

int32_t UI_BaseSettingElement__GetSettingType
                  (UI_BaseSettingElement_o *__this,Settings_BaseSetting_o *setting,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  return iVar1;
}


// UI.BaseSettingElement$$SetupTitle
// il2cpp: void UI_BaseSettingElement__SetupTitle (UI_BaseSettingElement_o* __this, System_String_o* title, int32_t fontSize, float titleWidth, const MethodInfo* method);
// 0x182201a70
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182201cf1: xor r8d, r8d
// asm:   0x182201cf4: xor edx, edx
// asm:   0x182201cf6: mov rcx, rbx
// asm:   0x182201cf9: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x182201cfe: jmp 0x182201ccc

void UI_BaseSettingElement__SetupTitle
               (UI_BaseSettingElement_o *__this,System_String_o *title,int32_t fontSize,float titleWidth,
               MethodInfo *method)

{
  UI_ElementStyle_o *pUVar1;
  System_String_o *panel;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    Il2CppMethodInitialized_184347104 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
      pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality
                      (title,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (Il2CppMethodInitialized_184347105 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        Il2CppMethodInitialized_184347105 = '\x01';
      }
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
         , pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,title,(pUVar5->klass->vtable)._75_set_text.method);
        UnityEngine_UI_Text__set_fontSize(pUVar5,fontSize,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar3,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
        if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar6,titleWidth,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
          if (titleWidth <= 0.0) {
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar3,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_182201d00;
            (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar6,-1.0,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
          }
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
          ;
          pUVar1 = (__this->fields)._style;
          if (pUVar1 != (UI_ElementStyle_o *)0x0) {
            panel = (pUVar1->fields).ThemePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar7 = UI_UIManager__GetThemeColor
                               ((UnityEngine_Color_o *)local_28,panel,"DefaultSetting",
                                "TextColor","DefaultPanel",(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
              local_28[0].r = (pUVar7->fields).r;
              local_28[0].g = (pUVar7->fields).g;
              local_28[0].b = (pUVar7->fields).b;
              local_28[0].a = (pUVar7->fields).a;
              (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                        (pUVar5,(UnityEngine_Color_o *)local_28,(pUVar5->klass->vtable)._23_set_color.method);
              return;
            }
          }
        }
      }
    }
  }
label_182201d00:
  ThrowNullReferenceException();
}


// UI.BaseSettingElement$$SetupLabel
// il2cpp: void UI_BaseSettingElement__SetupLabel (UI_BaseSettingElement_o* __this, UnityEngine_GameObject_o* obj, System_String_o* title, int32_t fontSize, const MethodInfo* method);
// 0x1822019e0

void UI_BaseSettingElement__SetupLabel
               (UI_BaseSettingElement_o *__this,UnityEngine_GameObject_o *obj,System_String_o *title,
               int32_t fontSize,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  
  if (Il2CppMethodInitialized_184347105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_184347105 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(__this_00,fontSize,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.BaseSettingElement$$SetupLabel
// il2cpp: void UI_BaseSettingElement__SetupLabel (UI_BaseSettingElement_o* __this, UnityEngine_GameObject_o* obj, System_String_o* title, const MethodInfo* method);
// 0x182201970

void UI_BaseSettingElement__SetupLabel_2201970
               (UI_BaseSettingElement_o *__this,UnityEngine_GameObject_o *obj,System_String_o *title,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  if (Il2CppMethodInitialized_184347106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_184347106 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,title,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.BaseSettingElement$$.ctor
// il2cpp: void UI_BaseSettingElement___ctor (UI_BaseSettingElement_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_BaseSettingElement___ctor(UI_BaseSettingElement_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


