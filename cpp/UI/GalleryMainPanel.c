// Type: UI.GalleryMainPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GalleryMainPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMainPanel.cs
// --------------------------------

// UI.GalleryMainPanel$$get_Title
// il2cpp: System_String_o* UI_GalleryMainPanel__get_Title (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a7c0

System_String_o * UI_GalleryMainPanel__get_Title(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae2f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"GalleryButton");
    il2cpp_runtime_helper_023445d0(&"ToolsPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2f1 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","GalleryButton","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.GalleryMainPanel$$get_Width
// il2cpp: float UI_GalleryMainPanel__get_Width (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a860

float UI_GalleryMainPanel__get_Width(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 1960.0;
}


// UI.GalleryMainPanel$$get_Height
// il2cpp: float UI_GalleryMainPanel__get_Height (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a870

float UI_GalleryMainPanel__get_Height(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.GalleryMainPanel$$get_TopBarHeight
// il2cpp: float UI_GalleryMainPanel__get_TopBarHeight (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a880

float UI_GalleryMainPanel__get_TopBarHeight(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_BottomBarHeight
// il2cpp: float UI_GalleryMainPanel__get_BottomBarHeight (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a890

float UI_GalleryMainPanel__get_BottomBarHeight(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_VerticalSpacing
// il2cpp: float UI_GalleryMainPanel__get_VerticalSpacing (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a8a0

float UI_GalleryMainPanel__get_VerticalSpacing(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_GalleryMainPanel__get_HorizontalPadding (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a8b0

int32_t UI_GalleryMainPanel__get_HorizontalPadding(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.GalleryMainPanel$$get_VerticalPadding
// il2cpp: int32_t UI_GalleryMainPanel__get_VerticalPadding (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439a8c0

int32_t UI_GalleryMainPanel__get_VerticalPadding(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.GalleryMainPanel$$Setup
// il2cpp: void UI_GalleryMainPanel__Setup (UI_GalleryMainPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x439a8d0

void UI_GalleryMainPanel__Setup(UI_GalleryMainPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_SetNamePopup_o *pUVar3;
  UI_KeybindPopup_o *pUVar4;
  UI_SetNamePopup_c *pUVar5;
  undefined8 uVar6;
  long lVar7;
  Il2CppMethodPointer pIVar8;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar9;
  Il2CppClass *pIVar10;
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_UI_Text_o *method_00;
  System_String_o *pSVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  UI_SetNamePopup_o *str0;
  Il2CppObject *pIVar15;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long *themePanel;
  UI_GalleryMenu_o *a;
  undefined8 *puVar16;
  undefined8 unaff_RBP;
  UI_GalleryMenu_o *pUVar17;
  MethodInfo *method_03;
  UI_SetNamePopup_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  UI_GalleryMenu_o *unaff_R15;
  undefined8 uStack_78;
  UI_GalleryMenu_o *pUStack_70;
  UI_SetNamePopup_o *pUStack_68;
  undefined1 auStack_60 [12];
  int iStack_54;
  System_String_o *pSStack_50;
  UI_BasePanel_o *pUStack_48;
  UI_GalleryMenu_o *pUStack_40;
  
  if (g_data_057ae2f2 == '\0') {
    pUStack_40 = (UI_GalleryMenu_o *)0x439a8fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a906;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__19_0);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a912;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__19_1);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a91e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__19_2);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a92a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GalleryMenu);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a936;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a942;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a94e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_40 = (UI_GalleryMenu_o *)0x439a95a;
    il2cpp_runtime_helper_023445d0(&"Previous");
    pUStack_40 = (UI_GalleryMenu_o *)0x439a966;
    il2cpp_runtime_helper_023445d0(&"Back");
    pUStack_40 = (UI_GalleryMenu_o *)0x439a972;
    il2cpp_runtime_helper_023445d0(&"Next");
    pUStack_40 = (UI_GalleryMenu_o *)0x439a97e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2f2 = '\x01';
  }
  pUStack_40 = (UI_GalleryMenu_o *)0x439a992;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  themePanel = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pUStack_40 = (UI_GalleryMenu_o *)0x439aa1f;
    il2cpp_runtime_helper_02337ed0();
    pUVar17 = *(UI_GalleryMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar17 == (UI_GalleryMenu_o *)0x0) goto label_0439aa32;
label_0439a9b5:
    pIVar10 = TypeInfo_GalleryMenu;
    bVar1 = (TypeInfo_GalleryMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
       ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_GalleryMenu)) {
      (__this->fields)._menu = pUVar17;
      if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
         ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar10)) goto label_0439aa46;
    }
    pUStack_40 = (UI_GalleryMenu_o *)0x439ac33;
    il2cpp_runtime_helper_022b2fd0();
  }
  else {
    pUVar17 = *(UI_GalleryMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar17 != (UI_GalleryMenu_o *)0x0) goto label_0439a9b5;
label_0439aa32:
    (__this->fields)._menu = (UI_GalleryMenu_o *)0x0;
label_0439aa46:
    pUStack_40 = (UI_GalleryMenu_o *)0x439aa4b;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
    pUStack_40 = (UI_GalleryMenu_o *)0x439aa5f;
    themePanel = (long *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUStack_40 = (UI_GalleryMenu_o *)0x439aa71;
    parent = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    pUStack_40 = (UI_GalleryMenu_o *)0x439aa96;
    UI_ElementStyle___ctor
              ((UI_ElementStyle_o *)parent,0x18,95.0,20.0,(System_String_o *)themePanel,(MethodInfo *)0x0);
    pUVar17 = (UI_GalleryMenu_o *)(__this->fields).SinglePanel;
    pUStack_40 = (UI_GalleryMenu_o *)0x439aaaf;
    pUVar12 = UI_ElementFactory__CreateHorizontalGroup
                        ((UnityEngine_Transform_o *)pUVar17,10.0,3,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
      pUStack_40 = (UI_GalleryMenu_o *)0x439aac2;
      unaff_R15 = (UI_GalleryMenu_o *)UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
      pUStack_40 = (UI_GalleryMenu_o *)0x439aae5;
      pUVar17 = unaff_R15;
      pUVar12 = UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)parent,"",0,4,
                           (MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab00;
        method_00 = (UnityEngine_UI_Text_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._indexLabel = method_00;
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab18;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._indexLabel);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab20;
        UI_GalleryMainPanel__UpdateIndexLabel(__this,(MethodInfo *)method_00);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab31;
        pSVar13 = UI_UIManager__GetLocaleCommon((System_String_o *)"Previous",(MethodInfo *)0x0);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab44;
        pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab5e;
        UnityEngine_Events_UnityAction___ctor();
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab78;
        UI_ElementFactory__CreateDefaultButton
                  ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)parent,pSVar13,0.0,0.0,pUVar14,
                   (MethodInfo *)0x0);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab89;
        pSVar13 = UI_UIManager__GetLocaleCommon((System_String_o *)"Next",(MethodInfo *)0x0);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ab95;
        pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUStack_40 = (UI_GalleryMenu_o *)0x439abaf;
        UnityEngine_Events_UnityAction___ctor();
        pUStack_40 = (UI_GalleryMenu_o *)0x439abc9;
        UI_ElementFactory__CreateDefaultButton
                  ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)parent,pSVar13,0.0,0.0,pUVar14,
                   (MethodInfo *)0x0);
        pUStack_40 = (UI_GalleryMenu_o *)0x439abda;
        pSVar13 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUStack_40 = (UI_GalleryMenu_o *)0x439abe6;
        pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUStack_40 = (UI_GalleryMenu_o *)0x439ac00;
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)parent,pSVar13,0.0,0.0,pUVar14,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  pUStack_40 = (UI_GalleryMenu_o *)0x439ac38;
  il2cpp_runtime_helper_022b2c90();
  pSStack_50 = (System_String_o *)themePanel;
  pUStack_48 = parent;
  pUStack_40 = unaff_R15;
  if (g_data_057ae2f4 == '\0') {
    pUStack_68 = (UI_SetNamePopup_o *)0x439ac61;
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ae2f4 = '\x01';
  }
  pUVar3 = (pUVar17->fields).SetNamePopup;
  iStack_54 = *(int *)&(pUVar17->fields).SelectListPopup + 1;
  a = (UI_GalleryMenu_o *)0x0;
  pUStack_68 = (UI_SetNamePopup_o *)0x439ac88;
  str0 = (UI_SetNamePopup_o *)System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
  pUVar4 = (pUVar17->fields).KeybindPopup;
  __this_01 = (UI_SetNamePopup_o *)0x0;
  if (pUVar4 != (UI_KeybindPopup_o *)0x0) {
    pUStack_68 = (UI_SetNamePopup_o *)0x439aca5;
    pSVar13 = System_Int32__ToString((int)pUVar4 + 0xb0,(MethodInfo *)0x0);
    pUStack_68 = (UI_SetNamePopup_o *)0x439acbc;
    a = "/";
    pSVar13 = System_String__Concat_3af7150
                        ((System_String_o *)str0,(System_String_o *)"/",pSVar13,(MethodInfo *)0x0);
    __this_01 = str0;
    if (pUVar3 != (UI_SetNamePopup_o *)0x0) {
      pUVar5 = pUVar3->klass;
      uVar6._0_4_ = pUVar5[1]._2.static_fields_size;
      uVar6._4_4_ = pUVar5[1]._2.thread_static_fields_size;
      pUStack_68 = (UI_SetNamePopup_o *)0x439acd7;
      (**(code **)&pUVar5[1]._2.element_size)(pUVar3,pSVar13,uVar6);
      return;
    }
  }
  pUStack_68 = (UI_SetNamePopup_o *)0x439ace6;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  puVar16 = &uStack_78;
  pUStack_70 = pUVar17;
  pUStack_68 = pUVar3;
  if (g_data_057ae2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f3 = '\x01';
  }
  bVar11 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  method_03 = "Previous";
  bVar11 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    method_03 = "Next";
    pUVar17 = a;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    lVar7 = *(long *)&(__this_01->fields)._currentAnimationValue;
    if (lVar7 != 0) {
      iVar2 = (__this_01->fields).IsActive;
      if (*(int *)(lVar7 + 0xb0) + -1 <= iVar2) {
        return;
      }
      bVar11 = iVar2 + 1;
      goto label_0439adbc;
    }
  }
  else {
    iVar2 = (__this_01->fields).IsActive;
    if (iVar2 < 1) {
      return;
    }
    bVar11 = iVar2 + -1;
label_0439adbc:
    (__this_01->fields).IsActive = bVar11;
    UI_GalleryMainPanel__UpdateIndexLabel((UI_GalleryMainPanel_o *)__this_01,method_03);
    pUVar17 = *(UI_GalleryMenu_o **)&(__this_01->fields)._currentAnimationValue;
    if (pUVar17 != (UI_GalleryMenu_o *)0x0) {
      bVar11 = (__this_01->fields).IsActive;
      puVar16 = (undefined8 *)auStack_60;
      a = pUStack_70;
      __this_01 = pUStack_68;
      goto UI_GalleryMenu__LoadGallery;
    }
  }
  bVar11 = (bool_conflict)method_03;
  il2cpp_runtime_helper_022b2c90();
