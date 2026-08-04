// Type: UI.SnapshotViewerMainPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotViewerMainPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMainPanel.cs
// --------------------------------

// UI.SnapshotViewerMainPanel$$get_Title
// il2cpp: System_String_o* UI_SnapshotViewerMainPanel__get_Title (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x4451600

System_String_o *
UI_SnapshotViewerMainPanel__get_Title(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (g_data_057ae70e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"SnapshotViewerButton");
    il2cpp_runtime_helper_023445d0(&"ToolsPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae70e = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale("MainMenu","ToolsPopup","SnapshotViewerButton","","",in_R9);
  return pSVar1;
}


// UI.SnapshotViewerMainPanel$$get_Width
// il2cpp: float UI_SnapshotViewerMainPanel__get_Width (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44516a0

float UI_SnapshotViewerMainPanel__get_Width(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.SnapshotViewerMainPanel$$get_Height
// il2cpp: float UI_SnapshotViewerMainPanel__get_Height (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44516b0

float UI_SnapshotViewerMainPanel__get_Height(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 270.0;
}


// UI.SnapshotViewerMainPanel$$get_VerticalSpacing
// il2cpp: float UI_SnapshotViewerMainPanel__get_VerticalSpacing (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44516c0

float UI_SnapshotViewerMainPanel__get_VerticalSpacing(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.SnapshotViewerMainPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_SnapshotViewerMainPanel__get_HorizontalPadding (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44516d0

int32_t UI_SnapshotViewerMainPanel__get_HorizontalPadding
                  (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.SnapshotViewerMainPanel$$get_VerticalPadding
// il2cpp: int32_t UI_SnapshotViewerMainPanel__get_VerticalPadding (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44516e0

int32_t UI_SnapshotViewerMainPanel__get_VerticalPadding
                  (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.SnapshotViewerMainPanel$$Setup
// il2cpp: void UI_SnapshotViewerMainPanel__Setup (UI_SnapshotViewerMainPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x44516f0

void UI_SnapshotViewerMainPanel__Setup
               (UI_SnapshotViewerMainPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  UnityEngine_Transform_c *pUVar4;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  UnityEngine_Object_o *pUVar8;
  MethodInfo *pMVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t score;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_UI_Text_o *method_00;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Events_UnityAction_o *pUVar15;
  Il2CppClass *pIVar16;
  Il2CppClass *pIVar17;
  undefined8 extraout_RAX;
  Il2CppObject *__this_00;
  undefined8 uVar18;
  UnityEngine_Texture2D_o *pUVar19;
  System_DateTime_o SVar20;
  UnityEngine_Events_UnityAction_o *unaff_RBX;
  undefined8 uVar21;
  void **ppvVar22;
  undefined8 *puVar23;
  Il2CppClass *unaff_RBP;
  Il2CppClass **a;
  MethodInfo *pMVar24;
  ulong uVar25;
  Il2CppClass *pIVar26;
  Il2CppObject *pIVar27;
  MethodInfo *in_R9;
  System_String_o **unaff_R13;
  long *plVar28;
  int iVar29;
  UnityEngine_Transform_o *unaff_R15;
  undefined8 uStack_90;
  Il2CppClass *pIStack_88;
  Il2CppClass *pIStack_80;
  undefined8 uStack_78;
  Il2CppClass *pIStack_70;
  Il2CppClass *pIStack_68;
  undefined1 auStack_60 [12];
  int iStack_54;
  UnityEngine_Events_UnityAction_o *pUStack_50;
  Il2CppClass *pIStack_48;
  UnityEngine_Transform_o *pUStack_40;
  
  if (g_data_057ae70f == '\0') {
    pUStack_40 = (UnityEngine_Transform_o *)0x445171a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451726;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451732;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    pUStack_40 = (UnityEngine_Transform_o *)0x445173e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    pUStack_40 = (UnityEngine_Transform_o *)0x445174a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_2);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451756;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_3);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451762;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotViewerMenu);
    pUStack_40 = (UnityEngine_Transform_o *)0x445176e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_40 = (UnityEngine_Transform_o *)0x445177a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451786;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pUStack_40 = (UnityEngine_Transform_o *)0x4451792;
    il2cpp_runtime_helper_023445d0(&"Back");
    pUStack_40 = (UnityEngine_Transform_o *)0x445179e;
    il2cpp_runtime_helper_023445d0(&"Next");
    pUStack_40 = (UnityEngine_Transform_o *)0x44517aa;
    il2cpp_runtime_helper_023445d0(&"Save");
    pUStack_40 = (UnityEngine_Transform_o *)0x44517b6;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae70f = '\x01';
  }
  pUStack_40 = (UnityEngine_Transform_o *)0x44517ca;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  plVar28 = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pUStack_40 = (UnityEngine_Transform_o *)0x4451857;
    il2cpp_runtime_helper_02337ed0();
    pIVar16 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pIVar16 == (Il2CppClass *)0x0) goto label_0445186a;
label_044517ed:
    a = (Il2CppClass **)TypeInfo_SnapshotViewerMenu;
    pUVar4 = (pIVar16->_1).image;
    bVar1 = (TypeInfo_SnapshotViewerMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
       ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SnapshotViewerMenu)) {
      (__this->fields)._menu = (UI_SnapshotViewerMenu_o *)pIVar16;
      pUVar4 = (pIVar16->_1).image;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)a)) goto label_0445187e;
    }
    pUStack_40 = (UnityEngine_Transform_o *)0x4451c5b;
    il2cpp_runtime_helper_022b2fd0();
  }
  else {
    pIVar16 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pIVar16 != (Il2CppClass *)0x0) goto label_044517ed;
label_0445186a:
    (__this->fields)._menu = (UI_SnapshotViewerMenu_o *)0x0;
label_0445187e:
    pUStack_40 = (UnityEngine_Transform_o *)0x4451883;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451897;
    pSVar12 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUStack_40 = (UnityEngine_Transform_o *)0x44518a9;
    unaff_RBP = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    pUStack_40 = (UnityEngine_Transform_o *)0x44518ce;
    UI_ElementStyle___ctor((UI_ElementStyle_o *)unaff_RBP,0x18,95.0,20.0,pSVar12,(MethodInfo *)0x0);
    pSVar12 = "Back";
    unaff_R15 = (__this->fields).BottomBar;
    if (g_data_057ae727 == '\0') {
      pUStack_40 = (UnityEngine_Transform_o *)0x44518f2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      pUStack_40 = (UnityEngine_Transform_o *)0x44518fe;
      il2cpp_runtime_helper_023445d0(&"Common");
      pUStack_40 = (UnityEngine_Transform_o *)0x445190a;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae727 = '\x01';
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pUStack_40 = (UnityEngine_Transform_o *)0x4451922;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_40 = (UnityEngine_Transform_o *)0x4451944;
    unaff_R13 = (System_String_o **)
                UI_UIManager__GetLocale("Common",pSVar12,"","","",in_R9);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451956;
    unaff_RBX = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    pUStack_40 = (UnityEngine_Transform_o *)0x4451970;
    UnityEngine_Events_UnityAction___ctor();
    pUStack_40 = (UnityEngine_Transform_o *)0x4451987;
    UI_ElementFactory__CreateTextButton
              (unaff_R15,(UI_ElementStyle_o *)unaff_RBP,(System_String_o *)unaff_R13,0.0,unaff_RBX,
               (MethodInfo *)0x0);
    pIVar16 = (Il2CppClass *)(__this->fields).SinglePanel;
    pMVar24 = (MethodInfo *)0x0;
    pUStack_40 = (UnityEngine_Transform_o *)0x44519a5;
    a = (Il2CppClass **)unaff_RBP;
    pUVar13 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)pIVar16,(UI_ElementStyle_o *)unaff_RBP,"",0,4,
                         (MethodInfo *)0x0);
    plVar28 = (long *)unaff_RBP;
    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
      unaff_R13 = &"Common";
      pUStack_40 = (UnityEngine_Transform_o *)0x44519c7;
      method_00 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._indexLabel = method_00;
      pUStack_40 = (UnityEngine_Transform_o *)0x44519df;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._indexLabel);
      pUStack_40 = (UnityEngine_Transform_o *)0x44519e7;
      UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,(MethodInfo *)method_00);
      pIVar16 = (Il2CppClass *)(__this->fields).SinglePanel;
      a = (Il2CppClass **)&g_data_00000004;
      pUStack_40 = (UnityEngine_Transform_o *)0x4451a00;
      pUVar13 = UI_ElementFactory__CreateHorizontalGroup
                          ((UnityEngine_Transform_o *)pIVar16,10.0,4,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        pUStack_40 = (UnityEngine_Transform_o *)0x4451a13;
        pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
        pMVar9 = "Previous";
        if (g_data_057ae727 == '\0') {
          pUStack_40 = (UnityEngine_Transform_o *)0x4451a3c;
          il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
          pUStack_40 = (UnityEngine_Transform_o *)0x4451a48;
          il2cpp_runtime_helper_023445d0(&"Common");
          pUStack_40 = (UnityEngine_Transform_o *)0x4451a54;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae727 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_Transform_o *)0x4451a6d;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_40 = (UnityEngine_Transform_o *)0x4451a8c;
        pSVar12 = UI_UIManager__GetLocale
                            ("Common",(System_String_o *)pMVar9,"","","",
                             pMVar24);
        pUStack_40 = (UnityEngine_Transform_o *)0x4451a9e;
        pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUStack_40 = (UnityEngine_Transform_o *)0x4451ab8;
        UnityEngine_Events_UnityAction___ctor();
        pUStack_40 = (UnityEngine_Transform_o *)0x4451ad2;
        UI_ElementFactory__CreateDefaultButton
                  (pUVar14,(UI_ElementStyle_o *)unaff_RBP,pSVar12,0.0,0.0,pUVar15,(MethodInfo *)0x0);
        pMVar9 = "Next";
        if (g_data_057ae727 == '\0') {
          pUStack_40 = (UnityEngine_Transform_o *)0x4451af1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
          pUStack_40 = (UnityEngine_Transform_o *)0x4451afd;
          il2cpp_runtime_helper_023445d0(&"Common");
          pUStack_40 = (UnityEngine_Transform_o *)0x4451b09;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae727 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_Transform_o *)0x4451b28;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_40 = (UnityEngine_Transform_o *)0x4451b44;
        pSVar12 = UI_UIManager__GetLocale
                            ("Common",(System_String_o *)pMVar9,"","","",
                             pMVar24);
        pUStack_40 = (UnityEngine_Transform_o *)0x4451b56;
        pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUStack_40 = (UnityEngine_Transform_o *)0x4451b70;
        UnityEngine_Events_UnityAction___ctor();
        pUStack_40 = (UnityEngine_Transform_o *)0x4451b8a;
        UI_ElementFactory__CreateDefaultButton
                  (pUVar14,(UI_ElementStyle_o *)unaff_RBP,pSVar12,0.0,0.0,pUVar15,(MethodInfo *)0x0);
        pSVar12 = "Save";
        if (g_data_057ae727 == '\0') {
          pUStack_40 = (UnityEngine_Transform_o *)0x4451ba9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
          pUStack_40 = (UnityEngine_Transform_o *)0x4451bb5;
          il2cpp_runtime_helper_023445d0(&"Common");
          pUStack_40 = (UnityEngine_Transform_o *)0x4451bc1;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae727 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_Transform_o *)0x4451be0;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_40 = (UnityEngine_Transform_o *)0x4451bfc;
        pSVar12 = UI_UIManager__GetLocale("Common",pSVar12,"","","",pMVar24)
        ;
        pUStack_40 = (UnityEngine_Transform_o *)0x4451c0e;
        pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUStack_40 = (UnityEngine_Transform_o *)0x4451c28;
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar14,(UI_ElementStyle_o *)unaff_RBP,pSVar12,0.0,0.0,pUVar15,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pUStack_40 = (UnityEngine_Transform_o *)UI_SnapshotViewerMainPanel__UpdateIndexLabel;
  il2cpp_runtime_helper_022b2c90();
  pUStack_50 = unaff_RBX;
  pIStack_48 = (Il2CppClass *)plVar28;
  pUStack_40 = unaff_R15;
  if (g_data_057ae711 == '\0') {
    pIStack_68 = (Il2CppClass *)0x4451c81;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pIStack_68 = (Il2CppClass *)0x4451c8d;
    il2cpp_runtime_helper_023445d0(&"/");
    pIStack_68 = (Il2CppClass *)0x4451c99;
    il2cpp_runtime_helper_023445d0(&"0/0");
    g_data_057ae711 = '\x01';
  }
  iStack_54 = 0;
  if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
    pIStack_68 = (Il2CppClass *)0x4451d95;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_04451da2;
label_04451ccc:
    if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c != 0) goto label_04451cdc;
