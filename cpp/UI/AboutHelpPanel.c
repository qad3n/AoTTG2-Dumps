// Type: UI.AboutHelpPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/AboutHelpPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutHelpPanel.cs
// --------------------------------

// UI.AboutHelpPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void UI_AboutHelpPanel___c__DisplayClass3_0___ctor (UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x43f0820

void UI_AboutHelpPanel___c__DisplayClass3_0___ctor
               (UI_AboutHelpPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutHelpPanel.<>c__DisplayClass3_0$$<CreateLink>b__0
// il2cpp: void UI_AboutHelpPanel___c__DisplayClass3_0___CreateLink_b__0 (UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x43f0840

void UI_AboutHelpPanel___c__DisplayClass3_0___CreateLink_b__0
               (UI_AboutHelpPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057ae51c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae51c = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((lVar2 != 0) && (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40) != (UI_ExternalLinkPopup_o *)0x0)) {
    UI_ExternalLinkPopup__Show
              (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(__this->fields).link,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.AboutHelpPanel$$get_VerticalSpacing
// il2cpp: float UI_AboutHelpPanel__get_VerticalSpacing (UI_AboutHelpPanel_o* __this, const MethodInfo* method);
// 0x43f03f0

float UI_AboutHelpPanel__get_VerticalSpacing(UI_AboutHelpPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.AboutHelpPanel$$Setup
// il2cpp: void UI_AboutHelpPanel__Setup (UI_AboutHelpPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43f0400

void UI_AboutHelpPanel__Setup(UI_AboutHelpPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_03;
  long *plVar4;
  System_String_o *pSVar5;
  System_String_o *link;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Events_UnityAction_o *onClick;
  System_String_o *str1;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  MethodInfo *in_R8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  Il2CppMethodPointer pIVar8;
  Il2CppMethodPointer pIVar9;
  InvokerMethod pIVar10;
  char *pcVar11;
  Il2CppClass *pIVar12;
  Il2CppType *pIVar13;
  Il2CppType **ppIVar14;
  _union_13 _Var15;
  _union_14 _Var16;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (g_data_057ae51a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&"Error loading data.");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"Link");
    g_data_057ae51a = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  link = (System_String_o *)0x0;
  UI_ElementStyle___ctor(__this_03,0x18,100.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,__this_03,"Error loading data.",0,4,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
    aKeyValue.value = pSVar7;
    aKeyValue.key = pSVar3;
    if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_043f06b4:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae51b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateLink_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&":");
        g_data_057ae51b = '\x01';
      }
      __this_04 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
      pUVar6 = __this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      if (__this_04 != (UnityEngine_Transform_o *)0x0) {
        (__this_04->fields).m_CachedPtr = (intptr_t)link;
        il2cpp_runtime_helper_022b4080(&__this_04->fields);
        pUVar6 = aKeyValue.key[1].monitor;
        __this_05 = UI_ElementFactory__CreateHorizontalGroup(pUVar6,5.0,0,(MethodInfo *)0x0);
        if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
          pSVar3 = System_String__Concat_3af7150(" ",str1,":",(MethodInfo *)0x0);
          UI_ElementFactory__CreateDefaultLabel
                    (pUVar6,(UI_ElementStyle_o *)aKeyValue.value,pSVar3,0,4,(MethodInfo *)0x0);
          pSVar3 = (System_String_o *)(__this_04->fields).m_CachedPtr;
          onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateLinkButton
                    (pUVar6,(UI_ElementStyle_o *)aKeyValue.value,pSVar3,onClick,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
      return;
    }
    (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
              (&pIStack_78,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
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
    bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    cVar1 = (char)bVar2;
    pIVar8 = pIStack_78;
    pIVar9 = pIStack_70;
    pIVar10 = pIStack_68;
    pcVar11 = pcStack_60;
    pIVar12 = pIStack_58;
    pIVar13 = pIStack_50;
    ppIVar14 = ppIStack_48;
    _Var15 = _Stack_40;
    _Var16 = _Stack_38;
    while (cVar1 != '\0') {
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar9;
      __this_01.fields._0_8_ = pIVar8;
      __this_01.fields.m_Object.fields._8_8_ = pIVar10;
      __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar11;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this_01.fields.m_Object.fields._32_8_ = pIVar13;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar14;
      __this_01.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
      __this_01.fields.m_Array.fields._current = _Var16.genericMethod;
      aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                  SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_String_o *)
               SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                         ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                          (MethodInfo *)0x0);
      if (pSVar3 == (System_String_o *)0x0) goto label_043f06b4;
      pSVar7 = "Title";
      pSVar5 = pSVar3;
      plVar4 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Title",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.method);
      aKeyValue.value = pSVar7;
      aKeyValue.key = pSVar5;
      if (plVar4 == (long *)0x0) goto label_043f06b4;
      link = (System_String_o *)*plVar4;
      pSVar5 = (System_String_o *)(*(code *)link[0x13].klass)(plVar4,link[0x13].monitor);
      pSVar7 = "Link";
      plVar4 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Link",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.method);
      aKeyValue.value = pSVar7;
      aKeyValue.key = pSVar3;
      if (plVar4 == (long *)0x0) goto label_043f06b4;
      link = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      UI_AboutHelpPanel__CreateLink(__this,__this_03,pSVar5,link,in_R8);
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar9;
      __this_02.fields._0_8_ = pIVar8;
      __this_02.fields.m_Object.fields._8_8_ = pIVar10;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar11;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this_02.fields.m_Object.fields._32_8_ = pIVar13;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar14;
      __this_02.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
      __this_02.fields.m_Array.fields._current = _Var16.genericMethod;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)&stack0xffffffffffffff38);
      cVar1 = (char)bVar2;
    }
  }
  return;
}


// UI.AboutHelpPanel$$CreateLink
// il2cpp: void UI_AboutHelpPanel__CreateLink (UI_AboutHelpPanel_o* __this, UI_ElementStyle_o* style, System_String_o* title, System_String_o* link, const MethodInfo* method);
// 0x43f06c0

void UI_AboutHelpPanel__CreateLink
               (UI_AboutHelpPanel_o *__this,UI_ElementStyle_o *style,System_String_o *title,
               System_String_o *link,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae51b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateLink_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&":");
    g_data_057ae51b = '\x01';
  }
  __this_00 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pUVar1 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    (__this_00->fields).m_CachedPtr = (intptr_t)link;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    pUVar1 = (__this->fields).SinglePanel;
    __this_01 = UI_ElementFactory__CreateHorizontalGroup(pUVar1,5.0,0,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_3af7150(" ",title,":",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar2,0,4,(MethodInfo *)0x0);
      pSVar2 = (System_String_o *)(__this_00->fields).m_CachedPtr;
      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateLinkButton(pUVar1,style,pSVar2,onClick,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
  return;
}


// UI.AboutHelpPanel$$.ctor
// il2cpp: void UI_AboutHelpPanel___ctor (UI_AboutHelpPanel_o* __this, const MethodInfo* method);
// 0x43f0830

void UI_AboutHelpPanel___ctor(UI_AboutHelpPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