UI_GalleryMenu__LoadGallery:
  *(undefined8 *)((long)puVar16 + -8) = unaff_RBP;
  *(UI_SetNamePopup_o **)((long)puVar16 + -0x10) = __this_01;
  *(UI_GalleryMenu_o **)((long)puVar16 + -0x18) = a;
  *(bool_conflict *)((long)puVar16 + -0x1c) = bVar11;
  if (g_data_057ae2f9 == '\0') {
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae54;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae6c;
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae78;
    il2cpp_runtime_helper_023445d0(&"IconFull");
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae84;
    il2cpp_runtime_helper_023445d0(&"Texture");
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439ae90;
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar2 = (pUVar17->fields)._backgroundCount;
  }
  else {
    iVar2 = (pUVar17->fields)._backgroundCount;
  }
  bVar9 = iVar2 <= bVar11;
  if (bVar9) {
    bVar11 = bVar11 - iVar2;
    *(bool_conflict *)((long)puVar16 + -0x1c) = bVar11;
    __this_02 = (UI_HeadedPanel_o *)(pUVar17->fields)._picture;
  }
  else {
    __this_02 = (UI_HeadedPanel_o *)(pUVar17->fields)._picture;
  }
  if (__this_02 != (UI_HeadedPanel_o *)0x0) {
    *(undefined8 *)((long)puVar16 + -0x30) = 0x439aecb;
    pIVar15 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image)
    ;
    if (bVar9) {
      if (pIVar15 != (Il2CppObject *)0x0) {
        pIVar8 = pIVar15->klass->vtable[0x17].methodPtr;
        *(undefined8 *)((long)puVar16 + -0x30) = 0x439af62;
        (*pIVar8)(0x3f400000,0x3f400000,pIVar15);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)puVar16 + -0x30) = 0x439af7a;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_02 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)((long)puVar16 + -0x30) = 0x439af9e;
          pSVar13 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(__this_00,bVar11,MethodInfo_String_get_Item);
          *(undefined8 *)((long)puVar16 + -0x30) = 0x439afbc;
          pSVar13 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar13,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(pUVar17,pSVar13,method_02);
          return;
        }
      }
    }
    else if (pIVar15 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar15->klass->vtable[0x17].methodPtr;
      *(undefined8 *)((long)puVar16 + -0x30) = 0x439aef9;
      (*pIVar8)(0x3f400000,0x3f400000,pIVar15);
      *(undefined8 *)((long)puVar16 + -0x30) = 0x439af05;
      pSVar13 = System_Int32__ToString((int32_t)(undefined1 *)((long)puVar16 + -0x1c),(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar16 + -0x30) = 0x439af23;
      pSVar13 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar13,"Texture",(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar16 + -0x30) = 0x439af2e;
      UI_GalleryMenu__SetBackground(pUVar17,pSVar13,method_01);
      return;
    }
  }
  *(undefined8 *)((long)puVar16 + -0x30) = 0x439afd4;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$OnButtonClick
