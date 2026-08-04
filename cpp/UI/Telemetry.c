// Type: UI.Telemetry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Telemetry.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/Telemetry.cs
// --------------------------------

// UI.Telemetry$$Setup
// il2cpp: void UI_Telemetry__Setup (UI_Telemetry_o* __this, UI_ElementStyle_o* _style, const MethodInfo* method);
// 0x43ec4e0

void UI_Telemetry__Setup(UI_Telemetry_o *__this,UI_ElementStyle_o *_style,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UI_MultiTextLabel_o *pUVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  UnityEngine_UI_Text_array *__this_01;
  Il2CppMethodPointer pIVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  UI_Telemetry_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  System_DateTime_Fields dt;
  System_String_o *pSVar8;
  long lVar9;
  undefined8 extraout_RAX;
  undefined4 extraout_var;
  Il2CppObject *arg0;
  undefined8 uVar10;
  System_Text_StringBuilder_o *pSVar11;
  MethodInfo *method_00;
  UI_Telemetry_o *unaff_RBX;
  undefined1 *puVar12;
  MethodInfo *method_01;
  UI_Telemetry_o *pUVar13;
  System_Text_StringBuilder_o *pSVar14;
  UI_Telemetry_o *pUVar15;
  UI_Telemetry_o *pUVar16;
  UI_Telemetry_o *pUVar17;
  UI_Telemetry_o *pUVar18;
  UI_Telemetry_o *pUVar19;
  UI_Telemetry_o *pUVar20;
  UI_Telemetry_c **__this_03;
  undefined8 *unaff_R12;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  undefined1 auStackY_c0 [32];
  UI_Telemetry_o *pUStackY_a0;
  UI_MultiTextLabel_o *pUStackY_98;
  UI_Telemetry_o *pUStackY_90;
  undefined8 uStackY_88;
  UI_Telemetry_o *pUStackY_80;
  void *local_68;
  void *pvStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057ae4f7 == '\0') {
    pUStackY_80 = (UI_Telemetry_o *)0x43ec509;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pUStackY_80 = (UI_Telemetry_o *)0x43ec515;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pUStackY_80 = (UI_Telemetry_o *)0x43ec521;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiTextLabel_GetComponent_MultiTextLabel);
    pUStackY_80 = (UI_Telemetry_o *)0x43ec52d;
    il2cpp_runtime_helper_023445d0(&"Game Time: ");
    pUStackY_80 = (UI_Telemetry_o *)0x43ec539;
    il2cpp_runtime_helper_023445d0(&"Ping: ");
    pUStackY_80 = (UI_Telemetry_o *)0x43ec545;
    il2cpp_runtime_helper_023445d0(&"System: ");
    pUStackY_80 = (UI_Telemetry_o *)0x43ec551;
    il2cpp_runtime_helper_023445d0(&"FPS: ");
    g_data_057ae4f7 = '\x01';
  }
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  pUStackY_80 = (UI_Telemetry_o *)0x43ec56a;
  __this_02 = (UI_Telemetry_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUStackY_80 = (UI_Telemetry_o *)0x43ec598;
  dt._dateData = (uint64_t)_style;
  pUVar7 = UI_ElementFactory__CreateMultiTextLabel
                     ((UnityEngine_Transform_o *)__this_02,_style,0,3,12.0,4,0,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUStackY_80 = (UI_Telemetry_o *)0x43ec5b4;
    dt._dateData = (uint64_t)UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_MultiTextLabel_GetComponent_MultiTextLabel);
    unaff_RBX = (UI_Telemetry_o *)&(__this->fields).timePanel;
    (__this->fields).timePanel = (UI_MultiTextLabel_o *)dt._dateData;
    pUStackY_80 = (UI_Telemetry_o *)0x43ec5c7;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    pUVar3 = (__this->fields).timePanel;
    __this_02 = (UI_Telemetry_o *)0x0;
    if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
      dt._dateData = 0;
      pUStackY_80 = (UI_Telemetry_o *)0x43ec5e7;
      UI_MultiTextLabel__SetValue(pUVar3,0,"Game Time: ",(MethodInfo *)0x0);
      __this_02 = (UI_Telemetry_o *)0x0;
      if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
        unaff_R12 = &g_data_057b9b70;
        dt._dateData = 1;
        pUStackY_80 = (UI_Telemetry_o *)0x43ec618;
        UI_MultiTextLabel__SetValue
                  (*(UI_MultiTextLabel_o **)unaff_RBX,1,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        __this_02 = (UI_Telemetry_o *)0x0;
        if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
          dt._dateData = 2;
          pUStackY_80 = (UI_Telemetry_o *)0x43ec63a;
          UI_MultiTextLabel__SetValue(*(UI_MultiTextLabel_o **)unaff_RBX,2,"System: ",(MethodInfo *)0x0);
          __this_02 = (UI_Telemetry_o *)0x0;
          if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
            dt._dateData = 3;
            pUStackY_80 = (UI_Telemetry_o *)0x43ec664;
            UI_MultiTextLabel__SetValue
                      (*(UI_MultiTextLabel_o **)unaff_RBX,3,
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              pUStackY_80 = (UI_Telemetry_o *)0x43ec67d;
              il2cpp_runtime_helper_02337ed0();
            }
            __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x68);
            __this_02 = (UI_Telemetry_o *)0x0;
            if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              pUStackY_80 = (UI_Telemetry_o *)0x43ec6a9;
              pSVar8 = (System_String_o *)
                       System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                 (__this_00,3,MethodInfo_String_get_Item);
              dt._dateData = (uint64_t)&stack0xffffffffffffff98;
              pUStackY_80 = (UI_Telemetry_o *)0x43ec6b8;
              bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                                (pSVar8,(UnityEngine_Color_o *)dt._dateData,(MethodInfo *)0x0);
              uVar25 = SUB84(pvStack_60,0);
              uVar26 = (undefined4)((ulong)pvStack_60 >> 0x20);
              if ((char)bVar5 == '\0') {
                uVar22 = 0x3f800000;
                uVar24 = 0x3f6bebec;
                uVar25 = 0x3c808081;
                uVar26 = 0x3f800000;
              }
              else {
                uVar22 = SUB84(local_68,0);
                uVar24 = (undefined4)((ulong)local_68 >> 0x20);
              }
              __this_02 = (UI_Telemetry_o *)0x0;
              if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                dt._dateData = 1;
                uStack_50 = 0;
                uStack_4c = 0;
                uStack_40 = 0;
                uStack_3c = 0;
                pUStackY_80 = (UI_Telemetry_o *)0x43ec6fe;
                color.fields.g = (float)uVar24;
                color.fields.r = (float)uVar22;
                color.fields.a = (float)uVar26;
                color.fields.b = (float)uVar25;
                local_58 = uVar22;
                uStack_54 = uVar24;
                local_48 = uVar25;
                uStack_44 = uVar26;
                UI_MultiTextLabel__ChangeTextColor
                          (*(UI_MultiTextLabel_o **)unaff_RBX,1,color,(MethodInfo *)0x0);
                __this_02 = (UI_Telemetry_o *)0x0;
                if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                  dt._dateData = 3;
                  color_00.fields.g = (float)uStack_54;
                  color_00.fields.r = (float)local_58;
                  color_00.fields.a = (float)uStack_44;
                  color_00.fields.b = (float)local_48;
                  pUStackY_80 = (UI_Telemetry_o *)0x43ec720;
                  UI_MultiTextLabel__ChangeTextColor
                            (*(UI_MultiTextLabel_o **)unaff_RBX,3,color_00,(MethodInfo *)0x0);
                  __this_02 = (UI_Telemetry_o *)0x0;
                  if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                    pUStackY_80 = (UI_Telemetry_o *)0x43ec735;
                    UI_MultiTextLabel__SetEnabled(*(UI_MultiTextLabel_o **)unaff_RBX,0,(MethodInfo *)0x0);
                    pUStackY_80 = (UI_Telemetry_o *)0x43ec73f;
                    __this_02 = (UI_Telemetry_o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUStackY_80 = (UI_Telemetry_o *)0x43ec76d;
                    dt._dateData = (uint64_t)_style;
                    pUVar7 = UI_ElementFactory__CreateMultiTextLabel
                                       ((UnityEngine_Transform_o *)__this_02,_style,0,3,12.0,4,0,
                                        (MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      pUStackY_80 = (UI_Telemetry_o *)0x43ec782;
                      dt._dateData = (uint64_t)
                                     UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_MultiTextLabel_GetComponent_MultiTextLabel);
                      unaff_RBX = (UI_Telemetry_o *)&(__this->fields).performancePanel;
                      (__this->fields).performancePanel = (UI_MultiTextLabel_o *)dt._dateData;
                      pUStackY_80 = (UI_Telemetry_o *)0x43ec795;
                      il2cpp_runtime_helper_022b4080(unaff_RBX);
                      pUVar3 = (__this->fields).performancePanel;
                      __this_02 = (UI_Telemetry_o *)0x0;
                      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
                        dt._dateData = 0;
                        pUStackY_80 = (UI_Telemetry_o *)0x43ec7b5;
                        UI_MultiTextLabel__SetValue(pUVar3,0,"FPS: ",(MethodInfo *)0x0);
                        __this_02 = (UI_Telemetry_o *)0x0;
                        if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                          dt._dateData = 1;
                          pUStackY_80 = (UI_Telemetry_o *)0x43ec7df;
                          UI_MultiTextLabel__SetValue
                                    (*(UI_MultiTextLabel_o **)unaff_RBX,1,
                                     (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                     (MethodInfo *)0x0);
                          __this_02 = (UI_Telemetry_o *)0x0;
                          if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                            dt._dateData = 2;
                            pUStackY_80 = (UI_Telemetry_o *)0x43ec7fd;
                            UI_MultiTextLabel__SetValue
                                      (*(UI_MultiTextLabel_o **)unaff_RBX,2,"Ping: ",(MethodInfo *)0x0);
                            __this_02 = (UI_Telemetry_o *)0x0;
                            if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                              dt._dateData = 3;
                              pUStackY_80 = (UI_Telemetry_o *)0x43ec823;
                              UI_MultiTextLabel__SetValue
                                        (*(UI_MultiTextLabel_o **)unaff_RBX,3,
                                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                         (MethodInfo *)0x0);
                              __this_02 = (UI_Telemetry_o *)0x0;
                              if (*(UI_MultiTextLabel_o **)unaff_RBX != (UI_MultiTextLabel_o *)0x0) {
                                pUStackY_80 = (UI_Telemetry_o *)0x43ec834;
                                UI_MultiTextLabel__SetEnabled
                                          (*(UI_MultiTextLabel_o **)unaff_RBX,0,(MethodInfo *)0x0);
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
  pUStackY_80 = (UI_Telemetry_o *)0x43ec848;
  il2cpp_runtime_helper_022b2c90();
  uStackY_88._4_4_ = (__this_02->fields)._currentSyncDelay;
  pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec86a;
  pUStackY_80 = unaff_RBX;
  fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this_02->fields)._currentSyncDelay = uStackY_88._4_4_ - fVar23;
  if (0.0 < uStackY_88._4_4_ - fVar23) {
    return;
  }
  pUStackY_90 = pUStackY_80;
  pUVar13 = __this_02;
  uStackY_88 = (System_Text_StringBuilder_o *)_style;
  pUStackY_80 = __this;
  if (g_data_057ae4f8 == '\0') {
    pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec8bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec8c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec8d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUVar13 = (UI_Telemetry_o *)&MethodInfo_Boolean_get_Value;
    pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec8e1;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f8 = '\x01';
  }
  (__this_02->fields)._currentSyncDelay = 0.01;
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xd0), lVar9 == 0)) ||
     (pUVar13 = (UI_Telemetry_o *)(__this_02->fields).timePanel, pUVar13 == (UI_Telemetry_o *)0x0)) {
label_043eca34:
    pUStackY_98 = (UI_MultiTextLabel_o *)0x43eca39;
    auStackY_c0._24_4_ = il2cpp_runtime_helper_022b2c90();
    pUStackY_98 = (UI_MultiTextLabel_o *)&TypeInfo_SettingsManager;
    auStackY_c0._28_4_ = extraout_var;
    pUStackY_a0 = __this_02;
    if (g_data_057ae4fa == '\0') {
      auStackY_c0._16_8_ = 0x43eca61;
      il2cpp_runtime_helper_023445d0(&", ");
      auStackY_c0._16_8_ = 0x43eca6d;
      il2cpp_runtime_helper_023445d0(&"{0:0}");
      g_data_057ae4fa = '\x01';
    }
    pSVar11 = (pUVar13->fields)._sb;
    pSVar14 = (System_Text_StringBuilder_o *)0x0;
    plVar21 = (long *)__this_02;
    if (pSVar11 != (System_Text_StringBuilder_o *)0x0) {
      auStackY_c0._16_8_ = 0x43eca88;
      System_Text_StringBuilder__Clear(pSVar11,(MethodInfo *)0x0);
      plVar21 = (long *)(pUVar13->fields)._sb;
      auStackY_c0._28_4_ = auStackY_c0._24_4_;
      dt._dateData = (uint64_t)(auStackY_c0 + 0x1c);
      auStackY_c0._16_8_ = 0x43ecaac;
      pSVar14 = g_data_057b9be8;
      arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      if ((UI_Telemetry_o *)plVar21 != (UI_Telemetry_o *)0x0) {
        auStackY_c0._16_8_ = 0x43ecac8;
        dt._dateData = (uint64_t)"{0:0}";
        System_Text_StringBuilder__AppendFormat
                  ((System_Text_StringBuilder_o *)plVar21,(System_String_o *)"{0:0}",arg0,
                   (MethodInfo *)0x0);
        pSVar11 = (pUVar13->fields)._sb;
        pSVar14 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar11 != (System_Text_StringBuilder_o *)0x0) {
          auStackY_c0._16_8_ = 0x43ecae2;
          dt._dateData = (uint64_t)", ";
          System_Text_StringBuilder__Append_3b03f90(pSVar11,(System_String_o *)", ",(MethodInfo *)0x0)
          ;
          pSVar14 = (pUVar13->fields)._sb;
          if (pSVar14 != (System_Text_StringBuilder_o *)0x0) {
            __this_01 = (UnityEngine_UI_Text_array *)(pUVar13->fields).timePanel;
            dt._dateData = (uint64_t)(pSVar14->klass->vtable)._3_ToString.method;
            auStackY_c0._16_8_ = 0x43ecaff;
            pSVar8 = (System_String_o *)(*(pSVar14->klass->vtable)._3_ToString.methodPtr)();
            plVar21 = (long *)0x0;
            if (__this_01 != (UnityEngine_UI_Text_array *)0x0) {
              auStackY_c0._16_8_ = 0x43ecb16;
              UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)__this_01,1,pSVar8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    auStackY_c0._16_8_ = 0x43ecb23;
    il2cpp_runtime_helper_022b2c90();
    pUVar15 = (UI_Telemetry_o *)auStackY_c0;
    pUVar16 = (UI_Telemetry_o *)auStackY_c0;
    pUVar17 = (UI_Telemetry_o *)auStackY_c0;
    pUVar18 = (UI_Telemetry_o *)auStackY_c0;
    pUVar19 = (UI_Telemetry_o *)auStackY_c0;
    pUVar20 = (UI_Telemetry_o *)auStackY_c0;
    puVar12 = auStackY_c0;
    auStackY_c0._0_8_ = dt._dateData;
    auStackY_c0._8_8_ = plVar21;
    auStackY_c0._16_8_ = pUVar13;
    if (g_data_057ae4fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
      g_data_057ae4fb = '\x01';
    }
    __this_02 = (UI_Telemetry_o *)0x0;
    if (pSVar14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar14[1].monitor,(MethodInfo *)0x0);
      pSVar11 = pSVar14[1].monitor;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = System_DateTime__get_Hour((System_DateTime_o)auStackY_c0,(MethodInfo *)0x0);
      plVar21 = (long *)0x0;
      __this_02 = pUVar15;
      if (pSVar11 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b048f0
                  (pSVar11,((short)(uint)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (short)(iVar6 >> 0x1f))
                           + 0x30,(MethodInfo *)0x0);
        plVar21 = pSVar14[1].monitor;
        iVar6 = System_DateTime__get_Hour((System_DateTime_o)auStackY_c0,(MethodInfo *)0x0);
        __this_02 = pUVar16;
        if ((UI_Telemetry_o *)plVar21 != (UI_Telemetry_o *)0x0) {
          System_Text_StringBuilder__Append_3b048f0
                    ((System_Text_StringBuilder_o *)plVar21,(short)iVar6 + (short)(iVar6 / 10) * -10 + 0x30,
                     (MethodInfo *)0x0);
          __this_02 = (UI_Telemetry_o *)0x0;
          if (pSVar14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b048f0(pSVar14[1].monitor,0x3a,(MethodInfo *)0x0);
            pSVar11 = pSVar14[1].monitor;
            iVar6 = System_DateTime__get_Minute((System_DateTime_o)auStackY_c0,(MethodInfo *)0x0);
            plVar21 = (long *)0x0;
            __this_02 = pUVar17;
            if (pSVar11 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0
                        (pSVar11,((short)(uint)((ulong)((long)iVar6 * 0x66666667) >> 0x22) -
                                 (short)(iVar6 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
              plVar21 = pSVar14[1].monitor;
              iVar6 = System_DateTime__get_Minute((System_DateTime_o)auStackY_c0,(MethodInfo *)0x0);
              __this_02 = pUVar18;
              if ((UI_Telemetry_o *)plVar21 != (UI_Telemetry_o *)0x0) {
                System_Text_StringBuilder__Append_3b048f0
                          ((System_Text_StringBuilder_o *)plVar21,
                           (short)iVar6 + (short)(iVar6 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                __this_02 = (UI_Telemetry_o *)0x0;
                if (pSVar14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b048f0(pSVar14[1].monitor,0x3a,(MethodInfo *)0x0);
                  pSVar11 = pSVar14[1].monitor;
                  iVar6 = System_DateTime__get_Second((System_DateTime_o)auStackY_c0,(MethodInfo *)0x0);
                  plVar21 = (long *)0x0;
                  __this_02 = pUVar19;
                  if (pSVar11 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b048f0
                              (pSVar11,((short)(uint)((ulong)((long)iVar6 * 0x66666667) >> 0x22) -
                                       (short)(iVar6 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                    plVar21 = pSVar14[1].monitor;
                    iVar6 = System_DateTime__get_Second((System_DateTime_o)auStackY_c0,(MethodInfo *)0x0);
                    __this_02 = pUVar20;
                    if ((UI_Telemetry_o *)plVar21 != (UI_Telemetry_o *)0x0) {
                      System_Text_StringBuilder__Append_3b048f0
                                ((System_Text_StringBuilder_o *)plVar21,
                                 (short)iVar6 + (short)(iVar6 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                      __this_02 = pSVar14[1].monitor;
                      if (__this_02 != (UI_Telemetry_o *)0x0) {
                        pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_ChunkLength;
                        pSVar8 = (System_String_o *)
                                 (*(((System_Text_StringBuilder_c *)__this_02->klass)->vtable)._3_ToString.
                                   methodPtr)();
                        plVar21 = (long *)0x0;
                        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
                          UI_MultiTextLabel__SetValue(pUVar3,3,pSVar8,(MethodInfo *)0x0);
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
    uVar10 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar9 + 0x11) == '\0') {
      dt._dateData = 0;
      pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec96f;
      UI_MultiTextLabel__SetEnabled((UI_MultiTextLabel_o *)pUVar13,0,(MethodInfo *)0x0);
      plVar21 = (long *)__this;
    }
    else {
      method_01 = (MethodInfo *)0x1;
      pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec93c;
      UI_MultiTextLabel__SetEnabled((UI_MultiTextLabel_o *)pUVar13,1,(MethodInfo *)0x0);
      plVar21 = &TypeInfo_CustomLogicManager;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec976;
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar9 == 0) goto label_043ec989;
label_043ec95f:
        fVar23 = *(float *)(lVar9 + 0x20);
      }
      else {
        lVar9 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar9 != 0) goto label_043ec95f;
label_043ec989:
        fVar23 = 0.0;
      }
      pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec994;
      UI_Telemetry__UpdateGameTime(__this_02,fVar23,method_01);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec9ac;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec9b3;
      dt._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
      pUStackY_98 = (UI_MultiTextLabel_o *)0x43ec9be;
      pUVar13 = __this_02;
      UI_Telemetry__UpdateSystemTime(__this_02,(System_DateTime_o)dt._dateData,method_00);
    }
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    __this = (UI_Telemetry_o *)plVar21;
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) goto label_043eca34;
    if (*(char *)(lVar9 + 0x11) == '\0') {
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0xb8), lVar9 != 0)) {
        if (*(char *)(lVar9 + 0x11) != '\0') goto label_043ec9fb;
        pUVar3 = (__this_02->fields).performancePanel;
        pUVar13 = (UI_Telemetry_o *)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetEnabled(pUVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043eca34;
    }
label_043ec9fb:
    pUVar3 = (__this_02->fields).performancePanel;
    pUVar13 = (UI_Telemetry_o *)0x0;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043eca34;
    pUStackY_98 = (UI_MultiTextLabel_o *)0x43eca10;
    UI_MultiTextLabel__SetEnabled(pUVar3,1,(MethodInfo *)0x0);
    puVar12 = &stack0xffffffffffffff88;
    uVar10 = extraout_RAX;
    plVar21 = (long *)pUStackY_90;
    pSVar14 = uStackY_88;
    __this = pUStackY_80;
  }
  *(UI_Telemetry_o **)(puVar12 + -8) = __this;
  *(System_Text_StringBuilder_o **)(puVar12 + -0x10) = pSVar14;
  *(undefined8 **)(puVar12 + -0x18) = unaff_R12;
  *(long **)(puVar12 + -0x20) = plVar21;
  *(undefined8 *)(puVar12 + -0x28) = uVar10;
  __this_03 = &__this_02->klass;
  if (g_data_057ae4f9 == '\0') {
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecdb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecdbc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecdc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecdd4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_03 = &", ";
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecde0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f9 = '\x01';
  }
  *(undefined4 *)(puVar12 + -0x24) = 0;
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) goto label_043ed1b5;
  pUVar3 = (__this_02->fields).performancePanel;
  __this_03 = &((UI_Telemetry_o *)0x0)->klass;
  if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
  if (*(char *)(lVar9 + 0x11) == '\0') {
    *(undefined8 *)(puVar12 + -0x30) = 0x43eceb0;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,0,(MethodInfo *)0x0);
    __this_03 = (UI_Telemetry_c **)(__this_02->fields).performancePanel;
    if ((UI_Telemetry_o *)__this_03 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)(puVar12 + -0x30) = 0x43ececb;
    UI_MultiTextLabel__SetElementEnabled((UI_MultiTextLabel_o *)__this_03,1,0,(MethodInfo *)0x0);
  }
  else {
    *(undefined8 *)(puVar12 + -0x30) = 0x43ece3b;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,1,(MethodInfo *)0x0);
    pUVar3 = (__this_02->fields).performancePanel;
    __this_03 = &((UI_Telemetry_o *)0x0)->klass;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)(puVar12 + -0x30) = 0x43ece59;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,1,1,(MethodInfo *)0x0);
    pSVar11 = (__this_02->fields)._sb;
    __this_03 = &((UI_Telemetry_o *)0x0)->klass;
    if (pSVar11 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)(puVar12 + -0x30) = 0x43ece6d;
    System_Text_StringBuilder__Clear(pSVar11,(MethodInfo *)0x0);
    plVar21 = (long *)(__this_02->fields)._sb;
    if (*(int *)((long)&TypeInfo_UIManager[3].monitor + 4) == 0) {
      *(undefined8 *)(puVar12 + -0x30) = 0x43eced5;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae57e == '\0') goto label_043ecede;
label_043ece8e:
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    else {
      if (g_data_057ae57e != '\0') goto label_043ece8e;
label_043ecede:
      *(undefined8 *)(puVar12 + -0x30) = 0x43eceea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae57e = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    __this_03 = &TypeInfo_UIManager->klass;
    if (iVar2 == 0) {
      *(undefined8 *)(puVar12 + -0x30) = 0x43ecf03;
      il2cpp_runtime_helper_02337ed0();
      __this_03 = &TypeInfo_UIManager->klass;
    }
    TypeInfo_UIManager = (UI_Telemetry_o *)__this_03;
    if ((UI_Telemetry_o *)plVar21 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    iVar6 = *(int32_t *)
             &(((UI_Telemetry_o *)((long)__this_03 + 0x90))->fields).performancePanel[2].fields.
              m_CancellationTokenSource;
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecf24;
    pUVar13 = (UI_Telemetry_o *)plVar21;
    System_Text_StringBuilder__Append_3b04980((System_Text_StringBuilder_o *)plVar21,iVar6,(MethodInfo *)0x0);
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    __this_03 = &pUVar13->klass;
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xb8), lVar9 == 0)) goto label_043ed1b5;
    if (*(char *)(lVar9 + 0x11) == '\0') {
label_043ecf96:
      __this_03 = (UI_Telemetry_c **)(__this_02->fields)._sb;
    }
    else {
      plVar21 = &TypeInfo_PhotonNetwork;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        *(undefined8 *)(puVar12 + -0x30) = 0x43ed145;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abf5b == '\0') goto label_043ed152;
label_043ecf75:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ecf85;
label_043ed175:
        *(undefined8 *)(puVar12 + -0x30) = 0x43ed17a;
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (g_data_057abf5b != '\0') goto label_043ecf75;
label_043ed152:
        *(undefined8 *)(puVar12 + -0x30) = 0x43ed15e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed175;
label_043ecf85:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto label_043ecf96;
      pSVar11 = (__this_02->fields)._sb;
      __this_03 = (UI_Telemetry_c **)0x0;
      if (pSVar11 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
      *(undefined8 *)(puVar12 + -0x30) = 0x43ed1a8;
      System_Text_StringBuilder__Append_3b03f90(pSVar11,(System_String_o *)", ",(MethodInfo *)0x0);
      __this_03 = (UI_Telemetry_c **)(__this_02->fields)._sb;
    }
    if ((UI_Telemetry_o *)__this_03 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    plVar21 = (long *)(__this_02->fields).performancePanel;
    pIVar4 = (((System_Text_StringBuilder_c *)((UI_Telemetry_o *)__this_03)->klass)->vtable)._3_ToString.
             methodPtr;
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecfb7;
    pSVar8 = (System_String_o *)(*pIVar4)();
    if ((UI_Telemetry_o *)plVar21 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)(puVar12 + -0x30) = 0x43ecfd2;
    __this_03 = (UI_Telemetry_c **)plVar21;
    UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)plVar21,1,pSVar8,(MethodInfo *)0x0);
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xb8), lVar9 == 0)) goto label_043ed1b5;
  if (*(char *)(lVar9 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x30) = 0x43ed074;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057abf5b == '\0') goto label_043ed07d;
label_043ed01b:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ed027;
label_043ed09c:
      *(undefined8 *)(puVar12 + -0x30) = 0x43ed0a1;
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (g_data_057abf5b != '\0') goto label_043ed01b;
label_043ed07d:
      *(undefined8 *)(puVar12 + -0x30) = 0x43ed089;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf5b = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed09c;
label_043ed027:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar3 = (__this_02->fields).performancePanel;
      __this_03 = (UI_Telemetry_c **)0x0;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        *(undefined8 *)(puVar12 + -0x30) = 0x43ed0cf;
        UI_MultiTextLabel__SetElementEnabled(pUVar3,2,1,(MethodInfo *)0x0);
        pUVar3 = (__this_02->fields).performancePanel;
        __this_03 = (UI_Telemetry_c **)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          *(undefined8 *)(puVar12 + -0x30) = 0x43ed0ed;
          UI_MultiTextLabel__SetElementEnabled(pUVar3,3,1,(MethodInfo *)0x0);
          pUVar3 = (__this_02->fields).performancePanel;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)(puVar12 + -0x30) = 0x43ed102;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar12 + -0x30) = 0x43ed109;
          iVar6 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          *(int32_t *)(puVar12 + -0x24) = iVar6;
          __this_03 = (UI_Telemetry_c **)(puVar12 + -0x24);
          *(undefined8 *)(puVar12 + -0x30) = 0x43ed119;
          pSVar8 = System_Int32__ToString((int32_t)__this_03,(MethodInfo *)0x0);
          plVar21 = (long *)0x0;
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            *(undefined8 *)(puVar12 + -0x30) = 0x43ed134;
            UI_MultiTextLabel__SetValue(pUVar3,3,pSVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_043ed1b5;
    }
  }
  pUVar3 = (__this_02->fields).performancePanel;
  __this_03 = (UI_Telemetry_c **)0x0;
  if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
    *(undefined8 *)(puVar12 + -0x30) = 0x43ed04f;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,2,0,(MethodInfo *)0x0);
    pUVar3 = (__this_02->fields).performancePanel;
    __this_03 = (UI_Telemetry_c **)0x0;
    if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
      *(undefined8 *)(puVar12 + -0x30) = 0x43ed06a;
      UI_MultiTextLabel__SetElementEnabled(pUVar3,3,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043ed1b5:
  *(undefined8 *)(puVar12 + -0x30) = 0x43ed1ba;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(UI_Telemetry_o **)(puVar12 + -0x30) = __this_02;
  *(long **)(puVar12 + -0x38) = plVar21;
  *(undefined8 *)(puVar12 + -0x40) = uVar10;
  if (g_data_057ae4fc == '\0') {
    *(undefined8 *)(puVar12 + -0x48) = 0x43ed1dc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  *(undefined8 *)(puVar12 + -0x48) = 0x43ed1f2;
  pSVar11 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  *(undefined8 *)(puVar12 + -0x48) = 0x43ed1ff;
  System_Text_StringBuilder___ctor(pSVar11,(MethodInfo *)0x0);
  (((UI_Telemetry_o *)__this_03)->fields)._sb = pSVar11;
  *(undefined8 *)(puVar12 + -0x48) = 0x43ed20f;
  il2cpp_runtime_helper_022b4080(&(((UI_Telemetry_o *)__this_03)->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// UI.Telemetry$$Update
// il2cpp: void UI_Telemetry__Update (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x43ec850

void UI_Telemetry__Update(UI_Telemetry_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UI_MultiTextLabel_o *pUVar3;
  UnityEngine_UI_Text_array *__this_00;
  Il2CppMethodPointer pIVar4;
  int32_t iVar5;
  long lVar6;
  undefined8 extraout_RAX;
  undefined4 extraout_var;
  Il2CppObject *arg0;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_Text_StringBuilder_o *pSVar9;
  MethodInfo *method_00;
  UI_Telemetry_o *unaff_RBX;
  long *plVar10;
  System_DateTime_o __this_01;
  MethodInfo *method_01;
  UI_Telemetry_o *pUVar11;
  UI_Telemetry_o *pUVar12;
  UI_Telemetry_o *pUVar13;
  UI_Telemetry_o *pUVar14;
  UI_Telemetry_o *pUVar15;
  UI_Telemetry_o *pUVar16;
  UI_Telemetry_o *pUVar17;
  UI_Telemetry_c **__this_07;
  undefined8 unaff_R12;
  System_Text_StringBuilder_o *unaff_R14;
  long *unaff_R15;
  float fVar18;
  float fVar19;
  UI_Telemetry_c *pUStack_48;
  UI_Telemetry_o *pUStack_40;
  UI_Telemetry_o *pUStack_38;
  undefined1 auStack_30 [8];
  UI_Telemetry_o *pUStack_28;
  UI_MultiTextLabel_o *pUStack_20;
  UI_Telemetry_o *pUStack_18;
  System_DateTime_o __this_02;
  System_DateTime_o __this_03;
  System_DateTime_o __this_04;
  System_DateTime_o __this_05;
  System_DateTime_o __this_06;
  
  fVar19 = (__this->fields)._currentSyncDelay;
  pUStack_20 = (UI_MultiTextLabel_o *)0x43ec86a;
  fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar19 = fVar19 - fVar18;
  (__this->fields)._currentSyncDelay = fVar19;
  if (0.0 < fVar19) {
    return;
  }
  pUVar11 = __this;
  pUStack_18 = unaff_RBX;
  if (g_data_057ae4f8 == '\0') {
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUVar11 = (UI_Telemetry_o *)&MethodInfo_Boolean_get_Value;
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8e1;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f8 = '\x01';
  }
  (__this->fields)._currentSyncDelay = 0.01;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  plVar10 = unaff_R15;
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xd0), lVar6 == 0)) ||
     (pUVar11 = (UI_Telemetry_o *)(__this->fields).timePanel, pUVar11 == (UI_Telemetry_o *)0x0)) {
label_043eca34:
    unaff_R15 = plVar10;
    pUStack_20 = (UI_MultiTextLabel_o *)0x43eca39;
    auStack_30._0_4_ = il2cpp_runtime_helper_022b2c90();
    pUStack_20 = (UI_MultiTextLabel_o *)&TypeInfo_SettingsManager;
    auStack_30._4_4_ = extraout_var;
    pUStack_28 = __this;
    if (g_data_057ae4fa == '\0') {
      pUStack_38 = (UI_Telemetry_o *)0x43eca61;
      il2cpp_runtime_helper_023445d0(&", ");
      pUStack_38 = (UI_Telemetry_o *)0x43eca6d;
      il2cpp_runtime_helper_023445d0(&"{0:0}");
      g_data_057ae4fa = '\x01';
    }
    pSVar9 = (pUVar11->fields)._sb;
    unaff_R14 = (System_Text_StringBuilder_o *)0x0;
    plVar10 = (long *)__this;
    if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
      pUStack_38 = (UI_Telemetry_o *)0x43eca88;
      System_Text_StringBuilder__Clear(pSVar9,(MethodInfo *)0x0);
      plVar10 = (long *)(pUVar11->fields)._sb;
      auStack_30._4_4_ = auStack_30._0_4_;
      method = (MethodInfo *)(auStack_30 + 4);
      pUStack_38 = (UI_Telemetry_o *)0x43ecaac;
      unaff_R14 = g_data_057b9be8;
      arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      if ((UI_Telemetry_o *)plVar10 != (UI_Telemetry_o *)0x0) {
        pUStack_38 = (UI_Telemetry_o *)0x43ecac8;
        method = (MethodInfo *)"{0:0}";
        System_Text_StringBuilder__AppendFormat
                  ((System_Text_StringBuilder_o *)plVar10,(System_String_o *)"{0:0}",arg0,
                   (MethodInfo *)0x0);
        pSVar9 = (pUVar11->fields)._sb;
        unaff_R14 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
          pUStack_38 = (UI_Telemetry_o *)0x43ecae2;
          method = (MethodInfo *)", ";
          System_Text_StringBuilder__Append_3b03f90(pSVar9,(System_String_o *)", ",(MethodInfo *)0x0);
          unaff_R14 = (pUVar11->fields)._sb;
          if (unaff_R14 != (System_Text_StringBuilder_o *)0x0) {
            __this_00 = (UnityEngine_UI_Text_array *)(pUVar11->fields).timePanel;
            method = (unaff_R14->klass->vtable)._3_ToString.method;
            pUStack_38 = (UI_Telemetry_o *)0x43ecaff;
            pSVar7 = (System_String_o *)(*(unaff_R14->klass->vtable)._3_ToString.methodPtr)();
            plVar10 = (long *)0x0;
            if (__this_00 != (UnityEngine_UI_Text_array *)0x0) {
              pUStack_38 = (UI_Telemetry_o *)0x43ecb16;
              UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)__this_00,1,pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    pUStack_38 = (UI_Telemetry_o *)0x43ecb23;
    il2cpp_runtime_helper_022b2c90();
    __this_01.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar12 = (UI_Telemetry_o *)&pUStack_48;
    __this_02.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar13 = (UI_Telemetry_o *)&pUStack_48;
    __this_03.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar14 = (UI_Telemetry_o *)&pUStack_48;
    __this_04.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar15 = (UI_Telemetry_o *)&pUStack_48;
    __this_05.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar16 = (UI_Telemetry_o *)&pUStack_48;
    __this_06.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar17 = (UI_Telemetry_o *)&pUStack_48;
    register0x00000020 = (BADSPACEBASE *)&pUStack_48;
    pUStack_48 = (UI_Telemetry_c *)method;
    pUStack_40 = (UI_Telemetry_o *)plVar10;
    pUStack_38 = pUVar11;
    if (g_data_057ae4fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
      g_data_057ae4fb = '\x01';
    }
    __this = (UI_Telemetry_o *)0x0;
    if (unaff_R14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(unaff_R14[1].monitor,(MethodInfo *)0x0);
      pSVar9 = unaff_R14[1].monitor;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar5 = System_DateTime__get_Hour(__this_01,(MethodInfo *)0x0);
      plVar10 = (long *)0x0;
      __this = pUVar12;
      if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b048f0
                  (pSVar9,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (short)(iVar5 >> 0x1f))
                          + 0x30,(MethodInfo *)0x0);
        plVar10 = unaff_R14[1].monitor;
        iVar5 = System_DateTime__get_Hour(__this_02,(MethodInfo *)0x0);
        __this = pUVar13;
        if ((UI_Telemetry_o *)plVar10 != (UI_Telemetry_o *)0x0) {
          System_Text_StringBuilder__Append_3b048f0
                    ((System_Text_StringBuilder_o *)plVar10,(short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,
                     (MethodInfo *)0x0);
          __this = (UI_Telemetry_o *)0x0;
          if (unaff_R14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b048f0(unaff_R14[1].monitor,0x3a,(MethodInfo *)0x0);
            pSVar9 = unaff_R14[1].monitor;
            iVar5 = System_DateTime__get_Minute(__this_03,(MethodInfo *)0x0);
            plVar10 = (long *)0x0;
            __this = pUVar14;
            if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0
                        (pSVar9,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) -
                                (short)(iVar5 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
              plVar10 = unaff_R14[1].monitor;
              iVar5 = System_DateTime__get_Minute(__this_04,(MethodInfo *)0x0);
              __this = pUVar15;
              if ((UI_Telemetry_o *)plVar10 != (UI_Telemetry_o *)0x0) {
                System_Text_StringBuilder__Append_3b048f0
                          ((System_Text_StringBuilder_o *)plVar10,
                           (short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                __this = (UI_Telemetry_o *)0x0;
                if (unaff_R14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b048f0(unaff_R14[1].monitor,0x3a,(MethodInfo *)0x0);
                  pSVar9 = unaff_R14[1].monitor;
                  iVar5 = System_DateTime__get_Second(__this_05,(MethodInfo *)0x0);
                  plVar10 = (long *)0x0;
                  __this = pUVar16;
                  if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b048f0
                              (pSVar9,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) -
                                      (short)(iVar5 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                    plVar10 = unaff_R14[1].monitor;
                    iVar5 = System_DateTime__get_Second(__this_06,(MethodInfo *)0x0);
                    __this = pUVar17;
                    if ((UI_Telemetry_o *)plVar10 != (UI_Telemetry_o *)0x0) {
                      System_Text_StringBuilder__Append_3b048f0
                                ((System_Text_StringBuilder_o *)plVar10,
                                 (short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                      __this = unaff_R14[1].monitor;
                      if (__this != (UI_Telemetry_o *)0x0) {
                        pUVar3 = *(UI_MultiTextLabel_o **)&(unaff_R14->fields).m_ChunkLength;
                        pSVar7 = (System_String_o *)
                                 (*(((System_Text_StringBuilder_c *)__this->klass)->vtable)._3_ToString.
                                   methodPtr)();
                        plVar10 = (long *)0x0;
                        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
                          UI_MultiTextLabel__SetValue(pUVar3,3,pSVar7,(MethodInfo *)0x0);
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
    uVar8 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar6 + 0x11) == '\0') {
      method = (MethodInfo *)0x0;
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec96f;
      UI_MultiTextLabel__SetEnabled((UI_MultiTextLabel_o *)pUVar11,0,(MethodInfo *)0x0);
    }
    else {
      method_01 = (MethodInfo *)0x1;
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec93c;
      UI_MultiTextLabel__SetEnabled((UI_MultiTextLabel_o *)pUVar11,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        pUStack_20 = (UI_MultiTextLabel_o *)0x43ec976;
        il2cpp_runtime_helper_02337ed0();
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar6 == 0) goto label_043ec989;
label_043ec95f:
        fVar19 = *(float *)(lVar6 + 0x20);
      }
      else {
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar6 != 0) goto label_043ec95f;
label_043ec989:
        fVar19 = 0.0;
      }
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec994;
      UI_Telemetry__UpdateGameTime(__this,fVar19,method_01);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        pUStack_20 = (UI_MultiTextLabel_o *)0x43ec9ac;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec9b3;
      method = (MethodInfo *)System_DateTime__get_Now((MethodInfo *)0x0);
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec9be;
      pUVar11 = __this;
      UI_Telemetry__UpdateSystemTime(__this,(System_DateTime_o)method,method_00);
      plVar10 = &TypeInfo_CustomLogicManager;
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto label_043eca34;
    if (*(char *)(lVar6 + 0x11) == '\0') {
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 != 0)) {
        if (*(char *)(lVar6 + 0x11) != '\0') goto label_043ec9fb;
        pUVar3 = (__this->fields).performancePanel;
        pUVar11 = (UI_Telemetry_o *)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetEnabled(pUVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043eca34;
    }
label_043ec9fb:
    pUVar3 = (__this->fields).performancePanel;
    pUVar11 = (UI_Telemetry_o *)0x0;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043eca34;
    pUStack_20 = (UI_MultiTextLabel_o *)0x43eca10;
    UI_MultiTextLabel__SetEnabled(pUVar3,1,(MethodInfo *)0x0);
    uVar8 = extraout_RAX;
    plVar10 = (long *)pUStack_18;
  }
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x20) = plVar10;
  *(undefined8 *)((long)register0x00000020 + -0x28) = uVar8;
  __this_07 = &__this->klass;
  if (g_data_057ae4f9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdbc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdd4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_07 = &", ";
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecde0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f9 = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x24) = 0;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto label_043ed1b5;
  pUVar3 = (__this->fields).performancePanel;
  __this_07 = &((UI_Telemetry_o *)0x0)->klass;
  if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
  if (*(char *)(lVar6 + 0x11) == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43eceb0;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,0,(MethodInfo *)0x0);
    __this_07 = (UI_Telemetry_c **)(__this->fields).performancePanel;
    if ((UI_Telemetry_o *)__this_07 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ececb;
    UI_MultiTextLabel__SetElementEnabled((UI_MultiTextLabel_o *)__this_07,1,0,(MethodInfo *)0x0);
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ece3b;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,1,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).performancePanel;
    __this_07 = &((UI_Telemetry_o *)0x0)->klass;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ece59;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,1,1,(MethodInfo *)0x0);
    pSVar9 = (__this->fields)._sb;
    __this_07 = &((UI_Telemetry_o *)0x0)->klass;
    if (pSVar9 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ece6d;
    System_Text_StringBuilder__Clear(pSVar9,(MethodInfo *)0x0);
    plVar10 = (long *)(__this->fields)._sb;
    if (*(int *)((long)&TypeInfo_UIManager[3].monitor + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43eced5;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae57e == '\0') goto label_043ecede;
label_043ece8e:
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    else {
      if (g_data_057ae57e != '\0') goto label_043ece8e;
label_043ecede:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43eceea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae57e = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    __this_07 = &TypeInfo_UIManager->klass;
    if (iVar2 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecf03;
      il2cpp_runtime_helper_02337ed0();
      __this_07 = &TypeInfo_UIManager->klass;
    }
    TypeInfo_UIManager = (UI_Telemetry_o *)__this_07;
    if ((UI_Telemetry_o *)plVar10 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    iVar5 = *(int32_t *)
             &(((UI_Telemetry_o *)((long)__this_07 + 0x90))->fields).performancePanel[2].fields.
              m_CancellationTokenSource;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecf24;
    pUVar11 = (UI_Telemetry_o *)plVar10;
    System_Text_StringBuilder__Append_3b04980((System_Text_StringBuilder_o *)plVar10,iVar5,(MethodInfo *)0x0);
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    __this_07 = &pUVar11->klass;
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto label_043ed1b5;
    if (*(char *)(lVar6 + 0x11) == '\0') {
label_043ecf96:
      __this_07 = (UI_Telemetry_c **)(__this->fields)._sb;
    }
    else {
      plVar10 = &TypeInfo_PhotonNetwork;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed145;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abf5b == '\0') goto label_043ed152;
label_043ecf75:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ecf85;
label_043ed175:
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed17a;
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (g_data_057abf5b != '\0') goto label_043ecf75;
label_043ed152:
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed15e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed175;
label_043ecf85:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto label_043ecf96;
      pSVar9 = (__this->fields)._sb;
      __this_07 = (UI_Telemetry_c **)0x0;
      if (pSVar9 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed1a8;
      System_Text_StringBuilder__Append_3b03f90(pSVar9,(System_String_o *)", ",(MethodInfo *)0x0);
      __this_07 = (UI_Telemetry_c **)(__this->fields)._sb;
    }
    if ((UI_Telemetry_o *)__this_07 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    plVar10 = (long *)(__this->fields).performancePanel;
    pIVar4 = (((System_Text_StringBuilder_c *)((UI_Telemetry_o *)__this_07)->klass)->vtable)._3_ToString.
             methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecfb7;
    pSVar7 = (System_String_o *)(*pIVar4)();
    if ((UI_Telemetry_o *)plVar10 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecfd2;
    __this_07 = (UI_Telemetry_c **)plVar10;
    UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)plVar10,1,pSVar7,(MethodInfo *)0x0);
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto label_043ed1b5;
  if (*(char *)(lVar6 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed074;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057abf5b == '\0') goto label_043ed07d;
label_043ed01b:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ed027;
label_043ed09c:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed0a1;
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (g_data_057abf5b != '\0') goto label_043ed01b;
label_043ed07d:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed089;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf5b = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed09c;
label_043ed027:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar3 = (__this->fields).performancePanel;
      __this_07 = (UI_Telemetry_c **)0x0;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed0cf;
        UI_MultiTextLabel__SetElementEnabled(pUVar3,2,1,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).performancePanel;
        __this_07 = (UI_Telemetry_c **)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed0ed;
          UI_MultiTextLabel__SetElementEnabled(pUVar3,3,1,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).performancePanel;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed102;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed109;
          iVar5 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          *(int32_t *)((long)register0x00000020 + -0x24) = iVar5;
          __this_07 = (UI_Telemetry_c **)((long)register0x00000020 + -0x24);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed119;
          pSVar7 = System_Int32__ToString((int32_t)__this_07,(MethodInfo *)0x0);
          plVar10 = (long *)0x0;
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed134;
            UI_MultiTextLabel__SetValue(pUVar3,3,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_043ed1b5;
    }
  }
  pUVar3 = (__this->fields).performancePanel;
  __this_07 = (UI_Telemetry_c **)0x0;
  if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed04f;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,2,0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).performancePanel;
    __this_07 = (UI_Telemetry_c **)0x0;
    if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed06a;
      UI_MultiTextLabel__SetElementEnabled(pUVar3,3,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043ed1b5:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed1ba;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(UI_Telemetry_o **)((long)register0x00000020 + -0x30) = __this;
  *(long **)((long)register0x00000020 + -0x38) = plVar10;
  *(undefined8 *)((long)register0x00000020 + -0x40) = uVar8;
  if (g_data_057ae4fc == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed1dc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed1f2;
  pSVar9 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed1ff;
  System_Text_StringBuilder___ctor(pSVar9,(MethodInfo *)0x0);
  (((UI_Telemetry_o *)__this_07)->fields)._sb = pSVar9;
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed20f;
  il2cpp_runtime_helper_022b4080(&(((UI_Telemetry_o *)__this_07)->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_07,(MethodInfo *)0x0);
  return;
}


// UI.Telemetry$$Sync
// il2cpp: void UI_Telemetry__Sync (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x43ec8a0

void UI_Telemetry__Sync(UI_Telemetry_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UI_MultiTextLabel_o *pUVar3;
  UnityEngine_UI_Text_array *__this_00;
  Il2CppMethodPointer pIVar4;
  int32_t iVar5;
  long lVar6;
  undefined8 extraout_RAX;
  undefined4 extraout_var;
  Il2CppObject *arg0;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_Text_StringBuilder_o *pSVar9;
  MethodInfo *method_00;
  long *unaff_RBX;
  System_DateTime_o __this_01;
  MethodInfo *method_01;
  UI_Telemetry_o *pUVar10;
  UI_Telemetry_o *pUVar11;
  UI_Telemetry_o *pUVar12;
  UI_Telemetry_o *pUVar13;
  UI_Telemetry_o *pUVar14;
  UI_Telemetry_o *pUVar15;
  UI_Telemetry_o *pUVar16;
  UI_Telemetry_c **__this_07;
  undefined8 unaff_R12;
  System_Text_StringBuilder_o *unaff_R14;
  long *unaff_R15;
  long *plVar17;
  float currentTime;
  UI_Telemetry_c *pUStack_48;
  UI_Telemetry_o *pUStack_40;
  UI_Telemetry_o *pUStack_38;
  undefined1 auStack_30 [8];
  UI_Telemetry_o *pUStack_28;
  UI_MultiTextLabel_o *pUStack_20;
  System_DateTime_o __this_02;
  System_DateTime_o __this_03;
  System_DateTime_o __this_04;
  System_DateTime_o __this_05;
  System_DateTime_o __this_06;
  
  pUVar10 = __this;
  if (g_data_057ae4f8 == '\0') {
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUVar10 = (UI_Telemetry_o *)&MethodInfo_Boolean_get_Value;
    pUStack_20 = (UI_MultiTextLabel_o *)0x43ec8e1;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f8 = '\x01';
  }
  (__this->fields)._currentSyncDelay = 0.01;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  plVar17 = unaff_R15;
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xd0), lVar6 == 0)) ||
     (pUVar10 = (UI_Telemetry_o *)(__this->fields).timePanel, pUVar10 == (UI_Telemetry_o *)0x0)) {
label_043eca34:
    unaff_R15 = plVar17;
    pUStack_20 = (UI_MultiTextLabel_o *)0x43eca39;
    auStack_30._0_4_ = il2cpp_runtime_helper_022b2c90();
    pUStack_20 = (UI_MultiTextLabel_o *)&TypeInfo_SettingsManager;
    auStack_30._4_4_ = extraout_var;
    pUStack_28 = __this;
    if (g_data_057ae4fa == '\0') {
      pUStack_38 = (UI_Telemetry_o *)0x43eca61;
      il2cpp_runtime_helper_023445d0(&", ");
      pUStack_38 = (UI_Telemetry_o *)0x43eca6d;
      il2cpp_runtime_helper_023445d0(&"{0:0}");
      g_data_057ae4fa = '\x01';
    }
    pSVar9 = (pUVar10->fields)._sb;
    unaff_R14 = (System_Text_StringBuilder_o *)0x0;
    unaff_RBX = (long *)__this;
    if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
      pUStack_38 = (UI_Telemetry_o *)0x43eca88;
      System_Text_StringBuilder__Clear(pSVar9,(MethodInfo *)0x0);
      unaff_RBX = (long *)(pUVar10->fields)._sb;
      auStack_30._4_4_ = auStack_30._0_4_;
      method = (MethodInfo *)(auStack_30 + 4);
      pUStack_38 = (UI_Telemetry_o *)0x43ecaac;
      unaff_R14 = g_data_057b9be8;
      arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      if ((UI_Telemetry_o *)unaff_RBX != (UI_Telemetry_o *)0x0) {
        pUStack_38 = (UI_Telemetry_o *)0x43ecac8;
        method = (MethodInfo *)"{0:0}";
        System_Text_StringBuilder__AppendFormat
                  ((System_Text_StringBuilder_o *)unaff_RBX,(System_String_o *)"{0:0}",arg0,
                   (MethodInfo *)0x0);
        pSVar9 = (pUVar10->fields)._sb;
        unaff_R14 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
          pUStack_38 = (UI_Telemetry_o *)0x43ecae2;
          method = (MethodInfo *)", ";
          System_Text_StringBuilder__Append_3b03f90(pSVar9,(System_String_o *)", ",(MethodInfo *)0x0);
          unaff_R14 = (pUVar10->fields)._sb;
          if (unaff_R14 != (System_Text_StringBuilder_o *)0x0) {
            __this_00 = (UnityEngine_UI_Text_array *)(pUVar10->fields).timePanel;
            method = (unaff_R14->klass->vtable)._3_ToString.method;
            pUStack_38 = (UI_Telemetry_o *)0x43ecaff;
            pSVar7 = (System_String_o *)(*(unaff_R14->klass->vtable)._3_ToString.methodPtr)();
            unaff_RBX = (long *)0x0;
            if (__this_00 != (UnityEngine_UI_Text_array *)0x0) {
              pUStack_38 = (UI_Telemetry_o *)0x43ecb16;
              UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)__this_00,1,pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    pUStack_38 = (UI_Telemetry_o *)0x43ecb23;
    il2cpp_runtime_helper_022b2c90();
    __this_01.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar11 = (UI_Telemetry_o *)&pUStack_48;
    __this_02.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar12 = (UI_Telemetry_o *)&pUStack_48;
    __this_03.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar13 = (UI_Telemetry_o *)&pUStack_48;
    __this_04.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar14 = (UI_Telemetry_o *)&pUStack_48;
    __this_05.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar15 = (UI_Telemetry_o *)&pUStack_48;
    __this_06.fields._dateData = (System_DateTime_Fields)&pUStack_48;
    pUVar16 = (UI_Telemetry_o *)&pUStack_48;
    register0x00000020 = (BADSPACEBASE *)&pUStack_48;
    pUStack_48 = (UI_Telemetry_c *)method;
    pUStack_40 = (UI_Telemetry_o *)unaff_RBX;
    pUStack_38 = pUVar10;
    if (g_data_057ae4fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
      g_data_057ae4fb = '\x01';
    }
    __this = (UI_Telemetry_o *)0x0;
    if (unaff_R14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(unaff_R14[1].monitor,(MethodInfo *)0x0);
      pSVar9 = unaff_R14[1].monitor;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar5 = System_DateTime__get_Hour(__this_01,(MethodInfo *)0x0);
      unaff_RBX = (long *)0x0;
      __this = pUVar11;
      if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b048f0
                  (pSVar9,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (short)(iVar5 >> 0x1f))
                          + 0x30,(MethodInfo *)0x0);
        unaff_RBX = unaff_R14[1].monitor;
        iVar5 = System_DateTime__get_Hour(__this_02,(MethodInfo *)0x0);
        __this = pUVar12;
        if ((UI_Telemetry_o *)unaff_RBX != (UI_Telemetry_o *)0x0) {
          System_Text_StringBuilder__Append_3b048f0
                    ((System_Text_StringBuilder_o *)unaff_RBX,(short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,
                     (MethodInfo *)0x0);
          __this = (UI_Telemetry_o *)0x0;
          if (unaff_R14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b048f0(unaff_R14[1].monitor,0x3a,(MethodInfo *)0x0);
            pSVar9 = unaff_R14[1].monitor;
            iVar5 = System_DateTime__get_Minute(__this_03,(MethodInfo *)0x0);
            unaff_RBX = (long *)0x0;
            __this = pUVar13;
            if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0
                        (pSVar9,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) -
                                (short)(iVar5 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
              unaff_RBX = unaff_R14[1].monitor;
              iVar5 = System_DateTime__get_Minute(__this_04,(MethodInfo *)0x0);
              __this = pUVar14;
              if ((UI_Telemetry_o *)unaff_RBX != (UI_Telemetry_o *)0x0) {
                System_Text_StringBuilder__Append_3b048f0
                          ((System_Text_StringBuilder_o *)unaff_RBX,
                           (short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                __this = (UI_Telemetry_o *)0x0;
                if (unaff_R14[1].monitor != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b048f0(unaff_R14[1].monitor,0x3a,(MethodInfo *)0x0);
                  pSVar9 = unaff_R14[1].monitor;
                  iVar5 = System_DateTime__get_Second(__this_05,(MethodInfo *)0x0);
                  unaff_RBX = (long *)0x0;
                  __this = pUVar15;
                  if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b048f0
                              (pSVar9,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) -
                                      (short)(iVar5 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                    unaff_RBX = unaff_R14[1].monitor;
                    iVar5 = System_DateTime__get_Second(__this_06,(MethodInfo *)0x0);
                    __this = pUVar16;
                    if ((UI_Telemetry_o *)unaff_RBX != (UI_Telemetry_o *)0x0) {
                      System_Text_StringBuilder__Append_3b048f0
                                ((System_Text_StringBuilder_o *)unaff_RBX,
                                 (short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                      __this = unaff_R14[1].monitor;
                      if (__this != (UI_Telemetry_o *)0x0) {
                        pUVar3 = *(UI_MultiTextLabel_o **)&(unaff_R14->fields).m_ChunkLength;
                        pSVar7 = (System_String_o *)
                                 (*(((System_Text_StringBuilder_c *)__this->klass)->vtable)._3_ToString.
                                   methodPtr)();
                        unaff_RBX = (long *)0x0;
                        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
                          UI_MultiTextLabel__SetValue(pUVar3,3,pSVar7,(MethodInfo *)0x0);
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
    uVar8 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar6 + 0x11) == '\0') {
      method = (MethodInfo *)0x0;
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec96f;
      UI_MultiTextLabel__SetEnabled((UI_MultiTextLabel_o *)pUVar10,0,(MethodInfo *)0x0);
    }
    else {
      method_01 = (MethodInfo *)0x1;
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec93c;
      UI_MultiTextLabel__SetEnabled((UI_MultiTextLabel_o *)pUVar10,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        pUStack_20 = (UI_MultiTextLabel_o *)0x43ec976;
        il2cpp_runtime_helper_02337ed0();
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar6 == 0) goto label_043ec989;
label_043ec95f:
        currentTime = *(float *)(lVar6 + 0x20);
      }
      else {
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar6 != 0) goto label_043ec95f;
label_043ec989:
        currentTime = 0.0;
      }
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec994;
      UI_Telemetry__UpdateGameTime(__this,currentTime,method_01);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        pUStack_20 = (UI_MultiTextLabel_o *)0x43ec9ac;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec9b3;
      method = (MethodInfo *)System_DateTime__get_Now((MethodInfo *)0x0);
      pUStack_20 = (UI_MultiTextLabel_o *)0x43ec9be;
      pUVar10 = __this;
      UI_Telemetry__UpdateSystemTime(__this,(System_DateTime_o)method,method_00);
      plVar17 = &TypeInfo_CustomLogicManager;
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto label_043eca34;
    if (*(char *)(lVar6 + 0x11) == '\0') {
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 != 0)) {
        if (*(char *)(lVar6 + 0x11) != '\0') goto label_043ec9fb;
        pUVar3 = (__this->fields).performancePanel;
        pUVar10 = (UI_Telemetry_o *)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetEnabled(pUVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043eca34;
    }
label_043ec9fb:
    pUVar3 = (__this->fields).performancePanel;
    pUVar10 = (UI_Telemetry_o *)0x0;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043eca34;
    pUStack_20 = (UI_MultiTextLabel_o *)0x43eca10;
    UI_MultiTextLabel__SetEnabled(pUVar3,1,(MethodInfo *)0x0);
    uVar8 = extraout_RAX;
  }
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x28) = uVar8;
  __this_07 = &__this->klass;
  if (g_data_057ae4f9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdbc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecdd4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_07 = &", ";
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecde0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f9 = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x24) = 0;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto label_043ed1b5;
  pUVar3 = (__this->fields).performancePanel;
  __this_07 = &((UI_Telemetry_o *)0x0)->klass;
  if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
  if (*(char *)(lVar6 + 0x11) == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43eceb0;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,0,(MethodInfo *)0x0);
    __this_07 = (UI_Telemetry_c **)(__this->fields).performancePanel;
    if ((UI_Telemetry_o *)__this_07 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ececb;
    UI_MultiTextLabel__SetElementEnabled((UI_MultiTextLabel_o *)__this_07,1,0,(MethodInfo *)0x0);
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ece3b;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,1,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).performancePanel;
    __this_07 = &((UI_Telemetry_o *)0x0)->klass;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ece59;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,1,1,(MethodInfo *)0x0);
    pSVar9 = (__this->fields)._sb;
    __this_07 = &((UI_Telemetry_o *)0x0)->klass;
    if (pSVar9 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ece6d;
    System_Text_StringBuilder__Clear(pSVar9,(MethodInfo *)0x0);
    unaff_RBX = (long *)(__this->fields)._sb;
    if (*(int *)((long)&TypeInfo_UIManager[3].monitor + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43eced5;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae57e == '\0') goto label_043ecede;
label_043ece8e:
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    else {
      if (g_data_057ae57e != '\0') goto label_043ece8e;
label_043ecede:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43eceea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae57e = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    __this_07 = &TypeInfo_UIManager->klass;
    if (iVar2 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecf03;
      il2cpp_runtime_helper_02337ed0();
      __this_07 = &TypeInfo_UIManager->klass;
    }
    TypeInfo_UIManager = (UI_Telemetry_o *)__this_07;
    if ((UI_Telemetry_o *)unaff_RBX == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    iVar5 = *(int32_t *)
             &(((UI_Telemetry_o *)((long)__this_07 + 0x90))->fields).performancePanel[2].fields.
              m_CancellationTokenSource;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecf24;
    pUVar10 = (UI_Telemetry_o *)unaff_RBX;
    System_Text_StringBuilder__Append_3b04980
              ((System_Text_StringBuilder_o *)unaff_RBX,iVar5,(MethodInfo *)0x0);
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    __this_07 = &pUVar10->klass;
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto label_043ed1b5;
    if (*(char *)(lVar6 + 0x11) == '\0') {
label_043ecf96:
      __this_07 = (UI_Telemetry_c **)(__this->fields)._sb;
    }
    else {
      unaff_RBX = &TypeInfo_PhotonNetwork;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed145;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abf5b == '\0') goto label_043ed152;
label_043ecf75:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ecf85;
label_043ed175:
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed17a;
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (g_data_057abf5b != '\0') goto label_043ecf75;
label_043ed152:
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed15e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed175;
label_043ecf85:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto label_043ecf96;
      pSVar9 = (__this->fields)._sb;
      __this_07 = (UI_Telemetry_c **)0x0;
      if (pSVar9 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed1a8;
      System_Text_StringBuilder__Append_3b03f90(pSVar9,(System_String_o *)", ",(MethodInfo *)0x0);
      __this_07 = (UI_Telemetry_c **)(__this->fields)._sb;
    }
    if ((UI_Telemetry_o *)__this_07 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    unaff_RBX = (long *)(__this->fields).performancePanel;
    pIVar4 = (((System_Text_StringBuilder_c *)((UI_Telemetry_o *)__this_07)->klass)->vtable)._3_ToString.
             methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecfb7;
    pSVar7 = (System_String_o *)(*pIVar4)();
    if ((UI_Telemetry_o *)unaff_RBX == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ecfd2;
    __this_07 = (UI_Telemetry_c **)unaff_RBX;
    UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)unaff_RBX,1,pSVar7,(MethodInfo *)0x0);
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto label_043ed1b5;
  if (*(char *)(lVar6 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed074;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057abf5b == '\0') goto label_043ed07d;
label_043ed01b:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ed027;
label_043ed09c:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed0a1;
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (g_data_057abf5b != '\0') goto label_043ed01b;
label_043ed07d:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed089;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf5b = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed09c;
label_043ed027:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar3 = (__this->fields).performancePanel;
      __this_07 = (UI_Telemetry_c **)0x0;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed0cf;
        UI_MultiTextLabel__SetElementEnabled(pUVar3,2,1,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).performancePanel;
        __this_07 = (UI_Telemetry_c **)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed0ed;
          UI_MultiTextLabel__SetElementEnabled(pUVar3,3,1,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).performancePanel;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed102;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed109;
          iVar5 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          *(int32_t *)((long)register0x00000020 + -0x24) = iVar5;
          __this_07 = (UI_Telemetry_c **)((long)register0x00000020 + -0x24);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed119;
          pSVar7 = System_Int32__ToString((int32_t)__this_07,(MethodInfo *)0x0);
          unaff_RBX = (long *)0x0;
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed134;
            UI_MultiTextLabel__SetValue(pUVar3,3,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_043ed1b5;
    }
  }
  pUVar3 = (__this->fields).performancePanel;
  __this_07 = (UI_Telemetry_c **)0x0;
  if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed04f;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,2,0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).performancePanel;
    __this_07 = (UI_Telemetry_c **)0x0;
    if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed06a;
      UI_MultiTextLabel__SetElementEnabled(pUVar3,3,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043ed1b5:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43ed1ba;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(UI_Telemetry_o **)((long)register0x00000020 + -0x30) = __this;
  *(long **)((long)register0x00000020 + -0x38) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x40) = uVar8;
  if (g_data_057ae4fc == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed1dc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed1f2;
  pSVar9 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed1ff;
  System_Text_StringBuilder___ctor(pSVar9,(MethodInfo *)0x0);
  (((UI_Telemetry_o *)__this_07)->fields)._sb = pSVar9;
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ed20f;
  il2cpp_runtime_helper_022b4080(&(((UI_Telemetry_o *)__this_07)->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_07,(MethodInfo *)0x0);
  return;
}


// UI.Telemetry$$UpdatePerformance
// il2cpp: void UI_Telemetry__UpdatePerformance (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x43ecd90

void UI_Telemetry__UpdatePerformance(UI_Telemetry_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UI_MultiTextLabel_o *pUVar4;
  uint in_EAX;
  int32_t iVar5;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_String_o **__this_00;
  UI_Telemetry_o *pUVar8;
  undefined1 auStack_28 [8];
  
  __this_00 = (System_String_o **)__this;
  auStack_28._0_4_ = in_EAX;
  if (g_data_057ae4f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_00 = &", ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f9 = '\x01';
  }
  auStack_28._4_4_ = 0;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) goto label_043ed1b5;
  pUVar4 = (__this->fields).performancePanel;
  __this_00 = (System_String_o **)(UI_Telemetry_o *)0x0;
  if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
  if (*(char *)(lVar3 + 0x11) == '\0') {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,0,0,(MethodInfo *)0x0);
    __this_00 = (System_String_o **)(__this->fields).performancePanel;
    if ((UI_Telemetry_o *)__this_00 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetElementEnabled((UI_MultiTextLabel_o *)__this_00,1,0,(MethodInfo *)0x0);
  }
  else {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,0,1,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).performancePanel;
    __this_00 = (System_String_o **)(UI_Telemetry_o *)0x0;
    if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetElementEnabled(pUVar4,1,1,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._sb;
    __this_00 = (System_String_o **)(UI_Telemetry_o *)0x0;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    System_Text_StringBuilder__Clear(pSVar7,(MethodInfo *)0x0);
    pUVar8 = (UI_Telemetry_o *)(__this->fields)._sb;
    if (*(int *)((long)&TypeInfo_UIManager[3].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae57e == '\0') goto label_043ecede;
label_043ece8e:
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    else {
      if (g_data_057ae57e != '\0') goto label_043ece8e;
label_043ecede:
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae57e = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_UIManager[3].monitor + 4);
    }
    __this_00 = (System_String_o **)TypeInfo_UIManager;
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = (System_String_o **)TypeInfo_UIManager;
    }
    TypeInfo_UIManager = (UI_Telemetry_o *)__this_00;
    if (pUVar8 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    System_Text_StringBuilder__Append_3b04980
              ((System_Text_StringBuilder_o *)pUVar8,
               *(int32_t *)
                &(((UI_Telemetry_o *)((long)__this_00 + 0x90))->fields).performancePanel[2].fields.
                 m_CancellationTokenSource,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    __this_00 = (System_String_o **)pUVar8;
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb8), lVar3 == 0)) goto label_043ed1b5;
    if (*(char *)(lVar3 + 0x11) == '\0') {
label_043ecf96:
      __this_00 = (System_String_o **)(__this->fields)._sb;
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abf5b == '\0') goto label_043ed152;
label_043ecf75:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ecf85;
label_043ed175:
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (g_data_057abf5b != '\0') goto label_043ecf75;
label_043ed152:
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed175;
label_043ecf85:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto label_043ecf96;
      pSVar7 = (__this->fields)._sb;
      __this_00 = (System_String_o **)0x0;
      if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
      System_Text_StringBuilder__Append_3b03f90(pSVar7,", ",(MethodInfo *)0x0);
      __this_00 = (System_String_o **)(__this->fields)._sb;
    }
    if ((UI_Telemetry_o *)__this_00 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    pUVar8 = (UI_Telemetry_o *)(__this->fields).performancePanel;
    pSVar6 = (System_String_o *)
             (*(((System_Text_StringBuilder_c *)((UI_Telemetry_o *)__this_00)->klass)->vtable)._3_ToString.
               methodPtr)();
    if (pUVar8 == (UI_Telemetry_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)pUVar8,1,pSVar6,(MethodInfo *)0x0);
    __this_00 = (System_String_o **)pUVar8;
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb8), lVar3 == 0)) goto label_043ed1b5;
  if (*(char *)(lVar3 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057abf5b == '\0') goto label_043ed07d;
label_043ed01b:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ed027;
label_043ed09c:
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (g_data_057abf5b != '\0') goto label_043ed01b;
label_043ed07d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf5b = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed09c;
label_043ed027:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar4 = (__this->fields).performancePanel;
      __this_00 = (System_String_o **)0x0;
      if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetElementEnabled(pUVar4,2,1,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).performancePanel;
        __this_00 = (System_String_o **)0x0;
        if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetElementEnabled(pUVar4,3,1,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).performancePanel;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar5 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          auStack_28._4_4_ = iVar5;
          __this_00 = (System_String_o **)(auStack_28 + 4);
          pSVar6 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(pUVar4,3,pSVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_043ed1b5;
    }
  }
  pUVar4 = (__this->fields).performancePanel;
  __this_00 = (System_String_o **)0x0;
  if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,2,0,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).performancePanel;
    __this_00 = (System_String_o **)0x0;
    if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetElementEnabled(pUVar4,3,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043ed1b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar7,(MethodInfo *)0x0);
  (((UI_Telemetry_o *)__this_00)->fields)._sb = pSVar7;
  il2cpp_runtime_helper_022b4080(&(((UI_Telemetry_o *)__this_00)->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.Telemetry$$UpdateGameTime
// il2cpp: void UI_Telemetry__UpdateGameTime (UI_Telemetry_o* __this, float currentTime, const MethodInfo* method);
// 0x43eca40

void UI_Telemetry__UpdateGameTime(UI_Telemetry_o *__this,float currentTime,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UI_MultiTextLabel_o *pUVar3;
  System_Text_StringBuilder_o *__this_00;
  long lVar4;
  int32_t iVar5;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_Text_StringBuilder_o *unaff_RBX;
  System_Text_StringBuilder_o *pSVar8;
  System_Text_StringBuilder_o *pSVar9;
  System_Text_StringBuilder_o *pSVar10;
  System_Text_StringBuilder_o *pSVar11;
  System_Text_StringBuilder_o *pSVar12;
  System_Text_StringBuilder_o *pSVar13;
  System_Text_StringBuilder_o *pSVar14;
  System_Text_StringBuilder_c **__this_01;
  undefined8 uStack_58;
  System_Text_StringBuilder_o *pSStack_50;
  System_Text_StringBuilder_c *pSStack_30;
  System_Text_StringBuilder_o *pSStack_28;
  System_Char_array *pSStack_20;
  undefined1 local_18 [8];
  
  local_18._4_4_ = (undefined4)((ulong)in_RAX >> 0x20);
  local_18._0_4_ = currentTime;
  if (g_data_057ae4fa == '\0') {
    pSStack_20 = (System_Char_array *)0x43eca61;
    il2cpp_runtime_helper_023445d0(&", ");
    pSStack_20 = (System_Char_array *)0x43eca6d;
    il2cpp_runtime_helper_023445d0(&"{0:0}");
    g_data_057ae4fa = '\x01';
  }
  pSVar7 = (__this->fields)._sb;
  pSVar8 = (System_Text_StringBuilder_o *)0x0;
  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
    pSStack_20 = (System_Char_array *)0x43eca88;
    System_Text_StringBuilder__Clear(pSVar7,(MethodInfo *)0x0);
    unaff_RBX = (__this->fields)._sb;
    local_18._4_4_ = local_18._0_4_;
    method = (MethodInfo *)(local_18 + 4);
    pSStack_20 = (System_Char_array *)0x43ecaac;
    pSVar8 = g_data_057b9be8;
    arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
    if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
      pSStack_20 = (System_Char_array *)0x43ecac8;
      method = (MethodInfo *)"{0:0}";
      System_Text_StringBuilder__AppendFormat
                (unaff_RBX,(System_String_o *)"{0:0}",arg0,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._sb;
      pSVar8 = (System_Text_StringBuilder_o *)0x0;
      if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
        pSStack_20 = (System_Char_array *)0x43ecae2;
        method = (MethodInfo *)", ";
        System_Text_StringBuilder__Append_3b03f90(pSVar7,(System_String_o *)", ",(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._sb;
        if (pSVar8 != (System_Text_StringBuilder_o *)0x0) {
          pUVar3 = (__this->fields).timePanel;
          method = (pSVar8->klass->vtable)._3_ToString.method;
          pSStack_20 = (System_Char_array *)0x43ecaff;
          pSVar6 = (System_String_o *)(*(pSVar8->klass->vtable)._3_ToString.methodPtr)();
          unaff_RBX = (System_Text_StringBuilder_o *)0x0;
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            pSStack_20 = (System_Char_array *)0x43ecb16;
            UI_MultiTextLabel__SetValue(pUVar3,1,pSVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pSStack_20 = (System_Char_array *)0x43ecb23;
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = (System_Text_StringBuilder_o *)&pSStack_30;
  pSVar9 = (System_Text_StringBuilder_o *)&pSStack_30;
  pSVar10 = (System_Text_StringBuilder_o *)&pSStack_30;
  pSVar11 = (System_Text_StringBuilder_o *)&pSStack_30;
  pSVar12 = (System_Text_StringBuilder_o *)&pSStack_30;
  pSVar13 = (System_Text_StringBuilder_o *)&pSStack_30;
  pSStack_30 = (System_Text_StringBuilder_c *)method;
  pSStack_28 = unaff_RBX;
  pSStack_20 = (System_Char_array *)__this;
  if (g_data_057ae4fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    g_data_057ae4fb = '\x01';
  }
  pSVar14 = (System_Text_StringBuilder_o *)0x0;
  if (pSVar8[1].monitor != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar8[1].monitor,(MethodInfo *)0x0);
    __this_00 = pSVar8[1].monitor;
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar5 = System_DateTime__get_Hour((System_DateTime_o)&pSStack_30,(MethodInfo *)0x0);
    unaff_RBX = (System_Text_StringBuilder_o *)0x0;
    pSVar14 = pSVar7;
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b048f0
                (__this_00,
                 ((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (short)(iVar5 >> 0x1f)) + 0x30,
                 (MethodInfo *)0x0);
      unaff_RBX = pSVar8[1].monitor;
      iVar5 = System_DateTime__get_Hour((System_DateTime_o)&pSStack_30,(MethodInfo *)0x0);
      pSVar14 = pSVar9;
      if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b048f0
                  (unaff_RBX,(short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
        pSVar14 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar8[1].monitor != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_3b048f0(pSVar8[1].monitor,0x3a,(MethodInfo *)0x0);
          pSVar7 = pSVar8[1].monitor;
          iVar5 = System_DateTime__get_Minute((System_DateTime_o)&pSStack_30,(MethodInfo *)0x0);
          unaff_RBX = (System_Text_StringBuilder_o *)0x0;
          pSVar14 = pSVar10;
          if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b048f0
                      (pSVar7,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) -
                              (short)(iVar5 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
            unaff_RBX = pSVar8[1].monitor;
            iVar5 = System_DateTime__get_Minute((System_DateTime_o)&pSStack_30,(MethodInfo *)0x0);
            pSVar14 = pSVar11;
            if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0
                        (unaff_RBX,(short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
              pSVar14 = (System_Text_StringBuilder_o *)0x0;
              if (pSVar8[1].monitor != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_3b048f0(pSVar8[1].monitor,0x3a,(MethodInfo *)0x0);
                pSVar7 = pSVar8[1].monitor;
                iVar5 = System_DateTime__get_Second((System_DateTime_o)&pSStack_30,(MethodInfo *)0x0);
                unaff_RBX = (System_Text_StringBuilder_o *)0x0;
                pSVar14 = pSVar12;
                if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b048f0
                            (pSVar7,((short)(uint)((ulong)((long)iVar5 * 0x66666667) >> 0x22) -
                                    (short)(iVar5 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                  unaff_RBX = pSVar8[1].monitor;
                  iVar5 = System_DateTime__get_Second((System_DateTime_o)&pSStack_30,(MethodInfo *)0x0);
                  pSVar14 = pSVar13;
                  if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b048f0
                              (unaff_RBX,(short)iVar5 + (short)(iVar5 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                    pSVar14 = pSVar8[1].monitor;
                    if (pSVar14 != (System_Text_StringBuilder_o *)0x0) {
                      pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar8->fields).m_ChunkLength;
                      pSVar6 = (System_String_o *)(*(pSVar14->klass->vtable)._3_ToString.methodPtr)();
                      unaff_RBX = (System_Text_StringBuilder_o *)0x0;
                      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(pUVar3,3,pSVar6,(MethodInfo *)0x0);
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
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  __this_01 = &pSVar14->klass;
  pSStack_50 = unaff_RBX;
  if (g_data_057ae4f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_01 = &", ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f9 = '\x01';
  }
  uStack_58 = uStack_58 & 0xffffffff;
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) goto label_043ed1b5;
  pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
  __this_01 = &((System_Text_StringBuilder_o *)0x0)->klass;
  if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
  if (*(char *)(lVar4 + 0x11) == '\0') {
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,0,(MethodInfo *)0x0);
    __this_01 = *(System_Text_StringBuilder_c ***)&(pSVar14->fields).m_MaxCapacity;
    if ((System_Text_StringBuilder_o *)__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetElementEnabled((UI_MultiTextLabel_o *)__this_01,1,0,(MethodInfo *)0x0);
  }
  else {
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,1,(MethodInfo *)0x0);
    pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
    __this_01 = &((System_Text_StringBuilder_o *)0x0)->klass;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,1,1,(MethodInfo *)0x0);
    __this_01 = &((System_Text_StringBuilder_o *)0x0)->klass;
    if (pSVar14[1].monitor == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    System_Text_StringBuilder__Clear(pSVar14[1].monitor,(MethodInfo *)0x0);
    pSVar7 = pSVar14[1].monitor;
    if (TypeInfo_UIManager[4].fields.m_ChunkOffset == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae57e == '\0') goto label_043ecede;
label_043ece8e:
      iVar2 = TypeInfo_UIManager[4].fields.m_ChunkOffset;
    }
    else {
      if (g_data_057ae57e != '\0') goto label_043ece8e;
label_043ecede:
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae57e = '\x01';
      iVar2 = TypeInfo_UIManager[4].fields.m_ChunkOffset;
    }
    __this_01 = &TypeInfo_UIManager->klass;
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_01 = &TypeInfo_UIManager->klass;
    }
    TypeInfo_UIManager = (System_Text_StringBuilder_o *)__this_01;
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    System_Text_StringBuilder__Append_3b04980
              (pSVar7,*(int32_t *)
                       (*(long *)&(((System_Text_StringBuilder_o *)((long)__this_01 + 0x90))->fields).
                                  m_MaxCapacity + 0x68),(MethodInfo *)0x0);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    __this_01 = &pSVar7->klass;
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb8), lVar4 == 0)) goto label_043ed1b5;
    if (*(char *)(lVar4 + 0x11) == '\0') {
label_043ecf96:
      __this_01 = pSVar14[1].monitor;
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abf5b == '\0') goto label_043ed152;
label_043ecf75:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ecf85;
label_043ed175:
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (g_data_057abf5b != '\0') goto label_043ecf75;
label_043ed152:
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed175;
label_043ecf85:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto label_043ecf96;
      __this_01 = (System_Text_StringBuilder_c **)0x0;
      if (pSVar14[1].monitor == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
      System_Text_StringBuilder__Append_3b03f90
                (pSVar14[1].monitor,(System_String_o *)", ",(MethodInfo *)0x0);
      __this_01 = pSVar14[1].monitor;
    }
    if ((System_Text_StringBuilder_o *)__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    pSVar7 = *(System_Text_StringBuilder_o **)&(pSVar14->fields).m_MaxCapacity;
    pSVar6 = (System_String_o *)
             (*(((System_Text_StringBuilder_o *)__this_01)->klass->vtable)._3_ToString.methodPtr)();
    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)pSVar7,1,pSVar6,(MethodInfo *)0x0);
    __this_01 = &pSVar7->klass;
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb8), lVar4 == 0)) goto label_043ed1b5;
  if (*(char *)(lVar4 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057abf5b == '\0') goto label_043ed07d;
label_043ed01b:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ed027;
label_043ed09c:
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (g_data_057abf5b != '\0') goto label_043ed01b;
label_043ed07d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf5b = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed09c;
label_043ed027:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
      __this_01 = (System_Text_StringBuilder_c **)0x0;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetElementEnabled(pUVar3,2,1,(MethodInfo *)0x0);
        pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
        __this_01 = (System_Text_StringBuilder_c **)0x0;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetElementEnabled(pUVar3,3,1,(MethodInfo *)0x0);
          pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar5 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          uStack_58 = CONCAT44(iVar5,(undefined4)uStack_58);
          __this_01 = (System_Text_StringBuilder_c **)((long)&uStack_58 + 4);
          pSVar6 = System_Int32__ToString((int32_t)__this_01,(MethodInfo *)0x0);
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(pUVar3,3,pSVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_043ed1b5;
    }
  }
  pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
  __this_01 = (System_Text_StringBuilder_c **)0x0;
  if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
    UI_MultiTextLabel__SetElementEnabled(pUVar3,2,0,(MethodInfo *)0x0);
    pUVar3 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
    __this_01 = (System_Text_StringBuilder_c **)0x0;
    if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetElementEnabled(pUVar3,3,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043ed1b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar7,(MethodInfo *)0x0);
  ((System_Text_StringBuilder_o *)((long)__this_01 + 0x30))->monitor = pSVar7;
  il2cpp_runtime_helper_022b4080(&((System_Text_StringBuilder_o *)((long)__this_01 + 0x30))->monitor);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.Telemetry$$UpdateSystemTime
// il2cpp: void UI_Telemetry__UpdateSystemTime (UI_Telemetry_o* __this, System_DateTime_o dt, const MethodInfo* method);
// 0x43ecb30

void UI_Telemetry__UpdateSystemTime(UI_Telemetry_o *__this,System_DateTime_o dt,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Text_StringBuilder_o *pSVar3;
  UI_MultiTextLabel_o *pUVar4;
  long lVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_Text_StringBuilder_o *pSVar8;
  System_Text_StringBuilder_o *unaff_RBX;
  System_Text_StringBuilder_o *pSVar9;
  System_Text_StringBuilder_o *pSVar10;
  System_Text_StringBuilder_o *pSVar11;
  System_Text_StringBuilder_o *pSVar12;
  System_Text_StringBuilder_o *pSVar13;
  System_Text_StringBuilder_o *pSVar14;
  System_String_o **__this_00;
  undefined8 uStack_40;
  System_Text_StringBuilder_o *pSStack_38;
  System_DateTime_Fields local_18;
  
  pSVar9 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffe8;
  pSVar10 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffe8;
  pSVar11 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffe8;
  pSVar12 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffe8;
  pSVar13 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffe8;
  pSVar8 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffe8;
  local_18 = dt.fields._dateData;
  if (g_data_057ae4fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    g_data_057ae4fb = '\x01';
  }
  pSVar3 = (__this->fields)._sb;
  pSVar14 = (System_Text_StringBuilder_o *)0x0;
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._sb;
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar6 = System_DateTime__get_Hour((System_DateTime_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
    unaff_RBX = (System_Text_StringBuilder_o *)0x0;
    pSVar14 = pSVar9;
    if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b048f0
                (pSVar3,((short)(uint)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (short)(iVar6 >> 0x1f)) +
                        0x30,(MethodInfo *)0x0);
      unaff_RBX = (__this->fields)._sb;
      iVar6 = System_DateTime__get_Hour((System_DateTime_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
      pSVar14 = pSVar10;
      if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b048f0
                  (unaff_RBX,(short)iVar6 + (short)(iVar6 / 10) * -10 + 0x30,(MethodInfo *)0x0);
        pSVar10 = (__this->fields)._sb;
        pSVar14 = (System_Text_StringBuilder_o *)0x0;
        if (pSVar10 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_3b048f0(pSVar10,0x3a,(MethodInfo *)0x0);
          pSVar10 = (__this->fields)._sb;
          iVar6 = System_DateTime__get_Minute((System_DateTime_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
          unaff_RBX = (System_Text_StringBuilder_o *)0x0;
          pSVar14 = pSVar11;
          if (pSVar10 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b048f0
                      (pSVar10,((short)(uint)((ulong)((long)iVar6 * 0x66666667) >> 0x22) -
                               (short)(iVar6 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
            unaff_RBX = (__this->fields)._sb;
            iVar6 = System_DateTime__get_Minute((System_DateTime_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0)
            ;
            pSVar14 = pSVar12;
            if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0
                        (unaff_RBX,(short)iVar6 + (short)(iVar6 / 10) * -10 + 0x30,(MethodInfo *)0x0);
              pSVar12 = (__this->fields)._sb;
              pSVar14 = (System_Text_StringBuilder_o *)0x0;
              if (pSVar12 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_3b048f0(pSVar12,0x3a,(MethodInfo *)0x0);
                pSVar12 = (__this->fields)._sb;
                iVar6 = System_DateTime__get_Second
                                  ((System_DateTime_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
                unaff_RBX = (System_Text_StringBuilder_o *)0x0;
                pSVar14 = pSVar13;
                if (pSVar12 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_3b048f0
                            (pSVar12,((short)(uint)((ulong)((long)iVar6 * 0x66666667) >> 0x22) -
                                     (short)(iVar6 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                  unaff_RBX = (__this->fields)._sb;
                  iVar6 = System_DateTime__get_Second
                                    ((System_DateTime_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
                  pSVar14 = pSVar8;
                  if (unaff_RBX != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_3b048f0
                              (unaff_RBX,(short)iVar6 + (short)(iVar6 / 10) * -10 + 0x30,(MethodInfo *)0x0);
                    pSVar14 = (__this->fields)._sb;
                    if (pSVar14 != (System_Text_StringBuilder_o *)0x0) {
                      pUVar4 = (__this->fields).timePanel;
                      pSVar7 = (System_String_o *)(*(pSVar14->klass->vtable)._3_ToString.methodPtr)();
                      unaff_RBX = (System_Text_StringBuilder_o *)0x0;
                      if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(pUVar4,3,pSVar7,(MethodInfo *)0x0);
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
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  __this_00 = (System_String_o **)pSVar14;
  pSStack_38 = unaff_RBX;
  if (g_data_057ae4f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_00 = &", ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4f9 = '\x01';
  }
  uStack_40 = uStack_40 & 0xffffffff;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto label_043ed1b5;
  pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
  __this_00 = (System_String_o **)(System_Text_StringBuilder_o *)0x0;
  if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
  if (*(char *)(lVar5 + 0x11) == '\0') {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,0,0,(MethodInfo *)0x0);
    __this_00 = *(System_String_o ***)&(pSVar14->fields).m_MaxCapacity;
    if ((System_Text_StringBuilder_o *)__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetElementEnabled((UI_MultiTextLabel_o *)__this_00,1,0,(MethodInfo *)0x0);
  }
  else {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,0,1,(MethodInfo *)0x0);
    pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
    __this_00 = (System_String_o **)(System_Text_StringBuilder_o *)0x0;
    if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetElementEnabled(pUVar4,1,1,(MethodInfo *)0x0);
    __this_00 = (System_String_o **)(System_Text_StringBuilder_o *)0x0;
    if (pSVar14[1].monitor == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    System_Text_StringBuilder__Clear(pSVar14[1].monitor,(MethodInfo *)0x0);
    pSVar8 = pSVar14[1].monitor;
    if (TypeInfo_UIManager[4].fields.m_ChunkOffset == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae57e == '\0') goto label_043ecede;
label_043ece8e:
      iVar2 = TypeInfo_UIManager[4].fields.m_ChunkOffset;
    }
    else {
      if (g_data_057ae57e != '\0') goto label_043ece8e;
label_043ecede:
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae57e = '\x01';
      iVar2 = TypeInfo_UIManager[4].fields.m_ChunkOffset;
    }
    __this_00 = (System_String_o **)TypeInfo_UIManager;
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = (System_String_o **)TypeInfo_UIManager;
    }
    TypeInfo_UIManager = (System_Text_StringBuilder_o *)__this_00;
    if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    System_Text_StringBuilder__Append_3b04980
              (pSVar8,*(int32_t *)
                       (*(long *)&(((System_Text_StringBuilder_o *)((long)__this_00 + 0x90))->fields).
                                  m_MaxCapacity + 0x68),(MethodInfo *)0x0);
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    __this_00 = (System_String_o **)pSVar8;
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb8), lVar5 == 0)) goto label_043ed1b5;
    if (*(char *)(lVar5 + 0x11) == '\0') {
label_043ecf96:
      __this_00 = pSVar14[1].monitor;
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057abf5b == '\0') goto label_043ed152;
label_043ecf75:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ecf85;
label_043ed175:
        il2cpp_runtime_helper_02337ed0();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (g_data_057abf5b != '\0') goto label_043ecf75;
label_043ed152:
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057abf5b = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed175;
label_043ecf85:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto label_043ecf96;
      __this_00 = (System_String_o **)0x0;
      if (pSVar14[1].monitor == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
      System_Text_StringBuilder__Append_3b03f90(pSVar14[1].monitor,", ",(MethodInfo *)0x0);
      __this_00 = pSVar14[1].monitor;
    }
    if ((System_Text_StringBuilder_o *)__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    pSVar8 = *(System_Text_StringBuilder_o **)&(pSVar14->fields).m_MaxCapacity;
    pSVar7 = (System_String_o *)
             (*(((System_Text_StringBuilder_o *)__this_00)->klass->vtable)._3_ToString.methodPtr)();
    if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_043ed1b5;
    UI_MultiTextLabel__SetValue((UI_MultiTextLabel_o *)pSVar8,1,pSVar7,(MethodInfo *)0x0);
    __this_00 = (System_String_o **)pSVar8;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb8), lVar5 == 0)) goto label_043ed1b5;
  if (*(char *)(lVar5 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057abf5b == '\0') goto label_043ed07d;
label_043ed01b:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ed027;
label_043ed09c:
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (g_data_057abf5b != '\0') goto label_043ed01b;
label_043ed07d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf5b = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ed09c;
label_043ed027:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
      __this_00 = (System_String_o **)0x0;
      if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetElementEnabled(pUVar4,2,1,(MethodInfo *)0x0);
        pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
        __this_00 = (System_String_o **)0x0;
        if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetElementEnabled(pUVar4,3,1,(MethodInfo *)0x0);
          pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar6 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          uStack_40 = CONCAT44(iVar6,(undefined4)uStack_40);
          __this_00 = (System_String_o **)((long)&uStack_40 + 4);
          pSVar7 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(pUVar4,3,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_043ed1b5;
    }
  }
  pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
  __this_00 = (System_String_o **)0x0;
  if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,2,0,(MethodInfo *)0x0);
    pUVar4 = *(UI_MultiTextLabel_o **)&(pSVar14->fields).m_MaxCapacity;
    __this_00 = (System_String_o **)0x0;
    if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetElementEnabled(pUVar4,3,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043ed1b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  pSVar8 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar8,(MethodInfo *)0x0);
  ((System_Text_StringBuilder_o *)((long)__this_00 + 0x30))->monitor = pSVar8;
  il2cpp_runtime_helper_022b4080(&((System_Text_StringBuilder_o *)((long)__this_00 + 0x30))->monitor);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.Telemetry$$.ctor
// il2cpp: void UI_Telemetry___ctor (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x43ed1c0

void UI_Telemetry___ctor(UI_Telemetry_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (g_data_057ae4fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057ae4fc = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._sb = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


