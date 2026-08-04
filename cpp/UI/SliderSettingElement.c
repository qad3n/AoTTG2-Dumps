// Type: UI.SliderSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SliderSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs
// --------------------------------

// UI.SliderSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderSettingElement__get_SupportedSettingTypes (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x4397e70

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderSettingElement__get_SupportedSettingTypes(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Settings_TypedSetting_float__c *pSVar3;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  code *pcVar4;
  int32_t iVar5;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  System_Collections_Generic_HashSet_SettingType__o *__this_01;
  Il2CppClass **ppIVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  System_Runtime_Serialization_SerializationInfo_o *pSVar9;
  System_String_o **provider;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  ulong extraout_RAX_01;
  ulong extraout_RAX_02;
  System_String_o *pSVar10;
  System_Collections_Generic_HashSet_SettingType__o *pSVar11;
  long *plVar12;
  ulong uVar13;
  System_String_o *in_RCX;
  void *pvVar14;
  Il2CppClass *extraout_RDX;
  undefined8 uVar15;
  Il2CppClass *pIVar16;
  UnityEngine_UI_Slider_o *__this_02;
  Il2CppClass *pIVar17;
  Il2CppClass *pIVar18;
  UnityEngine_MonoBehaviour_o *__this_03;
  System_String_o *in_R8;
  int32_t in_R9D;
  Il2CppClass *unaff_R14;
  undefined4 uVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 in_XMM1_Da;
  UnityEngine_Color_o UVar21;
  undefined1 auStack_88 [12];
  float fStack_7c;
  Il2CppClass *pIStack_78;
  Il2CppClass *pIStack_70;
  System_String_o *pSStack_68;
  Il2CppClass *pIStack_60;
  System_Runtime_Serialization_SerializationInfo_o **ppSStack_58;
  System_String_o *pSStack_50;
  System_Collections_Generic_HashSet_SettingType__o *pSStack_48;
  
  if (g_data_057ae2db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2db = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  provider = (System_String_o **)MethodInfo_HashSet_1_Settings_SettingType;
  pSVar11 = __this_01;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_01,(MethodInfo_33DA550 *)MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_01 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_01,3,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_01,2,MethodInfo_Boolean_Add);
    return __this_01;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  pIStack_60 = (Il2CppClass *)CONCAT44(pIStack_60._4_4_,in_XMM1_Da);
  pSStack_68 = (System_String_o *)CONCAT44(pSStack_68._4_4_,uVar19);
  pIStack_70 = extraout_RDX;
  pSStack_50 = in_RCX;
  pSStack_48 = __this_01;
  if (g_data_057ae2dc == '\0') {
    pIStack_78 = (Il2CppClass *)0x4397f58;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pIStack_78 = (Il2CppClass *)0x4397f64;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIStack_78 = (Il2CppClass *)0x4397f70;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    pIStack_78 = (Il2CppClass *)0x4397f7c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pIStack_78 = (Il2CppClass *)0x4397f88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    pIStack_78 = (Il2CppClass *)0x4397f94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    pIStack_78 = (Il2CppClass *)0x4397fa0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NumberFormatInfo);
    pIStack_78 = (Il2CppClass *)0x4397fac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    pIStack_78 = (Il2CppClass *)0x4397fb8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStack_78 = (Il2CppClass *)0x4397fc4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_float);
    pIStack_78 = (Il2CppClass *)0x4397fd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    pIStack_78 = (Il2CppClass *)0x4397fdc;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pIStack_78 = (Il2CppClass *)0x4397fe8;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pIStack_78 = (Il2CppClass *)0x4397ff4;
    il2cpp_runtime_helper_023445d0(&"SliderBackgroundColor");
    pIStack_78 = (Il2CppClass *)0x4398000;
    il2cpp_runtime_helper_023445d0(&"Handle Slide Area/Handle");
    pIStack_78 = (Il2CppClass *)0x439800c;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pIStack_78 = (Il2CppClass *)0x4398018;
    il2cpp_runtime_helper_023445d0(&"Background");
    pIStack_78 = (Il2CppClass *)0x4398024;
    il2cpp_runtime_helper_023445d0(&"Fill Area/Fill");
    pIStack_78 = (Il2CppClass *)0x4398030;
    il2cpp_runtime_helper_023445d0(&"Value");
    pIStack_78 = (Il2CppClass *)0x439803c;
    il2cpp_runtime_helper_023445d0(&"Slider");
    pIStack_78 = (Il2CppClass *)0x4398048;
    il2cpp_runtime_helper_023445d0(&"SliderHandleColor");
    pIStack_78 = (Il2CppClass *)0x4398054;
    il2cpp_runtime_helper_023445d0(&"SliderFillColor");
    g_data_057ae2dc = '\x01';
  }
  pIStack_78 = (Il2CppClass *)0x439806a;
  ppIVar6 = (Il2CppClass **)il2cpp_runtime_helper_023052d0(TypeInfo_NumberFormatInfo);
  pIStack_78 = (Il2CppClass *)0x4398077;
  System_Globalization_NumberFormatInfo___ctor
            ((System_Globalization_NumberFormatInfo_o *)ppIVar6,(MethodInfo *)0x0);
  pSVar11[1].klass = (System_Collections_Generic_HashSet_SettingType__c *)ppIVar6;
  pIStack_78 = (Il2CppClass *)0x4398089;
  il2cpp_runtime_helper_022b4080(pSVar11 + 1);
  if (pSVar11[1].klass == (System_Collections_Generic_HashSet_SettingType__c *)0x0) {
label_0439860c:
    pIStack_78 = (Il2CppClass *)0x4398611;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIStack_78 = (Il2CppClass *)0x43980a0;
    System_Globalization_NumberFormatInfo__set_NumberDecimalDigits
              ((System_Globalization_NumberFormatInfo_o *)pSVar11[1].klass,in_R9D,(MethodInfo *)0x0);
    pIStack_78 = (Il2CppClass *)0x43980aa;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pIStack_78 = (Il2CppClass *)0x43980c7;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Slider",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pIStack_78 = (Il2CppClass *)0x43980e2;
    pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Slider_GetComponent_Slider);
    unaff_R14 = (Il2CppClass *)&((System_Collections_Generic_HashSet_T__Fields *)&pSVar11->fields)->_version;
    *(Il2CppObject **)&((System_Collections_Generic_HashSet_T__Fields *)&pSVar11->fields)->_version = pIVar8;
    pIStack_78 = (Il2CppClass *)0x43980f7;
    il2cpp_runtime_helper_022b4080(unaff_R14);
    pIStack_78 = (Il2CppClass *)0x4398101;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pIStack_78 = (Il2CppClass *)0x439811e;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Value",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pIStack_78 = (Il2CppClass *)0x4398139;
    pSVar9 = (System_Runtime_Serialization_SerializationInfo_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
    ppSStack_58 = &((System_Collections_Generic_HashSet_T__Fields *)&pSVar11->fields)->_siInfo;
    ((System_Collections_Generic_HashSet_T__Fields *)&pSVar11->fields)->_siInfo = pSVar9;
    pIStack_78 = (Il2CppClass *)0x4398150;
    il2cpp_runtime_helper_022b4080(ppSStack_58,pSVar9);
    pIStack_78 = (Il2CppClass *)0x439815d;
    iVar5 = UI_BaseSettingElement__GetSettingType
                      ((UI_BaseSettingElement_o *)pSVar11,(Settings_BaseSetting_o *)provider,(MethodInfo *)0x0
                      );
    ((System_Collections_Generic_HashSet_T__Fields *)&pSVar11->fields)->_freeList = iVar5;
    if (iVar5 != 3) {
      if (iVar5 == 2) {
        if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
          pIStack_78 = (Il2CppClass *)0x439818c;
          UnityEngine_UI_Slider__set_wholeNumbers(*(UnityEngine_UI_Slider_o **)unaff_R14,1,(MethodInfo *)0x0);
          if ((Il2CppClass *)provider != (Il2CppClass *)0x0) {
            ppIVar6 = &TypeInfo_IntSetting;
            pSVar3 = (((Il2CppClass *)provider)->_1).image;
            bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
            if (((pSVar3->_2).naturalAligment < bVar1) ||
               ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04398611;
            if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
              pIStack_78 = (Il2CppClass *)0x43981e0;
              UnityEngine_UI_Slider__set_minValue
                        (*(UnityEngine_UI_Slider_o **)unaff_R14,
                         (float)*(int *)&(((Il2CppClass *)provider)->_1).namespaze,(MethodInfo *)0x0);
              pSVar3 = (((Il2CppClass *)provider)->_1).image;
              bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
              if (((pSVar3->_2).naturalAligment < bVar1) ||
                 ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04398611;
              __this_02 = *(UnityEngine_UI_Slider_o **)unaff_R14;
              if (__this_02 != (UnityEngine_UI_Slider_o *)0x0) {
                fVar20 = (float)*(int *)((long)&(((Il2CppClass *)provider)->_1).namespaze + 4);
                goto label_043982cb;
              }
            }
          }
        }
      }
      else {
label_043982d2:
        if (*(UnityEngine_Component_o **)unaff_R14 != (UnityEngine_Component_o *)0x0) {
          pIStack_78 = (Il2CppClass *)0x43982ed;
          pIVar8 = UnityEngine_Component__GetComponent_object_
                             (*(UnityEngine_Component_o **)unaff_R14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          ppIVar6 = (Il2CppClass **)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
          if (pIVar8 != (Il2CppObject *)0x0) {
            pIStack_78 = (Il2CppClass *)0x439830f;
            (*pIVar8->klass->vtable[0x24].methodPtr)((ulong)pSStack_68 & 0xffffffff,pIVar8);
            if (*(UnityEngine_Component_o **)unaff_R14 != (UnityEngine_Component_o *)0x0) {
              pIStack_78 = (Il2CppClass *)0x4398323;
              pIVar8 = UnityEngine_Component__GetComponent_object_
                                 (*(UnityEngine_Component_o **)unaff_R14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar8 != (Il2CppObject *)0x0) {
                pIStack_78 = (Il2CppClass *)0x4398345;
                (*pIVar8->klass->vtable[0x26].methodPtr)((ulong)pIStack_60 & 0xffffffff,pIVar8);
                if (*(long *)unaff_R14 != 0) {
                  __this_00 = *(UnityEngine_Events_UnityEvent_float__o **)(*(long *)unaff_R14 + 0x128);
                  pIStack_78 = (Il2CppClass *)0x4398367;
                  ppIVar6 = (Il2CppClass **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_float);
                  pIStack_78 = (Il2CppClass *)0x4398381;
                  UnityEngine_Events_UnityAction_float____ctor();
                  if (__this_00 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                    pIStack_78 = (Il2CppClass *)0x439839f;
                    UnityEngine_Events_UnityEvent_float___AddListener
                              (__this_00,(UnityEngine_Events_UnityAction_T0__o *)ppIVar6,MethodInfo_Void_AddListener);
                    if ((pIStack_70 != (Il2CppClass *)0x0) &&
                       ((UnityEngine_UI_Text_o *)*ppSStack_58 != (UnityEngine_UI_Text_o *)0x0)) {
                      pIStack_78 = (Il2CppClass *)0x43983c9;
                      UnityEngine_UI_Text__set_fontSize
                                ((UnityEngine_UI_Text_o *)*ppSStack_58,*(int32_t *)&(pIStack_70->_1).name,
                                 (MethodInfo *)0x0);
                      if (*(UnityEngine_Component_o **)unaff_R14 != (UnityEngine_Component_o *)0x0) {
                        pIStack_78 = (Il2CppClass *)0x43983dc;
                        pUVar7 = UnityEngine_Component__get_transform
                                           (*(UnityEngine_Component_o **)unaff_R14,(MethodInfo *)0x0);
                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                          pIStack_78 = (Il2CppClass *)0x43983f9;
                          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Background",(MethodInfo *)0x0);
                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                            pIStack_78 = (Il2CppClass *)0x439841e;
                            pSStack_68 = in_R8;
                            pIStack_60 = (Il2CppClass *)provider;
                            provider = (System_String_o **)
                                       UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
                            pSVar10 = (System_String_o *)(pIStack_70->_1).namespaze;
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              pIStack_78 = (Il2CppClass *)0x4398441;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pIStack_78 = (Il2CppClass *)0x439846d;
                            UVar21 = UI_UIManager__GetThemeColor
                                               (pSVar10,"DefaultSetting","SliderBackgroundColor","DefaultPanel",
                                                (MethodInfo *)0x0);
                            if ((Il2CppClass *)provider != (Il2CppClass *)0x0) {
                              pIStack_78 = (Il2CppClass *)0x4398489;
                              (*(code *)(((Il2CppClass *)provider)->_1).image[1].rgctx_data)
                                        (UVar21.fields._0_8_,UVar21.fields._8_8_,provider);
                              if (*(UnityEngine_Component_o **)unaff_R14 != (UnityEngine_Component_o *)0x0) {
                                pIStack_78 = (Il2CppClass *)0x439849c;
                                pUVar7 = UnityEngine_Component__get_transform
                                                   (*(UnityEngine_Component_o **)unaff_R14,(MethodInfo *)0x0);
                                ppIVar6 = (Il2CppClass **)pIStack_70;
                                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                  provider = &"DefaultSetting";
                                  pIStack_78 = (Il2CppClass *)0x43984c0;
                                  pUVar7 = UnityEngine_Transform__Find(pUVar7,"Fill Area/Fill",(MethodInfo *)0x0);
                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                    pIStack_78 = (Il2CppClass *)0x43984e2;
                                    pIVar8 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
                                    pIStack_78 = (Il2CppClass *)0x4398502;
                                    UVar21 = UI_UIManager__GetThemeColor
                                                       ((System_String_o *)
                                                        (((Il2CppClass *)ppIVar6)->_1).namespaze,"DefaultSetting",
                                                        "SliderFillColor","DefaultPanel",(MethodInfo *)0x0);
                                    if (pIVar8 != (Il2CppObject *)0x0) {
                                      pIStack_78 = (Il2CppClass *)0x439851f;
                                      (*pIVar8->klass->vtable[0x17].methodPtr)
                                                (UVar21.fields._0_8_,UVar21.fields._8_8_,pIVar8);
                                      if (*(UnityEngine_Component_o **)unaff_R14 !=
                                          (UnityEngine_Component_o *)0x0) {
                                        pIStack_78 = (Il2CppClass *)0x4398532;
                                        pUVar7 = UnityEngine_Component__get_transform
                                                           (*(UnityEngine_Component_o **)unaff_R14,
                                                            (MethodInfo *)0x0);
                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                          pIStack_78 = (Il2CppClass *)0x439854f;
                                          pUVar7 = UnityEngine_Transform__Find
                                                             (pUVar7,"Handle Slide Area/Handle",(MethodInfo *)0x0);
                                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                            pIStack_78 = (Il2CppClass *)0x439856a;
                                            pIVar8 = UnityEngine_Component__GetComponent_object_
                                                               ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image
                                                               );
                                            pIStack_78 = (Il2CppClass *)0x439858a;
                                            UVar21 = UI_UIManager__GetThemeColor
                                                               ((System_String_o *)
                                                                (((Il2CppClass *)ppIVar6)->_1).namespaze,
                                                                "DefaultSetting","SliderHandleColor","DefaultPanel",
                                                                (MethodInfo *)0x0);
                                            if (pIVar8 != (Il2CppObject *)0x0) {
                                              pIStack_78 = (Il2CppClass *)0x43985a3;
                                              (*pIVar8->klass->vtable[0x17].methodPtr)
                                                        (UVar21.fields._0_8_,UVar21.fields._8_8_,pIVar8,
                                                         pIVar8->klass->vtable[0x17].method);
                                              pSVar9 = *ppSStack_58;
                                              pIStack_78 = (Il2CppClass *)0x43985c8;
                                              UVar21 = UI_UIManager__GetThemeColor
                                                                 ((System_String_o *)
                                                                  (((Il2CppClass *)ppIVar6)->_1).namespaze,
                                                                  "DefaultSetting","TextColor","DefaultPanel",
                                                                  (MethodInfo *)0x0);
                                              if (pSVar9 != (System_Runtime_Serialization_SerializationInfo_o
                                                             *)0x0) {
                                                pIStack_78 = (Il2CppClass *)0x43985e1;
                                                (**(code **)&pSVar9->klass[1]._2.naturalAligment)
                                                          (UVar21.fields._0_8_,UVar21.fields._8_8_,pSVar9,
                                                           pSVar9->klass[1].vtable._0_Equals.methodPtr);
                                                UI_BaseSettingElement__Setup
                                                          ((UI_BaseSettingElement_o *)pSVar11,
                                                           (Settings_BaseSetting_o *)pIStack_60,
                                                           (UI_ElementStyle_o *)ppIVar6,pSStack_50,pSStack_68,
                                                           (MethodInfo *)0x0);
                                                return extraout_RAX_00;
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
                  }
                }
              }
            }
          }
        }
      }
      goto label_0439860c;
    }
    if (*(UnityEngine_UI_Slider_o **)unaff_R14 == (UnityEngine_UI_Slider_o *)0x0) goto label_0439860c;
    pIStack_78 = (Il2CppClass *)0x439823a;
    UnityEngine_UI_Slider__set_wholeNumbers(*(UnityEngine_UI_Slider_o **)unaff_R14,0,(MethodInfo *)0x0);
    if ((Il2CppClass *)provider == (Il2CppClass *)0x0) goto label_0439860c;
    ppIVar6 = &TypeInfo_FloatSetting;
    pSVar3 = (((Il2CppClass *)provider)->_1).image;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if ((bVar1 <= (pSVar3->_2).naturalAligment) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
      if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
        pIStack_78 = (Il2CppClass *)0x439828e;
        UnityEngine_UI_Slider__set_minValue
                  (*(UnityEngine_UI_Slider_o **)unaff_R14,*(float *)&(((Il2CppClass *)provider)->_1).namespaze
                   ,(MethodInfo *)0x0);
        pSVar3 = (((Il2CppClass *)provider)->_1).image;
        bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((pSVar3->_2).naturalAligment < bVar1) ||
           ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_04398611;
        __this_02 = *(UnityEngine_UI_Slider_o **)unaff_R14;
        if (__this_02 != (UnityEngine_UI_Slider_o *)0x0) {
          fVar20 = *(float *)((long)&(((Il2CppClass *)provider)->_1).namespaze + 4);
label_043982cb:
          pIStack_78 = (Il2CppClass *)0x43982d2;
          UnityEngine_UI_Slider__set_maxValue(__this_02,fVar20,(MethodInfo *)0x0);
          goto label_043982d2;
        }
      }
      goto label_0439860c;
    }
  }
label_04398611:
  pIStack_78 = (Il2CppClass *)0x4398619;
  fVar20 = (float)il2cpp_runtime_helper_022b2fd0();
  pIStack_78 = (Il2CppClass *)ppIVar6;
  if (g_data_057ae2dd == '\0') {
    fStack_7c = fVar20;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2dd = '\x01';
    fVar20 = fStack_7c;
  }
  uVar2 = (((Il2CppClass *)provider)->_1).byval_arg.bits;
  uVar13 = (ulong)uVar2;
  if (uVar2 == 2) {
    pIVar17 = (((Il2CppClass *)provider)->_1).byval_arg.data;
    if (pIVar17 != (Il2CppClass *)0x0) {
      pSVar3 = (pIVar17->_1).image;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (pSVar3->_2).naturalAligment) &&
         ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pIVar17,(int)fVar20,MethodInfo_Void_set_Value);
        uVar13 = extraout_RAX_02;
        pIVar16 = pIStack_78;
        ppIVar6 = &pIStack_70;
        goto UI_SliderSettingElement__UpdateValueLabel;
      }
label_043987b1:
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  else {
    pIVar16 = pIStack_78;
    ppIVar6 = &pIStack_70;
    if (uVar2 != 3) goto UI_SliderSettingElement__UpdateValueLabel;
    if ((0.99 <= fVar20) && (fVar20 <= 1.01)) {
      plVar12 = *(long **)&(((Il2CppClass *)provider)->_1).this_arg.bits;
      pIVar17 = (Il2CppClass *)0x0;
      if (plVar12 == (long *)0x0) goto label_043987b6;
      (**(code **)(*plVar12 + 0x428))(0x3f800000);
      fVar20 = 1.0;
    }
    plVar12 = *(long **)&(((Il2CppClass *)provider)->_1).this_arg.bits;
    pIVar17 = (Il2CppClass *)0x0;
    if (plVar12 != (long *)0x0) {
      if (((fVar20 <= 0.01) && (-0.01 <= fVar20)) &&
         (*(float *)((long)plVar12 + 0x114) <= 0.0 && *(float *)((long)plVar12 + 0x114) != 0.0)) {
        (**(code **)(*plVar12 + 0x428))(0);
        fVar20 = 0.0;
      }
      pIVar17 = (((Il2CppClass *)provider)->_1).byval_arg.data;
      if (pIVar17 != (Il2CppClass *)0x0) {
        pSVar3 = (pIVar17->_1).image;
        bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar3->_2).naturalAligment) &&
           ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pIVar17,fVar20,MethodInfo_Void_set_Value);
          uVar13 = extraout_RAX_01;
          pIVar16 = pIStack_78;
          ppIVar6 = &pIStack_70;
          goto UI_SliderSettingElement__UpdateValueLabel;
        }
        goto label_043987b1;
      }
    }
  }
label_043987b6:
  uVar13 = il2cpp_runtime_helper_022b2c90();
  pIVar16 = (Il2CppClass *)provider;
  ppIVar6 = (Il2CppClass **)auStack_88;
  provider = (System_String_o **)pIVar17;
UI_SliderSettingElement__UpdateValueLabel:
  do {
    *(Il2CppClass **)((long)ppIVar6 + -8) = unaff_R14;
    *(Il2CppClass **)((long)ppIVar6 + -0x10) = pIVar16;
    pIVar17 = (Il2CppClass *)((long)ppIVar6 + -0x18);
    *(ulong *)((long)ppIVar6 + -0x18) = uVar13;
    if (g_data_057ae2de == '\0') {
      *(undefined8 *)((long)ppIVar6 + -0x20) = 0x43987dc;
      il2cpp_runtime_helper_023445d0(&"{0:N}");
      g_data_057ae2de = '\x01';
    }
    *(undefined4 *)((long)ppIVar6 + -0x18) = 0;
    uVar2 = (((Il2CppClass *)provider)->_1).byval_arg.bits;
    if (uVar2 == 2) {
      plVar12 = *(long **)&(((Il2CppClass *)provider)->_1).this_arg.bits;
      pIVar18 = (Il2CppClass *)0x0;
      if (plVar12 != (long *)0x0) {
        pIVar16 = (((Il2CppClass *)provider)->_1).element_class;
        pcVar4 = *(code **)(*plVar12 + 0x418);
        *(undefined8 *)((long)ppIVar6 + -0x20) = 0x4398883;
        fVar20 = (float)(*pcVar4)();
        *(int *)((long)ppIVar6 + -0x18) = (int)fVar20;
        *(undefined8 *)((long)ppIVar6 + -0x20) = 0x4398894;
        pSVar10 = System_Int32__ToString((int32_t)(undefined1 *)((long)ppIVar6 + -0x18),(MethodInfo *)0x0);
        provider = (System_String_o **)0x0;
        pIVar18 = pIVar17;
        if (pIVar16 != (Il2CppClass *)0x0) {
          pvVar14 = (pIVar16->_1).image;
          uVar15 = *(undefined8 *)((long)pvVar14 + 0x5f0);
          goto label_043988a6;
        }
      }
    }
    else {
      if (uVar2 != 3) {
        return (System_Collections_Generic_HashSet_SettingType__o *)(ulong)uVar2;
      }
      plVar12 = *(long **)&(((Il2CppClass *)provider)->_1).this_arg.bits;
      pIVar18 = (Il2CppClass *)0x0;
      if (plVar12 != (long *)0x0) {
        pIVar16 = (((Il2CppClass *)provider)->_1).element_class;
        provider = (System_String_o **)(((Il2CppClass *)provider)->_1).castClass;
        uVar15 = *(undefined8 *)(*plVar12 + 0x420);
        pcVar4 = *(code **)(*plVar12 + 0x418);
        *(undefined8 *)((long)ppIVar6 + -0x20) = 0x4398820;
        uVar19 = (*pcVar4)(plVar12,uVar15);
        *(undefined4 *)((long)ppIVar6 + -0x14) = uVar19;
        *(undefined8 *)((long)ppIVar6 + -0x20) = 0x439883b;
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)ppIVar6 + -0x14));
        *(undefined8 *)((long)ppIVar6 + -0x20) = 0x4398852;
        pIVar18 = (Il2CppClass *)provider;
        pSVar10 = System_String__Format_3af7a30
                            ((System_IFormatProvider_o *)provider,"{0:N}",pIVar8,(MethodInfo *)0x0);
        unaff_R14 = pIVar16;
        if (pIVar16 != (Il2CppClass *)0x0) {
          pvVar14 = (pIVar16->_1).image;
          uVar15 = *(undefined8 *)((long)pvVar14 + 0x5f0);
label_043988a6:
          pcVar4 = *(code **)((long)pvVar14 + 0x5e8);
          *(undefined8 *)((long)ppIVar6 + -0x20) = 0x43988af;
          pSVar11 = (System_Collections_Generic_HashSet_SettingType__o *)(*pcVar4)(pIVar16,pSVar10,uVar15);
          return pSVar11;
        }
      }
    }
    *(undefined8 *)((long)ppIVar6 + -0x20) = 0x43988bc;
    il2cpp_runtime_helper_022b2c90();
    *(System_String_o ***)((long)ppIVar6 + -0x20) = provider;
    uVar19 = extraout_XMM0_Db;
    if (g_data_057ae2df == '\0') {
      *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43988d9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43988e5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43988f1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43988fd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2df = '\x01';
      uVar19 = extraout_XMM0_Db_00;
    }
    uVar2 = (pIVar18->_1).byval_arg.bits;
    uVar13 = (ulong)uVar2;
    if (uVar2 == 2) {
      __this_03 = (pIVar18->_1).byval_arg.data;
      if (__this_03 == (UnityEngine_MonoBehaviour_o *)0x0) goto UI_BaseSettingElement___ctor;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((__this_03->klass->_2).naturalAligment < bVar1) ||
         ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
label_043989b9:
        *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43989be;
        il2cpp_runtime_helper_022b2fd0();
UI_BaseSettingElement___ctor:
        *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43989c3;
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      plVar12 = *(long **)&(pIVar18->_1).this_arg.bits;
      if (plVar12 == (long *)0x0) goto UI_BaseSettingElement___ctor;
      uVar13 = CONCAT44(uVar19,(float)*(int *)((long)&(__this_03->fields).m_CachedPtr + 4));
label_0439899d:
      pcVar4 = *(code **)(*plVar12 + 0x428);
      *(undefined8 *)((long)ppIVar6 + -0x28) = 0x43989b0;
      uVar13 = (*pcVar4)(uVar13,plVar12);
    }
    else if (uVar2 == 3) {
      __this_03 = (pIVar18->_1).byval_arg.data;
      if (__this_03 != (UnityEngine_MonoBehaviour_o *)0x0) {
        bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((__this_03->klass->_2).naturalAligment < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_043989b9;
        plVar12 = *(long **)&(pIVar18->_1).this_arg.bits;
        if (plVar12 != (long *)0x0) {
          uVar13 = (ulong)*(uint *)((long)&(__this_03->fields).m_CachedPtr + 4);
          goto label_0439899d;
        }
      }
      goto UI_BaseSettingElement___ctor;
    }
    pIVar16 = *(Il2CppClass **)((long)ppIVar6 + -0x20);
    ppIVar6 = (Il2CppClass **)((long)ppIVar6 + -0x18);
    provider = (System_String_o **)pIVar18;
  } while( true );
}


