// Type: UI.SnapshotViewerMainPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SnapshotViewerMainPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMainPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SnapshotViewerMainPanel$$get_Title
// il2cpp: System_String_o* UI_SnapshotViewerMainPanel__get_Title (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c230

System_String_o *
UI_SnapshotViewerMainPanel__get_Title(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_0570496b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"SnapshotViewerButton");
    il2cpp_init_method_metadata(&"ToolsPopup");
    il2cpp_init_method_metadata(&"");
    DAT_0570496b = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","SnapshotViewerButton","","",in_R9);
  return pSVar1;
}


// UI.SnapshotViewerMainPanel$$get_Width
// il2cpp: float UI_SnapshotViewerMainPanel__get_Width (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c2d0

float UI_SnapshotViewerMainPanel__get_Width(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.SnapshotViewerMainPanel$$get_Height
// il2cpp: float UI_SnapshotViewerMainPanel__get_Height (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c2e0

float UI_SnapshotViewerMainPanel__get_Height
                (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 270.0;
}


// UI.SnapshotViewerMainPanel$$get_VerticalSpacing
// il2cpp: float UI_SnapshotViewerMainPanel__get_VerticalSpacing (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c2f0

float UI_SnapshotViewerMainPanel__get_VerticalSpacing
                (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.SnapshotViewerMainPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_SnapshotViewerMainPanel__get_HorizontalPadding (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c300

int32_t UI_SnapshotViewerMainPanel__get_HorizontalPadding
                  (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.SnapshotViewerMainPanel$$get_VerticalPadding
// il2cpp: int32_t UI_SnapshotViewerMainPanel__get_VerticalPadding (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c310

int32_t UI_SnapshotViewerMainPanel__get_VerticalPadding
                  (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.SnapshotViewerMainPanel$$Setup
// il2cpp: void UI_SnapshotViewerMainPanel__Setup (UI_SnapshotViewerMainPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x413c320

void UI_SnapshotViewerMainPanel__Setup
               (UI_SnapshotViewerMainPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_SnapshotViewerMenu_o *pUVar2;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Text_o *method_00;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *in_R9;
  MethodInfo *method_01;
  
  if (DAT_0570496c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_3);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotViewerMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Previous");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Next");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_0570496c = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar2 = *(UI_SnapshotViewerMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_SnapshotViewerMenu;
  }
  else {
    pUVar2 = *(UI_SnapshotViewerMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_SnapshotViewerMenu;
  }
  TypeInfo_SnapshotViewerMenu = pIVar3;
  if (pUVar2 == (UI_SnapshotViewerMenu_o *)0x0) {
    (__this->fields)._menu = (UI_SnapshotViewerMenu_o *)0x0;
LAB_0413c4ae:
    il2cpp_runtime_glue(&(__this->fields)._menu);
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar4,(MethodInfo *)0x0);
    pSVar4 = "Back";
    pUVar7 = (__this->fields).BottomBar;
    if (DAT_05704983 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_UIManager);
      il2cpp_init_method_metadata(&"Common");
      il2cpp_init_method_metadata(&"");
      DAT_05704983 = '\x01';
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = UI_UIManager__GetLocale
                       ("Common",pSVar4,"","","",in_R9);
    pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar7,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x0;
    pUVar6 = UI_ElementFactory__CreateDefaultLabel
                       ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (UnityEngine_UI_Text_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._indexLabel = method_00;
      il2cpp_runtime_glue(&(__this->fields)._indexLabel);
      UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,(MethodInfo *)method_00);
      pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                         ((__this->fields).SinglePanel,10.0,4,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        pSVar4 = "Previous";
        if (DAT_05704983 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_UIManager);
          il2cpp_init_method_metadata(&"Common");
          il2cpp_init_method_metadata(&"");
          DAT_05704983 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = UI_UIManager__GetLocale
                           ("Common",pSVar4,"","","",method_01);
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar7,__this_00,pSVar4,0.0,0.0,pUVar5,(MethodInfo *)0x0);
        pSVar4 = "Next";
        if (DAT_05704983 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_UIManager);
          il2cpp_init_method_metadata(&"Common");
          il2cpp_init_method_metadata(&"");
          DAT_05704983 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = UI_UIManager__GetLocale
                           ("Common",pSVar4,"","","",method_01);
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar7,__this_00,pSVar4,0.0,0.0,pUVar5,(MethodInfo *)0x0);
        pSVar4 = "Save";
        if (DAT_05704983 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_UIManager);
          il2cpp_init_method_metadata(&"Common");
          il2cpp_init_method_metadata(&"");
          DAT_05704983 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = UI_UIManager__GetLocale
                           ("Common",pSVar4,"","","",method_01);
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar7,__this_00,pSVar4,0.0,0.0,pUVar5,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (pIVar3->_2).naturalAligment;
  if ((bVar1 <= (pUVar2->klass->_2).naturalAligment) &&
     ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
    (__this->fields)._menu = pUVar2;
    if ((bVar1 <= (pUVar2->klass->_2).naturalAligment) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) goto LAB_0413c4ae;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar2,pIVar3);
}


// UI.SnapshotViewerMainPanel$$OnButtonClick
// il2cpp: void UI_SnapshotViewerMainPanel__OnButtonClick (UI_SnapshotViewerMainPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x413ca90

void UI_SnapshotViewerMainPanel__OnButtonClick
               (UI_SnapshotViewerMainPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  Il2CppClass *__this_00;
  UI_SnapshotViewerMenu_o *__this_01;
  bool_conflict bVar4;
  Il2CppObject *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_0570496d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&"Previous");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Next");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570496d = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  bVar4 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    __this_00 = (Il2CppClass *)(__this->fields)._menu;
    if (__this_00 != (Il2CppClass *)0x0) {
      if (DAT_05704974 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_SaveCoroutine_d__10);
        DAT_05704974 = '\x01';
      }
      __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SaveCoroutine_d__10);
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = 0;
      if (__this_02 != (Il2CppObject *)0x0) {
        __this_02[2].klass = __this_00;
        il2cpp_runtime_glue(__this_02 + 2,__this_00);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this_00,
                   (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_0413cc95;
  }
  method_01 = "Previous";
  bVar4 = System_String__op_Equality(name,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    method_01 = "Next";
    bVar4 = System_String__op_Equality(name,(System_String_o *)"Next",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    iVar2 = (__this->fields)._index;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704992 == '\0') goto LAB_0413cc6c;
LAB_0413cc10:
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (DAT_05704992 != '\0') goto LAB_0413cc10;
LAB_0413cc6c:
      il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
      DAT_05704992 = '\x01';
      iVar3 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    if (*(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28) + -1 <= iVar2) {
      return;
    }
    piVar1 = &(__this->fields)._index;
    *piVar1 = *piVar1 + 1;
  }
  else {
    iVar2 = (__this->fields)._index;
    if (iVar2 < 1) {
      return;
    }
    (__this->fields)._index = iVar2 + -1;
  }
  UI_SnapshotViewerMainPanel__UpdateIndexLabel(__this,method_01);
  __this_01 = (__this->fields)._menu;
  if (__this_01 != (UI_SnapshotViewerMenu_o *)0x0) {
    UI_SnapshotViewerMenu__LoadSnapshot(__this_01,(__this->fields)._index,method_00);
    return;
  }
LAB_0413cc95:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMainPanel$$UpdateIndexLabel
// il2cpp: void UI_SnapshotViewerMainPanel__UpdateIndexLabel (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413c890

void UI_SnapshotViewerMainPanel__UpdateIndexLabel
               (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  int local_1c;
  
  if (DAT_0570496e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"0/0");
    DAT_0570496e = '\x01';
  }
  local_1c = 0;
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704992 == '\0') goto LAB_0413c9d2;
LAB_0413c8fc:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto LAB_0413c90c;
LAB_0413c9f5:
    il2cpp_init_class();
    iVar1 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
    pUVar2 = (__this->fields)._indexLabel;
  }
  else {
    if (DAT_05704992 != '\0') goto LAB_0413c8fc;
LAB_0413c9d2:
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704992 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto LAB_0413c9f5;
LAB_0413c90c:
    iVar1 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
    pUVar2 = (__this->fields)._indexLabel;
  }
  if (iVar1 == 0) {
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,"0/0",(pUVar2->klass->vtable)._75_set_text.method);
      return;
    }
    goto LAB_0413ca83;
  }
  local_1c = (__this->fields)._index + 1;
  pSVar3 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704992 == '\0') goto LAB_0413ca53;
