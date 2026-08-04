// Type: UI.CharacterEditorStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorStatsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorStatsPanel.cs
// --------------------------------

// UI.CharacterEditorStatsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorStatsPanel__get_Title (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4364f20

System_String_o *
UI_CharacterEditorStatsPanel__get_Title(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae1c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1c0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Stats","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorStatsPanel$$get_Width
// il2cpp: float UI_CharacterEditorStatsPanel__get_Width (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4364fc0

float UI_CharacterEditorStatsPanel__get_Width(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorStatsPanel$$get_Height
// il2cpp: float UI_CharacterEditorStatsPanel__get_Height (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4364fd0

float UI_CharacterEditorStatsPanel__get_Height(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 360.0;
}


// UI.CharacterEditorStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorStatsPanel__get_VerticalSpacing (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4364fe0

float UI_CharacterEditorStatsPanel__get_VerticalSpacing
                (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorStatsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4364ff0

int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding
                  (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4365000

int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding
                  (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$Setup
// il2cpp: void UI_CharacterEditorStatsPanel__Setup (UI_CharacterEditorStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4365010

void UI_CharacterEditorStatsPanel__Setup
               (UI_CharacterEditorStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  System_Collections_Hashtable_o *str;
  Il2CppRuntimeInterfaceOffsetPair *UNRECOVERED_JUMPTABLE_00;
  Il2CppClass **vtableDispatch;
  float fVar5;
  bool_conflict bVar6;
  UI_ElementStyle_o *in_RAX;
  Settings_BaseSetSetting_o *themePanel;
  UI_ElementStyle_o *pUVar7;
  Characters_HumanStats_o *pCVar8;
  System_String_o *pSVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  Il2CppObject *pIVar14;
  MethodInfo *pMVar15;
  int extraout_EDX;
  ulong uVar16;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar17;
  long *unaff_RBP;
  Il2CppClass *pIVar18;
  MethodInfo_24E7B40 *a;
  Settings_BaseSetSetting_o *pSVar19;
  Settings_StringSetting_o *pSVar20;
  UI_HeadedPanel_o *__this_01;
  Characters_HumanStats_o *unaff_R12;
  System_String_o *unaff_R13;
  MethodInfo **ppMVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  undefined1 auStack_6c [4];
  Settings_BaseSetSetting_o *pSStack_68;
  Characters_HumanStats_o *pCStack_60;
  System_String_o *pSStack_58;
  UI_ElementStyle_o *pUStack_50;
  UI_CharacterEditorStatsPanel_o *pUStack_48;
  Il2CppClass *pIStack_40;
  UI_ElementStyle_o *pUStack_38;
  
  pUStack_38 = in_RAX;
  if (g_data_057ae1c1 == '\0') {
    pIStack_40 = (Il2CppClass *)0x436503a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_0);
    pIStack_40 = (Il2CppClass *)0x4365046;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_1);
    pIStack_40 = (Il2CppClass *)0x4365052;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pIStack_40 = (Il2CppClass *)0x436505e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    pIStack_40 = (Il2CppClass *)0x436506a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    pIStack_40 = (Il2CppClass *)0x4365076;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    pIStack_40 = (Il2CppClass *)0x4365082;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStack_40 = (Il2CppClass *)0x436508e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStack_40 = (Il2CppClass *)0x436509a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStack_40 = (Il2CppClass *)0x43650a6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pIStack_40 = (Il2CppClass *)0x43650b2;
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    pIStack_40 = (Il2CppClass *)0x43650be;
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    pIStack_40 = (Il2CppClass *)0x43650ca;
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    pIStack_40 = (Il2CppClass *)0x43650d6;
    il2cpp_runtime_helper_023445d0(&"Stats");
    pIStack_40 = (Il2CppClass *)0x43650e2;
    il2cpp_runtime_helper_023445d0(&"Speed");
    pIStack_40 = (Il2CppClass *)0x43650ee;
    il2cpp_runtime_helper_023445d0(&"Ammunition");
    pIStack_40 = (Il2CppClass *)0x43650fa;
    il2cpp_runtime_helper_023445d0(&"EditStats");
    pIStack_40 = (Il2CppClass *)0x4365106;
    il2cpp_runtime_helper_023445d0(&"Gas");
    pIStack_40 = (Il2CppClass *)0x4365112;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1c1 = '\x01';
  }
  pIStack_40 = (Il2CppClass *)0x4365126;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pIStack_40 = (Il2CppClass *)0x4365139;
  themePanel = (Settings_BaseSetSetting_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pIStack_40 = (Il2CppClass *)0x436514b;
  pUVar7 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pIVar18 = (Il2CppClass *)&g_data_00000018;
  pIStack_40 = (Il2CppClass *)0x4365170;
  UI_ElementStyle___ctor(pUVar7,0x18,130.0,20.0,(System_String_o *)themePanel,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  ppMVar21 = (MethodInfo **)pUVar7;
  if ((lVar3 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) {
label_0436541c:
    pIStack_40 = (Il2CppClass *)0x4365421;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIStack_40 = (Il2CppClass *)0x43651aa;
    themePanel = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (themePanel == (Settings_BaseSetSetting_o *)0x0) {
label_043651e4:
      unaff_RBP = &TypeInfo_HumanStats;
      pIStack_40 = (Il2CppClass *)0x43651f4;
      unaff_R12 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
      pIVar18 = (Il2CppClass *)0x0;
      pIStack_40 = (Il2CppClass *)0x4365203;
      Characters_HumanStats___ctor(unaff_R12,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
      if ((themePanel != (Settings_BaseSetSetting_o *)0x0) &&
         (pSVar4 = themePanel[4].fields.Settings,
         pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
        str = (pSVar4->fields)._objectsTable;
        if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
          pIStack_40 = (Il2CppClass *)0x4365232;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_40 = (Il2CppClass *)0x436523f;
        pCVar8 = Characters_HumanStats__Deserialize(unaff_R12,(System_String_o *)str,(MethodInfo *)0x0);
        unaff_RBP = (long *)"Stats";
        unaff_R13 = "CharacterEditor";
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pIStack_40 = (Il2CppClass *)0x436526e;
          il2cpp_runtime_helper_02337ed0();
        }
        ppMVar21 = &"";
        pIStack_40 = (Il2CppClass *)0x4365297;
        pMVar15 = "";
        pIVar18 = (Il2CppClass *)unaff_RBP;
        pUStack_38 = pUVar7;
        pSVar9 = UI_UIManager__GetLocale
                           (unaff_R13,(System_String_o *)unaff_RBP,"Acceleration",
                            (System_String_o *)"",(System_String_o *)"",(MethodInfo *)0x0)
        ;
        themePanel = (Settings_BaseSetSetting_o *)0x0;
        if (pCVar8 != (Characters_HumanStats_o *)0x0) {
          pIStack_40 = (Il2CppClass *)0x43652b1;
          UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar9,(pCVar8->fields).Acceleration,pMVar15);
          pIStack_40 = (Il2CppClass *)0x43652cf;
          pMVar15 = "";
          pSVar9 = UI_UIManager__GetLocale
                             (unaff_R13,(System_String_o *)unaff_RBP,"Speed",
                              (System_String_o *)"",(System_String_o *)"",
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppClass *)0x43652dd;
          UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar9,(pCVar8->fields).Speed,pMVar15);
          pIStack_40 = (Il2CppClass *)0x43652fb;
          pMVar15 = "";
          pSVar9 = UI_UIManager__GetLocale
                             (unaff_R13,(System_String_o *)unaff_RBP,"Gas",
                              (System_String_o *)"",(System_String_o *)"",
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppClass *)0x4365309;
          UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar9,(pCVar8->fields).Gas,pMVar15);
          pIStack_40 = (Il2CppClass *)0x4365327;
          pMVar15 = "";
          pSVar9 = UI_UIManager__GetLocale
                             (unaff_R13,(System_String_o *)unaff_RBP,"Ammunition",
                              (System_String_o *)"",(System_String_o *)"",
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppClass *)0x4365335;
          UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar9,(pCVar8->fields).Ammunition,pMVar15);
          pUVar12 = (__this->fields).BottomBar;
          pIStack_40 = (Il2CppClass *)0x4365357;
          pSVar9 = UI_UIManager__GetLocale
                             (unaff_R13,(System_String_o *)unaff_RBP,"EditStats",
                              (System_String_o *)"",(System_String_o *)"",
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppClass *)0x436536c;
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pIStack_40 = (Il2CppClass *)0x4365386;
          UnityEngine_Events_UnityAction___ctor();
          pUVar7 = pUStack_38;
          pIStack_40 = (Il2CppClass *)0x43653a1;
          UI_ElementFactory__CreateTextButton(pUVar12,pUStack_38,pSVar9,0.0,pUVar10,(MethodInfo *)0x0);
          pUVar12 = (__this->fields).BottomBar;
          pIStack_40 = (Il2CppClass *)0x43653cb;
          pSVar9 = UI_UIManager__GetLocale
                             (unaff_R13,(System_String_o *)unaff_RBP,"EditPerks",
                              (System_String_o *)"",(System_String_o *)"",
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppClass *)0x43653dd;
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pIStack_40 = (Il2CppClass *)0x43653f7;
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar12,pUVar7,pSVar9,0.0,pUVar10,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_0436541c;
    }
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar18 = TypeInfo_HumanCustomSet;
    if ((bVar1 <= (themePanel->klass->_2).naturalAligment) &&
       ((themePanel->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) goto label_043651e4;
  }
  pIStack_40 = (Il2CppClass *)0x4365429;
  pSVar19 = themePanel;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_68 = themePanel;
  pCStack_60 = unaff_R12;
  pSStack_58 = unaff_R13;
  pUStack_50 = (UI_ElementStyle_o *)ppMVar21;
  pUStack_48 = __this;
  pIStack_40 = (Il2CppClass *)unaff_RBP;
  if (g_data_057ae1c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Background");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"QuestPopup");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"QuestItem");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/StatBar");
    g_data_057ae1c2 = '\x01';
  }
  a = "Prefabs/Misc/StatBar";
  pUVar11 = UI_ElementFactory__InstantiateAndBind
                      ((UnityEngine_Transform_o *)(pSVar19->fields).Name,(System_String_o *)"Prefabs/Misc/StatBar",
                       (MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    a = (MethodInfo_24E7B40 *)0x0;
    pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
    if (((pUVar12 != (UnityEngine_Transform_o *)0x0) &&
        (a = "Label",
        pUVar13 = UnityEngine_Transform__Find(pUVar12,(System_String_o *)"Label",(MethodInfo *)0x0),
        pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
       (a = MethodInfo_Text_GetComponent_Text,
       pIVar14 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text),
       pIVar14 != (Il2CppObject *)0x0)) {
      (*pIVar14->klass->vtable[0x4b].methodPtr)(pIVar14,pIVar18,pIVar14->klass->vtable[0x4b].method);
      a = "Label";
      pUVar13 = UnityEngine_Transform__Find(pUVar12,(System_String_o *)"Label",(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        pIVar14 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text)
        ;
        pSVar9 = (System_String_o *)
                 (*(((System_String_c *)pSVar19->klass)->vtable)._4_CompareTo.methodPtr)
                           (pSVar19,(((System_String_c *)pSVar19->klass)->vtable)._4_CompareTo.method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        a = "DefaultLabel";
        UVar23 = UI_UIManager__GetThemeColor
                           (pSVar9,(System_String_o *)"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0
                           );
        if (pIVar14 != (Il2CppObject *)0x0) {
          (*pIVar14->klass->vtable[0x17].methodPtr)
                    (UVar23.fields._0_8_,UVar23.fields._8_8_,pIVar14,pIVar14->klass->vtable[0x17].method);
          a = "ProgressBar";
          pUVar13 = UnityEngine_Transform__Find(pUVar12,(System_String_o *)"ProgressBar",(MethodInfo *)0x0);
          if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
             (a = MethodInfo_Slider_GetComponent_Slider,
             pIVar14 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar13,MethodInfo_Slider_GetComponent_Slider),
             pIVar14 != (Il2CppObject *)0x0)) {
            fVar22 = ((float)extraout_EDX + -50.0) / 50.0;
            fVar5 = 1.0;
            if (fVar22 <= 1.0) {
              fVar5 = fVar22;
            }
            (*pIVar14->klass->vtable[0x2f].methodPtr)
                      ((ulong)(-(uint)(0.0 <= fVar22) & (uint)fVar5),pIVar14,
                       pIVar14->klass->vtable[0x2f].method);
            a = "ProgressBar/Background";
            pUVar13 = UnityEngine_Transform__Find(pUVar12,(System_String_o *)"ProgressBar/Background",(MethodInfo *)0x0);
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              pIVar14 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar13,MethodInfo_Image_GetComponent_Image);
              a = "QuestItem";
              UVar23 = UI_UIManager__GetThemeColor
                                 ("QuestPopup",(System_String_o *)"QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pIVar14 != (Il2CppObject *)0x0) {
                (*pIVar14->klass->vtable[0x17].methodPtr)
                          (UVar23.fields._0_8_,UVar23.fields._8_8_,pIVar14,pIVar14->klass->vtable[0x17].method
                          );
                a = "ProgressBar/Fill Area/Fill";
                pUVar13 = UnityEngine_Transform__Find
                                    (pUVar12,(System_String_o *)"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
                if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                  pIVar14 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar13,MethodInfo_Image_GetComponent_Image);
                  a = "QuestItem";
                  UVar23 = UI_UIManager__GetThemeColor
                                     ("QuestPopup",(System_String_o *)"QuestItem","ProgressBarFillColor","DefaultPanel",
                                      (MethodInfo *)0x0);
                  if (pIVar14 != (Il2CppObject *)0x0) {
                    (*pIVar14->klass->vtable[0x17].methodPtr)
                              (UVar23.fields._0_8_,UVar23.fields._8_8_,pIVar14,
                               pIVar14->klass->vtable[0x17].method);
                    a = "Value";
                    pUVar13 = UnityEngine_Transform__Find
                                        (pUVar12,(System_String_o *)"Value",(MethodInfo *)0x0);
                    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                      pIVar14 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text);
                      a = (MethodInfo_24E7B40 *)0x0;
                      pSVar9 = System_Int32__ToString((int32_t)auStack_6c,(MethodInfo *)0x0);
                      if (pIVar14 != (Il2CppObject *)0x0) {
                        (*pIVar14->klass->vtable[0x4b].methodPtr)
                                  (pIVar14,pSVar9,pIVar14->klass->vtable[0x4b].method);
                        a = "Value";
                        pUVar12 = UnityEngine_Transform__Find
                                            (pUVar12,(System_String_o *)"Value",(MethodInfo *)0x0);
                        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                          pIVar14 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text);
                          pSVar9 = (System_String_o *)
                                   (*(((System_String_c *)pSVar19->klass)->vtable)._4_CompareTo.methodPtr)
                                             (pSVar19,(((System_String_c *)pSVar19->klass)->vtable).
                                                      _4_CompareTo.method);
                          a = "DefaultLabel";
                          UVar23 = UI_UIManager__GetThemeColor
                                             (pSVar9,(System_String_o *)"DefaultLabel","TextColor","DefaultPanel"
                                              ,(MethodInfo *)0x0);
                          if (pIVar14 != (Il2CppObject *)0x0) {
                            (*pIVar14->klass->vtable[0x17].methodPtr)
                                      (UVar23.fields._0_8_,UVar23.fields._8_8_,pIVar14,
                                       pIVar14->klass->vtable[0x17].method);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    il2cpp_runtime_helper_023445d0(&"EditStats");
    g_data_057ae1c3 = '\x01';
  }
  bVar6 = System_String__op_Equality((System_String_o *)a,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    bVar6 = System_String__op_Equality((System_String_o *)a,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_01 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar16 = (ulong)bVar1;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[uVar16 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pSVar20 = __this_01[1].fields._currentCategoryPanelName;
      if (pSVar20 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pSVar20[3].fields._value;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_01 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar16 = extraout_RDX_00;
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar20 = __this_01[1].fields._currentCategoryPanelName;
          __this_01 = (UI_HeadedPanel_o *)0x0;
          if (pSVar20 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365adf:
          UNRECOVERED_JUMPTABLE_00 = pSVar20->klass[1]._1.interfaceOffsets;
          (*(code *)UNRECOVERED_JUMPTABLE_00)
                    (pSVar20,pSVar20->klass[1].static_fields,uVar16,UNRECOVERED_JUMPTABLE_00);
          return;
        }
        pUVar11 = __this_01[1].fields._currentCategoryPanel;
        __this_01 = (UI_HeadedPanel_o *)0x0;
        if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
        (**(code **)&pUVar11->klass[1]._2.field_count)();
        __this_01 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar20 = __this_01[1].fields._currentCategoryPanelName;
          __this_01 = (UI_HeadedPanel_o *)0x0;
          uVar17 = extraout_RDX_02;
          if (pSVar20 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365bcb:
          vtableDispatch = pSVar20->klass[1]._1.nestedTypes;
          (*(code *)vtableDispatch)
                    (pSVar20,pSVar20->klass[1]._1.implementedInterfaces,uVar17,vtableDispatch);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_01 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar16 = (ulong)bVar1;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[uVar16 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pUVar11 = __this_01[1].fields._currentCategoryPanel;
      if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pUVar11[6].klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_01 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar16 = extraout_RDX;
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar20 = (Settings_StringSetting_o *)__this_01[1].fields._currentCategoryPanel;
          if (pSVar20 != (Settings_StringSetting_o *)0x0) goto label_04365adf;
          __this_01 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
        pSVar20 = __this_01[1].fields._currentCategoryPanelName;
        __this_01 = (UI_HeadedPanel_o *)0x0;
        if (pSVar20 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
        (*(code *)pSVar20->klass[1]._1.interfaceOffsets)();
        __this_01 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar20 = (Settings_StringSetting_o *)__this_01[1].fields._currentCategoryPanel;
          uVar17 = extraout_RDX_01;
          if (pSVar20 != (Settings_StringSetting_o *)0x0) goto label_04365bcb;
          __this_01 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04365be8:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$CreateStatBar
// il2cpp: void UI_CharacterEditorStatsPanel__CreateStatBar (UI_CharacterEditorStatsPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x4365430

void UI_CharacterEditorStatsPanel__CreateStatBar
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *title,int32_t value,MethodInfo *method
               )

{
  byte bVar1;
  char cVar2;
  Il2CppRuntimeInterfaceOffsetPair *UNRECOVERED_JUMPTABLE_00;
  Il2CppClass **vtableDispatch;
  float fVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  ulong uVar10;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar11;
  MethodInfo_24E7B40 *a;
  Settings_StringSetting_o *pSVar12;
  UI_HeadedPanel_o *__this_00;
  float fVar13;
  UnityEngine_Color_o UVar14;
  undefined1 local_34 [4];
  
  if (g_data_057ae1c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Background");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"QuestPopup");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"QuestItem");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/StatBar");
    g_data_057ae1c2 = '\x01';
  }
  a = "Prefabs/Misc/StatBar";
  pUVar5 = UI_ElementFactory__InstantiateAndBind
                     ((__this->fields).SinglePanel,(System_String_o *)"Prefabs/Misc/StatBar",(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    a = (MethodInfo_24E7B40 *)0x0;
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    if (((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
        (a = "Label",
        pUVar7 = UnityEngine_Transform__Find(pUVar6,(System_String_o *)"Label",(MethodInfo *)0x0),
        pUVar7 != (UnityEngine_Transform_o *)0x0)) &&
       (a = MethodInfo_Text_GetComponent_Text,
       pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text),
       pIVar8 != (Il2CppObject *)0x0)) {
      (*pIVar8->klass->vtable[0x4b].methodPtr)(pIVar8,title,pIVar8->klass->vtable[0x4b].method);
      a = "Label";
      pUVar7 = UnityEngine_Transform__Find(pUVar6,(System_String_o *)"Label",(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
        pSVar9 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        a = "DefaultLabel";
        UVar14 = UI_UIManager__GetThemeColor
                           (pSVar9,(System_String_o *)"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0
                           );
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x17].methodPtr)
                    (UVar14.fields._0_8_,UVar14.fields._8_8_,pIVar8,pIVar8->klass->vtable[0x17].method);
          a = "ProgressBar";
          pUVar7 = UnityEngine_Transform__Find(pUVar6,(System_String_o *)"ProgressBar",(MethodInfo *)0x0);
          if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
             (a = MethodInfo_Slider_GetComponent_Slider,
             pIVar8 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar7,MethodInfo_Slider_GetComponent_Slider),
             pIVar8 != (Il2CppObject *)0x0)) {
            fVar13 = ((float)value + -50.0) / 50.0;
            fVar3 = 1.0;
            if (fVar13 <= 1.0) {
              fVar3 = fVar13;
            }
            (*pIVar8->klass->vtable[0x2f].methodPtr)
                      ((ulong)(-(uint)(0.0 <= fVar13) & (uint)fVar3),pIVar8,pIVar8->klass->vtable[0x2f].method
                      );
            a = "ProgressBar/Background";
            pUVar7 = UnityEngine_Transform__Find(pUVar6,(System_String_o *)"ProgressBar/Background",(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pIVar8 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
              a = "QuestItem";
              UVar14 = UI_UIManager__GetThemeColor
                                 ("QuestPopup",(System_String_o *)"QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pIVar8 != (Il2CppObject *)0x0) {
                (*pIVar8->klass->vtable[0x17].methodPtr)
                          (UVar14.fields._0_8_,UVar14.fields._8_8_,pIVar8,pIVar8->klass->vtable[0x17].method);
                a = "ProgressBar/Fill Area/Fill";
                pUVar7 = UnityEngine_Transform__Find(pUVar6,(System_String_o *)"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0)
                ;
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  pIVar8 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
                  a = "QuestItem";
                  UVar14 = UI_UIManager__GetThemeColor
                                     ("QuestPopup",(System_String_o *)"QuestItem","ProgressBarFillColor","DefaultPanel",
                                      (MethodInfo *)0x0);
                  if (pIVar8 != (Il2CppObject *)0x0) {
                    (*pIVar8->klass->vtable[0x17].methodPtr)
                              (UVar14.fields._0_8_,UVar14.fields._8_8_,pIVar8,
                               pIVar8->klass->vtable[0x17].method);
                    a = "Value";
                    pUVar7 = UnityEngine_Transform__Find
                                       (pUVar6,(System_String_o *)"Value",(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      pIVar8 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
                      a = (MethodInfo_24E7B40 *)0x0;
                      pSVar9 = System_Int32__ToString((int32_t)local_34,(MethodInfo *)0x0);
                      if (pIVar8 != (Il2CppObject *)0x0) {
                        (*pIVar8->klass->vtable[0x4b].methodPtr)
                                  (pIVar8,pSVar9,pIVar8->klass->vtable[0x4b].method);
                        a = "Value";
                        pUVar6 = UnityEngine_Transform__Find
                                           (pUVar6,(System_String_o *)"Value",(MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                          pIVar8 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
                          pSVar9 = (System_String_o *)
                                   (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          a = "DefaultLabel";
                          UVar14 = UI_UIManager__GetThemeColor
                                             (pSVar9,(System_String_o *)"DefaultLabel","TextColor","DefaultPanel"
                                              ,(MethodInfo *)0x0);
                          if (pIVar8 != (Il2CppObject *)0x0) {
                            (*pIVar8->klass->vtable[0x17].methodPtr)
                                      (UVar14.fields._0_8_,UVar14.fields._8_8_,pIVar8,
                                       pIVar8->klass->vtable[0x17].method);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    il2cpp_runtime_helper_023445d0(&"EditStats");
    g_data_057ae1c3 = '\x01';
  }
  bVar4 = System_String__op_Equality((System_String_o *)a,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality((System_String_o *)a,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar10 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar10 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pSVar12 = __this_00[1].fields._currentCategoryPanelName;
      if (pSVar12 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pSVar12[3].fields._value;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar10 = extraout_RDX_00;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar12 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          if (pSVar12 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365adf:
          UNRECOVERED_JUMPTABLE_00 = pSVar12->klass[1]._1.interfaceOffsets;
          (*(code *)UNRECOVERED_JUMPTABLE_00)
                    (pSVar12,pSVar12->klass[1].static_fields,uVar10,UNRECOVERED_JUMPTABLE_00);
          return;
        }
        pUVar5 = __this_00[1].fields._currentCategoryPanel;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
        (**(code **)&pUVar5->klass[1]._2.field_count)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar12 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          uVar11 = extraout_RDX_02;
          if (pSVar12 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365bcb:
          vtableDispatch = pSVar12->klass[1]._1.nestedTypes;
          (*(code *)vtableDispatch)
                    (pSVar12,pSVar12->klass[1]._1.implementedInterfaces,uVar11,vtableDispatch);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar10 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar10 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pUVar5 = __this_00[1].fields._currentCategoryPanel;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pUVar5[6].klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar10 = extraout_RDX;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar12 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          if (pSVar12 != (Settings_StringSetting_o *)0x0) goto label_04365adf;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
        pSVar12 = __this_00[1].fields._currentCategoryPanelName;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pSVar12 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
        (*(code *)pSVar12->klass[1]._1.interfaceOffsets)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar12 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          uVar11 = extraout_RDX_01;
          if (pSVar12 != (Settings_StringSetting_o *)0x0) goto label_04365bcb;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04365be8:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorStatsPanel__OnButtonClick (UI_CharacterEditorStatsPanel_o* __this, System_String_o* button, const MethodInfo* method);
// 0x4365890

void UI_CharacterEditorStatsPanel__OnButtonClick
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *UNRECOVERED_JUMPTABLE_00;
  Il2CppClass **vtableDispatch;
  bool_conflict bVar4;
  ulong uVar5;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar6;
  Settings_StringSetting_o *pSVar7;
  UI_HeadedPanel_o *__this_00;
  
  if (g_data_057ae1c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    il2cpp_runtime_helper_023445d0(&"EditStats");
    g_data_057ae1c3 = '\x01';
  }
  bVar4 = System_String__op_Equality(button,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(button,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar5 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar5 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pSVar7 = __this_00[1].fields._currentCategoryPanelName;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pSVar7[3].fields._value;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar5 = extraout_RDX_00;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar7 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365adf:
          UNRECOVERED_JUMPTABLE_00 = pSVar7->klass[1]._1.interfaceOffsets;
          (*(code *)UNRECOVERED_JUMPTABLE_00)
                    (pSVar7,pSVar7->klass[1].static_fields,uVar5,UNRECOVERED_JUMPTABLE_00);
          return;
        }
        pUVar3 = __this_00[1].fields._currentCategoryPanel;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
        (**(code **)&pUVar3->klass[1]._2.field_count)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar7 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          uVar6 = extraout_RDX_02;
          if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365bcb:
          vtableDispatch = pSVar7->klass[1]._1.nestedTypes;
          (*(code *)vtableDispatch)
                    (pSVar7,pSVar7->klass[1]._1.implementedInterfaces,uVar6,vtableDispatch);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar5 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar5 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pUVar3 = __this_00[1].fields._currentCategoryPanel;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pUVar3[6].klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar5 = extraout_RDX;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar7 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) goto label_04365adf;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
        pSVar7 = __this_00[1].fields._currentCategoryPanelName;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
        (*(code *)pSVar7->klass[1]._1.interfaceOffsets)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar7 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          uVar6 = extraout_RDX_01;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) goto label_04365bcb;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04365be8:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$.ctor
// il2cpp: void UI_CharacterEditorStatsPanel___ctor (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4365bf0

void UI_CharacterEditorStatsPanel___ctor(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_0
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_0 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4365c00

void UI_CharacterEditorStatsPanel___Setup_b__12_0(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *UNRECOVERED_JUMPTABLE_00;
  Il2CppClass **vtableDispatch;
  System_String_o *a;
  bool_conflict bVar4;
  ulong uVar5;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar6;
  Settings_StringSetting_o *pSVar7;
  UI_HeadedPanel_o *__this_00;
  
  if (g_data_057ae1c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"EditStats");
    g_data_057ae1c4 = '\x01';
  }
  a = "EditStats";
  if (g_data_057ae1c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    il2cpp_runtime_helper_023445d0(&"EditStats");
    g_data_057ae1c3 = '\x01';
  }
  bVar4 = System_String__op_Equality(a,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(a,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar5 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar5 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pSVar7 = __this_00[1].fields._currentCategoryPanelName;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pSVar7[3].fields._value;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar5 = extraout_RDX_00;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar7 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365adf:
          UNRECOVERED_JUMPTABLE_00 = pSVar7->klass[1]._1.interfaceOffsets;
          (*(code *)UNRECOVERED_JUMPTABLE_00)
                    (pSVar7,pSVar7->klass[1].static_fields,uVar5,UNRECOVERED_JUMPTABLE_00);
          return;
        }
        pUVar3 = __this_00[1].fields._currentCategoryPanel;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
        (**(code **)&pUVar3->klass[1]._2.field_count)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar7 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          uVar6 = extraout_RDX_02;
          if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365bcb:
          vtableDispatch = pSVar7->klass[1]._1.nestedTypes;
          (*(code *)vtableDispatch)
                    (pSVar7,pSVar7->klass[1]._1.implementedInterfaces,uVar6,vtableDispatch);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar5 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar5 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pUVar3 = __this_00[1].fields._currentCategoryPanel;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pUVar3[6].klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar5 = extraout_RDX;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar7 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) goto label_04365adf;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
        pSVar7 = __this_00[1].fields._currentCategoryPanelName;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
        (*(code *)pSVar7->klass[1]._1.interfaceOffsets)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar7 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          uVar6 = extraout_RDX_01;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) goto label_04365bcb;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04365be8:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_1
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_1 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4365c30

void UI_CharacterEditorStatsPanel___Setup_b__12_1(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *UNRECOVERED_JUMPTABLE_00;
  Il2CppClass **vtableDispatch;
  System_String_o *a;
  bool_conflict bVar4;
  ulong uVar5;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar6;
  Settings_StringSetting_o *pSVar7;
  UI_HeadedPanel_o *__this_00;
  
  if (g_data_057ae1c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    g_data_057ae1c5 = '\x01';
  }
  a = "EditPerks";
  if (g_data_057ae1c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"EditPerks");
    il2cpp_runtime_helper_023445d0(&"EditStats");
    g_data_057ae1c3 = '\x01';
  }
  bVar4 = System_String__op_Equality(a,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(a,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar5 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar5 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pSVar7 = __this_00[1].fields._currentCategoryPanelName;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pSVar7[3].fields._value;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar5 = extraout_RDX_00;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar7 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365adf:
          UNRECOVERED_JUMPTABLE_00 = pSVar7->klass[1]._1.interfaceOffsets;
          (*(code *)UNRECOVERED_JUMPTABLE_00)
                    (pSVar7,pSVar7->klass[1].static_fields,uVar5,UNRECOVERED_JUMPTABLE_00);
          return;
        }
        pUVar3 = __this_00[1].fields._currentCategoryPanel;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
        (**(code **)&pUVar3->klass[1]._2.field_count)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar7 = __this_00[1].fields._currentCategoryPanelName;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          uVar6 = extraout_RDX_02;
          if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
label_04365bcb:
          vtableDispatch = pSVar7->klass[1]._1.nestedTypes;
          (*(code *)vtableDispatch)
                    (pSVar7,pSVar7->klass[1]._1.implementedInterfaces,uVar6,vtableDispatch);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
    }
    __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    uVar5 = (ulong)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[uVar5 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
      pUVar3 = __this_00[1].fields._currentCategoryPanel;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04365be8;
      cVar2 = *(char *)&pUVar3[6].klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        uVar5 = extraout_RDX;
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
      }
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
        if (cVar2 != '\0') {
          pSVar7 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) goto label_04365adf;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
        pSVar7 = __this_00[1].fields._currentCategoryPanelName;
        __this_00 = (UI_HeadedPanel_o *)0x0;
        if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_04365be8;
        (*(code *)pSVar7->klass[1]._1.interfaceOffsets)();
        __this_00 = *(UI_HeadedPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 == (UI_HeadedPanel_o *)0x0) goto label_04365be8;
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
          pSVar7 = (Settings_StringSetting_o *)__this_00[1].fields._currentCategoryPanel;
          uVar6 = extraout_RDX_01;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) goto label_04365bcb;
          __this_00 = (UI_HeadedPanel_o *)0x0;
          goto label_04365be8;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04365be8:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