// UI.SliderSettingElement$$Setup
// il2cpp: void UI_SliderSettingElement__Setup (UI_SliderSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x4397f10

void UI_SliderSettingElement__Setup
               (UI_SliderSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               int32_t decimalPlaces,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Events_UnityEvent_float__o *__this_01;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  MethodInfo *pMVar7;
  int32_t iVar8;
  Il2CppClass **__this_02;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_Slider_o *pUVar10;
  UnityEngine_UI_Text_o *pUVar11;
  Il2CppObject *pIVar12;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  ulong uVar15;
  System_String_c *pSVar16;
  void *pvVar17;
  System_Int32_array *pSVar18;
  System_Int32_array **ppSVar19;
  System_Int32_array *pSVar20;
  System_Int32_array *pSVar21;
  System_String_o *unaff_R14;
  float fVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  UnityEngine_Color_o UVar24;
  undefined1 auStack_70 [12];
  float fStack_64;
  System_Int32_array *pSStack_60;
  System_Int32_array *local_58;
  System_String_o *local_50;
  Settings_BaseSetting_o *local_48;
  UnityEngine_UI_Text_o **local_40;
  System_String_o *local_38;
  
  local_48 = (Settings_BaseSetting_o *)CONCAT44(local_48._4_4_,elementHeight);
  local_50 = (System_String_o *)CONCAT44(local_50._4_4_,elementWidth);
  local_58 = (System_Int32_array *)style;
  local_38 = title;
  if (g_data_057ae2dc == '\0') {
    pSStack_60 = (System_Int32_array *)0x4397f58;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pSStack_60 = (System_Int32_array *)0x4397f64;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_60 = (System_Int32_array *)0x4397f70;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    pSStack_60 = (System_Int32_array *)0x4397f7c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pSStack_60 = (System_Int32_array *)0x4397f88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    pSStack_60 = (System_Int32_array *)0x4397f94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    pSStack_60 = (System_Int32_array *)0x4397fa0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NumberFormatInfo);
    pSStack_60 = (System_Int32_array *)0x4397fac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    pSStack_60 = (System_Int32_array *)0x4397fb8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_60 = (System_Int32_array *)0x4397fc4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_float);
    pSStack_60 = (System_Int32_array *)0x4397fd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    pSStack_60 = (System_Int32_array *)0x4397fdc;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pSStack_60 = (System_Int32_array *)0x4397fe8;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pSStack_60 = (System_Int32_array *)0x4397ff4;
    il2cpp_runtime_helper_023445d0(&"SliderBackgroundColor");
    pSStack_60 = (System_Int32_array *)0x4398000;
    il2cpp_runtime_helper_023445d0(&"Handle Slide Area/Handle");
    pSStack_60 = (System_Int32_array *)0x439800c;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pSStack_60 = (System_Int32_array *)0x4398018;
    il2cpp_runtime_helper_023445d0(&"Background");
    pSStack_60 = (System_Int32_array *)0x4398024;
    il2cpp_runtime_helper_023445d0(&"Fill Area/Fill");
    pSStack_60 = (System_Int32_array *)0x4398030;
    il2cpp_runtime_helper_023445d0(&"Value");
    pSStack_60 = (System_Int32_array *)0x439803c;
    il2cpp_runtime_helper_023445d0(&"Slider");
    pSStack_60 = (System_Int32_array *)0x4398048;
    il2cpp_runtime_helper_023445d0(&"SliderHandleColor");
    pSStack_60 = (System_Int32_array *)0x4398054;
    il2cpp_runtime_helper_023445d0(&"SliderFillColor");
    g_data_057ae2dc = '\x01';
  }
  pSStack_60 = (System_Int32_array *)0x439806a;
  __this_02 = (Il2CppClass **)il2cpp_runtime_helper_023052d0(TypeInfo_NumberFormatInfo);
  pSStack_60 = (System_Int32_array *)0x4398077;
  System_Globalization_NumberFormatInfo___ctor
            ((System_Globalization_NumberFormatInfo_o *)__this_02,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = (System_Globalization_NumberFormatInfo_o *)__this_02;
  pSStack_60 = (System_Int32_array *)0x4398089;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._formatInfo);
  __this_00 = (__this->fields)._formatInfo;
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) {
label_0439860c:
    pSStack_60 = (System_Int32_array *)0x4398611;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_60 = (System_Int32_array *)0x43980a0;
    System_Globalization_NumberFormatInfo__set_NumberDecimalDigits(__this_00,decimalPlaces,(MethodInfo *)0x0);
    pSStack_60 = (System_Int32_array *)0x43980aa;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pSStack_60 = (System_Int32_array *)0x43980c7;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"Slider",(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pSStack_60 = (System_Int32_array *)0x43980e2;
    pUVar10 = (UnityEngine_UI_Slider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_Slider_GetComponent_Slider);
    unaff_R14 = (System_String_o *)&(__this->fields)._slider;
    (__this->fields)._slider = pUVar10;
    pSStack_60 = (System_Int32_array *)0x43980f7;
    il2cpp_runtime_helper_022b4080(unaff_R14);
    pSStack_60 = (System_Int32_array *)0x4398101;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pSStack_60 = (System_Int32_array *)0x439811e;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"Value",(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0439860c;
    pSStack_60 = (System_Int32_array *)0x4398139;
    pUVar11 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text);
    local_40 = &(__this->fields)._valueLabel;
    (__this->fields)._valueLabel = pUVar11;
    pSStack_60 = (System_Int32_array *)0x4398150;
    il2cpp_runtime_helper_022b4080(local_40,pUVar11);
    pSStack_60 = (System_Int32_array *)0x439815d;
    iVar8 = UI_BaseSettingElement__GetSettingType((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0)
    ;
    (__this->fields)._settingType = iVar8;
    if (iVar8 != 3) {
      if (iVar8 == 2) {
        if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
          pSStack_60 = (System_Int32_array *)0x439818c;
          UnityEngine_UI_Slider__set_wholeNumbers(*(UnityEngine_UI_Slider_o **)unaff_R14,1,(MethodInfo *)0x0);
          if (setting != (Settings_BaseSetting_o *)0x0) {
            __this_02 = &TypeInfo_IntSetting;
            bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
            if (((setting->klass->_2).naturalAligment < bVar2) ||
               ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) goto label_04398611;
            if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
              pSStack_60 = (System_Int32_array *)0x43981e0;
              UnityEngine_UI_Slider__set_minValue
                        (*(UnityEngine_UI_Slider_o **)unaff_R14,(float)*(int *)&setting[1].monitor,
                         (MethodInfo *)0x0);
              bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar2) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) goto label_04398611;
              pUVar10 = *(UnityEngine_UI_Slider_o **)unaff_R14;
              if (pUVar10 != (UnityEngine_UI_Slider_o *)0x0) {
                fVar22 = (float)*(int *)((long)&setting[1].monitor + 4);
                goto label_043982cb;
              }
            }
          }
        }
      }
      else {
label_043982d2:
        if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
          pSStack_60 = (System_Int32_array *)0x43982ed;
          pIVar12 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)*(UnityEngine_UI_Slider_o **)unaff_R14,MethodInfo_LayoutElement_GetComponent_LayoutElement)
          ;
          __this_02 = (Il2CppClass **)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
          if (pIVar12 != (Il2CppObject *)0x0) {
            pSStack_60 = (System_Int32_array *)0x439830f;
            (*pIVar12->klass->vtable[0x24].methodPtr)((ulong)local_50 & 0xffffffff,pIVar12);
            if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
              pSStack_60 = (System_Int32_array *)0x4398323;
              pIVar12 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)*(UnityEngine_UI_Slider_o **)unaff_R14,
                                   MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar12 != (Il2CppObject *)0x0) {
                pSStack_60 = (System_Int32_array *)0x4398345;
                (*pIVar12->klass->vtable[0x26].methodPtr)((ulong)local_48 & 0xffffffff,pIVar12);
                if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
                  __this_01 = *(UnityEngine_Events_UnityEvent_float__o **)
                               &((*(UnityEngine_UI_Slider_o **)unaff_R14)->fields).m_Value;
                  pSStack_60 = (System_Int32_array *)0x4398367;
                  __this_02 = (Il2CppClass **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_float);
                  pSStack_60 = (System_Int32_array *)0x4398381;
                  UnityEngine_Events_UnityAction_float____ctor();
                  if (__this_01 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                    pSStack_60 = (System_Int32_array *)0x439839f;
                    UnityEngine_Events_UnityEvent_float___AddListener
                              (__this_01,(UnityEngine_Events_UnityAction_T0__o *)__this_02,MethodInfo_Void_AddListener);
                    if ((local_58 != (System_Int32_array *)0x0) && (*local_40 != (UnityEngine_UI_Text_o *)0x0)
                       ) {
                      pSStack_60 = (System_Int32_array *)0x43983c9;
                      UnityEngine_UI_Text__set_fontSize
                                (*local_40,
                                 *(int32_t *)
                                  &((System_Globalization_NumberFormatInfo_Fields *)&local_58->bounds)->
                                   numberGroupSizes,(MethodInfo *)0x0);
                      if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
                        pSStack_60 = (System_Int32_array *)0x43983dc;
                        pUVar9 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)*(UnityEngine_UI_Slider_o **)unaff_R14,
                                            (MethodInfo *)0x0);
                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                          pSStack_60 = (System_Int32_array *)0x43983f9;
                          pUVar9 = UnityEngine_Transform__Find(pUVar9,"Background",(MethodInfo *)0x0);
                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                            pSStack_60 = (System_Int32_array *)0x439841e;
                            local_50 = tooltip;
                            local_48 = setting;
                            setting = (Settings_BaseSetting_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar9,MethodInfo_Image_GetComponent_Image);
                            pSVar20 = (System_Int32_array *)local_58->max_length;
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              pSStack_60 = (System_Int32_array *)0x4398441;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSStack_60 = (System_Int32_array *)0x439846d;
                            UVar24 = UI_UIManager__GetThemeColor
                                               ((System_String_o *)pSVar20,"DefaultSetting","SliderBackgroundColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            if ((System_Int32_array *)setting != (System_Int32_array *)0x0) {
                              pSStack_60 = (System_Int32_array *)0x4398489;
                              (**(code **)((long)((Settings_TypedSetting_float__VTable *)
                                                  ((((System_Int32_array *)setting)->obj).klass)->vtable + 2)
                                          + 0x10))(UVar24.fields._0_8_,UVar24.fields._8_8_,setting);
                              if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
                                pSStack_60 = (System_Int32_array *)0x439849c;
                                pUVar9 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)
                                                    *(UnityEngine_UI_Slider_o **)unaff_R14,(MethodInfo *)0x0);
                                __this_02 = (Il2CppClass **)local_58;
                                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                  pSStack_60 = (System_Int32_array *)0x43984c0;
                                  pUVar9 = UnityEngine_Transform__Find(pUVar9,"Fill Area/Fill",(MethodInfo *)0x0);
                                  setting = (Settings_BaseSetting_o *)&"DefaultSetting";
                                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                    pSStack_60 = (System_Int32_array *)0x43984e2;
                                    pIVar12 = UnityEngine_Component__GetComponent_object_
                                                        ((UnityEngine_Component_o *)pUVar9,MethodInfo_Image_GetComponent_Image);
                                    pSStack_60 = (System_Int32_array *)0x4398502;
                                    UVar24 = UI_UIManager__GetThemeColor
                                                       ((System_String_o *)
                                                        ((System_Int32_array *)__this_02)->max_length,
                                                        "DefaultSetting","SliderFillColor","DefaultPanel",
                                                        (MethodInfo *)0x0);
                                    if (pIVar12 != (Il2CppObject *)0x0) {
                                      pSStack_60 = (System_Int32_array *)0x439851f;
                                      (*pIVar12->klass->vtable[0x17].methodPtr)
                                                (UVar24.fields._0_8_,UVar24.fields._8_8_,pIVar12);
                                      if (*(UnityEngine_UI_Slider_o **)unaff_R14 !=
                                          (UnityEngine_UI_Slider_o *)0x0) {
                                        pSStack_60 = (System_Int32_array *)0x4398532;
                                        pUVar9 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)
                                                            *(UnityEngine_UI_Slider_o **)unaff_R14,
                                                            (MethodInfo *)0x0);
                                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                          pSStack_60 = (System_Int32_array *)0x439854f;
                                          pUVar9 = UnityEngine_Transform__Find
                                                             (pUVar9,"Handle Slide Area/Handle",(MethodInfo *)0x0);
                                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                            pSStack_60 = (System_Int32_array *)0x439856a;
                                            pIVar12 = UnityEngine_Component__GetComponent_object_
                                                                ((UnityEngine_Component_o *)pUVar9,
                                                                 MethodInfo_Image_GetComponent_Image);
                                            pSStack_60 = (System_Int32_array *)0x439858a;
                                            UVar24 = UI_UIManager__GetThemeColor
                                                               ((System_String_o *)
                                                                ((System_Int32_array *)__this_02)->max_length,
                                                                "DefaultSetting","SliderHandleColor","DefaultPanel",
                                                                (MethodInfo *)0x0);
                                            if (pIVar12 != (Il2CppObject *)0x0) {
                                              pSStack_60 = (System_Int32_array *)0x43985a3;
                                              (*pIVar12->klass->vtable[0x17].methodPtr)
                                                        (UVar24.fields._0_8_,UVar24.fields._8_8_,pIVar12,
                                                         pIVar12->klass->vtable[0x17].method);
                                              pUVar11 = *local_40;
                                              pSStack_60 = (System_Int32_array *)0x43985c8;
                                              UVar24 = UI_UIManager__GetThemeColor
                                                                 ((System_String_o *)
                                                                  ((System_Int32_array *)__this_02)->
                                                                  max_length,"DefaultSetting","TextColor",
                                                                  "DefaultPanel",(MethodInfo *)0x0);
                                              if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                                                pSStack_60 = (System_Int32_array *)0x43985e1;
                                                (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                                          (UVar24.fields._0_8_,UVar24.fields._8_8_,pUVar11,
                                                           (pUVar11->klass->vtable)._23_set_color.method);
                                                UI_BaseSettingElement__Setup
                                                          ((UI_BaseSettingElement_o *)__this,local_48,
                                                           (UI_ElementStyle_o *)__this_02,local_38,local_50,
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_0439860c;
    }
    if (*(UnityEngine_UI_Slider_o **)unaff_R14 == (UnityEngine_UI_Slider_o *)0x0) goto label_0439860c;
    pSStack_60 = (System_Int32_array *)0x439823a;
    UnityEngine_UI_Slider__set_wholeNumbers(*(UnityEngine_UI_Slider_o **)unaff_R14,0,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_0439860c;
    __this_02 = &TypeInfo_FloatSetting;
    bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if ((bVar2 <= (setting->klass->_2).naturalAligment) &&
       ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
      if (*(UnityEngine_UI_Slider_o **)unaff_R14 != (UnityEngine_UI_Slider_o *)0x0) {
        pSStack_60 = (System_Int32_array *)0x439828e;
        UnityEngine_UI_Slider__set_minValue
                  (*(UnityEngine_UI_Slider_o **)unaff_R14,*(float *)&setting[1].monitor,(MethodInfo *)0x0);
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((setting->klass->_2).naturalAligment < bVar2) ||
           ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto label_04398611;
        pUVar10 = *(UnityEngine_UI_Slider_o **)unaff_R14;
        if (pUVar10 != (UnityEngine_UI_Slider_o *)0x0) {
          fVar22 = *(float *)((long)&setting[1].monitor + 4);
label_043982cb:
          pSStack_60 = (System_Int32_array *)0x43982d2;
          UnityEngine_UI_Slider__set_maxValue(pUVar10,fVar22,(MethodInfo *)0x0);
          goto label_043982d2;
        }
      }
      goto label_0439860c;
    }
  }
label_04398611:
  pSStack_60 = (System_Int32_array *)0x4398619;
  fVar22 = (float)il2cpp_runtime_helper_022b2fd0();
  pSStack_60 = (System_Int32_array *)__this_02;
  if (g_data_057ae2dd == '\0') {
    fStack_64 = fVar22;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2dd = '\x01';
    fVar22 = fStack_64;
  }
  uVar3 = *(uint *)((long)((System_Int32_array *)setting)->m_Items + 8);
  uVar15 = (ulong)uVar3;
  if (uVar3 == 2) {
    pSVar20 = *(System_Int32_array **)((System_Int32_array *)setting)->m_Items;
    if (pSVar20 != (System_Int32_array *)0x0) {
      pIVar4 = (pSVar20->obj).klass;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar20,(int)fVar22,MethodInfo_Void_set_Value);
        uVar15 = extraout_RAX_00;
        pSVar18 = pSStack_60;
        ppSVar19 = &local_58;
        goto UI_SliderSettingElement__UpdateValueLabel;
      }
label_043987b1:
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  else {
    pSVar18 = pSStack_60;
    ppSVar19 = &local_58;
    if (uVar3 != 3) goto UI_SliderSettingElement__UpdateValueLabel;
    if ((0.99 <= fVar22) && (fVar22 <= 1.01)) {
      pSVar20 = (System_Int32_array *)0x0;
      if (*(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x18) ==
          (System_String_o *)0x0) goto label_043987b6;
      (*(code *)(*(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x18))->klass[1].
                vtable._0_Equals.method)(0x3f800000);
      fVar22 = 1.0;
    }
    pSVar14 = *(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x18);
    pSVar20 = (System_Int32_array *)0x0;
    if (pSVar14 != (System_String_o *)0x0) {
      if (((fVar22 <= 0.01) && (-0.01 <= fVar22)) &&
         (pfVar1 = (float *)((long)&pSVar14[0xb].monitor + 4), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
        (*(code *)pSVar14->klass[1].vtable._0_Equals.method)(0);
        fVar22 = 0.0;
      }
      pSVar20 = *(System_Int32_array **)((System_Int32_array *)setting)->m_Items;
      if (pSVar20 != (System_Int32_array *)0x0) {
        pIVar4 = (pSVar20->obj).klass;
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar20,fVar22,MethodInfo_Void_set_Value);
          uVar15 = extraout_RAX;
          pSVar18 = pSStack_60;
          ppSVar19 = &local_58;
          goto UI_SliderSettingElement__UpdateValueLabel;
        }
        goto label_043987b1;
      }
    }
  }
label_043987b6:
  uVar15 = il2cpp_runtime_helper_022b2c90();
  pSVar18 = (System_Int32_array *)setting;
  ppSVar19 = (System_Int32_array **)auStack_70;
  setting = (Settings_BaseSetting_o *)pSVar20;
UI_SliderSettingElement__UpdateValueLabel:
  do {
    *(System_String_o **)((long)ppSVar19 + -8) = unaff_R14;
    *(System_Int32_array **)((long)ppSVar19 + -0x10) = pSVar18;
    pSVar20 = (System_Int32_array *)((long)ppSVar19 + -0x18);
    *(ulong *)((long)ppSVar19 + -0x18) = uVar15;
    if (g_data_057ae2de == '\0') {
      *(undefined8 *)((long)ppSVar19 + -0x20) = 0x43987dc;
      il2cpp_runtime_helper_023445d0(&"{0:N}");
      g_data_057ae2de = '\x01';
    }
    *(undefined4 *)((long)ppSVar19 + -0x18) = 0;
    if (*(int *)((long)((System_Int32_array *)setting)->m_Items + 8) == 2) {
      pSVar21 = (System_Int32_array *)0x0;
      if (*(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x18) !=
          (System_String_o *)0x0) {
        pSVar14 = *(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x20);
        pcVar6 = *(code **)&(*(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x18))->
                            klass[1]._2.naturalAligment;
        *(undefined8 *)((long)ppSVar19 + -0x20) = 0x4398883;
        fVar22 = (float)(*pcVar6)();
        *(int *)((long)ppSVar19 + -0x18) = (int)fVar22;
        *(undefined8 *)((long)ppSVar19 + -0x20) = 0x4398894;
        pSVar13 = System_Int32__ToString((int32_t)(undefined1 *)((long)ppSVar19 + -0x18),(MethodInfo *)0x0);
        setting = (Settings_BaseSetting_o *)0x0;
        pSVar21 = pSVar20;
        if (pSVar14 != (System_String_o *)0x0) {
          pSVar16 = pSVar14->klass;
          pvVar17 = pSVar16[2]._1.byval_arg.data;
          goto label_043988a6;
        }
      }
    }
    else {
      if (*(int *)((long)((System_Int32_array *)setting)->m_Items + 8) != 3) {
        return;
      }
      pSVar13 = *(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x18);
      pSVar21 = (System_Int32_array *)0x0;
      if (pSVar13 != (System_String_o *)0x0) {
        pSVar14 = *(System_String_o **)((long)((System_Int32_array *)setting)->m_Items + 0x20);
        setting = *(Settings_BaseSetting_o **)((long)((System_Int32_array *)setting)->m_Items + 0x28);
        pIVar5 = pSVar13->klass[1].vtable._0_Equals.methodPtr;
        pcVar6 = *(code **)&pSVar13->klass[1]._2.naturalAligment;
        *(undefined8 *)((long)ppSVar19 + -0x20) = 0x4398820;
        uVar23 = (*pcVar6)(pSVar13,pIVar5);
        *(undefined4 *)((long)ppSVar19 + -0x14) = uVar23;
        *(undefined8 *)((long)ppSVar19 + -0x20) = 0x439883b;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)ppSVar19 + -0x14));
        *(undefined8 *)((long)ppSVar19 + -0x20) = 0x4398852;
        pSVar21 = (System_Int32_array *)setting;
        pSVar13 = System_String__Format_3af7a30
                            ((System_IFormatProvider_o *)setting,"{0:N}",pIVar12,(MethodInfo *)0x0);
        unaff_R14 = pSVar14;
        if (pSVar14 != (System_String_o *)0x0) {
          pSVar16 = pSVar14->klass;
          pvVar17 = pSVar16[2]._1.byval_arg.data;
label_043988a6:
          pcVar6 = (code *)pSVar16[2]._1.namespaze;
          *(undefined8 *)((long)ppSVar19 + -0x20) = 0x43988af;
          (*pcVar6)(pSVar14,pSVar13,pvVar17);
          return;
        }
      }
    }
    *(undefined8 *)((long)ppSVar19 + -0x20) = 0x43988bc;
    il2cpp_runtime_helper_022b2c90();
    *(Settings_BaseSetting_o **)((long)ppSVar19 + -0x20) = setting;
    uVar23 = extraout_XMM0_Db;
    if (g_data_057ae2df == '\0') {
      *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43988d9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43988e5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43988f1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43988fd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2df = '\x01';
      uVar23 = extraout_XMM0_Db_00;
    }
    uVar3 = *(uint *)((long)pSVar21->m_Items + 8);
    uVar15 = (ulong)uVar3;
    if (uVar3 == 2) {
      pSVar20 = *(System_Int32_array **)pSVar21->m_Items;
      if (pSVar20 == (System_Int32_array *)0x0) goto UI_BaseSettingElement___ctor;
      pIVar4 = (pSVar20->obj).klass;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((pIVar4->_2).naturalAligment < bVar2) ||
         ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
label_043989b9:
        *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43989be;
        il2cpp_runtime_helper_022b2fd0();
UI_BaseSettingElement___ctor:
        *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43989c3;
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pSVar20,(MethodInfo *)0x0);
        return;
      }
      pSVar14 = *(System_String_o **)((long)pSVar21->m_Items + 0x18);
      if (pSVar14 == (System_String_o *)0x0) goto UI_BaseSettingElement___ctor;
      uVar15 = CONCAT44(uVar23,(float)*(int *)((long)&pSVar20->bounds + 4));