// il2cpp: void UI_GalleryMainPanel__OnButtonClick (UI_GalleryMainPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x439acf0

void UI_GalleryMainPanel__OnButtonClick
               (UI_GalleryMainPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  UI_GalleryMenu_o *pUVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar4;
  bool_conflict bVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *unaff_RBX;
  undefined1 *puVar9;
  undefined8 unaff_RBP;
  MethodInfo *method_02;
  UI_GalleryMenu_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  UI_GalleryMainPanel_o *unaff_R14;
  undefined1 auStack_18 [8];
  
  puVar9 = auStack_18;
  if (g_data_057ae2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f3 = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  method_02 = "Previous";
  bVar5 = System_String__op_Equality(name,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    method_02 = "Next";
    __this_01 = (UI_GalleryMenu_o *)name;
    bVar5 = System_String__op_Equality(name,(System_String_o *)"Next",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      if ((pUVar2->fields).TotalBackgroundCount + -1 <= iVar6) {
        return;
      }
      iVar6 = iVar6 + 1;
      goto label_0439adbc;
    }
  }
  else {
    iVar6 = (__this->fields)._index;
    if (iVar6 < 1) {
      return;
    }
    iVar6 = iVar6 + -1;
label_0439adbc:
    (__this->fields)._index = iVar6;
    UI_GalleryMainPanel__UpdateIndexLabel(__this,method_02);
    __this_01 = (__this->fields)._menu;
    if (__this_01 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      name = unaff_RBX;
      puVar9 = (undefined1 *)register0x00000020;
      __this = unaff_R14;
      goto UI_GalleryMenu__LoadGallery;
    }
  }
  iVar6 = (int)method_02;
  il2cpp_runtime_helper_022b2c90();
UI_GalleryMenu__LoadGallery:
  *(undefined8 *)(puVar9 + -8) = unaff_RBP;
  *(UI_GalleryMainPanel_o **)(puVar9 + -0x10) = __this;
  *(System_String_o **)(puVar9 + -0x18) = name;
  *(int *)(puVar9 + -0x1c) = iVar6;
  if (g_data_057ae2f9 == '\0') {
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae54;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae6c;
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae78;
    il2cpp_runtime_helper_023445d0(&"IconFull");
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae84;
    il2cpp_runtime_helper_023445d0(&"Texture");
    *(undefined8 *)(puVar9 + -0x30) = 0x439ae90;
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  else {
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  bVar4 = iVar1 <= iVar6;
  if (bVar4) {
    iVar6 = iVar6 - iVar1;
    *(int *)(puVar9 + -0x1c) = iVar6;
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  else {
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  if (__this_02 != (UI_HeadedPanel_o *)0x0) {
    *(undefined8 *)(puVar9 + -0x30) = 0x439aecb;
    pIVar7 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
    if (bVar4) {
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
        *(undefined8 *)(puVar9 + -0x30) = 0x439af62;
        (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar9 + -0x30) = 0x439af7a;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_02 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)(puVar9 + -0x30) = 0x439af9e;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_00,iVar6,MethodInfo_String_get_Item);
          *(undefined8 *)(puVar9 + -0x30) = 0x439afbc;
          pSVar8 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar8,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_01);
          return;
        }
      }
    }
    else if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
      *(undefined8 *)(puVar9 + -0x30) = 0x439aef9;
      (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
      *(undefined8 *)(puVar9 + -0x30) = 0x439af05;
      pSVar8 = System_Int32__ToString((int32_t)(puVar9 + -0x1c),(MethodInfo *)0x0);
      *(undefined8 *)(puVar9 + -0x30) = 0x439af23;
      pSVar8 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar8,"Texture",(MethodInfo *)0x0);
      *(undefined8 *)(puVar9 + -0x30) = 0x439af2e;
      UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_00);
      return;
    }
  }
  *(undefined8 *)(puVar9 + -0x30) = 0x439afd4;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$UpdateIndexLabel
