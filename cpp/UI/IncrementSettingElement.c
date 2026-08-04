// Type: UI.IncrementSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IncrementSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IncrementSettingElement.cs
// --------------------------------

// UI.IncrementSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IncrementSettingElement__get_SupportedSettingTypes (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4391ec0

System_Collections_Generic_HashSet_SettingType__o *
UI_IncrementSettingElement__get_SupportedSettingTypes(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  UnityEngine_UI_Text_o *__this_00;
  System_String_c *pSVar5;
  long *plVar6;
  Settings_TypedSetting_int__c *pSVar7;
  void *pvVar8;
  Il2CppMethodPointer pIVar9;
  undefined8 uVar10;
  code *pcVar11;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  char cVar12;
  bool_conflict bVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  UnityEngine_Transform_o *pUVar16;
  Il2CppClass *pIVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  UnityEngine_GameObject_o *pUVar20;
  Il2CppObject *pIVar21;
  Il2CppClass *pIVar22;
  System_Collections_Generic_HashSet_SettingType__o *pSVar23;
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
  Il2CppClass *unaff_retaddr;
  Il2CppClass *in_stack_00000008;
  undefined8 uStackY_218;
  Il2CppClass *pIStackY_210;
  Il2CppClass *pIStackY_208;
  Il2CppClass *pIStackY_200;
  Il2CppClass *pIStackY_1f8;
  UnityEngine_UI_ColorBlock_o UStack_148;
  UnityEngine_Color_Fields UStack_f0;
  UnityEngine_Color_Fields UStack_e0;
  UnityEngine_Color_Fields UStack_d0;
  UnityEngine_Color_Fields UStack_c0;
  UnityEngine_Color_Fields aUStack_b0 [2];
  UnityEngine_Color_Fields UStack_90;
  UnityEngine_Color_Fields UStack_80;
  UnityEngine_Color_Fields UStack_70;
  UnityEngine_Color_Fields UStack_60;
  UnityEngine_Color_Fields UStack_50;
  float fStack_40;
  float fStack_3c;
  Il2CppClass *pIStack_38;
  
  if (g_data_057ae2b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2b2 = '\x01';
  }
  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pIVar29 = MethodInfo_HashSet_1_Settings_SettingType;
  pIVar30 = pIVar14;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pIVar14,(MethodInfo_33DA550 *)MethodInfo_HashSet_1_Settings_SettingType);
  if (pIVar14 != (Il2CppClass *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar14,2,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)pIVar14;
  }
  uVar32 = il2cpp_runtime_helper_022b2c90();
  pIStack_38 = pIVar14;
  if (g_data_057ae2b3 == '\0') {
    pIStackY_1f8 = (Il2CppClass *)0x4391f88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pIStackY_1f8 = (Il2CppClass *)0x4391f94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pIStackY_1f8 = (Il2CppClass *)0x4391fa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIStackY_1f8 = (Il2CppClass *)0x4391fac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pIStackY_1f8 = (Il2CppClass *)0x4391fb8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoldableButton_AddComponent_HoldableButton);
    pIStackY_1f8 = (Il2CppClass *)0x4391fc4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_0);
    pIStackY_1f8 = (Il2CppClass *)0x4391fd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_1);
    pIStackY_1f8 = (Il2CppClass *)0x4391fdc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_1f8 = (Il2CppClass *)0x4391fe8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_1f8 = (Il2CppClass *)0x4391ff4;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pIStackY_1f8 = (Il2CppClass *)0x4392000;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pIStackY_1f8 = (Il2CppClass *)0x439200c;
    il2cpp_runtime_helper_023445d0(&"Increment/ValueLabel");
    pIStackY_1f8 = (Il2CppClass *)0x4392018;
    il2cpp_runtime_helper_023445d0(&"Increment/RightButton");
    pIStackY_1f8 = (Il2CppClass *)0x4392024;
    il2cpp_runtime_helper_023445d0(&"Increment/LeftButton");
    pIStackY_1f8 = (Il2CppClass *)0x4392030;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pIStackY_1f8 = (Il2CppClass *)0x439203c;
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    pIStackY_1f8 = (Il2CppClass *)0x4392048;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2b3 = '\x01';
  }
  pIVar14 = (Il2CppClass *)0x0;
  pIStackY_1f8 = (Il2CppClass *)0x4392059;
  pIVar26 = pIVar30;
  pIVar15 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar30,(MethodInfo *)0x0);
  pIVar25 = in_RCX;
  pIVar28 = pIVar29;
  if (pIVar15 != (Il2CppClass *)0x0) {
    pIStackY_1f8 = (Il2CppClass *)0x4392076;
    pIVar14 = "Increment/ValueLabel";
    pUVar16 = UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pIVar15,(System_String_o *)"Increment/ValueLabel",(MethodInfo *)0x0)
    ;
    pIVar26 = pIVar15;
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      pIStackY_1f8 = (Il2CppClass *)0x4392091;
      pIVar14 = (Il2CppClass *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar16,MethodInfo_Text_GetComponent_Text);
      puVar1 = &(pIVar30->_1).this_arg.bits;
      *(Il2CppClass **)&(pIVar30->_1).this_arg.bits = pIVar14;
      pIStackY_1f8 = (Il2CppClass *)0x43920a9;
      pIVar26 = (Il2CppClass *)puVar1;
      il2cpp_runtime_helper_022b4080();
      if (style != (UI_ElementStyle_o *)0x0) {
        __this_00 = *(UnityEngine_UI_Text_o **)&(pIVar30->_1).this_arg.bits;
        pIVar26 = (Il2CppClass *)0x0;
        if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
          pIStackY_1f8 = (Il2CppClass *)0x43920eb;
          UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
          (pIVar30->_1).element_class = in_R9;
          pIStackY_1f8 = (Il2CppClass *)0x43920fb;
          il2cpp_runtime_helper_022b4080(&(pIVar30->_1).element_class,in_R9);
          (pIVar30->_1).castClass = unaff_retaddr;
          pIStackY_1f8 = (Il2CppClass *)0x439210b;
          il2cpp_runtime_helper_022b4080(&(pIVar30->_1).castClass,unaff_retaddr);
          (pIVar30->_1).declaringType = in_stack_00000008;
          pIStackY_1f8 = (Il2CppClass *)0x439211b;
          il2cpp_runtime_helper_022b4080(&(pIVar30->_1).declaringType);
          pIVar14 = (Il2CppClass *)0x0;
          pIStackY_1f8 = (Il2CppClass *)0x4392125;
          pIVar26 = pIVar30;
          pIVar15 = (Il2CppClass *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar30,(MethodInfo *)0x0)
          ;
          pIVar25 = in_stack_00000008;
          pIVar28 = unaff_retaddr;
          if (pIVar15 != (Il2CppClass *)0x0) {
            pIStackY_1f8 = (Il2CppClass *)0x4392142;
            pIVar14 = "Increment/LeftButton";
            pUVar16 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pIVar15,(System_String_o *)"Increment/LeftButton",
                                 (MethodInfo *)0x0);
            pIVar25 = in_stack_00000008;
            pIVar26 = pIVar15;
            if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
              pIStackY_1f8 = (Il2CppClass *)0x439215e;
              pIVar15 = (Il2CppClass *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar16,(MethodInfo_24E7B40 *)MethodInfo_Button_GetComponent_Button);
              pIVar14 = (Il2CppClass *)0x0;
              pIStackY_1f8 = (Il2CppClass *)0x439216b;
              pIVar26 = pIVar30;
              pIVar17 = (Il2CppClass *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pIVar30,(MethodInfo *)0x0);
              pIVar25 = pIVar15;
              pIVar28 = (Il2CppClass *)&MethodInfo_Button_GetComponent_Button;
              if (pIVar17 != (Il2CppClass *)0x0) {
                pIStackY_1f8 = (Il2CppClass *)0x4392190;
                pIVar14 = "Increment/RightButton";
                pIVar18 = (Il2CppClass *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pIVar17,(System_String_o *)"Increment/RightButton",
                                     (MethodInfo *)0x0);
                pIVar26 = pIVar17;
                if (pIVar18 != (Il2CppClass *)0x0) {
                  pIStackY_1f8 = (Il2CppClass *)0x43921a5;
                  pIVar14 = MethodInfo_Button_GetComponent_Button;
                  pIVar17 = (Il2CppClass *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pIVar18,(MethodInfo_24E7B40 *)MethodInfo_Button_GetComponent_Button);
                  pIVar26 = pIVar18;
                  if (pIVar15 != (Il2CppClass *)0x0) {
                    pIStackY_1f8 = (Il2CppClass *)0x43921c4;
                    pIVar14 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    pIVar26 = pIVar15;
                    pIVar18 = (Il2CppClass *)
                              UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pIVar15,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement
                                        );
                    pIVar28 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    if (pIVar17 != (Il2CppClass *)0x0) {
                      pIStackY_1f8 = (Il2CppClass *)0x43921e6;
                      pIVar19 = (Il2CppClass *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pIVar17,
                                           (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      pIVar14 = (Il2CppClass *)0x0;
                      pIStackY_1f8 = (Il2CppClass *)0x43921f8;
                      pIVar26 = pIVar15;
                      pUVar20 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar15,(MethodInfo *)0x0);
                      pIVar28 = pIVar19;
                      if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                        pIStackY_1f8 = (Il2CppClass *)0x4392213;
                        pIVar21 = UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                        in_R9 = (Il2CppClass *)&TypeInfo_Action;
                        pIStackY_1f8 = (Il2CppClass *)0x4392225;
                        pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                        pIStackY_1f8 = (Il2CppClass *)0x439223f;
                        pIVar14 = pIVar30;
                        pIVar26 = pIVar22;
                        System_Action___ctor();
                        pIVar25 = (Il2CppClass *)0x0;
                        if (pIVar21 != (Il2CppObject *)0x0) {
                          if (g_data_057ae2ad == '\0') {
                            pIStackY_1f8 = (Il2CppClass *)0x4392267;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                            g_data_057ae2ad = '\x01';
                          }
                          pIVar26 = pIVar21[4].klass;
                          do {
                            pIStackY_1f8 = (Il2CppClass *)0x43922a6;
                            pIVar14 = (Il2CppClass *)
                                      System_Delegate__Combine
                                                ((System_Delegate_o *)pIVar26,(System_Delegate_o *)pIVar22,
                                                 (MethodInfo *)0x0);
                            if ((pIVar14 != (Il2CppClass *)0x0) &&
                               (pIVar28 = pIVar26, (pIVar14->_1).image != TypeInfo_Action)) goto label_04392373;
                            pIStackY_1f8 = (Il2CppClass *)0x439228e;
                            pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_02300640(pIVar21 + 4,pIVar14,pIVar26);
                            bVar31 = pIVar26 != pIVar28;
                            pIVar26 = pIVar28;
                          } while (bVar31);
                          pIVar14 = (Il2CppClass *)0x0;
                          pIStackY_1f8 = (Il2CppClass *)0x43922c4;
                          pIVar26 = pIVar17;
                          pUVar20 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pIVar17,(MethodInfo *)0x0);
                          pIVar25 = pIVar28;
                          if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                            pIStackY_1f8 = (Il2CppClass *)0x43922df;
                            pIVar21 = UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                            pIStackY_1f8 = (Il2CppClass *)0x43922ea;
                            pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                            pIStackY_1f8 = (Il2CppClass *)0x4392304;
                            pIVar14 = pIVar30;
                            pIVar26 = pIVar22;
                            System_Action___ctor();
                            pIVar25 = (Il2CppClass *)0x0;
                            if (pIVar21 != (Il2CppObject *)0x0) {
                              if (g_data_057ae2ad == '\0') {
                                pIStackY_1f8 = (Il2CppClass *)0x4392322;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                                g_data_057ae2ad = '\x01';
                              }
                              pIVar25 = pIVar21[4].klass;
                              do {
                                pIStackY_1f8 = (Il2CppClass *)0x4392366;
                                pIVar14 = (Il2CppClass *)
                                          System_Delegate__Combine
                                                    ((System_Delegate_o *)pIVar25,(System_Delegate_o *)pIVar22
                                                     ,(MethodInfo *)0x0);
                                if ((pIVar14 != (Il2CppClass *)0x0) &&
                                   (pIVar28 = pIVar25, (pIVar14->_1).image != TypeInfo_Action))
                                goto label_04392373;
                                pIStackY_1f8 = (Il2CppClass *)0x439234e;
                                pIVar26 = (Il2CppClass *)(pIVar21 + 4);
                                pIVar28 = (Il2CppClass *)
                                          il2cpp_runtime_helper_02300640((Il2CppClass *)(pIVar21 + 4),pIVar14,pIVar25);
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
  pIStackY_1f8 = (Il2CppClass *)0x439270c;
  uStackY_218 = il2cpp_runtime_helper_022b2c90();
  bVar3 = (byte)pIVar14;
  pIVar29 = pIVar26;
  pIStackY_210 = pIVar25;
  pIStackY_208 = in_R9;
  pIStackY_200 = pIVar30;
  pIStackY_1f8 = pIVar28;
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
      pSVar7 = (pIVar30->_1).image;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (pSVar7->_2).naturalAligment) &&
         ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        uVar4 = ((Settings_TypedSetting_int__Fields *)&(pIVar30->_1).name)->_value;
        value_01 = (uVar4 + (uint)bVar3 * 2) - 1;
        pIVar14 = (Il2CppClass *)(ulong)value_01;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar30,value_01,MethodInfo_Void_set_Value);
        pIVar29 = (pIVar26->_1).declaringType;
        if (pIVar29 != (Il2CppClass *)0x0) {
          pIVar14 = *(Il2CppClass **)&(pIVar29->_1).byval_arg.bits;
          cVar12 = (*(code *)(pIVar29->_1).namespaze)((pIVar29->_1).element_class);
          if (cVar12 == '\0') {
            pIVar14 = (Il2CppClass *)(ulong)uVar4;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar30,uVar4,MethodInfo_Void_set_Value);
          }
        }
        goto label_043927de;
      }
      il2cpp_runtime_helper_022b2fd0();
      pIVar29 = pIVar30;
    }
    pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_022b2c90();
    puVar27 = &uStackY_218;
    do {
      *(Il2CppClass **)((long)puVar27 + -8) = pIVar26;
      if (g_data_057ae2b5 == '\0') {
        *(undefined8 *)((long)puVar27 + -0x20) = 0x439283d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
        *(undefined8 *)((long)puVar27 + -0x20) = 0x4392849;
        pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        g_data_057ae2b5 = '\x01';
      }
      *(undefined4 *)((long)puVar27 + -0xc) = 0;
      if ((pIVar29->_1).byval_arg.bits != 2) {
        return pSVar23;
      }
      pIVar14 = (pIVar29->_1).element_class;
      pIVar30 = (pIVar29->_1).byval_arg.data;
      pIVar26 = *(Il2CppClass **)&(pIVar29->_1).this_arg.bits;
      if (pIVar14 == (Il2CppClass *)0x0) {
        if (pIVar30 != (Il2CppClass *)0x0) {
          pSVar7 = (pIVar30->_1).image;
          bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar3 <= (pSVar7->_2).naturalAligment) &&
             ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
            pSVar7 = (pIVar30->_1).image;
            bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
            if ((bVar3 <= (pSVar7->_2).naturalAligment) &&
               ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
              *(int32_t *)((long)puVar27 + -0xc) =
                   ((Settings_TypedSetting_int__Fields *)&(pIVar30->_1).name)->_value;
              pIVar30 = (Il2CppClass *)((long)puVar27 + -0xc);
              *(undefined8 *)((long)puVar27 + -0x20) = 0x4392966;
              pSVar24 = System_Int32__ToString((int32_t)pIVar30,(MethodInfo *)0x0);
              if (pIVar26 != (Il2CppClass *)0x0) {
                pIVar9 = (pIVar26->_1).image;
                uVar10 = *(undefined8 *)(pIVar9 + 0x5f0);
                pcVar11 = *(code **)(pIVar9 + 0x5e8);
                *(undefined8 *)((long)puVar27 + -0x20) = 0x4392981;
                pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)
                          (*pcVar11)(pIVar26,pSVar24,uVar10);
                return pSVar23;
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
        pSVar7 = (pIVar30->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((pSVar7->_2).naturalAligment < bVar3) ||
           ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) {
label_04392987:
          *(undefined8 *)((long)puVar27 + -0x20) = 0x439298c;
          il2cpp_runtime_helper_022b2fd0();
          goto label_0439298c;
        }
        pSVar7 = (pIVar30->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((pSVar7->_2).naturalAligment < bVar3) ||
           ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto label_04392987;
        uVar4 = ((Settings_TypedSetting_int__Fields *)&(pIVar30->_1).name)->_value;
        pIVar29 = pIVar30;
        if (uVar4 < *(uint *)&(pIVar14->_1).namespaze) {
          if (pIVar26 != (Il2CppClass *)0x0) {
            pvVar8 = (&(pIVar14->_1).byval_arg.data)[(int)uVar4];
            pIVar9 = (pIVar26->_1).image;
            uVar10 = *(undefined8 *)(pIVar9 + 0x5f0);
            pcVar11 = *(code **)(pIVar9 + 0x5e8);
            *(undefined8 *)((long)puVar27 + -0x20) = 0x4392908;
            pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)(*pcVar11)(pIVar26,pvVar8,uVar10);
            return pSVar23;
          }
          goto label_0439298c;
        }
      }
      *(undefined8 *)((long)puVar27 + -0x20) = 0x4392996;
      pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_022b2ca0();
      puVar27 = (undefined8 *)((long)puVar27 + -0x18);
    } while( true );
  }
label_043927de:
  UI_IncrementSettingElement__UpdateValueLabel((UI_IncrementSettingElement_o *)pIVar26,(MethodInfo *)pIVar14);
  pIVar29 = (pIVar26->_1).castClass;
  if (pIVar29 != (Il2CppClass *)0x0) {
    pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)
              (*(code *)(pIVar29->_1).namespaze)
                        ((pIVar29->_1).element_class,*(undefined8 *)&(pIVar29->_1).byval_arg.bits);
    return pSVar23;
  }
  return (System_Collections_Generic_HashSet_SettingType__o *)0x0;
label_04392373:
  pIStackY_1f8 = (Il2CppClass *)0x439237b;
  pIVar25 = TypeInfo_Action;
  pIVar26 = pIVar14;
  il2cpp_runtime_helper_022b2fd0();
  pIVar14 = pIVar25;
label_0439237b:
  pIVar25 = pIVar28;
  if (pIVar19 != (Il2CppClass *)0x0) {
    pSVar5 = (pIVar19->_1).image;
    pIVar14 = pSVar5[1]._1.methods;
    pIStackY_1f8 = (Il2CppClass *)0x43923a3;
    pIVar26 = pIVar19;
    (*pSVar5[1]._1.properties)(uVar32);
    pIVar28 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar25 = pIVar18;
    in_R9 = (Il2CppClass *)puVar1;
    if (pIVar18 != (Il2CppClass *)0x0) {
      pSVar5 = (pIVar18->_1).image;
      pIStackY_1f8 = (Il2CppClass *)0x43923e1;
      (*pSVar5[1]._1.properties)(uVar32,pIVar18,pSVar5[1]._1.methods);
      pSVar5 = (pIVar19->_1).image;
      pIStackY_1f8 = (Il2CppClass *)0x43923fb;
      (*(code *)pSVar5[1]._1.interfaceOffsets)(in_XMM1_Da,pIVar19,pSVar5[1].static_fields);
      pSVar5 = (pIVar18->_1).image;
      pIVar14 = (Il2CppClass *)pSVar5[1].static_fields;
      pIStackY_1f8 = (Il2CppClass *)0x4392414;
      (*(code *)pSVar5[1]._1.interfaceOffsets)(in_XMM1_Da,pIVar18);
      pIVar26 = (Il2CppClass *)0x0;
      if (*(UnityEngine_Component_o **)puVar1 != (UnityEngine_Component_o *)0x0) {
        pIStackY_1f8 = (Il2CppClass *)0x439242c;
        pIVar18 = (Il2CppClass *)
                  UnityEngine_Component__GetComponent_object_
                            (*(UnityEngine_Component_o **)puVar1,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStackY_1f8 = (Il2CppClass *)0x4392447;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = (Il2CppClass *)0x0;
        pIStackY_1f8 = (Il2CppClass *)0x4392453;
        pIVar26 = pIVar18;
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          pIVar28 = (Il2CppClass *)0x0;
          if (pIVar18 == (Il2CppClass *)0x0) goto label_04392707;
          pSVar5 = (pIVar18->_1).image;
          uVar10._0_4_ = pSVar5[1]._2.initializationExceptionGCHandle;
          uVar10._4_4_ = pSVar5[1]._2.cctor_started;
          pIStackY_1f8 = (Il2CppClass *)0x4392477;
          (*pSVar5[1]._2.unity_user_data)(0,pIVar18,uVar10);
          pSVar5 = (pIVar18->_1).image;
          pIStackY_1f8 = (Il2CppClass *)0x4392493;
          (*(code *)pSVar5[1]._1.declaringType)(0xbf800000,pIVar18,pSVar5[1]._1.parent);
          pSVar5 = (pIVar18->_1).image;
          pIStackY_1f8 = (Il2CppClass *)0x43924af;
          (*pSVar5[1]._1.properties)(0xbf800000,pIVar18,pSVar5[1]._1.methods);
        }
        pIStackY_1f8 = (Il2CppClass *)0x43924d5;
        UI_BaseSettingElement__Setup
                  ((UI_BaseSettingElement_o *)pIVar30,(Settings_BaseSetting_o *)pIVar29,style,
                   (System_String_o *)in_RCX,in_R8,(MethodInfo *)0x0);
        pSVar24 = (style->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pIStackY_1f8 = (Il2CppClass *)0x43924f2;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar30 = (Il2CppClass *)&"DefaultButton";
        pIVar28 = (Il2CppClass *)&"";
        in_R9 = (Il2CppClass *)&"DefaultPanel";
        pIStackY_1f8 = (Il2CppClass *)0x4392524;
        UI_UIManager__GetThemeColorBlock
                  (&UStack_148,pSVar24,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
        fStack_40 = UStack_148.fields.m_ColorMultiplier;
        fStack_3c = UStack_148.fields.m_FadeDuration;
        UStack_50.r = UStack_148.fields.m_DisabledColor.fields.r;
        UStack_50.g = UStack_148.fields.m_DisabledColor.fields.g;
        UStack_50.b = UStack_148.fields.m_DisabledColor.fields.b;
        UStack_50.a = UStack_148.fields.m_DisabledColor.fields.a;
        UStack_60.r = UStack_148.fields.m_SelectedColor.fields.r;
        UStack_60.g = UStack_148.fields.m_SelectedColor.fields.g;
        UStack_60.b = UStack_148.fields.m_SelectedColor.fields.b;
        UStack_60.a = UStack_148.fields.m_SelectedColor.fields.a;
        UStack_70.r = UStack_148.fields.m_PressedColor.fields.r;
        UStack_70.g = UStack_148.fields.m_PressedColor.fields.g;
        UStack_70.b = UStack_148.fields.m_PressedColor.fields.b;
        UStack_70.a = UStack_148.fields.m_PressedColor.fields.a;
        UStack_80.r = UStack_148.fields.m_HighlightedColor.fields.r;
        UStack_80.g = UStack_148.fields.m_HighlightedColor.fields.g;
        UStack_80.b = UStack_148.fields.m_HighlightedColor.fields.b;
        UStack_80.a = UStack_148.fields.m_HighlightedColor.fields.a;
        UStack_90.r = UStack_148.fields.m_NormalColor.fields.r;
        UStack_90.g = UStack_148.fields.m_NormalColor.fields.g;
        UStack_90.b = UStack_148.fields.m_NormalColor.fields.b;
        UStack_90.a = UStack_148.fields.m_NormalColor.fields.a;
        pIStackY_1f8 = (Il2CppClass *)0x43925dd;
        value.fields.m_NormalColor.fields.b = UStack_148.fields.m_NormalColor.fields.b;
        value.fields.m_NormalColor.fields.a = UStack_148.fields.m_NormalColor.fields.a;
        value.fields.m_NormalColor.fields.r = UStack_148.fields.m_NormalColor.fields.r;
        value.fields.m_NormalColor.fields.g = UStack_148.fields.m_NormalColor.fields.g;
        value.fields.m_HighlightedColor.fields.r = UStack_148.fields.m_HighlightedColor.fields.r;
        value.fields.m_HighlightedColor.fields.g = UStack_148.fields.m_HighlightedColor.fields.g;
        value.fields.m_HighlightedColor.fields.b = UStack_148.fields.m_HighlightedColor.fields.b;
        value.fields.m_HighlightedColor.fields.a = UStack_148.fields.m_HighlightedColor.fields.a;
        value.fields.m_PressedColor.fields.r = UStack_148.fields.m_PressedColor.fields.r;
        value.fields.m_PressedColor.fields.g = UStack_148.fields.m_PressedColor.fields.g;
        value.fields.m_PressedColor.fields.b = UStack_148.fields.m_PressedColor.fields.b;
        value.fields.m_PressedColor.fields.a = UStack_148.fields.m_PressedColor.fields.a;
        value.fields.m_SelectedColor.fields.r = UStack_148.fields.m_SelectedColor.fields.r;
        value.fields.m_SelectedColor.fields.g = UStack_148.fields.m_SelectedColor.fields.g;
        value.fields.m_SelectedColor.fields.b = UStack_148.fields.m_SelectedColor.fields.b;
        value.fields.m_SelectedColor.fields.a = UStack_148.fields.m_SelectedColor.fields.a;
        value.fields.m_DisabledColor.fields.r = UStack_148.fields.m_DisabledColor.fields.r;
        value.fields.m_DisabledColor.fields.g = UStack_148.fields.m_DisabledColor.fields.g;
        value.fields.m_DisabledColor.fields.b = UStack_148.fields.m_DisabledColor.fields.b;
        value.fields.m_DisabledColor.fields.a = UStack_148.fields.m_DisabledColor.fields.a;
        value.fields.m_ColorMultiplier = UStack_148.fields.m_ColorMultiplier;
        value.fields.m_FadeDuration = UStack_148.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pIVar15,value,(MethodInfo *)0x0);
        pIStackY_1f8 = (Il2CppClass *)0x43925fc;
        UI_UIManager__GetThemeColorBlock
                  (&UStack_148,(style->fields).ThemePanel,"DefaultButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        aUStack_b0[1].r = UStack_148.fields.m_ColorMultiplier;
        aUStack_b0[1].g = UStack_148.fields.m_FadeDuration;
        aUStack_b0[0].r = UStack_148.fields.m_DisabledColor.fields.r;
        aUStack_b0[0].g = UStack_148.fields.m_DisabledColor.fields.g;
        aUStack_b0[0].b = UStack_148.fields.m_DisabledColor.fields.b;
        aUStack_b0[0].a = UStack_148.fields.m_DisabledColor.fields.a;
        UStack_c0.r = UStack_148.fields.m_SelectedColor.fields.r;
        UStack_c0.g = UStack_148.fields.m_SelectedColor.fields.g;
        UStack_c0.b = UStack_148.fields.m_SelectedColor.fields.b;
        UStack_c0.a = UStack_148.fields.m_SelectedColor.fields.a;
        UStack_d0.r = UStack_148.fields.m_PressedColor.fields.r;
        UStack_d0.g = UStack_148.fields.m_PressedColor.fields.g;
        UStack_d0.b = UStack_148.fields.m_PressedColor.fields.b;
        UStack_d0.a = UStack_148.fields.m_PressedColor.fields.a;
        UStack_e0.r = UStack_148.fields.m_HighlightedColor.fields.r;
        UStack_e0.g = UStack_148.fields.m_HighlightedColor.fields.g;
        UStack_e0.b = UStack_148.fields.m_HighlightedColor.fields.b;
        UStack_e0.a = UStack_148.fields.m_HighlightedColor.fields.a;
        UStack_f0.r = UStack_148.fields.m_NormalColor.fields.r;
        UStack_f0.g = UStack_148.fields.m_NormalColor.fields.g;
        UStack_f0.b = UStack_148.fields.m_NormalColor.fields.b;
        UStack_f0.a = UStack_148.fields.m_NormalColor.fields.a;
        pIStackY_1f8 = (Il2CppClass *)0x43926b5;
        value_00.fields.m_NormalColor.fields.b = UStack_148.fields.m_NormalColor.fields.b;
        value_00.fields.m_NormalColor.fields.a = UStack_148.fields.m_NormalColor.fields.a;
        value_00.fields.m_NormalColor.fields.r = UStack_148.fields.m_NormalColor.fields.r;
        value_00.fields.m_NormalColor.fields.g = UStack_148.fields.m_NormalColor.fields.g;
        value_00.fields.m_HighlightedColor.fields.r = UStack_148.fields.m_HighlightedColor.fields.r;
        value_00.fields.m_HighlightedColor.fields.g = UStack_148.fields.m_HighlightedColor.fields.g;
        value_00.fields.m_HighlightedColor.fields.b = UStack_148.fields.m_HighlightedColor.fields.b;
        value_00.fields.m_HighlightedColor.fields.a = UStack_148.fields.m_HighlightedColor.fields.a;
        value_00.fields.m_PressedColor.fields.r = UStack_148.fields.m_PressedColor.fields.r;
        value_00.fields.m_PressedColor.fields.g = UStack_148.fields.m_PressedColor.fields.g;
        value_00.fields.m_PressedColor.fields.b = UStack_148.fields.m_PressedColor.fields.b;
        value_00.fields.m_PressedColor.fields.a = UStack_148.fields.m_PressedColor.fields.a;
        value_00.fields.m_SelectedColor.fields.r = UStack_148.fields.m_SelectedColor.fields.r;
        value_00.fields.m_SelectedColor.fields.g = UStack_148.fields.m_SelectedColor.fields.g;
        value_00.fields.m_SelectedColor.fields.b = UStack_148.fields.m_SelectedColor.fields.b;
        value_00.fields.m_SelectedColor.fields.a = UStack_148.fields.m_SelectedColor.fields.a;
        value_00.fields.m_DisabledColor.fields.r = UStack_148.fields.m_DisabledColor.fields.r;
        value_00.fields.m_DisabledColor.fields.g = UStack_148.fields.m_DisabledColor.fields.g;
        value_00.fields.m_DisabledColor.fields.b = UStack_148.fields.m_DisabledColor.fields.b;
        value_00.fields.m_DisabledColor.fields.a = UStack_148.fields.m_DisabledColor.fields.a;
        value_00.fields.m_ColorMultiplier = UStack_148.fields.m_ColorMultiplier;
        value_00.fields.m_FadeDuration = UStack_148.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)pIVar17,value_00,(MethodInfo *)0x0);
        plVar6 = *(long **)puVar1;
        pIVar26 = (Il2CppClass *)(style->fields).ThemePanel;
        pIStackY_1f8 = (Il2CppClass *)0x43926dd;
        pIVar14 = "DefaultSetting";
        UVar33 = UI_UIManager__GetThemeColor
                           ((System_String_o *)pIVar26,(System_String_o *)"DefaultSetting","TextColor",
                            "DefaultPanel",(MethodInfo *)0x0);
        pIVar25 = (Il2CppClass *)0x0;
        if (plVar6 != (long *)0x0) {
          pIStackY_1f8 = (Il2CppClass *)0x43926f5;
          pSVar23 = (System_Collections_Generic_HashSet_SettingType__o *)
                    (**(code **)(*plVar6 + 0x2a8))
                              (UVar33.fields.r,UVar33.fields.b,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
          return pSVar23;
        }
      }
    }
  }
  goto label_04392707;
}


// UI.IncrementSettingElement$$Setup
// il2cpp: void UI_IncrementSettingElement__Setup (UI_IncrementSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, System_String_array* options, UnityEngine_Events_UnityAction_o* onValueChanged, System_Func_bool__o* validation, const MethodInfo* method);
// 0x4391f40

void UI_IncrementSettingElement__Setup
               (UI_IncrementSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               System_String_array *options,UnityEngine_Events_UnityAction_o *onValueChanged,
               System_Func_bool__o *validation,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_c *pSVar6;
  Settings_TypedSetting_int__c *pSVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  code *pcVar11;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  char cVar12;
  bool_conflict bVar13;
  Il2CppClass *pIVar14;
  UnityEngine_Transform_o *pUVar15;
  Il2CppClass *pIVar16;
  Il2CppClass *pIVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  UnityEngine_GameObject_o *pUVar20;
  Il2CppObject *pIVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  System_String_o *pSVar24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  undefined8 *puVar27;
  uint value_01;
  MethodInfo_2A23FA0 **ppMVar28;
  bool bVar29;
  UnityEngine_Color_o UVar30;
  undefined8 uStackY_210;
  Il2CppClass *pIStackY_208;
  System_String_array *pSStackY_200;
  UI_IncrementSettingElement_o *pUStackY_1f8;
  Il2CppClass *pIStackY_1f0;
  UnityEngine_UI_ColorBlock_o local_140;
  UnityEngine_Color_Fields local_e8;
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Color_Fields local_c8;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  if (g_data_057ae2b3 == '\0') {
    pIStackY_1f0 = (Il2CppClass *)0x4391f88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pIStackY_1f0 = (Il2CppClass *)0x4391f94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pIStackY_1f0 = (Il2CppClass *)0x4391fa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIStackY_1f0 = (Il2CppClass *)0x4391fac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pIStackY_1f0 = (Il2CppClass *)0x4391fb8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoldableButton_AddComponent_HoldableButton);
    pIStackY_1f0 = (Il2CppClass *)0x4391fc4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_0);
    pIStackY_1f0 = (Il2CppClass *)0x4391fd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_1);
    pIStackY_1f0 = (Il2CppClass *)0x4391fdc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_1f0 = (Il2CppClass *)0x4391fe8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_1f0 = (Il2CppClass *)0x4391ff4;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pIStackY_1f0 = (Il2CppClass *)0x4392000;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pIStackY_1f0 = (Il2CppClass *)0x439200c;
    il2cpp_runtime_helper_023445d0(&"Increment/ValueLabel");
    pIStackY_1f0 = (Il2CppClass *)0x4392018;
    il2cpp_runtime_helper_023445d0(&"Increment/RightButton");
    pIStackY_1f0 = (Il2CppClass *)0x4392024;
    il2cpp_runtime_helper_023445d0(&"Increment/LeftButton");
    pIStackY_1f0 = (Il2CppClass *)0x4392030;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pIStackY_1f0 = (Il2CppClass *)0x439203c;
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    pIStackY_1f0 = (Il2CppClass *)0x4392048;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2b3 = '\x01';
  }
  pIVar16 = (Il2CppClass *)0x0;
  pIStackY_1f0 = (Il2CppClass *)0x4392059;
  pIVar26 = (Il2CppClass *)__this;
  pIVar14 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pIVar25 = (Il2CppClass *)title;
  pIVar23 = (Il2CppClass *)setting;
  if (pIVar14 != (Il2CppClass *)0x0) {
    pIStackY_1f0 = (Il2CppClass *)0x4392076;
    pIVar16 = "Increment/ValueLabel";
    pUVar15 = UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pIVar14,(System_String_o *)"Increment/ValueLabel",(MethodInfo *)0x0)
    ;
    pIVar26 = pIVar14;
    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
      pIStackY_1f0 = (Il2CppClass *)0x4392091;
      pIVar16 = (Il2CppClass *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar15,MethodInfo_Text_GetComponent_Text);
      ppUVar1 = &(__this->fields)._valueLabel;
      (__this->fields)._valueLabel = (UnityEngine_UI_Text_o *)pIVar16;
      pIStackY_1f0 = (Il2CppClass *)0x43920a9;
      pIVar26 = (Il2CppClass *)ppUVar1;
      il2cpp_runtime_helper_022b4080();
      if (style != (UI_ElementStyle_o *)0x0) {
        pUVar5 = (__this->fields)._valueLabel;
        pIVar26 = (Il2CppClass *)0x0;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          pIStackY_1f0 = (Il2CppClass *)0x43920eb;
          UnityEngine_UI_Text__set_fontSize(pUVar5,(style->fields).FontSize,(MethodInfo *)0x0);
          (__this->fields)._options = options;
          pIStackY_1f0 = (Il2CppClass *)0x43920fb;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._options,options);
          (__this->fields)._onValueChanged = onValueChanged;
          pIStackY_1f0 = (Il2CppClass *)0x439210b;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._onValueChanged,onValueChanged);
          (__this->fields)._validation = validation;
          pIStackY_1f0 = (Il2CppClass *)0x439211b;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._validation);
          pIVar16 = (Il2CppClass *)0x0;
          pIStackY_1f0 = (Il2CppClass *)0x4392125;
          pIVar26 = (Il2CppClass *)__this;
          pIVar14 = (Il2CppClass *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pIVar25 = (Il2CppClass *)validation;
          pIVar23 = (Il2CppClass *)onValueChanged;
          if (pIVar14 != (Il2CppClass *)0x0) {
            pIStackY_1f0 = (Il2CppClass *)0x4392142;
            pIVar16 = "Increment/LeftButton";
            pUVar15 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pIVar14,(System_String_o *)"Increment/LeftButton",
                                 (MethodInfo *)0x0);
            pIVar25 = (Il2CppClass *)validation;
            pIVar23 = (Il2CppClass *)onValueChanged;
            pIVar26 = pIVar14;
            if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
              pIStackY_1f0 = (Il2CppClass *)0x439215e;
              pIVar14 = (Il2CppClass *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar15,(MethodInfo_24E7B40 *)MethodInfo_Button_GetComponent_Button);
              pIVar16 = (Il2CppClass *)0x0;
              pIStackY_1f0 = (Il2CppClass *)0x439216b;
              pIVar26 = (Il2CppClass *)__this;
              pIVar17 = (Il2CppClass *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pIVar25 = pIVar14;
              pIVar23 = (Il2CppClass *)&MethodInfo_Button_GetComponent_Button;
              if (pIVar17 != (Il2CppClass *)0x0) {
                pIStackY_1f0 = (Il2CppClass *)0x4392190;
                pIVar16 = "Increment/RightButton";
                pIVar18 = (Il2CppClass *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pIVar17,(System_String_o *)"Increment/RightButton",
                                     (MethodInfo *)0x0);
                pIVar23 = (Il2CppClass *)&MethodInfo_Button_GetComponent_Button;
                pIVar26 = pIVar17;
                if (pIVar18 != (Il2CppClass *)0x0) {
                  pIStackY_1f0 = (Il2CppClass *)0x43921a5;
                  pIVar16 = MethodInfo_Button_GetComponent_Button;
                  pIVar17 = (Il2CppClass *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pIVar18,(MethodInfo_24E7B40 *)MethodInfo_Button_GetComponent_Button);
                  pIVar23 = (Il2CppClass *)&MethodInfo_Button_GetComponent_Button;
                  pIVar26 = pIVar18;
                  if (pIVar14 != (Il2CppClass *)0x0) {
                    pIStackY_1f0 = (Il2CppClass *)0x43921c4;
                    pIVar16 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    pIVar26 = pIVar14;
                    pIVar18 = (Il2CppClass *)
                              UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pIVar14,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement
                                        );
                    pIVar23 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    if (pIVar17 != (Il2CppClass *)0x0) {
                      pIStackY_1f0 = (Il2CppClass *)0x43921e6;
                      pIVar19 = (Il2CppClass *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pIVar17,
                                           (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      pIVar16 = (Il2CppClass *)0x0;
                      pIStackY_1f0 = (Il2CppClass *)0x43921f8;
                      pIVar26 = pIVar14;
                      pUVar20 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
                      pIVar23 = pIVar19;
                      if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                        pIStackY_1f0 = (Il2CppClass *)0x4392213;
                        pIVar21 = UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                        pIStackY_1f0 = (Il2CppClass *)0x4392225;
                        pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                        pIStackY_1f0 = (Il2CppClass *)0x439223f;
                        pIVar16 = (Il2CppClass *)__this;
                        pIVar26 = pIVar22;
                        System_Action___ctor();
                        pIVar25 = (Il2CppClass *)0x0;
                        options = (System_String_array *)&TypeInfo_Action;
                        if (pIVar21 != (Il2CppObject *)0x0) {
                          if (g_data_057ae2ad == '\0') {
                            pIStackY_1f0 = (Il2CppClass *)0x4392267;
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                            g_data_057ae2ad = '\x01';
                          }
                          pIVar26 = pIVar21[4].klass;
                          do {
                            pIStackY_1f0 = (Il2CppClass *)0x43922a6;
                            pIVar16 = (Il2CppClass *)
                                      System_Delegate__Combine
                                                ((System_Delegate_o *)pIVar26,(System_Delegate_o *)pIVar22,
                                                 (MethodInfo *)0x0);
                            if ((pIVar16 != (Il2CppClass *)0x0) &&
                               (pIVar23 = pIVar26, (pIVar16->_1).image != TypeInfo_Action)) goto label_04392373;
                            pIStackY_1f0 = (Il2CppClass *)0x439228e;
                            pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_02300640(pIVar21 + 4,pIVar16,pIVar26);
                            bVar29 = pIVar26 != pIVar23;
                            pIVar26 = pIVar23;
                          } while (bVar29);
                          pIVar16 = (Il2CppClass *)0x0;
                          pIStackY_1f0 = (Il2CppClass *)0x43922c4;
                          pIVar26 = pIVar17;
                          pUVar20 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pIVar17,(MethodInfo *)0x0);
                          pIVar25 = pIVar23;
                          options = (System_String_array *)&TypeInfo_Action;
                          if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                            pIStackY_1f0 = (Il2CppClass *)0x43922df;
                            pIVar21 = UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                            pIStackY_1f0 = (Il2CppClass *)0x43922ea;
                            pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                            pIStackY_1f0 = (Il2CppClass *)0x4392304;
                            pIVar16 = (Il2CppClass *)__this;
                            pIVar26 = pIVar22;
                            System_Action___ctor();
                            pIVar25 = (Il2CppClass *)0x0;
                            if (pIVar21 != (Il2CppObject *)0x0) {
                              if (g_data_057ae2ad == '\0') {
                                pIStackY_1f0 = (Il2CppClass *)0x4392322;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                                g_data_057ae2ad = '\x01';
                              }
                              pIVar25 = pIVar21[4].klass;
                              do {
                                pIStackY_1f0 = (Il2CppClass *)0x4392366;
                                pIVar16 = (Il2CppClass *)
                                          System_Delegate__Combine
                                                    ((System_Delegate_o *)pIVar25,(System_Delegate_o *)pIVar22
                                                     ,(MethodInfo *)0x0);
                                if ((pIVar16 != (Il2CppClass *)0x0) &&
                                   (pIVar23 = pIVar25, (pIVar16->_1).image != TypeInfo_Action))
                                goto label_04392373;
                                pIStackY_1f0 = (Il2CppClass *)0x439234e;
                                pIVar26 = (Il2CppClass *)(pIVar21 + 4);
                                pIVar23 = (Il2CppClass *)
                                          il2cpp_runtime_helper_02300640((Il2CppClass *)(pIVar21 + 4),pIVar16,pIVar25);
                                bVar29 = pIVar25 != pIVar23;
                                pIVar25 = pIVar23;
                              } while (bVar29);
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
  pIStackY_1f0 = (Il2CppClass *)0x439270c;
  uStackY_210 = il2cpp_runtime_helper_022b2c90();
  bVar3 = (byte)pIVar16;
  ppMVar28 = (MethodInfo_2A23FA0 **)pIVar26;
  pIStackY_208 = pIVar25;
  pSStackY_200 = options;
  pUStackY_1f8 = __this;
  pIStackY_1f0 = pIVar23;
  if (g_data_057ae2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar28 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2b4 = '\x01';
  }
  if ((pIVar26->_1).byval_arg.bits == 2) {
    pIVar25 = (pIVar26->_1).byval_arg.data;
    if (pIVar25 != (Il2CppClass *)0x0) {
      pSVar7 = (pIVar25->_1).image;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (pSVar7->_2).naturalAligment) &&
         ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        uVar4 = ((Settings_TypedSetting_int__Fields *)&(pIVar25->_1).name)->_value;
        value_01 = (uVar4 + (uint)bVar3 * 2) - 1;
        pIVar16 = (Il2CppClass *)(ulong)value_01;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar25,value_01,MethodInfo_Void_set_Value);
        pIVar23 = (pIVar26->_1).declaringType;
        if (pIVar23 != (Il2CppClass *)0x0) {
          pIVar16 = *(Il2CppClass **)&(pIVar23->_1).byval_arg.bits;
          cVar12 = (*(code *)(pIVar23->_1).namespaze)((pIVar23->_1).element_class);
          if (cVar12 == '\0') {
            pIVar16 = (Il2CppClass *)(ulong)uVar4;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar25,uVar4,MethodInfo_Void_set_Value);
          }
        }
        goto label_043927de;
      }
      il2cpp_runtime_helper_022b2fd0();
      ppMVar28 = (MethodInfo_2A23FA0 **)pIVar25;
    }
    il2cpp_runtime_helper_022b2c90();
    puVar27 = &uStackY_210;
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
      if ((((Il2CppClass *)ppMVar28)->_1).byval_arg.bits != 2) {
        return;
      }
      pIVar25 = (((Il2CppClass *)ppMVar28)->_1).element_class;
      pIVar16 = (((Il2CppClass *)ppMVar28)->_1).byval_arg.data;
      pIVar26 = *(Il2CppClass **)&(((Il2CppClass *)ppMVar28)->_1).this_arg.bits;
      if (pIVar25 == (Il2CppClass *)0x0) {
        if (pIVar16 != (Il2CppClass *)0x0) {
          pSVar7 = (pIVar16->_1).image;
          bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar3 <= (pSVar7->_2).naturalAligment) &&
             ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
            pSVar7 = (pIVar16->_1).image;
            bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
            if ((bVar3 <= (pSVar7->_2).naturalAligment) &&
               ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
              *(int32_t *)((long)puVar27 + -0xc) =
                   ((Settings_TypedSetting_int__Fields *)&(pIVar16->_1).name)->_value;
              pIVar16 = (Il2CppClass *)((long)puVar27 + -0xc);
              *(undefined8 *)((long)puVar27 + -0x20) = 0x4392966;
              pSVar24 = System_Int32__ToString((int32_t)pIVar16,(MethodInfo *)0x0);
              if (pIVar26 != (Il2CppClass *)0x0) {
                pvVar8 = (pIVar26->_1).image;
                uVar10 = *(undefined8 *)((long)pvVar8 + 0x5f0);
                pcVar11 = *(code **)((long)pvVar8 + 0x5e8);
                *(undefined8 *)((long)puVar27 + -0x20) = 0x4392981;
                (*pcVar11)(pIVar26,pSVar24,uVar10);
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
        ppMVar28 = (MethodInfo_2A23FA0 **)pIVar16;
      }
      else {
        if (pIVar16 == (Il2CppClass *)0x0) goto label_0439298c;
        pSVar7 = (pIVar16->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((pSVar7->_2).naturalAligment < bVar3) ||
           ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) {
label_04392987:
          *(undefined8 *)((long)puVar27 + -0x20) = 0x439298c;
          il2cpp_runtime_helper_022b2fd0();
          goto label_0439298c;
        }
        pSVar7 = (pIVar16->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((pSVar7->_2).naturalAligment < bVar3) ||
           ((pSVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto label_04392987;
        uVar4 = ((Settings_TypedSetting_int__Fields *)&(pIVar16->_1).name)->_value;
        ppMVar28 = (MethodInfo_2A23FA0 **)pIVar16;
        if (uVar4 < *(uint *)&(pIVar25->_1).namespaze) {
          if (pIVar26 != (Il2CppClass *)0x0) {
            pvVar8 = (&(pIVar25->_1).byval_arg.data)[(int)uVar4];
            pvVar9 = (pIVar26->_1).image;
            uVar10 = *(undefined8 *)((long)pvVar9 + 0x5f0);
            pcVar11 = *(code **)((long)pvVar9 + 0x5e8);
            *(undefined8 *)((long)puVar27 + -0x20) = 0x4392908;
            (*pcVar11)(pIVar26,pvVar8,uVar10);
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
  UI_IncrementSettingElement__UpdateValueLabel((UI_IncrementSettingElement_o *)pIVar26,(MethodInfo *)pIVar16);
  pIVar16 = (pIVar26->_1).castClass;
  if (pIVar16 != (Il2CppClass *)0x0) {
    (*(code *)(pIVar16->_1).namespaze)
              ((pIVar16->_1).element_class,*(undefined8 *)&(pIVar16->_1).byval_arg.bits);
    return;
  }
  return;
label_04392373:
  pIStackY_1f0 = (Il2CppClass *)0x439237b;
  pIVar25 = TypeInfo_Action;
  pIVar26 = pIVar16;
  il2cpp_runtime_helper_022b2fd0();
  pIVar16 = pIVar25;
label_0439237b:
  pIVar25 = pIVar23;
  options = (System_String_array *)&TypeInfo_Action;
  if (pIVar19 != (Il2CppClass *)0x0) {
    pSVar6 = (pIVar19->_1).image;
    pIVar16 = pSVar6[1]._1.methods;
    pIStackY_1f0 = (Il2CppClass *)0x43923a3;
    pIVar26 = pIVar19;
    (*pSVar6[1]._1.properties)(elementWidth);
    pIVar25 = pIVar18;
    pIVar23 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    options = (System_String_array *)ppUVar1;
    if (pIVar18 != (Il2CppClass *)0x0) {
      pSVar6 = (pIVar18->_1).image;
      pIStackY_1f0 = (Il2CppClass *)0x43923e1;
      (*pSVar6[1]._1.properties)(elementWidth,pIVar18,pSVar6[1]._1.methods);
      pSVar6 = (pIVar19->_1).image;
      pIStackY_1f0 = (Il2CppClass *)0x43923fb;
      (*(code *)pSVar6[1]._1.interfaceOffsets)(elementHeight,pIVar19,pSVar6[1].static_fields);
      pSVar6 = (pIVar18->_1).image;
      pIVar16 = (Il2CppClass *)pSVar6[1].static_fields;
      pIStackY_1f0 = (Il2CppClass *)0x4392414;
      (*(code *)pSVar6[1]._1.interfaceOffsets)(elementHeight,pIVar18);
      pIVar26 = (Il2CppClass *)0x0;
      if (*ppUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pIStackY_1f0 = (Il2CppClass *)0x439242c;
        pIVar18 = (Il2CppClass *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStackY_1f0 = (Il2CppClass *)0x4392447;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar16 = (Il2CppClass *)0x0;
        pIStackY_1f0 = (Il2CppClass *)0x4392453;
        pIVar26 = pIVar18;
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          pIVar23 = (Il2CppClass *)0x0;
          if (pIVar18 == (Il2CppClass *)0x0) goto label_04392707;
          pSVar6 = (pIVar18->_1).image;
          uVar10._0_4_ = pSVar6[1]._2.initializationExceptionGCHandle;
          uVar10._4_4_ = pSVar6[1]._2.cctor_started;
          pIStackY_1f0 = (Il2CppClass *)0x4392477;
          (*pSVar6[1]._2.unity_user_data)(0,pIVar18,uVar10);
          pSVar6 = (pIVar18->_1).image;
          pIStackY_1f0 = (Il2CppClass *)0x4392493;
          (*(code *)pSVar6[1]._1.declaringType)(0xbf800000,pIVar18,pSVar6[1]._1.parent);
          pSVar6 = (pIVar18->_1).image;
          pIStackY_1f0 = (Il2CppClass *)0x43924af;
          (*pSVar6[1]._1.properties)(0xbf800000,pIVar18,pSVar6[1]._1.methods);
        }
        pIStackY_1f0 = (Il2CppClass *)0x43924d5;
        UI_BaseSettingElement__Setup
                  ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
        pSVar24 = (style->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pIStackY_1f0 = (Il2CppClass *)0x43924f2;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStackY_1f0 = (Il2CppClass *)0x4392524;
        UI_UIManager__GetThemeColorBlock
                  (&local_140,pSVar24,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
        local_38 = local_140.fields.m_ColorMultiplier;
        fStack_34 = local_140.fields.m_FadeDuration;
        local_48.r = local_140.fields.m_DisabledColor.fields.r;
        local_48.g = local_140.fields.m_DisabledColor.fields.g;
        local_48.b = local_140.fields.m_DisabledColor.fields.b;
        local_48.a = local_140.fields.m_DisabledColor.fields.a;
        local_58.r = local_140.fields.m_SelectedColor.fields.r;
        local_58.g = local_140.fields.m_SelectedColor.fields.g;
        local_58.b = local_140.fields.m_SelectedColor.fields.b;
        local_58.a = local_140.fields.m_SelectedColor.fields.a;
        local_68.r = local_140.fields.m_PressedColor.fields.r;
        local_68.g = local_140.fields.m_PressedColor.fields.g;
        local_68.b = local_140.fields.m_PressedColor.fields.b;
        local_68.a = local_140.fields.m_PressedColor.fields.a;
        local_78.r = local_140.fields.m_HighlightedColor.fields.r;
        local_78.g = local_140.fields.m_HighlightedColor.fields.g;
        local_78.b = local_140.fields.m_HighlightedColor.fields.b;
        local_78.a = local_140.fields.m_HighlightedColor.fields.a;
        local_88.r = local_140.fields.m_NormalColor.fields.r;
        local_88.g = local_140.fields.m_NormalColor.fields.g;
        local_88.b = local_140.fields.m_NormalColor.fields.b;
        local_88.a = local_140.fields.m_NormalColor.fields.a;
        pIStackY_1f0 = (Il2CppClass *)0x43925dd;
        value.fields.m_NormalColor.fields.b = local_140.fields.m_NormalColor.fields.b;
        value.fields.m_NormalColor.fields.a = local_140.fields.m_NormalColor.fields.a;
        value.fields.m_NormalColor.fields.r = local_140.fields.m_NormalColor.fields.r;
        value.fields.m_NormalColor.fields.g = local_140.fields.m_NormalColor.fields.g;
        value.fields.m_HighlightedColor.fields.r = local_140.fields.m_HighlightedColor.fields.r;
        value.fields.m_HighlightedColor.fields.g = local_140.fields.m_HighlightedColor.fields.g;
        value.fields.m_HighlightedColor.fields.b = local_140.fields.m_HighlightedColor.fields.b;
        value.fields.m_HighlightedColor.fields.a = local_140.fields.m_HighlightedColor.fields.a;
        value.fields.m_PressedColor.fields.r = local_140.fields.m_PressedColor.fields.r;
        value.fields.m_PressedColor.fields.g = local_140.fields.m_PressedColor.fields.g;
        value.fields.m_PressedColor.fields.b = local_140.fields.m_PressedColor.fields.b;
        value.fields.m_PressedColor.fields.a = local_140.fields.m_PressedColor.fields.a;
        value.fields.m_SelectedColor.fields.r = local_140.fields.m_SelectedColor.fields.r;
        value.fields.m_SelectedColor.fields.g = local_140.fields.m_SelectedColor.fields.g;
        value.fields.m_SelectedColor.fields.b = local_140.fields.m_SelectedColor.fields.b;
        value.fields.m_SelectedColor.fields.a = local_140.fields.m_SelectedColor.fields.a;
        value.fields.m_DisabledColor.fields.r = local_140.fields.m_DisabledColor.fields.r;
        value.fields.m_DisabledColor.fields.g = local_140.fields.m_DisabledColor.fields.g;
        value.fields.m_DisabledColor.fields.b = local_140.fields.m_DisabledColor.fields.b;
        value.fields.m_DisabledColor.fields.a = local_140.fields.m_DisabledColor.fields.a;
        value.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
        value.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pIVar14,value,(MethodInfo *)0x0);
        pIStackY_1f0 = (Il2CppClass *)0x43925fc;
        UI_UIManager__GetThemeColorBlock
                  (&local_140,(style->fields).ThemePanel,"DefaultButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        local_a8[1].r = local_140.fields.m_ColorMultiplier;
        local_a8[1].g = local_140.fields.m_FadeDuration;
        local_a8[0].r = local_140.fields.m_DisabledColor.fields.r;
        local_a8[0].g = local_140.fields.m_DisabledColor.fields.g;
        local_a8[0].b = local_140.fields.m_DisabledColor.fields.b;
        local_a8[0].a = local_140.fields.m_DisabledColor.fields.a;
        local_b8.r = local_140.fields.m_SelectedColor.fields.r;
        local_b8.g = local_140.fields.m_SelectedColor.fields.g;
        local_b8.b = local_140.fields.m_SelectedColor.fields.b;
        local_b8.a = local_140.fields.m_SelectedColor.fields.a;
        local_c8.r = local_140.fields.m_PressedColor.fields.r;
        local_c8.g = local_140.fields.m_PressedColor.fields.g;
        local_c8.b = local_140.fields.m_PressedColor.fields.b;
        local_c8.a = local_140.fields.m_PressedColor.fields.a;
        local_d8.r = local_140.fields.m_HighlightedColor.fields.r;
        local_d8.g = local_140.fields.m_HighlightedColor.fields.g;
        local_d8.b = local_140.fields.m_HighlightedColor.fields.b;
        local_d8.a = local_140.fields.m_HighlightedColor.fields.a;
        local_e8.r = local_140.fields.m_NormalColor.fields.r;
        local_e8.g = local_140.fields.m_NormalColor.fields.g;
        local_e8.b = local_140.fields.m_NormalColor.fields.b;
        local_e8.a = local_140.fields.m_NormalColor.fields.a;
        pIStackY_1f0 = (Il2CppClass *)0x43926b5;
        value_00.fields.m_NormalColor.fields.b = local_140.fields.m_NormalColor.fields.b;
        value_00.fields.m_NormalColor.fields.a = local_140.fields.m_NormalColor.fields.a;
        value_00.fields.m_NormalColor.fields.r = local_140.fields.m_NormalColor.fields.r;
        value_00.fields.m_NormalColor.fields.g = local_140.fields.m_NormalColor.fields.g;
        value_00.fields.m_HighlightedColor.fields.r = local_140.fields.m_HighlightedColor.fields.r;
        value_00.fields.m_HighlightedColor.fields.g = local_140.fields.m_HighlightedColor.fields.g;
        value_00.fields.m_HighlightedColor.fields.b = local_140.fields.m_HighlightedColor.fields.b;
        value_00.fields.m_HighlightedColor.fields.a = local_140.fields.m_HighlightedColor.fields.a;
        value_00.fields.m_PressedColor.fields.r = local_140.fields.m_PressedColor.fields.r;
        value_00.fields.m_PressedColor.fields.g = local_140.fields.m_PressedColor.fields.g;
        value_00.fields.m_PressedColor.fields.b = local_140.fields.m_PressedColor.fields.b;
        value_00.fields.m_PressedColor.fields.a = local_140.fields.m_PressedColor.fields.a;
        value_00.fields.m_SelectedColor.fields.r = local_140.fields.m_SelectedColor.fields.r;
        value_00.fields.m_SelectedColor.fields.g = local_140.fields.m_SelectedColor.fields.g;
        value_00.fields.m_SelectedColor.fields.b = local_140.fields.m_SelectedColor.fields.b;
        value_00.fields.m_SelectedColor.fields.a = local_140.fields.m_SelectedColor.fields.a;
        value_00.fields.m_DisabledColor.fields.r = local_140.fields.m_DisabledColor.fields.r;
        value_00.fields.m_DisabledColor.fields.g = local_140.fields.m_DisabledColor.fields.g;
        value_00.fields.m_DisabledColor.fields.b = local_140.fields.m_DisabledColor.fields.b;
        value_00.fields.m_DisabledColor.fields.a = local_140.fields.m_DisabledColor.fields.a;
        value_00.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
        value_00.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)pIVar17,value_00,(MethodInfo *)0x0);
        pUVar5 = *ppUVar1;
        pIVar26 = (Il2CppClass *)(style->fields).ThemePanel;
        pIStackY_1f0 = (Il2CppClass *)0x43926dd;
        pIVar16 = "DefaultSetting";
        UVar30 = UI_UIManager__GetThemeColor
                           ((System_String_o *)pIVar26,(System_String_o *)"DefaultSetting","TextColor",
                            "DefaultPanel",(MethodInfo *)0x0);
        pIVar25 = (Il2CppClass *)0x0;
        pIVar23 = (Il2CppClass *)&"";
        options = (System_String_array *)&"DefaultPanel";
        __this = (UI_IncrementSettingElement_o *)&"DefaultButton";
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          pIStackY_1f0 = (Il2CppClass *)0x43926f5;
          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                    (UVar30.fields.r,UVar30.fields.b,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
  goto label_04392707;
}


// UI.IncrementSettingElement$$OnButtonPressed
// il2cpp: void UI_IncrementSettingElement__OnButtonPressed (UI_IncrementSettingElement_o* __this, bool increment, const MethodInfo* method);
// 0x4392710

void UI_IncrementSettingElement__OnButtonPressed
               (UI_IncrementSettingElement_o *__this,bool_conflict increment,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Func_bool__o *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  System_String_array *pSVar5;
  Il2CppMethodPointer pIVar6;
  char cVar7;
  System_String_o *pSVar8;
  MethodInfo *extraout_RDX;
  undefined1 *puVar9;
  uint value;
  undefined4 in_register_00000034;
  MethodInfo *pMVar10;
  MethodInfo_2A23FA0 **ppMVar11;
  UI_IncrementSettingElement_o *pUVar12;
  undefined1 auStack_28 [8];
  
  pMVar10 = (MethodInfo *)CONCAT44(in_register_00000034,increment);
  ppMVar11 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar11 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2b4 = '\x01';
    method = extraout_RDX;
  }
  if ((__this->fields)._settingType != 2) {
label_043927de:
    UI_IncrementSettingElement__UpdateValueLabel(__this,pMVar10);
    pUVar4 = (__this->fields)._onValueChanged;
    if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
    return;
  }
  pUVar12 = (UI_IncrementSettingElement_o *)(__this->fields)._setting;
  if (pUVar12 != (UI_IncrementSettingElement_o *)0x0) {
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
       ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting
       )) {
      uVar2 = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
      value = (uVar2 + (increment & 0xffU) * 2) - 1;
      pMVar10 = (MethodInfo *)(ulong)value;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar12,value,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields)._validation;
      if (pSVar3 != (System_Func_bool__o *)0x0) {
        pMVar10 = (MethodInfo *)(pSVar3->fields).method;
        cVar7 = (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
        if (cVar7 == '\0') {
          pMVar10 = (MethodInfo *)(ulong)uVar2;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar12,uVar2,MethodInfo_Void_set_Value);
        }
      }
      goto label_043927de;
    }
    il2cpp_runtime_helper_022b2fd0(pUVar12,TypeInfo_IntSetting,method);
    ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar9 = auStack_28;
  do {
    *(UI_IncrementSettingElement_o **)(puVar9 + -8) = __this;
    if (g_data_057ae2b5 == '\0') {
      *(undefined8 *)(puVar9 + -0x20) = 0x439283d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar9 + -0x20) = 0x4392849;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2b5 = '\x01';
    }
    *(undefined4 *)(puVar9 + -0xc) = 0;
    if ((((UI_IncrementSettingElement_o *)ppMVar11)->fields)._settingType != 2) {
      return;
    }
    pSVar5 = (((UI_IncrementSettingElement_o *)ppMVar11)->fields)._options;
    pUVar12 = (UI_IncrementSettingElement_o *)(((UI_IncrementSettingElement_o *)ppMVar11)->fields)._setting;
    __this = (UI_IncrementSettingElement_o *)(((UI_IncrementSettingElement_o *)ppMVar11)->fields)._valueLabel;
    if (pSVar5 == (System_String_array *)0x0) {
      if (pUVar12 != (UI_IncrementSettingElement_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
           ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_IntSetting)) {
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
             ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              TypeInfo_IntSetting)) {
            *(int32_t *)(puVar9 + -0xc) = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
            pUVar12 = (UI_IncrementSettingElement_o *)(puVar9 + -0xc);
            *(undefined8 *)(puVar9 + -0x20) = 0x4392966;
            pSVar8 = System_Int32__ToString((int32_t)pUVar12,(MethodInfo *)0x0);
            if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
              pMVar10 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method;
              pIVar6 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr;
              *(undefined8 *)(puVar9 + -0x20) = 0x4392981;
              (*pIVar6)(__this,pSVar8,pMVar10);
              return;
            }
            goto label_0439298c;
          }
        }
        goto label_04392987;
      }
label_0439298c:
      *(undefined8 *)(puVar9 + -0x20) = 0x4392991;
      il2cpp_runtime_helper_022b2c90();
      ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
    }
    else {
      if (pUVar12 == (UI_IncrementSettingElement_o *)0x0) goto label_0439298c;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) {
label_04392987:
        *(undefined8 *)(puVar9 + -0x20) = 0x439298c;
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439298c;
      }
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_04392987;
      uVar2 = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
      ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
      if (uVar2 < (uint)pSVar5->max_length) {
        if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
          pSVar8 = pSVar5->m_Items[(int)uVar2];
          pMVar10 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method;
          pIVar6 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr;
          *(undefined8 *)(puVar9 + -0x20) = 0x4392908;
          (*pIVar6)(__this,pSVar8,pMVar10);
          return;
        }
        goto label_0439298c;
      }
    }
    *(undefined8 *)(puVar9 + -0x20) = 0x4392996;
    il2cpp_runtime_helper_022b2ca0();
    puVar9 = puVar9 + -0x18;
  } while( true );
}


// UI.IncrementSettingElement$$UpdateValueLabel
// il2cpp: void UI_IncrementSettingElement__UpdateValueLabel (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4392820

void UI_IncrementSettingElement__UpdateValueLabel(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_o *unaff_RBX;
  UI_IncrementSettingElement_o *pUVar7;
  
  do {
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -8) = unaff_RBX;
    if (g_data_057ae2b5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439283d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392849;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2b5 = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0xc) = 0;
    if ((__this->fields)._settingType != 2) {
      return;
    }
    pSVar3 = (__this->fields)._options;
    pUVar7 = (UI_IncrementSettingElement_o *)(__this->fields)._setting;
    unaff_RBX = (__this->fields)._valueLabel;
    if (pSVar3 == (System_String_array *)0x0) {
      if (pUVar7 != (UI_IncrementSettingElement_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment) &&
           ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting))
        {
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 <= (((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment) &&
             ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)
             ) {
            *(undefined4 *)((long)register0x00000020 + -0xc) =
                 *(undefined4 *)((long)&(pUVar7->fields).m_CachedPtr + 4);
            pUVar7 = (UI_IncrementSettingElement_o *)((long)register0x00000020 + -0xc);
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392966;
            pSVar6 = System_Int32__ToString((int32_t)pUVar7,(MethodInfo *)0x0);
            if (unaff_RBX != (UnityEngine_UI_Text_o *)0x0) {
              pMVar4 = (unaff_RBX->klass->vtable)._75_set_text.method;
              pIVar5 = (unaff_RBX->klass->vtable)._75_set_text.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392981;
              (*pIVar5)(unaff_RBX,pSVar6,pMVar4);
              return;
            }
            goto label_0439298c;
          }
        }
        goto label_04392987;
      }
label_0439298c:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392991;
      il2cpp_runtime_helper_022b2c90();
      __this = pUVar7;
    }
    else {
      if (pUVar7 == (UI_IncrementSettingElement_o *)0x0) goto label_0439298c;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
label_04392987:
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439298c;
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439298c;
      }
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting))
      goto label_04392987;
      uVar2 = *(uint *)((long)&(pUVar7->fields).m_CachedPtr + 4);
      __this = pUVar7;
      if (uVar2 < (uint)pSVar3->max_length) {
        if (unaff_RBX != (UnityEngine_UI_Text_o *)0x0) {
          pSVar6 = pSVar3->m_Items[(int)uVar2];
          pMVar4 = (unaff_RBX->klass->vtable)._75_set_text.method;
          pIVar5 = (unaff_RBX->klass->vtable)._75_set_text.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392908;
          (*pIVar5)(unaff_RBX,pSVar6,pMVar4);
          return;
        }
        goto label_0439298c;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392996;
    il2cpp_runtime_helper_022b2ca0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
  } while( true );
}


// UI.IncrementSettingElement$$SyncElement
// il2cpp: void UI_IncrementSettingElement__SyncElement (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x43929a0

void UI_IncrementSettingElement__SyncElement(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_o *unaff_RBX;
  UI_IncrementSettingElement_o *pUVar7;
  
  do {
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -8) = unaff_RBX;
    if (g_data_057ae2b5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439283d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392849;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2b5 = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0xc) = 0;
    if ((__this->fields)._settingType != 2) {
      return;
    }
    pSVar3 = (__this->fields)._options;
    pUVar7 = (UI_IncrementSettingElement_o *)(__this->fields)._setting;
    unaff_RBX = (__this->fields)._valueLabel;
    if (pSVar3 == (System_String_array *)0x0) {
      if (pUVar7 != (UI_IncrementSettingElement_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment) &&
           ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting))
        {
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 <= (((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment) &&
             ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)
             ) {
            *(undefined4 *)((long)register0x00000020 + -0xc) =
                 *(undefined4 *)((long)&(pUVar7->fields).m_CachedPtr + 4);
            pUVar7 = (UI_IncrementSettingElement_o *)((long)register0x00000020 + -0xc);
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392966;
            pSVar6 = System_Int32__ToString((int32_t)pUVar7,(MethodInfo *)0x0);
            if (unaff_RBX != (UnityEngine_UI_Text_o *)0x0) {
              pMVar4 = (unaff_RBX->klass->vtable)._75_set_text.method;
              pIVar5 = (unaff_RBX->klass->vtable)._75_set_text.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392981;
              (*pIVar5)(unaff_RBX,pSVar6,pMVar4);
              return;
            }
            goto label_0439298c;
          }
        }
        goto label_04392987;
      }
label_0439298c:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392991;
      il2cpp_runtime_helper_022b2c90();
      __this = pUVar7;
    }
    else {
      if (pUVar7 == (UI_IncrementSettingElement_o *)0x0) goto label_0439298c;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
label_04392987:
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439298c;
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439298c;
      }
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_BaseSetting_c *)pUVar7->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetting_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting))
      goto label_04392987;
      uVar2 = *(uint *)((long)&(pUVar7->fields).m_CachedPtr + 4);
      __this = pUVar7;
      if (uVar2 < (uint)pSVar3->max_length) {
        if (unaff_RBX != (UnityEngine_UI_Text_o *)0x0) {
          pSVar6 = pSVar3->m_Items[(int)uVar2];
          pMVar4 = (unaff_RBX->klass->vtable)._75_set_text.method;
          pIVar5 = (unaff_RBX->klass->vtable)._75_set_text.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392908;
          (*pIVar5)(unaff_RBX,pSVar6,pMVar4);
          return;
        }
        goto label_0439298c;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4392996;
    il2cpp_runtime_helper_022b2ca0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
  } while( true );
}


