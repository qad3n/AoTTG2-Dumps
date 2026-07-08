// Type: UI.BaseSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/BaseSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/BaseSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.BaseSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_BaseSettingElement__get_SupportedSettingTypes (UI_BaseSettingElement_o* __this, const MethodInfo* method);
// 0x4080910

System_Collections_Generic_HashSet_SettingType__o *
UI_BaseSettingElement__get_SupportedSettingTypes(UI_BaseSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704516 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704516 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  return __this_00;
}


// UI.BaseSettingElement$$Setup
// il2cpp: void UI_BaseSettingElement__Setup (UI_BaseSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, const MethodInfo* method);
// 0x4080970

void UI_BaseSettingElement__Setup
               (UI_BaseSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,
               MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_T__o *__this_00;
  undefined8 uVar3;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  MethodInfo_3356480 **method_00;
  
  if (DAT_05704517 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05704517 = '\x01';
  }
  (__this->fields)._setting = setting;
  il2cpp_runtime_glue(&(__this->fields)._setting);
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar1;
  (__this->fields)._style = style;
  il2cpp_runtime_glue(&(__this->fields)._style,style);
  __this_00 = (System_Collections_Generic_HashSet_T__o *)
              (*(__this->klass->vtable)._4_get_SupportedSettingTypes.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_SupportedSettingTypes.method);
  if (__this_00 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    method_00 = &MethodInfo_Boolean_Contains;
    bVar2 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      (__this_00,(__this->fields)._settingType,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar3);
      message = (System_String_o *)il2cpp_init_method_metadata(&"Unsupported setting type being used for UI element.");
      System_ArgumentException___ctor(__this_01,message,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&MethodInfo_Void_Setup);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar3);
    }
    if (style != (UI_ElementStyle_o *)0x0) {
      UI_BaseSettingElement__SetupTitle
                (__this,title,(style->fields).FontSize,(style->fields).TitleWidth,
                 (MethodInfo *)method_00);
      UI_BaseSettingElement__SetupTooltip(__this,tooltip,style,(MethodInfo *)method_00);
      (*__this->klass[1]._1.image)(__this,__this->klass[1]._1.gc_desc);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseSettingElement$$SetupTooltip
// il2cpp: void UI_BaseSettingElement__SetupTooltip (UI_BaseSettingElement_o* __this, System_String_o* tooltip, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x4080d30

void UI_BaseSettingElement__SetupTooltip
               (UI_BaseSettingElement_o *__this,System_String_o *tooltip,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  
  if (DAT_05704518 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TooltipButton_AddComponent_TooltipButton);
    il2cpp_init_method_metadata(&"TooltipIcon");
    DAT_05704518 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"TooltipIcon",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality
                        (tooltip,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        if ((char)bVar1 != '\0') {
          UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
          return;
        }
        pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_TooltipButton_AddComponent_TooltipButton);
        if (pIVar3 != (Il2CppObject *)0x0) {
          vtable_dispatch = pIVar3->klass->vtable[0x2b].methodPtr;
          (*vtable_dispatch)
                    (pIVar3,tooltip,style,pIVar3->klass->vtable[0x2b].method,vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseSettingElement$$GetSettingType
// il2cpp: int32_t UI_BaseSettingElement__GetSettingType (UI_BaseSettingElement_o* __this, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x4080aa0

int32_t UI_BaseSettingElement__GetSettingType
                  (UI_BaseSettingElement_o *__this,Settings_BaseSetting_o *setting,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  return iVar1;
}


// UI.BaseSettingElement$$SetupTitle
// il2cpp: void UI_BaseSettingElement__SetupTitle (UI_BaseSettingElement_o* __this, System_String_o* title, int32_t fontSize, float titleWidth, const MethodInfo* method);
// 0x4080ab0

void UI_BaseSettingElement__SetupTitle
               (UI_BaseSettingElement_o *__this,System_String_o *title,int32_t fontSize,
               float titleWidth,MethodInfo *method)

{
  UI_ElementStyle_o *pUVar1;
  System_String_o *panel;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar5;
  UnityEngine_Color_o UVar6;
  
  if (DAT_05704519 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"DefaultSetting");
    DAT_05704519 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality
                          (title,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (DAT_0570451a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
            DAT_0570451a = '\x01';
          }
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            __this_00 = (UnityEngine_UI_Text_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                        (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
              UnityEngine_UI_Text__set_fontSize(__this_00,fontSize,(MethodInfo *)0x0);
              pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar5 != (Il2CppObject *)0x0) {
                (*pIVar5->klass->vtable[0x24].methodPtr)
                          ((ulong)(uint)titleWidth,pIVar5,pIVar5->klass->vtable[0x24].method);
                if (titleWidth <= 0.0) {
                  pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar5 == (Il2CppObject *)0x0) goto LAB_04080d23;
                  (*pIVar5->klass->vtable[0x24].methodPtr)
                            (0xbf800000,pIVar5,pIVar5->klass->vtable[0x24].method);
                }
                pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
                pUVar1 = (__this->fields)._style;
                if (pUVar1 != (UI_ElementStyle_o *)0x0) {
                  panel = (pUVar1->fields).ThemePanel;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UVar6 = UI_UIManager__GetThemeColor
                                    (panel,"DefaultSetting","TextColor","DefaultPanel",(MethodInfo *)0x0)
                  ;
                  if (pIVar5 != (Il2CppObject *)0x0) {
                    (*pIVar5->klass->vtable[0x17].methodPtr)
                              (UVar6.fields._0_8_,UVar6.fields._8_8_,pIVar5,
                               pIVar5->klass->vtable[0x17].method);
                    return;
                  }
                }
              }
            }
          }
        }
        else if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04080d23:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseSettingElement$$SetupLabel
// il2cpp: void UI_BaseSettingElement__SetupLabel (UI_BaseSettingElement_o* __this, UnityEngine_GameObject_o* obj, System_String_o* title, int32_t fontSize, const MethodInfo* method);
// 0x4080e20

void UI_BaseSettingElement__SetupLabel
               (UI_BaseSettingElement_o *__this,UnityEngine_GameObject_o *obj,System_String_o *title
               ,int32_t fontSize,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  
  if (DAT_0570451a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_0570451a = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_Text_GetComponent_Text);
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(__this_00,fontSize,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseSettingElement$$SetupLabel
// il2cpp: void UI_BaseSettingElement__SetupLabel (UI_BaseSettingElement_o* __this, UnityEngine_GameObject_o* obj, System_String_o* title, const MethodInfo* method);
// 0x4080ea0

void UI_BaseSettingElement__SetupLabel
               (UI_BaseSettingElement_o *__this,UnityEngine_GameObject_o *obj,System_String_o *title
               ,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  
  if (DAT_0570451b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_0570451b = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_Text_GetComponent_Text);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar1 = pIVar2->klass;
      vtable_dispatch = pIVar1->vtable[0x4b].methodPtr;
      (*vtable_dispatch)
                (pIVar2,title,pIVar1->vtable[0x4b].method,pIVar1,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseSettingElement$$.ctor
// il2cpp: void UI_BaseSettingElement___ctor (UI_BaseSettingElement_o* __this, const MethodInfo* method);
// 0x4080f10

void UI_BaseSettingElement___ctor(UI_BaseSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


