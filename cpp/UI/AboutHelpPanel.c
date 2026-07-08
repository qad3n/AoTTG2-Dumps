// Type: UI.AboutHelpPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/AboutHelpPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/AboutHelpPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.AboutHelpPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void UI_AboutHelpPanel___c__DisplayClass3_0___ctor (UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x40ddf50

void UI_AboutHelpPanel_<>c__DisplayClass3_0___ctor
               (UI_AboutHelpPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutHelpPanel.<>c__DisplayClass3_0$$<CreateLink>b__0
// il2cpp: void UI_AboutHelpPanel___c__DisplayClass3_0___CreateLink_b__0 (UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x40ddf70

void UI_AboutHelpPanel_<>c__DisplayClass3_0__<CreateLink>b__0
               (UI_AboutHelpPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570478c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570478c = '\x01';
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


// UI.AboutHelpPanel$$get_VerticalSpacing
// il2cpp: float UI_AboutHelpPanel__get_VerticalSpacing (UI_AboutHelpPanel_o* __this, const MethodInfo* method);
// 0x40ddb20

float UI_AboutHelpPanel__get_VerticalSpacing(UI_AboutHelpPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.AboutHelpPanel$$Setup
// il2cpp: void UI_AboutHelpPanel__Setup (UI_AboutHelpPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ddb30

void UI_AboutHelpPanel__Setup(UI_AboutHelpPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_03;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  System_String_o *link;
  MethodInfo *in_R8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar6;
  Il2CppMethodPointer pIVar7;
  InvokerMethod pIVar8;
  char *pcVar9;
  Il2CppClass *pIVar10;
  Il2CppType *pIVar11;
  Il2CppType **ppIVar12;
  _union_13 _Var13;
  _union_14 _Var14;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (DAT_0570478a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MiscInfo);
    il2cpp_init_method_metadata(&"Error loading data.");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"Link");
    DAT_0570478a = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x18,100.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar4 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,__this_03,"Error loading data.",0,4,(MethodInfo *)0x0);
  }
  else {
    plVar5 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
    if (plVar5 == (long *)0x0) {
LAB_040ddde4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (**(code **)(*plVar5 + 0x338))(&pIStack_78,plVar5,*(undefined8 *)(*plVar5 + 0x340));
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
    pIVar6 = pIStack_78;
    pIVar7 = pIStack_70;
    pIVar8 = pIStack_68;
    pcVar9 = pcStack_60;
    pIVar10 = pIStack_58;
    pIVar11 = pIStack_50;
    ppIVar12 = ppIStack_48;
    _Var13 = _Stack_40;
    _Var14 = _Stack_38;
    while (cVar1 != '\0') {
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar7;
      __this_01.fields._0_8_ = pIVar6;
      __this_01.fields.m_Object.fields._8_8_ = pIVar8;
      __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar9;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar10;
      __this_01.fields.m_Object.fields._32_8_ = pIVar11;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar12;
      __this_01.fields.m_Array.fields._8_8_ = _Var13.rgctx_data;
      __this_01.fields.m_Array.fields._current = _Var14.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      if ((pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar4,"Title",(pSVar4->klass->vtable)._7_get_Item.method
                                     ), plVar5 == (long *)0x0)) goto LAB_040ddde4;
      pSVar3 = (System_String_o *)
               (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"Link",(pSVar4->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_040ddde4;
      link = (System_String_o *)
             (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      UI_AboutHelpPanel__CreateLink(__this,__this_03,pSVar3,link,in_R8);
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar7;
      __this_02.fields._0_8_ = pIVar6;
      __this_02.fields.m_Object.fields._8_8_ = pIVar8;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar9;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar10;
      __this_02.fields.m_Object.fields._32_8_ = pIVar11;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar12;
      __this_02.fields.m_Array.fields._8_8_ = _Var13.rgctx_data;
      __this_02.fields.m_Array.fields._current = _Var14.genericMethod;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
      cVar1 = (char)bVar2;
    }
  }
  return;
}


// UI.AboutHelpPanel$$CreateLink
// il2cpp: void UI_AboutHelpPanel__CreateLink (UI_AboutHelpPanel_o* __this, UI_ElementStyle_o* style, System_String_o* title, System_String_o* link, const MethodInfo* method);
// 0x40dddf0

void UI_AboutHelpPanel__CreateLink
               (UI_AboutHelpPanel_o *__this,UI_ElementStyle_o *style,System_String_o *title,
               System_String_o *link,MethodInfo *method)

{
  Il2CppClass *title_00;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_String_o *title_01;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_0570478b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateLink_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&":");
    DAT_0570478b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)link;
    il2cpp_runtime_glue(__this_00 + 1);
    __this_01 = UI_ElementFactory__CreateHorizontalGroup
                          ((__this->fields).SinglePanel,5.0,0,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
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


// UI.AboutHelpPanel$$.ctor
// il2cpp: void UI_AboutHelpPanel___ctor (UI_AboutHelpPanel_o* __this, const MethodInfo* method);
// 0x40ddf60

void UI_AboutHelpPanel___ctor(UI_AboutHelpPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