label_04451dc5:
    pIStack_68 = (Il2CppClass *)0x4451dca;
    il2cpp_runtime_helper_02337ed0();
    plVar28 = (pIVar16->_1).events;
    if (*(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28) == 0) goto label_04451de5;
label_04451cf4:
    iStack_54 = *(int *)&(pIVar16->_1).properties + 1;
    pIStack_68 = (Il2CppClass *)0x4451d0e;
    pIVar16 = (Il2CppClass *)System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
      pIStack_68 = (Il2CppClass *)0x4451e16;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_04451e23;
label_04451d2e:
      iVar29 = *(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c;
    }
    else {
      if (g_data_057ae736 != '\0') goto label_04451d2e;
label_04451e23:
      pIStack_68 = (Il2CppClass *)0x4451e2f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar29 = *(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c;
    }
    if (iVar29 == 0) {
      pIStack_68 = (Il2CppClass *)0x4451e4b;
      il2cpp_runtime_helper_02337ed0();
    }
    iStack_54 = *(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28);
    pIStack_68 = (Il2CppClass *)0x4451d58;
    pSVar12 = System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
    pIStack_68 = (Il2CppClass *)0x4451d6f;
    a = (Il2CppClass **)"/";
    pIVar26 = pIVar16;
    pSVar12 = System_String__Concat_3af7150
                        ((System_String_o *)pIVar16,(System_String_o *)"/",pSVar12,(MethodInfo *)0x0)
    ;
    if (plVar28 != (long *)0x0) {
      pIStack_68 = (Il2CppClass *)0x4451d8e;
      (**(code **)(*plVar28 + 0x5e8))(plVar28,pSVar12,*(undefined8 *)(*plVar28 + 0x5f0));
      return;
    }
  }
  else {
    if (g_data_057ae736 != '\0') goto label_04451ccc;
label_04451da2:
    pIStack_68 = (Il2CppClass *)0x4451dae;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) goto label_04451dc5;
label_04451cdc:
    plVar28 = (pIVar16->_1).events;
    if (*(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28) != 0) goto label_04451cf4;