// il2cpp: void UI_GalleryMainPanel__UpdateIndexLabel (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439ac40

void UI_GalleryMainPanel__UpdateIndexLabel(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar5;
  bool_conflict bVar6;
  int iVar7;
  UnityEngine_UI_Text_o *str0;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_GalleryMenu_o *a;
  undefined8 *puVar10;
  undefined8 unaff_RBP;
  MethodInfo *method_02;
  UnityEngine_UI_Text_o *__this_01;
  UI_GalleryMenu_o *pUVar11;
  UI_HeadedPanel_o *__this_02;
  undefined8 uStack_40;
  UI_GalleryMenu_o *pUStack_38;
  UnityEngine_UI_Text_o *pUStack_30;
  undefined1 auStack_28 [12];
  int local_1c;
  
  if (g_data_057ae2f4 == '\0') {
    pUStack_30 = (UnityEngine_UI_Text_o *)0x439ac61;
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ae2f4 = '\x01';
  }
  pUVar2 = (__this->fields)._indexLabel;
  local_1c = (__this->fields)._index + 1;
  a = (UI_GalleryMenu_o *)0x0;
  pUStack_30 = (UnityEngine_UI_Text_o *)0x439ac88;
  str0 = (UnityEngine_UI_Text_o *)System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
  pUVar11 = (__this->fields)._menu;
  __this_01 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar11 != (UI_GalleryMenu_o *)0x0) {
    pUStack_30 = (UnityEngine_UI_Text_o *)0x439aca5;
    pSVar8 = System_Int32__ToString((int)pUVar11 + 0xb0,(MethodInfo *)0x0);
    pUStack_30 = (UnityEngine_UI_Text_o *)0x439acbc;
    a = "/";
    pSVar8 = System_String__Concat_3af7150
                       ((System_String_o *)str0,(System_String_o *)"/",pSVar8,(MethodInfo *)0x0);
    __this_01 = str0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      pUStack_30 = (UnityEngine_UI_Text_o *)0x439acd7;
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pSVar8,(pUVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
  pUStack_30 = (UnityEngine_UI_Text_o *)0x439ace6;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  puVar10 = &uStack_40;
  pUStack_38 = (UI_GalleryMenu_o *)__this;
  pUStack_30 = pUVar2;
  if (g_data_057ae2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f3 = '\x01';
  }
  bVar6 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  method_02 = "Previous";
  bVar6 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    method_02 = "Next";
    pUVar11 = a;
    bVar6 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0)
    ;
    if ((char)bVar6 == '\0') {
      return;
    }
    pUVar3 = (__this_01->fields).m_OnDirtyVertsCallback;
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      iVar7 = *(int *)&(__this_01->fields).m_CachedMesh;
      if ((int)pUVar3[1].fields.delegate_trampoline + -1 <= iVar7) {
        return;
      }
      iVar7 = iVar7 + 1;
      goto label_0439adbc;
    }
  }
  else {
    iVar7 = *(int *)&(__this_01->fields).m_CachedMesh;
    if (iVar7 < 1) {
      return;
    }
    iVar7 = iVar7 + -1;
label_0439adbc:
    *(int *)&(__this_01->fields).m_CachedMesh = iVar7;
    UI_GalleryMainPanel__UpdateIndexLabel((UI_GalleryMainPanel_o *)__this_01,method_02);
    pUVar11 = (UI_GalleryMenu_o *)(__this_01->fields).m_OnDirtyVertsCallback;
    if (pUVar11 != (UI_GalleryMenu_o *)0x0) {
      iVar7 = *(int *)&(__this_01->fields).m_CachedMesh;
      puVar10 = (undefined8 *)auStack_28;
      a = pUStack_38;
      __this_01 = pUStack_30;
      goto UI_GalleryMenu__LoadGallery;
    }
  }
  iVar7 = (int)method_02;
  il2cpp_runtime_helper_022b2c90();
