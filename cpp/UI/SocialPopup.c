// Type: UI.SocialPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SocialPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/SocialPopup.cs
// --------------------------------

// UI.SocialPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_SocialPopup___c__DisplayClass15_0___ctor (UI_SocialPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x4413590

void UI_SocialPopup___c__DisplayClass15_0___ctor
               (UI_SocialPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SocialPopup.<>c__DisplayClass15_0$$<CreateLink>b__0
// il2cpp: void UI_SocialPopup___c__DisplayClass15_0___CreateLink_b__0 (UI_SocialPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x44136a0

void UI_SocialPopup___c__DisplayClass15_0___CreateLink_b__0
               (UI_SocialPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int32_t maxExclusive;
  uint uVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_String_o *str0;
  long *plVar7;
  System_String_o *pSVar8;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_MonoBehaviour_o *__this_03;
  
  if (g_data_057ae5fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae5fc = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_UIManager[9].monitor + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_UIManager[9].monitor + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x28);
  }
  else {
    lVar2 = *(long *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x28);
  }
  __this_02 = TypeInfo_UIManager;
  if (lVar2 != 0) {
    __this_02 = (UnityEngine_Transform_o *)0x0;
    if (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40) != (UI_ExternalLinkPopup_o *)0x0) {
      UI_ExternalLinkPopup__Show
                (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(__this->fields).link,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae5fd = '\x01';
  }
  pUVar9 = __this_02;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_Transform_o *)0x0) &&
     (__this_01 = UnityEngine_Transform__Find(__this_00,"Label",(MethodInfo *)0x0), pUVar9 = __this_00,
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02[1].monitor = pIVar5;
    il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,pIVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Notifications");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Tips");
    g_data_057ae5fe = '\x01';
  }
  pSVar8 = (System_String_o *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if ((pSVar8 != (System_String_o *)0x0) &&
     (pSVar6 = (System_String_o *)
               (*(pSVar8->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar8,"Tips",(pSVar8->klass->vtable)._7_CompareTo.method),
     pSVar6 != (System_String_o *)0x0)) {
    do {
      maxExclusive = (*(pSVar6->klass->vtable)._11_System_IConvertible_ToChar.methodPtr)
                               (pSVar6,(pSVar6->klass->vtable)._11_System_IConvertible_ToChar.method);
      uVar4 = UnityEngine_Random__Range_4df2410(0,maxExclusive,(MethodInfo *)0x0);
    } while (uVar4 == (uint)pUVar9[1].fields.m_CachedPtr);
    *(uint *)&pUVar9[1].fields.m_CachedPtr = uVar4;
    plVar3 = pUVar9[1].monitor;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = UI_UIManager__GetLocale
                     ("Notifications","Tips","Title","","",(MethodInfo *)0x0);
    plVar7 = (long *)(*(pSVar6->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                               (pSVar6,(ulong)uVar4,
                                (pSVar6->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.method
                               );
    pSVar8 = pSVar6;
    if (plVar7 != (long *)0x0) {
      pSVar8 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      pSVar8 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar8,"","",(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_3af7150(str0,": ",pSVar8,(MethodInfo *)0x0);
      pSVar8 = str0;
      if (plVar3 != (long *)0x0) {
        lVar2 = *plVar3;
        (**(code **)(lVar2 + 0x5e8))
                  (plVar3,pSVar6,*(undefined8 *)(lVar2 + 0x5f0),lVar2,*(code **)(lVar2 + 0x5e8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"PressAnyKey");
    g_data_057ae5ff = '\x01';
  }
  plVar3 = pSVar8[1].monitor;
  if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = "PressAnyKey";
  pSVar8 = UI_UIManager__GetLocaleCommon((System_String_o *)"PressAnyKey",(MethodInfo *)0x0);
  if (plVar3 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&__this_03[1].monitor = 0xffffffff;
    UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
    return;
  }
  lVar2 = *plVar3;
  (**(code **)(lVar2 + 0x5e8))(plVar3,pSVar8,*(undefined8 *)(lVar2 + 0x5f0),lVar2,*(code **)(lVar2 + 0x5e8));
  return;
}


// UI.SocialPopup$$get_Title
// il2cpp: System_String_o* UI_SocialPopup__get_Title (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4412f60

System_String_o * UI_SocialPopup__get_Title(UI_SocialPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae5f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Social");
    g_data_057ae5f7 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.SocialPopup$$get_Width
// il2cpp: float UI_SocialPopup__get_Width (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4412fc0

float UI_SocialPopup__get_Width(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 750.0;
}


// UI.SocialPopup$$get_Height
// il2cpp: float UI_SocialPopup__get_Height (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4412fd0

float UI_SocialPopup__get_Height(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 650.0;
}


// UI.SocialPopup$$get_DoublePanel
// il2cpp: bool UI_SocialPopup__get_DoublePanel (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4412fe0

bool_conflict UI_SocialPopup__get_DoublePanel(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SocialPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SocialPopup__get_HorizontalPadding (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4412ff0

int32_t UI_SocialPopup__get_HorizontalPadding(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 0x23;
}


// UI.SocialPopup$$get_PanelAlignment
// il2cpp: int32_t UI_SocialPopup__get_PanelAlignment (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4413000

int32_t UI_SocialPopup__get_PanelAlignment(UI_SocialPopup_o *__this,MethodInfo *method)

{
  return 3;
}


// UI.SocialPopup$$get_UseSound
// il2cpp: bool UI_SocialPopup__get_UseSound (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4413010

bool_conflict UI_SocialPopup__get_UseSound(UI_SocialPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SocialPopup$$Setup
// il2cpp: void UI_SocialPopup__Setup (UI_SocialPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4413020

void UI_SocialPopup__Setup(UI_SocialPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar1;
  int32_t fontSize;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  long *plVar6;
  System_String_o *title;
  System_String_o *pSVar7;
  System_String_o *tooltip;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *pUVar8;
  System_String_o *pSVar9;
  System_String_o *str1;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  MethodInfo *in_R9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  Il2CppMethodPointer pIVar11;
  Il2CppMethodPointer pIVar12;
  InvokerMethod pIVar13;
  char *pcVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppType **ppIVar17;
  _union_13 _Var18;
  _union_14 _Var19;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (g_data_057ae5f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Error loading data.");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"About");
    il2cpp_runtime_helper_023445d0(&"Link");
    g_data_057ae5f8 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  tooltip = (System_String_o *)0x0;
  UI_ElementFactory__CreateTextButton(pUVar8,pUVar4,pSVar3,0.0,pUVar5,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar9 = (System_String_o *)0x0;
  UI_ElementStyle___ctor(pUVar4,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_MiscInfo + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,pUVar4,"Error loading data.",0,4,(MethodInfo *)0x0);
  }
  else {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)**(long **)(TypeInfo_MiscInfo + 0xb8);
    aKeyValue.value = pSVar10;
    aKeyValue.key = pSVar3;
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04413419:
      il2cpp_runtime_helper_022b2c90();
      pUVar4 = (UI_ElementStyle_o *)aKeyValue.value;
      if (g_data_057ae5f9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateLink_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&":");
        g_data_057ae5f9 = '\x01';
      }
      __this_03 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
      pUVar8 = __this_03;
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_Transform_o *)0x0) {
        (__this_03->fields).m_CachedPtr = (intptr_t)pSVar9;
        il2cpp_runtime_helper_022b4080(&__this_03->fields);
        pUVar8 = aKeyValue.key[1].monitor;
        __this_04 = UI_ElementFactory__CreateHorizontalGroup(pUVar8,5.0,0,(MethodInfo *)0x0);
        if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
          pUVar8 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
          UI_ElementFactory__CreateTooltipIcon(pUVar8,pUVar4,tooltip,30.0,30.0,(MethodInfo *)0x0);
          pSVar3 = System_String__Concat_3af7150(" ",str1,":",(MethodInfo *)0x0);
          UI_ElementFactory__CreateDefaultLabel(pUVar8,pUVar4,pSVar3,0,4,(MethodInfo *)0x0);
          pSVar3 = (System_String_o *)(__this_03->fields).m_CachedPtr;
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateLinkButton(pUVar8,pUVar4,pSVar3,pUVar5,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
      return;
    }
    (*(pSVar10->klass->vtable)._32_unknown.methodPtr)
              (&pIStack_78,pSVar10,(pSVar10->klass->vtable)._32_unknown.method);
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
    pIVar11 = pIStack_78;
    pIVar12 = pIStack_70;
    pIVar13 = pIStack_68;
    pcVar14 = pcStack_60;
    pIVar15 = pIStack_58;
    pIVar16 = pIStack_50;
    ppIVar17 = ppIStack_48;
    _Var18 = _Stack_40;
    _Var19 = _Stack_38;
    while (cVar1 != '\0') {
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar12;
      __this_01.fields._0_8_ = pIVar11;
      __this_01.fields.m_Object.fields._8_8_ = pIVar13;
      __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar14;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
      __this_01.fields.m_Object.fields._32_8_ = pIVar16;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar17;
      __this_01.fields.m_Array.fields._8_8_ = _Var18.rgctx_data;
      __this_01.fields.m_Array.fields._current = _Var19.genericMethod;
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
      if (pSVar3 == (System_String_o *)0x0) goto label_04413419;
      pSVar10 = "Title";
      pSVar7 = pSVar3;
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Title",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.method);
      aKeyValue.value = pSVar10;
      aKeyValue.key = pSVar7;
      if (plVar6 == (long *)0x0) goto label_04413419;
      pSVar9 = (System_String_o *)*plVar6;
      title = (System_String_o *)(*(code *)pSVar9[0x13].klass)(plVar6,pSVar9[0x13].monitor);
      pSVar10 = "Link";
      pSVar7 = pSVar3;
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Link",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.method);
      aKeyValue.value = pSVar10;
      aKeyValue.key = pSVar7;
      if (plVar6 == (long *)0x0) goto label_04413419;
      pSVar9 = (System_String_o *)*plVar6;
      pSVar7 = (System_String_o *)(*(code *)pSVar9[0x13].klass)(plVar6,pSVar9[0x13].monitor);
      pSVar10 = "About";
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"About",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.method);
      aKeyValue.value = pSVar10;
      aKeyValue.key = pSVar3;
      if (plVar6 == (long *)0x0) goto label_04413419;
      tooltip = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      UI_SocialPopup__CreateLink(__this,pUVar4,title,pSVar7,tooltip,in_R9);
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar12;
      __this_02.fields._0_8_ = pIVar11;
      __this_02.fields.m_Object.fields._8_8_ = pIVar13;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar14;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
      __this_02.fields.m_Object.fields._32_8_ = pIVar16;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar17;
      __this_02.fields.m_Array.fields._8_8_ = _Var18.rgctx_data;
      __this_02.fields.m_Array.fields._current = _Var19.genericMethod;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)&stack0xffffffffffffff38);
      pSVar9 = pSVar7;
      cVar1 = (char)bVar2;
    }
  }
  return;
}


// UI.SocialPopup$$CreateLink
// il2cpp: void UI_SocialPopup__CreateLink (UI_SocialPopup_o* __this, UI_ElementStyle_o* style, System_String_o* title, System_String_o* link, System_String_o* about, const MethodInfo* method);
// 0x4413420

void UI_SocialPopup__CreateLink
               (UI_SocialPopup_o *__this,UI_ElementStyle_o *style,System_String_o *title,System_String_o *link
               ,System_String_o *about,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae5f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateLink_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&":");
    g_data_057ae5f9 = '\x01';
  }
  __this_00 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
  pUVar1 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    (__this_00->fields).m_CachedPtr = (intptr_t)link;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    pUVar1 = (__this->fields).SinglePanel;
    __this_01 = UI_ElementFactory__CreateHorizontalGroup(pUVar1,5.0,0,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTooltipIcon(pUVar1,style,about,30.0,30.0,(MethodInfo *)0x0);
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


// UI.SocialPopup$$OnButtonClick
// il2cpp: void UI_SocialPopup__OnButtonClick (UI_SocialPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44135a0

void UI_SocialPopup__OnButtonClick(UI_SocialPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5fa = '\x01';
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
// 0x4413610

void UI_SocialPopup___ctor(UI_SocialPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SocialPopup$$<Setup>b__14_0
// il2cpp: void UI_SocialPopup___Setup_b__14_0 (UI_SocialPopup_o* __this, const MethodInfo* method);
// 0x4413620

void UI_SocialPopup___Setup_b__14_0(UI_SocialPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (g_data_057ae5fb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5fb = '\x01';
  }
  a = "Back";
  if (g_data_057ae5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5fa = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