LAB_0413c95e:
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    if (DAT_05704992 != '\0') goto LAB_0413c95e;
LAB_0413ca53:
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704992 = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  local_1c = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  str2 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,"/",str2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
    return;
  }
LAB_0413ca83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMainPanel$$.ctor
// il2cpp: void UI_SnapshotViewerMainPanel___ctor (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413d150

void UI_SnapshotViewerMainPanel___ctor(UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_0
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_0 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413d160

void UI_SnapshotViewerMainPanel__<Setup>b__15_0
               (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570496f == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570496f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_1
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_1 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413d1a0

void UI_SnapshotViewerMainPanel__<Setup>b__15_1
               (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704970 == '\0') {
    il2cpp_init_method_metadata(&"Previous");
    DAT_05704970 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Previous",in_RDX);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_2
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_2 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413d1e0

void UI_SnapshotViewerMainPanel__<Setup>b__15_2
               (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704971 == '\0') {
    il2cpp_init_method_metadata(&"Next");
    DAT_05704971 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Next",in_RDX);
  return;
}


// UI.SnapshotViewerMainPanel$$<Setup>b__15_3
// il2cpp: void UI_SnapshotViewerMainPanel___Setup_b__15_3 (UI_SnapshotViewerMainPanel_o* __this, const MethodInfo* method);
// 0x413d220

void UI_SnapshotViewerMainPanel__<Setup>b__15_3
               (UI_SnapshotViewerMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704972 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_05704972 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SnapshotViewerMainPanel__OnButtonClick(__this,"Save",in_RDX);
  return;
}