UI_GalleryMenu__LoadGallery:
  *(undefined8 *)((long)puVar10 + -8) = unaff_RBP;
  *(UnityEngine_UI_Text_o **)((long)puVar10 + -0x10) = __this_01;
  *(UI_GalleryMenu_o **)((long)puVar10 + -0x18) = a;
  *(int *)((long)puVar10 + -0x1c) = iVar7;
  if (g_data_057ae2f9 == '\0') {
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae54;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae6c;
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae78;
    il2cpp_runtime_helper_023445d0(&"IconFull");
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae84;
    il2cpp_runtime_helper_023445d0(&"Texture");
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439ae90;
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar1 = (pUVar11->fields)._backgroundCount;
  }
  else {
    iVar1 = (pUVar11->fields)._backgroundCount;
  }
  bVar5 = iVar1 <= iVar7;
  if (bVar5) {
    iVar7 = iVar7 - iVar1;
    *(int *)((long)puVar10 + -0x1c) = iVar7;
    __this_02 = (UI_HeadedPanel_o *)(pUVar11->fields)._picture;
  }
  else {
    __this_02 = (UI_HeadedPanel_o *)(pUVar11->fields)._picture;
  }
  if (__this_02 != (UI_HeadedPanel_o *)0x0) {
    *(undefined8 *)((long)puVar10 + -0x30) = 0x439aecb;
    pIVar9 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
    if (bVar5) {
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar4 = pIVar9->klass->vtable[0x17].methodPtr;
        *(undefined8 *)((long)puVar10 + -0x30) = 0x439af62;
        (*pIVar4)(0x3f400000,0x3f400000,pIVar9);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)puVar10 + -0x30) = 0x439af7a;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_02 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)((long)puVar10 + -0x30) = 0x439af9e;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_00,iVar7,MethodInfo_String_get_Item);
          *(undefined8 *)((long)puVar10 + -0x30) = 0x439afbc;
          pSVar8 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar8,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(pUVar11,pSVar8,method_01);
          return;
        }
      }
    }
    else if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar4 = pIVar9->klass->vtable[0x17].methodPtr;
      *(undefined8 *)((long)puVar10 + -0x30) = 0x439aef9;
      (*pIVar4)(0x3f400000,0x3f400000,pIVar9);
      *(undefined8 *)((long)puVar10 + -0x30) = 0x439af05;
      pSVar8 = System_Int32__ToString((int32_t)(undefined1 *)((long)puVar10 + -0x1c),(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar10 + -0x30) = 0x439af23;
      pSVar8 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar8,"Texture",(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar10 + -0x30) = 0x439af2e;
      UI_GalleryMenu__SetBackground(pUVar11,pSVar8,method_00);
      return;
    }
  }
  *(undefined8 *)((long)puVar10 + -0x30) = 0x439afd4;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$.ctor