// UI.IncrementSettingElement$$.ctor
// il2cpp: void UI_IncrementSettingElement___ctor (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x43929b0

void UI_IncrementSettingElement___ctor(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_0
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_0 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x43929c0

void UI_IncrementSettingElement___Setup_b__6_0(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Func_bool__o *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  System_String_array *pSVar5;
  Il2CppMethodPointer pIVar6;
  char cVar7;
  System_String_o *pSVar8;
  undefined1 *puVar9;
  MethodInfo *pMVar10;
  MethodInfo_2A23FA0 **ppMVar11;
  UI_IncrementSettingElement_o *pUVar12;
  undefined1 auStack_28 [8];
  
  pMVar10 = (MethodInfo *)0x0;
  ppMVar11 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar11 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2b4 = '\x01';
  }
  if ((__this->fields)._settingType != 2) {
label_043927de:
    UI_IncrementSettingElement__UpdateValueLabel(__this,pMVar10);
    pUVar4 = (__this->fields)._onValueChanged;
    if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
    return;
  }
  pUVar12 = (UI_IncrementSettingElement_o *)(__this->fields)._setting;
  if (pUVar12 != (UI_IncrementSettingElement_o *)0x0) {
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
       ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting
       )) {
      uVar2 = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
      pMVar10 = (MethodInfo *)(ulong)(uVar2 - 1);
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar12,uVar2 - 1,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields)._validation;
      if (pSVar3 != (System_Func_bool__o *)0x0) {
        pMVar10 = (MethodInfo *)(pSVar3->fields).method;
        cVar7 = (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
        if (cVar7 == '\0') {
          pMVar10 = (MethodInfo *)(ulong)uVar2;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar12,uVar2,MethodInfo_Void_set_Value);
        }
      }
      goto label_043927de;
    }
    il2cpp_runtime_helper_022b2fd0();
    ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar9 = auStack_28;
  do {
    *(UI_IncrementSettingElement_o **)(puVar9 + -8) = __this;
    if (g_data_057ae2b5 == '\0') {
      *(undefined8 *)(puVar9 + -0x20) = 0x439283d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar9 + -0x20) = 0x4392849;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2b5 = '\x01';
    }
    *(undefined4 *)(puVar9 + -0xc) = 0;
    if ((((UI_IncrementSettingElement_o *)ppMVar11)->fields)._settingType != 2) {
      return;
    }
    pSVar5 = (((UI_IncrementSettingElement_o *)ppMVar11)->fields)._options;
    pUVar12 = (UI_IncrementSettingElement_o *)(((UI_IncrementSettingElement_o *)ppMVar11)->fields)._setting;
    __this = (UI_IncrementSettingElement_o *)(((UI_IncrementSettingElement_o *)ppMVar11)->fields)._valueLabel;
    if (pSVar5 == (System_String_array *)0x0) {
      if (pUVar12 != (UI_IncrementSettingElement_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
           ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_IntSetting)) {
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
             ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              TypeInfo_IntSetting)) {
            *(int32_t *)(puVar9 + -0xc) = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
            pUVar12 = (UI_IncrementSettingElement_o *)(puVar9 + -0xc);
            *(undefined8 *)(puVar9 + -0x20) = 0x4392966;
            pSVar8 = System_Int32__ToString((int32_t)pUVar12,(MethodInfo *)0x0);
            if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
              pMVar10 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method;
              pIVar6 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr;
              *(undefined8 *)(puVar9 + -0x20) = 0x4392981;
              (*pIVar6)(__this,pSVar8,pMVar10);
              return;
            }
            goto label_0439298c;
          }
        }
        goto label_04392987;
      }
