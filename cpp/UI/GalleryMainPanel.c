// Type: UI.GalleryMainPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/GalleryMainPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/GalleryMenu/GalleryMainPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.GalleryMainPanel$$get_Title
// il2cpp: System_String_o* UI_GalleryMainPanel__get_Title (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c850

System_String_o * UI_GalleryMainPanel__get_Title(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704576 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"GalleryButton");
    il2cpp_init_method_metadata(&"ToolsPopup");
    il2cpp_init_method_metadata(&"");
    DAT_05704576 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","GalleryButton","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.GalleryMainPanel$$get_Width
// il2cpp: float UI_GalleryMainPanel__get_Width (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c8f0

float UI_GalleryMainPanel__get_Width(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 1960.0;
}


// UI.GalleryMainPanel$$get_Height
// il2cpp: float UI_GalleryMainPanel__get_Height (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c900

float UI_GalleryMainPanel__get_Height(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.GalleryMainPanel$$get_TopBarHeight
// il2cpp: float UI_GalleryMainPanel__get_TopBarHeight (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c910

float UI_GalleryMainPanel__get_TopBarHeight(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_BottomBarHeight
// il2cpp: float UI_GalleryMainPanel__get_BottomBarHeight (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c920

float UI_GalleryMainPanel__get_BottomBarHeight(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_VerticalSpacing
// il2cpp: float UI_GalleryMainPanel__get_VerticalSpacing (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c930

float UI_GalleryMainPanel__get_VerticalSpacing(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.GalleryMainPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_GalleryMainPanel__get_HorizontalPadding (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c940

int32_t UI_GalleryMainPanel__get_HorizontalPadding(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.GalleryMainPanel$$get_VerticalPadding
// il2cpp: int32_t UI_GalleryMainPanel__get_VerticalPadding (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408c950

int32_t UI_GalleryMainPanel__get_VerticalPadding(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.GalleryMainPanel$$Setup
// il2cpp: void UI_GalleryMainPanel__Setup (UI_GalleryMainPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x408c960

void UI_GalleryMainPanel__Setup
               (UI_GalleryMainPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_GalleryMenu_o *pUVar2;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_Text_o *method_00;
  UnityEngine_Events_UnityAction_o *pUVar6;
  
  if (DAT_05704577 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_2);
    il2cpp_init_method_metadata(&TypeInfo_GalleryMenu);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Previous");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Next");
    il2cpp_init_method_metadata(&"");
    DAT_05704577 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar2 = *(UI_GalleryMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_GalleryMenu;
  }
  else {
    pUVar2 = *(UI_GalleryMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_GalleryMenu;
  }
  TypeInfo_GalleryMenu = pIVar3;
  if (pUVar2 == (UI_GalleryMenu_o *)0x0) {
    (__this->fields)._menu = (UI_GalleryMenu_o *)0x0;
LAB_0408cad6:
    il2cpp_runtime_glue(&(__this->fields)._menu);
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar4,(MethodInfo *)0x0);
    pUVar5 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      parent_00 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      pUVar5 = UI_ElementFactory__CreateDefaultLabel
                         (parent_00,__this_00,"",0,4,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        method_00 = (UnityEngine_UI_Text_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._indexLabel = method_00;
        il2cpp_runtime_glue(&(__this->fields)._indexLabel);
        UI_GalleryMainPanel__UpdateIndexLabel(__this,(MethodInfo *)method_00);
        pSVar4 = UI_UIManager__GetLocaleCommon("Previous",(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (parent_00,__this_00,pSVar4,0.0,0.0,pUVar6,(MethodInfo *)0x0);
        pSVar4 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (parent_00,__this_00,pSVar4,0.0,0.0,pUVar6,(MethodInfo *)0x0);
        pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (parent_00,__this_00,pSVar4,0.0,0.0,pUVar6,(MethodInfo *)0x0);
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
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) goto LAB_0408cad6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar2,pIVar3);
}


// UI.GalleryMainPanel$$OnButtonClick
// il2cpp: void UI_GalleryMainPanel__OnButtonClick (UI_GalleryMainPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x408cd80

void UI_GalleryMainPanel__OnButtonClick
               (UI_GalleryMainPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t iVar1;
  UI_GalleryMenu_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  bool bVar3;
  bool_conflict bVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 uStack_20;
  
  if (DAT_05704578 == '\0') {
    uStack_20 = (undefined *)0x408cd9f;
    il2cpp_init_method_metadata(&"Previous");
    uStack_20 = (undefined *)0x408cdab;
    il2cpp_init_method_metadata(&"Back");
    uStack_20 = (undefined *)0x408cdb7;
    il2cpp_init_method_metadata(&"Next");
    DAT_05704578 = '\x01';
  }
  uStack_20 = (undefined *)0x408cdd2;
  bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = (undefined *)0x408cdfd;
  method_02 = "Previous";
  bVar4 = System_String__op_Equality(name,(System_String_o *)"Previous",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_20 = (undefined *)0x408ce25;
    method_02 = "Next";
    bVar4 = System_String__op_Equality(name,(System_String_o *)"Next",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 == (UI_GalleryMenu_o *)0x0) goto LAB_0408ce7f;
    iVar5 = (__this->fields)._index;
    if ((pUVar2->fields).TotalBackgroundCount + -1 <= iVar5) {
      return;
    }
    iVar5 = iVar5 + 1;
  }
  else {
    iVar5 = (__this->fields)._index;
    if (iVar5 < 1) {
      return;
    }
    iVar5 = iVar5 + -1;
  }
  (__this->fields)._index = iVar5;
  uStack_20 = (undefined *)0x408ce5b;
  UI_GalleryMainPanel__UpdateIndexLabel(__this,method_02);
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
    iVar5 = (__this->fields)._index;
    uStack_20 = (undefined *)CONCAT44(iVar5,(undefined4)uStack_20);
    if (DAT_0570457e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
      il2cpp_init_method_metadata(&TypeInfo_UIManager);
      il2cpp_init_method_metadata(&"Icons/Profile/FullSize/");
      il2cpp_init_method_metadata(&"IconFull");
      il2cpp_init_method_metadata(&"Texture");
      il2cpp_init_method_metadata(&"Backgrounds/MainBackground");
      DAT_0570457e = '\x01';
      iVar1 = (pUVar2->fields)._backgroundCount;
    }
    else {
      iVar1 = (pUVar2->fields)._backgroundCount;
    }
    bVar3 = iVar1 <= iVar5;
    if (bVar3) {
      iVar5 = iVar5 - iVar1;
      uStack_20 = (undefined *)CONCAT44(iVar5,(undefined4)uStack_20);
      __this_00 = (pUVar2->fields)._picture;
    }
    else {
      __this_00 = (pUVar2->fields)._picture;
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pIVar6 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image);
      if (bVar3) {
        if (pIVar6 != (Il2CppObject *)0x0) {
          (*pIVar6->klass->vtable[0x17].methodPtr)
                    (0x3f400000,0x3f400000,pIVar6,pIVar6->klass->vtable[0x17].method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_01 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
          if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar7 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item(__this_01,iVar5,MethodInfo_String_get_Item)
            ;
            pSVar7 = System_String__Concat("Icons/Profile/FullSize/",pSVar7,"IconFull",(MethodInfo *)0x0);
            UI_GalleryMenu__SetBackground(pUVar2,pSVar7,method_01);
            return;
          }
        }
      }
      else if (pIVar6 != (Il2CppObject *)0x0) {
        (*pIVar6->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar6);
        pSVar7 = System_Int32__ToString((int)&uStack_20 + 4,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat("Backgrounds/MainBackground",pSVar7,"Texture",(MethodInfo *)0x0);
        UI_GalleryMenu__SetBackground(pUVar2,pSVar7,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0408ce7f:
                    /* WARNING: Subroutine does not return */
  uStack_20 = &UNK_0408ce84;
  il2cpp_raise_exception();
}


// UI.GalleryMainPanel$$UpdateIndexLabel
// il2cpp: void UI_GalleryMainPanel__UpdateIndexLabel (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408ccd0

void UI_GalleryMainPanel__UpdateIndexLabel(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UI_GalleryMenu_o *pUVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  int local_1c;
  
  if (DAT_05704579 == '\0') {
    il2cpp_init_method_metadata(&"/");
    DAT_05704579 = '\x01';
  }
  pUVar1 = (__this->fields)._indexLabel;
  local_1c = (__this->fields)._index + 1;
  pSVar3 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_GalleryMenu_o *)0x0) {
    str2 = System_Int32__ToString((int)pUVar2 + 0xb0,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,"/",str2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GalleryMainPanel$$.ctor
// il2cpp: void UI_GalleryMainPanel___ctor (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408d070

void UI_GalleryMainPanel___ctor(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_0
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_0 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408d080

void UI_GalleryMainPanel__<Setup>b__19_0(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570457a == '\0') {
    il2cpp_init_method_metadata(&"Previous");
    DAT_0570457a = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GalleryMainPanel__OnButtonClick(__this,"Previous",in_RDX);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_1
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_1 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408d0c0

void UI_GalleryMainPanel__<Setup>b__19_1(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570457b == '\0') {
    il2cpp_init_method_metadata(&"Next");
    DAT_0570457b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GalleryMainPanel__OnButtonClick(__this,"Next",in_RDX);
  return;
}


// UI.GalleryMainPanel$$<Setup>b__19_2
// il2cpp: void UI_GalleryMainPanel___Setup_b__19_2 (UI_GalleryMainPanel_o* __this, const MethodInfo* method);
// 0x408d100

void UI_GalleryMainPanel__<Setup>b__19_2(UI_GalleryMainPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570457c == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570457c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GalleryMainPanel__OnButtonClick(__this,"Back",in_RDX);
  return;
}