// il2cpp: void UI_GalleryMainPanel___ctor (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439afe0

void UI_GalleryMainPanel___ctor(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_0
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_0 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439aff0

void UI_GalleryMainPanel___Setup_b__19_0(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_GalleryMenu_o *pUVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar4;
  bool_conflict bVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_GalleryMenu_o *a;
  UI_GalleryMenu_o *unaff_RBX;
  UI_GalleryMenu_o ***pppUVar9;
  undefined8 unaff_RBP;
  UI_GalleryMenu_o *method_02;
  UI_GalleryMenu_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  UI_GalleryMainPanel_o *unaff_R14;
  UI_GalleryMenu_o **ppUStack_18;
  UI_GalleryMenu_o *pUStack_10;
  
  if (g_data_057ae2f5 == '\0') {
    pUStack_10 = (UI_GalleryMenu_o *)0x439b009;
    il2cpp_runtime_helper_023445d0(&"Previous");
    g_data_057ae2f5 = '\x01';
  }
  a = "Previous";
  pppUVar9 = &ppUStack_18;
  ppUStack_18 = &"Previous";
  pUStack_10 = unaff_RBX;
  if (g_data_057ae2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f3 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  method_02 = "Previous";
  bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    method_02 = "Next";
    __this_01 = a;
    bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      if ((pUVar2->fields).TotalBackgroundCount + -1 <= iVar6) {
        return;
      }
      iVar6 = iVar6 + 1;
      goto label_0439adbc;
    }
  }
  else {
    iVar6 = (__this->fields)._index;
    if (iVar6 < 1) {
      return;
    }
    iVar6 = iVar6 + -1;
label_0439adbc:
    (__this->fields)._index = iVar6;
    UI_GalleryMainPanel__UpdateIndexLabel(__this,(MethodInfo *)method_02);
    __this_01 = (__this->fields)._menu;
    if (__this_01 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      a = pUStack_10;
      pppUVar9 = (UI_GalleryMenu_o ***)register0x00000020;
      __this = unaff_R14;
      goto UI_GalleryMenu__LoadGallery;
    }
  }
  iVar6 = (int)method_02;
  il2cpp_runtime_helper_022b2c90();
UI_GalleryMenu__LoadGallery:
  *(undefined8 *)((long)pppUVar9 + -8) = unaff_RBP;
  *(UI_GalleryMainPanel_o **)((long)pppUVar9 + -0x10) = __this;
  *(UI_GalleryMenu_o **)((long)pppUVar9 + -0x18) = a;
  *(int *)((long)pppUVar9 + -0x1c) = iVar6;
  if (g_data_057ae2f9 == '\0') {
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae54;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae6c;
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae78;
    il2cpp_runtime_helper_023445d0(&"IconFull");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae84;
    il2cpp_runtime_helper_023445d0(&"Texture");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae90;
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  else {
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  bVar4 = iVar1 <= iVar6;
  if (bVar4) {
    iVar6 = iVar6 - iVar1;
    *(int *)((long)pppUVar9 + -0x1c) = iVar6;
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  else {
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  if (__this_02 != (UI_HeadedPanel_o *)0x0) {
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439aecb;
    pIVar7 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
    if (bVar4) {
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
        *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af62;
        (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af7a;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_02 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af9e;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_00,iVar6,MethodInfo_String_get_Item);
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439afbc;
          pSVar8 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar8,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_01);
          return;
        }
      }
    }
    else if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439aef9;
      (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af05;
      pSVar8 = System_Int32__ToString((int32_t)(undefined1 *)((long)pppUVar9 + -0x1c),(MethodInfo *)0x0);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af23;
      pSVar8 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar8,"Texture",(MethodInfo *)0x0);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af2e;
      UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_00);
      return;
    }
  }
  *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439afd4;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_1
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_1 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439b030