label_0439899d:
      pMVar7 = pSVar14->klass[1].vtable._0_Equals.method;
      *(undefined8 *)((long)ppSVar19 + -0x28) = 0x43989b0;
      uVar15 = (*(code *)pMVar7)(uVar15,pSVar14);
    }
    else if (uVar3 == 3) {
      pSVar20 = *(System_Int32_array **)pSVar21->m_Items;
      if (pSVar20 != (System_Int32_array *)0x0) {
        pIVar4 = (pSVar20->obj).klass;
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((pIVar4->_2).naturalAligment < bVar2) ||
           ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto label_043989b9;
        pSVar14 = *(System_String_o **)((long)pSVar21->m_Items + 0x18);
        if (pSVar14 != (System_String_o *)0x0) {
          uVar15 = (ulong)*(uint *)((long)&pSVar20->bounds + 4);
          goto label_0439899d;
        }
      }
      goto UI_BaseSettingElement___ctor;
    }
    pSVar18 = *(System_Int32_array **)((long)ppSVar19 + -0x20);
    ppSVar19 = (System_Int32_array **)((long)ppSVar19 + -0x18);
    setting = (Settings_BaseSetting_o *)pSVar21;
  } while( true );
}


// UI.SliderSettingElement$$OnValueChanged
// il2cpp: void UI_SliderSettingElement__OnValueChanged (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x4398620