label_0439298c:
      *(undefined8 *)(puVar9 + -0x20) = 0x4392991;
      il2cpp_runtime_helper_022b2c90();
      ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
    }
    else {
      if (pUVar12 == (UI_IncrementSettingElement_o *)0x0) goto label_0439298c;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) {
label_04392987:
        *(undefined8 *)(puVar9 + -0x20) = 0x439298c;
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439298c;
      }
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_04392987;
      uVar2 = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
      ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
      if (uVar2 < (uint)pSVar5->max_length) {
        if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
          pSVar8 = pSVar5->m_Items[(int)uVar2];
          pMVar10 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method;
          pIVar6 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr;
          *(undefined8 *)(puVar9 + -0x20) = 0x4392908;
          (*pIVar6)(__this,pSVar8,pMVar10);
          return;
        }
        goto label_0439298c;
      }
    }
    *(undefined8 *)(puVar9 + -0x20) = 0x4392996;
    il2cpp_runtime_helper_022b2ca0();
    puVar9 = puVar9 + -0x18;
  } while( true );
}


// UI.IncrementSettingElement$$<Setup>b__6_1
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_1 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x43929d0

void UI_IncrementSettingElement___Setup_b__6_1(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Func_bool__o *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  System_String_array *pSVar5;
  Il2CppMethodPointer pIVar6;
  char cVar7;
  System_String_o *pSVar8;
  undefined1 *puVar9;
  MethodInfo *pMVar10;
  MethodInfo_2A23FA0 **ppMVar11;
  UI_IncrementSettingElement_o *pUVar12;
  undefined1 auStack_28 [8];
  
  pMVar10 = (MethodInfo *)0x1;
  ppMVar11 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar11 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2b4 = '\x01';
  }
  if ((__this->fields)._settingType != 2) {
label_043927de:
    UI_IncrementSettingElement__UpdateValueLabel(__this,pMVar10);
    pUVar4 = (__this->fields)._onValueChanged;
    if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
    return;
  }
  pUVar12 = (UI_IncrementSettingElement_o *)(__this->fields)._setting;
  if (pUVar12 != (UI_IncrementSettingElement_o *)0x0) {
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
       ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting
       )) {
      uVar2 = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
      pMVar10 = (MethodInfo *)(ulong)(uVar2 + 1);
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar12,uVar2 + 1,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields)._validation;
      if (pSVar3 != (System_Func_bool__o *)0x0) {
        pMVar10 = (MethodInfo *)(pSVar3->fields).method;
        cVar7 = (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
        if (cVar7 == '\0') {
          pMVar10 = (MethodInfo *)(ulong)uVar2;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar12,uVar2,MethodInfo_Void_set_Value);
        }
      }
      goto label_043927de;
    }
    il2cpp_runtime_helper_022b2fd0();
    ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar9 = auStack_28;
  do {
    *(UI_IncrementSettingElement_o **)(puVar9 + -8) = __this;
    if (g_data_057ae2b5 == '\0') {
      *(undefined8 *)(puVar9 + -0x20) = 0x439283d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar9 + -0x20) = 0x4392849;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2b5 = '\x01';
    }
    *(undefined4 *)(puVar9 + -0xc) = 0;
    if ((((UI_IncrementSettingElement_o *)ppMVar11)->fields)._settingType != 2) {
      return;
    }
    pSVar5 = (((UI_IncrementSettingElement_o *)ppMVar11)->fields)._options;
    pUVar12 = (UI_IncrementSettingElement_o *)(((UI_IncrementSettingElement_o *)ppMVar11)->fields)._setting;
    __this = (UI_IncrementSettingElement_o *)(((UI_IncrementSettingElement_o *)ppMVar11)->fields)._valueLabel;
    if (pSVar5 == (System_String_array *)0x0) {
      if (pUVar12 != (UI_IncrementSettingElement_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
           ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_IntSetting)) {
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 <= (((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment) &&
             ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              TypeInfo_IntSetting)) {
            *(int32_t *)(puVar9 + -0xc) = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
            pUVar12 = (UI_IncrementSettingElement_o *)(puVar9 + -0xc);
            *(undefined8 *)(puVar9 + -0x20) = 0x4392966;
            pSVar8 = System_Int32__ToString((int32_t)pUVar12,(MethodInfo *)0x0);
            if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
              pMVar10 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method;
              pIVar6 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr;
              *(undefined8 *)(puVar9 + -0x20) = 0x4392981;
              (*pIVar6)(__this,pSVar8,pMVar10);
              return;
            }
            goto label_0439298c;
          }
        }
        goto label_04392987;
      }
label_0439298c:
      *(undefined8 *)(puVar9 + -0x20) = 0x4392991;
      il2cpp_runtime_helper_022b2c90();
      ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
    }
    else {
      if (pUVar12 == (UI_IncrementSettingElement_o *)0x0) goto label_0439298c;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) {
label_04392987:
        *(undefined8 *)(puVar9 + -0x20) = 0x439298c;
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439298c;
      }
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_int__c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_04392987;
      uVar2 = *(int32_t *)((long)&(pUVar12->fields).m_CachedPtr + 4);
      ppMVar11 = (MethodInfo_2A23FA0 **)pUVar12;
      if (uVar2 < (uint)pSVar5->max_length) {
        if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
          pSVar8 = pSVar5->m_Items[(int)uVar2];
          pMVar10 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method;
          pIVar6 = (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr;
          *(undefined8 *)(puVar9 + -0x20) = 0x4392908;
          (*pIVar6)(__this,pSVar8,pMVar10);
          return;
        }
        goto label_0439298c;
      }
    }
    *(undefined8 *)(puVar9 + -0x20) = 0x4392996;
    il2cpp_runtime_helper_022b2ca0();
    puVar9 = puVar9 + -0x18;
  } while( true );
}