void UI_GalleryMainPanel___Setup_b__19_1(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_GalleryMenu_o *pUVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar4;
  bool_conflict bVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_GalleryMenu_o *a;
  UI_GalleryMenu_o *unaff_RBX;
  UI_GalleryMenu_o ***pppUVar9;
  undefined8 unaff_RBP;
  UI_GalleryMenu_o *method_02;
  UI_GalleryMenu_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  UI_GalleryMainPanel_o *unaff_R14;
  UI_GalleryMenu_o **ppUStack_18;
  UI_GalleryMenu_o *pUStack_10;
  
  if (g_data_057ae2f6 == '\0') {
    pUStack_10 = (UI_GalleryMenu_o *)0x439b049;
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f6 = '\x01';
  }
  a = "Next";
  pppUVar9 = &ppUStack_18;
  ppUStack_18 = &"Next";
  pUStack_10 = unaff_RBX;
  if (g_data_057ae2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f3 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  method_02 = "Previous";
  bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    method_02 = "Next";
    __this_01 = a;
    bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      if ((pUVar2->fields).TotalBackgroundCount + -1 <= iVar6) {
        return;
      }
      iVar6 = iVar6 + 1;
      goto label_0439adbc;
    }
  }
  else {
    iVar6 = (__this->fields)._index;
    if (iVar6 < 1) {
      return;
    }
    iVar6 = iVar6 + -1;
label_0439adbc:
    (__this->fields)._index = iVar6;
    UI_GalleryMainPanel__UpdateIndexLabel(__this,(MethodInfo *)method_02);
    __this_01 = (__this->fields)._menu;
    if (__this_01 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      a = pUStack_10;
      pppUVar9 = (UI_GalleryMenu_o ***)register0x00000020;
      __this = unaff_R14;
      goto UI_GalleryMenu__LoadGallery;
    }
  }
  iVar6 = (int)method_02;
  il2cpp_runtime_helper_022b2c90();
UI_GalleryMenu__LoadGallery:
  *(undefined8 *)((long)pppUVar9 + -8) = unaff_RBP;
  *(UI_GalleryMainPanel_o **)((long)pppUVar9 + -0x10) = __this;
  *(UI_GalleryMenu_o **)((long)pppUVar9 + -0x18) = a;
  *(int *)((long)pppUVar9 + -0x1c) = iVar6;
  if (g_data_057ae2f9 == '\0') {
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae54;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae6c;
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae78;
    il2cpp_runtime_helper_023445d0(&"IconFull");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae84;
    il2cpp_runtime_helper_023445d0(&"Texture");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae90;
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  else {
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  bVar4 = iVar1 <= iVar6;
  if (bVar4) {
    iVar6 = iVar6 - iVar1;
    *(int *)((long)pppUVar9 + -0x1c) = iVar6;
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  else {
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  if (__this_02 != (UI_HeadedPanel_o *)0x0) {
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439aecb;
    pIVar7 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
    if (bVar4) {
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
        *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af62;
        (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af7a;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_02 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af9e;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_00,iVar6,MethodInfo_String_get_Item);
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439afbc;
          pSVar8 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar8,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_01);
          return;
        }
      }
    }
    else if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439aef9;
      (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af05;
      pSVar8 = System_Int32__ToString((int32_t)(undefined1 *)((long)pppUVar9 + -0x1c),(MethodInfo *)0x0);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af23;
      pSVar8 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar8,"Texture",(MethodInfo *)0x0);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af2e;
      UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_00);
      return;
    }
  }
  *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439afd4;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_2
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_2 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x439b070