label_04451de5:
    pIVar26 = TypeInfo_SnapshotManager;
    if (plVar28 != (long *)0x0) {
      pIStack_68 = (Il2CppClass *)0x4451e07;
      (**(code **)(*plVar28 + 0x5e8))(plVar28,"0/0",*(undefined8 *)(*plVar28 + 0x5f0));
      return;
    }
  }
  pIStack_68 = (Il2CppClass *)0x4451e58;
  il2cpp_runtime_helper_022b2c90();
  uStack_78 = 0;
  pIStack_70 = pIVar16;
  pIStack_68 = unaff_RBP;
  if (g_data_057ae710 == '\0') {
    pIStack_80 = (Il2CppClass *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pIStack_80 = (Il2CppClass *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pIStack_80 = (Il2CppClass *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pIStack_80 = (Il2CppClass *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pIStack_80 = (Il2CppClass *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pIStack_80 = (Il2CppClass *)0x4451eca;
  bVar10 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pIStack_80 = (Il2CppClass *)0x4451ef2;
  pIVar16 = (Il2CppClass *)a;
  bVar10 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pIStack_80 = (Il2CppClass *)0x4451f86;
    pMVar24 = "Previous";
    bVar10 = System_String__op_Equality
                       ((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pIStack_80 = (Il2CppClass *)0x4451fb9;
      pMVar24 = "Next";
      bVar10 = System_String__op_Equality
                         ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      uVar2 = *(uint *)&(pIVar26->_1).properties;
      unaff_RBP = (Il2CppClass *)(ulong)uVar2;
      a = &TypeInfo_SnapshotManager;
      if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
        pIStack_80 = (Il2CppClass *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar29 = *(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c;
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pIStack_80 = (Il2CppClass *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar29 = *(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c;
      }
      if (iVar29 == 0) {
        pIStack_80 = (Il2CppClass *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28) + -1 <= (int)uVar2) {
        return;
      }
      ppvVar22 = &(pIVar26->_1).properties;
      *(int *)ppvVar22 = *(int *)ppvVar22 + 1;
    }
    else {
      iVar29 = *(int *)&(pIVar26->_1).properties;
      if (iVar29 < 1) {
        return;
      }
      *(int *)&(pIVar26->_1).properties = iVar29 + -1;
    }
    pIStack_80 = (Il2CppClass *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel((UI_SnapshotViewerMainPanel_o *)pIVar26,pMVar24);
    pIVar27 = (pIVar26->_1).fields;
    pIVar16 = (Il2CppClass *)0x0;
    if (pIVar27 == (Il2CppObject *)0x0) goto label_04452065;
    uVar25 = (ulong)*(uint *)&(pIVar26->_1).properties;
    puVar23 = (undefined8 *)auStack_60;
    uVar18 = extraout_RAX;
    uVar21 = uStack_78;
    unaff_RBP = pIStack_68;
    pIVar16 = pIStack_70;
  }
  else {
    pIVar26 = (pIVar26->_1).fields;
    if (pIVar26 != (Il2CppClass *)0x0) {
      if (g_data_057ae717 == '\0') {
        pIStack_80 = (Il2CppClass *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pIStack_80 = (Il2CppClass *)0x4451f31;
      pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pIStack_80 = (Il2CppClass *)0x4451f3e;
      pIVar16 = pIVar17;
      System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar17->_1).name = 0;
      a = (Il2CppClass **)0x0;
      if (pIVar17 != (Il2CppClass *)0x0) {
        (pIVar17->_1).byval_arg.data = pIVar26;
        pIStack_80 = (Il2CppClass *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg,pIVar26);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar26,(System_Collections_IEnumerator_o *)pIVar17,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    pIStack_80 = (Il2CppClass *)0x445206a;
    uStack_90 = il2cpp_runtime_helper_022b2c90();
    puVar23 = &uStack_90;
    pIStack_88 = (Il2CppClass *)a;
    pIStack_80 = pIVar26;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar25 = 0;
    pIVar27 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = pIVar16;
      il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar16);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar16,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
    uVar18 = il2cpp_runtime_helper_022b2c90();
    uVar21 = 0;
  }
  *(Il2CppClass **)((long)puVar23 + -8) = unaff_RBP;
  *(Il2CppClass ***)((long)puVar23 + -0x10) = &TypeInfo_SnapshotManager;
  *(Il2CppClass **)((long)puVar23 + -0x18) = pIVar16;
  *(System_String_o ***)((long)puVar23 + -0x20) = unaff_R13;
  *(UI_SnapshotViewerMainPanel_o **)((long)puVar23 + -0x28) = __this;
  *(undefined8 *)((long)puVar23 + -0x30) = uVar21;
  *(undefined8 *)((long)puVar23 + -0x38) = uVar18;
  pIVar16 = (Il2CppClass *)(uVar25 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)puVar23 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)puVar23 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar23 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)puVar23 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)puVar23 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)puVar23 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)puVar23 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)puVar23 + -0x38) = 0;
  plVar28 = pIVar27[0xb].monitor;
  pIVar26 = (Il2CppClass *)0x0;
  if (plVar28 == (long *)0x0) goto label_0445250c;
  uVar18 = *(undefined8 *)(*plVar28 + 0x5f0);
  pcVar5 = *(code **)(*plVar28 + 0x5e8);
  *(undefined8 *)((long)puVar23 + -0x40) = 0x4452198;
  (*pcVar5)(plVar28,"",uVar18);
  pIVar17 = pIVar27[0xb].klass;
  pIVar26 = (Il2CppClass *)0x0;
  if (pIVar17 == (Il2CppClass *)0x0) goto label_0445250c;
  pvVar6 = (pIVar17->_1).image;
  uVar18 = *(undefined8 *)((long)pvVar6 + 0x5f0);
  pcVar5 = *(code **)((long)pvVar6 + 0x5e8);
  *(undefined8 *)((long)puVar23 + -0x40) = 0x44521bc;
  (*pcVar5)(pIVar17,"",uVar18);
  if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
    *(undefined8 *)((long)puVar23 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)puVar23 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    iVar29 = *(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)puVar23 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) goto label_0445231c;
label_044521f2:
    iVar29 = *(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28);
  }
  if (0 < iVar29) {
    iVar29 = (int)uVar25;
    if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
      *(undefined8 *)((long)puVar23 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c;
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)puVar23 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c;
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)puVar23 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar29) && (iVar29 < *(int *)((long)TypeInfo_SnapshotManager->static_fields + 0x28))) {
      if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
        *(undefined8 *)((long)puVar23 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar23 + -0x40) = 0x4452260;
      pUVar19 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar29,(MethodInfo *)0x0);
      pIVar17 = pIVar27[10].klass;
      pIVar26 = (Il2CppClass *)0x0;
      if (pIVar17 != (Il2CppClass *)0x0) {
        pvVar6 = (pIVar17->_1).image;
        uVar18 = *(undefined8 *)((long)pvVar6 + 0x4f0);
        pcVar5 = *(code **)((long)pvVar6 + 0x4e8);
        *(undefined8 *)((long)puVar23 + -0x40) = 0x4452286;
        (*pcVar5)(pIVar17,pUVar19,uVar18);
        pIVar17 = pIVar27[10].klass;
        pIVar26 = (Il2CppClass *)0x0;
        if (pIVar17 != (Il2CppClass *)0x0) {
          score = 0;
          *(undefined8 *)((long)puVar23 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pIVar17,(MethodInfo *)0x0);
          *(undefined8 *)((long)puVar23 + -0x40) = 0x44522aa;
          pIVar26 = pIVar16;
          iVar11 = ApplicationManagers_SnapshotManager__GetDamage(iVar29,(MethodInfo *)0x0);
          pIVar17 = pIVar27[10].monitor;
          if (0 < iVar11) {
            if (*(int *)&(TypeInfo_SnapshotManager->_2).field_0x1c == 0) {
              *(undefined8 *)((long)puVar23 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)puVar23 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar29,(MethodInfo *)0x0);
            pIVar26 = pIVar16;
          }
          if (pIVar17 != (Il2CppClass *)0x0) {
            *(undefined8 *)((long)puVar23 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pIVar17,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            pIVar26 = pIVar17;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pIVar16 = pIVar27[0xb].klass;
              pIVar26 = *(Il2CppClass **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)puVar23 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)puVar23 + -0x40) = 0x4452430;
              SVar20 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)puVar23 + -0x38))->_dateData =
                   (uint64_t)SVar20.fields._dateData;
              *(undefined8 *)((long)puVar23 + -0x40) = 0x445243e;
              pSVar12 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)puVar23 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)puVar23 + -0x40) = 0x4452455;
              pSVar12 = System_String__Concat_3af7150
                                  ((System_String_o *)pIVar26," ",pSVar12,(MethodInfo *)0x0);
              if (pIVar16 != (Il2CppClass *)0x0) {
                pvVar6 = (pIVar16->_1).image;
                uVar18 = *(undefined8 *)((long)pvVar6 + 0x5f0);
                pcVar5 = *(code **)((long)pvVar6 + 0x5e8);
                *(undefined8 *)((long)puVar23 + -0x40) = 0x4452475;
                (*pcVar5)(pIVar16,pSVar12,uVar18);
                pIVar26 = pIVar27[0xb].klass;
                if (pIVar26 != (Il2CppClass *)0x0) {
                  *(undefined8 *)((long)puVar23 + -0x40) = 0x445248c;
                  pUVar14 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pIVar26,(MethodInfo *)0x0);
                  if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)puVar23 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(pUVar14,(MethodInfo *)0x0);
                    pUVar8 = pIVar27[0xc].monitor;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)puVar23 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppvVar22 = &pIVar27[0xc].monitor;
                    *(undefined8 *)((long)puVar23 + -0x40) = 0x44524cd;
                    bVar10 = UnityEngine_Object__op_Inequality
                                       (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') {
                      pUVar8 = *ppvVar22;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)puVar23 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)puVar23 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60(pUVar8,(MethodInfo *)0x0);
                    }
                    *ppvVar22 = pUVar19;
                    *(undefined8 *)((long)puVar23 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppvVar22,pUVar19);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pIVar26 = (Il2CppClass *)0x0;
  if (pIVar27[10].klass != (Il2CppClass *)0x0) {
    pcVar5 = *(code **)((long)((pIVar27[10].klass)->_1).image + 0x298);
    *(undefined8 *)((long)puVar23 + -0x40) = 0x44523a0;
    (*pcVar5)();
    plVar28 = pIVar27[10].monitor;
    pIVar26 = (Il2CppClass *)0x0;
    if (plVar28 != (long *)0x0) {
      uVar18 = *(undefined8 *)(*plVar28 + 0x2a0);
      pcVar5 = *(code **)(*plVar28 + 0x298);
      *(undefined8 *)((long)puVar23 + -0x40) = 0x44523c0;
      (*pcVar5)(plVar28,uVar18);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)puVar23 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)pIVar26,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$OnButtonClick
// il2cpp: void UI_SnapshotViewerMainPanel__OnButtonClick (UI_SnapshotViewerMainPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4451e60