void UI_SliderSettingElement__OnValueChanged(UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  Il2CppClass *pIVar7;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  Il2CppObject *arg0;
  System_String_o *pSVar8;
  UnityEngine_UI_Slider_o *pUVar9;
  ulong uVar10;
  UnityEngine_UI_Text_c *pUVar11;
  MethodInfo *pMVar12;
  UI_SliderSettingElement_o *unaff_RBX;
  System_Globalization_NumberFormatInfo_o *pSVar13;
  System_Globalization_NumberFormatInfo_o *pSVar14;
  UnityEngine_UI_Text_o *pUVar15;
  System_Int32_array *__this_00;
  UnityEngine_UI_Text_o *unaff_R14;
  undefined4 uVar16;
  float fVar17;
  undefined1 local_18 [12];
  float local_c;
  
  if (g_data_057ae2dd == '\0') {
    local_c = value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2dd = '\x01';
    value = local_c;
  }
  uVar3 = (__this->fields)._settingType;
  uVar10 = (ulong)uVar3;
  if (uVar3 == 2) {
    pSVar13 = (System_Globalization_NumberFormatInfo_o *)(__this->fields)._setting;
    if (pSVar13 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (((Settings_TypedSetting_float__c *)pSVar13->klass)->_2).naturalAligment) &&
         ((((Settings_TypedSetting_float__c *)pSVar13->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          TypeInfo_IntSetting)) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar13,(int)value,MethodInfo_Void_set_Value)
        ;
        uVar10 = extraout_RAX_00;
        goto UI_SliderSettingElement__UpdateValueLabel;
      }
label_043987b1:
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  else {
    if (uVar3 != 3) goto UI_SliderSettingElement__UpdateValueLabel;
    if ((0.99 <= value) && (value <= 1.01)) {
      pUVar9 = (__this->fields)._slider;
      pSVar13 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pUVar9 == (UnityEngine_UI_Slider_o *)0x0) goto label_043987b6;
      (*(pUVar9->klass->vtable)._47_set_value.methodPtr)(0x3f800000);
      value = 1.0;
    }
    pUVar9 = (__this->fields)._slider;
    pSVar13 = (System_Globalization_NumberFormatInfo_o *)0x0;
    if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
      if (((value <= 0.01) && (-0.01 <= value)) &&
         (pfVar1 = (float *)((long)&(pUVar9->fields).m_HandleRect + 4), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
        (*(pUVar9->klass->vtable)._47_set_value.methodPtr)(0);
        value = 0.0;
      }
      pSVar13 = (System_Globalization_NumberFormatInfo_o *)(__this->fields)._setting;
      if (pSVar13 != (System_Globalization_NumberFormatInfo_o *)0x0) {
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if ((bVar2 <= (((Settings_TypedSetting_float__c *)pSVar13->klass)->_2).naturalAligment) &&
           ((((Settings_TypedSetting_float__c *)pSVar13->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            TypeInfo_FloatSetting)) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar13,value,MethodInfo_Void_set_Value);
          uVar10 = extraout_RAX;
          goto UI_SliderSettingElement__UpdateValueLabel;
        }
        goto label_043987b1;
      }
    }
  }