void UI_GalleryMainPanel___Setup_b__19_2(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_GalleryMenu_o *pUVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar4;
  bool_conflict bVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_GalleryMenu_o *a;
  UI_GalleryMenu_o *unaff_RBX;
  UI_GalleryMenu_o ***pppUVar9;
  undefined8 unaff_RBP;
  MethodInfo *method_02;
  UI_GalleryMenu_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  UI_GalleryMainPanel_o *unaff_R14;
  UI_GalleryMenu_o **ppUStack_18;
  UI_GalleryMenu_o *pUStack_10;
  
  if (g_data_057ae2f7 == '\0') {
    pUStack_10 = (UI_GalleryMenu_o *)0x439b089;
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae2f7 = '\x01';
  }
  a = "Back";
  pppUVar9 = &ppUStack_18;
  ppUStack_18 = &"Back";
  pUStack_10 = unaff_RBX;
  if (g_data_057ae2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Previous");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Next");
    g_data_057ae2f3 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Back",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  method_02 = "Previous";
  bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    method_02 = "Next";
    __this_01 = a;
    bVar5 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Next",(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      if ((pUVar2->fields).TotalBackgroundCount + -1 <= iVar6) {
        return;
      }
      iVar6 = iVar6 + 1;
      goto label_0439adbc;
    }
  }
  else {
    iVar6 = (__this->fields)._index;
    if (iVar6 < 1) {
      return;
    }
    iVar6 = iVar6 + -1;
label_0439adbc:
    (__this->fields)._index = iVar6;
    UI_GalleryMainPanel__UpdateIndexLabel(__this,method_02);
    __this_01 = (__this->fields)._menu;
    if (__this_01 != (UI_GalleryMenu_o *)0x0) {
      iVar6 = (__this->fields)._index;
      a = pUStack_10;
      pppUVar9 = (UI_GalleryMenu_o ***)register0x00000020;
      __this = unaff_R14;
      goto UI_GalleryMenu__LoadGallery;
    }
  }
  iVar6 = (int)method_02;
  il2cpp_runtime_helper_022b2c90();
UI_GalleryMenu__LoadGallery:
  *(undefined8 *)((long)pppUVar9 + -8) = unaff_RBP;
  *(UI_GalleryMainPanel_o **)((long)pppUVar9 + -0x10) = __this;
  *(UI_GalleryMenu_o **)((long)pppUVar9 + -0x18) = a;
  *(int *)((long)pppUVar9 + -0x1c) = iVar6;
  if (g_data_057ae2f9 == '\0') {
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae54;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae6c;
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae78;
    il2cpp_runtime_helper_023445d0(&"IconFull");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae84;
    il2cpp_runtime_helper_023445d0(&"Texture");
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439ae90;
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  else {
    iVar1 = (__this_01->fields)._backgroundCount;
  }
  bVar4 = iVar1 <= iVar6;
  if (bVar4) {
    iVar6 = iVar6 - iVar1;
    *(int *)((long)pppUVar9 + -0x1c) = iVar6;
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  else {
    __this_02 = (UI_HeadedPanel_o *)(__this_01->fields)._picture;
  }
  if (__this_02 != (UI_HeadedPanel_o *)0x0) {
    *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439aecb;
    pIVar7 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
    if (bVar4) {
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
        *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af62;
        (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af7a;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_02 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af9e;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_00,iVar6,MethodInfo_String_get_Item);
          *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439afbc;
          pSVar8 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar8,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_01);
          return;
        }
      }
    }
    else if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar7->klass->vtable[0x17].methodPtr;
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439aef9;
      (*pIVar3)(0x3f400000,0x3f400000,pIVar7);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af05;
      pSVar8 = System_Int32__ToString((int32_t)(undefined1 *)((long)pppUVar9 + -0x1c),(MethodInfo *)0x0);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af23;
      pSVar8 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar8,"Texture",(MethodInfo *)0x0);
      *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439af2e;
      UI_GalleryMenu__SetBackground(__this_01,pSVar8,method_00);
      return;
    }
  }
  *(undefined8 *)((long)pppUVar9 + -0x30) = 0x439afd4;
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


