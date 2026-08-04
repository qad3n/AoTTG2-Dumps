// Type: UI.CreateGameWeatherPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameWeatherPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameWeatherPanel.cs
// --------------------------------

// UI.CreateGameWeatherPanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_0___ctor (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x43821e0

void UI_CreateGameWeatherPanel___c__DisplayClass2_0___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_0$$<Setup>b__1
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_0___Setup_b__1 (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x4383aa0

void UI_CreateGameWeatherPanel___c__DisplayClass2_0___Setup_b__1
               (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  UI_SetNamePopup_o *__this_00;
  Settings_SetSettingsContainer_T__o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  UI_ConfirmPopup_o *__this_01;
  Settings_BaseSetSetting_c *pSVar11;
  Il2CppMethodPointer pIVar12;
  undefined8 uVar13;
  code *pcVar14;
  UnityEngine_Color_array *pUVar15;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  char cVar16;
  uint32_t uVar17;
  bool_conflict bVar18;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar19;
  System_String_o *pSVar20;
  System_String_o *pSVar21;
  long *plVar22;
  SimpleJSONFixed_JSONNode_o *pSVar23;
  Settings_BoolSetting_c *value_03;
  Settings_BaseSetSetting_o *pSVar24;
  System_String_o *in_RAX;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar25;
  System_Type_o *pSVar26;
  long lVar27;
  UnityEngine_GameObject_o *pUVar28;
  UnityEngine_Transform_o *pUVar29;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *pUVar30;
  UnityEngine_RectTransform_o *pUVar31;
  UnityEngine_UI_AspectRatioFitter_o *__this_04;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar32;
  UnityEngine_UI_ContentSizeFitter_o *__this_05;
  UnityEngine_Font_o *pUVar33;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  ulong extraout_RDX;
  undefined8 unaff_RBX;
  System_String_o **ppSVar34;
  System_String_o **ppSVar35;
  undefined8 unaff_RBP;
  ulong uVar36;
  UI_ExportPopup_o *__this_06;
  Il2CppClass *pIVar37;
  Il2CppClass *pIVar38;
  System_String_Fields __this_07;
  UI_CreateGameWeatherPanel_o *pUVar39;
  UI_CreateGameWeatherPanel_o *pUVar40;
  UI_CreditsMenu_o *__this_08;
  MethodInfo *in_R8;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  UI_ImportPopup_o *__this_09;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar45;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_e0;
  UnityEngine_Color_Fields UStack_d0;
  UnityEngine_Color_Fields UStack_c0;
  UnityEngine_Color_Fields UStack_b0;
  UnityEngine_Color_Fields UStack_a0;
  undefined1 auStack_90 [16];
  Il2CppClass *pIStack_78;
  System_String_o *pSStack_10;
  undefined1 auStack_8 [8];
  
  ppSVar34 = (System_String_o **)auStack_8;
  pIVar37 = (Il2CppClass *)(__this->fields).__4__this;
  if (pIVar37 != (Il2CppClass *)0x0) {
    ppSVar34 = (System_String_o **)register0x00000020;
    pSVar21 = (__this->fields).button;
    pIVar38 = pIVar37;
UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick:
    *(undefined8 *)((long)ppSVar34 + -8) = unaff_RBP;
    *(undefined8 *)((long)ppSVar34 + -0x10) = unaff_R15;
    *(undefined8 *)((long)ppSVar34 + -0x18) = unaff_R14;
    *(undefined8 *)((long)ppSVar34 + -0x20) = unaff_R13;
    *(undefined8 *)((long)ppSVar34 + -0x28) = unaff_R12;
    *(undefined8 *)((long)ppSVar34 + -0x30) = unaff_RBX;
    *(System_String_o **)((long)ppSVar34 + -0x38) = in_RAX;
    if (g_data_057ae232 == '\0') {
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x438298a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382996;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829a2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanEditSelectedSet);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829ae;
      il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829ba;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829c6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829d2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__0);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829de;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__1);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829ea;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__2);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43829f6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__3);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a02;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__4);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__5);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a1a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a26;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a4a;
      il2cpp_runtime_helper_023445d0(&"ExportSchedule");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a56;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a62;
      il2cpp_runtime_helper_023445d0(&"Copy");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a6e;
      il2cpp_runtime_helper_023445d0(&"ImportSchedule");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a7a;
      il2cpp_runtime_helper_023445d0(&"Delete");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a86;
      il2cpp_runtime_helper_023445d0(&"Rename");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a92;
      il2cpp_runtime_helper_023445d0(&"DeleteWarning");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382a9e;
      il2cpp_runtime_helper_023445d0(&"Import");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382aaa;
      il2cpp_runtime_helper_023445d0(&"Preset");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382ab6;
      il2cpp_runtime_helper_023445d0(&"");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382ac2;
      il2cpp_runtime_helper_023445d0(&"Export");
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382ace;
      il2cpp_runtime_helper_023445d0(&"New set");
      g_data_057ae232 = '\x01';
    }
    *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382ae4;
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
    *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382af1;
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Il2CppObject *)0x0) {
      __this_02[1].klass = pIVar38;
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382b0a;
      il2cpp_runtime_helper_022b4080(__this_02 + 1,pIVar38);
      __this_02[1].monitor = pSVar21;
      *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382b20;
      il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
      lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382b4e;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar7 != 0) {
        __this_00 = *(UI_SetNamePopup_o **)(lVar7 + 0x88);
        pSVar21 = __this_02[1].monitor;
        *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382b7a;
        uVar17 = _PrivateImplementationDetails___ComputeStringHash(pSVar21,(MethodInfo *)0x0);
        if (uVar17 < 0x658f3665) {
          if (uVar17 < 0x573e0af5) {
            if (uVar17 == 0x3302295a) {
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382e5b;
              bVar18 = System_String__op_Equality(pSVar21,"ExportSchedule",(MethodInfo *)0x0);
              if ((char)bVar18 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382e75;
                il2cpp_runtime_helper_02337ed0();
              }
              lVar7 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (((lVar7 != 0) && (lVar27 != 0)) &&
                 (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
                 pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                __this_06 = *(UI_ExportPopup_o **)(lVar7 + 0x68);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382eb7;
                pSVar24 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar24 != (Settings_BaseSetSetting_o *)0x0) {
                  bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
                  if (((pSVar24->klass->_2).naturalAligment < bVar5) ||
                     ((pSVar24->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet))
                  goto label_0438324f;
                  pSVar10 = pSVar24[3].fields.Preset;
                  if ((pSVar10 != (Settings_BoolSetting_o *)0x0) && (__this_06 != (UI_ExportPopup_o *)0x0)) {
                    value_03 = pSVar10[1].klass;
                    goto label_04383235;
                  }
                }
              }
            }
            else {
              if (uVar17 != 0x573e0af4) {
                return;
              }
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382bba;
              bVar18 = System_String__op_Equality(pSVar21,"Import",(MethodInfo *)0x0);
              if ((char)bVar18 == '\0') {
                return;
              }
              if ((lVar27 != 0) &&
                 (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
                 pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382be8;
                bVar18 = Settings_SetSettingsContainer_object___CanEditSelectedSet(pSVar8,MethodInfo_Boolean_CanEditSelectedSet);
                if ((char)bVar18 == '\0') {
                  return;
                }
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382c02;
                  il2cpp_runtime_helper_02337ed0();
                }
                lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar27 != 0) {
                  __this_09 = *(UI_ImportPopup_o **)(lVar27 + 0x70);
                  *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382c2d;
                  pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  goto label_04382e03;
                }
              }
            }
          }
          else if (uVar17 == 0x5797ea6a) {
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382fc4;
            bVar18 = System_String__op_Equality(pSVar21,"Delete",(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            if ((lVar27 != 0) &&
               (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
               pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382ff2;
              bVar18 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet(pSVar8,MethodInfo_Boolean_CanDeleteSelectedSet);
              if ((char)bVar18 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x438300c;
                il2cpp_runtime_helper_02337ed0();
              }
              lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar27 != 0) {
                __this_01 = *(UI_ConfirmPopup_o **)(lVar27 + 0x38);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4383039;
                pSVar21 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x438304b;
                pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4383065;
                UnityEngine_Events_UnityAction___ctor();
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4383070;
                pSVar20 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
                if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
                  UI_ConfirmPopup__Show(__this_01,pSVar21,pUVar19,pSVar20,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            if (uVar17 != 0x658f3664) {
              return;
            }
            ppSVar35 = &"Copy";
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382d64;
            bVar18 = System_String__op_Equality(pSVar21,"Copy",(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382d7b;
            pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382f4d:
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382f5d;
            UnityEngine_Events_UnityAction___ctor();
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382f6f;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar21 = *ppSVar35;
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382f7a;
            pSVar20 = UI_UIManager__GetLocaleCommon(pSVar21,(MethodInfo *)0x0);
            pSVar21 = "New set";
joined_r0x04382d28:
            if (__this_00 != (UI_SetNamePopup_o *)0x0) {
              UI_SetNamePopup__Show
                        (__this_00,pSVar21,pUVar19,pSVar20,(System_String_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if (uVar17 < 0xc80631f4) {
          if (uVar17 == 0x990de47d) {
            ppSVar35 = &"Create";
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382f2c;
            bVar18 = System_String__op_Equality(pSVar21,"Create",(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382f43;
            pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            goto label_04382f4d;
          }
          if (uVar17 != 0xc80631f3) {
            return;
          }
          *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382c72;
          bVar18 = System_String__op_Equality(pSVar21,"Rename",(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          if ((lVar27 != 0) &&
             (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
             pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382ca0;
            bVar18 = Settings_SetSettingsContainer_object___CanEditSelectedSet(pSVar8,MethodInfo_Boolean_CanEditSelectedSet);
            if ((char)bVar18 == '\0') {
              return;
            }
            pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20);
            if (pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0) {
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382cc5;
              pSVar24 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
              if ((pSVar24 != (Settings_BaseSetSetting_o *)0x0) &&
                 (pSVar9 = (pSVar24->fields).Name, pSVar9 != (Settings_StringSetting_o *)0x0)) {
                pSVar21 = (pSVar9->fields)._value;
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382cee;
                pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382d08;
                UnityEngine_Events_UnityAction___ctor();
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382d1a;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382d25;
                pSVar20 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
                goto joined_r0x04382d28;
              }
            }
          }
        }
        else if (uVar17 == 0xe86349d3) {
          *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43830af;
          bVar18 = System_String__op_Equality(pSVar21,"Export",(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          if ((lVar27 != 0) &&
             (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
             pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43830dd;
            pSVar24 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
            if (pSVar24 != (Settings_BaseSetSetting_o *)0x0) {
              bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
              if (((pSVar24->klass->_2).naturalAligment < bVar5) ||
                 ((pSVar24->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
              pSVar11 = pSVar24->klass;
              bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
              if (((pSVar11->_2).naturalAligment < bVar5) ||
                 ((pSVar11->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
              pIVar12 = (pSVar11->vtable)._5_SerializeToJsonObject.methodPtr;
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4383150;
              plVar22 = (long *)(*pIVar12)(pSVar24);
              if (plVar22 == (long *)0x0) goto label_0438324a;
              uVar13 = *(undefined8 *)(*plVar22 + 0x300);
              pcVar14 = *(code **)(*plVar22 + 0x2f8);
              *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4383179;
              cVar16 = (*pcVar14)(plVar22,"Preset",uVar13);
              if (cVar16 == '\0') {
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043831f5;
label_0438318a:
                lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              else {
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43831c6;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43831cf;
                pSVar23 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
                uVar13 = *(undefined8 *)(*plVar22 + 0x1c0);
                pcVar14 = *(code **)(*plVar22 + 0x1b8);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43831e8;
                (*pcVar14)(plVar22,"Preset",pSVar23,uVar13);
                if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438318a;
label_043831f5:
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x43831fa;
                il2cpp_runtime_helper_02337ed0();
                lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              if (lVar27 != 0) {
                __this_06 = *(UI_ExportPopup_o **)(lVar27 + 0x68);
                uVar13 = *(undefined8 *)(*plVar22 + 800);
                pcVar14 = *(code **)(*plVar22 + 0x318);
                *(undefined8 *)((long)ppSVar34 + -0x40) = 0x438322a;
                value_03 = (Settings_BoolSetting_c *)(*pcVar14)(plVar22,4,uVar13);
                if (__this_06 != (UI_ExportPopup_o *)0x0) {
label_04383235:
                  UI_ExportPopup__Show(__this_06,(System_String_o *)value_03,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          if (uVar17 != 0xe9d2f4f9) {
            return;
          }
          *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382db4;
          bVar18 = System_String__op_Equality(pSVar21,"ImportSchedule",(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382dce;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar27 != 0) {
            __this_09 = *(UI_ImportPopup_o **)(lVar27 + 0x70);
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382df9;
            pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382e03:
            *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4382e13;
            UnityEngine_Events_UnityAction___ctor();
            if (__this_09 != (UI_ImportPopup_o *)0x0) {
              UI_ImportPopup__Show(__this_09,pUVar19,1,"",(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
label_0438324a:
    *(undefined8 *)((long)ppSVar34 + -0x40) = 0x438324f;
    pSVar24 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_0438324f:
    *(undefined8 *)((long)ppSVar34 + -0x40) = 0x4383257;
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor((Il2CppObject *)pSVar24,(MethodInfo *)0x0);
    return;
  }
  pSStack_10 = (System_String_o *)&g_data_04383abc;
  in_RAX = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pIVar38 = (Il2CppClass *)(pIVar37->_1).namespaze;
  pSStack_10 = in_RAX;
  if (pIVar38 != (Il2CppClass *)0x0) {
    pSVar21 = (System_String_o *)(pIVar37->_1).name;
    goto UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae234 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Schedule");
    g_data_057ae234 = '\x01';
  }
  pSVar21 = (System_String_o *)(pIVar38->_1).name;
  pIVar38 = (Il2CppClass *)(pIVar38->_1).namespaze;
  in_RAX = System_String__Concat_3ae5ba0(pSVar21,"Schedule",(MethodInfo *)0x0);
  if (pIVar38 != (Il2CppClass *)0x0) {
    ppSVar34 = &pSStack_10;
    pSVar21 = in_RAX;
    goto UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = pSVar21->fields;
  if (__this_07 != (System_String_Fields)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_07,(System_String_o *)pSVar21[1].klass,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar39 = *(UI_CreateGameWeatherPanel_o **)((long)__this_07 + 0x10);
  if (pUVar39 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar39,*(System_String_o **)((long)__this_07 + 0x18),method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar40 = (UI_CreateGameWeatherPanel_o *)(pUVar39->fields).m_CachedPtr;
  if (pUVar40 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar40,(System_String_o *)(pUVar39->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar39 = (UI_CreateGameWeatherPanel_o *)(pUVar40->fields).m_CachedPtr;
  if (pUVar39 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar39,(System_String_o *)(pUVar40->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar40 = (UI_CreateGameWeatherPanel_o *)(pUVar39->fields).m_CachedPtr;
  if (pUVar40 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar40,(System_String_o *)(pUVar39->fields).m_CancellationTokenSource,method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (UI_CreditsMenu_o *)(pUVar40->fields).m_CachedPtr;
  if (__this_08 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_08,
               (System_String_o *)(pUVar40->fields).m_CancellationTokenSource,method_06);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_78 = pIVar38;
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_a0.r = 0.0;
  UStack_a0.g = 0.0;
  UStack_a0.b = 0.0;
  UStack_a0.a = 0.0;
  UStack_b0.r = 0.0;
  UStack_b0.g = 0.0;
  UStack_b0.b = 0.0;
  UStack_b0.a = 0.0;
  UStack_c0.r = 0.0;
  UStack_c0.g = 0.0;
  UStack_c0.b = 0.0;
  UStack_c0.a = 0.0;
  UStack_d0.r = 0.0;
  UStack_d0.g = 0.0;
  UStack_d0.b = 0.0;
  UStack_d0.a = 0.0;
  UStack_e0.r = 0.0;
  UStack_e0.g = 0.0;
  UStack_e0.b = 0.0;
  UStack_e0.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_08,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar21 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar21;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar21);
  pSVar25 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar26 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar25 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar26 == (System_Type_o *)0x0) || (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 != 0)) {
    if ((int)pSVar25->max_length != 0) {
      pSVar25->m_Items[0] = pSVar26;
      il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
      pSVar26 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar26 != (System_Type_o *)0x0) && (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar25->max_length) {
        pSVar25->m_Items[1] = pSVar26;
        il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
        pSVar26 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar26 != (System_Type_o *)0x0) && (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar25->max_length) {
          pSVar25->m_Items[2] = pSVar26;
          il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 2,pSVar26);
          pUVar28 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar28,"Background",pSVar25,(MethodInfo *)0x0);
          if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
            pUVar29 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
            if (pUVar29 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar29,parent,0,(MethodInfo *)0x0);
              __this_03 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_Image_GetComponent_Image);
              pUVar30 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_03,pUVar30,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_03,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_03,1,(MethodInfo *)0x0);
                pUVar31 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar31,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar31,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar31,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_04 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_04 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_04,4,(MethodInfo *)0x0);
                    pUVar30 = *(UnityEngine_Sprite_o **)&(__this_03->fields).m_ShouldRecalculate;
                    if (pUVar30 != (UnityEngine_Sprite_o *)0x0) {
                      UVar45 = UnityEngine_Sprite__get_rect(pUVar30,(MethodInfo *)0x0);
                      auStack_90._8_4_ = in_XMM1_Dc;
                      auStack_90._0_8_ = UVar45.fields._8_8_;
                      auStack_90._12_4_ = in_XMM1_Dd;
                      pUVar30 = *(UnityEngine_Sprite_o **)&(__this_03->fields).m_ShouldRecalculate;
                      if (pUVar30 != (UnityEngine_Sprite_o *)0x0) {
                        UVar45 = UnityEngine_Sprite__get_rect(pUVar30,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_04,(float)auStack_90._0_4_ / UVar45.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar29 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar21 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar28 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar29,style,pSVar21,0.0,0.0,pUVar19,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar28,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)pUVar19
                                  );
                        pSVar25 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar26 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar25 != (System_Type_array *)0x0) {
                          if ((pSVar26 != (System_Type_o *)0x0) &&
                             (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0)) goto label_043847e7;
                          if ((int)pSVar25->max_length != 0) {
                            pSVar25->m_Items[0] = pSVar26;
                            il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
                            pSVar26 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar26 != (System_Type_o *)0x0) &&
                               (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar25->max_length) {
                              pSVar25->m_Items[1] = pSVar26;
                              il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
                              pSVar26 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar26 != (System_Type_o *)0x0) &&
                                 (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar25->max_length) {
                                pSVar25->m_Items[2] = pSVar26;
                                il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 2,pSVar26);
                                pUVar28 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar28,"CreditsContent",pSVar25,(MethodInfo *)0x0);
                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar31 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_08->fields)._contentTransform;
                                  (__this_08->fields)._contentTransform = pUVar31;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar31);
                                  pUVar32 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_08->fields)._layoutGroup;
                                  (__this_08->fields)._layoutGroup = pUVar32;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar32);
                                  __this_05 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar28,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar31 = (__this_08->fields)._contentTransform;
                                  pUVar29 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar31,pUVar29,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar31 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar31,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_05 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_05,2,(MethodInfo *)0x0);
                                                    pUVar33 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_08->fields)._categoryFont = pUVar33;
                                                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._categoryFont,
                                                                       pUVar33);
                                                    pUVar30 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_08->fields)._brushSprite = pUVar30;
                                                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._brushSprite,
                                                                       pUVar30);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                       ("#2065a0",
                                                                        (UnityEngine_Color_o *)&UStack_a0,
                                                                        (MethodInfo *)0x0);
                                                    lVar27 = MethodInfo_Void_Add;
                                                    if ((char)bVar18 == '\0') {
                                                      fVar41 = 1.0;
                                                      fVar42 = 1.0;
                                                      fVar43 = fVar41;
                                                      fVar44 = fVar42;
                                                    }
                                                    else {
                                                      fVar41 = UStack_a0.r;
                                                      fVar42 = UStack_a0.g;
                                                      fVar43 = UStack_a0.b;
                                                      fVar44 = UStack_a0.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                      if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                        uVar6 = *(uint *)&method_00->name;
                                                        if (uVar6 < (uint)pUVar15->max_length) {
                                                          *(uint *)&method_00->name = uVar6 + 1;
                                                          pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                          (pUVar4->fields).r = fVar41;
                                                          (pUVar4->fields).g = fVar42;
                                                          (pUVar4->fields).b = fVar43;
                                                          (pUVar4->fields).a = fVar44;
                                                        }
                                                        else {
                                                          item.fields.g = fVar42;
                                                          item.fields.r = fVar41;
                                                          item.fields.a = fVar44;
                                                          item.fields.b = fVar43;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#ba661f",
                                                                           (UnityEngine_Color_o *)&UStack_b0,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar41 = 1.0;
                                                         fVar42 = 1.0;
                                                         fVar43 = fVar41;
                                                         fVar44 = fVar42;
                                                       }
                                                       else {
                                                         fVar41 = UStack_b0.r;
                                                         fVar42 = UStack_b0.g;
                                                         fVar43 = UStack_b0.b;
                                                         fVar44 = UStack_b0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar41;
                                                           (pUVar4->fields).g = fVar42;
                                                           (pUVar4->fields).b = fVar43;
                                                           (pUVar4->fields).a = fVar44;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar42;
                                                           item_00.fields.r = fVar41;
                                                           item_00.fields.a = fVar44;
                                                           item_00.fields.b = fVar43;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#29888a",
                                                                           (UnityEngine_Color_o *)&UStack_c0,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar41 = 1.0;
                                                         fVar42 = 1.0;
                                                         fVar43 = fVar41;
                                                         fVar44 = fVar42;
                                                       }
                                                       else {
                                                         fVar41 = UStack_c0.r;
                                                         fVar42 = UStack_c0.g;
                                                         fVar43 = UStack_c0.b;
                                                         fVar44 = UStack_c0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar41;
                                                           (pUVar4->fields).g = fVar42;
                                                           (pUVar4->fields).b = fVar43;
                                                           (pUVar4->fields).a = fVar44;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar42;
                                                           item_01.fields.r = fVar41;
                                                           item_01.fields.a = fVar44;
                                                           item_01.fields.b = fVar43;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#813d52",
                                                                           (UnityEngine_Color_o *)&UStack_d0,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar41 = 1.0;
                                                         fVar42 = 1.0;
                                                         fVar43 = fVar41;
                                                         fVar44 = fVar42;
                                                       }
                                                       else {
                                                         fVar41 = UStack_d0.r;
                                                         fVar42 = UStack_d0.g;
                                                         fVar43 = UStack_d0.b;
                                                         fVar44 = UStack_d0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar41;
                                                           (pUVar4->fields).g = fVar42;
                                                           (pUVar4->fields).b = fVar43;
                                                           (pUVar4->fields).a = fVar44;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar42;
                                                           item_02.fields.r = fVar41;
                                                           item_02.fields.a = fVar44;
                                                           item_02.fields.b = fVar43;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#614c90",
                                                                           (UnityEngine_Color_o *)&UStack_e0,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar41 = 1.0;
                                                         fVar42 = 1.0;
                                                         fVar43 = fVar41;
                                                         fVar44 = fVar42;
                                                       }
                                                       else {
                                                         fVar41 = UStack_e0.r;
                                                         fVar42 = UStack_e0.g;
                                                         fVar43 = UStack_e0.b;
                                                         fVar44 = UStack_e0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar41;
                                                           (pUVar4->fields).g = fVar42;
                                                           (pUVar4->fields).b = fVar43;
                                                           (pUVar4->fields).a = fVar44;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar42;
                                                           item_03.fields.r = fVar41;
                                                           item_03.fields.a = fVar44;
                                                           item_03.fields.b = fVar43;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_08->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_08->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_08,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_08,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar28 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar36 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar31 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar31 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar41 = 1.0;
  switch(uVar36 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar42 = 0.0;
joined_r0x043848db:
      if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar41 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar42 = 0.5;
    fVar41 = 1.0;
    break;
  case 2:
    fVar42 = 1.0;
    fVar41 = 1.0;
    break;
  case 3:
    fVar42 = 0.0;
    fVar41 = 0.5;
    break;
  case 4:
    fVar42 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar42 = 1.0;
joined_r0x043848b3:
    fVar41 = 0.5;
    break;
  case 6:
    fVar42 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar42 = 0.5;
joined_r0x043848cc:
    fVar41 = 0.0;
    break;
  case 8:
    fVar42 = 1.0;
    fVar41 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar31 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar41;
  value.fields.x = fVar42;
  UnityEngine_RectTransform__set_anchorMax(pUVar31,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar41;
  value_01.fields.x = fVar42;
  UnityEngine_RectTransform__set_anchorMin(pUVar31,value_01,(MethodInfo *)0x0);
  fVar41 = 0.0;
  fVar42 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar41 = 0.5;
    fVar42 = 1.0;
    break;
  case 2:
    fVar41 = 1.0;
    fVar42 = 1.0;
    break;
  case 3:
    fVar41 = 0.0;
    fVar42 = 0.5;
    break;
  case 4:
    fVar41 = 0.5;
    fVar42 = 0.5;
    break;
  case 5:
    fVar41 = 1.0;
    fVar42 = 0.5;
    break;
  default:
    fVar41 = 0.0;
    fVar42 = 0.0;
    break;
  case 7:
    fVar41 = 0.5;
    fVar42 = 0.0;
    break;
  case 8:
    fVar41 = 1.0;
    fVar42 = 0.0;
  }
  value_00.fields.y = fVar42;
  value_00.fields.x = fVar41;
  UnityEngine_RectTransform__set_pivot(pUVar31,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar31,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_1$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_1___ctor (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o* __this, const MethodInfo* method);
// 0x4382550

void UI_CreateGameWeatherPanel___c__DisplayClass2_1___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_1$$<Setup>b__2
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_1___Setup_b__2 (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o* __this, const MethodInfo* method);
// 0x4383ac0

void UI_CreateGameWeatherPanel___c__DisplayClass2_1___Setup_b__2
               (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  UI_SetNamePopup_o *__this_00;
  Settings_SetSettingsContainer_T__o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  UI_ConfirmPopup_o *__this_01;
  Settings_BaseSetSetting_c *pSVar11;
  Il2CppMethodPointer pIVar12;
  undefined8 uVar13;
  code *pcVar14;
  UnityEngine_Color_array *pUVar15;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  char cVar16;
  uint32_t uVar17;
  bool_conflict bVar18;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar19;
  System_String_o *pSVar20;
  System_String_o *pSVar21;
  long *plVar22;
  SimpleJSONFixed_JSONNode_o *pSVar23;
  Settings_BoolSetting_c *value_03;
  Settings_BaseSetSetting_o *pSVar24;
  System_String_o *in_RAX;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar25;
  System_Type_o *pSVar26;
  long lVar27;
  UnityEngine_GameObject_o *pUVar28;
  UnityEngine_Transform_o *pUVar29;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *pUVar30;
  UnityEngine_RectTransform_o *pUVar31;
  UnityEngine_UI_AspectRatioFitter_o *__this_04;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar32;
  UnityEngine_UI_ContentSizeFitter_o *__this_05;
  UnityEngine_Font_o *pUVar33;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  ulong extraout_RDX;
  undefined8 unaff_RBX;
  System_String_o **ppSVar34;
  undefined8 unaff_RBP;
  ulong uVar35;
  UI_ExportPopup_o *__this_06;
  Il2CppClass *pIVar36;
  System_String_Fields __this_07;
  UI_CreateGameWeatherPanel_o *pUVar37;
  UI_CreateGameWeatherPanel_o *pUVar38;
  UI_CreditsMenu_o *__this_08;
  MethodInfo *in_R8;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  UI_ImportPopup_o *__this_09;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar43;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_d8;
  UnityEngine_Color_Fields UStack_c8;
  UnityEngine_Color_Fields UStack_b8;
  UnityEngine_Color_Fields UStack_a8;
  UnityEngine_Color_Fields UStack_98;
  undefined1 auStack_88 [16];
  Il2CppClass *pIStack_70;
  undefined1 auStack_8 [8];
  
  pIVar36 = (Il2CppClass *)(__this->fields).__4__this;
  if (pIVar36 != (Il2CppClass *)0x0) {
    pSVar21 = (__this->fields).button;
UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(System_String_o **)((long)register0x00000020 + -0x38) = in_RAX;
    if (g_data_057ae232 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x438298a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382996;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829a2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanEditSelectedSet);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829ae;
      il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829ba;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829c6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829d2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829de;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__1);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829ea;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__2);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43829f6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__3);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a02;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__4);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__5);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a1a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a26;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a4a;
      il2cpp_runtime_helper_023445d0(&"ExportSchedule");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a56;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a62;
      il2cpp_runtime_helper_023445d0(&"Copy");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a6e;
      il2cpp_runtime_helper_023445d0(&"ImportSchedule");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a7a;
      il2cpp_runtime_helper_023445d0(&"Delete");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a86;
      il2cpp_runtime_helper_023445d0(&"Rename");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a92;
      il2cpp_runtime_helper_023445d0(&"DeleteWarning");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382a9e;
      il2cpp_runtime_helper_023445d0(&"Import");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382aaa;
      il2cpp_runtime_helper_023445d0(&"Preset");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382ab6;
      il2cpp_runtime_helper_023445d0(&"");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382ac2;
      il2cpp_runtime_helper_023445d0(&"Export");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382ace;
      il2cpp_runtime_helper_023445d0(&"New set");
      g_data_057ae232 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382ae4;
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382af1;
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Il2CppObject *)0x0) {
      __this_02[1].klass = pIVar36;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382b0a;
      il2cpp_runtime_helper_022b4080(__this_02 + 1,pIVar36);
      __this_02[1].monitor = pSVar21;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382b20;
      il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
      lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382b4e;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar7 != 0) {
        __this_00 = *(UI_SetNamePopup_o **)(lVar7 + 0x88);
        pSVar21 = __this_02[1].monitor;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382b7a;
        uVar17 = _PrivateImplementationDetails___ComputeStringHash(pSVar21,(MethodInfo *)0x0);
        if (uVar17 < 0x658f3665) {
          if (uVar17 < 0x573e0af5) {
            if (uVar17 == 0x3302295a) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382e5b;
              bVar18 = System_String__op_Equality(pSVar21,"ExportSchedule",(MethodInfo *)0x0);
              if ((char)bVar18 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382e75;
                il2cpp_runtime_helper_02337ed0();
              }
              lVar7 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (((lVar7 != 0) && (lVar27 != 0)) &&
                 (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
                 pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                __this_06 = *(UI_ExportPopup_o **)(lVar7 + 0x68);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382eb7;
                pSVar24 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar24 != (Settings_BaseSetSetting_o *)0x0) {
                  bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
                  if (((pSVar24->klass->_2).naturalAligment < bVar5) ||
                     ((pSVar24->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet))
                  goto label_0438324f;
                  pSVar10 = pSVar24[3].fields.Preset;
                  if ((pSVar10 != (Settings_BoolSetting_o *)0x0) && (__this_06 != (UI_ExportPopup_o *)0x0)) {
                    value_03 = pSVar10[1].klass;
                    goto label_04383235;
                  }
                }
              }
            }
            else {
              if (uVar17 != 0x573e0af4) {
                return;
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382bba;
              bVar18 = System_String__op_Equality(pSVar21,"Import",(MethodInfo *)0x0);
              if ((char)bVar18 == '\0') {
                return;
              }
              if ((lVar27 != 0) &&
                 (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
                 pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382be8;
                bVar18 = Settings_SetSettingsContainer_object___CanEditSelectedSet(pSVar8,MethodInfo_Boolean_CanEditSelectedSet);
                if ((char)bVar18 == '\0') {
                  return;
                }
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382c02;
                  il2cpp_runtime_helper_02337ed0();
                }
                lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar27 != 0) {
                  __this_09 = *(UI_ImportPopup_o **)(lVar27 + 0x70);
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382c2d;
                  pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  goto label_04382e03;
                }
              }
            }
          }
          else if (uVar17 == 0x5797ea6a) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382fc4;
            bVar18 = System_String__op_Equality(pSVar21,"Delete",(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            if ((lVar27 != 0) &&
               (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
               pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382ff2;
              bVar18 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet(pSVar8,MethodInfo_Boolean_CanDeleteSelectedSet);
              if ((char)bVar18 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x438300c;
                il2cpp_runtime_helper_02337ed0();
              }
              lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar27 != 0) {
                __this_01 = *(UI_ConfirmPopup_o **)(lVar27 + 0x38);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4383039;
                pSVar21 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x438304b;
                pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4383065;
                UnityEngine_Events_UnityAction___ctor();
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4383070;
                pSVar20 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
                if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
                  UI_ConfirmPopup__Show(__this_01,pSVar21,pUVar19,pSVar20,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            if (uVar17 != 0x658f3664) {
              return;
            }
            ppSVar34 = &"Copy";
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382d64;
            bVar18 = System_String__op_Equality(pSVar21,"Copy",(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382d7b;
            pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382f4d:
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382f5d;
            UnityEngine_Events_UnityAction___ctor();
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382f6f;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar21 = *ppSVar34;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382f7a;
            pSVar20 = UI_UIManager__GetLocaleCommon(pSVar21,(MethodInfo *)0x0);
            pSVar21 = "New set";
joined_r0x04382d28:
            if (__this_00 != (UI_SetNamePopup_o *)0x0) {
              UI_SetNamePopup__Show
                        (__this_00,pSVar21,pUVar19,pSVar20,(System_String_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if (uVar17 < 0xc80631f4) {
          if (uVar17 == 0x990de47d) {
            ppSVar34 = &"Create";
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382f2c;
            bVar18 = System_String__op_Equality(pSVar21,"Create",(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382f43;
            pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            goto label_04382f4d;
          }
          if (uVar17 != 0xc80631f3) {
            return;
          }
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382c72;
          bVar18 = System_String__op_Equality(pSVar21,"Rename",(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          if ((lVar27 != 0) &&
             (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
             pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382ca0;
            bVar18 = Settings_SetSettingsContainer_object___CanEditSelectedSet(pSVar8,MethodInfo_Boolean_CanEditSelectedSet);
            if ((char)bVar18 == '\0') {
              return;
            }
            pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20);
            if (pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382cc5;
              pSVar24 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
              if ((pSVar24 != (Settings_BaseSetSetting_o *)0x0) &&
                 (pSVar9 = (pSVar24->fields).Name, pSVar9 != (Settings_StringSetting_o *)0x0)) {
                pSVar21 = (pSVar9->fields)._value;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382cee;
                pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382d08;
                UnityEngine_Events_UnityAction___ctor();
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382d1a;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382d25;
                pSVar20 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
                goto joined_r0x04382d28;
              }
            }
          }
        }
        else if (uVar17 == 0xe86349d3) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43830af;
          bVar18 = System_String__op_Equality(pSVar21,"Export",(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          if ((lVar27 != 0) &&
             (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar27 + 0x20),
             pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43830dd;
            pSVar24 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
            if (pSVar24 != (Settings_BaseSetSetting_o *)0x0) {
              bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
              if (((pSVar24->klass->_2).naturalAligment < bVar5) ||
                 ((pSVar24->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
              pSVar11 = pSVar24->klass;
              bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
              if (((pSVar11->_2).naturalAligment < bVar5) ||
                 ((pSVar11->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
              pIVar12 = (pSVar11->vtable)._5_SerializeToJsonObject.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4383150;
              plVar22 = (long *)(*pIVar12)(pSVar24);
              if (plVar22 == (long *)0x0) goto label_0438324a;
              uVar13 = *(undefined8 *)(*plVar22 + 0x300);
              pcVar14 = *(code **)(*plVar22 + 0x2f8);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4383179;
              cVar16 = (*pcVar14)(plVar22,"Preset",uVar13);
              if (cVar16 == '\0') {
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043831f5;
label_0438318a:
                lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              else {
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43831c6;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43831cf;
                pSVar23 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
                uVar13 = *(undefined8 *)(*plVar22 + 0x1c0);
                pcVar14 = *(code **)(*plVar22 + 0x1b8);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43831e8;
                (*pcVar14)(plVar22,"Preset",pSVar23,uVar13);
                if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438318a;
label_043831f5:
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43831fa;
                il2cpp_runtime_helper_02337ed0();
                lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              if (lVar27 != 0) {
                __this_06 = *(UI_ExportPopup_o **)(lVar27 + 0x68);
                uVar13 = *(undefined8 *)(*plVar22 + 800);
                pcVar14 = *(code **)(*plVar22 + 0x318);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x438322a;
                value_03 = (Settings_BoolSetting_c *)(*pcVar14)(plVar22,4,uVar13);
                if (__this_06 != (UI_ExportPopup_o *)0x0) {
label_04383235:
                  UI_ExportPopup__Show(__this_06,(System_String_o *)value_03,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          if (uVar17 != 0xe9d2f4f9) {
            return;
          }
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382db4;
          bVar18 = System_String__op_Equality(pSVar21,"ImportSchedule",(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382dce;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar27 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar27 != 0) {
            __this_09 = *(UI_ImportPopup_o **)(lVar27 + 0x70);
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382df9;
            pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382e03:
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4382e13;
            UnityEngine_Events_UnityAction___ctor();
            if (__this_09 != (UI_ImportPopup_o *)0x0) {
              UI_ImportPopup__Show(__this_09,pUVar19,1,"",(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
label_0438324a:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x438324f;
    pSVar24 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_0438324f:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4383257;
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor((Il2CppObject *)pSVar24,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae234 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Schedule");
    g_data_057ae234 = '\x01';
  }
  pSVar21 = (System_String_o *)(pIVar36->_1).name;
  pIVar36 = (Il2CppClass *)(pIVar36->_1).namespaze;
  in_RAX = System_String__Concat_3ae5ba0(pSVar21,"Schedule",(MethodInfo *)0x0);
  if (pIVar36 != (Il2CppClass *)0x0) {
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    pSVar21 = in_RAX;
    goto UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = pSVar21->fields;
  if (__this_07 != (System_String_Fields)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_07,(System_String_o *)pSVar21[1].klass,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar37 = *(UI_CreateGameWeatherPanel_o **)((long)__this_07 + 0x10);
  if (pUVar37 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar37,*(System_String_o **)((long)__this_07 + 0x18),method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar38 = (UI_CreateGameWeatherPanel_o *)(pUVar37->fields).m_CachedPtr;
  if (pUVar38 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar38,(System_String_o *)(pUVar37->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar37 = (UI_CreateGameWeatherPanel_o *)(pUVar38->fields).m_CachedPtr;
  if (pUVar37 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar37,(System_String_o *)(pUVar38->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar38 = (UI_CreateGameWeatherPanel_o *)(pUVar37->fields).m_CachedPtr;
  if (pUVar38 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar38,(System_String_o *)(pUVar37->fields).m_CancellationTokenSource,method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (UI_CreditsMenu_o *)(pUVar38->fields).m_CachedPtr;
  if (__this_08 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_08,
               (System_String_o *)(pUVar38->fields).m_CancellationTokenSource,method_06);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_70 = pIVar36;
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_98.r = 0.0;
  UStack_98.g = 0.0;
  UStack_98.b = 0.0;
  UStack_98.a = 0.0;
  UStack_a8.r = 0.0;
  UStack_a8.g = 0.0;
  UStack_a8.b = 0.0;
  UStack_a8.a = 0.0;
  UStack_b8.r = 0.0;
  UStack_b8.g = 0.0;
  UStack_b8.b = 0.0;
  UStack_b8.a = 0.0;
  UStack_c8.r = 0.0;
  UStack_c8.g = 0.0;
  UStack_c8.b = 0.0;
  UStack_c8.a = 0.0;
  UStack_d8.r = 0.0;
  UStack_d8.g = 0.0;
  UStack_d8.b = 0.0;
  UStack_d8.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_08,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar21 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar21;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar21);
  pSVar25 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar26 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar25 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar26 == (System_Type_o *)0x0) || (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 != 0)) {
    if ((int)pSVar25->max_length != 0) {
      pSVar25->m_Items[0] = pSVar26;
      il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
      pSVar26 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar26 != (System_Type_o *)0x0) && (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar25->max_length) {
        pSVar25->m_Items[1] = pSVar26;
        il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
        pSVar26 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar26 != (System_Type_o *)0x0) && (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar25->max_length) {
          pSVar25->m_Items[2] = pSVar26;
          il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 2,pSVar26);
          pUVar28 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar28,"Background",pSVar25,(MethodInfo *)0x0);
          if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
            pUVar29 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
            if (pUVar29 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar29,parent,0,(MethodInfo *)0x0);
              __this_03 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_Image_GetComponent_Image);
              pUVar30 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_03,pUVar30,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_03,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_03,1,(MethodInfo *)0x0);
                pUVar31 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar31,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar31,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar31,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_04 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_04 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_04,4,(MethodInfo *)0x0);
                    pUVar30 = *(UnityEngine_Sprite_o **)&(__this_03->fields).m_ShouldRecalculate;
                    if (pUVar30 != (UnityEngine_Sprite_o *)0x0) {
                      UVar43 = UnityEngine_Sprite__get_rect(pUVar30,(MethodInfo *)0x0);
                      auStack_88._8_4_ = in_XMM1_Dc;
                      auStack_88._0_8_ = UVar43.fields._8_8_;
                      auStack_88._12_4_ = in_XMM1_Dd;
                      pUVar30 = *(UnityEngine_Sprite_o **)&(__this_03->fields).m_ShouldRecalculate;
                      if (pUVar30 != (UnityEngine_Sprite_o *)0x0) {
                        UVar43 = UnityEngine_Sprite__get_rect(pUVar30,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_04,(float)auStack_88._0_4_ / UVar43.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar29 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar21 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        pUVar19 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar28 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar29,style,pSVar21,0.0,0.0,pUVar19,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar28,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)pUVar19
                                  );
                        pSVar25 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar26 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar25 != (System_Type_array *)0x0) {
                          if ((pSVar26 != (System_Type_o *)0x0) &&
                             (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0)) goto label_043847e7;
                          if ((int)pSVar25->max_length != 0) {
                            pSVar25->m_Items[0] = pSVar26;
                            il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
                            pSVar26 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar26 != (System_Type_o *)0x0) &&
                               (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar25->max_length) {
                              pSVar25->m_Items[1] = pSVar26;
                              il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
                              pSVar26 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar26 != (System_Type_o *)0x0) &&
                                 (lVar27 = il2cpp_runtime_helper_023051f0(pSVar26), lVar27 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar25->max_length) {
                                pSVar25->m_Items[2] = pSVar26;
                                il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 2,pSVar26);
                                pUVar28 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar28,"CreditsContent",pSVar25,(MethodInfo *)0x0);
                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar31 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_08->fields)._contentTransform;
                                  (__this_08->fields)._contentTransform = pUVar31;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar31);
                                  pUVar32 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_08->fields)._layoutGroup;
                                  (__this_08->fields)._layoutGroup = pUVar32;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar32);
                                  __this_05 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar28,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar31 = (__this_08->fields)._contentTransform;
                                  pUVar29 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar31,pUVar29,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar31 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar31,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_05 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_05,2,(MethodInfo *)0x0);
                                                    pUVar33 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_08->fields)._categoryFont = pUVar33;
                                                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._categoryFont,
                                                                       pUVar33);
                                                    pUVar30 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_08->fields)._brushSprite = pUVar30;
                                                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._brushSprite,
                                                                       pUVar30);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                       ("#2065a0",
                                                                        (UnityEngine_Color_o *)&UStack_98,
                                                                        (MethodInfo *)0x0);
                                                    lVar27 = MethodInfo_Void_Add;
                                                    if ((char)bVar18 == '\0') {
                                                      fVar39 = 1.0;
                                                      fVar40 = 1.0;
                                                      fVar41 = fVar39;
                                                      fVar42 = fVar40;
                                                    }
                                                    else {
                                                      fVar39 = UStack_98.r;
                                                      fVar40 = UStack_98.g;
                                                      fVar41 = UStack_98.b;
                                                      fVar42 = UStack_98.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                      if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                        uVar6 = *(uint *)&method_00->name;
                                                        if (uVar6 < (uint)pUVar15->max_length) {
                                                          *(uint *)&method_00->name = uVar6 + 1;
                                                          pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                          (pUVar4->fields).r = fVar39;
                                                          (pUVar4->fields).g = fVar40;
                                                          (pUVar4->fields).b = fVar41;
                                                          (pUVar4->fields).a = fVar42;
                                                        }
                                                        else {
                                                          item.fields.g = fVar40;
                                                          item.fields.r = fVar39;
                                                          item.fields.a = fVar42;
                                                          item.fields.b = fVar41;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#ba661f",
                                                                           (UnityEngine_Color_o *)&UStack_a8,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar39 = 1.0;
                                                         fVar40 = 1.0;
                                                         fVar41 = fVar39;
                                                         fVar42 = fVar40;
                                                       }
                                                       else {
                                                         fVar39 = UStack_a8.r;
                                                         fVar40 = UStack_a8.g;
                                                         fVar41 = UStack_a8.b;
                                                         fVar42 = UStack_a8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar39;
                                                           (pUVar4->fields).g = fVar40;
                                                           (pUVar4->fields).b = fVar41;
                                                           (pUVar4->fields).a = fVar42;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar40;
                                                           item_00.fields.r = fVar39;
                                                           item_00.fields.a = fVar42;
                                                           item_00.fields.b = fVar41;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#29888a",
                                                                           (UnityEngine_Color_o *)&UStack_b8,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar39 = 1.0;
                                                         fVar40 = 1.0;
                                                         fVar41 = fVar39;
                                                         fVar42 = fVar40;
                                                       }
                                                       else {
                                                         fVar39 = UStack_b8.r;
                                                         fVar40 = UStack_b8.g;
                                                         fVar41 = UStack_b8.b;
                                                         fVar42 = UStack_b8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar39;
                                                           (pUVar4->fields).g = fVar40;
                                                           (pUVar4->fields).b = fVar41;
                                                           (pUVar4->fields).a = fVar42;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar40;
                                                           item_01.fields.r = fVar39;
                                                           item_01.fields.a = fVar42;
                                                           item_01.fields.b = fVar41;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#813d52",
                                                                           (UnityEngine_Color_o *)&UStack_c8,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar39 = 1.0;
                                                         fVar40 = 1.0;
                                                         fVar41 = fVar39;
                                                         fVar42 = fVar40;
                                                       }
                                                       else {
                                                         fVar39 = UStack_c8.r;
                                                         fVar40 = UStack_c8.g;
                                                         fVar41 = UStack_c8.b;
                                                         fVar42 = UStack_c8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar39;
                                                           (pUVar4->fields).g = fVar40;
                                                           (pUVar4->fields).b = fVar41;
                                                           (pUVar4->fields).a = fVar42;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar40;
                                                           item_02.fields.r = fVar39;
                                                           item_02.fields.a = fVar42;
                                                           item_02.fields.b = fVar41;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar18 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#614c90",
                                                                           (UnityEngine_Color_o *)&UStack_d8,
                                                                           (MethodInfo *)0x0);
                                                       lVar27 = MethodInfo_Void_Add;
                                                       if ((char)bVar18 == '\0') {
                                                         fVar39 = 1.0;
                                                         fVar40 = 1.0;
                                                         fVar41 = fVar39;
                                                         fVar42 = fVar40;
                                                       }
                                                       else {
                                                         fVar39 = UStack_d8.r;
                                                         fVar40 = UStack_d8.g;
                                                         fVar41 = UStack_d8.b;
                                                         fVar42 = UStack_d8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar15 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar15 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar15->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar15->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar39;
                                                           (pUVar4->fields).g = fVar40;
                                                           (pUVar4->fields).b = fVar41;
                                                           (pUVar4->fields).a = fVar42;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar40;
                                                           item_03.fields.r = fVar39;
                                                           item_03.fields.a = fVar42;
                                                           item_03.fields.b = fVar41;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_08->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_08->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_08,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_08,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar28 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar35 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar31 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar31 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar28,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar39 = 1.0;
  switch(uVar35 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar40 = 0.0;
joined_r0x043848db:
      if (pUVar31 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar39 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar40 = 0.5;
    fVar39 = 1.0;
    break;
  case 2:
    fVar40 = 1.0;
    fVar39 = 1.0;
    break;
  case 3:
    fVar40 = 0.0;
    fVar39 = 0.5;
    break;
  case 4:
    fVar40 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar40 = 1.0;
joined_r0x043848b3:
    fVar39 = 0.5;
    break;
  case 6:
    fVar40 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar40 = 0.5;
joined_r0x043848cc:
    fVar39 = 0.0;
    break;
  case 8:
    fVar40 = 1.0;
    fVar39 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar31 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar39;
  value.fields.x = fVar40;
  UnityEngine_RectTransform__set_anchorMax(pUVar31,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar39;
  value_01.fields.x = fVar40;
  UnityEngine_RectTransform__set_anchorMin(pUVar31,value_01,(MethodInfo *)0x0);
  fVar39 = 0.0;
  fVar40 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar39 = 0.5;
    fVar40 = 1.0;
    break;
  case 2:
    fVar39 = 1.0;
    fVar40 = 1.0;
    break;
  case 3:
    fVar39 = 0.0;
    fVar40 = 0.5;
    break;
  case 4:
    fVar39 = 0.5;
    fVar40 = 0.5;
    break;
  case 5:
    fVar39 = 1.0;
    fVar40 = 0.5;
    break;
  default:
    fVar39 = 0.0;
    fVar40 = 0.0;
    break;
  case 7:
    fVar39 = 0.5;
    fVar40 = 0.0;
    break;
  case 8:
    fVar39 = 1.0;
    fVar40 = 0.0;
  }
  value_00.fields.y = fVar40;
  value_00.fields.x = fVar39;
  UnityEngine_RectTransform__set_pivot(pUVar31,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar31,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_2$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_2___ctor (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o* __this, const MethodInfo* method);
// 0x4382560

void UI_CreateGameWeatherPanel___c__DisplayClass2_2___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_2$$<Setup>b__3
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_2___Setup_b__3 (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o* __this, const MethodInfo* method);
// 0x4383ae0

void UI_CreateGameWeatherPanel___c__DisplayClass2_2___Setup_b__3
               (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  UI_SetNamePopup_o *__this_00;
  Settings_StringSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  UI_ConfirmPopup_o *__this_01;
  Settings_BaseSetSetting_c *pSVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Color_array *pUVar12;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  char cVar13;
  uint32_t uVar14;
  bool_conflict bVar15;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar16;
  System_String_o *pSVar17;
  long *plVar18;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  Settings_BoolSetting_c *value_03;
  Settings_BaseSetSetting_o *pSVar20;
  System_String_o *pSVar21;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar22;
  System_Type_o *pSVar23;
  long lVar24;
  UnityEngine_GameObject_o *pUVar25;
  UnityEngine_Transform_o *pUVar26;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *pUVar27;
  UnityEngine_RectTransform_o *pUVar28;
  UnityEngine_UI_AspectRatioFitter_o *__this_04;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar29;
  UnityEngine_UI_ContentSizeFitter_o *__this_05;
  UnityEngine_Font_o *pUVar30;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  ulong extraout_RDX;
  System_String_o **ppSVar31;
  ulong uVar32;
  UI_ExportPopup_o *__this_06;
  System_String_Fields __this_07;
  UI_CreateGameWeatherPanel_o *pUVar33;
  UI_CreateGameWeatherPanel_o *pUVar34;
  UI_CreditsMenu_o *__this_08;
  MethodInfo *in_R8;
  UI_ImportPopup_o *__this_09;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar39;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields local_d0;
  UnityEngine_Color_Fields local_c0;
  UnityEngine_Color_Fields local_b0;
  UnityEngine_Color_Fields local_a0;
  UnityEngine_Color_Fields local_90;
  undefined1 local_80 [16];
  Il2CppClass *pIStack_68;
  
  if (g_data_057ae234 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Schedule");
    g_data_057ae234 = '\x01';
  }
  pSVar17 = (__this->fields).button;
  pIVar11 = (Il2CppClass *)(__this->fields).__4__this;
  pSVar21 = System_String__Concat_3ae5ba0(pSVar17,"Schedule",(MethodInfo *)0x0);
  if (pIVar11 != (Il2CppClass *)0x0) {
    if (g_data_057ae232 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanEditSelectedSet);
      il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__2);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__3);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__4);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__5);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
      il2cpp_runtime_helper_023445d0(&"ExportSchedule");
      il2cpp_runtime_helper_023445d0(&"Create");
      il2cpp_runtime_helper_023445d0(&"Copy");
      il2cpp_runtime_helper_023445d0(&"ImportSchedule");
      il2cpp_runtime_helper_023445d0(&"Delete");
      il2cpp_runtime_helper_023445d0(&"Rename");
      il2cpp_runtime_helper_023445d0(&"DeleteWarning");
      il2cpp_runtime_helper_023445d0(&"Import");
      il2cpp_runtime_helper_023445d0(&"Preset");
      il2cpp_runtime_helper_023445d0(&"");
      il2cpp_runtime_helper_023445d0(&"Export");
      il2cpp_runtime_helper_023445d0(&"New set");
      g_data_057ae232 = '\x01';
    }
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Il2CppObject *)0x0) {
      __this_02[1].klass = pIVar11;
      il2cpp_runtime_helper_022b4080(__this_02 + 1,pIVar11);
      __this_02[1].monitor = pSVar21;
      il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
      lVar24 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar7 != 0) {
        __this_00 = *(UI_SetNamePopup_o **)(lVar7 + 0x88);
        pSVar17 = __this_02[1].monitor;
        uVar14 = _PrivateImplementationDetails___ComputeStringHash(pSVar17,(MethodInfo *)0x0);
        if (uVar14 < 0x658f3665) {
          if (uVar14 < 0x573e0af5) {
            if (uVar14 == 0x3302295a) {
              bVar15 = System_String__op_Equality(pSVar17,"ExportSchedule",(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar7 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (((lVar7 != 0) && (lVar24 != 0)) &&
                 (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20) !=
                  (Settings_SetSettingsContainer_T__o *)0x0)) {
                __this_06 = *(UI_ExportPopup_o **)(lVar7 + 0x68);
                pSVar20 = Settings_SetSettingsContainer_object___GetSelectedSet
                                    (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar20 != (Settings_BaseSetSetting_o *)0x0) {
                  bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
                  if (((pSVar20->klass->_2).naturalAligment < bVar5) ||
                     ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet))
                  goto label_0438324f;
                  pSVar9 = pSVar20[3].fields.Preset;
                  if ((pSVar9 != (Settings_BoolSetting_o *)0x0) && (__this_06 != (UI_ExportPopup_o *)0x0)) {
                    value_03 = pSVar9[1].klass;
                    goto label_04383235;
                  }
                }
              }
            }
            else {
              if (uVar14 != 0x573e0af4) {
                return;
              }
              bVar15 = System_String__op_Equality(pSVar17,"Import",(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                return;
              }
              if ((lVar24 != 0) &&
                 (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20) !=
                  (Settings_SetSettingsContainer_T__o *)0x0)) {
                bVar15 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                                   (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
                if ((char)bVar15 == '\0') {
                  return;
                }
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                lVar24 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar24 != 0) {
                  __this_09 = *(UI_ImportPopup_o **)(lVar24 + 0x70);
                  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  goto label_04382e03;
                }
              }
            }
          }
          else if (uVar14 == 0x5797ea6a) {
            bVar15 = System_String__op_Equality(pSVar17,"Delete",(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              return;
            }
            if ((lVar24 != 0) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              bVar15 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                                 (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
              if ((char)bVar15 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar24 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar24 != 0) {
                __this_01 = *(UI_ConfirmPopup_o **)(lVar24 + 0x38);
                pSVar17 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
                pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                pSVar21 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
                if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
                  UI_ConfirmPopup__Show(__this_01,pSVar17,pUVar16,pSVar21,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            if (uVar14 != 0x658f3664) {
              return;
            }
            ppSVar31 = &"Copy";
            bVar15 = System_String__op_Equality(pSVar17,"Copy",(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              return;
            }
            pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382f4d:
            UnityEngine_Events_UnityAction___ctor();
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar21 = UI_UIManager__GetLocaleCommon(*ppSVar31,(MethodInfo *)0x0);
            pSVar17 = "New set";
joined_r0x04382d28:
            if (__this_00 != (UI_SetNamePopup_o *)0x0) {
              UI_SetNamePopup__Show
                        (__this_00,pSVar17,pUVar16,pSVar21,(System_String_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if (uVar14 < 0xc80631f4) {
          if (uVar14 == 0x990de47d) {
            ppSVar31 = &"Create";
            bVar15 = System_String__op_Equality(pSVar17,"Create",(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              return;
            }
            pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            goto label_04382f4d;
          }
          if (uVar14 != 0xc80631f3) {
            return;
          }
          bVar15 = System_String__op_Equality(pSVar17,"Rename",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            return;
          }
          if ((lVar24 != 0) &&
             (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20) !=
              (Settings_SetSettingsContainer_T__o *)0x0)) {
            bVar15 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                               (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
            if ((char)bVar15 == '\0') {
              return;
            }
            if (((*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20) !=
                  (Settings_SetSettingsContainer_T__o *)0x0) &&
                (pSVar20 = Settings_SetSettingsContainer_object___GetSelectedSet
                                     (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
                pSVar20 != (Settings_BaseSetSetting_o *)0x0)) &&
               (pSVar8 = (pSVar20->fields).Name, pSVar8 != (Settings_StringSetting_o *)0x0)) {
              pSVar17 = (pSVar8->fields)._value;
              pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar21 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
              goto joined_r0x04382d28;
            }
          }
        }
        else if (uVar14 == 0xe86349d3) {
          bVar15 = System_String__op_Equality(pSVar17,"Export",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            return;
          }
          if (((lVar24 != 0) &&
              (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20) !=
               (Settings_SetSettingsContainer_T__o *)0x0)) &&
             (pSVar20 = Settings_SetSettingsContainer_object___GetSelectedSet
                                  (*(Settings_SetSettingsContainer_T__o **)(lVar24 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
             pSVar20 != (Settings_BaseSetSetting_o *)0x0)) {
            bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
            if (((pSVar20->klass->_2).naturalAligment < bVar5) ||
               ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
            pSVar10 = pSVar20->klass;
            bVar5 = (TypeInfo_WeatherSet->_2).naturalAligment;
            if (((pSVar10->_2).naturalAligment < bVar5) ||
               ((pSVar10->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
            plVar18 = (long *)(*(pSVar10->vtable)._5_SerializeToJsonObject.methodPtr)(pSVar20);
            if (plVar18 == (long *)0x0) goto label_0438324a;
            cVar13 = (**(code **)(*plVar18 + 0x2f8))(plVar18,"Preset",*(undefined8 *)(*plVar18 + 0x300));
            if (cVar13 == '\0') {
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043831f5;
label_0438318a:
              lVar24 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            }
            else {
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
              (**(code **)(*plVar18 + 0x1b8))(plVar18,"Preset",pSVar19,*(undefined8 *)(*plVar18 + 0x1c0));
              if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438318a;
label_043831f5:
              il2cpp_runtime_helper_02337ed0();
              lVar24 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            }
            if (lVar24 != 0) {
              __this_06 = *(UI_ExportPopup_o **)(lVar24 + 0x68);
              value_03 = (Settings_BoolSetting_c *)
                         (**(code **)(*plVar18 + 0x318))(plVar18,4,*(undefined8 *)(*plVar18 + 800));
              if (__this_06 != (UI_ExportPopup_o *)0x0) {
label_04383235:
                UI_ExportPopup__Show(__this_06,(System_String_o *)value_03,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          if (uVar14 != 0xe9d2f4f9) {
            return;
          }
          bVar15 = System_String__op_Equality(pSVar17,"ImportSchedule",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar24 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar24 != 0) {
            __this_09 = *(UI_ImportPopup_o **)(lVar24 + 0x70);
            pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382e03:
            UnityEngine_Events_UnityAction___ctor();
            if (__this_09 != (UI_ImportPopup_o *)0x0) {
              UI_ImportPopup__Show(__this_09,pUVar16,1,"",(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
label_0438324a:
    pSVar20 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_0438324f:
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = pSVar17->fields;
  if (__this_07 != (System_String_Fields)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_07,(System_String_o *)pSVar17[1].klass,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar33 = *(UI_CreateGameWeatherPanel_o **)((long)__this_07 + 0x10);
  if (pUVar33 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar33,*(System_String_o **)((long)__this_07 + 0x18),method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar34 = (UI_CreateGameWeatherPanel_o *)(pUVar33->fields).m_CachedPtr;
  if (pUVar34 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar34,(System_String_o *)(pUVar33->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar33 = (UI_CreateGameWeatherPanel_o *)(pUVar34->fields).m_CachedPtr;
  if (pUVar33 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar33,(System_String_o *)(pUVar34->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar34 = (UI_CreateGameWeatherPanel_o *)(pUVar33->fields).m_CachedPtr;
  if (pUVar34 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar34,(System_String_o *)(pUVar33->fields).m_CancellationTokenSource,method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_08 = (UI_CreditsMenu_o *)(pUVar34->fields).m_CachedPtr;
  if (__this_08 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_08,
               (System_String_o *)(pUVar34->fields).m_CancellationTokenSource,method_06);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_68 = pIVar11;
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  local_90.r = 0.0;
  local_90.g = 0.0;
  local_90.b = 0.0;
  local_90.a = 0.0;
  local_a0.r = 0.0;
  local_a0.g = 0.0;
  local_a0.b = 0.0;
  local_a0.a = 0.0;
  local_b0.r = 0.0;
  local_b0.g = 0.0;
  local_b0.b = 0.0;
  local_b0.a = 0.0;
  local_c0.r = 0.0;
  local_c0.g = 0.0;
  local_c0.b = 0.0;
  local_c0.a = 0.0;
  local_d0.r = 0.0;
  local_d0.g = 0.0;
  local_d0.b = 0.0;
  local_d0.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_08,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar17 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar17;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar17);
  pSVar22 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar23 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar22 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar23 == (System_Type_o *)0x0) || (lVar24 = il2cpp_runtime_helper_023051f0(pSVar23), lVar24 != 0)) {
    if ((int)pSVar22->max_length != 0) {
      pSVar22->m_Items[0] = pSVar23;
      il2cpp_runtime_helper_022b4080(pSVar22->m_Items);
      pSVar23 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar23 != (System_Type_o *)0x0) && (lVar24 = il2cpp_runtime_helper_023051f0(pSVar23), lVar24 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar22->max_length) {
        pSVar22->m_Items[1] = pSVar23;
        il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 1);
        pSVar23 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar23 != (System_Type_o *)0x0) && (lVar24 = il2cpp_runtime_helper_023051f0(pSVar23), lVar24 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar22->max_length) {
          pSVar22->m_Items[2] = pSVar23;
          il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 2,pSVar23);
          pUVar25 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar25,"Background",pSVar22,(MethodInfo *)0x0);
          if (pUVar25 != (UnityEngine_GameObject_o *)0x0) {
            pUVar26 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
            if (pUVar26 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar26,parent,0,(MethodInfo *)0x0);
              __this_03 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar25,MethodInfo_Image_GetComponent_Image);
              pUVar27 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_03,pUVar27,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_03,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_03,1,(MethodInfo *)0x0);
                pUVar28 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar25,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar28,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar28,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar28,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_04 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar25,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_04 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_04,4,(MethodInfo *)0x0);
                    pUVar27 = *(UnityEngine_Sprite_o **)&(__this_03->fields).m_ShouldRecalculate;
                    if (pUVar27 != (UnityEngine_Sprite_o *)0x0) {
                      UVar39 = UnityEngine_Sprite__get_rect(pUVar27,(MethodInfo *)0x0);
                      local_80._8_4_ = in_XMM1_Dc;
                      local_80._0_8_ = UVar39.fields._8_8_;
                      local_80._12_4_ = in_XMM1_Dd;
                      pUVar27 = *(UnityEngine_Sprite_o **)&(__this_03->fields).m_ShouldRecalculate;
                      if (pUVar27 != (UnityEngine_Sprite_o *)0x0) {
                        UVar39 = UnityEngine_Sprite__get_rect(pUVar27,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_04,(float)local_80._0_4_ / UVar39.fields.m_Height,(MethodInfo *)0x0)
                        ;
                        pUVar26 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar17 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar25 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar26,style,pSVar17,0.0,0.0,pUVar16,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar25,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)pUVar16
                                  );
                        pSVar22 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar23 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar22 != (System_Type_array *)0x0) {
                          if ((pSVar23 != (System_Type_o *)0x0) &&
                             (lVar24 = il2cpp_runtime_helper_023051f0(pSVar23), lVar24 == 0)) goto label_043847e7;
                          if ((int)pSVar22->max_length != 0) {
                            pSVar22->m_Items[0] = pSVar23;
                            il2cpp_runtime_helper_022b4080(pSVar22->m_Items);
                            pSVar23 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar23 != (System_Type_o *)0x0) &&
                               (lVar24 = il2cpp_runtime_helper_023051f0(pSVar23), lVar24 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar22->max_length) {
                              pSVar22->m_Items[1] = pSVar23;
                              il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 1);
                              pSVar23 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar23 != (System_Type_o *)0x0) &&
                                 (lVar24 = il2cpp_runtime_helper_023051f0(pSVar23), lVar24 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar22->max_length) {
                                pSVar22->m_Items[2] = pSVar23;
                                il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 2,pSVar23);
                                pUVar25 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar25,"CreditsContent",pSVar22,(MethodInfo *)0x0);
                                if (pUVar25 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar28 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar25,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_08->fields)._contentTransform;
                                  (__this_08->fields)._contentTransform = pUVar28;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar28);
                                  pUVar29 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar25,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_08->fields)._layoutGroup;
                                  (__this_08->fields)._layoutGroup = pUVar29;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar29);
                                  __this_05 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar25,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar28 = (__this_08->fields)._contentTransform;
                                  pUVar26 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar28,pUVar26,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar28 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar28,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_05 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_05,2,(MethodInfo *)0x0);
                                                    pUVar30 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_08->fields)._categoryFont = pUVar30;
                                                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._categoryFont,
                                                                       pUVar30);
                                                    pUVar27 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_08->fields)._brushSprite = pUVar27;
                                                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._brushSprite,
                                                                       pUVar27);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                       ("#2065a0",
                                                                        (UnityEngine_Color_o *)&local_90,
                                                                        (MethodInfo *)0x0);
                                                    lVar24 = MethodInfo_Void_Add;
                                                    if ((char)bVar15 == '\0') {
                                                      fVar35 = 1.0;
                                                      fVar36 = 1.0;
                                                      fVar37 = fVar35;
                                                      fVar38 = fVar36;
                                                    }
                                                    else {
                                                      fVar35 = local_90.r;
                                                      fVar36 = local_90.g;
                                                      fVar37 = local_90.b;
                                                      fVar38 = local_90.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar12 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                      if (pUVar12 != (UnityEngine_Color_array *)0x0) {
                                                        uVar6 = *(uint *)&method_00->name;
                                                        if (uVar6 < (uint)pUVar12->max_length) {
                                                          *(uint *)&method_00->name = uVar6 + 1;
                                                          pUVar4 = pUVar12->m_Items + (int)uVar6;
                                                          (pUVar4->fields).r = fVar35;
                                                          (pUVar4->fields).g = fVar36;
                                                          (pUVar4->fields).b = fVar37;
                                                          (pUVar4->fields).a = fVar38;
                                                        }
                                                        else {
                                                          item.fields.g = fVar36;
                                                          item.fields.r = fVar35;
                                                          item.fields.a = fVar38;
                                                          item.fields.b = fVar37;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#ba661f",
                                                                           (UnityEngine_Color_o *)&local_a0,
                                                                           (MethodInfo *)0x0);
                                                       lVar24 = MethodInfo_Void_Add;
                                                       if ((char)bVar15 == '\0') {
                                                         fVar35 = 1.0;
                                                         fVar36 = 1.0;
                                                         fVar37 = fVar35;
                                                         fVar38 = fVar36;
                                                       }
                                                       else {
                                                         fVar35 = local_a0.r;
                                                         fVar36 = local_a0.g;
                                                         fVar37 = local_a0.b;
                                                         fVar38 = local_a0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar12 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar12 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar12->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar12->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar35;
                                                           (pUVar4->fields).g = fVar36;
                                                           (pUVar4->fields).b = fVar37;
                                                           (pUVar4->fields).a = fVar38;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar36;
                                                           item_00.fields.r = fVar35;
                                                           item_00.fields.a = fVar38;
                                                           item_00.fields.b = fVar37;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#29888a",
                                                                           (UnityEngine_Color_o *)&local_b0,
                                                                           (MethodInfo *)0x0);
                                                       lVar24 = MethodInfo_Void_Add;
                                                       if ((char)bVar15 == '\0') {
                                                         fVar35 = 1.0;
                                                         fVar36 = 1.0;
                                                         fVar37 = fVar35;
                                                         fVar38 = fVar36;
                                                       }
                                                       else {
                                                         fVar35 = local_b0.r;
                                                         fVar36 = local_b0.g;
                                                         fVar37 = local_b0.b;
                                                         fVar38 = local_b0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar12 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar12 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar12->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar12->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar35;
                                                           (pUVar4->fields).g = fVar36;
                                                           (pUVar4->fields).b = fVar37;
                                                           (pUVar4->fields).a = fVar38;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar36;
                                                           item_01.fields.r = fVar35;
                                                           item_01.fields.a = fVar38;
                                                           item_01.fields.b = fVar37;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#813d52",
                                                                           (UnityEngine_Color_o *)&local_c0,
                                                                           (MethodInfo *)0x0);
                                                       lVar24 = MethodInfo_Void_Add;
                                                       if ((char)bVar15 == '\0') {
                                                         fVar35 = 1.0;
                                                         fVar36 = 1.0;
                                                         fVar37 = fVar35;
                                                         fVar38 = fVar36;
                                                       }
                                                       else {
                                                         fVar35 = local_c0.r;
                                                         fVar36 = local_c0.g;
                                                         fVar37 = local_c0.b;
                                                         fVar38 = local_c0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar12 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar12 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar12->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar12->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar35;
                                                           (pUVar4->fields).g = fVar36;
                                                           (pUVar4->fields).b = fVar37;
                                                           (pUVar4->fields).a = fVar38;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar36;
                                                           item_02.fields.r = fVar35;
                                                           item_02.fields.a = fVar38;
                                                           item_02.fields.b = fVar37;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                          ("#614c90",
                                                                           (UnityEngine_Color_o *)&local_d0,
                                                                           (MethodInfo *)0x0);
                                                       lVar24 = MethodInfo_Void_Add;
                                                       if ((char)bVar15 == '\0') {
                                                         fVar35 = 1.0;
                                                         fVar36 = 1.0;
                                                         fVar37 = fVar35;
                                                         fVar38 = fVar36;
                                                       }
                                                       else {
                                                         fVar35 = local_d0.r;
                                                         fVar36 = local_d0.g;
                                                         fVar37 = local_d0.b;
                                                         fVar38 = local_d0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar12 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar12 != (UnityEngine_Color_array *)0x0) {
                                                         uVar6 = *(uint *)&method_00->name;
                                                         if (uVar6 < (uint)pUVar12->max_length) {
                                                           *(uint *)&method_00->name = uVar6 + 1;
                                                           pUVar4 = pUVar12->m_Items + (int)uVar6;
                                                           (pUVar4->fields).r = fVar35;
                                                           (pUVar4->fields).g = fVar36;
                                                           (pUVar4->fields).b = fVar37;
                                                           (pUVar4->fields).a = fVar38;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar36;
                                                           item_03.fields.r = fVar35;
                                                           item_03.fields.a = fVar38;
                                                           item_03.fields.b = fVar37;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_08->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_08->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_08,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_08,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar25 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar32 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar28 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar25 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar28 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar25,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar35 = 1.0;
  switch(uVar32 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar36 = 0.0;
joined_r0x043848db:
      if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar35 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar36 = 0.5;
    fVar35 = 1.0;
    break;
  case 2:
    fVar36 = 1.0;
    fVar35 = 1.0;
    break;
  case 3:
    fVar36 = 0.0;
    fVar35 = 0.5;
    break;
  case 4:
    fVar36 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar36 = 1.0;
joined_r0x043848b3:
    fVar35 = 0.5;
    break;
  case 6:
    fVar36 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar36 = 0.5;
joined_r0x043848cc:
    fVar35 = 0.0;
    break;
  case 8:
    fVar36 = 1.0;
    fVar35 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar28 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar35;
  value.fields.x = fVar36;
  UnityEngine_RectTransform__set_anchorMax(pUVar28,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar35;
  value_01.fields.x = fVar36;
  UnityEngine_RectTransform__set_anchorMin(pUVar28,value_01,(MethodInfo *)0x0);
  fVar35 = 0.0;
  fVar36 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar35 = 0.5;
    fVar36 = 1.0;
    break;
  case 2:
    fVar35 = 1.0;
    fVar36 = 1.0;
    break;
  case 3:
    fVar35 = 0.0;
    fVar36 = 0.5;
    break;
  case 4:
    fVar35 = 0.5;
    fVar36 = 0.5;
    break;
  case 5:
    fVar35 = 1.0;
    fVar36 = 0.5;
    break;
  default:
    fVar35 = 0.0;
    fVar36 = 0.0;
    break;
  case 7:
    fVar35 = 0.5;
    fVar36 = 0.0;
    break;
  case 8:
    fVar35 = 1.0;
    fVar36 = 0.0;
  }
  value_00.fields.y = fVar36;
  value_00.fields.x = fVar35;
  UnityEngine_RectTransform__set_pivot(pUVar28,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar28,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___ctor (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383260

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__0
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__0 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383b30

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__0
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  ulong extraout_RDX;
  ulong uVar18;
  UI_CreateGameWeatherPanel_o *pUVar19;
  UI_CreateGameWeatherPanel_o *pUVar20;
  UI_CreditsMenu_o *__this_03;
  MethodInfo *in_R8;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar25;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_c8;
  UnityEngine_Color_Fields UStack_b8;
  UnityEngine_Color_Fields UStack_a8;
  UnityEngine_Color_Fields UStack_98;
  UnityEngine_Color_Fields UStack_88;
  undefined1 auStack_78 [16];
  
  pUVar19 = (__this->fields).__4__this;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(pUVar19,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar20 = (UI_CreateGameWeatherPanel_o *)(pUVar19->fields).m_CachedPtr;
  if (pUVar20 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar20,(System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar19 = (UI_CreateGameWeatherPanel_o *)(pUVar20->fields).m_CachedPtr;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar19,(System_String_o *)(pUVar20->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar20 = (UI_CreateGameWeatherPanel_o *)(pUVar19->fields).m_CachedPtr;
  if (pUVar20 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar20,(System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar19 = (UI_CreateGameWeatherPanel_o *)(pUVar20->fields).m_CachedPtr;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar19,(System_String_o *)(pUVar20->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (UI_CreditsMenu_o *)(pUVar19->fields).m_CachedPtr;
  if (__this_03 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_03,
               (System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_88.r = 0.0;
  UStack_88.g = 0.0;
  UStack_88.b = 0.0;
  UStack_88.a = 0.0;
  UStack_98.r = 0.0;
  UStack_98.g = 0.0;
  UStack_98.b = 0.0;
  UStack_98.a = 0.0;
  UStack_a8.r = 0.0;
  UStack_a8.g = 0.0;
  UStack_a8.b = 0.0;
  UStack_a8.a = 0.0;
  UStack_b8.r = 0.0;
  UStack_b8.g = 0.0;
  UStack_b8.b = 0.0;
  UStack_b8.a = 0.0;
  UStack_c8.r = 0.0;
  UStack_c8.g = 0.0;
  UStack_c8.b = 0.0;
  UStack_c8.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_03,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar25 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      auStack_78._8_4_ = in_XMM1_Dc;
                      auStack_78._0_8_ = UVar25.fields._8_8_;
                      auStack_78._12_4_ = in_XMM1_Dd;
                      pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                      if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                        UVar25 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_01,(float)auStack_78._0_4_ / UVar25.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar12 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_03->fields)._contentTransform;
                                  (__this_03->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_03->fields)._layoutGroup;
                                  (__this_03->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this_03->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_03->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryFont,
                                                                       pUVar17);
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_03->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._brushSprite,
                                                                       pUVar13);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                      ("#2065a0",
                                                                       (UnityEngine_Color_o *)&UStack_88,
                                                                       (MethodInfo *)0x0);
                                                    lVar10 = MethodInfo_Void_Add;
                                                    if ((char)bVar7 == '\0') {
                                                      fVar21 = 1.0;
                                                      fVar22 = 1.0;
                                                      fVar23 = fVar21;
                                                      fVar24 = fVar22;
                                                    }
                                                    else {
                                                      fVar21 = UStack_88.r;
                                                      fVar22 = UStack_88.g;
                                                      fVar23 = UStack_88.b;
                                                      fVar24 = UStack_88.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
                                                      if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                        uVar5 = *(uint *)&method_00->name;
                                                        if (uVar5 < (uint)pUVar6->max_length) {
                                                          *(uint *)&method_00->name = uVar5 + 1;
                                                          pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                          (pUVar4->fields).r = fVar21;
                                                          (pUVar4->fields).g = fVar22;
                                                          (pUVar4->fields).b = fVar23;
                                                          (pUVar4->fields).a = fVar24;
                                                        }
                                                        else {
                                                          item.fields.g = fVar22;
                                                          item.fields.r = fVar21;
                                                          item.fields.a = fVar24;
                                                          item.fields.b = fVar23;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&UStack_98,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_98.r;
                                                         fVar22 = UStack_98.g;
                                                         fVar23 = UStack_98.b;
                                                         fVar24 = UStack_98.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar22;
                                                           item_00.fields.r = fVar21;
                                                           item_00.fields.a = fVar24;
                                                           item_00.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&UStack_a8,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_a8.r;
                                                         fVar22 = UStack_a8.g;
                                                         fVar23 = UStack_a8.b;
                                                         fVar24 = UStack_a8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar22;
                                                           item_01.fields.r = fVar21;
                                                           item_01.fields.a = fVar24;
                                                           item_01.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&UStack_b8,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_b8.r;
                                                         fVar22 = UStack_b8.g;
                                                         fVar23 = UStack_b8.b;
                                                         fVar24 = UStack_b8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar22;
                                                           item_02.fields.r = fVar21;
                                                           item_02.fields.a = fVar24;
                                                           item_02.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&UStack_c8,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_c8.r;
                                                         fVar22 = UStack_c8.g;
                                                         fVar23 = UStack_c8.b;
                                                         fVar24 = UStack_c8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar22;
                                                           item_03.fields.r = fVar21;
                                                           item_03.fields.a = fVar24;
                                                           item_03.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_03->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_03,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_03,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar21 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar22 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar21 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar22 = 0.5;
    fVar21 = 1.0;
    break;
  case 2:
    fVar22 = 1.0;
    fVar21 = 1.0;
    break;
  case 3:
    fVar22 = 0.0;
    fVar21 = 0.5;
    break;
  case 4:
    fVar22 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar22 = 1.0;
joined_r0x043848b3:
    fVar21 = 0.5;
    break;
  case 6:
    fVar22 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar22 = 0.5;
joined_r0x043848cc:
    fVar21 = 0.0;
    break;
  case 8:
    fVar22 = 1.0;
    fVar21 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar21;
  value.fields.x = fVar22;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar21;
  value_01.fields.x = fVar22;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar21 = 0.0;
  fVar22 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar21 = 0.5;
    fVar22 = 1.0;
    break;
  case 2:
    fVar21 = 1.0;
    fVar22 = 1.0;
    break;
  case 3:
    fVar21 = 0.0;
    fVar22 = 0.5;
    break;
  case 4:
    fVar21 = 0.5;
    fVar22 = 0.5;
    break;
  case 5:
    fVar21 = 1.0;
    fVar22 = 0.5;
    break;
  default:
    fVar21 = 0.0;
    fVar22 = 0.0;
    break;
  case 7:
    fVar21 = 0.5;
    fVar22 = 0.0;
    break;
  case 8:
    fVar21 = 1.0;
    fVar22 = 0.0;
  }
  value_00.fields.y = fVar22;
  value_00.fields.x = fVar21;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__1
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__1 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383b50

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__1
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  ulong extraout_RDX;
  ulong uVar18;
  UI_CreateGameWeatherPanel_o *pUVar19;
  UI_CreateGameWeatherPanel_o *pUVar20;
  UI_CreditsMenu_o *__this_03;
  MethodInfo *in_R8;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar25;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_c0;
  UnityEngine_Color_Fields UStack_b0;
  UnityEngine_Color_Fields UStack_a0;
  UnityEngine_Color_Fields UStack_90;
  UnityEngine_Color_Fields UStack_80;
  undefined1 auStack_70 [16];
  
  pUVar19 = (__this->fields).__4__this;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(pUVar19,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar20 = (UI_CreateGameWeatherPanel_o *)(pUVar19->fields).m_CachedPtr;
  if (pUVar20 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar20,(System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar19 = (UI_CreateGameWeatherPanel_o *)(pUVar20->fields).m_CachedPtr;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar19,(System_String_o *)(pUVar20->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar20 = (UI_CreateGameWeatherPanel_o *)(pUVar19->fields).m_CachedPtr;
  if (pUVar20 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar20,(System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (UI_CreditsMenu_o *)(pUVar20->fields).m_CachedPtr;
  if (__this_03 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_03,
               (System_String_o *)(pUVar20->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_80.r = 0.0;
  UStack_80.g = 0.0;
  UStack_80.b = 0.0;
  UStack_80.a = 0.0;
  UStack_90.r = 0.0;
  UStack_90.g = 0.0;
  UStack_90.b = 0.0;
  UStack_90.a = 0.0;
  UStack_a0.r = 0.0;
  UStack_a0.g = 0.0;
  UStack_a0.b = 0.0;
  UStack_a0.a = 0.0;
  UStack_b0.r = 0.0;
  UStack_b0.g = 0.0;
  UStack_b0.b = 0.0;
  UStack_b0.a = 0.0;
  UStack_c0.r = 0.0;
  UStack_c0.g = 0.0;
  UStack_c0.b = 0.0;
  UStack_c0.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_03,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar25 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      auStack_70._8_4_ = in_XMM1_Dc;
                      auStack_70._0_8_ = UVar25.fields._8_8_;
                      auStack_70._12_4_ = in_XMM1_Dd;
                      pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                      if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                        UVar25 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_01,(float)auStack_70._0_4_ / UVar25.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar12 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_03->fields)._contentTransform;
                                  (__this_03->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_03->fields)._layoutGroup;
                                  (__this_03->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this_03->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_03->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryFont,
                                                                       pUVar17);
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_03->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._brushSprite,
                                                                       pUVar13);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                      ("#2065a0",
                                                                       (UnityEngine_Color_o *)&UStack_80,
                                                                       (MethodInfo *)0x0);
                                                    lVar10 = MethodInfo_Void_Add;
                                                    if ((char)bVar7 == '\0') {
                                                      fVar21 = 1.0;
                                                      fVar22 = 1.0;
                                                      fVar23 = fVar21;
                                                      fVar24 = fVar22;
                                                    }
                                                    else {
                                                      fVar21 = UStack_80.r;
                                                      fVar22 = UStack_80.g;
                                                      fVar23 = UStack_80.b;
                                                      fVar24 = UStack_80.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
                                                      if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                        uVar5 = *(uint *)&method_00->name;
                                                        if (uVar5 < (uint)pUVar6->max_length) {
                                                          *(uint *)&method_00->name = uVar5 + 1;
                                                          pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                          (pUVar4->fields).r = fVar21;
                                                          (pUVar4->fields).g = fVar22;
                                                          (pUVar4->fields).b = fVar23;
                                                          (pUVar4->fields).a = fVar24;
                                                        }
                                                        else {
                                                          item.fields.g = fVar22;
                                                          item.fields.r = fVar21;
                                                          item.fields.a = fVar24;
                                                          item.fields.b = fVar23;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&UStack_90,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_90.r;
                                                         fVar22 = UStack_90.g;
                                                         fVar23 = UStack_90.b;
                                                         fVar24 = UStack_90.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar22;
                                                           item_00.fields.r = fVar21;
                                                           item_00.fields.a = fVar24;
                                                           item_00.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&UStack_a0,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_a0.r;
                                                         fVar22 = UStack_a0.g;
                                                         fVar23 = UStack_a0.b;
                                                         fVar24 = UStack_a0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar22;
                                                           item_01.fields.r = fVar21;
                                                           item_01.fields.a = fVar24;
                                                           item_01.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&UStack_b0,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_b0.r;
                                                         fVar22 = UStack_b0.g;
                                                         fVar23 = UStack_b0.b;
                                                         fVar24 = UStack_b0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar22;
                                                           item_02.fields.r = fVar21;
                                                           item_02.fields.a = fVar24;
                                                           item_02.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&UStack_c0,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = fVar21;
                                                         fVar24 = fVar22;
                                                       }
                                                       else {
                                                         fVar21 = UStack_c0.r;
                                                         fVar22 = UStack_c0.g;
                                                         fVar23 = UStack_c0.b;
                                                         fVar24 = UStack_c0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar21;
                                                           (pUVar4->fields).g = fVar22;
                                                           (pUVar4->fields).b = fVar23;
                                                           (pUVar4->fields).a = fVar24;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar22;
                                                           item_03.fields.r = fVar21;
                                                           item_03.fields.a = fVar24;
                                                           item_03.fields.b = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_03->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_03,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_03,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar21 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar22 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar21 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar22 = 0.5;
    fVar21 = 1.0;
    break;
  case 2:
    fVar22 = 1.0;
    fVar21 = 1.0;
    break;
  case 3:
    fVar22 = 0.0;
    fVar21 = 0.5;
    break;
  case 4:
    fVar22 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar22 = 1.0;
joined_r0x043848b3:
    fVar21 = 0.5;
    break;
  case 6:
    fVar22 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar22 = 0.5;
joined_r0x043848cc:
    fVar21 = 0.0;
    break;
  case 8:
    fVar22 = 1.0;
    fVar21 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar21;
  value.fields.x = fVar22;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar21;
  value_01.fields.x = fVar22;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar21 = 0.0;
  fVar22 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar21 = 0.5;
    fVar22 = 1.0;
    break;
  case 2:
    fVar21 = 1.0;
    fVar22 = 1.0;
    break;
  case 3:
    fVar21 = 0.0;
    fVar22 = 0.5;
    break;
  case 4:
    fVar21 = 0.5;
    fVar22 = 0.5;
    break;
  case 5:
    fVar21 = 1.0;
    fVar22 = 0.5;
    break;
  default:
    fVar21 = 0.0;
    fVar22 = 0.0;
    break;
  case 7:
    fVar21 = 0.5;
    fVar22 = 0.0;
    break;
  case 8:
    fVar21 = 1.0;
    fVar22 = 0.0;
  }
  value_00.fields.y = fVar22;
  value_00.fields.x = fVar21;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__5
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__5 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383b70

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__5
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  ulong extraout_RDX;
  ulong uVar18;
  UI_CreateGameWeatherPanel_o *pUVar19;
  UI_CreateGameWeatherPanel_o *__this_03;
  UI_CreditsMenu_o *__this_04;
  MethodInfo *in_R8;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar24;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_b8;
  UnityEngine_Color_Fields UStack_a8;
  UnityEngine_Color_Fields UStack_98;
  UnityEngine_Color_Fields UStack_88;
  UnityEngine_Color_Fields UStack_78;
  undefined1 auStack_68 [16];
  
  pUVar19 = (__this->fields).__4__this;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(pUVar19,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (UI_CreateGameWeatherPanel_o *)(pUVar19->fields).m_CachedPtr;
  if (__this_03 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (__this_03,(System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar19 = (UI_CreateGameWeatherPanel_o *)(__this_03->fields).m_CachedPtr;
  if (pUVar19 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (pUVar19,(System_String_o *)(__this_03->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (UI_CreditsMenu_o *)(pUVar19->fields).m_CachedPtr;
  if (__this_04 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_04,
               (System_String_o *)(pUVar19->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_78.r = 0.0;
  UStack_78.g = 0.0;
  UStack_78.b = 0.0;
  UStack_78.a = 0.0;
  UStack_88.r = 0.0;
  UStack_88.g = 0.0;
  UStack_88.b = 0.0;
  UStack_88.a = 0.0;
  UStack_98.r = 0.0;
  UStack_98.g = 0.0;
  UStack_98.b = 0.0;
  UStack_98.a = 0.0;
  UStack_a8.r = 0.0;
  UStack_a8.g = 0.0;
  UStack_a8.b = 0.0;
  UStack_a8.a = 0.0;
  UStack_b8.r = 0.0;
  UStack_b8.g = 0.0;
  UStack_b8.b = 0.0;
  UStack_b8.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_04,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar24 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      auStack_68._8_4_ = in_XMM1_Dc;
                      auStack_68._0_8_ = UVar24.fields._8_8_;
                      auStack_68._12_4_ = in_XMM1_Dd;
                      pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                      if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                        UVar24 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_01,(float)auStack_68._0_4_ / UVar24.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar12 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_04->fields)._contentTransform;
                                  (__this_04->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_04->fields)._layoutGroup;
                                  (__this_04->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this_04->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_04->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._categoryFont,
                                                                       pUVar17);
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_04->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._brushSprite,
                                                                       pUVar13);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                      ("#2065a0",
                                                                       (UnityEngine_Color_o *)&UStack_78,
                                                                       (MethodInfo *)0x0);
                                                    lVar10 = MethodInfo_Void_Add;
                                                    if ((char)bVar7 == '\0') {
                                                      fVar20 = 1.0;
                                                      fVar21 = 1.0;
                                                      fVar22 = fVar20;
                                                      fVar23 = fVar21;
                                                    }
                                                    else {
                                                      fVar20 = UStack_78.r;
                                                      fVar21 = UStack_78.g;
                                                      fVar22 = UStack_78.b;
                                                      fVar23 = UStack_78.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
                                                      if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                        uVar5 = *(uint *)&method_00->name;
                                                        if (uVar5 < (uint)pUVar6->max_length) {
                                                          *(uint *)&method_00->name = uVar5 + 1;
                                                          pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                          (pUVar4->fields).r = fVar20;
                                                          (pUVar4->fields).g = fVar21;
                                                          (pUVar4->fields).b = fVar22;
                                                          (pUVar4->fields).a = fVar23;
                                                        }
                                                        else {
                                                          item.fields.g = fVar21;
                                                          item.fields.r = fVar20;
                                                          item.fields.a = fVar23;
                                                          item.fields.b = fVar22;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&UStack_88,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = fVar20;
                                                         fVar23 = fVar21;
                                                       }
                                                       else {
                                                         fVar20 = UStack_88.r;
                                                         fVar21 = UStack_88.g;
                                                         fVar22 = UStack_88.b;
                                                         fVar23 = UStack_88.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar20;
                                                           (pUVar4->fields).g = fVar21;
                                                           (pUVar4->fields).b = fVar22;
                                                           (pUVar4->fields).a = fVar23;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar21;
                                                           item_00.fields.r = fVar20;
                                                           item_00.fields.a = fVar23;
                                                           item_00.fields.b = fVar22;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&UStack_98,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = fVar20;
                                                         fVar23 = fVar21;
                                                       }
                                                       else {
                                                         fVar20 = UStack_98.r;
                                                         fVar21 = UStack_98.g;
                                                         fVar22 = UStack_98.b;
                                                         fVar23 = UStack_98.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar20;
                                                           (pUVar4->fields).g = fVar21;
                                                           (pUVar4->fields).b = fVar22;
                                                           (pUVar4->fields).a = fVar23;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar21;
                                                           item_01.fields.r = fVar20;
                                                           item_01.fields.a = fVar23;
                                                           item_01.fields.b = fVar22;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&UStack_a8,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = fVar20;
                                                         fVar23 = fVar21;
                                                       }
                                                       else {
                                                         fVar20 = UStack_a8.r;
                                                         fVar21 = UStack_a8.g;
                                                         fVar22 = UStack_a8.b;
                                                         fVar23 = UStack_a8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar20;
                                                           (pUVar4->fields).g = fVar21;
                                                           (pUVar4->fields).b = fVar22;
                                                           (pUVar4->fields).a = fVar23;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar21;
                                                           item_02.fields.r = fVar20;
                                                           item_02.fields.a = fVar23;
                                                           item_02.fields.b = fVar22;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&UStack_b8,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = fVar20;
                                                         fVar23 = fVar21;
                                                       }
                                                       else {
                                                         fVar20 = UStack_b8.r;
                                                         fVar21 = UStack_b8.g;
                                                         fVar22 = UStack_b8.b;
                                                         fVar23 = UStack_b8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar20;
                                                           (pUVar4->fields).g = fVar21;
                                                           (pUVar4->fields).b = fVar22;
                                                           (pUVar4->fields).a = fVar23;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar21;
                                                           item_03.fields.r = fVar20;
                                                           item_03.fields.a = fVar23;
                                                           item_03.fields.b = fVar22;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_04->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_04->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_04,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_04,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar20 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar21 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar20 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar21 = 0.5;
    fVar20 = 1.0;
    break;
  case 2:
    fVar21 = 1.0;
    fVar20 = 1.0;
    break;
  case 3:
    fVar21 = 0.0;
    fVar20 = 0.5;
    break;
  case 4:
    fVar21 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar21 = 1.0;
joined_r0x043848b3:
    fVar20 = 0.5;
    break;
  case 6:
    fVar21 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar21 = 0.5;
joined_r0x043848cc:
    fVar20 = 0.0;
    break;
  case 8:
    fVar21 = 1.0;
    fVar20 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar20;
  value.fields.x = fVar21;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar20;
  value_01.fields.x = fVar21;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar20 = 0.0;
  fVar21 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar20 = 0.5;
    fVar21 = 1.0;
    break;
  case 2:
    fVar20 = 1.0;
    fVar21 = 1.0;
    break;
  case 3:
    fVar20 = 0.0;
    fVar21 = 0.5;
    break;
  case 4:
    fVar20 = 0.5;
    fVar21 = 0.5;
    break;
  case 5:
    fVar20 = 1.0;
    fVar21 = 0.5;
    break;
  default:
    fVar20 = 0.0;
    fVar21 = 0.0;
    break;
  case 7:
    fVar20 = 0.5;
    fVar21 = 0.0;
    break;
  case 8:
    fVar20 = 1.0;
    fVar21 = 0.0;
  }
  value_00.fields.y = fVar21;
  value_00.fields.x = fVar20;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__2
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__2 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383b90

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__2
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong extraout_RDX;
  ulong uVar18;
  UI_CreateGameWeatherPanel_o *__this_03;
  UI_CreateGameWeatherPanel_o *__this_04;
  UI_CreditsMenu_o *__this_05;
  MethodInfo *in_R8;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar23;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_b0;
  UnityEngine_Color_Fields UStack_a0;
  UnityEngine_Color_Fields UStack_90;
  UnityEngine_Color_Fields UStack_80;
  UnityEngine_Color_Fields UStack_70;
  undefined1 auStack_60 [16];
  
  __this_03 = (__this->fields).__4__this;
  if (__this_03 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_03,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (UI_CreateGameWeatherPanel_o *)(__this_03->fields).m_CachedPtr;
  if (__this_04 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              (__this_04,(System_String_o *)(__this_03->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = (UI_CreditsMenu_o *)(__this_04->fields).m_CachedPtr;
  if (__this_05 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_05,
               (System_String_o *)(__this_04->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_70.r = 0.0;
  UStack_70.g = 0.0;
  UStack_70.b = 0.0;
  UStack_70.a = 0.0;
  UStack_80.r = 0.0;
  UStack_80.g = 0.0;
  UStack_80.b = 0.0;
  UStack_80.a = 0.0;
  UStack_90.r = 0.0;
  UStack_90.g = 0.0;
  UStack_90.b = 0.0;
  UStack_90.a = 0.0;
  UStack_a0.r = 0.0;
  UStack_a0.g = 0.0;
  UStack_a0.b = 0.0;
  UStack_a0.a = 0.0;
  UStack_b0.r = 0.0;
  UStack_b0.g = 0.0;
  UStack_b0.b = 0.0;
  UStack_b0.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_05,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      auStack_60._8_4_ = in_XMM1_Dc;
                      auStack_60._0_8_ = UVar23.fields._8_8_;
                      auStack_60._12_4_ = in_XMM1_Dd;
                      pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                      if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                        UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_01,(float)auStack_60._0_4_ / UVar23.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar12 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_05->fields)._contentTransform;
                                  (__this_05->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_05->fields)._layoutGroup;
                                  (__this_05->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this_05->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_05->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this_05->fields)._categoryFont,
                                                                       pUVar17);
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_05->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this_05->fields)._brushSprite,
                                                                       pUVar13);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                      ("#2065a0",
                                                                       (UnityEngine_Color_o *)&UStack_70,
                                                                       (MethodInfo *)0x0);
                                                    lVar10 = MethodInfo_Void_Add;
                                                    if ((char)bVar7 == '\0') {
                                                      fVar19 = 1.0;
                                                      fVar20 = 1.0;
                                                      fVar21 = fVar19;
                                                      fVar22 = fVar20;
                                                    }
                                                    else {
                                                      fVar19 = UStack_70.r;
                                                      fVar20 = UStack_70.g;
                                                      fVar21 = UStack_70.b;
                                                      fVar22 = UStack_70.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
                                                      if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                        uVar5 = *(uint *)&method_00->name;
                                                        if (uVar5 < (uint)pUVar6->max_length) {
                                                          *(uint *)&method_00->name = uVar5 + 1;
                                                          pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                          (pUVar4->fields).r = fVar19;
                                                          (pUVar4->fields).g = fVar20;
                                                          (pUVar4->fields).b = fVar21;
                                                          (pUVar4->fields).a = fVar22;
                                                        }
                                                        else {
                                                          item.fields.g = fVar20;
                                                          item.fields.r = fVar19;
                                                          item.fields.a = fVar22;
                                                          item.fields.b = fVar21;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&UStack_80,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_80.r;
                                                         fVar20 = UStack_80.g;
                                                         fVar21 = UStack_80.b;
                                                         fVar22 = UStack_80.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar20;
                                                           item_00.fields.r = fVar19;
                                                           item_00.fields.a = fVar22;
                                                           item_00.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&UStack_90,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_90.r;
                                                         fVar20 = UStack_90.g;
                                                         fVar21 = UStack_90.b;
                                                         fVar22 = UStack_90.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar20;
                                                           item_01.fields.r = fVar19;
                                                           item_01.fields.a = fVar22;
                                                           item_01.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&UStack_a0,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_a0.r;
                                                         fVar20 = UStack_a0.g;
                                                         fVar21 = UStack_a0.b;
                                                         fVar22 = UStack_a0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar20;
                                                           item_02.fields.r = fVar19;
                                                           item_02.fields.a = fVar22;
                                                           item_02.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&UStack_b0,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_b0.r;
                                                         fVar20 = UStack_b0.g;
                                                         fVar21 = UStack_b0.b;
                                                         fVar22 = UStack_b0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar20;
                                                           item_03.fields.r = fVar19;
                                                           item_03.fields.a = fVar22;
                                                           item_03.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_05->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_05->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_05,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_05,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar19 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar20 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar19 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar20 = 0.5;
    fVar19 = 1.0;
    break;
  case 2:
    fVar20 = 1.0;
    fVar19 = 1.0;
    break;
  case 3:
    fVar20 = 0.0;
    fVar19 = 0.5;
    break;
  case 4:
    fVar20 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar20 = 1.0;
joined_r0x043848b3:
    fVar19 = 0.5;
    break;
  case 6:
    fVar20 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar20 = 0.5;
joined_r0x043848cc:
    fVar19 = 0.0;
    break;
  case 8:
    fVar20 = 1.0;
    fVar19 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar19;
  value.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar19;
  value_01.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar19 = 0.0;
  fVar20 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar19 = 0.5;
    fVar20 = 1.0;
    break;
  case 2:
    fVar19 = 1.0;
    fVar20 = 1.0;
    break;
  case 3:
    fVar19 = 0.0;
    fVar20 = 0.5;
    break;
  case 4:
    fVar19 = 0.5;
    fVar20 = 0.5;
    break;
  case 5:
    fVar19 = 1.0;
    fVar20 = 0.5;
    break;
  default:
    fVar19 = 0.0;
    fVar20 = 0.0;
    break;
  case 7:
    fVar19 = 0.5;
    fVar20 = 0.0;
    break;
  case 8:
    fVar19 = 1.0;
    fVar20 = 0.0;
  }
  value_00.fields.y = fVar20;
  value_00.fields.x = fVar19;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__3
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__3 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383bb0

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__3
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *method_01;
  ulong extraout_RDX;
  ulong uVar18;
  UI_CreateGameWeatherPanel_o *__this_03;
  UI_CreditsMenu_o *__this_04;
  MethodInfo *in_R8;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar23;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_a8;
  UnityEngine_Color_Fields UStack_98;
  UnityEngine_Color_Fields UStack_88;
  UnityEngine_Color_Fields UStack_78;
  UnityEngine_Color_Fields UStack_68;
  undefined1 auStack_58 [16];
  
  __this_03 = (__this->fields).__4__this;
  if (__this_03 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_03,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (UI_CreditsMenu_o *)(__this_03->fields).m_CachedPtr;
  if (__this_04 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_04,
               (System_String_o *)(__this_03->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_68.r = 0.0;
  UStack_68.g = 0.0;
  UStack_68.b = 0.0;
  UStack_68.a = 0.0;
  UStack_78.r = 0.0;
  UStack_78.g = 0.0;
  UStack_78.b = 0.0;
  UStack_78.a = 0.0;
  UStack_88.r = 0.0;
  UStack_88.g = 0.0;
  UStack_88.b = 0.0;
  UStack_88.a = 0.0;
  UStack_98.r = 0.0;
  UStack_98.g = 0.0;
  UStack_98.b = 0.0;
  UStack_98.a = 0.0;
  UStack_a8.r = 0.0;
  UStack_a8.g = 0.0;
  UStack_a8.b = 0.0;
  UStack_a8.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_04,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      auStack_58._8_4_ = in_XMM1_Dc;
                      auStack_58._0_8_ = UVar23.fields._8_8_;
                      auStack_58._12_4_ = in_XMM1_Dd;
                      pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                      if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                        UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_01,(float)auStack_58._0_4_ / UVar23.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar12 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_04->fields)._contentTransform;
                                  (__this_04->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_04->fields)._layoutGroup;
                                  (__this_04->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this_04->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_04->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._categoryFont,
                                                                       pUVar17);
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_04->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._brushSprite,
                                                                       pUVar13);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                      ("#2065a0",
                                                                       (UnityEngine_Color_o *)&UStack_68,
                                                                       (MethodInfo *)0x0);
                                                    lVar10 = MethodInfo_Void_Add;
                                                    if ((char)bVar7 == '\0') {
                                                      fVar19 = 1.0;
                                                      fVar20 = 1.0;
                                                      fVar21 = fVar19;
                                                      fVar22 = fVar20;
                                                    }
                                                    else {
                                                      fVar19 = UStack_68.r;
                                                      fVar20 = UStack_68.g;
                                                      fVar21 = UStack_68.b;
                                                      fVar22 = UStack_68.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
                                                      if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                        uVar5 = *(uint *)&method_00->name;
                                                        if (uVar5 < (uint)pUVar6->max_length) {
                                                          *(uint *)&method_00->name = uVar5 + 1;
                                                          pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                          (pUVar4->fields).r = fVar19;
                                                          (pUVar4->fields).g = fVar20;
                                                          (pUVar4->fields).b = fVar21;
                                                          (pUVar4->fields).a = fVar22;
                                                        }
                                                        else {
                                                          item.fields.g = fVar20;
                                                          item.fields.r = fVar19;
                                                          item.fields.a = fVar22;
                                                          item.fields.b = fVar21;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&UStack_78,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_78.r;
                                                         fVar20 = UStack_78.g;
                                                         fVar21 = UStack_78.b;
                                                         fVar22 = UStack_78.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar20;
                                                           item_00.fields.r = fVar19;
                                                           item_00.fields.a = fVar22;
                                                           item_00.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&UStack_88,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_88.r;
                                                         fVar20 = UStack_88.g;
                                                         fVar21 = UStack_88.b;
                                                         fVar22 = UStack_88.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar20;
                                                           item_01.fields.r = fVar19;
                                                           item_01.fields.a = fVar22;
                                                           item_01.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&UStack_98,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_98.r;
                                                         fVar20 = UStack_98.g;
                                                         fVar21 = UStack_98.b;
                                                         fVar22 = UStack_98.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar20;
                                                           item_02.fields.r = fVar19;
                                                           item_02.fields.a = fVar22;
                                                           item_02.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&UStack_a8,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_a8.r;
                                                         fVar20 = UStack_a8.g;
                                                         fVar21 = UStack_a8.b;
                                                         fVar22 = UStack_a8.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar20;
                                                           item_03.fields.r = fVar19;
                                                           item_03.fields.a = fVar22;
                                                           item_03.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_04->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_04->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_04,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_04,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar19 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar20 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar19 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar20 = 0.5;
    fVar19 = 1.0;
    break;
  case 2:
    fVar20 = 1.0;
    fVar19 = 1.0;
    break;
  case 3:
    fVar20 = 0.0;
    fVar19 = 0.5;
    break;
  case 4:
    fVar20 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar20 = 1.0;
joined_r0x043848b3:
    fVar19 = 0.5;
    break;
  case 6:
    fVar20 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar20 = 0.5;
joined_r0x043848cc:
    fVar19 = 0.0;
    break;
  case 8:
    fVar20 = 1.0;
    fVar19 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar19;
  value.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar19;
  value_01.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar19 = 0.0;
  fVar20 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar19 = 0.5;
    fVar20 = 1.0;
    break;
  case 2:
    fVar19 = 1.0;
    fVar20 = 1.0;
    break;
  case 3:
    fVar19 = 0.0;
    fVar20 = 0.5;
    break;
  case 4:
    fVar19 = 0.5;
    fVar20 = 0.5;
    break;
  case 5:
    fVar19 = 1.0;
    fVar20 = 0.5;
    break;
  default:
    fVar19 = 0.0;
    fVar20 = 0.0;
    break;
  case 7:
    fVar19 = 0.5;
    fVar20 = 0.0;
    break;
  case 8:
    fVar19 = 1.0;
    fVar20 = 0.0;
  }
  value_00.fields.y = fVar20;
  value_00.fields.x = fVar19;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__4
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__4 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4383bd0

void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__4
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  ulong extraout_RDX;
  ulong uVar18;
  UI_CreditsMenu_o *__this_03;
  MethodInfo *in_R8;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar23;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_a0;
  UnityEngine_Color_Fields UStack_90;
  UnityEngine_Color_Fields UStack_80;
  UnityEngine_Color_Fields UStack_70;
  UnityEngine_Color_Fields UStack_60;
  undefined1 auStack_50 [16];
  
  __this_03 = (UI_CreditsMenu_o *)(__this->fields).__4__this;
  if (__this_03 != (UI_CreditsMenu_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
              ((UI_CreateGameWeatherPanel_o *)__this_03,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
  }
  UStack_60.r = 0.0;
  UStack_60.g = 0.0;
  UStack_60.b = 0.0;
  UStack_60.a = 0.0;
  UStack_70.r = 0.0;
  UStack_70.g = 0.0;
  UStack_70.b = 0.0;
  UStack_70.a = 0.0;
  UStack_80.r = 0.0;
  UStack_80.g = 0.0;
  UStack_80.b = 0.0;
  UStack_80.a = 0.0;
  UStack_90.r = 0.0;
  UStack_90.g = 0.0;
  UStack_90.b = 0.0;
  UStack_90.a = 0.0;
  UStack_a0.r = 0.0;
  UStack_a0.g = 0.0;
  UStack_a0.b = 0.0;
  UStack_a0.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_03,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                  if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                    UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      auStack_50._8_4_ = in_XMM1_Dc;
                      auStack_50._0_8_ = UVar23.fields._8_8_;
                      auStack_50._12_4_ = in_XMM1_Dd;
                      pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                      if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                        UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                        UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                  (__this_01,(float)auStack_50._0_4_ / UVar23.fields.m_Height,
                                   (MethodInfo *)0x0);
                        pUVar12 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this_03->fields)._contentTransform;
                                  (__this_03->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this_03->fields)._layoutGroup;
                                  (__this_03->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this_03->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
                                  ;
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this_03->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryFont,
                                                                       pUVar17);
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this_03->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._brushSprite,
                                                                       pUVar13);
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                      ("#2065a0",
                                                                       (UnityEngine_Color_o *)&UStack_60,
                                                                       (MethodInfo *)0x0);
                                                    lVar10 = MethodInfo_Void_Add;
                                                    if ((char)bVar7 == '\0') {
                                                      fVar19 = 1.0;
                                                      fVar20 = 1.0;
                                                      fVar21 = fVar19;
                                                      fVar22 = fVar20;
                                                    }
                                                    else {
                                                      fVar19 = UStack_60.r;
                                                      fVar20 = UStack_60.g;
                                                      fVar21 = UStack_60.b;
                                                      fVar22 = UStack_60.a;
                                                    }
                                                    if (method_00 != (MethodInfo *)0x0) {
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
                                                      if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                        uVar5 = *(uint *)&method_00->name;
                                                        if (uVar5 < (uint)pUVar6->max_length) {
                                                          *(uint *)&method_00->name = uVar5 + 1;
                                                          pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                          (pUVar4->fields).r = fVar19;
                                                          (pUVar4->fields).g = fVar20;
                                                          (pUVar4->fields).b = fVar21;
                                                          (pUVar4->fields).a = fVar22;
                                                        }
                                                        else {
                                                          item.fields.g = fVar20;
                                                          item.fields.r = fVar19;
                                                          item.fields.a = fVar22;
                                                          item.fields.b = fVar21;
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&UStack_70,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_70.r;
                                                         fVar20 = UStack_70.g;
                                                         fVar21 = UStack_70.b;
                                                         fVar22 = UStack_70.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_00.fields.g = fVar20;
                                                           item_00.fields.r = fVar19;
                                                           item_00.fields.a = fVar22;
                                                           item_00.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&UStack_80,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_80.r;
                                                         fVar20 = UStack_80.g;
                                                         fVar21 = UStack_80.b;
                                                         fVar22 = UStack_80.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_01.fields.g = fVar20;
                                                           item_01.fields.r = fVar19;
                                                           item_01.fields.a = fVar22;
                                                           item_01.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&UStack_90,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_90.r;
                                                         fVar20 = UStack_90.g;
                                                         fVar21 = UStack_90.b;
                                                         fVar22 = UStack_90.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_02.fields.g = fVar20;
                                                           item_02.fields.r = fVar19;
                                                           item_02.fields.a = fVar22;
                                                           item_02.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&UStack_a0,
                                                                          (MethodInfo *)0x0);
                                                       lVar10 = MethodInfo_Void_Add;
                                                       if ((char)bVar7 == '\0') {
                                                         fVar19 = 1.0;
                                                         fVar20 = 1.0;
                                                         fVar21 = fVar19;
                                                         fVar22 = fVar20;
                                                       }
                                                       else {
                                                         fVar19 = UStack_a0.r;
                                                         fVar20 = UStack_a0.g;
                                                         fVar21 = UStack_a0.b;
                                                         fVar22 = UStack_a0.a;
                                                       }
                                                       piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar6 = ((
                                                       System_Collections_Generic_List_Color__Fields *)
                                                       &method_00->invoker_method)->_items;
                                                       if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                         uVar5 = *(uint *)&method_00->name;
                                                         if (uVar5 < (uint)pUVar6->max_length) {
                                                           *(uint *)&method_00->name = uVar5 + 1;
                                                           pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                           (pUVar4->fields).r = fVar19;
                                                           (pUVar4->fields).g = fVar20;
                                                           (pUVar4->fields).b = fVar21;
                                                           (pUVar4->fields).a = fVar22;
                                                         }
                                                         else {
                                                           item_03.fields.g = fVar20;
                                                           item_03.fields.r = fVar19;
                                                           item_03.fields.a = fVar22;
                                                           item_03.fields.b = fVar21;
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this_03->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryColors
                                                                         );
                                                       UI_CreditsMenu__CreateTip(__this_03,method_00);
                                                       UI_CreditsMenu__PopulateCredits(__this_03,method_00);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar19 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar20 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar19 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar20 = 0.5;
    fVar19 = 1.0;
    break;
  case 2:
    fVar20 = 1.0;
    fVar19 = 1.0;
    break;
  case 3:
    fVar20 = 0.0;
    fVar19 = 0.5;
    break;
  case 4:
    fVar20 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar20 = 1.0;
joined_r0x043848b3:
    fVar19 = 0.5;
    break;
  case 6:
    fVar20 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar20 = 0.5;
joined_r0x043848cc:
    fVar19 = 0.0;
    break;
  case 8:
    fVar20 = 1.0;
    fVar19 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar19;
  value.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar19;
  value_01.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar19 = 0.0;
  fVar20 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar19 = 0.5;
    fVar20 = 1.0;
    break;
  case 2:
    fVar19 = 1.0;
    fVar20 = 1.0;
    break;
  case 3:
    fVar19 = 0.0;
    fVar20 = 0.5;
    break;
  case 4:
    fVar19 = 0.5;
    fVar20 = 0.5;
    break;
  case 5:
    fVar19 = 1.0;
    fVar20 = 0.5;
    break;
  default:
    fVar19 = 0.0;
    fVar20 = 0.0;
    break;
  case 7:
    fVar19 = 0.5;
    fVar20 = 0.0;
    break;
  case 8:
    fVar19 = 1.0;
    fVar20 = 0.0;
  }
  value_00.fields.y = fVar20;
  value_00.fields.x = fVar19;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameWeatherPanel__get_ScrollBar (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4381150

bool_conflict UI_CreateGameWeatherPanel__get_ScrollBar(UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameWeatherPanel$$Setup
// il2cpp: void UI_CreateGameWeatherPanel__Setup (UI_CreateGameWeatherPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4381160

void UI_CreateGameWeatherPanel__Setup
               (UI_CreateGameWeatherPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Settings_TypedSetting_int__o *__this_00;
  UI_ColorPickPopup_o *colorPickPopup;
  Settings_SetSettingsContainer_T__o *__this_01;
  Settings_IntSetting_o *setting;
  UI_Vector3Popup_o *vector3Popup;
  Settings_BaseSetting_o *setting_00;
  intptr_t iVar5;
  UnityEngine_Events_UnityAction_o *style;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_array *pSVar7;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  UnityEngine_GameObject_o *pUVar8;
  ulong uVar9;
  System_String_o *pSVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  long lVar12;
  UnityEngine_Transform_o *pUVar13;
  void *pvVar14;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_Events_UnityAction_o *title;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar16;
  MethodInfo *pMVar17;
  MethodInfo *in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (g_data_057ae230 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArray_WeatherSkybox);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"Wind direction");
    il2cpp_runtime_helper_023445d0(&"Flashlight");
    il2cpp_runtime_helper_023445d0(&"Loop schedule");
    il2cpp_runtime_helper_023445d0(&"*Weather presets cannot be modified. Create a new set to use custom settings.");
    il2cpp_runtime_helper_023445d0(&"Rain");
    il2cpp_runtime_helper_023445d0(&"Daylight");
    il2cpp_runtime_helper_023445d0(&"Fog color");
    il2cpp_runtime_helper_023445d0(&"Rain force");
    il2cpp_runtime_helper_023445d0(&"Daylight intensity");
    il2cpp_runtime_helper_023445d0(&"Wind");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Daylight direction");
    il2cpp_runtime_helper_023445d0(&"Ambient light");
    il2cpp_runtime_helper_023445d0(&"Snow force");
    il2cpp_runtime_helper_023445d0(&"Skybox color");
    il2cpp_runtime_helper_023445d0(&"Wind force");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Weather set");
    il2cpp_runtime_helper_023445d0(&"Use schedule");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"* = preset and cannot be modified or deleted. Create a new set to use custom settings.");
    il2cpp_runtime_helper_023445d0(&"Follow a programmed weather schedule.");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Snow");
    il2cpp_runtime_helper_023445d0(&"Fog density");
    il2cpp_runtime_helper_023445d0(&"Skybox");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"Thunder");
    g_data_057ae230 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  iVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).method_ptr = 0x4334000000000018;
  *(undefined4 *)&(style->fields).m_target = 0x41a00000;
  (style->fields).invoke_impl = iVar5;
  il2cpp_runtime_helper_022b4080(&(style->fields).invoke_impl);
  if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
  pUVar11 = TypeInfo_UIManager;
  if (lVar12 == 0) goto label_043821d5;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) ||
      (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58), lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto label_043821d5;
  __this_00 = *(Settings_TypedSetting_int__o **)(*(long *)(lVar3 + 0x20) + 0x20);
  pUVar11 = (UnityEngine_Events_UnityAction_o *)0x0;
  if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_043821d5;
  colorPickPopup = *(UI_ColorPickPopup_o **)(lVar12 + 0x48);
  Settings_TypedSetting_int___set_Value(__this_00,*(int32_t *)(lVar4 + 0x14),MethodInfo_Void_set_Value);
  pUVar13 = (__this->fields).DoublePanelLeft;
  iVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  (pUVar6->fields).method_ptr = 0x430c000000000018;
  *(undefined4 *)&(pUVar6->fields).m_target = 0x41a00000;
  (pUVar6->fields).invoke_impl = iVar5;
  il2cpp_runtime_helper_022b4080(&(pUVar6->fields).invoke_impl);
  __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20);
  pUVar11 = (UnityEngine_Events_UnityAction_o *)0x0;
  if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_043821d5;
  setting = (__this_01->fields).SelectedSetIndex;
  pSVar7 = Settings_SetSettingsContainer_object___GetSetNames(__this_01,MethodInfo_String_GetSetNames);
  onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar17 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDropdownSetting
            (pUVar13,(UI_ElementStyle_o *)pUVar6,(Settings_BaseSetting_o *)setting,"Weather set",pSVar7,
             "* = preset and cannot be modified or deleted. Create a new set to use custom settings.",205.0,40.0,300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,
             in_stack_ffffffffffffff88);
  pUVar8 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,0,method_00);
  pUVar11 = TypeInfo_string;
  uVar9 = il2cpp_runtime_helper_022b2a40();
  if (uVar9 == 0) goto label_043821d5;
  title = onDropdownOptionSelect;
  if (*(int *)(uVar9 + 0x18) == 0) {
label_043821bc:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pUVar6 = (UnityEngine_Events_UnityAction_o *)(uVar9 + 0x20);
    *(undefined8 *)(uVar9 + 0x20) = "Create";
    il2cpp_runtime_helper_022b4080(pUVar6);
    if (*(uint *)(uVar9 + 0x18) < 2) goto label_043821bc;
    *(undefined8 *)(uVar9 + 0x28) = "Delete";
    il2cpp_runtime_helper_022b4080(uVar9 + 0x28);
    if (*(uint *)(uVar9 + 0x18) < 3) goto label_043821bc;
    *(undefined8 *)(uVar9 + 0x30) = "Rename";
    il2cpp_runtime_helper_022b4080(uVar9 + 0x30);
    if (*(uint *)(uVar9 + 0x18) < 4) goto label_043821bc;
    *(undefined8 *)(uVar9 + 0x38) = "Copy";
    il2cpp_runtime_helper_022b4080(uVar9 + 0x38);
    pMVar15 = extraout_RDX;
    if (*(int *)(uVar9 + 0x18) < 1) {
label_043817d2:
      pUVar8 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,0,pMVar15);
      pUVar11 = TypeInfo_string;
      lVar12 = il2cpp_runtime_helper_022b2a40();
      if (lVar12 == 0) goto label_043821d5;
      title = onDropdownOptionSelect;
      if (*(int *)(lVar12 + 0x18) != 0) {
        pUVar6 = (UnityEngine_Events_UnityAction_o *)(lVar12 + 0x20);
        *(Il2CppObject **)(lVar12 + 0x20) = "Import";
        il2cpp_runtime_helper_022b4080(pUVar6);
        if (1 < *(uint *)(lVar12 + 0x18)) {
          *(intptr_t *)(lVar12 + 0x28) = "Export";
          il2cpp_runtime_helper_022b4080(lVar12 + 0x28);
          if (0 < *(int *)(lVar12 + 0x18)) {
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              uVar9 = 0;
              do {
                pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_1);
                pUVar11 = pUVar6;
                System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
                (pUVar6->fields).invoke_impl = (intptr_t)__this;
                il2cpp_runtime_helper_022b4080(&(pUVar6->fields).invoke_impl,__this);
                title = onDropdownOptionSelect;
                if (*(uint *)(lVar12 + 0x18) <= uVar9) goto label_043821bc;
                (pUVar6->fields).method_ptr = *(intptr_t *)(lVar12 + 0x20 + uVar9 * 8);
                il2cpp_runtime_helper_022b4080(&pUVar6->fields);
                pUVar13 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                pSVar10 = (System_String_o *)(pUVar6->fields).method_ptr;
                if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                onDropdownOptionSelect =
                     (UnityEngine_Events_UnityAction_o *)
                     UI_UIManager__GetLocaleCommon(pSVar10,(MethodInfo *)0x0);
                pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateDefaultButton
                          (pUVar13,(UI_ElementStyle_o *)style,(System_String_o *)onDropdownOptionSelect,0.0,
                           0.0,pUVar11,(MethodInfo *)pSVar7);
                uVar9 = uVar9 + 1;
              } while ((long)uVar9 < (long)*(int *)(lVar12 + 0x18));
              goto label_04381960;
            }
            __this_03 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_1);
            pUVar11 = __this_03;
            System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
            (__this_03->fields).invoke_impl = (intptr_t)__this;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).invoke_impl,__this);
            iVar2 = *(int *)(lVar12 + 0x18);
            goto joined_r0x04382169;
          }
label_04381960:
          pUVar11 = (UnityEngine_Events_UnityAction_o *)0x0;
          if (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
              (Settings_SetSettingsContainer_T__o *)0x0) goto label_043821d5;
          onDropdownOptionSelect =
               (UnityEngine_Events_UnityAction_o *)
               Settings_SetSettingsContainer_object___GetSelectedSet
                         (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
          if (onDropdownOptionSelect != (UnityEngine_Events_UnityAction_o *)0x0) {
            bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
            if (((onDropdownOptionSelect->klass->_2).naturalAligment < bVar1) ||
               ((onDropdownOptionSelect->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) {
              il2cpp_runtime_helper_022b2fd0(onDropdownOptionSelect);
              goto label_043820ed;
            }
          }
          UI_BasePanel__CreateHorizontalDivider
                    ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
          pvVar14 = (void *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
          __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          System_Object___ctor(__this_02,(MethodInfo *)0x0);
          __this_02[1].klass = (Il2CppClass *)0x4316000000000018;
          *(undefined4 *)&__this_02[2].klass = 0x41a00000;
          __this_02[1].monitor = pvVar14;
          pUVar11 = (UnityEngine_Events_UnityAction_o *)&__this_02[1].monitor;
          il2cpp_runtime_helper_022b4080();
          if (onDropdownOptionSelect == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
          UI_ElementFactory__CreateToggleSetting
                    ((__this->fields).DoublePanelLeft,(UI_ElementStyle_o *)style,
                     (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.method_code,"Use schedule",
                     "Follow a programmed weather schedule.",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar17);
          method_02 = (MethodInfo *)0x0;
          pMVar15 = "";
          UI_ElementFactory__CreateToggleSetting
                    ((__this->fields).DoublePanelLeft,(UI_ElementStyle_o *)style,
                     (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.interp_method,"Loop schedule",
                     (System_String_o *)"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar17
                    );
          pUVar8 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,0,method_01)
          ;
          pUVar11 = TypeInfo_string;
          __this_03 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_022b2a40();
          if (__this_03 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
          pUVar6 = style;
          title = onDropdownOptionSelect;
          if ((int)(__this_03->fields).invoke_impl != 0) {
            pUVar6 = (UnityEngine_Events_UnityAction_o *)&(__this_03->fields).m_target;
            (__this_03->fields).m_target = "Import";
            il2cpp_runtime_helper_022b4080(pUVar6);
            if (1 < (uint)(__this_03->fields).invoke_impl) {
              pUVar11 = (UnityEngine_Events_UnityAction_o *)&(__this_03->fields).method;
              (__this_03->fields).method = "Export";
              il2cpp_runtime_helper_022b4080();
              if (0 < (int)(__this_03->fields).invoke_impl) {
                if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_04382184;
                uVar9 = 0;
                do {
                  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_2);
                  pUVar11 = pUVar6;
                  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
                  if (pUVar6 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
                  (pUVar6->fields).invoke_impl = (intptr_t)__this;
                  il2cpp_runtime_helper_022b4080(&(pUVar6->fields).invoke_impl,__this);
                  if ((uint)(__this_03->fields).invoke_impl <= uVar9) goto label_043821bc;
                  (pUVar6->fields).method_ptr = (intptr_t)(&(__this_03->fields).m_target)[uVar9];
                  il2cpp_runtime_helper_022b4080(&pUVar6->fields);
                  pUVar11 = (UnityEngine_Events_UnityAction_o *)
                            UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                  pSVar10 = (System_String_o *)(pUVar6->fields).method_ptr;
                  if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  title = (UnityEngine_Events_UnityAction_o *)
                          UI_UIManager__GetLocaleCommon(pSVar10,(MethodInfo *)0x0);
                  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  UI_ElementFactory__CreateDefaultButton
                            ((UnityEngine_Transform_o *)pUVar11,(UI_ElementStyle_o *)style,
                             (System_String_o *)title,0.0,0.0,pUVar6,pMVar15);
                  uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)(int)(__this_03->fields).invoke_impl);
              }
              lVar12 = (onDropdownOptionSelect->fields).method;
              if (lVar12 != 0) {
                if (*(char *)(lVar12 + 0x11) != '\0') {
                  UI_ElementFactory__CreateDefaultLabel
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,"*Weather presets cannot be modified. Create a new set to use custom settings.",0,4,
                             method_02);
                }
                if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                lVar12 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
                pUVar11 = TypeInfo_UIManager;
                if (lVar12 != 0) {
                  vector3Popup = *(UI_Vector3Popup_o **)(lVar12 + 0x60);
                  pUVar13 = (__this->fields).DoublePanelRight;
                  setting_00 = (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).extra_arg;
                  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_String_EnumToStringArray_WeatherSkybox);
                  pMVar15 = (MethodInfo *)0x0;
                  UI_ElementFactory__CreateDropdownSetting
                            (pUVar13,(UI_ElementStyle_o *)style,setting_00,"Skybox",pSVar7,
                             (System_String_o *)"",140.0,40.0,300.0,(System_Nullable_float__o)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,in_stack_ffffffffffffff88);
                  UI_ElementFactory__CreateColorSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).method_code,
                             "Skybox color",colorPickPopup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  pMVar17 = (MethodInfo *)0x0;
                  UI_ElementFactory__CreateColorSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).interp_method,
                             "Daylight",colorPickPopup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  UI_ElementFactory__CreateSliderSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).interp_invoke_impl,
                             "Daylight intensity",(System_String_o *)"",150.0,16.0,2,pMVar17);
                  UI_ElementFactory__CreateVector3Setting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).method_info,
                             "Daylight direction",vector3Popup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  UI_ElementFactory__CreateColorSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).original_method_info,
                             "Ambient light",colorPickPopup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  UI_ElementFactory__CreateColorSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).data,"Flashlight",
                             colorPickPopup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  pMVar17 = (MethodInfo *)0x0;
                  UI_ElementFactory__CreateColorSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)(onDropdownOptionSelect->fields).delegates,"Fog color"
                             ,colorPickPopup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  UI_ElementFactory__CreateSliderInputSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             *(Settings_BaseSetting_o **)&(onDropdownOptionSelect->fields).method_is_virtual,
                             "Fog density",(System_String_o *)"",130.0,16.0,70.0,40.0,3,pMVar17);
                  UI_ElementFactory__CreateSliderSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].klass,"Rain",
                             (System_String_o *)"",150.0,16.0,2,pMVar17);
                  UI_ElementFactory__CreateSliderSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             onDropdownOptionSelect[1].monitor,"Thunder",(System_String_o *)"",
                             150.0,16.0,2,pMVar17);
                  UI_ElementFactory__CreateSliderSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.method_ptr,
                             "Snow",(System_String_o *)"",150.0,16.0,2,pMVar17);
                  UI_ElementFactory__CreateSliderSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.invoke_impl,
                             "Wind",(System_String_o *)"",150.0,16.0,2,pMVar17);
                  UI_ElementFactory__CreateVector3Setting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.m_target,"Wind direction",
                             vector3Popup,(System_String_o *)"",90.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                  UI_ElementFactory__CreateInputSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.method,"Rain force",
                             (System_String_o *)"",140.0,40.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             in_stack_ffffffffffffff98);
                  UI_ElementFactory__CreateInputSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.delegate_trampoline,
                             "Snow force",(System_String_o *)"",140.0,40.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             in_stack_ffffffffffffff98);
                  UI_ElementFactory__CreateInputSetting
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)style,
                             (Settings_BaseSetting_o *)onDropdownOptionSelect[1].fields.extra_arg,"Wind force"
                             ,(System_String_o *)"",140.0,40.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             in_stack_ffffffffffffff98);
                  return;
                }
              }
              goto label_043821d5;
            }
          }
        }
      }
      goto label_043821bc;
    }
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      uVar16 = 0;
      do {
        pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
        pUVar11 = pUVar6;
        System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
        (pUVar6->fields).invoke_impl = (intptr_t)__this;
        il2cpp_runtime_helper_022b4080(&(pUVar6->fields).invoke_impl,__this);
        title = onDropdownOptionSelect;
        if (*(uint *)(uVar9 + 0x18) <= uVar16) goto label_043821bc;
        (pUVar6->fields).method_ptr = *(intptr_t *)(uVar9 + 0x20 + uVar16 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar6->fields);
        onDropdownOptionSelect =
             (UnityEngine_Events_UnityAction_o *)
             UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        pSVar10 = (System_String_o *)(pUVar6->fields).method_ptr;
        if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = UI_UIManager__GetLocaleCommon(pSVar10,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  ((UnityEngine_Transform_o *)onDropdownOptionSelect,(UI_ElementStyle_o *)style,pSVar10,0.0,
                   0.0,pUVar11,(MethodInfo *)pSVar7);
        uVar16 = uVar16 + 1;
        pMVar15 = extraout_RDX_00;
      } while ((long)uVar16 < (long)*(int *)(uVar9 + 0x18));
      goto label_043817d2;
    }
label_043820ed:
    __this_03 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
    pUVar11 = __this_03;
    System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
    (__this_03->fields).invoke_impl = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).invoke_impl,__this);
    iVar2 = *(int *)(uVar9 + 0x18);
    title = onDropdownOptionSelect;
joined_r0x04382169:
    if (iVar2 == 0) goto label_043821bc;
    (__this_03->fields).method_ptr = (intptr_t)pUVar6->klass;
    il2cpp_runtime_helper_022b4080(&__this_03->fields);
    il2cpp_runtime_helper_022b2c90();
label_04382184:
    title = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_2);
    pUVar11 = title;
    System_Object___ctor((Il2CppObject *)title,(MethodInfo *)0x0);
    if (title == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043821d5;
    (title->fields).invoke_impl = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&(title->fields).invoke_impl,__this);
    if ((int)(__this_03->fields).invoke_impl == 0) goto label_043821bc;
  }
  pUVar11 = (UnityEngine_Events_UnityAction_o *)&title->fields;
  (title->fields).method_ptr = (intptr_t)pUVar6->klass;
  il2cpp_runtime_helper_022b4080();
label_043821d5:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$OnWeatherSetSelected
// il2cpp: void UI_CreateGameWeatherPanel__OnWeatherSetSelected (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x43828c0

void UI_CreateGameWeatherPanel__OnWeatherSetSelected(UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint value;
  long lVar2;
  long lVar3;
  Settings_TypedSetting_int__o *__this_00;
  UI_BasePanel_o *__this_01;
  UI_SetNamePopup_o *__this_02;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UI_ConfirmPopup_o *__this_03;
  Settings_BaseSetSetting_c *pSVar6;
  char cVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  Il2CppObject *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  long *plVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  Settings_BoolSetting_c *value_00;
  Settings_BaseSetSetting_o *pSVar15;
  System_String_o **ppSVar16;
  MethodInfo_2A23FA0 **ppMVar17;
  UI_ExportPopup_o *__this_05;
  UI_ImportPopup_o *__this_06;
  
  ppMVar17 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae231 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar17 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae231 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar2 != 0) && (lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48), lVar3 != 0)) &&
      (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
    __this_00 = *(Settings_TypedSetting_int__o **)(lVar2 + 0x60);
    ppMVar17 = (MethodInfo_2A23FA0 **)0x0;
    if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
      value = *(uint *)(lVar3 + 0x14);
      method = (MethodInfo *)(ulong)value;
      Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
      __this_01 = (__this->fields).Parent;
      ppMVar17 = (MethodInfo_2A23FA0 **)0x0;
      if (__this_01 != (UI_BasePanel_o *)0x0) {
        UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae232 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanEditSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"ExportSchedule");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"ImportSchedule");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"DeleteWarning");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"New set");
    g_data_057ae232 = '\x01';
  }
  __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Il2CppObject *)0x0) {
    __this_04[1].klass = (Il2CppClass *)ppMVar17;
    il2cpp_runtime_helper_022b4080(__this_04 + 1,ppMVar17);
    __this_04[1].monitor = method;
    il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 != 0) {
      __this_02 = *(UI_SetNamePopup_o **)(lVar3 + 0x88);
      pSVar12 = __this_04[1].monitor;
      uVar8 = _PrivateImplementationDetails___ComputeStringHash(pSVar12,(MethodInfo *)0x0);
      if (uVar8 < 0x658f3665) {
        if (uVar8 < 0x573e0af5) {
          if (uVar8 == 0x3302295a) {
            bVar9 = System_String__op_Equality(pSVar12,"ExportSchedule",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (((lVar3 != 0) && (lVar2 != 0)) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              __this_05 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                  (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar15 != (Settings_BaseSetSetting_o *)0x0) {
                bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
                if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
                pSVar5 = pSVar15[3].fields.Preset;
                if ((pSVar5 != (Settings_BoolSetting_o *)0x0) && (__this_05 != (UI_ExportPopup_o *)0x0)) {
                  value_00 = pSVar5[1].klass;
                  goto label_04383235;
                }
              }
            }
          }
          else {
            if (uVar8 != 0x573e0af4) {
              return;
            }
            bVar9 = System_String__op_Equality(pSVar12,"Import",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            if ((lVar2 != 0) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              bVar9 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
              if ((char)bVar9 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar2 != 0) {
                __this_06 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
                pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                goto label_04382e03;
              }
            }
          }
        }
        else if (uVar8 == 0x5797ea6a) {
          bVar9 = System_String__op_Equality(pSVar12,"Delete",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          if ((lVar2 != 0) &&
             (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
              (Settings_SetSettingsContainer_T__o *)0x0)) {
            bVar9 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                              (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
            if ((char)bVar9 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar2 != 0) {
              __this_03 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
              pSVar12 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
              pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pSVar11 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
              if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
                UI_ConfirmPopup__Show(__this_03,pSVar12,pUVar10,pSVar11,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          if (uVar8 != 0x658f3664) {
            return;
          }
          ppSVar16 = &"Copy";
          bVar9 = System_String__op_Equality(pSVar12,"Copy",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382f4d:
          UnityEngine_Events_UnityAction___ctor();
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = UI_UIManager__GetLocaleCommon(*ppSVar16,(MethodInfo *)0x0);
          pSVar12 = "New set";
joined_r0x04382d28:
          if (__this_02 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show(__this_02,pSVar12,pUVar10,pSVar11,(System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (uVar8 < 0xc80631f4) {
        if (uVar8 == 0x990de47d) {
          ppSVar16 = &"Create";
          bVar9 = System_String__op_Equality(pSVar12,"Create",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          goto label_04382f4d;
        }
        if (uVar8 != 0xc80631f3) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar12,"Rename",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if ((lVar2 != 0) &&
           (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
            (Settings_SetSettingsContainer_T__o *)0x0)) {
          bVar9 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
          if ((char)bVar9 == '\0') {
            return;
          }
          if (((*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0) &&
              (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                   (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
              pSVar15 != (Settings_BaseSetSetting_o *)0x0)) &&
             (pSVar4 = (pSVar15->fields).Name, pSVar4 != (Settings_StringSetting_o *)0x0)) {
            pSVar12 = (pSVar4->fields)._value;
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
            goto joined_r0x04382d28;
          }
        }
      }
      else if (uVar8 == 0xe86349d3) {
        bVar9 = System_String__op_Equality(pSVar12,"Export",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (((lVar2 != 0) &&
            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
             (Settings_SetSettingsContainer_T__o *)0x0)) &&
           (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
           pSVar15 != (Settings_BaseSetSetting_o *)0x0)) {
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
             ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
          pSVar6 = pSVar15->klass;
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar6->_2).naturalAligment < bVar1) ||
             ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
          plVar13 = (long *)(*(pSVar6->vtable)._5_SerializeToJsonObject.methodPtr)(pSVar15);
          if (plVar13 == (long *)0x0) goto label_0438324a;
          cVar7 = (**(code **)(*plVar13 + 0x2f8))(plVar13,"Preset",*(undefined8 *)(*plVar13 + 0x300));
          if (cVar7 == '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043831f5;
label_0438318a:
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          }
          else {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
            (**(code **)(*plVar13 + 0x1b8))(plVar13,"Preset",pSVar14,*(undefined8 *)(*plVar13 + 0x1c0));
            if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438318a;
label_043831f5:
            il2cpp_runtime_helper_02337ed0();
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          }
          if (lVar2 != 0) {
            __this_05 = *(UI_ExportPopup_o **)(lVar2 + 0x68);
            value_00 = (Settings_BoolSetting_c *)
                       (**(code **)(*plVar13 + 0x318))(plVar13,4,*(undefined8 *)(*plVar13 + 800));
            if (__this_05 != (UI_ExportPopup_o *)0x0) {
label_04383235:
              UI_ExportPopup__Show(__this_05,(System_String_o *)value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        if (uVar8 != 0xe9d2f4f9) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar12,"ImportSchedule",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar2 != 0) {
          __this_06 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382e03:
          UnityEngine_Events_UnityAction___ctor();
          if (__this_06 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_06,pUVar10,1,"",(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0438324a:
  pSVar15 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_0438324f:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$OnWeatherPanelButtonClick
// il2cpp: void UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick (UI_CreateGameWeatherPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4382960

void UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick
               (UI_CreateGameWeatherPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  UI_SetNamePopup_o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UI_ConfirmPopup_o *__this_01;
  Settings_BaseSetSetting_c *pSVar6;
  char cVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  long *plVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  Settings_BoolSetting_c *value;
  Settings_BaseSetSetting_o *pSVar15;
  System_String_o **ppSVar16;
  UI_ExportPopup_o *__this_03;
  UI_ImportPopup_o *__this_04;
  
  if (g_data_057ae232 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanEditSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"ExportSchedule");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"ImportSchedule");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"DeleteWarning");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"New set");
    g_data_057ae232 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_02 + 1,__this);
    __this_02[1].monitor = name;
    il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 != 0) {
      __this_00 = *(UI_SetNamePopup_o **)(lVar3 + 0x88);
      pSVar12 = __this_02[1].monitor;
      uVar8 = _PrivateImplementationDetails___ComputeStringHash(pSVar12,(MethodInfo *)0x0);
      if (uVar8 < 0x658f3665) {
        if (uVar8 < 0x573e0af5) {
          if (uVar8 == 0x3302295a) {
            bVar9 = System_String__op_Equality(pSVar12,"ExportSchedule",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (((lVar3 != 0) && (lVar2 != 0)) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              __this_03 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                  (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar15 != (Settings_BaseSetSetting_o *)0x0) {
                bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
                if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
                pSVar5 = pSVar15[3].fields.Preset;
                if ((pSVar5 != (Settings_BoolSetting_o *)0x0) && (__this_03 != (UI_ExportPopup_o *)0x0)) {
                  value = pSVar5[1].klass;
                  goto label_04383235;
                }
              }
            }
          }
          else {
            if (uVar8 != 0x573e0af4) {
              return;
            }
            bVar9 = System_String__op_Equality(pSVar12,"Import",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            if ((lVar2 != 0) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              bVar9 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
              if ((char)bVar9 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar2 != 0) {
                __this_04 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
                pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                goto label_04382e03;
              }
            }
          }
        }
        else if (uVar8 == 0x5797ea6a) {
          bVar9 = System_String__op_Equality(pSVar12,"Delete",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          if ((lVar2 != 0) &&
             (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
              (Settings_SetSettingsContainer_T__o *)0x0)) {
            bVar9 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                              (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
            if ((char)bVar9 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar2 != 0) {
              __this_01 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
              pSVar12 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
              pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pSVar11 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
              if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
                UI_ConfirmPopup__Show(__this_01,pSVar12,pUVar10,pSVar11,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          if (uVar8 != 0x658f3664) {
            return;
          }
          ppSVar16 = &"Copy";
          bVar9 = System_String__op_Equality(pSVar12,"Copy",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382f4d:
          UnityEngine_Events_UnityAction___ctor();
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = UI_UIManager__GetLocaleCommon(*ppSVar16,(MethodInfo *)0x0);
          pSVar12 = "New set";
joined_r0x04382d28:
          if (__this_00 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show(__this_00,pSVar12,pUVar10,pSVar11,(System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (uVar8 < 0xc80631f4) {
        if (uVar8 == 0x990de47d) {
          ppSVar16 = &"Create";
          bVar9 = System_String__op_Equality(pSVar12,"Create",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          goto label_04382f4d;
        }
        if (uVar8 != 0xc80631f3) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar12,"Rename",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if ((lVar2 != 0) &&
           (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
            (Settings_SetSettingsContainer_T__o *)0x0)) {
          bVar9 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
          if ((char)bVar9 == '\0') {
            return;
          }
          if (((*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0) &&
              (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                   (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
              pSVar15 != (Settings_BaseSetSetting_o *)0x0)) &&
             (pSVar4 = (pSVar15->fields).Name, pSVar4 != (Settings_StringSetting_o *)0x0)) {
            pSVar12 = (pSVar4->fields)._value;
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
            goto joined_r0x04382d28;
          }
        }
      }
      else if (uVar8 == 0xe86349d3) {
        bVar9 = System_String__op_Equality(pSVar12,"Export",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (((lVar2 != 0) &&
            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
             (Settings_SetSettingsContainer_T__o *)0x0)) &&
           (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
           pSVar15 != (Settings_BaseSetSetting_o *)0x0)) {
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
             ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
          pSVar6 = pSVar15->klass;
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar6->_2).naturalAligment < bVar1) ||
             ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
          plVar13 = (long *)(*(pSVar6->vtable)._5_SerializeToJsonObject.methodPtr)(pSVar15);
          if (plVar13 == (long *)0x0) goto label_0438324a;
          cVar7 = (**(code **)(*plVar13 + 0x2f8))(plVar13,"Preset",*(undefined8 *)(*plVar13 + 0x300));
          if (cVar7 == '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043831f5;
label_0438318a:
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          }
          else {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
            (**(code **)(*plVar13 + 0x1b8))(plVar13,"Preset",pSVar14,*(undefined8 *)(*plVar13 + 0x1c0));
            if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438318a;
label_043831f5:
            il2cpp_runtime_helper_02337ed0();
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          }
          if (lVar2 != 0) {
            __this_03 = *(UI_ExportPopup_o **)(lVar2 + 0x68);
            value = (Settings_BoolSetting_c *)
                    (**(code **)(*plVar13 + 0x318))(plVar13,4,*(undefined8 *)(*plVar13 + 800));
            if (__this_03 != (UI_ExportPopup_o *)0x0) {
label_04383235:
              UI_ExportPopup__Show(__this_03,(System_String_o *)value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        if (uVar8 != 0xe9d2f4f9) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar12,"ImportSchedule",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar2 != 0) {
          __this_04 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382e03:
          UnityEngine_Events_UnityAction___ctor();
          if (__this_04 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_04,pUVar10,1,"",(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0438324a:
  pSVar15 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_0438324f:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$OnWeatherSetOperationFinish
// il2cpp: void UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish (UI_CreateGameWeatherPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4383270

void UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
               (UI_CreateGameWeatherPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_IntSetting_o *__this_01;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *__this_02;
  Settings_TypedSetting_T__o *__this_03;
  char cVar7;
  bool_conflict bVar8;
  int iVar9;
  VirtualInvokeData *pVVar10;
  Settings_ListSetting_T__c *pSVar11;
  Weather_WeatherSchedule_o *__this_04;
  Settings_BaseSetSetting_o *pSVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  undefined8 *puVar15;
  Il2CppRuntimeInterfaceOffsetPair *pIVar16;
  Settings_ListSetting_T__o *pSVar17;
  long lVar18;
  UI_BasePanel_o *__this_05;
  UI_ImportPopup_o *unaff_R15;
  undefined1 auVar19 [12];
  
  if (g_data_057ae233 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CopySelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"ImportSchedule");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Import");
    g_data_057ae233 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438329f;
label_043833d2:
    il2cpp_runtime_helper_02337ed0();
    lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043833d2;
label_0438329f:
    lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((lVar18 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48), lVar4 != 0)) {
    lVar5 = *(long *)(lVar18 + 0x88);
    __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20);
    unaff_R15 = *(UI_ImportPopup_o **)(lVar18 + 0x70);
    bVar8 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      bVar8 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        bVar8 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          bVar8 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            bVar8 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              bVar8 = System_String__op_Equality(name,"ImportSchedule",(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                __this_04 = (Weather_WeatherSchedule_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSchedule);
                Weather_WeatherSchedule___ctor(__this_04,(MethodInfo *)0x0);
                if (((unaff_R15 != (UI_ImportPopup_o *)0x0) &&
                    (pSVar6 = (unaff_R15->fields).ImportSetting, pSVar6 != (Settings_StringSetting_o *)0x0))
                   && (__this_04 != (Weather_WeatherSchedule_o *)0x0)) {
                  pSVar14 = Weather_WeatherSchedule__DeserializeFromCSV
                                      (__this_04,(pSVar6->fields)._value,(MethodInfo *)0x0);
                  bVar8 = System_String__op_Inequality
                                    (pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                     (MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') goto label_04383866;
                  if ((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
                     (pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
                     pSVar12 != (Settings_BaseSetSetting_o *)0x0)) {
                    bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
                    if ((pSVar12->klass->_2).naturalAligment < bVar1) goto label_04383953;
                    if ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)
                    goto label_04383953;
                    pSVar6 = (unaff_R15->fields).ImportSetting;
                    if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
                       (__this_03 = (Settings_TypedSetting_T__o *)pSVar12[3].fields.Preset,
                       __this_03 != (Settings_TypedSetting_T__o *)0x0)) {
                      Settings_TypedSetting_object___set_Value
                                (__this_03,(Il2CppObject *)(pSVar6->fields)._value,MethodInfo_Void_set_Value);
                      (*(unaff_R15->klass->vtable)._22_Hide.methodPtr)(unaff_R15);
                      __this_05 = (__this->fields).Parent;
                      goto joined_r0x0438352d;
                    }
                  }
                }
                goto label_0438391c;
              }
            }
            else {
              if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04383921;
              pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar12 == (Settings_BaseSetSetting_o *)0x0) goto label_04383926;
              pSVar6 = (pSVar12->fields).Name;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_0438392b;
              pSVar14 = (pSVar6->fields)._value;
              pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (unaff_R15 == (UI_ImportPopup_o *)0x0) goto label_04383930;
              pSVar6 = (unaff_R15->fields).ImportSetting;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_04383935;
              if (pSVar12 == (Settings_BaseSetSetting_o *)0x0) goto label_0438393a;
              (*(pSVar12->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                        (pSVar12,(pSVar6->fields)._value,
                         (pSVar12->klass->vtable)._8_DeserializeFromJsonString.method);
              pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar12 == (Settings_BaseSetSetting_o *)0x0) goto label_0438393f;
              __this_02 = (pSVar12->fields).Preset;
              if (__this_02 == (Settings_BoolSetting_o *)0x0) goto label_04383944;
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_02,0,MethodInfo_Void_set_Value);
              pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar12 == (Settings_BaseSetSetting_o *)0x0) goto label_04383949;
              pSVar6 = (pSVar12->fields).Name;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_0438394e;
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
              (*(unaff_R15->klass->vtable)._22_Hide.methodPtr)(unaff_R15);
            }
label_043836a0:
            __this_05 = (__this->fields).Parent;
            goto joined_r0x0438352d;
          }
          if (((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)) &&
             (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            Settings_SetSettingsContainer_object___CopySelectedSet
                      (__this_00,*(System_String_o **)(*(long *)(lVar5 + 0xb8) + 0x18),MethodInfo_Void_CopySelectedSet);
            pSVar17 = (__this_00->fields).Sets;
            if (pSVar17 != (Settings_ListSetting_T__o *)0x0) {
              unaff_R15 = (UI_ImportPopup_o *)(__this_00->fields).SelectedSetIndex;
              pSVar11 = pSVar17->klass;
              uVar3._0_1_ = (pSVar11->_2).rank;
              uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
              if ((ulong)uVar3 != 0) {
                pIVar16 = (pSVar11->_1).interfaceOffsets;
                lVar18 = 0;
                do {
                  if (*(long *)((long)&pIVar16->interfaceType + lVar18) == TypeInfo_IListSetting) goto label_04383664;
                  lVar18 = lVar18 + 0x10;
                } while ((ulong)uVar3 << 4 != lVar18);
              }
              goto label_043834c3;
            }
          }
        }
        else if ((((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
                  (pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
                  pSVar12 != (Settings_BaseSetSetting_o *)0x0)) && (lVar5 != 0)) &&
                ((*(long *)(lVar5 + 0xb8) != 0 &&
                 (pSVar6 = (pSVar12->fields).Name, pSVar6 != (Settings_StringSetting_o *)0x0)))) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,*(Il2CppObject **)(*(long *)(lVar5 + 0xb8) + 0x18),
                     MethodInfo_Void_set_Value);
          __this_05 = (__this->fields).Parent;
          goto joined_r0x0438352d;
        }
      }
      else if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet(__this_00,MethodInfo_Void_DeleteSelectedSet);
        __this_01 = (__this_00->fields).SelectedSetIndex;
        if (__this_01 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,0,MethodInfo_Void_set_Value);
          __this_05 = (__this->fields).Parent;
joined_r0x0438352d:
          if (__this_05 != (UI_BasePanel_o *)0x0) goto label_043836ad;
        }
      }
    }
    else if (((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)) &&
            (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
      Settings_SetSettingsContainer_object___CreateSet
                (__this_00,*(System_String_o **)(*(long *)(lVar5 + 0xb8) + 0x18),MethodInfo_Void_CreateSet);
      pSVar17 = (__this_00->fields).Sets;
      if (pSVar17 != (Settings_ListSetting_T__o *)0x0) {
        unaff_R15 = (UI_ImportPopup_o *)(__this_00->fields).SelectedSetIndex;
        pSVar11 = pSVar17->klass;
        uVar2._0_1_ = (pSVar11->_2).rank;
        uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar16 = (pSVar11->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar16->interfaceType + lVar18) == TypeInfo_IListSetting) goto label_04383664;
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar18);
        }
label_043834c3:
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IListSetting,0);
        goto label_04383677;
      }
    }
  }
  goto label_0438391c;
label_04383664:
  pVVar10 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar16->offset + lVar18);
label_04383677:
  iVar9 = (*pVVar10->methodPtr)(pSVar17,pVVar10->method);
  if (unaff_R15 != (UI_ImportPopup_o *)0x0) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_R15,iVar9 + -1,MethodInfo_Void_set_Value);
    goto label_043836a0;
  }
label_0438391c:
  do {
    do {
      il2cpp_runtime_helper_022b2c90();
label_04383921:
      il2cpp_runtime_helper_022b2c90();
label_04383926:
      il2cpp_runtime_helper_022b2c90();
label_0438392b:
      il2cpp_runtime_helper_022b2c90();
label_04383930:
      il2cpp_runtime_helper_022b2c90();
label_04383935:
      il2cpp_runtime_helper_022b2c90();
label_0438393a:
      il2cpp_runtime_helper_022b2c90();
label_0438393f:
      il2cpp_runtime_helper_022b2c90();
label_04383944:
      il2cpp_runtime_helper_022b2c90();
label_04383949:
      il2cpp_runtime_helper_022b2c90();
label_0438394e:
      pSVar12 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_04383953:
      auVar19 = il2cpp_runtime_helper_022b2fd0(pSVar12);
      if (auVar19._8_4_ != 1) {
        _Unwind_Resume(auVar19._0_8_);
      }
      puVar13 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
      cVar7 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar13);
      if (cVar7 == '\0') {
        puVar15 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar15 = *puVar13;
        __cxa_throw(puVar15,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
    } while (unaff_R15 == (UI_ImportPopup_o *)0x0);
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid weather preset.");
label_04383866:
    UI_ImportPopup__ShowError(unaff_R15,pSVar14,(MethodInfo *)0x0);
    __this_05 = (__this->fields).Parent;
  } while (__this_05 == (UI_BasePanel_o *)0x0);
label_043836ad:
  UI_BasePanel__RebuildCategoryPanel(__this_05,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___ctor (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4383a80

void UI_CreateGameWeatherPanel___ctor(UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  UI_CreateGameCategoryPanel___ctor((UI_CreateGameCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$<Setup>b__2_0
// il2cpp: void UI_CreateGameWeatherPanel___Setup_b__2_0 (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4383a90

void UI_CreateGameWeatherPanel___Setup_b__2_0(UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint value;
  long lVar2;
  long lVar3;
  Settings_TypedSetting_int__o *__this_00;
  UI_BasePanel_o *__this_01;
  UI_SetNamePopup_o *__this_02;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UI_ConfirmPopup_o *__this_03;
  Settings_BaseSetSetting_c *pSVar6;
  char cVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  Il2CppObject *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  long *plVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  Settings_BoolSetting_c *value_00;
  Settings_BaseSetSetting_o *pSVar15;
  System_String_o **ppSVar16;
  MethodInfo_2A23FA0 **ppMVar17;
  UI_ExportPopup_o *__this_05;
  UI_ImportPopup_o *__this_06;
  
  ppMVar17 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae231 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar17 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae231 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar2 != 0) && (lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48), lVar3 != 0)) &&
      (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
    __this_00 = *(Settings_TypedSetting_int__o **)(lVar2 + 0x60);
    ppMVar17 = (MethodInfo_2A23FA0 **)0x0;
    if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
      value = *(uint *)(lVar3 + 0x14);
      method = (MethodInfo *)(ulong)value;
      Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
      __this_01 = (__this->fields).Parent;
      ppMVar17 = (MethodInfo_2A23FA0 **)0x0;
      if (__this_01 != (UI_BasePanel_o *)0x0) {
        UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae232 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanEditSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherPanelButtonClick_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"ExportSchedule");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"ImportSchedule");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"DeleteWarning");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"New set");
    g_data_057ae232 = '\x01';
  }
  __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Il2CppObject *)0x0) {
    __this_04[1].klass = (Il2CppClass *)ppMVar17;
    il2cpp_runtime_helper_022b4080(__this_04 + 1,ppMVar17);
    __this_04[1].monitor = method;
    il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 != 0) {
      __this_02 = *(UI_SetNamePopup_o **)(lVar3 + 0x88);
      pSVar12 = __this_04[1].monitor;
      uVar8 = _PrivateImplementationDetails___ComputeStringHash(pSVar12,(MethodInfo *)0x0);
      if (uVar8 < 0x658f3665) {
        if (uVar8 < 0x573e0af5) {
          if (uVar8 == 0x3302295a) {
            bVar9 = System_String__op_Equality(pSVar12,"ExportSchedule",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (((lVar3 != 0) && (lVar2 != 0)) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              __this_05 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
              pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                  (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar15 != (Settings_BaseSetSetting_o *)0x0) {
                bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
                if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
                pSVar5 = pSVar15[3].fields.Preset;
                if ((pSVar5 != (Settings_BoolSetting_o *)0x0) && (__this_05 != (UI_ExportPopup_o *)0x0)) {
                  value_00 = pSVar5[1].klass;
                  goto label_04383235;
                }
              }
            }
          }
          else {
            if (uVar8 != 0x573e0af4) {
              return;
            }
            bVar9 = System_String__op_Equality(pSVar12,"Import",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            if ((lVar2 != 0) &&
               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0)) {
              bVar9 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
              if ((char)bVar9 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar2 != 0) {
                __this_06 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
                pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                goto label_04382e03;
              }
            }
          }
        }
        else if (uVar8 == 0x5797ea6a) {
          bVar9 = System_String__op_Equality(pSVar12,"Delete",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          if ((lVar2 != 0) &&
             (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
              (Settings_SetSettingsContainer_T__o *)0x0)) {
            bVar9 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                              (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
            if ((char)bVar9 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar2 != 0) {
              __this_03 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
              pSVar12 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
              pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pSVar11 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
              if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
                UI_ConfirmPopup__Show(__this_03,pSVar12,pUVar10,pSVar11,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          if (uVar8 != 0x658f3664) {
            return;
          }
          ppSVar16 = &"Copy";
          bVar9 = System_String__op_Equality(pSVar12,"Copy",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382f4d:
          UnityEngine_Events_UnityAction___ctor();
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = UI_UIManager__GetLocaleCommon(*ppSVar16,(MethodInfo *)0x0);
          pSVar12 = "New set";
joined_r0x04382d28:
          if (__this_02 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show(__this_02,pSVar12,pUVar10,pSVar11,(System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (uVar8 < 0xc80631f4) {
        if (uVar8 == 0x990de47d) {
          ppSVar16 = &"Create";
          bVar9 = System_String__op_Equality(pSVar12,"Create",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          goto label_04382f4d;
        }
        if (uVar8 != 0xc80631f3) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar12,"Rename",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if ((lVar2 != 0) &&
           (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
            (Settings_SetSettingsContainer_T__o *)0x0)) {
          bVar9 = Settings_SetSettingsContainer_object___CanEditSelectedSet
                            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
          if ((char)bVar9 == '\0') {
            return;
          }
          if (((*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
                (Settings_SetSettingsContainer_T__o *)0x0) &&
              (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                   (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
              pSVar15 != (Settings_BaseSetSetting_o *)0x0)) &&
             (pSVar4 = (pSVar15->fields).Name, pSVar4 != (Settings_StringSetting_o *)0x0)) {
            pSVar12 = (pSVar4->fields)._value;
            pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
            goto joined_r0x04382d28;
          }
        }
      }
      else if (uVar8 == 0xe86349d3) {
        bVar9 = System_String__op_Equality(pSVar12,"Export",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (((lVar2 != 0) &&
            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
             (Settings_SetSettingsContainer_T__o *)0x0)) &&
           (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
           pSVar15 != (Settings_BaseSetSetting_o *)0x0)) {
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
             ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
          pSVar6 = pSVar15->klass;
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar6->_2).naturalAligment < bVar1) ||
             ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto label_0438324f;
          plVar13 = (long *)(*(pSVar6->vtable)._5_SerializeToJsonObject.methodPtr)(pSVar15);
          if (plVar13 == (long *)0x0) goto label_0438324a;
          cVar7 = (**(code **)(*plVar13 + 0x2f8))(plVar13,"Preset",*(undefined8 *)(*plVar13 + 0x300));
          if (cVar7 == '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043831f5;
label_0438318a:
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          }
          else {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
            (**(code **)(*plVar13 + 0x1b8))(plVar13,"Preset",pSVar14,*(undefined8 *)(*plVar13 + 0x1c0));
            if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0438318a;
label_043831f5:
            il2cpp_runtime_helper_02337ed0();
            lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          }
          if (lVar2 != 0) {
            __this_05 = *(UI_ExportPopup_o **)(lVar2 + 0x68);
            value_00 = (Settings_BoolSetting_c *)
                       (**(code **)(*plVar13 + 0x318))(plVar13,4,*(undefined8 *)(*plVar13 + 800));
            if (__this_05 != (UI_ExportPopup_o *)0x0) {
label_04383235:
              UI_ExportPopup__Show(__this_05,(System_String_o *)value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        if (uVar8 != 0xe9d2f4f9) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar12,"ImportSchedule",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar2 != 0) {
          __this_06 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04382e03:
          UnityEngine_Events_UnityAction___ctor();
          if (__this_06 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_06,pUVar10,1,"",(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0438324a:
  pSVar15 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
label_0438324f:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
  return;
}


