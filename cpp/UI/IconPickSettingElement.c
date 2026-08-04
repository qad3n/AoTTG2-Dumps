// Type: UI.IconPickSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IconPickSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs
// --------------------------------

// UI.IconPickSettingElement.<>c__DisplayClass4_0$$.ctor
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass4_0___ctor (UI_IconPickSettingElement___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4391c90

void UI_IconPickSettingElement___c__DisplayClass4_0___ctor
               (UI_IconPickSettingElement___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement.<>c__DisplayClass4_0$$<Setup>b__0
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass4_0___Setup_b__0 (UI_IconPickSettingElement___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4391e70

void UI_IconPickSettingElement___c__DisplayClass4_0___Setup_b__0
               (UI_IconPickSettingElement___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  UI_IconPickSettingElement_o *pUVar5;
  UI_IconPickPopup_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  System_String_c *pSVar6;
  long *plVar7;
  Settings_TypedSetting_int__c *pSVar8;
  void *pvVar9;
  Il2CppMethodPointer pIVar10;
  undefined8 uVar11;
  code *pcVar12;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  char cVar13;
  bool_conflict bVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *pIVar16;
  UnityEngine_Transform_o *pUVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  Il2CppClass *pIVar20;
  UnityEngine_GameObject_o *pUVar21;
  Il2CppObject *pIVar22;
  Il2CppClass *pIVar23;
  System_String_o *pSVar24;
  Il2CppClass *in_RCX;
  UI_ElementStyle_o *style;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  undefined8 *puVar27;
  Il2CppClass *pIVar28;
  uint value_01;
  Il2CppClass *pIVar29;
  System_String_o *in_R8;
  Il2CppClass *in_R9;
  Il2CppClass *pIVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 in_XMM1_Da;
  UnityEngine_Color_o UVar33;
  undefined8 uStackY_230;
  Il2CppClass *pIStackY_228;
  Il2CppClass *pIStackY_220;
  Il2CppClass *pIStackY_218;
  Il2CppClass *pIStackY_210;
  UnityEngine_UI_ColorBlock_o UStack_160;
  UnityEngine_Color_Fields UStack_108;
  UnityEngine_Color_Fields UStack_f8;
  UnityEngine_Color_Fields UStack_e8;
  UnityEngine_Color_Fields UStack_d8;
  UnityEngine_Color_Fields aUStack_c8 [2];
  UnityEngine_Color_Fields UStack_a8;
  UnityEngine_Color_Fields UStack_98;
  UnityEngine_Color_Fields UStack_88;
  UnityEngine_Color_Fields UStack_78;
  UnityEngine_Color_Fields UStack_68;
  float fStack_58;
  float fStack_54;
  Il2CppClass *pIStack_50;
  Il2CppClass *in_stack_ffffffffffffffe8;
  Il2CppClass *in_stack_fffffffffffffff0;
  
  pUVar5 = (__this->fields).__4__this;
  if ((pUVar5 != (UI_IconPickSettingElement_o *)0x0) &&
     (__this_00 = (__this->fields).iconPickPopup, __this_00 != (UI_IconPickPopup_o *)0x0)) {
    UI_IconPickPopup__Show
              (__this_00,(pUVar5->fields)._setting,(pUVar5->fields)._label,(__this->fields).options,
               (__this->fields).iconPaths,(__this->fields).tooltips,(__this->fields).onSelect,
               (__this->fields).tooltipPopup,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2b2 = '\x01';
  }
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pIVar29 = MethodInfo_HashSet_1_Settings_SettingType;
  pIVar30 = pIVar15;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pIVar15,(MethodInfo_33DA550 *)MethodInfo_HashSet_1_Settings_SettingType);
  if (pIVar15 != (Il2CppClass *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar15,2,MethodInfo_Boolean_Add);
    return;
  }
  uVar32 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar15;
  if (g_data_057ae2b3 == '\0') {
    pIStackY_210 = (Il2CppClass *)0x4391f88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pIStackY_210 = (Il2CppClass *)0x4391f94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pIStackY_210 = (Il2CppClass *)0x4391fa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIStackY_210 = (Il2CppClass *)0x4391fac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pIStackY_210 = (Il2CppClass *)0x4391fb8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoldableButton_AddComponent_HoldableButton);
    pIStackY_210 = (Il2CppClass *)0x4391fc4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_0);
    pIStackY_210 = (Il2CppClass *)0x4391fd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_1);
    pIStackY_210 = (Il2CppClass *)0x4391fdc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_210 = (Il2CppClass *)0x4391fe8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_210 = (Il2CppClass *)0x4391ff4;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pIStackY_210 = (Il2CppClass *)0x4392000;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pIStackY_210 = (Il2CppClass *)0x439200c;
    il2cpp_runtime_helper_023445d0(&"Increment/ValueLabel");
    pIStackY_210 = (Il2CppClass *)0x4392018;
    il2cpp_runtime_helper_023445d0(&"Increment/RightButton");
    pIStackY_210 = (Il2CppClass *)0x4392024;
    il2cpp_runtime_helper_023445d0(&"Increment/LeftButton");
    pIStackY_210 = (Il2CppClass *)0x4392030;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pIStackY_210 = (Il2CppClass *)0x439203c;
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    pIStackY_210 = (Il2CppClass *)0x4392048;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2b3 = '\x01';
  }
  pIVar15 = (Il2CppClass *)0x0;
  pIStackY_210 = (Il2CppClass *)0x4392059;
  pIVar26 = pIVar30;
  pIVar16 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar30,(MethodInfo *)0x0);
  pIVar25 = in_RCX;
  pIVar28 = pIVar29;
  if (pIVar16 != (Il2CppClass *)0x0) {
    pIStackY_210 = (Il2CppClass *)0x4392076;
    pIVar15 = "Increment/ValueLabel";
    pUVar17 = UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pIVar16,(System_String_o *)"Increment/ValueLabel",(MethodInfo *)0x0)
    ;
    pIVar26 = pIVar16;
    if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
      pIStackY_210 = (Il2CppClass *)0x4392091;
      pIVar15 = (Il2CppClass *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Text_GetComponent_Text);
      puVar1 = &(pIVar30->_1).this_arg.bits;
      *(Il2CppClass **)&(pIVar30->_1).this_arg.bits = pIVar15;
      pIStackY_210 = (Il2CppClass *)0x43920a9;
      pIVar26 = (Il2CppClass *)puVar1;
      il2cpp_runtime_helper_022b4080();
      if (style != (UI_ElementStyle_o *)0x0) {
        __this_01 = *(UnityEngine_UI_Text_o **)&(pIVar30->_1).this_arg.bits;
        pIVar26 = (Il2CppClass *)0x0;
        if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
          pIStackY_210 = (Il2CppClass *)0x43920eb;
          UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
          (pIVar30->_1).element_class = in_R9;
          pIStackY_210 = (Il2CppClass *)0x43920fb;
          il2cpp_runtime_helper_022b4080(&(pIVar30->_1).element_class,in_R9);
          (pIVar30->_1).castClass = in_stack_ffffffffffffffe8;
          pIStackY_210 = (Il2CppClass *)0x439210b;
          il2cpp_runtime_helper_022b4080(&(pIVar30->_1).castClass,in_stack_ffffffffffffffe8);
          (pIVar30->_1).declaringType = in_stack_fffffffffffffff0;
          pIStackY_210 = (Il2CppClass *)0x439211b;
          il2cpp_runtime_helper_022b4080(&(pIVar30->_1).declaringType);
          pIVar15 = (Il2CppClass *)0x0;
          pIStackY_210 = (Il2CppClass *)0x4392125;
          pIVar26 = pIVar30;
          pIVar16 = (Il2CppClass *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar30,(MethodInfo *)0x0)
          ;
          pIVar25 = in_stack_fffffffffffffff0;
          pIVar28 = in_stack_ffffffffffffffe8;
          if (pIVar16 != (Il2CppClass *)0x0) {
            pIStackY_210 = (Il2CppClass *)0x4392142;
            pIVar15 = "Increment/LeftButton";
            pUVar17 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pIVar16,(System_String_o *)"Increment/LeftButton",
                                 (MethodInfo *)0x0);
            pIVar26 = pIVar16;
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              pIStackY_210 = (Il2CppClass *)0x439215e;
              pIVar16 = (Il2CppClass *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar17,(MethodInfo_24E7B40 *)MethodInfo_Button_GetComponent_Button);
              pIVar15 = (Il2CppClass *)0x0;
              pIStackY_210 = (Il2CppClass *)0x439216b;
              pIVar26 = pIVar30;
              pIVar18 = (Il2CppClass *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pIVar30,(MethodInfo *)0x0);
              pIVar25 = pIVar16;
              pIVar28 = (Il2CppClass *)&MethodInfo_Button_GetComponent_Button;
              if (pIVar18 != (Il2CppClass *)0x0) {
                pIStackY_210 = (Il2CppClass *)0x4392190;
                pIVar15 = "Increment/RightButton";
                pIVar19 = (Il2CppClass *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pIVar18,(System_String_o *)"Increment/RightButton",
                                     (MethodInfo *)0x0);
                pIVar26 = pIVar18;
                if (pIVar19 != (Il2CppClass *)0x0) {
                  pIStackY_210 = (Il2CppClass *)0x43921a5;
                  pIVar15 = MethodInfo_Button_GetComponent_Button;
                  pIVar18 = (Il2CppClass *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pIVar19,(MethodInfo_24E7B40 *)MethodInfo_Button_GetComponent_Button);
                  pIVar26 = pIVar19;
                  if (pIVar16 != (Il2CppClass *)0x0) {
                    pIStackY_210 = (Il2CppClass *)0x43921c4;
                    pIVar15 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    pIVar26 = pIVar16;
                    pIVar19 = (Il2CppClass *)
                              UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pIVar16,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement
                                        );
                    pIVar28 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    if (pIVar18 != (Il2CppClass *)0x0) {
                      pIStackY_210 = (Il2CppClass *)0x43921e6;
                      pIVar20 = (Il2CppClass *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pIVar18,
                                           (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      pIVar15 = (Il2CppClass *)0x0;
                      pIStackY_210 = (Il2CppClass *)0x43921f8;
                      pIVar26 = pIVar16;
                      pUVar21 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
                      pIVar28 = pIVar20;
                      if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                        pIStackY_210 = (Il2CppClass *)0x4392213;
                        pIVar22 = UnityEngine_GameObject__AddComponent_object_(pUVar21,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                        in_R9 = (Il2CppClass *)&TypeInfo_Action;
                        pIStackY_210 = (Il2CppClass *)0x4392225;
                        pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                        pIStackY_210 = (Il2CppClass *)0x439223f;
                        pIVar15 = pIVar30;
                        pIVar26 = pIVar23;
                        System_Action___ctor();
                        pIVar25 = (Il2CppClass *)0x0;
                        if (pIVar22 != (Il2CppObject *)0x0) {
                          if (g_data_057ae2ad == '\0') {
                            pIStackY_210 = (Il2CppClass *)0x4392267;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                            g_data_057ae2ad = '\x01';
                          }
                          pIVar26 = pIVar22[4].klass;
                          do {
                            pIStackY_210 = (Il2CppClass *)0x43922a6;
                            pIVar15 = (Il2CppClass *)
                                      System_Delegate__Combine
                                                ((System_Delegate_o *)pIVar26,(System_Delegate_o *)pIVar23,
                                                 (MethodInfo *)0x0);
                            if ((pIVar15 != (Il2CppClass *)0x0) &&
                               (pIVar28 = pIVar26, (pIVar15->_1).image != TypeInfo_Action)) goto label_04392373;
                            pIStackY_210 = (Il2CppClass *)0x439228e;
                            pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_02300640(pIVar22 + 4,pIVar15,pIVar26);
                            bVar31 = pIVar26 != pIVar28;
                            pIVar26 = pIVar28;
                          } while (bVar31);
                          pIVar15 = (Il2CppClass *)0x0;
                          pIStackY_210 = (Il2CppClass *)0x43922c4;
                          pIVar26 = pIVar18;
                          pUVar21 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pIVar18,(MethodInfo *)0x0);
                          pIVar25 = pIVar28;
                          if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                            pIStackY_210 = (Il2CppClass *)0x43922df;
                            pIVar22 = UnityEngine_GameObject__AddComponent_object_(pUVar21,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                            pIStackY_210 = (Il2CppClass *)0x43922ea;
                            pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                            pIStackY_210 = (Il2CppClass *)0x4392304;
                            pIVar15 = pIVar30;
                            pIVar26 = pIVar23;
                            System_Action___ctor();
                            pIVar25 = (Il2CppClass *)0x0;
                            if (pIVar22 != (Il2CppObject *)0x0) {
                              if (g_data_057ae2ad == '\0') {
                                pIStackY_210 = (Il2CppClass *)0x4392322;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                                g_data_057ae2ad = '\x01';
                              }
                              pIVar25 = pIVar22[4].klass;
                              do {
                                pIStackY_210 = (Il2CppClass *)0x4392366;
                                pIVar15 = (Il2CppClass *)
                                          System_Delegate__Combine
                                                    ((System_Delegate_o *)pIVar25,(System_Delegate_o *)pIVar23
                                                     ,(MethodInfo *)0x0);
                                if ((pIVar15 != (Il2CppClass *)0x0) &&
                                   (pIVar28 = pIVar25, (pIVar15->_1).image != TypeInfo_Action))
                                goto label_04392373;
                                pIStackY_210 = (Il2CppClass *)0x439234e;
                                pIVar26 = (Il2CppClass *)(pIVar22 + 4);
                                pIVar28 = (Il2CppClass *)
                                          il2cpp_runtime_helper_02300640((Il2CppClass *)(pIVar22 + 4),pIVar15,pIVar25);
                                bVar31 = pIVar25 != pIVar28;
                                pIVar25 = pIVar28;
                              } while (bVar31);
                              goto label_0439237b;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04392707:
  pIStackY_210 = (Il2CppClass *)0x439270c;
  uStackY_230 = il2cpp_runtime_helper_022b2c90();
  bVar3 = (byte)pIVar15;
  pIVar29 = pIVar26;
  pIStackY_228 = pIVar25;
  pIStackY_220 = in_R9;
  pIStackY_218 = pIVar30;
  pIStackY_210 = pIVar28;
  if (g_data_057ae2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pIVar29 = (Il2CppClass *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2b4 = '\x01';
  }
  if ((pIVar26->_1).byval_arg.bits == 2) {
    pIVar30 = (pIVar26->_1).byval_arg.data;
    if (pIVar30 != (Il2CppClass *)0x0) {
      pSVar8 = (pIVar30->_1).image;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (pSVar8->_2).naturalAligment) &&
         ((pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        uVar4 = ((Settings_TypedSetting_int__Fields *)&(pIVar30->_1).name)->_value;
        value_01 = (uVar4 + (uint)bVar3 * 2) - 1;
        pIVar15 = (Il2CppClass *)(ulong)value_01;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar30,value_01,MethodInfo_Void_set_Value);
        pIVar29 = (pIVar26->_1).declaringType;
        if (pIVar29 != (Il2CppClass *)0x0) {
          pIVar15 = *(Il2CppClass **)&(pIVar29->_1).byval_arg.bits;
          cVar13 = (*(code *)(pIVar29->_1).namespaze)((pIVar29->_1).element_class);
          if (cVar13 == '\0') {
            pIVar15 = (Il2CppClass *)(ulong)uVar4;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar30,uVar4,MethodInfo_Void_set_Value);
          }
        }
        goto label_043927de;
      }
      il2cpp_runtime_helper_022b2fd0();
      pIVar29 = pIVar30;
    }
    il2cpp_runtime_helper_022b2c90();
    puVar27 = &uStackY_230;
    do {
      *(Il2CppClass **)((long)puVar27 + -8) = pIVar26;
      if (g_data_057ae2b5 == '\0') {
        *(undefined8 *)((long)puVar27 + -0x20) = 0x439283d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
        *(undefined8 *)((long)puVar27 + -0x20) = 0x4392849;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        g_data_057ae2b5 = '\x01';
      }
      *(undefined4 *)((long)puVar27 + -0xc) = 0;
      if ((pIVar29->_1).byval_arg.bits != 2) {
        return;
      }
      pIVar15 = (pIVar29->_1).element_class;
      pIVar30 = (pIVar29->_1).byval_arg.data;
      pIVar26 = *(Il2CppClass **)&(pIVar29->_1).this_arg.bits;
      if (pIVar15 == (Il2CppClass *)0x0) {
        if (pIVar30 != (Il2CppClass *)0x0) {
          pSVar8 = (pIVar30->_1).image;
          bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar3 <= (pSVar8->_2).naturalAligment) &&
             ((pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
            pSVar8 = (pIVar30->_1).image;
            bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
            if ((bVar3 <= (pSVar8->_2).naturalAligment) &&
               ((pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
              *(int32_t *)((long)puVar27 + -0xc) =
                   ((Settings_TypedSetting_int__Fields *)&(pIVar30->_1).name)->_value;
              pIVar30 = (Il2CppClass *)((long)puVar27 + -0xc);
              *(undefined8 *)((long)puVar27 + -0x20) = 0x4392966;
              pSVar24 = System_Int32__ToString((int32_t)pIVar30,(MethodInfo *)0x0);
              if (pIVar26 != (Il2CppClass *)0x0) {
                pIVar10 = (pIVar26->_1).image;
                uVar11 = *(undefined8 *)(pIVar10 + 0x5f0);
                pcVar12 = *(code **)(pIVar10 + 0x5e8);
                *(undefined8 *)((long)puVar27 + -0x20) = 0x4392981;
                (*pcVar12)(pIVar26,pSVar24,uVar11);
                return;
              }
              goto label_0439298c;
            }
          }
          goto label_04392987;
        }
label_0439298c:
        *(undefined8 *)((long)puVar27 + -0x20) = 0x4392991;
        il2cpp_runtime_helper_022b2c90();
        pIVar29 = pIVar30;
      }
      else {
        if (pIVar30 == (Il2CppClass *)0x0) goto label_0439298c;
        pSVar8 = (pIVar30->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((pSVar8->_2).naturalAligment < bVar3) ||
           ((pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) {
label_04392987:
          *(undefined8 *)((long)puVar27 + -0x20) = 0x439298c;
          il2cpp_runtime_helper_022b2fd0();
          goto label_0439298c;
        }
        pSVar8 = (pIVar30->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((pSVar8->_2).naturalAligment < bVar3) ||
           ((pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto label_04392987;
        uVar4 = ((Settings_TypedSetting_int__Fields *)&(pIVar30->_1).name)->_value;
        pIVar29 = pIVar30;
        if (uVar4 < *(uint *)&(pIVar15->_1).namespaze) {
          if (pIVar26 != (Il2CppClass *)0x0) {
            pvVar9 = (&(pIVar15->_1).byval_arg.data)[(int)uVar4];
            pIVar10 = (pIVar26->_1).image;
            uVar11 = *(undefined8 *)(pIVar10 + 0x5f0);
            pcVar12 = *(code **)(pIVar10 + 0x5e8);
            *(undefined8 *)((long)puVar27 + -0x20) = 0x4392908;
            (*pcVar12)(pIVar26,pvVar9,uVar11);
            return;
          }
          goto label_0439298c;
        }
      }
      *(undefined8 *)((long)puVar27 + -0x20) = 0x4392996;
      il2cpp_runtime_helper_022b2ca0();
      puVar27 = (undefined8 *)((long)puVar27 + -0x18);
    } while( true );
  }
label_043927de:
  UI_IncrementSettingElement__UpdateValueLabel((UI_IncrementSettingElement_o *)pIVar26,(MethodInfo *)pIVar15);
  pIVar29 = (pIVar26->_1).castClass;
  if (pIVar29 != (Il2CppClass *)0x0) {
    (*(code *)(pIVar29->_1).namespaze)
              ((pIVar29->_1).element_class,*(undefined8 *)&(pIVar29->_1).byval_arg.bits);
    return;
  }
  return;
label_04392373:
  pIStackY_210 = (Il2CppClass *)0x439237b;
  pIVar25 = TypeInfo_Action;
  pIVar26 = pIVar15;
  il2cpp_runtime_helper_022b2fd0();
  pIVar15 = pIVar25;
label_0439237b:
  pIVar25 = pIVar28;
  if (pIVar20 != (Il2CppClass *)0x0) {
    pSVar6 = (pIVar20->_1).image;
    pIVar15 = pSVar6[1]._1.methods;
    pIStackY_210 = (Il2CppClass *)0x43923a3;
    pIVar26 = pIVar20;
    (*pSVar6[1]._1.properties)(uVar32);
    pIVar28 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar25 = pIVar19;
    in_R9 = (Il2CppClass *)puVar1;
    if (pIVar19 != (Il2CppClass *)0x0) {
      pSVar6 = (pIVar19->_1).image;
      pIStackY_210 = (Il2CppClass *)0x43923e1;
      (*pSVar6[1]._1.properties)(uVar32,pIVar19,pSVar6[1]._1.methods);
      pSVar6 = (pIVar20->_1).image;
      pIStackY_210 = (Il2CppClass *)0x43923fb;
      (*(code *)pSVar6[1]._1.interfaceOffsets)(in_XMM1_Da,pIVar20,pSVar6[1].static_fields);
      pSVar6 = (pIVar19->_1).image;
      pIVar15 = (Il2CppClass *)pSVar6[1].static_fields;
      pIStackY_210 = (Il2CppClass *)0x4392414;
      (*(code *)pSVar6[1]._1.interfaceOffsets)(in_XMM1_Da,pIVar19);
      pIVar26 = (Il2CppClass *)0x0;
      if (*(UnityEngine_Component_o **)puVar1 != (UnityEngine_Component_o *)0x0) {
        pIStackY_210 = (Il2CppClass *)0x439242c;
        pIVar19 = (Il2CppClass *)
                  UnityEngine_Component__GetComponent_object_
                            (*(UnityEngine_Component_o **)puVar1,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStackY_210 = (Il2CppClass *)0x4392447;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = (Il2CppClass *)0x0;
        pIStackY_210 = (Il2CppClass *)0x4392453;
        pIVar26 = pIVar19;
        bVar14 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pIVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          pIVar28 = (Il2CppClass *)0x0;
          if (pIVar19 == (Il2CppClass *)0x0) goto label_04392707;
          pSVar6 = (pIVar19->_1).image;
          uVar11._0_4_ = pSVar6[1]._2.initializationExceptionGCHandle;
          uVar11._4_4_ = pSVar6[1]._2.cctor_started;
          pIStackY_210 = (Il2CppClass *)0x4392477;
          (*pSVar6[1]._2.unity_user_data)(0,pIVar19,uVar11);
          pSVar6 = (pIVar19->_1).image;
          pIStackY_210 = (Il2CppClass *)0x4392493;
          (*(code *)pSVar6[1]._1.declaringType)(0xbf800000,pIVar19,pSVar6[1]._1.parent);
          pSVar6 = (pIVar19->_1).image;
          pIStackY_210 = (Il2CppClass *)0x43924af;
          (*pSVar6[1]._1.properties)(0xbf800000,pIVar19,pSVar6[1]._1.methods);
        }
        pIStackY_210 = (Il2CppClass *)0x43924d5;
        UI_BaseSettingElement__Setup
                  ((UI_BaseSettingElement_o *)pIVar30,(Settings_BaseSetting_o *)pIVar29,style,
                   (System_String_o *)in_RCX,in_R8,(MethodInfo *)0x0);
        pSVar24 = (style->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pIStackY_210 = (Il2CppClass *)0x43924f2;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar30 = (Il2CppClass *)&"DefaultButton";
        pIVar28 = (Il2CppClass *)&"";
        in_R9 = (Il2CppClass *)&"DefaultPanel";
        pIStackY_210 = (Il2CppClass *)0x4392524;
        UI_UIManager__GetThemeColorBlock
                  (&UStack_160,pSVar24,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
        fStack_58 = UStack_160.fields.m_ColorMultiplier;
        fStack_54 = UStack_160.fields.m_FadeDuration;
        UStack_68.r = UStack_160.fields.m_DisabledColor.fields.r;
        UStack_68.g = UStack_160.fields.m_DisabledColor.fields.g;
        UStack_68.b = UStack_160.fields.m_DisabledColor.fields.b;
        UStack_68.a = UStack_160.fields.m_DisabledColor.fields.a;
        UStack_78.r = UStack_160.fields.m_SelectedColor.fields.r;
        UStack_78.g = UStack_160.fields.m_SelectedColor.fields.g;
        UStack_78.b = UStack_160.fields.m_SelectedColor.fields.b;
        UStack_78.a = UStack_160.fields.m_SelectedColor.fields.a;
        UStack_88.r = UStack_160.fields.m_PressedColor.fields.r;
        UStack_88.g = UStack_160.fields.m_PressedColor.fields.g;
        UStack_88.b = UStack_160.fields.m_PressedColor.fields.b;
        UStack_88.a = UStack_160.fields.m_PressedColor.fields.a;
        UStack_98.r = UStack_160.fields.m_HighlightedColor.fields.r;
        UStack_98.g = UStack_160.fields.m_HighlightedColor.fields.g;
        UStack_98.b = UStack_160.fields.m_HighlightedColor.fields.b;
        UStack_98.a = UStack_160.fields.m_HighlightedColor.fields.a;
        UStack_a8.r = UStack_160.fields.m_NormalColor.fields.r;
        UStack_a8.g = UStack_160.fields.m_NormalColor.fields.g;
        UStack_a8.b = UStack_160.fields.m_NormalColor.fields.b;
        UStack_a8.a = UStack_160.fields.m_NormalColor.fields.a;
        pIStackY_210 = (Il2CppClass *)0x43925dd;
        value.fields.m_NormalColor.fields.b = UStack_160.fields.m_NormalColor.fields.b;
        value.fields.m_NormalColor.fields.a = UStack_160.fields.m_NormalColor.fields.a;
        value.fields.m_NormalColor.fields.r = UStack_160.fields.m_NormalColor.fields.r;
        value.fields.m_NormalColor.fields.g = UStack_160.fields.m_NormalColor.fields.g;
        value.fields.m_HighlightedColor.fields.r = UStack_160.fields.m_HighlightedColor.fields.r;
        value.fields.m_HighlightedColor.fields.g = UStack_160.fields.m_HighlightedColor.fields.g;
        value.fields.m_HighlightedColor.fields.b = UStack_160.fields.m_HighlightedColor.fields.b;
        value.fields.m_HighlightedColor.fields.a = UStack_160.fields.m_HighlightedColor.fields.a;
        value.fields.m_PressedColor.fields.r = UStack_160.fields.m_PressedColor.fields.r;
        value.fields.m_PressedColor.fields.g = UStack_160.fields.m_PressedColor.fields.g;
        value.fields.m_PressedColor.fields.b = UStack_160.fields.m_PressedColor.fields.b;
        value.fields.m_PressedColor.fields.a = UStack_160.fields.m_PressedColor.fields.a;
        value.fields.m_SelectedColor.fields.r = UStack_160.fields.m_SelectedColor.fields.r;
        value.fields.m_SelectedColor.fields.g = UStack_160.fields.m_SelectedColor.fields.g;
        value.fields.m_SelectedColor.fields.b = UStack_160.fields.m_SelectedColor.fields.b;
        value.fields.m_SelectedColor.fields.a = UStack_160.fields.m_SelectedColor.fields.a;
        value.fields.m_DisabledColor.fields.r = UStack_160.fields.m_DisabledColor.fields.r;
        value.fields.m_DisabledColor.fields.g = UStack_160.fields.m_DisabledColor.fields.g;
        value.fields.m_DisabledColor.fields.b = UStack_160.fields.m_DisabledColor.fields.b;
        value.fields.m_DisabledColor.fields.a = UStack_160.fields.m_DisabledColor.fields.a;
        value.fields.m_ColorMultiplier = UStack_160.fields.m_ColorMultiplier;
        value.fields.m_FadeDuration = UStack_160.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pIVar16,value,(MethodInfo *)0x0);
        pIStackY_210 = (Il2CppClass *)0x43925fc;
        UI_UIManager__GetThemeColorBlock
                  (&UStack_160,(style->fields).ThemePanel,"DefaultButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        aUStack_c8[1].r = UStack_160.fields.m_ColorMultiplier;
        aUStack_c8[1].g = UStack_160.fields.m_FadeDuration;
        aUStack_c8[0].r = UStack_160.fields.m_DisabledColor.fields.r;
        aUStack_c8[0].g = UStack_160.fields.m_DisabledColor.fields.g;
        aUStack_c8[0].b = UStack_160.fields.m_DisabledColor.fields.b;
        aUStack_c8[0].a = UStack_160.fields.m_DisabledColor.fields.a;
        UStack_d8.r = UStack_160.fields.m_SelectedColor.fields.r;
        UStack_d8.g = UStack_160.fields.m_SelectedColor.fields.g;
        UStack_d8.b = UStack_160.fields.m_SelectedColor.fields.b;
        UStack_d8.a = UStack_160.fields.m_SelectedColor.fields.a;
        UStack_e8.r = UStack_160.fields.m_PressedColor.fields.r;
        UStack_e8.g = UStack_160.fields.m_PressedColor.fields.g;
        UStack_e8.b = UStack_160.fields.m_PressedColor.fields.b;
        UStack_e8.a = UStack_160.fields.m_PressedColor.fields.a;
        UStack_f8.r = UStack_160.fields.m_HighlightedColor.fields.r;
        UStack_f8.g = UStack_160.fields.m_HighlightedColor.fields.g;
        UStack_f8.b = UStack_160.fields.m_HighlightedColor.fields.b;
        UStack_f8.a = UStack_160.fields.m_HighlightedColor.fields.a;
        UStack_108.r = UStack_160.fields.m_NormalColor.fields.r;
        UStack_108.g = UStack_160.fields.m_NormalColor.fields.g;
        UStack_108.b = UStack_160.fields.m_NormalColor.fields.b;
        UStack_108.a = UStack_160.fields.m_NormalColor.fields.a;
        pIStackY_210 = (Il2CppClass *)0x43926b5;
        value_00.fields.m_NormalColor.fields.b = UStack_160.fields.m_NormalColor.fields.b;
        value_00.fields.m_NormalColor.fields.a = UStack_160.fields.m_NormalColor.fields.a;
        value_00.fields.m_NormalColor.fields.r = UStack_160.fields.m_NormalColor.fields.r;
        value_00.fields.m_NormalColor.fields.g = UStack_160.fields.m_NormalColor.fields.g;
        value_00.fields.m_HighlightedColor.fields.r = UStack_160.fields.m_HighlightedColor.fields.r;
        value_00.fields.m_HighlightedColor.fields.g = UStack_160.fields.m_HighlightedColor.fields.g;
        value_00.fields.m_HighlightedColor.fields.b = UStack_160.fields.m_HighlightedColor.fields.b;
        value_00.fields.m_HighlightedColor.fields.a = UStack_160.fields.m_HighlightedColor.fields.a;
        value_00.fields.m_PressedColor.fields.r = UStack_160.fields.m_PressedColor.fields.r;
        value_00.fields.m_PressedColor.fields.g = UStack_160.fields.m_PressedColor.fields.g;
        value_00.fields.m_PressedColor.fields.b = UStack_160.fields.m_PressedColor.fields.b;
        value_00.fields.m_PressedColor.fields.a = UStack_160.fields.m_PressedColor.fields.a;
        value_00.fields.m_SelectedColor.fields.r = UStack_160.fields.m_SelectedColor.fields.r;
        value_00.fields.m_SelectedColor.fields.g = UStack_160.fields.m_SelectedColor.fields.g;
        value_00.fields.m_SelectedColor.fields.b = UStack_160.fields.m_SelectedColor.fields.b;
        value_00.fields.m_SelectedColor.fields.a = UStack_160.fields.m_SelectedColor.fields.a;
        value_00.fields.m_DisabledColor.fields.r = UStack_160.fields.m_DisabledColor.fields.r;
        value_00.fields.m_DisabledColor.fields.g = UStack_160.fields.m_DisabledColor.fields.g;
        value_00.fields.m_DisabledColor.fields.b = UStack_160.fields.m_DisabledColor.fields.b;
        value_00.fields.m_DisabledColor.fields.a = UStack_160.fields.m_DisabledColor.fields.a;
        value_00.fields.m_ColorMultiplier = UStack_160.fields.m_ColorMultiplier;
        value_00.fields.m_FadeDuration = UStack_160.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)pIVar18,value_00,(MethodInfo *)0x0);
        plVar7 = *(long **)puVar1;
        pIVar26 = (Il2CppClass *)(style->fields).ThemePanel;
        pIStackY_210 = (Il2CppClass *)0x43926dd;
        pIVar15 = "DefaultSetting";
        UVar33 = UI_UIManager__GetThemeColor
                           ((System_String_o *)pIVar26,(System_String_o *)"DefaultSetting","TextColor",
                            "DefaultPanel",(MethodInfo *)0x0);
        pIVar25 = (Il2CppClass *)0x0;
        if (plVar7 != (long *)0x0) {
          pIStackY_210 = (Il2CppClass *)0x43926f5;
          (**(code **)(*plVar7 + 0x2a8))
                    (UVar33.fields.r,UVar33.fields.b,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
          return;
        }
      }
    }
  }
  goto label_04392707;
}


// UI.IconPickSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IconPickSettingElement__get_SupportedSettingTypes (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x43916f0

System_Collections_Generic_HashSet_SettingType__o *
UI_IconPickSettingElement__get_SupportedSettingTypes(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  System_String_o *panel;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_ColorBlock_o value;
  System_Collections_Generic_HashSet_Slot_T__o *pSVar1;
  Il2CppObject **ppIVar2;
  int32_t iVar3;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar4;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar5;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  System_String_o *in_RCX;
  UI_ElementStyle_o *style;
  System_Collections_Generic_IEqualityComparer_T__o *unaff_RBX;
  MethodInfo_33DA550 *setting;
  System_Collections_Generic_HashSet_Slot_T__array *__this_04;
  Il2CppObject *in_R8;
  Il2CppObject *in_R9;
  System_Int32_array *unaff_R14;
  float fVar8;
  float in_XMM1_Da;
  UnityEngine_Color_o UVar9;
  System_String_o *unaff_retaddr;
  Il2CppObject *in_stack_00000008;
  System_Runtime_Serialization_SerializationInfo_o *in_stack_00000010;
  Il2CppClass *pIStack_a0;
  void *pvStack_98;
  Il2CppArrayBounds *pIStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int32_t iStack_80;
  int32_t iStack_7c;
  Il2CppObject *pIStack_78;
  int32_t iStack_70;
  int32_t iStack_6c;
  Il2CppObject *pIStack_68;
  int32_t iStack_60;
  int32_t iStack_5c;
  Il2CppObject *pIStack_58;
  int32_t iStack_50;
  int32_t iStack_4c;
  System_Collections_Generic_HashSet_Slot_T__array *pSStack_48;
  
  if (g_data_057ae2af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2af = '\x01';
  }
  pSVar4 = (System_Collections_Generic_HashSet_Slot_T__array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  setting = MethodInfo_HashSet_1_Settings_SettingType;
  __this_04 = pSVar4;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pSVar4,MethodInfo_HashSet_1_Settings_SettingType);
  if (pSVar4 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,2,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)pSVar4;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pSStack_48 = pSVar4;
  if (g_data_057ae2b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2b0 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_Slot_T__array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  pSVar4 = pSVar5;
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  if (pSVar5 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
    ((UnityEngine_Events_UnityAction_Fields *)&pSVar5->bounds)->method_ptr = (intptr_t)unaff_R14;
    il2cpp_runtime_helper_022b4080((UnityEngine_Events_UnityAction_Fields *)&pSVar5->bounds);
    pSVar5->max_length = (il2cpp_array_size_t)__this_04;
    il2cpp_runtime_helper_022b4080(&pSVar5->max_length,__this_04);
    pSVar1 = pSVar5->m_Items;
    *(Il2CppObject **)&pSVar5->m_Items[0].fields = in_R8;
    il2cpp_runtime_helper_022b4080(pSVar1,in_R8);
    pSVar5->m_Items[0].fields.value = in_R9;
    il2cpp_runtime_helper_022b4080(&pSVar5->m_Items[0].fields.value,in_R9);
    *(System_Collections_Generic_IEqualityComparer_T__o **)&pSVar5->m_Items[1].fields = unaff_RBX;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,unaff_RBX);
    pSVar5->m_Items[1].fields.value = in_stack_00000008;
    il2cpp_runtime_helper_022b4080(&pSVar5->m_Items[1].fields.value,in_stack_00000008);
    *(System_Runtime_Serialization_SerializationInfo_o **)&pSVar5->m_Items[2].fields = in_stack_00000010;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2);
    pSVar4 = __this_04;
    pSVar5 = (System_Collections_Generic_HashSet_Slot_T__array *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    if (pSVar5 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
      pSVar6 = (System_Collections_Generic_HashSet_Slot_T__array *)
               UnityEngine_Transform__Find((UnityEngine_Transform_o *)pSVar5,"Button",(MethodInfo *)0x0);
      pSVar4 = pSVar5;
      if (pSVar6 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
        pSVar5 = (System_Collections_Generic_HashSet_Slot_T__array *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0);
        if (0.0 < fVar8) {
          pSVar4 = pSVar6;
          if (pSVar5 == (System_Collections_Generic_HashSet_Slot_T__array *)0x0) goto label_04391c84;
          pSVar4 = pSVar5;
          pSVar6 = (System_Collections_Generic_HashSet_Slot_T__array *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pSVar6 == (System_Collections_Generic_HashSet_Slot_T__array *)0x0) goto label_04391c84;
          (**(code **)((long)((System_Collections_Generic_HashSet_T__VTable *)((pSVar6->obj).klass)->vtable +
                             1) + 0x70))(fVar8);
        }
        if (0.0 < in_XMM1_Da) {
          pSVar4 = pSVar6;
          if (pSVar5 == (System_Collections_Generic_HashSet_Slot_T__array *)0x0) goto label_04391c84;
          pSVar4 = pSVar5;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar7 == (Il2CppObject *)0x0) goto label_04391c84;
          (*pIVar7->klass->vtable[0x26].methodPtr)(in_XMM1_Da,pIVar7,pIVar7->klass->vtable[0x26].method);
        }
        iVar3 = (pSVar1->fields).next;
        pSVar4 = (System_Collections_Generic_HashSet_Slot_T__array *)(__this_04->m_Items + 2);
        __this_04->m_Items[2].fields.hashCode = (pSVar1->fields).hashCode;
        __this_04->m_Items[2].fields.next = iVar3;
        il2cpp_runtime_helper_022b4080();
        if (pSVar5 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
          pSVar4 = pSVar5;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSVar5,MethodInfo_Button_GetComponent_Button);
          if (pIVar7 != (Il2CppObject *)0x0) {
            __this_00 = pIVar7[0x10].klass;
            pSVar6 = (System_Collections_Generic_HashSet_Slot_T__array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar4 = pSVar6;
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (Il2CppClass *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener
                        ((UnityEngine_Events_UnityEvent_o *)__this_00,
                         (UnityEngine_Events_UnityAction_o *)pSVar6,(MethodInfo *)0x0);
              pSVar4 = pSVar5;
              __this_02 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar5,MethodInfo_Button_GetComponent_Button);
              if (style != (UI_ElementStyle_o *)0x0) {
                panel = (style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar4 = (System_Collections_Generic_HashSet_Slot_T__array *)&stack0xffffffffffffff60;
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)pSVar4,panel,"DefaultButton","","DefaultPanel",
                           (MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                  value.fields.m_NormalColor.fields._8_8_ = pvStack_98;
                  value.fields.m_NormalColor.fields._0_8_ = pIStack_a0;
                  value.fields.m_HighlightedColor.fields._0_8_ = pIStack_90;
                  value.fields.m_HighlightedColor.fields.b = (float)uStack_88;
                  value.fields.m_HighlightedColor.fields.a = (float)uStack_84;
                  value.fields.m_PressedColor.fields.r = (float)iStack_80;
                  value.fields.m_PressedColor.fields.g = (float)iStack_7c;
                  value.fields.m_PressedColor.fields._8_8_ = pIStack_78;
                  value.fields.m_SelectedColor.fields.r = (float)iStack_70;
                  value.fields.m_SelectedColor.fields.g = (float)iStack_6c;
                  value.fields.m_SelectedColor.fields._8_8_ = pIStack_68;
                  value.fields.m_DisabledColor.fields.r = (float)iStack_60;
                  value.fields.m_DisabledColor.fields.g = (float)iStack_5c;
                  value.fields.m_DisabledColor.fields._8_8_ = pIStack_58;
                  value.fields.m_ColorMultiplier = (float)iStack_50;
                  value.fields.m_FadeDuration = (float)iStack_4c;
                  UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                  pSVar6 = (System_Collections_Generic_HashSet_Slot_T__array *)
                           UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo *)0x0);
                  pSVar4 = pSVar5;
                  if (pSVar6 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
                    __this_03 = UnityEngine_Transform__Find
                                          ((UnityEngine_Transform_o *)pSVar6,"Text",(MethodInfo *)0x0);
                    pSVar4 = pSVar6;
                    if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                      pIVar7 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)__this_03,MethodInfo_Text_GetComponent_Text);
                      ppIVar2 = &__this_04->m_Items[1].fields.value;
                      __this_04->m_Items[1].fields.value = pIVar7;
                      il2cpp_runtime_helper_022b4080(ppIVar2);
                      __this_01 = (UnityEngine_UI_Text_o *)__this_04->m_Items[1].fields.value;
                      pSVar4 = (System_Collections_Generic_HashSet_Slot_T__array *)0x0;
                      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_fontSize
                                  (__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
                        pIVar7 = *ppIVar2;
                        pSVar4 = (System_Collections_Generic_HashSet_Slot_T__array *)
                                 (style->fields).ThemePanel;
                        UVar9 = UI_UIManager__GetThemeColor
                                          ((System_String_o *)pSVar4,"DefaultButton","TextColor","DefaultPanel",
                                           (MethodInfo *)0x0);
                        if (pIVar7 != (Il2CppObject *)0x0) {
                          (*pIVar7->klass->vtable[0x17].methodPtr)
                                    (UVar9.fields.r,UVar9.fields.b,pIVar7,pIVar7->klass->vtable[0x17].method);
                          UI_BaseSettingElement__Setup
                                    ((UI_BaseSettingElement_o *)__this_04,(Settings_BaseSetting_o *)setting,
                                     style,in_RCX,unaff_retaddr,(MethodInfo *)0x0);
                          return extraout_RAX;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04391c84:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar4->obj,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// UI.IconPickSettingElement$$Setup
// il2cpp: void UI_IconPickSettingElement__Setup (UI_IconPickSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_array* iconPaths, System_String_array* tooltips, UI_IconPickPopup_o* iconPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x4391790

void UI_IconPickSettingElement__Setup
               (UI_IconPickSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_array *iconPaths,
               System_String_array *tooltips,UI_IconPickPopup_o *iconPickPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onSelect,
               UI_TooltipPopup_o *tooltipPopup,MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  Il2CppClass *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_UI_Selectable_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Events_UnityAction_o *panel_00;
  UnityEngine_Color_o UVar7;
  UnityEngine_Events_UnityAction_c *local_88;
  void *pvStack_80;
  intptr_t local_78;
  intptr_t iStack_70;
  Il2CppObject *local_68;
  intptr_t iStack_60;
  intptr_t local_58;
  intptr_t iStack_50;
  intptr_t local_48;
  intptr_t iStack_40;
  intptr_t local_38;
  
  if (g_data_057ae2b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2b0 = '\x01';
  }
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  panel_00 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar3->fields).method_ptr = (intptr_t)iconPickPopup;
    il2cpp_runtime_helper_022b4080(&pUVar3->fields);
    (pUVar3->fields).invoke_impl = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).invoke_impl,__this);
    ppIVar1 = &(pUVar3->fields).m_target;
    (pUVar3->fields).m_target = &options->obj;
    il2cpp_runtime_helper_022b4080(ppIVar1,options);
    (pUVar3->fields).method = (intptr_t)iconPaths;
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).method,iconPaths);
    (pUVar3->fields).delegate_trampoline = (intptr_t)tooltips;
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).delegate_trampoline,tooltips);
    (pUVar3->fields).extra_arg = (intptr_t)onSelect;
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).extra_arg,onSelect);
    (pUVar3->fields).method_code = (intptr_t)tooltipPopup;
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).method_code);
    panel_00 = (UnityEngine_Events_UnityAction_o *)__this;
    pUVar3 = (UnityEngine_Events_UnityAction_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar4 = (UnityEngine_Events_UnityAction_o *)
               UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar3,"Button",(MethodInfo *)0x0);
      panel_00 = pUVar3;
      if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        if (0.0 < elementWidth) {
          panel_00 = pUVar4;
          if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_04391c84;
          panel_00 = pUVar3;
          pUVar4 = (UnityEngine_Events_UnityAction_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_04391c84;
          (*((System_String_c *)pUVar4->klass)[1]._1.properties)(elementWidth);
        }
        if (0.0 < elementHeight) {
          panel_00 = pUVar4;
          if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_04391c84;
          panel_00 = pUVar3;
          pIVar5 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar5 == (Il2CppObject *)0x0) goto label_04391c84;
          (*pIVar5->klass->vtable[0x26].methodPtr)(elementHeight,pIVar5,pIVar5->klass->vtable[0x26].method);
        }
        panel_00 = (UnityEngine_Events_UnityAction_o *)&(__this->fields)._options;
        (__this->fields)._options = (System_String_array *)*ppIVar1;
        il2cpp_runtime_helper_022b4080();
        if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
          panel_00 = pUVar3;
          pIVar5 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar3,MethodInfo_Button_GetComponent_Button);
          if (pIVar5 != (Il2CppObject *)0x0) {
            __this_00 = pIVar5[0x10].klass;
            pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            panel_00 = pUVar4;
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (Il2CppClass *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener
                        ((UnityEngine_Events_UnityEvent_o *)__this_00,pUVar4,(MethodInfo *)0x0);
              panel_00 = pUVar3;
              __this_01 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pUVar3,MethodInfo_Button_GetComponent_Button);
              if (style != (UI_ElementStyle_o *)0x0) {
                panel = (style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                panel_00 = (UnityEngine_Events_UnityAction_o *)&local_88;
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)panel_00,panel,"DefaultButton","",
                           "DefaultPanel",(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
                  value.fields.m_NormalColor.fields._8_8_ = pvStack_80;
                  value.fields.m_NormalColor.fields._0_8_ = local_88;
                  value.fields.m_HighlightedColor.fields.r = (float)(undefined4)local_78;
                  value.fields.m_HighlightedColor.fields.g = (float)local_78._4_4_;
                  value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_70;
                  value.fields.m_HighlightedColor.fields.a = (float)iStack_70._4_4_;
                  value.fields.m_PressedColor.fields._0_8_ = local_68;
                  value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_60;
                  value.fields.m_PressedColor.fields.a = (float)iStack_60._4_4_;
                  value.fields.m_SelectedColor.fields.r = (float)(undefined4)local_58;
                  value.fields.m_SelectedColor.fields.g = (float)local_58._4_4_;
                  value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_50;
                  value.fields.m_SelectedColor.fields.a = (float)iStack_50._4_4_;
                  value.fields.m_DisabledColor.fields.r = (float)(undefined4)local_48;
                  value.fields.m_DisabledColor.fields.g = (float)local_48._4_4_;
                  value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_40;
                  value.fields.m_DisabledColor.fields.a = (float)iStack_40._4_4_;
                  value.fields.m_ColorMultiplier = (float)(undefined4)local_38;
                  value.fields.m_FadeDuration = (float)local_38._4_4_;
                  UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Events_UnityAction_o *)
                           UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
                  panel_00 = pUVar3;
                  if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
                    __this_02 = UnityEngine_Transform__Find
                                          ((UnityEngine_Transform_o *)pUVar4,"Text",(MethodInfo *)0x0);
                    panel_00 = pUVar4;
                    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                      pUVar6 = (UnityEngine_UI_Text_o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)__this_02,MethodInfo_Text_GetComponent_Text);
                      ppUVar2 = &(__this->fields)._label;
                      (__this->fields)._label = pUVar6;
                      il2cpp_runtime_helper_022b4080(ppUVar2);
                      pUVar6 = (__this->fields)._label;
                      panel_00 = (UnityEngine_Events_UnityAction_o *)0x0;
                      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_fontSize(pUVar6,(style->fields).FontSize,(MethodInfo *)0x0);
                        pUVar6 = *ppUVar2;
                        panel_00 = (UnityEngine_Events_UnityAction_o *)(style->fields).ThemePanel;
                        UVar7 = UI_UIManager__GetThemeColor
                                          ((System_String_o *)panel_00,"DefaultButton","TextColor","DefaultPanel",
                                           (MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                    (UVar7.fields.r,UVar7.fields.b,pUVar6,
                                     (pUVar6->klass->vtable)._23_set_color.method);
                          UI_BaseSettingElement__Setup
                                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                     (MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04391c84:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)panel_00,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement$$SyncElement
// il2cpp: void UI_IconPickSettingElement__SyncElement (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x4391ca0

void UI_IconPickSettingElement__SyncElement(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_Text_c *pUVar5;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_String_array *pSVar6;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057ae2b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2b1 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
    if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_04391e4a;
      pSVar6 = (__this->fields)._options;
      if (pSVar6 != (System_String_array *)0x0) {
        if ((int)pSVar6->max_length <= *(int32_t *)((long)&(__this_00->fields).m_CachedPtr + 4)) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,0,MethodInfo_Void_set_Value);
          __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
          if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_04391e45;
          pSVar6 = (__this->fields)._options;
        }
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((((Settings_TypedSetting_int__c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((Settings_TypedSetting_int__c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            TypeInfo_IntSetting)) goto label_04391e4a;
        if (pSVar6 != (System_String_array *)0x0) {
          uVar3 = *(int32_t *)((long)&(__this_00->fields).m_CachedPtr + 4);
          if ((uint)pSVar6->max_length <= uVar3) goto UI_BaseSettingElement___ctor;
          pUVar4 = (__this->fields)._label;
          __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = (pUVar4->klass->vtable)._75_set_text.methodPtr;
            (*UNRECOVERED_JUMPTABLE_00)
                      (pUVar4,pSVar6->m_Items[(int)uVar3],(pUVar4->klass->vtable)._75_set_text.method,
                       UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
      }
    }
label_04391e45:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
    if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_04391e45;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (((Settings_TypedSetting_int__c *)__this_00->klass)->_2).naturalAligment) &&
       ((((Settings_TypedSetting_int__c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        TypeInfo_StringSetting)) {
      pUVar4 = (__this->fields)._label;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar5 = pUVar4->klass;
        UNRECOVERED_JUMPTABLE_00 = (pUVar5->vtable)._75_set_text.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar4,(__this_00->fields).m_CancellationTokenSource,(pUVar5->vtable)._75_set_text.method,
                   pUVar5,UNRECOVERED_JUMPTABLE_00);
        return;
      }
      goto label_04391e45;
    }
  }
label_04391e4a:
  il2cpp_runtime_helper_022b2fd0();
UI_BaseSettingElement___ctor:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement$$.ctor
// il2cpp: void UI_IconPickSettingElement___ctor (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x4391e60

void UI_IconPickSettingElement___ctor(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