void UI_SnapshotViewerMainPanel__OnButtonClick
               (UI_SnapshotViewerMainPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Il2CppMethodPointer pIVar4;
  UI_SnapshotPopup_o *pUVar5;
  UI_KillScorePopup_o *pUVar6;
  long lVar7;
  UnityEngine_Texture2D_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t score;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  undefined8 extraout_RAX;
  UI_SnapshotViewerMenu_o *__this_01;
  undefined8 uVar11;
  UnityEngine_Texture2D_o *pUVar12;
  System_DateTime_o SVar13;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *__this_02;
  undefined8 unaff_RBX;
  UnityEngine_Texture2D_o **ppUVar15;
  ulong unaff_RBP;
  ulong uVar16;
  MethodInfo *pMVar17;
  System_Collections_Generic_List_BasePopup__o *__this_03;
  UI_SnapshotViewerMenu_o *pUVar18;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_UI_Text_o *pUVar19;
  UnityEngine_UI_Text_o *pUVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  System_Collections_Generic_List_BasePopup__o *unaff_R14;
  int iVar21;
  undefined8 unaff_R15;
  undefined8 uStack_30;
  System_String_o *pSStack_28;
  UI_SnapshotViewerMenu_o *pUStack_20;
  
  if (g_data_057ae710 == '\0') {
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451eca;
  bVar9 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451ef2;
  __this_03 = (System_Collections_Generic_List_BasePopup__o *)name;
  bVar9 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  uVar16 = unaff_RBP;
  if ((char)bVar9 == '\0') {
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f86;
    pMVar17 = "Previous";
    bVar9 = System_String__op_Equality(name,(System_String_o *)"Previous",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451fb9;
      pMVar17 = "Next";
      bVar9 = System_String__op_Equality(name,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      uVar2 = (__this->fields)._index;
      uVar16 = (ulong)uVar2;
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      if (iVar21 == 0) {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28) + -1 <= (int)uVar2) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + 1;
      name = (System_String_o *)&TypeInfo_SnapshotManager;
    }
    else {
      iVar21 = (__this->fields)._index;
      if (iVar21 < 1) {
        return;
      }
      (__this->fields)._index = iVar21 + -1;
    }
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,pMVar17);
    pUVar18 = (__this->fields)._menu;
    __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
    if (pUVar18 == (UI_SnapshotViewerMenu_o *)0x0) goto label_04452065;
    uVar16 = (ulong)(uint)(__this->fields)._index;
    uVar11 = extraout_RAX;
  }
  else {
    __this = (UI_SnapshotViewerMainPanel_o *)(__this->fields)._menu;
    if ((UI_SnapshotViewerMenu_o *)__this != (UI_SnapshotViewerMenu_o *)0x0) {
      if (g_data_057ae717 == '\0') {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f31;
      __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f3e;
      __this_03 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(int32_t *)&(__this_00->fields)._items = 0;
      name = (System_String_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        (__this_00->fields)._syncRoot = (Il2CppObject *)__this;
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._syncRoot,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    unaff_RBP = uVar16;
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x445206a;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    pSStack_28 = name;
    pUStack_20 = (UI_SnapshotViewerMenu_o *)__this;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_01 = (UI_SnapshotViewerMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar16 = 0;
    pUVar18 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (UI_SnapshotViewerMenu_o *)0x0) {
      (__this_01->fields)._popups = __this_03;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,__this_03);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_03,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
    uVar11 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    unaff_R14 = __this_03;
  }
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(System_Collections_Generic_List_BasePopup__o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar11;
  pUVar19 = (UnityEngine_UI_Text_o *)(uVar16 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
  pUVar20 = (pUVar18->fields)._statusLabel;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452198;
  (*pIVar4)(pUVar20,"",pMVar17);
  pUVar20 = (pUVar18->fields)._nameLabel;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44521bc;
  (*pIVar4)(pUVar20,"",pMVar17);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar21) {
    iVar21 = (int)uVar16;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar21) && (iVar21 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452260;
      pUVar12 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar21,(MethodInfo *)0x0);
      pUVar5 = (pUVar18->fields)._snapshotPopup;
      __this_04 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
        pMVar17 = (pUVar5->klass->vtable)._59_Load.method;
        pIVar4 = (pUVar5->klass->vtable)._59_Load.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452286;
        (*pIVar4)(pUVar5,pUVar12,pMVar17);
        pUVar5 = (pUVar18->fields)._snapshotPopup;
        __this_04 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522aa;
          __this_04 = pUVar19;
          iVar10 = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
          pUVar20 = (UnityEngine_UI_Text_o *)(pUVar18->fields)._killScorePopup;
          if (0 < iVar10) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
            __this_04 = pUVar19;
          }
          if (pUVar20 != (UnityEngine_UI_Text_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar20,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_04 = pUVar20;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pUVar19 = (pUVar18->fields)._nameLabel;
              __this_04 = *(UnityEngine_UI_Text_o **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452430;
              SVar13 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)register0x00000020 + -0x38))->_dateData =
                   (uint64_t)SVar13.fields._dateData;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445243e;
              pSVar14 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)register0x00000020 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452455;
              pSVar14 = System_String__Concat_3af7150
                                  ((System_String_o *)__this_04," ",pSVar14,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                pMVar17 = (pUVar19->klass->vtable)._75_set_text.method;
                pIVar4 = (pUVar19->klass->vtable)._75_set_text.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452475;
                (*pIVar4)(pUVar19,pSVar14,pMVar17);
                __this_04 = (pUVar18->fields)._nameLabel;
                if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445248c;
                  __this_02 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(__this_02,(MethodInfo *)0x0);
                    pUVar8 = (pUVar18->fields)._currentSnapshot;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppUVar15 = &(pUVar18->fields)._currentSnapshot;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524cd;
                    bVar9 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar9 != '\0') {
                      pUVar8 = *ppUVar15;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
                    }
                    *ppUVar15 = pUVar12;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppUVar15,pUVar12);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar5 = (pUVar18->fields)._snapshotPopup;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
    pIVar4 = (pUVar5->klass->vtable)._22_Hide.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523a0;
    (*pIVar4)();
    pUVar6 = (pUVar18->fields)._killScorePopup;
    __this_04 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar6 != (UI_KillScorePopup_o *)0x0) {
      pMVar17 = (pUVar6->klass->vtable)._22_Hide.method;
      pIVar4 = (pUVar6->klass->vtable)._22_Hide.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523c0;
      (*pIVar4)(pUVar6,pMVar17);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_04,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$UpdateIndexLabel
// il2cpp: void UI_SnapshotViewerMainPanel__UpdateIndexLabel (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x4451c60

void UI_SnapshotViewerMainPanel__UpdateIndexLabel(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  UnityEngine_Object_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t score;
  System_String_o *pSVar11;
  Il2CppClass *pIVar12;
  undefined8 extraout_RAX;
  Il2CppObject *__this_00;
  undefined8 uVar13;
  UnityEngine_Texture2D_o *pUVar14;
  System_DateTime_o SVar15;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Text_o *pUVar16;
  UI_SnapshotViewerMenu_o **a;
  undefined8 uVar17;
  void **ppvVar18;
  undefined8 *puVar19;
  ulong unaff_RBP;
  ulong uVar20;
  MethodInfo *method_00;
  Il2CppClass *pIVar21;
  Il2CppClass *pIVar22;
  Il2CppObject *pIVar23;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  int iVar24;
  undefined8 uStack_58;
  Il2CppClass *pIStack_50;
  Il2CppClass *pIStack_48;
  undefined8 uStack_40;
  Il2CppClass *pIStack_38;
  undefined1 auStack_28 [12];
  float local_1c;
  
  a = (UI_SnapshotViewerMenu_o **)method;
  if (g_data_057ae711 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"0/0");
    g_data_057ae711 = '\x01';
    a = (UI_SnapshotViewerMenu_o **)method;
  }
  local_1c = 0.0;
  if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_04451da2;
label_04451ccc:
    if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) != 0) goto label_04451cdc;
