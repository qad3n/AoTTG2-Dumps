// Type: UI.BaseSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BaseSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/BaseSettingElement.cs
// --------------------------------

// UI.BaseSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_BaseSettingElement__get_SupportedSettingTypes (UI_BaseSettingElement_o* __this, const MethodInfo* method);
// 0x438e740

System_Collections_Generic_HashSet_SettingType__o *
UI_BaseSettingElement__get_SupportedSettingTypes(UI_BaseSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (g_data_057ae291 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae291 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  return __this_00;
}


// UI.BaseSettingElement$$Setup
// il2cpp: void UI_BaseSettingElement__Setup (UI_BaseSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, const MethodInfo* method);
// 0x438e7a0

void UI_BaseSettingElement__Setup
               (UI_BaseSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_T__o *__this_00;
  undefined8 uVar3;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  Settings_BaseSetting_o *setting_00;
  MethodInfo_33DAE10 **method_00;
  
  if (g_data_057ae292 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ae292 = '\x01';
  }
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setting);
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar1;
  (__this->fields)._style = style;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._style,style);
  __this_00 = (System_Collections_Generic_HashSet_T__o *)
              (*(__this->klass->vtable)._4_get_SupportedSettingTypes.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_SupportedSettingTypes.method);
  if (__this_00 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    method_00 = &MethodInfo_Boolean_Contains;
    bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      (__this_00,(__this->fields)._settingType,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') goto label_0438e87e;
    if (style != (UI_ElementStyle_o *)0x0) {
      UI_BaseSettingElement__SetupTitle
                (__this,title,(style->fields).FontSize,(style->fields).TitleWidth,(MethodInfo *)method_00);
      UI_BaseSettingElement__SetupTooltip(__this,tooltip,style,(MethodInfo *)method_00);
      (*__this->klass[1]._1.image)(__this,__this->klass[1]._1.gc_desc);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0438e87e:
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unsupported setting type being used for UI element.");
  System_ArgumentException___ctor_3c12490(__this_01,message,(MethodInfo *)0x0);
  setting_00 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  il2cpp_runtime_helper_022b2b10(__this_01);
  Settings_SettingsUtil__GetSettingType(setting_00,(MethodInfo *)0x0);
  return;
}


// UI.BaseSettingElement$$SetupTooltip
// il2cpp: void UI_BaseSettingElement__SetupTooltip (UI_BaseSettingElement_o* __this, System_String_o* tooltip, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x438eb60

void UI_BaseSettingElement__SetupTooltip
               (UI_BaseSettingElement_o *__this,System_String_o *tooltip,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  MethodInfo_255A0F0 *pMVar3;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Text_o *__this_01;
  int32_t value;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo_255A0F0 *b;
  MethodInfo_255A0F0 **__this_02;
  
  value = (int32_t)method;
  if (g_data_057ae293 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TooltipButton_AddComponent_TooltipButton);
    il2cpp_runtime_helper_023445d0(&"TooltipIcon");
    g_data_057ae293 = '\x01';
  }
  b = (MethodInfo_255A0F0 *)0x0;
  pMVar3 = (MethodInfo_255A0F0 *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_02 = (MethodInfo_255A0F0 **)__this;
  if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
    value = 0x55d65c8;
    b = "TooltipIcon";
    __this_00 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pMVar3,(System_String_o *)"TooltipIcon",(MethodInfo *)0x0
                          );
    __this_02 = (MethodInfo_255A0F0 **)pMVar3;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      pMVar3 = (MethodInfo_255A0F0 *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      b = (MethodInfo_255A0F0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_02 = (MethodInfo_255A0F0 **)tooltip;
      bVar2 = System_String__op_Equality(tooltip,(System_String_o *)b,(MethodInfo *)0x0);
      if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
        if ((char)bVar2 != '\0') {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pMVar3,0,(MethodInfo *)0x0);
          return;
        }
        b = MethodInfo_TooltipButton_AddComponent_TooltipButton;
        pIVar4 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)pMVar3,(MethodInfo_255A020 *)MethodInfo_TooltipButton_AddComponent_TooltipButton);
        __this_02 = (MethodInfo_255A0F0 **)pMVar3;
        if (pIVar4 != (Il2CppObject *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = pIVar4->klass->vtable[0x2b].methodPtr;
          (*UNRECOVERED_JUMPTABLE_00)
                    (pIVar4,tooltip,style,pIVar4->klass->vtable[0x2b].method,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = b;
  if (g_data_057ae295 == '\0') {
    __this_02 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae295 = '\x01';
  }
  if (b != (MethodInfo_255A0F0 *)0x0) {
    pMVar3 = MethodInfo_Text_GetComponent_Text;
    __this_01 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)b,MethodInfo_Text_GetComponent_Text);
    __this_02 = (MethodInfo_255A0F0 **)b;
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,extraout_RDX,(__this_01->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae296 == '\0') {
    __this_02 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae296 = '\x01';
  }
  if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
    pIVar4 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar3,MethodInfo_Text_GetComponent_Text);
    __this_02 = (MethodInfo_255A0F0 **)pMVar3;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar1 = pIVar4->klass;
      UNRECOVERED_JUMPTABLE_00 = pIVar1->vtable[0x4b].methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pIVar4,extraout_RDX_00,pIVar1->vtable[0x4b].method,pIVar1,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.BaseSettingElement$$GetSettingType
// il2cpp: int32_t UI_BaseSettingElement__GetSettingType (UI_BaseSettingElement_o* __this, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x438e8d0

int32_t UI_BaseSettingElement__GetSettingType
                  (UI_BaseSettingElement_o *__this,Settings_BaseSetting_o *setting,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  return iVar1;
}


// UI.BaseSettingElement$$SetupTitle
// il2cpp: void UI_BaseSettingElement__SetupTitle (UI_BaseSettingElement_o* __this, System_String_o* title, int32_t fontSize, float titleWidth, const MethodInfo* method);
// 0x438e8e0

void UI_BaseSettingElement__SetupTitle
               (UI_BaseSettingElement_o *__this,System_String_o *title,int32_t fontSize,float titleWidth,
               MethodInfo *method)

{
  UI_ElementStyle_o *pUVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  bool_conflict bVar2;
  MethodInfo_255A0F0 *pMVar3;
  MethodInfo_255A0F0 *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_UI_Text_o *pUVar7;
  int32_t value;
  Il2CppClass *pIVar8;
  System_String_o *pSVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  MethodInfo_255A0F0 *pMVar10;
  MethodInfo_255A0F0 **__this_00;
  UnityEngine_Color_o UVar11;
  
  value = (int32_t)method;
  if (g_data_057ae294 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    g_data_057ae294 = '\x01';
  }
  pMVar10 = (MethodInfo_255A0F0 *)0x0;
  __this_00 = (MethodInfo_255A0F0 **)__this;
  pMVar3 = (MethodInfo_255A0F0 *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
    pMVar10 = (MethodInfo_255A0F0 *)0x0;
    pMVar4 = (MethodInfo_255A0F0 *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar3,(MethodInfo *)0x0);
    __this_00 = (MethodInfo_255A0F0 **)pMVar3;
    if (pMVar4 != (MethodInfo_255A0F0 *)0x0) {
      value = 0x55cbce0;
      pMVar10 = "Label";
      pUVar5 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pMVar4,(System_String_o *)"Label",(MethodInfo *)0x0)
      ;
      __this_00 = (MethodInfo_255A0F0 **)pMVar4;
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pMVar3 = (MethodInfo_255A0F0 *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        pMVar10 = (MethodInfo_255A0F0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        __this_00 = (MethodInfo_255A0F0 **)title;
        bVar2 = System_String__op_Equality(title,(System_String_o *)pMVar10,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (g_data_057ae295 == '\0') {
            __this_00 = &MethodInfo_Text_GetComponent_Text;
            il2cpp_runtime_helper_023445d0();
            g_data_057ae295 = '\x01';
          }
          if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
            pMVar10 = MethodInfo_Text_GetComponent_Text;
            __this_00 = (MethodInfo_255A0F0 **)pMVar3;
            pUVar7 = (UnityEngine_UI_Text_o *)
                     UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pMVar3,MethodInfo_Text_GetComponent_Text);
            if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                        (pUVar7,title,(pUVar7->klass->vtable)._75_set_text.method);
              UnityEngine_UI_Text__set_fontSize(pUVar7,fontSize,(MethodInfo *)0x0);
              pMVar10 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
              __this_00 = (MethodInfo_255A0F0 **)pMVar3;
              pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)pMVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar8 = pIVar6->klass;
                (*pIVar8->vtable[0x24].methodPtr)((ulong)(uint)titleWidth,pIVar6,pIVar8->vtable[0x24].method);
                value = (int32_t)pIVar8;
                if (titleWidth <= 0.0) {
                  pMVar10 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  __this_00 = (MethodInfo_255A0F0 **)pMVar3;
                  pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pMVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar6 == (Il2CppObject *)0x0) goto label_0438eb53;
                  pIVar8 = pIVar6->klass;
                  (*pIVar8->vtable[0x24].methodPtr)(0xbf800000,pIVar6,pIVar8->vtable[0x24].method);
                  value = (int32_t)pIVar8;
                }
                pMVar10 = MethodInfo_Text_GetComponent_Text;
                pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)pMVar3,MethodInfo_Text_GetComponent_Text);
                pUVar1 = (__this->fields)._style;
                __this_00 = (MethodInfo_255A0F0 **)pMVar3;
                if (pUVar1 != (UI_ElementStyle_o *)0x0) {
                  __this_00 = (MethodInfo_255A0F0 **)(pUVar1->fields).ThemePanel;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar9 = "DefaultPanel";
                  pMVar10 = "DefaultSetting";
                  UVar11 = UI_UIManager__GetThemeColor
                                     ((System_String_o *)__this_00,(System_String_o *)"DefaultSetting",
                                      "TextColor","DefaultPanel",(MethodInfo *)0x0);
                  value = (int32_t)pSVar9;
                  if (pIVar6 != (Il2CppObject *)0x0) {
                    (*pIVar6->klass->vtable[0x17].methodPtr)
                              (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar6,
                               pIVar6->klass->vtable[0x17].method);
                    return;
                  }
                }
              }
            }
          }
        }
        else if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pMVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0438eb53:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae293 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TooltipButton_AddComponent_TooltipButton);
    il2cpp_runtime_helper_023445d0(&"TooltipIcon");
    g_data_057ae293 = '\x01';
  }
  pMVar3 = (MethodInfo_255A0F0 *)0x0;
  pMVar4 = (MethodInfo_255A0F0 *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pMVar4 != (MethodInfo_255A0F0 *)0x0) {
    value = 0x55d65c8;
    pMVar3 = "TooltipIcon";
    pUVar5 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pMVar4,(System_String_o *)"TooltipIcon",(MethodInfo *)0x0);
    __this_00 = (MethodInfo_255A0F0 **)pMVar4;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pMVar4 = (MethodInfo_255A0F0 *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo_255A0F0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_00 = (MethodInfo_255A0F0 **)pMVar10;
      bVar2 = System_String__op_Equality
                        ((System_String_o *)pMVar10,(System_String_o *)pMVar3,(MethodInfo *)0x0);
      if (pMVar4 != (MethodInfo_255A0F0 *)0x0) {
        if ((char)bVar2 != '\0') {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pMVar4,0,(MethodInfo *)0x0);
          return;
        }
        pMVar3 = MethodInfo_TooltipButton_AddComponent_TooltipButton;
        pIVar6 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)pMVar4,(MethodInfo_255A020 *)MethodInfo_TooltipButton_AddComponent_TooltipButton);
        __this_00 = (MethodInfo_255A0F0 **)pMVar4;
        if (pIVar6 != (Il2CppObject *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = pIVar6->klass->vtable[0x2b].methodPtr;
          (*UNRECOVERED_JUMPTABLE_00)
                    (pIVar6,pMVar10,extraout_RDX,pIVar6->klass->vtable[0x2b].method,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar3;
  if (g_data_057ae295 == '\0') {
    __this_00 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae295 = '\x01';
  }
  if (pMVar3 != (MethodInfo_255A0F0 *)0x0) {
    pMVar10 = MethodInfo_Text_GetComponent_Text;
    pUVar7 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar3,MethodInfo_Text_GetComponent_Text);
    __this_00 = (MethodInfo_255A0F0 **)pMVar3;
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                (pUVar7,extraout_RDX_00,(pUVar7->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(pUVar7,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae296 == '\0') {
    __this_00 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae296 = '\x01';
  }
  if (pMVar10 != (MethodInfo_255A0F0 *)0x0) {
    pIVar6 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar10,MethodInfo_Text_GetComponent_Text);
    __this_00 = (MethodInfo_255A0F0 **)pMVar10;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar6->klass;
      UNRECOVERED_JUMPTABLE_00 = pIVar8->vtable[0x4b].methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pIVar6,extraout_RDX_01,pIVar8->vtable[0x4b].method,pIVar8,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.BaseSettingElement$$SetupLabel
// il2cpp: void UI_BaseSettingElement__SetupLabel (UI_BaseSettingElement_o* __this, UnityEngine_GameObject_o* obj, System_String_o* title, int32_t fontSize, const MethodInfo* method);
// 0x438ec50

void UI_BaseSettingElement__SetupLabel
               (UI_BaseSettingElement_o *__this,UnityEngine_GameObject_o *obj,System_String_o *title,
               int32_t fontSize,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar2;
  undefined8 extraout_RDX;
  MethodInfo_255A0F0 *__this_01;
  MethodInfo_255A0F0 **__this_02;
  
  __this_01 = (MethodInfo_255A0F0 *)obj;
  __this_02 = (MethodInfo_255A0F0 **)__this;
  if (g_data_057ae295 == '\0') {
    __this_02 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae295 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = MethodInfo_Text_GetComponent_Text;
    __this_00 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(obj,MethodInfo_Text_GetComponent_Text);
    __this_02 = (MethodInfo_255A0F0 **)obj;
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(__this_00,fontSize,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae296 == '\0') {
    __this_02 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae296 = '\x01';
  }
  if (__this_01 != (MethodInfo_255A0F0 *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02 = (MethodInfo_255A0F0 **)__this_01;
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar1 = pIVar2->klass;
      vtableDispatch = pIVar1->vtable[0x4b].methodPtr;
      (*vtableDispatch)(pIVar2,extraout_RDX,pIVar1->vtable[0x4b].method,pIVar1,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.BaseSettingElement$$SetupLabel
// il2cpp: void UI_BaseSettingElement__SetupLabel (UI_BaseSettingElement_o* __this, UnityEngine_GameObject_o* obj, System_String_o* title, const MethodInfo* method);
// 0x438ecd0

void UI_BaseSettingElement__SetupLabel_428ecd0
               (UI_BaseSettingElement_o *__this,UnityEngine_GameObject_o *obj,System_String_o *title,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar2;
  MethodInfo_255A0F0 **ppMVar3;
  
  if (g_data_057ae296 == '\0') {
    ppMVar3 = &MethodInfo_Text_GetComponent_Text;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae296 = '\x01';
    __this = (UI_BaseSettingElement_o *)ppMVar3;
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent_object_(obj,MethodInfo_Text_GetComponent_Text);
    __this = (UI_BaseSettingElement_o *)obj;
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar1 = pIVar2->klass;
      vtableDispatch = pIVar1->vtable[0x4b].methodPtr;
      (*vtableDispatch)(pIVar2,title,pIVar1->vtable[0x4b].method,pIVar1,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.BaseSettingElement$$.ctor
// il2cpp: void UI_BaseSettingElement___ctor (UI_BaseSettingElement_o* __this, const MethodInfo* method);
// 0x438ed40

void UI_BaseSettingElement___ctor(UI_BaseSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