label_043987b6:
  uVar10 = il2cpp_runtime_helper_022b2c90();
  unaff_RBX = __this;
  register0x00000020 = (BADSPACEBASE *)local_18;
  __this = (UI_SliderSettingElement_o *)pSVar13;
UI_SliderSettingElement__UpdateValueLabel:
  do {
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(UI_SliderSettingElement_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    pSVar13 = (System_Globalization_NumberFormatInfo_o *)((long)register0x00000020 + -0x18);
    *(ulong *)((long)register0x00000020 + -0x18) = uVar10;
    if (g_data_057ae2de == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43987dc;
      il2cpp_runtime_helper_023445d0(&"{0:N}");
      g_data_057ae2de = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0x18) = 0;
    iVar4 = *(int *)&(((System_Globalization_NumberFormatInfo_o *)__this)->fields).positiveSign;
    if (iVar4 == 2) {
      pSVar8 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      pSVar14 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pSVar8 != (System_String_o *)0x0) {
        pUVar15 = (UnityEngine_UI_Text_o *)
                  (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberGroupSeparator;
        pcVar6 = *(code **)&pSVar8->klass[1]._2.naturalAligment;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398883;
        fVar17 = (float)(*pcVar6)();
        *(int *)((long)register0x00000020 + -0x18) = (int)fVar17;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398894;
        pSVar8 = System_Int32__ToString
                           ((int32_t)(undefined1 *)((long)register0x00000020 + -0x18),(MethodInfo *)0x0);
        __this = (UI_SliderSettingElement_o *)0x0;
        pSVar14 = pSVar13;
        if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar11 = pUVar15->klass;
          pMVar12 = (pUVar11->vtable)._75_set_text.method;
          goto label_043988a6;
        }
      }
    }
    else {
      if (iVar4 != 3) {
        return;
      }
      pUVar9 = (UnityEngine_UI_Slider_o *)
               (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      pSVar14 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
        pUVar15 = (UnityEngine_UI_Text_o *)
                  (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberGroupSeparator;
        __this = (UI_SliderSettingElement_o *)
                 (((System_Globalization_NumberFormatInfo_o *)__this)->fields).currencyGroupSeparator;
        pMVar12 = (pUVar9->klass->vtable)._46_get_value.method;
        pIVar5 = (pUVar9->klass->vtable)._46_get_value.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398820;
        uVar16 = (*pIVar5)(pUVar9,pMVar12);
        *(undefined4 *)((long)register0x00000020 + -0x14) = uVar16;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439883b;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x14));
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398852;
        pSVar14 = (System_Globalization_NumberFormatInfo_o *)__this;
        pSVar8 = System_String__Format_3af7a30
                           ((System_IFormatProvider_o *)__this,"{0:N}",arg0,(MethodInfo *)0x0);
        unaff_R14 = pUVar15;
        if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar11 = pUVar15->klass;
          pMVar12 = (pUVar11->vtable)._75_set_text.method;
label_043988a6:
          pIVar5 = (pUVar11->vtable)._75_set_text.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43988af;
          (*pIVar5)(pUVar15,pSVar8,pMVar12);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43988bc;
    il2cpp_runtime_helper_022b2c90();
    *(UI_SliderSettingElement_o **)((long)register0x00000020 + -0x20) = __this;
    if (g_data_057ae2df == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988d9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988e5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988f1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988fd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2df = '\x01';
    }
    uVar3 = *(uint *)&(pSVar14->fields).positiveSign;
    uVar10 = (ulong)uVar3;
    if (uVar3 == 2) {
      __this_00 = (pSVar14->fields).percentGroupSizes;
      if (__this_00 == (System_Int32_array *)0x0) goto UI_BaseSettingElement___ctor;
      pIVar7 = (__this_00->obj).klass;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((pIVar7->_2).naturalAligment < bVar2) ||
         ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
label_043989b9:
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43989be;
        il2cpp_runtime_helper_022b2fd0();
UI_BaseSettingElement___ctor:
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43989c3;
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
      pUVar9 = (UnityEngine_UI_Slider_o *)(pSVar14->fields).numberDecimalSeparator;
      if (pUVar9 == (UnityEngine_UI_Slider_o *)0x0) goto UI_BaseSettingElement___ctor;
      fVar17 = (float)*(int *)((long)&__this_00->bounds + 4);
label_0439899d:
      pIVar5 = (pUVar9->klass->vtable)._47_set_value.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43989b0;
      uVar10 = (*pIVar5)(fVar17,pUVar9);
    }
    else if (uVar3 == 3) {
      __this_00 = (pSVar14->fields).percentGroupSizes;
      if (__this_00 != (System_Int32_array *)0x0) {
        pIVar7 = (__this_00->obj).klass;
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((pIVar7->_2).naturalAligment < bVar2) ||
           ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto label_043989b9;
        pUVar9 = (UnityEngine_UI_Slider_o *)(pSVar14->fields).numberDecimalSeparator;
        if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
          fVar17 = *(float *)((long)&__this_00->bounds + 4);
          goto label_0439899d;
        }
      }
      goto UI_BaseSettingElement___ctor;
    }
    unaff_RBX = *(UI_SliderSettingElement_o **)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (UI_SliderSettingElement_o *)pSVar14;
  } while( true );
}


