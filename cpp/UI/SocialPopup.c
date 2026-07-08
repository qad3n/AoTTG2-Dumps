// Type: UI.SocialPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SocialPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/SocialPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.SocialPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_SocialPopup___c__DisplayClass15_0___ctor (UI_SocialPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40ff250

void UI_SocialPopup_<>c__DisplayClass15_0___ctor
               (UI_SocialPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SocialPopup.<>c__DisplayClass15_0$$<CreateLink>b__0
// il2cpp: void UI_SocialPopup___c__DisplayClass15_0___CreateLink_b__0 (UI_SocialPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40ff360

void UI_SocialPopup_<>c__DisplayClass15_0__<CreateLink>b__0
               (UI_SocialPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704861 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704861 = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((lVar2 != 0) && (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40) != (UI_ExternalLinkPopup_o *)0x0))
  {
    UI_ExternalLinkPopup__Show
              (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(__this->fields).link,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SocialPopup$$get_Title
// il2cpp: System_String_o* UI_SocialPopup__get_Title (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40fec20

System_String_o * UI_SocialPopup__get_Title(UI_SocialPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570485c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Social");
    DAT_0570485c = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.SocialPopup$$get_Width
// il2cpp: float UI_SocialPopup__get_Width (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40fec80

float UI_SocialPopup__get_Width(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 750.0;
}


// UI.SocialPopup$$get_Height
// il2cpp: float UI_SocialPopup__get_Height (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40fec90

float UI_SocialPopup__get_Height(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 650.0;
}


// UI.SocialPopup$$get_DoublePanel
// il2cpp: bool UI_SocialPopup__get_DoublePanel (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40feca0

bool_conflict UI_SocialPopup__get_DoublePanel(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SocialPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SocialPopup__get_HorizontalPadding (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40fecb0

int32_t UI_SocialPopup__get_HorizontalPadding(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 0x23;
}


// UI.SocialPopup$$get_PanelAlignment
// il2cpp: int32_t UI_SocialPopup__get_PanelAlignment (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40fecc0

int32_t UI_SocialPopup__get_PanelAlignment(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 3;
}


// UI.SocialPopup$$get_UseSound
// il2cpp: bool UI_SocialPopup__get_UseSound (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40fecd0

bool_conflict UI_SocialPopup__get_UseSound(UI_SocialPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SocialPopup$$Setup
// il2cpp: void UI_SocialPopup__Setup (UI_SocialPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fece0

void UI_SocialPopup__Setup(UI_SocialPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar1;
  int32_t fontSize;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *link;
  System_String_o *about;
  MethodInfo *in_R9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar7;
  Il2CppMethodPointer pIVar8;
  InvokerMethod pIVar9;
  char *pcVar10;
  Il2CppClass *pIVar11;
  Il2CppType *pIVar12;
  Il2CppType **ppIVar13;
  _union_13 _Var14;
  _union_14 _Var15;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (DAT_0570485d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MiscInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Error loading data.");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"About");
    il2cpp_init_method_metadata(&"Link");
    DAT_0570485d = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,pUVar4,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_MiscInfo + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,pUVar4,"Error loading data.",0,4,(MethodInfo *)0x0);
  }
  else {
    plVar6 = (long *)**(long **)(TypeInfo_MiscInfo + 0xb8);
    if (plVar6 == (long *)0x0) {
LAB_040ff0d9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (**(code **)(*plVar6 + 0x338))(&pIStack_78,plVar6,*(undefined8 *)(*plVar6 + 0x340));
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_00.fields._0_8_ = pIStack_78;
    __this_00.fields.m_Object.fields._8_8_ = pIStack_68;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_00.fields.m_Array.fields._current = _Stack_38.genericMethod;
    bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    cVar1 = (char)bVar2;
    pIVar7 = pIStack_78;
    pIVar8 = pIStack_70;
    pIVar9 = pIStack_68;
    pcVar10 = pcStack_60;
    pIVar11 = pIStack_58;
    pIVar12 = pIStack_50;
    ppIVar13 = ppIStack_48;
    _Var14 = _Stack_40;
    _Var15 = _Stack_38;
    while (cVar1 != '\0') {
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar8;
      __this_01.fields._0_8_ = pIVar7;
      __this_01.fields.m_Object.fields._8_8_ = pIVar9;
      __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar10;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this_01.fields.m_Object.fields._32_8_ = pIVar12;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar13;
      __this_01.fields.m_Array.fields._8_8_ = _Var14.rgctx_data;
      __this_01.fields.m_Array.fields._current = _Var15.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar5,"Title",(pSVar5->klass->vtable)._7_get_Item.method
                                     ), plVar6 == (long *)0x0)) goto LAB_040ff0d9;
      pSVar3 = (System_String_o *)
               (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"Link",(pSVar5->klass->vtable)._7_get_Item.method);
      if (plVar6 == (long *)0x0) goto LAB_040ff0d9;
      link = (System_String_o *)
             (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"About",(pSVar5->klass->vtable)._7_get_Item.method);
      if (plVar6 == (long *)0x0) goto LAB_040ff0d9;
      about = (System_String_o *)
              (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      UI_SocialPopup__CreateLink(__this,pUVar4,pSVar3,link,about,in_R9);
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar8;
      __this_02.fields._0_8_ = pIVar7;
      __this_02.fields.m_Object.fields._8_8_ = pIVar9;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar10;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this_02.fields.m_Object.fields._32_8_ = pIVar12;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar13;
      __this_02.fields.m_Array.fields._8_8_ = _Var14.rgctx_data;
      __this_02.fields.m_Array.fields._current = _Var15.genericMethod;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
      cVar1 = (char)bVar2;
    }
  }
  return;
}


// UI.SocialPopup$$CreateLink
// il2cpp: void UI_SocialPopup__CreateLink (UI_SocialPopup_o* __this, UI_ElementStyle_o* style, System_String_o* title, System_String_o* link, System_String_o* about, const MethodInfo* method);
// 0x40ff0e0

void UI_SocialPopup__CreateLink
               (UI_SocialPopup_o *__this,UI_ElementStyle_o *style,System_String_o *title,
               System_String_o *link,System_String_o *about,MethodInfo *method)

{
  Il2CppClass *title_00;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_String_o *title_01;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_0570485e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateLink_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&":");
    DAT_0570485e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)link;
    il2cpp_runtime_glue(__this_00 + 1);
    __this_01 = UI_ElementFactory__CreateHorizontalGroup
                          ((__this->fields).SinglePanel,5.0,0,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTooltipIcon(parent,style,about,30.0,30.0,(MethodInfo *)0x0);
      title_01 = System_String__Concat(" ",title,":",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(parent,style,title_01,0,4,(MethodInfo *)0x0);
      title_00 = __this_00[1].klass;
      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateLinkButton
                (parent,style,(System_String_o *)title_00,onClick,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SocialPopup$$OnButtonClick
// il2cpp: void UI_SocialPopup__OnButtonClick (UI_SocialPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40ff260

void UI_SocialPopup__OnButtonClick
               (UI_SocialPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570485f == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570485f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.SocialPopup$$.ctor
// il2cpp: void UI_SocialPopup___ctor (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40ff2d0

void UI_SocialPopup___ctor(UI_SocialPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SocialPopup$$<Setup>b__14_0
// il2cpp: void UI_SocialPopup___Setup_b__14_0 (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x40ff2e0

void UI_SocialPopup__<Setup>b__14_0(UI_SocialPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (DAT_05704860 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704860 = '\x01';
  }
  a = "Back";
  if (DAT_0570485f == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570485f = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