label_04451dc5:
    il2cpp_runtime_helper_02337ed0();
    pUVar16 = (__this->fields)._indexLabel;
    if ((((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r == 0.0) goto label_04451de5;
label_04451cf4:
    local_1c = (float)((__this->fields)._index + 1);
    __this = (UI_SnapshotViewerMainPanel_o *)System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_04451e23;
label_04451d2e:
      iVar24 = *(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_04451d2e;
label_04451e23:
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar24 = *(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4);
    }
    if (iVar24 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_1c = (((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r;
    pSVar11 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
    a = (UI_SnapshotViewerMenu_o **)"/";
    pIVar21 = (Il2CppClass *)__this;
    pSVar11 = System_String__Concat_3af7150
                        ((System_String_o *)__this,(System_String_o *)"/",pSVar11,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                (pUVar16,pSVar11,(pUVar16->klass->vtable)._75_set_text.method);
      return;
    }
  }
  else {
    if (g_data_057ae736 != '\0') goto label_04451ccc;
label_04451da2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) goto label_04451dc5;
label_04451cdc:
    pUVar16 = (__this->fields)._indexLabel;
    if ((((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r != 0.0) goto label_04451cf4;
label_04451de5:
    pIVar21 = (Il2CppClass *)TypeInfo_SnapshotManager;
    if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                (pUVar16,"0/0",(pUVar16->klass->vtable)._75_set_text.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_40 = 0;
  pIStack_38 = (Il2CppClass *)__this;
  if (g_data_057ae710 == '\0') {
    pIStack_48 = (Il2CppClass *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pIStack_48 = (Il2CppClass *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pIStack_48 = (Il2CppClass *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pIStack_48 = (Il2CppClass *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pIStack_48 = (Il2CppClass *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pIStack_48 = (Il2CppClass *)0x4451eca;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pIStack_48 = (Il2CppClass *)0x4451ef2;
  pIVar22 = (Il2CppClass *)a;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  uVar20 = unaff_RBP;
  if ((char)bVar9 == '\0') {
    pIStack_48 = (Il2CppClass *)0x4451f86;
    method_00 = "Previous";
    bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0)
    ;
    if ((char)bVar9 == '\0') {
      pIStack_48 = (Il2CppClass *)0x4451fb9;
      method_00 = "Next";
      bVar9 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      uVar1 = *(uint *)&(pIVar21->_1).properties;
      uVar20 = (ulong)uVar1;
      a = &TypeInfo_SnapshotManager;
      if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
        pIStack_48 = (Il2CppClass *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar24 = *(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4);
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pIStack_48 = (Il2CppClass *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar24 = *(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4);
      }
      if (iVar24 == 0) {
        pIStack_48 = (Il2CppClass *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((int)(((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r + -1 <= (int)uVar1) {
        return;
      }
      ppvVar18 = &(pIVar21->_1).properties;
      *(int *)ppvVar18 = *(int *)ppvVar18 + 1;
    }
    else {
      iVar24 = *(int *)&(pIVar21->_1).properties;
      if (iVar24 < 1) {
        return;
      }
      *(int *)&(pIVar21->_1).properties = iVar24 + -1;
    }
    pIStack_48 = (Il2CppClass *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel((UI_SnapshotViewerMainPanel_o *)pIVar21,method_00);
    pIVar23 = (pIVar21->_1).fields;
    pIVar22 = (Il2CppClass *)0x0;
    if (pIVar23 == (Il2CppObject *)0x0) goto label_04452065;
    uVar20 = (ulong)*(uint *)&(pIVar21->_1).properties;
    puVar19 = (undefined8 *)auStack_28;
    uVar13 = extraout_RAX;
    uVar17 = uStack_40;
    pIVar22 = pIStack_38;
  }
  else {
    pIVar21 = (pIVar21->_1).fields;
    if (pIVar21 != (Il2CppClass *)0x0) {
      if (g_data_057ae717 == '\0') {
        pIStack_48 = (Il2CppClass *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pIStack_48 = (Il2CppClass *)0x4451f31;
      pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pIStack_48 = (Il2CppClass *)0x4451f3e;
      pIVar22 = pIVar12;
      System_Object___ctor((Il2CppObject *)pIVar12,(MethodInfo *)0x0);
      *(undefined4 *)&((UI_KeybindPopup_Fields *)&(pIVar12->_1).name)->m_CachedPtr = 0;
      a = (UI_SnapshotViewerMenu_o **)0x0;
      if (pIVar12 != (Il2CppClass *)0x0) {
        (pIVar12->_1).byval_arg.data = pIVar21;
        pIStack_48 = (Il2CppClass *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&(pIVar12->_1).byval_arg,pIVar21);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar21,(System_Collections_IEnumerator_o *)pIVar12,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    unaff_RBP = uVar20;
    pIStack_48 = (Il2CppClass *)0x445206a;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    puVar19 = &uStack_58;
    pIStack_50 = (Il2CppClass *)a;
    pIStack_48 = pIVar21;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar20 = 0;
    pIVar23 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = pIVar22;
      il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar22);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar22,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
    uVar13 = il2cpp_runtime_helper_022b2c90();
    uVar17 = 0;
  }
  *(ulong *)((long)puVar19 + -8) = unaff_RBP;
  *(UI_SnapshotViewerMenu_o ***)((long)puVar19 + -0x10) = &TypeInfo_SnapshotManager;
  *(Il2CppClass **)((long)puVar19 + -0x18) = pIVar22;
  *(undefined8 *)((long)puVar19 + -0x20) = unaff_R13;
  *(undefined8 *)((long)puVar19 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar19 + -0x30) = uVar17;
  *(undefined8 *)((long)puVar19 + -0x38) = uVar13;
  pIVar21 = (Il2CppClass *)(uVar20 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)puVar19 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)puVar19 + -0x38) = 0;
  plVar4 = pIVar23[0xb].monitor;
  pIVar22 = (Il2CppClass *)0x0;
  if (plVar4 == (long *)0x0) goto label_0445250c;
  uVar13 = *(undefined8 *)(*plVar4 + 0x5f0);
  pcVar5 = *(code **)(*plVar4 + 0x5e8);
  *(undefined8 *)((long)puVar19 + -0x40) = 0x4452198;
  (*pcVar5)(plVar4,"",uVar13);
  pIVar12 = pIVar23[0xb].klass;
  pIVar22 = (Il2CppClass *)0x0;
  if (pIVar12 == (Il2CppClass *)0x0) goto label_0445250c;
  pvVar6 = (pIVar12->_1).image;
  uVar13 = *(undefined8 *)((long)pvVar6 + 0x5f0);
  pcVar5 = *(code **)((long)pvVar6 + 0x5e8);
  *(undefined8 *)((long)puVar19 + -0x40) = 0x44521bc;
  (*pcVar5)(pIVar12,"",uVar13);
  if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
    *(undefined8 *)((long)puVar19 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    fVar2 = (((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r;
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) goto label_0445231c;
label_044521f2:
    fVar2 = (((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r;
  }
  if (0 < (int)fVar2) {
    iVar24 = (int)uVar20;
    if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
      *(undefined8 *)((long)puVar19 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)puVar19 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4);
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)puVar19 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar24) && (iVar24 < (int)(((TypeInfo_SnapshotManager->fields)._statusLabel)->fields).m_Color.fields.r)) {
      if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
        *(undefined8 *)((long)puVar19 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar19 + -0x40) = 0x4452260;
      pUVar14 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar24,(MethodInfo *)0x0);
      pIVar12 = pIVar23[10].klass;
      pIVar22 = (Il2CppClass *)0x0;
      if (pIVar12 != (Il2CppClass *)0x0) {
        pvVar6 = (pIVar12->_1).image;
        uVar13 = *(undefined8 *)((long)pvVar6 + 0x4f0);
        pcVar5 = *(code **)((long)pvVar6 + 0x4e8);
        *(undefined8 *)((long)puVar19 + -0x40) = 0x4452286;
        (*pcVar5)(pIVar12,pUVar14,uVar13);
        pIVar12 = pIVar23[10].klass;
        pIVar22 = (Il2CppClass *)0x0;
        if (pIVar12 != (Il2CppClass *)0x0) {
          score = 0;
          *(undefined8 *)((long)puVar19 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pIVar12,(MethodInfo *)0x0);
          *(undefined8 *)((long)puVar19 + -0x40) = 0x44522aa;
          pIVar22 = pIVar21;
          iVar10 = ApplicationManagers_SnapshotManager__GetDamage(iVar24,(MethodInfo *)0x0);
          pIVar12 = pIVar23[10].monitor;
          if (0 < iVar10) {
            if (*(int *)((long)&TypeInfo_SnapshotManager[1].fields.m_CachedPtr + 4) == 0) {
              *(undefined8 *)((long)puVar19 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)puVar19 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar24,(MethodInfo *)0x0);
            pIVar22 = pIVar21;
          }
          if (pIVar12 != (Il2CppClass *)0x0) {
            *(undefined8 *)((long)puVar19 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pIVar12,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            pIVar22 = pIVar12;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pIVar21 = pIVar23[0xb].klass;
              pIVar22 = *(Il2CppClass **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)puVar19 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)puVar19 + -0x40) = 0x4452430;
              SVar15 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)puVar19 + -0x38))->_dateData =
                   (uint64_t)SVar15.fields._dateData;
              *(undefined8 *)((long)puVar19 + -0x40) = 0x445243e;
              pSVar11 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)puVar19 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)puVar19 + -0x40) = 0x4452455;
              pSVar11 = System_String__Concat_3af7150
                                  ((System_String_o *)pIVar22," ",pSVar11,(MethodInfo *)0x0);
              if (pIVar21 != (Il2CppClass *)0x0) {
                pvVar6 = (pIVar21->_1).image;
                uVar13 = *(undefined8 *)((long)pvVar6 + 0x5f0);
                pcVar5 = *(code **)((long)pvVar6 + 0x5e8);
                *(undefined8 *)((long)puVar19 + -0x40) = 0x4452475;
                (*pcVar5)(pIVar21,pSVar11,uVar13);
                pIVar22 = pIVar23[0xb].klass;
                if (pIVar22 != (Il2CppClass *)0x0) {
                  *(undefined8 *)((long)puVar19 + -0x40) = 0x445248c;
                  __this_01 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pIVar22,(MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)puVar19 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
                    pUVar8 = pIVar23[0xc].monitor;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)puVar19 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppvVar18 = &pIVar23[0xc].monitor;
                    *(undefined8 *)((long)puVar19 + -0x40) = 0x44524cd;
                    bVar9 = UnityEngine_Object__op_Inequality
                                      (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar9 != '\0') {
                      pUVar8 = *ppvVar18;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)puVar19 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)puVar19 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60(pUVar8,(MethodInfo *)0x0);
                    }
                    *ppvVar18 = pUVar14;
                    *(undefined8 *)((long)puVar19 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppvVar18,pUVar14);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pIVar22 = (Il2CppClass *)0x0;
  if (pIVar23[10].klass != (Il2CppClass *)0x0) {
    pcVar5 = *(code **)((long)((pIVar23[10].klass)->_1).image + 0x298);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x44523a0;
    (*pcVar5)();
    plVar4 = pIVar23[10].monitor;
    pIVar22 = (Il2CppClass *)0x0;
    if (plVar4 != (long *)0x0) {
      uVar13 = *(undefined8 *)(*plVar4 + 0x2a0);
      pcVar5 = *(code **)(*plVar4 + 0x298);
      *(undefined8 *)((long)puVar19 + -0x40) = 0x44523c0;
      (*pcVar5)(plVar4,uVar13);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)puVar19 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)pIVar22,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$.ctor
// il2cpp: void UI_SnapshotViewerMainPanel___ctor (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x4452520

void UI_SnapshotViewerMainPanel___ctor(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_0
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_0 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x4452530

void UI_SnapshotViewerMainPanel___Setup_b__15_0(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Il2CppMethodPointer pIVar4;
  UI_SnapshotPopup_o *pUVar5;
  UI_KillScorePopup_o *pUVar6;
  long lVar7;
  UnityEngine_Texture2D_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t score;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  undefined8 extraout_RAX;
  UI_SnapshotViewerMenu_o *__this_01;
  undefined8 uVar11;
  UnityEngine_Texture2D_o *pUVar12;
  System_DateTime_o SVar13;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *__this_02;
  long *a;
  UnityEngine_Texture2D_o **ppUVar15;
  undefined8 unaff_RBX;
  ulong uVar16;
  ulong unaff_RBP;
  MethodInfo *pMVar17;
  System_Collections_Generic_List_BasePopup__o *__this_03;
  UI_SnapshotViewerMenu_o *pUVar18;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_UI_Text_o *pUVar19;
  UnityEngine_UI_Text_o *pUVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  System_Collections_Generic_List_BasePopup__o *unaff_R14;
  int iVar21;
  undefined8 unaff_R15;
  undefined8 uStack_30;
  System_Collections_Generic_List_BasePopup__o *pSStack_28;
  UI_SnapshotViewerMenu_o *pUStack_20;
  undefined8 uStack_18;
  
  if (g_data_057ae712 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae712 = '\x01';
  }
  a = (long *)"Back";
  uStack_18 = unaff_RBX;
  if (g_data_057ae710 == '\0') {
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451eca;
  bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451ef2;
  __this_03 = (System_Collections_Generic_List_BasePopup__o *)a;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  uVar16 = unaff_RBP;
  if ((char)bVar9 == '\0') {
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f86;
    pMVar17 = "Previous";
    bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0)
    ;
    if ((char)bVar9 == '\0') {
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451fb9;
      pMVar17 = "Next";
      bVar9 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      uVar2 = (__this->fields)._index;
      uVar16 = (ulong)uVar2;
      a = &TypeInfo_SnapshotManager;
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      if (iVar21 == 0) {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28) + -1 <= (int)uVar2) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + 1;
    }
    else {
      iVar21 = (__this->fields)._index;
      if (iVar21 < 1) {
        return;
      }
      (__this->fields)._index = iVar21 + -1;
    }
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,pMVar17);
    pUVar18 = (__this->fields)._menu;
    __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
    if (pUVar18 == (UI_SnapshotViewerMenu_o *)0x0) goto label_04452065;
    uVar16 = (ulong)(uint)(__this->fields)._index;
    uVar11 = extraout_RAX;
  }
  else {
    __this = (UI_SnapshotViewerMainPanel_o *)(__this->fields)._menu;
    if ((UI_SnapshotViewerMenu_o *)__this != (UI_SnapshotViewerMenu_o *)0x0) {
      if (g_data_057ae717 == '\0') {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f31;
      __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f3e;
      __this_03 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields)._items = 0;
      a = (long *)0x0;
      if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        (__this_00->fields)._syncRoot = (Il2CppObject *)__this;
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._syncRoot,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    unaff_RBP = uVar16;
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x445206a;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    pSStack_28 = (System_Collections_Generic_List_BasePopup__o *)a;
    pUStack_20 = (UI_SnapshotViewerMenu_o *)__this;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_01 = (UI_SnapshotViewerMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar16 = 0;
    pUVar18 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (UI_SnapshotViewerMenu_o *)0x0) {
      (__this_01->fields)._popups = __this_03;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,__this_03);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_03,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
    uVar11 = il2cpp_runtime_helper_022b2c90();
    uStack_18 = 0;
    unaff_R14 = __this_03;
  }
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(System_Collections_Generic_List_BasePopup__o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = uStack_18;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar11;
  pUVar19 = (UnityEngine_UI_Text_o *)(uVar16 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
  pUVar20 = (pUVar18->fields)._statusLabel;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452198;
  (*pIVar4)(pUVar20,"",pMVar17);
  pUVar20 = (pUVar18->fields)._nameLabel;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44521bc;
  (*pIVar4)(pUVar20,"",pMVar17);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar21) {
    iVar21 = (int)uVar16;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar21) && (iVar21 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452260;
      pUVar12 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar21,(MethodInfo *)0x0);
      pUVar5 = (pUVar18->fields)._snapshotPopup;
      __this_04 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
        pMVar17 = (pUVar5->klass->vtable)._59_Load.method;
        pIVar4 = (pUVar5->klass->vtable)._59_Load.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452286;
        (*pIVar4)(pUVar5,pUVar12,pMVar17);
        pUVar5 = (pUVar18->fields)._snapshotPopup;
        __this_04 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522aa;
          __this_04 = pUVar19;
          iVar10 = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
          pUVar20 = (UnityEngine_UI_Text_o *)(pUVar18->fields)._killScorePopup;
          if (0 < iVar10) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
            __this_04 = pUVar19;
          }
          if (pUVar20 != (UnityEngine_UI_Text_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar20,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_04 = pUVar20;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pUVar19 = (pUVar18->fields)._nameLabel;
              __this_04 = *(UnityEngine_UI_Text_o **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452430;
              SVar13 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)register0x00000020 + -0x38))->_dateData =
                   (uint64_t)SVar13.fields._dateData;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445243e;
              pSVar14 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)register0x00000020 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452455;
              pSVar14 = System_String__Concat_3af7150
                                  ((System_String_o *)__this_04," ",pSVar14,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                pMVar17 = (pUVar19->klass->vtable)._75_set_text.method;
                pIVar4 = (pUVar19->klass->vtable)._75_set_text.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452475;
                (*pIVar4)(pUVar19,pSVar14,pMVar17);
                __this_04 = (pUVar18->fields)._nameLabel;
                if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445248c;
                  __this_02 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(__this_02,(MethodInfo *)0x0);
                    pUVar8 = (pUVar18->fields)._currentSnapshot;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppUVar15 = &(pUVar18->fields)._currentSnapshot;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524cd;
                    bVar9 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar9 != '\0') {
                      pUVar8 = *ppUVar15;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
                    }
                    *ppUVar15 = pUVar12;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppUVar15,pUVar12);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar5 = (pUVar18->fields)._snapshotPopup;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
    pIVar4 = (pUVar5->klass->vtable)._22_Hide.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523a0;
    (*pIVar4)();
    pUVar6 = (pUVar18->fields)._killScorePopup;
    __this_04 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar6 != (UI_KillScorePopup_o *)0x0) {
      pMVar17 = (pUVar6->klass->vtable)._22_Hide.method;
      pIVar4 = (pUVar6->klass->vtable)._22_Hide.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523c0;
      (*pIVar4)(pUVar6,pMVar17);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_04,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_1
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_1 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x4452570

void UI_SnapshotViewerMainPanel___Setup_b__15_1(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Il2CppMethodPointer pIVar4;
  UI_SnapshotPopup_o *pUVar5;
  UI_KillScorePopup_o *pUVar6;
  long lVar7;
  UnityEngine_Texture2D_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t score;
  MethodInfo *__this_00;
  undefined8 extraout_RAX;
  UI_SnapshotViewerMenu_o *__this_01;
  undefined8 uVar11;
  UnityEngine_Texture2D_o *pUVar12;
  System_DateTime_o SVar13;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *__this_02;
  long *a;
  UnityEngine_Texture2D_o **ppUVar15;
  undefined8 unaff_RBX;
  ulong uVar16;
  ulong unaff_RBP;
  MethodInfo *pMVar17;
  UI_SnapshotViewerMenu_o *pUVar18;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_Text_o *pUVar19;
  UnityEngine_UI_Text_o *pUVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  MethodInfo *unaff_R14;
  int iVar21;
  undefined8 unaff_R15;
  undefined8 uStack_30;
  MethodInfo *pMStack_28;
  Il2CppClass *pIStack_20;
  undefined8 uStack_18;
  
  if (g_data_057ae713 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    g_data_057ae713 = '\x01';
  }
  a = (long *)"Previous";
  uStack_18 = unaff_RBX;
  if (g_data_057ae710 == '\0') {
    pIStack_20 = (Il2CppClass *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pIStack_20 = (Il2CppClass *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pIStack_20 = (Il2CppClass *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pIStack_20 = (Il2CppClass *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pIStack_20 = (Il2CppClass *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pIStack_20 = (Il2CppClass *)0x4451eca;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pIStack_20 = (Il2CppClass *)0x4451ef2;
  pMVar17 = (MethodInfo *)a;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  uVar16 = unaff_RBP;
  if ((char)bVar9 == '\0') {
    pIStack_20 = (Il2CppClass *)0x4451f86;
    pMVar17 = "Previous";
    bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0)
    ;
    if ((char)bVar9 == '\0') {
      pIStack_20 = (Il2CppClass *)0x4451fb9;
      pMVar17 = "Next";
      bVar9 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      uVar2 = (__this->fields)._index;
      uVar16 = (ulong)uVar2;
      a = &TypeInfo_SnapshotManager;
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        pIStack_20 = (Il2CppClass *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pIStack_20 = (Il2CppClass *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      if (iVar21 == 0) {
        pIStack_20 = (Il2CppClass *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28) + -1 <= (int)uVar2) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + 1;
    }
    else {
      iVar21 = (__this->fields)._index;
      if (iVar21 < 1) {
        return;
      }
      (__this->fields)._index = iVar21 + -1;
    }
    pIStack_20 = (Il2CppClass *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,pMVar17);
    pUVar18 = (__this->fields)._menu;
    pMVar17 = (MethodInfo *)0x0;
    if (pUVar18 == (UI_SnapshotViewerMenu_o *)0x0) goto label_04452065;
    uVar16 = (ulong)(uint)(__this->fields)._index;
    uVar11 = extraout_RAX;
  }
  else {
    __this = (UI_SnapshotViewerMainPanel_o *)(__this->fields)._menu;
    if ((Il2CppClass *)__this != (Il2CppClass *)0x0) {
      if (g_data_057ae717 == '\0') {
        pIStack_20 = (Il2CppClass *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pIStack_20 = (Il2CppClass *)0x4451f31;
      __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pIStack_20 = (Il2CppClass *)0x4451f3e;
      pMVar17 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00->invoker_method = 0;
      a = (long *)0x0;
      if (__this_00 != (MethodInfo *)0x0) {
        __this_00->klass = (Il2CppClass *)__this;
        pIStack_20 = (Il2CppClass *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&__this_00->klass,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    unaff_RBP = uVar16;
    pIStack_20 = (Il2CppClass *)0x445206a;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    pMStack_28 = (MethodInfo *)a;
    pIStack_20 = (Il2CppClass *)__this;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_01 = (UI_SnapshotViewerMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar16 = 0;
    pUVar18 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (UI_SnapshotViewerMenu_o *)0x0) {
      (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pMVar17;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,pMVar17);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pMVar17,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
    uVar11 = il2cpp_runtime_helper_022b2c90();
    uStack_18 = 0;
    unaff_R14 = pMVar17;
  }
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(MethodInfo **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = uStack_18;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar11;
  pUVar19 = (UnityEngine_UI_Text_o *)(uVar16 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
  pUVar20 = (pUVar18->fields)._statusLabel;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452198;
  (*pIVar4)(pUVar20,"",pMVar17);
  pUVar20 = (pUVar18->fields)._nameLabel;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44521bc;
  (*pIVar4)(pUVar20,"",pMVar17);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar21) {
    iVar21 = (int)uVar16;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar21) && (iVar21 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452260;
      pUVar12 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar21,(MethodInfo *)0x0);
      pUVar5 = (pUVar18->fields)._snapshotPopup;
      __this_03 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
        pMVar17 = (pUVar5->klass->vtable)._59_Load.method;
        pIVar4 = (pUVar5->klass->vtable)._59_Load.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452286;
        (*pIVar4)(pUVar5,pUVar12,pMVar17);
        pUVar5 = (pUVar18->fields)._snapshotPopup;
        __this_03 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522aa;
          __this_03 = pUVar19;
          iVar10 = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
          pUVar20 = (UnityEngine_UI_Text_o *)(pUVar18->fields)._killScorePopup;
          if (0 < iVar10) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
            __this_03 = pUVar19;
          }
          if (pUVar20 != (UnityEngine_UI_Text_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar20,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_03 = pUVar20;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pUVar19 = (pUVar18->fields)._nameLabel;
              __this_03 = *(UnityEngine_UI_Text_o **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452430;
              SVar13 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)register0x00000020 + -0x38))->_dateData =
                   (uint64_t)SVar13.fields._dateData;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445243e;
              pSVar14 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)register0x00000020 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452455;
              pSVar14 = System_String__Concat_3af7150
                                  ((System_String_o *)__this_03," ",pSVar14,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                pMVar17 = (pUVar19->klass->vtable)._75_set_text.method;
                pIVar4 = (pUVar19->klass->vtable)._75_set_text.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452475;
                (*pIVar4)(pUVar19,pSVar14,pMVar17);
                __this_03 = (pUVar18->fields)._nameLabel;
                if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445248c;
                  __this_02 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(__this_02,(MethodInfo *)0x0);
                    pUVar8 = (pUVar18->fields)._currentSnapshot;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppUVar15 = &(pUVar18->fields)._currentSnapshot;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524cd;
                    bVar9 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar9 != '\0') {
                      pUVar8 = *ppUVar15;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
                    }
                    *ppUVar15 = pUVar12;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppUVar15,pUVar12);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar5 = (pUVar18->fields)._snapshotPopup;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
    pIVar4 = (pUVar5->klass->vtable)._22_Hide.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523a0;
    (*pIVar4)();
    pUVar6 = (pUVar18->fields)._killScorePopup;
    __this_03 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar6 != (UI_KillScorePopup_o *)0x0) {
      pMVar17 = (pUVar6->klass->vtable)._22_Hide.method;
      pIVar4 = (pUVar6->klass->vtable)._22_Hide.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523c0;
      (*pIVar4)(pUVar6,pMVar17);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_2
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_2 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44525b0

void UI_SnapshotViewerMainPanel___Setup_b__15_2(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Il2CppMethodPointer pIVar4;
  UI_SnapshotPopup_o *pUVar5;
  UI_KillScorePopup_o *pUVar6;
  long lVar7;
  UnityEngine_Texture2D_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t score;
  MethodInfo *__this_00;
  undefined8 extraout_RAX;
  UI_SnapshotViewerMenu_o *__this_01;
  undefined8 uVar11;
  UnityEngine_Texture2D_o *pUVar12;
  System_DateTime_o SVar13;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *__this_02;
  long *a;
  UnityEngine_Texture2D_o **ppUVar15;
  undefined8 unaff_RBX;
  ulong uVar16;
  ulong unaff_RBP;
  MethodInfo *pMVar17;
  UI_SnapshotViewerMenu_o *pUVar18;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_Text_o *pUVar19;
  UnityEngine_UI_Text_o *pUVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  MethodInfo *unaff_R14;
  int iVar21;
  undefined8 unaff_R15;
  undefined8 uStack_30;
  MethodInfo *pMStack_28;
  Il2CppClass *pIStack_20;
  undefined8 uStack_18;
  
  if (g_data_057ae714 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae714 = '\x01';
  }
  a = (long *)"Next";
  uStack_18 = unaff_RBX;
  if (g_data_057ae710 == '\0') {
    pIStack_20 = (Il2CppClass *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pIStack_20 = (Il2CppClass *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pIStack_20 = (Il2CppClass *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pIStack_20 = (Il2CppClass *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pIStack_20 = (Il2CppClass *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pIStack_20 = (Il2CppClass *)0x4451eca;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pIStack_20 = (Il2CppClass *)0x4451ef2;
  pMVar17 = (MethodInfo *)a;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  uVar16 = unaff_RBP;
  if ((char)bVar9 == '\0') {
    pIStack_20 = (Il2CppClass *)0x4451f86;
    pMVar17 = "Previous";
    bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0)
    ;
    if ((char)bVar9 == '\0') {
      pIStack_20 = (Il2CppClass *)0x4451fb9;
      pMVar17 = "Next";
      bVar9 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      uVar2 = (__this->fields)._index;
      uVar16 = (ulong)uVar2;
      a = &TypeInfo_SnapshotManager;
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        pIStack_20 = (Il2CppClass *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pIStack_20 = (Il2CppClass *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      if (iVar21 == 0) {
        pIStack_20 = (Il2CppClass *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28) + -1 <= (int)uVar2) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + 1;
    }
    else {
      iVar21 = (__this->fields)._index;
      if (iVar21 < 1) {
        return;
      }
      (__this->fields)._index = iVar21 + -1;
    }
    pIStack_20 = (Il2CppClass *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,pMVar17);
    pUVar18 = (__this->fields)._menu;
    pMVar17 = (MethodInfo *)0x0;
    if (pUVar18 == (UI_SnapshotViewerMenu_o *)0x0) goto label_04452065;
    uVar16 = (ulong)(uint)(__this->fields)._index;
    uVar11 = extraout_RAX;
  }
  else {
    __this = (UI_SnapshotViewerMainPanel_o *)(__this->fields)._menu;
    if ((Il2CppClass *)__this != (Il2CppClass *)0x0) {
      if (g_data_057ae717 == '\0') {
        pIStack_20 = (Il2CppClass *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pIStack_20 = (Il2CppClass *)0x4451f31;
      __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pIStack_20 = (Il2CppClass *)0x4451f3e;
      pMVar17 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00->invoker_method = 0;
      a = (long *)0x0;
      if (__this_00 != (MethodInfo *)0x0) {
        __this_00->klass = (Il2CppClass *)__this;
        pIStack_20 = (Il2CppClass *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&__this_00->klass,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    unaff_RBP = uVar16;
    pIStack_20 = (Il2CppClass *)0x445206a;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    pMStack_28 = (MethodInfo *)a;
    pIStack_20 = (Il2CppClass *)__this;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_01 = (UI_SnapshotViewerMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar16 = 0;
    pUVar18 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (UI_SnapshotViewerMenu_o *)0x0) {
      (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pMVar17;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,pMVar17);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pMVar17,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
    uVar11 = il2cpp_runtime_helper_022b2c90();
    uStack_18 = 0;
    unaff_R14 = pMVar17;
  }
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(MethodInfo **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = uStack_18;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar11;
  pUVar19 = (UnityEngine_UI_Text_o *)(uVar16 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
  pUVar20 = (pUVar18->fields)._statusLabel;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452198;
  (*pIVar4)(pUVar20,"",pMVar17);
  pUVar20 = (pUVar18->fields)._nameLabel;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44521bc;
  (*pIVar4)(pUVar20,"",pMVar17);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar21) {
    iVar21 = (int)uVar16;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar21) && (iVar21 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452260;
      pUVar12 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar21,(MethodInfo *)0x0);
      pUVar5 = (pUVar18->fields)._snapshotPopup;
      __this_03 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
        pMVar17 = (pUVar5->klass->vtable)._59_Load.method;
        pIVar4 = (pUVar5->klass->vtable)._59_Load.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452286;
        (*pIVar4)(pUVar5,pUVar12,pMVar17);
        pUVar5 = (pUVar18->fields)._snapshotPopup;
        __this_03 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522aa;
          __this_03 = pUVar19;
          iVar10 = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
          pUVar20 = (UnityEngine_UI_Text_o *)(pUVar18->fields)._killScorePopup;
          if (0 < iVar10) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
            __this_03 = pUVar19;
          }
          if (pUVar20 != (UnityEngine_UI_Text_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar20,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_03 = pUVar20;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pUVar19 = (pUVar18->fields)._nameLabel;
              __this_03 = *(UnityEngine_UI_Text_o **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452430;
              SVar13 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)register0x00000020 + -0x38))->_dateData =
                   (uint64_t)SVar13.fields._dateData;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445243e;
              pSVar14 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)register0x00000020 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452455;
              pSVar14 = System_String__Concat_3af7150
                                  ((System_String_o *)__this_03," ",pSVar14,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                pMVar17 = (pUVar19->klass->vtable)._75_set_text.method;
                pIVar4 = (pUVar19->klass->vtable)._75_set_text.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452475;
                (*pIVar4)(pUVar19,pSVar14,pMVar17);
                __this_03 = (pUVar18->fields)._nameLabel;
                if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445248c;
                  __this_02 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(__this_02,(MethodInfo *)0x0);
                    pUVar8 = (pUVar18->fields)._currentSnapshot;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppUVar15 = &(pUVar18->fields)._currentSnapshot;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524cd;
                    bVar9 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar9 != '\0') {
                      pUVar8 = *ppUVar15;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
                    }
                    *ppUVar15 = pUVar12;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppUVar15,pUVar12);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar5 = (pUVar18->fields)._snapshotPopup;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
    pIVar4 = (pUVar5->klass->vtable)._22_Hide.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523a0;
    (*pIVar4)();
    pUVar6 = (pUVar18->fields)._killScorePopup;
    __this_03 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar6 != (UI_KillScorePopup_o *)0x0) {
      pMVar17 = (pUVar6->klass->vtable)._22_Hide.method;
      pIVar4 = (pUVar6->klass->vtable)._22_Hide.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523c0;
      (*pIVar4)(pUVar6,pMVar17);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_3
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_3 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x44525f0

void UI_SnapshotViewerMainPanel___Setup_b__15_3(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Il2CppMethodPointer pIVar4;
  UI_SnapshotPopup_o *pUVar5;
  UI_KillScorePopup_o *pUVar6;
  long lVar7;
  UnityEngine_Texture2D_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t score;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  undefined8 extraout_RAX;
  UI_SnapshotViewerMenu_o *__this_01;
  undefined8 uVar11;
  UnityEngine_Texture2D_o *pUVar12;
  System_DateTime_o SVar13;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *__this_02;
  long *a;
  UnityEngine_Texture2D_o **ppUVar15;
  undefined8 unaff_RBX;
  ulong uVar16;
  ulong unaff_RBP;
  MethodInfo *pMVar17;
  System_Collections_Generic_List_BasePopup__o *__this_03;
  UI_SnapshotViewerMenu_o *pUVar18;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_UI_Text_o *pUVar19;
  UnityEngine_UI_Text_o *pUVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  System_Collections_Generic_List_BasePopup__o *unaff_R14;
  int iVar21;
  undefined8 unaff_R15;
  undefined8 uStack_30;
  System_Collections_Generic_List_BasePopup__o *pSStack_28;
  UI_SnapshotViewerMenu_o *pUStack_20;
  undefined8 uStack_18;
  
  if (g_data_057ae715 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae715 = '\x01';
  }
  a = (long *)"Save";
  uStack_18 = unaff_RBX;
  if (g_data_057ae710 == '\0') {
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e8b;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451e97;
    il2cpp_runtime_helper_023445d0(&"Back");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451ea3;
    il2cpp_runtime_helper_023445d0(&"Next");
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451eaf;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae710 = '\x01';
  }
  pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451eca;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451ef2;
  __this_03 = (System_Collections_Generic_List_BasePopup__o *)a;
  bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Save",(MethodInfo *)0x0);
  uVar16 = unaff_RBP;
  if ((char)bVar9 == '\0') {
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f86;
    pMVar17 = "Previous";
    bVar9 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0)
    ;
    if ((char)bVar9 == '\0') {
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451fb9;
      pMVar17 = "Next";
      bVar9 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      uVar2 = (__this->fields)._index;
      uVar16 = (ulong)uVar2;
      a = &TypeInfo_SnapshotManager;
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452033;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae736 == '\0') goto label_0445203c;
label_04451fe0:
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      else {
        if (g_data_057ae736 != '\0') goto label_04451fe0;
label_0445203c:
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452048;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        g_data_057ae736 = '\x01';
        iVar21 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
      }
      if (iVar21 == 0) {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4452060;
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28) + -1 <= (int)uVar2) {
        return;
      }
      piVar1 = &(__this->fields)._index;
      *piVar1 = *piVar1 + 1;
    }
    else {
      iVar21 = (__this->fields)._index;
      if (iVar21 < 1) {
        return;
      }
      (__this->fields)._index = iVar21 + -1;
    }
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x445200d;
    UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,pMVar17);
    pUVar18 = (__this->fields)._menu;
    __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
    if (pUVar18 == (UI_SnapshotViewerMenu_o *)0x0) goto label_04452065;
    uVar16 = (ulong)(uint)(__this->fields)._index;
    uVar11 = extraout_RAX;
  }
  else {
    __this = (UI_SnapshotViewerMainPanel_o *)(__this->fields)._menu;
    if ((UI_SnapshotViewerMenu_o *)__this != (UI_SnapshotViewerMenu_o *)0x0) {
      if (g_data_057ae717 == '\0') {
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f1b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
        g_data_057ae717 = '\x01';
      }
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f31;
      __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
      pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f3e;
      __this_03 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields)._items = 0;
      a = (long *)0x0;
      if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        (__this_00->fields)._syncRoot = (Il2CppObject *)__this;
        pUStack_20 = (UI_SnapshotViewerMenu_o *)0x4451f61;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._syncRoot,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
label_04452065:
    unaff_RBP = uVar16;
    pUStack_20 = (UI_SnapshotViewerMenu_o *)0x445206a;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    pSStack_28 = (System_Collections_Generic_List_BasePopup__o *)a;
    pUStack_20 = (UI_SnapshotViewerMenu_o *)__this;
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_01 = (UI_SnapshotViewerMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar16 = 0;
    pUVar18 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (UI_SnapshotViewerMenu_o *)0x0) {
      (__this_01->fields)._popups = __this_03;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,__this_03);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_03,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
    uVar11 = il2cpp_runtime_helper_022b2c90();
    uStack_18 = 0;
    unaff_R14 = __this_03;
  }
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(System_Collections_Generic_List_BasePopup__o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = uStack_18;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar11;
  pUVar19 = (UnityEngine_UI_Text_o *)(uVar16 & 0xffffffff);
  if (g_data_057ae718 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452116;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452122;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445212e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445213a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452152;
    il2cpp_runtime_helper_023445d0(&" ");
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445215e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
  pUVar20 = (pUVar18->fields)._statusLabel;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452198;
  (*pIVar4)(pUVar20,"",pMVar17);
  pUVar20 = (pUVar18->fields)._nameLabel;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  pMVar17 = (pUVar20->klass->vtable)._75_set_text.method;
  pIVar4 = (pUVar20->klass->vtable)._75_set_text.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44521bc;
  (*pIVar4)(pUVar20,"",pMVar17);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522eb;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452321;
    il2cpp_runtime_helper_02337ed0();
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452304;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar21 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar21) {
    iVar21 = (int)uVar16;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445233d;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452356;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar3 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452373;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar21) && (iVar21 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452256;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452260;
      pUVar12 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar21,(MethodInfo *)0x0);
      pUVar5 = (pUVar18->fields)._snapshotPopup;
      __this_04 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
        pMVar17 = (pUVar5->klass->vtable)._59_Load.method;
        pIVar4 = (pUVar5->klass->vtable)._59_Load.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452286;
        (*pIVar4)(pUVar5,pUVar12,pMVar17);
        pUVar5 = (pUVar18->fields)._snapshotPopup;
        __this_04 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522a0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522aa;
          __this_04 = pUVar19;
          iVar10 = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
          pUVar20 = (UnityEngine_UI_Text_o *)(pUVar18->fields)._killScorePopup;
          if (0 < iVar10) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44522d5;
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar21,(MethodInfo *)0x0);
            __this_04 = pUVar19;
          }
          if (pUVar20 != (UnityEngine_UI_Text_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523db;
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar20,score,(MethodInfo *)0x0);
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_04 = pUVar20;
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              pUVar19 = (pUVar18->fields)._nameLabel;
              __this_04 = *(UnityEngine_UI_Text_o **)(lVar7 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452429;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452430;
              SVar13 = System_DateTime__get_Today((MethodInfo *)0x0);
              ((System_DateTime_Fields *)((long)register0x00000020 + -0x38))->_dateData =
                   (uint64_t)SVar13.fields._dateData;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445243e;
              pSVar14 = System_DateTime__ToShortDateString
                                  ((System_DateTime_o)((long)register0x00000020 + -0x38),(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452455;
              pSVar14 = System_String__Concat_3af7150
                                  ((System_String_o *)__this_04," ",pSVar14,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                pMVar17 = (pUVar19->klass->vtable)._75_set_text.method;
                pIVar4 = (pUVar19->klass->vtable)._75_set_text.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452475;
                (*pIVar4)(pUVar19,pSVar14,pMVar17);
                __this_04 = (pUVar18->fields)._nameLabel;
                if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445248c;
                  __this_02 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x445249b;
                    UnityEngine_Transform__SetAsLastSibling(__this_02,(MethodInfo *)0x0);
                    pUVar8 = (pUVar18->fields)._currentSnapshot;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ba;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppUVar15 = &(pUVar18->fields)._currentSnapshot;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524cd;
                    bVar9 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar9 != '\0') {
                      pUVar8 = *ppUVar15;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524e5;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524ef;
                      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
                    }
                    *ppUVar15 = pUVar12;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44524fd;
                    il2cpp_runtime_helper_022b4080(ppUVar15,pUVar12);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar5 = (pUVar18->fields)._snapshotPopup;
  __this_04 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
    pIVar4 = (pUVar5->klass->vtable)._22_Hide.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523a0;
    (*pIVar4)();
    pUVar6 = (pUVar18->fields)._killScorePopup;
    __this_04 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar6 != (UI_KillScorePopup_o *)0x0) {
      pMVar17 = (pUVar6->klass->vtable)._22_Hide.method;
      pIVar4 = (pUVar6->klass->vtable)._22_Hide.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44523c0;
      (*pIVar4)(pUVar6,pMVar17);
      return;
    }
  }
label_0445250c:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4452511;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_04,(MethodInfo *)0x0);
  return;
}