// UI.SliderSettingElement$$UpdateValueLabel
// il2cpp: void UI_SliderSettingElement__UpdateValueLabel (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x43987c0

void UI_SliderSettingElement__UpdateValueLabel(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Il2CppMethodPointer pIVar4;
  code *pcVar5;
  Il2CppClass *pIVar6;
  ulong in_RAX;
  Il2CppObject *arg0;
  System_String_o *pSVar7;
  UnityEngine_UI_Slider_o *pUVar8;
  UnityEngine_UI_Text_c *pUVar9;
  MethodInfo *pMVar10;
  undefined8 unaff_RBX;
  System_Globalization_NumberFormatInfo_o *pSVar11;
  System_Globalization_NumberFormatInfo_o *pSVar12;
  UnityEngine_UI_Text_o *pUVar13;
  System_Int32_array *__this_00;
  UnityEngine_UI_Text_o *unaff_R14;
  undefined4 uVar14;
  float fVar15;
  
  do {
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    pSVar12 = (System_Globalization_NumberFormatInfo_o *)((long)register0x00000020 + -0x18);
    *(ulong *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ae2de == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43987dc;
      il2cpp_runtime_helper_023445d0(&"{0:N}");
      g_data_057ae2de = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0x18) = 0;
    iVar2 = *(int *)&(((System_Globalization_NumberFormatInfo_o *)__this)->fields).positiveSign;
    if (iVar2 == 2) {
      pSVar7 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      pSVar11 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pSVar7 != (System_String_o *)0x0) {
        pUVar13 = (UnityEngine_UI_Text_o *)
                  (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberGroupSeparator;
        pcVar5 = *(code **)&pSVar7->klass[1]._2.naturalAligment;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398883;
        fVar15 = (float)(*pcVar5)();
        *(int *)((long)register0x00000020 + -0x18) = (int)fVar15;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398894;
        pSVar7 = System_Int32__ToString
                           ((int32_t)(undefined1 *)((long)register0x00000020 + -0x18),(MethodInfo *)0x0);
        __this = (UI_SliderSettingElement_o *)0x0;
        pSVar11 = pSVar12;
        if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar9 = pUVar13->klass;
          pMVar10 = (pUVar9->vtable)._75_set_text.method;
          goto label_043988a6;
        }
      }
    }
    else {
      if (iVar2 != 3) {
        return;
      }
      pUVar8 = (UnityEngine_UI_Slider_o *)
               (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      pSVar11 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pUVar8 != (UnityEngine_UI_Slider_o *)0x0) {
        pUVar13 = (UnityEngine_UI_Text_o *)
                  (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberGroupSeparator;
        __this = (UI_SliderSettingElement_o *)
                 (((System_Globalization_NumberFormatInfo_o *)__this)->fields).currencyGroupSeparator;
        pMVar10 = (pUVar8->klass->vtable)._46_get_value.method;
        pIVar4 = (pUVar8->klass->vtable)._46_get_value.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398820;
        uVar14 = (*pIVar4)(pUVar8,pMVar10);
        *(undefined4 *)((long)register0x00000020 + -0x14) = uVar14;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439883b;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x14));
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398852;
        pSVar11 = (System_Globalization_NumberFormatInfo_o *)__this;
        pSVar7 = System_String__Format_3af7a30
                           ((System_IFormatProvider_o *)__this,"{0:N}",arg0,(MethodInfo *)0x0);
        unaff_R14 = pUVar13;
        if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar9 = pUVar13->klass;
          pMVar10 = (pUVar9->vtable)._75_set_text.method;
label_043988a6:
          pIVar4 = (pUVar9->vtable)._75_set_text.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43988af;
          (*pIVar4)(pUVar13,pSVar7,pMVar10);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43988bc;
    il2cpp_runtime_helper_022b2c90();
    *(UI_SliderSettingElement_o **)((long)register0x00000020 + -0x20) = __this;
    if (g_data_057ae2df == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988d9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988e5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988f1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43988fd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2df = '\x01';
    }
    uVar3 = *(uint *)&(pSVar11->fields).positiveSign;
    in_RAX = (ulong)uVar3;
    if (uVar3 == 2) {
      __this_00 = (pSVar11->fields).percentGroupSizes;
      if (__this_00 == (System_Int32_array *)0x0) goto UI_BaseSettingElement___ctor;
      pIVar6 = (__this_00->obj).klass;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
label_043989b9:
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43989be;
        il2cpp_runtime_helper_022b2fd0();
UI_BaseSettingElement___ctor:
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43989c3;
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
      pUVar8 = (UnityEngine_UI_Slider_o *)(pSVar11->fields).numberDecimalSeparator;
      if (pUVar8 == (UnityEngine_UI_Slider_o *)0x0) goto UI_BaseSettingElement___ctor;
      fVar15 = (float)*(int *)((long)&__this_00->bounds + 4);
label_0439899d:
      pIVar4 = (pUVar8->klass->vtable)._47_set_value.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x43989b0;
      in_RAX = (*pIVar4)(fVar15,pUVar8);
    }
    else if (uVar3 == 3) {
      __this_00 = (pSVar11->fields).percentGroupSizes;
      if (__this_00 != (System_Int32_array *)0x0) {
        pIVar6 = (__this_00->obj).klass;
        bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((pIVar6->_2).naturalAligment < bVar1) ||
           ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_043989b9;
        pUVar8 = (UnityEngine_UI_Slider_o *)(pSVar11->fields).numberDecimalSeparator;
        if (pUVar8 != (UnityEngine_UI_Slider_o *)0x0) {
          fVar15 = *(float *)((long)&__this_00->bounds + 4);
          goto label_0439899d;
        }
      }
      goto UI_BaseSettingElement___ctor;
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (UI_SliderSettingElement_o *)pSVar11;
  } while( true );
}


// UI.SliderSettingElement$$SyncElement
// il2cpp: void UI_SliderSettingElement__SyncElement (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x43988c0

void UI_SliderSettingElement__SyncElement(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  Il2CppClass *pIVar7;
  undefined8 uVar8;
  Il2CppObject *arg0;
  System_String_o *pSVar9;
  ulong uVar10;
  UnityEngine_UI_Text_c *pUVar11;
  MethodInfo *pMVar12;
  System_Globalization_NumberFormatInfo_o *unaff_RBX;
  System_Globalization_NumberFormatInfo_o *pSVar13;
  System_Globalization_NumberFormatInfo_o *pSVar14;
  UnityEngine_UI_Text_o *pUVar15;
  System_Int32_array *__this_00;
  UnityEngine_UI_Text_o *unaff_R14;
  undefined4 uVar16;
  float fVar17;
  
  do {
    *(System_Globalization_NumberFormatInfo_o **)((long)register0x00000020 + -8) = unaff_RBX;
    if (g_data_057ae2df == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43988d9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43988e5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43988f1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43988fd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae2df = '\x01';
    }
    uVar3 = *(uint *)&(((System_Globalization_NumberFormatInfo_o *)__this)->fields).positiveSign;
    uVar10 = (ulong)uVar3;
    if (uVar3 == 2) {
      __this_00 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).percentGroupSizes;
      if (__this_00 == (System_Int32_array *)0x0) goto UI_BaseSettingElement___ctor;
      pIVar7 = (__this_00->obj).klass;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((pIVar7->_2).naturalAligment < bVar1) ||
         ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
label_043989b9:
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43989be;
        il2cpp_runtime_helper_022b2fd0();
UI_BaseSettingElement___ctor:
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43989c3;
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
      pSVar9 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      if (pSVar9 == (System_String_o *)0x0) goto UI_BaseSettingElement___ctor;
      fVar17 = (float)*(int *)((long)&__this_00->bounds + 4);
label_0439899d:
      pMVar12 = pSVar9->klass[1].vtable._0_Equals.method;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x43989b0;
      uVar10 = (*(code *)pMVar12)(fVar17,pSVar9);
    }
    else if (uVar3 == 3) {
      __this_00 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).percentGroupSizes;
      if (__this_00 == (System_Int32_array *)0x0) goto UI_BaseSettingElement___ctor;
      pIVar7 = (__this_00->obj).klass;
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((pIVar7->_2).naturalAligment < bVar1) ||
         ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_043989b9;
      pSVar9 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      if (pSVar9 == (System_String_o *)0x0) goto UI_BaseSettingElement___ctor;
      fVar17 = *(float *)((long)&__this_00->bounds + 4);
      goto label_0439899d;
    }
    uVar8 = *(undefined8 *)((long)register0x00000020 + -8);
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar8;
    pSVar14 = (System_Globalization_NumberFormatInfo_o *)((long)register0x00000020 + -0x18);
    *(ulong *)((long)register0x00000020 + -0x18) = uVar10;
    if (g_data_057ae2de == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43987dc;
      il2cpp_runtime_helper_023445d0(&"{0:N}");
      g_data_057ae2de = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0x18) = 0;
    iVar2 = *(int *)&(((System_Globalization_NumberFormatInfo_o *)__this)->fields).positiveSign;
    if (iVar2 == 2) {
      pSVar9 = (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      pSVar13 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pSVar9 != (System_String_o *)0x0) {
        pUVar15 = (UnityEngine_UI_Text_o *)
                  (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberGroupSeparator;
        pcVar6 = *(code **)&pSVar9->klass[1]._2.naturalAligment;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398883;
        fVar17 = (float)(*pcVar6)();
        *(int *)((long)register0x00000020 + -0x18) = (int)fVar17;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398894;
        pSVar9 = System_Int32__ToString
                           ((int32_t)(undefined1 *)((long)register0x00000020 + -0x18),(MethodInfo *)0x0);
        __this = (UI_SliderSettingElement_o *)0x0;
        pSVar13 = pSVar14;
        if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar11 = pUVar15->klass;
          pMVar12 = (pUVar11->vtable)._75_set_text.method;
          goto label_043988a6;
        }
      }
    }
    else {
      if (iVar2 != 3) {
        return;
      }
      pUVar4 = (UnityEngine_UI_Slider_o *)
               (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberDecimalSeparator;
      pSVar13 = (System_Globalization_NumberFormatInfo_o *)0x0;
      if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
        pUVar15 = (UnityEngine_UI_Text_o *)
                  (((System_Globalization_NumberFormatInfo_o *)__this)->fields).numberGroupSeparator;
        __this = (UI_SliderSettingElement_o *)
                 (((System_Globalization_NumberFormatInfo_o *)__this)->fields).currencyGroupSeparator;
        pMVar12 = (pUVar4->klass->vtable)._46_get_value.method;
        pIVar5 = (pUVar4->klass->vtable)._46_get_value.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398820;
        uVar16 = (*pIVar5)(pUVar4,pMVar12);
        *(undefined4 *)((long)register0x00000020 + -0x14) = uVar16;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439883b;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x14));
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4398852;
        pSVar13 = (System_Globalization_NumberFormatInfo_o *)__this;
        pSVar9 = System_String__Format_3af7a30
                           ((System_IFormatProvider_o *)__this,"{0:N}",arg0,(MethodInfo *)0x0);
        unaff_R14 = pUVar15;
        if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar11 = pUVar15->klass;
          pMVar12 = (pUVar11->vtable)._75_set_text.method;
label_043988a6:
          pIVar5 = (pUVar11->vtable)._75_set_text.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43988af;
          (*pIVar5)(pUVar15,pSVar9,pMVar12);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43988bc;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (System_Globalization_NumberFormatInfo_o *)__this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (UI_SliderSettingElement_o *)pSVar13;
  } while( true );
}


// UI.SliderSettingElement$$.ctor
// il2cpp: void UI_SliderSettingElement___ctor (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x43989d0

void UI_SliderSettingElement___ctor(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderSettingElement$$<Setup>b__5_0
// il2cpp: void UI_SliderSettingElement___Setup_b__5_0 (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x43989e0

void UI_SliderSettingElement___Setup_b__5_0(UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderSettingElement__OnValueChanged(__this,value,method);
  return;
}


