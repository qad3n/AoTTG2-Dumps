// Type: UI.LeaderboardDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LeaderboardDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs
// --------------------------------

// UI.LeaderboardDefaultPanel.<>c$$.cctor
// il2cpp: void UI_LeaderboardDefaultPanel___c___cctor (const MethodInfo* method);
// 0x4405350

void UI_LeaderboardDefaultPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae597 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.LeaderboardDefaultPanel.<>c$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c___ctor (UI_LeaderboardDefaultPanel___c_o* __this, const MethodInfo* method);
// 0x44053c0

void UI_LeaderboardDefaultPanel___c___ctor(UI_LeaderboardDefaultPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c$$<Setup>b__8_2
// il2cpp: float UI_LeaderboardDefaultPanel___c___Setup_b__8_2 (UI_LeaderboardDefaultPanel___c_o* __this, SimpleJSONFixed_JSONNode_o* x, const MethodInfo* method);
// 0x44053d0

float UI_LeaderboardDefaultPanel___c___Setup_b__8_2
                (UI_LeaderboardDefaultPanel___c_o *__this,SimpleJSONFixed_JSONNode_o *x,MethodInfo *method)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar2;
  long *plVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o **ppSVar5;
  SimpleJSONFixed_JSONNode_c *__this_00;
  UI_BasePanel_o *__this_01;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  
  pSVar4 = x;
  ppSVar5 = (SimpleJSONFixed_JSONNode_o **)__this;
  if (g_data_057ae598 == '\0') {
    ppSVar5 = &"Score";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae598 = '\x01';
  }
  if ((x != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar4 = "Score",
     plVar3 = (long *)(*(x->klass->vtable)._7_get_Item.methodPtr)
                                (x,"Score",(x->klass->vtable)._7_get_Item.method),
     ppSVar5 = (SimpleJSONFixed_JSONNode_o **)x, plVar3 != (long *)0x0)) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x388);
    fVar6 = (float)(*UNRECOVERED_JUMPTABLE_00)
                             (plVar3,*(undefined8 *)(*plVar3 + 0x390),UNRECOVERED_JUMPTABLE_00);
    return fVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae599 == '\0') {
    ppSVar5 = &"Score";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae599 = '\x01';
  }
  if ((pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar3 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"Score",(pSVar4->klass->vtable)._7_get_Item.method),
     ppSVar5 = (SimpleJSONFixed_JSONNode_o **)pSVar4, plVar3 != (long *)0x0)) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x388);
    fVar6 = (float)(*UNRECOVERED_JUMPTABLE_00)
                             (plVar3,*(undefined8 *)(*plVar3 + 0x390),UNRECOVERED_JUMPTABLE_00);
    return fVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = ((SimpleJSONFixed_JSONNode_o *)((long)ppSVar5 + 0x10))->klass;
  if (__this_00 != (SimpleJSONFixed_JSONNode_c *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UI_BasePanel_o *)((UI_BasePanel_Fields *)&(__this_00->_1).name)->m_CachedPtr;
  if (__this_01 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae59a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae59a = '\x01';
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
                (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(System_String_o *)(__this_01->fields).m_CachedPtr
                 ,(MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae59b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&"MainMenu");
      il2cpp_runtime_helper_023445d0(&"Title");
      il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae59b = '\x01';
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetLocale
              ("MainMenu","LeaderboardPopup","Title","","",(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da_00;
}


// UI.LeaderboardDefaultPanel.<>c$$<Setup>b__8_3
// il2cpp: float UI_LeaderboardDefaultPanel___c___Setup_b__8_3 (UI_LeaderboardDefaultPanel___c_o* __this, SimpleJSONFixed_JSONNode_o* x, const MethodInfo* method);
// 0x4405440

float UI_LeaderboardDefaultPanel___c___Setup_b__8_3
                (UI_LeaderboardDefaultPanel___c_o *__this,SimpleJSONFixed_JSONNode_o *x,MethodInfo *method)

{
  int iVar1;
  code *vtableDispatch;
  long lVar2;
  long *plVar3;
  SimpleJSONFixed_JSONNode_c *__this_00;
  UI_BasePanel_o *__this_01;
  float fVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  
  if (g_data_057ae599 == '\0') {
    __this = (UI_LeaderboardDefaultPanel___c_o *)&"Score";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae599 = '\x01';
  }
  if ((x != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar3 = (long *)(*(x->klass->vtable)._7_get_Item.methodPtr)
                                 (x,"Score",(x->klass->vtable)._7_get_Item.method),
     __this = (UI_LeaderboardDefaultPanel___c_o *)x, plVar3 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar3 + 0x388);
    fVar4 = (float)(*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x390),vtableDispatch);
    return fVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = ((SimpleJSONFixed_JSONNode_o *)(__this + 1))->klass;
  if (__this_00 != (SimpleJSONFixed_JSONNode_c *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UI_BasePanel_o *)((UI_BasePanel_Fields *)&(__this_00->_1).name)->m_CachedPtr;
  if (__this_01 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae59a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae59a = '\x01';
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
                (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(System_String_o *)(__this_01->fields).m_CachedPtr
                 ,(MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae59b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&"MainMenu");
      il2cpp_runtime_helper_023445d0(&"Title");
      il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae59b = '\x01';
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetLocale
              ("MainMenu","LeaderboardPopup","Title","","",(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da_00;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___ctor (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x4404730

void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___ctor
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$<Setup>b__0
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__0 (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x44054b0

void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__0
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UI_BasePanel_o *pUVar3;
  
  pUVar3 = (__this->fields).parent;
  if (pUVar3 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_BasePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar3 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae59a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae59a = '\x01';
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
                (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(System_String_o *)(pUVar3->fields).m_CachedPtr,
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae59b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&"MainMenu");
      il2cpp_runtime_helper_023445d0(&"Title");
      il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae59b = '\x01';
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetLocale
              ("MainMenu","LeaderboardPopup","Title","","",(MethodInfo *)0x0);
    return;
  }
  UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$<Setup>b__1
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__1 (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x44054d0

void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__1
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae59a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae59a = '\x01';
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
              (*(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),(System_String_o *)(__this_00->fields).m_CachedPtr,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae59b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae59b = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocale("MainMenu","LeaderboardPopup","Title","","",(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_1$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___ctor (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x4405320

void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___ctor
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_1$$<Setup>b__4
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___Setup_b__4 (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x44054f0

void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___Setup_b__4
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057ae59a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae59a = '\x01';
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
  if (g_data_057ae59b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae59b = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocale("MainMenu","LeaderboardPopup","Title","","",(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_LeaderboardDefaultPanel__get_ScrollBar (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x4402a30

bool_conflict
UI_LeaderboardDefaultPanel__get_ScrollBar(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.LeaderboardDefaultPanel$$get_VerticalPadding
// il2cpp: int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x4402a40

int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding
                  (UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.LeaderboardDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_LeaderboardDefaultPanel__get_VerticalSpacing (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x4402a50

float UI_LeaderboardDefaultPanel__get_VerticalSpacing(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.LeaderboardDefaultPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_LeaderboardDefaultPanel__get_ThemePanel (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x4402a60

System_String_o *
UI_LeaderboardDefaultPanel__get_ThemePanel(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae590 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
    g_data_057ae590 = '\x01';
  }
  return "LeaderboardPopup";
}


// UI.LeaderboardDefaultPanel$$Setup
// il2cpp: void UI_LeaderboardDefaultPanel__Setup (UI_LeaderboardDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4402a90

void UI_LeaderboardDefaultPanel__Setup
               (UI_LeaderboardDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  Il2CppClass *pIVar8;
  void *pvVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Collections_IEnumerator_c *pSVar11;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  char cVar12;
  bool_conflict bVar13;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  long *plVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  SimpleJSONFixed_JSONNode_o *d;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  UI_LeaderboardDefaultPanel_o *pUVar20;
  System_String_array *pSVar21;
  UnityEngine_Events_UnityAction_o *pUVar22;
  undefined8 uVar23;
  System_Collections_Generic_List_object__o *__this_04;
  System_Func_TSource__TKey__o *pSVar24;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar25;
  System_Collections_IEnumerator_o *pSVar26;
  VirtualInvokeData *pVVar27;
  UnityEngine_Component_o *pUVar28;
  long *plVar29;
  UnityEngine_Transform_o *parent_00;
  System_Object_array *pSVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 *puVar33;
  MethodInfo_2A24090 **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined1 uVar34;
  int index;
  UI_BasePanel_o *pUVar35;
  MethodInfo *pMVar36;
  UI_LeaderboardDefaultPanel_o *pUVar37;
  long lVar38;
  UI_ElementStyle_o *pUVar39;
  MethodInfo_24E7B40 **method_02;
  undefined1 auVar40 [12];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar41;
  float in_stack_fffffffffffffef8;
  undefined4 in_stack_fffffffffffffefc;
  UI_ElementStyle_o *in_stack_ffffffffffffff00;
  undefined4 in_stack_ffffffffffffff08;
  undefined4 in_stack_ffffffffffffff0c;
  float in_stack_ffffffffffffff10;
  undefined4 in_stack_ffffffffffffff14;
  UI_BasePanel_o *in_stack_ffffffffffffff18;
  undefined4 in_stack_ffffffffffffff20;
  int32_t in_stack_ffffffffffffff24;
  UI_LeaderboardDefaultPanel_o *in_stack_ffffffffffffff28;
  int in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  System_Nullable_float__Fields SVar42;
  System_Nullable_float__Fields aSStack_78 [9];
  
  if (g_data_057ae591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode_OrderByDes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode_OrderBy_JS);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_SimpleJSONFixed_JSONNode_ToList_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_JSONNode_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_SimpleJSONFixed_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_Setup_b__8_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_Setup_b__8_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Score");
    il2cpp_runtime_helper_023445d0(&"Sort");
    il2cpp_runtime_helper_023445d0(&"Rank");
    il2cpp_runtime_helper_023445d0(&"DecimalPlaces");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Watch");
    il2cpp_runtime_helper_023445d0(&"HasLink");
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    il2cpp_runtime_helper_023445d0(&"ScoreLabel");
    il2cpp_runtime_helper_023445d0(&"Players");
    il2cpp_runtime_helper_023445d0(&"Join the discord to participate in the leaderboard.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"CategoryName");
    il2cpp_runtime_helper_023445d0(&"Descending");
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    il2cpp_runtime_helper_023445d0(&"Loading leaderboard...");
    il2cpp_runtime_helper_023445d0(&"Link");
    g_data_057ae591 = '\x01';
  }
  SVar42.hasValue = 0;
  SVar42.value = 0.0;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  if (pIVar14 == (Il2CppObject *)0x0) goto label_04404262;
  pIVar14[1].klass = (Il2CppClass *)parent;
  il2cpp_runtime_helper_022b4080(pIVar14 + 1,parent);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)pIVar14[1].klass,(MethodInfo *)0x0);
  pSVar15 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  in_stack_ffffffffffffff00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(in_stack_ffffffffffffff00,0x18,120.0,20.0,pSVar15,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) != 0) {
    pUVar37 = in_stack_ffffffffffffff28;
    index = in_stack_ffffffffffffff30;
    if (*(int *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x10) == 1) goto label_04402dcf;
label_044032e9:
    pUVar19 = (__this->fields).SinglePanel;
    pSVar15 = "Loading leaderboard...";
    goto label_044032fa;
  }
  il2cpp_runtime_helper_02337ed0();
  pUVar37 = in_stack_ffffffffffffff28;
  index = in_stack_ffffffffffffff30;
  if (*(int *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x10) != 1) goto label_044032e9;
label_04402dcf:
  pIVar8 = pIVar14[1].klass;
  in_stack_ffffffffffffff18 = (UI_BasePanel_o *)__this;
  in_stack_ffffffffffffff28 = pUVar37;
  in_stack_ffffffffffffff30 = index;
  if (pIVar8 == (Il2CppClass *)0x0) goto label_0440427b;
  pvVar9 = (pIVar8->_1).image;
  method_00 = (MethodInfo_2A24090 **)(ulong)*(byte *)(TypeInfo_LeaderboardPopup + 0x130);
  method_02 = (MethodInfo_24E7B40 **)__this;
  if ((*(byte *)((long)pvVar9 + 0x130) < *(byte *)(TypeInfo_LeaderboardPopup + 0x130)) ||
     (*(long *)(*(long *)((long)pvVar9 + 200) + -8 + (long)method_00 * 8) != TypeInfo_LeaderboardPopup)) goto label_04404267;
  in_stack_ffffffffffffff28 = (UI_LeaderboardDefaultPanel_o *)(pIVar8->_1).implementedInterfaces;
  if (in_stack_ffffffffffffff28 == (UI_LeaderboardDefaultPanel_o *)0x0) goto label_04404280;
  pIVar10 = (pIVar8->_1).interfaceOffsets;
  in_stack_ffffffffffffff10 = SUB84(pIVar10,0);
  in_stack_ffffffffffffff14 = (undefined4)((ulong)pIVar10 >> 0x20);
  pUVar20 = (UI_LeaderboardDefaultPanel_o *)(in_stack_ffffffffffffff28->fields).m_CancellationTokenSource;
  method_02 = (MethodInfo_24E7B40 **)&g_data_057b9b70;
  bVar13 = System_String__op_Equality
                     ((System_String_o *)pUVar20,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      (MethodInfo *)0x0);
  pMVar36 = extraout_RDX;
  in_stack_ffffffffffffff18 = (UI_BasePanel_o *)__this;
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff18 = (UI_BasePanel_o *)__this;
    }
    plVar16 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
    if (plVar16 == (long *)0x0) goto label_044042bf;
    plVar16 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,0,*(undefined8 *)(*plVar16 + 400));
    if (plVar16 != (long *)0x0) {
      pSVar17 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar16 + 0x1a8))(plVar16,"CategoryName",*(undefined8 *)(*plVar16 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar17,(MethodInfo *)0x0);
      method_00 = &MethodInfo_Void_set_Value;
      pUVar20 = in_stack_ffffffffffffff28;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)in_stack_ffffffffffffff28,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value)
      ;
      pMVar36 = extraout_RDX_00;
      goto label_04402ef9;
    }
    goto label_044042c4;
  }
label_04402ef9:
  pSVar17 = UI_LeaderboardDefaultPanel__FindCategory
                      (pUVar20,(System_String_o *)
                               (in_stack_ffffffffffffff28->fields).m_CancellationTokenSource,pMVar36);
  pUVar37 = (UI_LeaderboardDefaultPanel_o *)CONCAT44(in_stack_ffffffffffffff14,in_stack_ffffffffffffff10);
  if (pUVar37 == (UI_LeaderboardDefaultPanel_o *)0x0) goto label_04404285;
  pUVar20 = (UI_LeaderboardDefaultPanel_o *)(pUVar37->fields).m_CancellationTokenSource;
  bVar13 = System_String__op_Equality
                     ((System_String_o *)pUVar20,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044042c9;
    plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar17,"Subcategories",(pSVar17->klass->vtable)._7_get_Item.method);
    if (plVar16 == (long *)0x0) goto label_044042ce;
    plVar16 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,0,*(undefined8 *)(*plVar16 + 400));
    if (plVar16 != (long *)0x0) {
      d = (SimpleJSONFixed_JSONNode_o *)
          (**(code **)(*plVar16 + 0x1a8))(plVar16,"SubcategoryName",*(undefined8 *)(*plVar16 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(d,(MethodInfo *)0x0);
      method_00 = &MethodInfo_Void_set_Value;
      pUVar20 = pUVar37;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pUVar37,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value);
      goto label_04402fe1;
    }
    goto label_044042d3;
  }
label_04402fe1:
  method_02 = (MethodInfo_24E7B40 **)
              UI_LeaderboardDefaultPanel__FindSubcategory
                        (pUVar20,pSVar17,(System_String_o *)(pUVar37->fields).m_CancellationTokenSource,
                         (MethodInfo *)method_00);
  pUVar18 = UI_ElementFactory__CreateHorizontalGroup
                      ((in_stack_ffffffffffffff18->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_0440428a;
  pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
  in_stack_fffffffffffffef8 = SUB84(pUVar19,0);
  in_stack_fffffffffffffefc = (undefined4)((ulong)pUVar19 >> 0x20);
  pSVar15 = (System_String_o *)
            (*(in_stack_ffffffffffffff18->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (in_stack_ffffffffffffff18,
                       (in_stack_ffffffffffffff18->klass->vtable)._4_get_ThemePanel.method);
  pUVar20 = (UI_LeaderboardDefaultPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pMVar36 = (MethodInfo *)&g_data_00000018;
  pUVar37 = pUVar20;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar20,0x18,0.0,20.0,pSVar15,(MethodInfo *)0x0);
  index = (int)pUVar20;
  in_stack_ffffffffffffff34 = (undefined4)((ulong)pUVar20 >> 0x20);
  pSVar21 = UI_LeaderboardDefaultPanel__GetCategoryNames(pUVar37,pMVar36);
  aSStack_78[0].hasValue = 0;
  aSStack_78[0].value = 0.0;
  System_Nullable_float____ctor((System_Nullable_float__o)aSStack_78,180.0,MethodInfo_Nullable_1_Single);
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar37 = (UI_LeaderboardDefaultPanel_o *)CONCAT44(in_stack_fffffffffffffefc,in_stack_fffffffffffffef8);
  UI_ElementFactory__CreateDropdownSetting
            ((UnityEngine_Transform_o *)pUVar37,(UI_ElementStyle_o *)CONCAT44(in_stack_ffffffffffffff34,index)
             ,(Settings_BaseSetting_o *)in_stack_ffffffffffffff28,"",pSVar21,"",180.0,40.0
             ,300.0,(System_Nullable_float__o)aSStack_78[0],pUVar22,(MethodInfo *)0x0);
  pSVar21 = UI_LeaderboardDefaultPanel__GetSubcategoryNames(pUVar37,pSVar17,method_01);
  if (pSVar21 == (System_String_array *)0x0) goto label_0440428f;
  if (1 < (int)pSVar21->max_length) {
    aSStack_78[0].hasValue = 0;
    aSStack_78[0].value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)aSStack_78,180.0,MethodInfo_Nullable_1_Single);
    pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateDropdownSetting
              ((UnityEngine_Transform_o *)CONCAT44(in_stack_fffffffffffffefc,in_stack_fffffffffffffef8),
               (UI_ElementStyle_o *)CONCAT44(in_stack_ffffffffffffff34,index),
               (Settings_BaseSetting_o *)CONCAT44(in_stack_ffffffffffffff14,in_stack_ffffffffffffff10),
               "",pSVar21,"",180.0,40.0,300.0,(System_Nullable_float__o)aSStack_78[0],
               pUVar22,(MethodInfo *)0x0);
  }
  UI_ElementFactory__CreateTooltipIcon
            ((UnityEngine_Transform_o *)CONCAT44(in_stack_fffffffffffffefc,in_stack_fffffffffffffef8),
             in_stack_ffffffffffffff00,"Join the discord to participate in the leaderboard.",30.0,30.0,(MethodInfo *)0x0);
  if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404294;
  cVar12 = (*(pSVar17->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar17,"Sort",(pSVar17->klass->vtable)._28_HasKey.method);
  uVar34 = 1;
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar17,"Sort",(pSVar17->klass->vtable)._7_get_Item.method);
    if (plVar16 != (long *)0x0) {
      pSVar15 = (System_String_o *)(**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
      bVar13 = System_String__op_Equality(pSVar15,"Descending",(MethodInfo *)0x0);
      uVar34 = (undefined1)bVar13;
      goto label_04403272;
    }
    goto label_044042d8;
  }
label_04403272:
  cVar12 = (*(pSVar17->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar17,"HasLink",(pSVar17->klass->vtable)._28_HasKey.method);
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar17,"HasLink",(pSVar17->klass->vtable)._7_get_Item.method);
    if (plVar16 != (long *)0x0) {
      in_stack_ffffffffffffff0c = (**(code **)(*plVar16 + 0x3a8))(plVar16,*(undefined8 *)(*plVar16 + 0x3b0));
      goto label_04403317;
    }
    goto label_044042dd;
  }
  in_stack_ffffffffffffff0c = 0;
label_04403317:
  cVar12 = (*(pSVar17->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar17,"DecimalPlaces",(pSVar17->klass->vtable)._28_HasKey.method);
  in_stack_ffffffffffffff24 = 0;
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar17,"DecimalPlaces",(pSVar17->klass->vtable)._7_get_Item.method);
    if (plVar16 != (long *)0x0) {
      in_stack_ffffffffffffff24 = (**(code **)(*plVar16 + 0x368))(plVar16,*(undefined8 *)(*plVar16 + 0x370));
      goto label_0440337a;
    }
    goto label_044042e2;
  }
label_0440337a:
  in_stack_fffffffffffffef8 = (float)CONCAT31((int3)((uint)in_stack_fffffffffffffef8 >> 8),uVar34);
  cVar12 = (*(pSVar17->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar17,"ScoreLabel",(pSVar17->klass->vtable)._28_HasKey.method);
  uVar23 = "Score";
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar17,"ScoreLabel",(pSVar17->klass->vtable)._7_get_Item.method);
    if (plVar16 != (long *)0x0) {
      uVar23 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
      goto label_044033de;
    }
    goto label_044042e7;
  }
label_044033de:
  in_stack_ffffffffffffff10 = (float)uVar23;
  in_stack_ffffffffffffff14 = (undefined4)((ulong)uVar23 >> 0x20);
  if ((UI_LeaderboardDefaultPanel_o *)method_02 == (UI_LeaderboardDefaultPanel_o *)0x0) goto label_04404299;
  cVar12 = (*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.methodPtr)
                     (method_02,"Sort",
                      (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.method
                     );
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                        _7_get_BorderVerticalPadding.methodPtr)
                                (method_02,"Sort",
                                 (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                                 _7_get_BorderVerticalPadding.method);
    if (plVar16 != (long *)0x0) {
      pSVar15 = (System_String_o *)(**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
      bVar13 = System_String__op_Equality(pSVar15,"Descending",(MethodInfo *)0x0);
      in_stack_fffffffffffffef8 = (float)CONCAT31((int3)((uint)in_stack_fffffffffffffef8 >> 8),(char)bVar13);
      goto label_0440345d;
    }
    goto label_044042ec;
  }
label_0440345d:
  cVar12 = (*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.methodPtr)
                     (method_02,"HasLink",
                      (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.method
                     );
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                        _7_get_BorderVerticalPadding.methodPtr)
                                (method_02,"HasLink",
                                 (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                                 _7_get_BorderVerticalPadding.method);
    if (plVar16 != (long *)0x0) {
      in_stack_ffffffffffffff0c = (**(code **)(*plVar16 + 0x3a8))(plVar16,*(undefined8 *)(*plVar16 + 0x3b0));
      goto label_044034af;
    }
    goto label_044042f1;
  }
label_044034af:
  cVar12 = (*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.methodPtr)
                     (method_02,"DecimalPlaces",
                      (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.method
                     );
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                        _7_get_BorderVerticalPadding.methodPtr)
                                (method_02,"DecimalPlaces",
                                 (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                                 _7_get_BorderVerticalPadding.method);
    if (plVar16 != (long *)0x0) {
      in_stack_ffffffffffffff24 = (**(code **)(*plVar16 + 0x368))(plVar16,*(undefined8 *)(*plVar16 + 0x370));
      goto label_04403501;
    }
    goto label_044042f6;
  }
label_04403501:
  cVar12 = (*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.methodPtr)
                     (method_02,"ScoreLabel",
                      (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable)._28_SetCategoryPanel.method
                     );
  if (cVar12 != '\0') {
    plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar17,"ScoreLabel",(pSVar17->klass->vtable)._7_get_Item.method);
    if (plVar16 != (long *)0x0) {
      uVar23 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
      in_stack_ffffffffffffff10 = (float)uVar23;
      in_stack_ffffffffffffff14 = (undefined4)((ulong)uVar23 >> 0x20);
      goto label_04403553;
    }
    goto label_044042fb;
  }
label_04403553:
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_JSONNode);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_SimpleJSONFixed_JSONNode);
  plVar16 = (long *)(*(((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                      _7_get_BorderVerticalPadding.methodPtr)
                              (method_02,"Players",
                               (((UI_LeaderboardDefaultPanel_o *)method_02)->klass->vtable).
                               _7_get_BorderVerticalPadding.method);
  if (plVar16 == (long *)0x0) goto label_0440429e;
  (**(code **)(*plVar16 + 0x338))(aSStack_78,plVar16,*(undefined8 *)(*plVar16 + 0x340));
  SVar42 = aSStack_78[0];
  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
    method_02 = (MethodInfo_24E7B40 **)&stack0xffffffffffffff38;
    plVar16 = &MethodInfo_Void_Add;
    while (__this_00.fields._4_4_ = in_stack_fffffffffffffefc,
          __this_00.fields.type = (int32_t)in_stack_fffffffffffffef8,
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff00,
          __this_00.fields.m_Object.fields._version = in_stack_ffffffffffffff08,
          __this_00.fields.m_Object.fields._index = in_stack_ffffffffffffff0c,
          __this_00.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff10,
          __this_00.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff14,
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff18,
          __this_00.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20,
          __this_00.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff24,
          __this_00.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
          __this_00.fields.m_Array.fields._index = index,
          __this_00.fields.m_Array.fields._version = in_stack_ffffffffffffff34,
          __this_00.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)SVar42,
          bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)method_02),
          (char)bVar13 != '\0') {
      __this_01.fields._4_4_ = in_stack_fffffffffffffefc;
      __this_01.fields.type = (int32_t)in_stack_fffffffffffffef8;
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff00;
      __this_01.fields.m_Object.fields._version = in_stack_ffffffffffffff08;
      __this_01.fields.m_Object.fields._index = in_stack_ffffffffffffff0c;
      __this_01.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff10;
      __this_01.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff14;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff18;
      __this_01.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20;
      __this_01.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff24;
      __this_01.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_01.fields.m_Array.fields._index = index;
      __this_01.fields.m_Array.fields._version = in_stack_ffffffffffffff34;
      __this_01.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)SVar42;
      SVar41 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_01,(MethodInfo *)method_02);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar14 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar41,(MethodInfo *)0x0);
      lVar32 = MethodInfo_Void_Add;
      piVar1 = &(__this_04->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar30 = (__this_04->fields)._items;
      if (pSVar30 == (System_Object_array *)0x0) goto label_0440422d;
      uVar7 = (__this_04->fields)._size;
      if (uVar7 < (uint)pSVar30->max_length) {
        (__this_04->fields)._size = uVar7 + 1;
        pSVar30->m_Items[(int)uVar7] = pIVar14;
        il2cpp_runtime_helper_022b4080(pSVar30->m_Items + (int)uVar7,pIVar14);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_04,pIVar14,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
      }
    }
label_044036d2:
    pUVar39 = in_stack_ffffffffffffff00;
    pUVar35 = in_stack_ffffffffffffff18;
    if (SUB41(in_stack_fffffffffffffef8,0) == '\0') {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar24 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        pUVar39 = in_stack_ffffffffffffff00;
        pUVar35 = in_stack_ffffffffffffff18;
      }
      else {
        pSVar24 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar24 == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar24 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_JSONNode_float);
        System_Func_object__float____ctor();
        lVar32 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar32 + 0x10) = pSVar24;
        il2cpp_runtime_helper_022b4080(lVar32 + 0x10,pSVar24);
      }
      pSVar25 = System_Linq_Enumerable__OrderBy_object__float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this_04,pSVar24,MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode_OrderBy_JS
                          );
      in_stack_ffffffffffffff00 = pUVar39;
      in_stack_ffffffffffffff18 = pUVar35;
      plVar16 = (long *)System_Linq_Enumerable__ToList_object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar25,MethodInfo_List_1_SimpleJSONFixed_JSONNode_ToList_JSONNode);
    }
    else {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar24 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        pUVar39 = in_stack_ffffffffffffff00;
        pUVar35 = in_stack_ffffffffffffff18;
      }
      else {
        pSVar24 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar24 == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar24 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_JSONNode_float);
        System_Func_object__float____ctor();
        lVar32 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar32 + 8) = pSVar24;
        il2cpp_runtime_helper_022b4080(lVar32 + 8,pSVar24);
      }
      pSVar25 = System_Linq_Enumerable__OrderByDescending_object__float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this_04,pSVar24,MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode_OrderByDes
                          );
      in_stack_ffffffffffffff00 = pUVar39;
      in_stack_ffffffffffffff18 = pUVar35;
      plVar16 = (long *)System_Linq_Enumerable__ToList_object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar25,MethodInfo_List_1_SimpleJSONFixed_JSONNode_ToList_JSONNode);
    }
    UI_BasePanel__CreateHorizontalDivider(pUVar35,(pUVar35->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pUVar18 = UI_ElementFactory__CreateHorizontalGroup((pUVar35->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_044042a3;
    pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar19,pUVar39,"Rank",1,4,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar19,pUVar39,"Name",1,4,(MethodInfo *)0x0);
    pMVar36 = (MethodInfo *)&g_data_00000004;
    UI_ElementFactory__CreateDefaultLabel
              (pUVar19,pUVar39,
               (System_String_o *)CONCAT44(in_stack_ffffffffffffff14,in_stack_ffffffffffffff10),1,4,
               (MethodInfo *)0x0);
    if ((char)in_stack_ffffffffffffff0c == '\0') {
      in_stack_fffffffffffffef8 = (float)(*(pUVar35->klass->vtable)._33_GetWidth.methodPtr)(pUVar35);
      in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 / 3.0;
      if (pUVar19 != (UnityEngine_Transform_o *)0x0) goto label_044039a1;
      goto label_044042a8;
    }
    pMVar36 = (MethodInfo *)&g_data_00000004;
    UI_ElementFactory__CreateDefaultLabel(pUVar19,pUVar39,"Watch",1,4,(MethodInfo *)0x0);
    in_stack_fffffffffffffef8 = (float)(*(pUVar35->klass->vtable)._33_GetWidth.methodPtr)(pUVar35);
    in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 * 0.25;
    if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_044042a8;
label_044039a1:
    pSVar26 = UnityEngine_Transform__GetEnumerator(pUVar19,(MethodInfo *)0x0);
    in_stack_ffffffffffffff28 = (UI_LeaderboardDefaultPanel_o *)plVar16;
    in_stack_ffffffffffffff30 = index;
    if (pSVar26 != (System_Collections_IEnumerator_o *)0x0) {
      method_02 = (MethodInfo_24E7B40 **)0x0;
      do {
        pSVar11 = pSVar26->klass;
        uVar3._0_1_ = (pSVar11->_2).rank;
        uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar10 = (pSVar11->_1).interfaceOffsets;
          lVar32 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IEnumerator) {
              pVVar27 = pSVar11->vtable + *(int *)((long)&pIVar10->offset + lVar32);
              in_stack_ffffffffffffff30 = index;
              goto label_04403a33;
            }
            lVar32 = lVar32 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar32);
        }
        pVVar27 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar26,TypeInfo_IEnumerator,0);
        in_stack_ffffffffffffff30 = index;
label_04403a33:
        cVar12 = (*pVVar27->methodPtr)(pSVar26,pVVar27->method);
        if (cVar12 == '\0') {
          plVar29 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar29 == (long *)0x0) goto label_04403ba6;
          lVar32 = *plVar29;
          if ((ulong)*(ushort *)(lVar32 + 0x12e) == 0) goto label_04403b7f;
          lVar38 = 0;
          goto label_04403b70;
        }
        pSVar11 = pSVar26->klass;
        uVar4._0_1_ = (pSVar11->_2).rank;
        uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar10 = (pSVar11->_1).interfaceOffsets;
          lVar32 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IEnumerator) {
              pVVar27 = pSVar11->vtable + (*(int *)((long)&pIVar10->offset + lVar32) + 1);
              index = in_stack_ffffffffffffff30;
              goto label_04403ab8;
            }
            lVar32 = lVar32 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar32);
        }
        pVVar27 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar26,TypeInfo_IEnumerator,1);
        index = in_stack_ffffffffffffff30;
label_04403ab8:
        pUVar28 = (UnityEngine_Component_o *)(*pVVar27->methodPtr)(pSVar26,pVVar27->method);
        if (pUVar28 == (UnityEngine_Component_o *)0x0) goto label_04404223;
        bVar2 = (TypeInfo_Transform->_2).naturalAligment;
        if (((pUVar28->klass->_2).naturalAligment < bVar2) ||
           ((pUVar28->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) goto label_0440421b;
        pIVar14 = UnityEngine_Component__GetComponent_object_(pUVar28,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (pIVar14 == (Il2CppObject *)0x0) goto label_04404228;
        (*pIVar14->klass->vtable[0x24].methodPtr)
                  (in_stack_fffffffffffffef8,pIVar14,pIVar14->klass->vtable[0x24].method);
      } while( true );
    }
    goto label_044042ad;
  }
  __this_02.fields._4_4_ = in_stack_fffffffffffffefc;
  __this_02.fields.type = (int32_t)in_stack_fffffffffffffef8;
  __this_02.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff00;
  __this_02.fields.m_Object.fields._version = in_stack_ffffffffffffff08;
  __this_02.fields.m_Object.fields._index = in_stack_ffffffffffffff0c;
  __this_02.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff10;
  __this_02.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff14;
  __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff18;
  __this_02.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20;
  __this_02.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff24;
  __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_02.fields.m_Array.fields._index = index;
  __this_02.fields.m_Array.fields._version = in_stack_ffffffffffffff34;
  __this_02.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)aSStack_78[0];
  bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)&stack0xffffffffffffff38);
  if ((char)bVar13 == '\0') goto label_044036d2;
  goto label_04404300;
label_04404060:
  plVar29 = (long *)il2cpp_runtime_helper_023051f0();
  plVar16 = (long *)in_stack_ffffffffffffff28;
  if (plVar29 != (long *)0x0) {
    lVar32 = *plVar29;
    if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
      lVar38 = 0;
      do {
        if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar38) == TypeInfo_IDisposable) {
          puVar31 = (undefined8 *)
                    (lVar32 + (long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar38) * 0x10 + 0x138);
          goto label_044040dd;
        }
        lVar38 = lVar38 + 0x10;
      } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar38);
    }
    puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar29,TypeInfo_IDisposable,0);
    plVar16 = (long *)in_stack_ffffffffffffff28;
label_044040dd:
    (*(code *)*puVar31)(plVar29);
  }
  in_stack_ffffffffffffff28 = (UI_LeaderboardDefaultPanel_o *)plVar16;
  in_stack_ffffffffffffff30 = index;
  if (*(int *)&(((UI_LeaderboardDefaultPanel_o *)plVar16)->fields).m_CancellationTokenSource <= index) {
    return;
  }
  goto label_04403c00;
label_0440421b:
  il2cpp_runtime_helper_022b2fd0(pUVar28);
label_04404223:
  il2cpp_runtime_helper_022b2c90();
label_04404228:
  il2cpp_runtime_helper_022b2c90();
label_0440422d:
  il2cpp_runtime_helper_022b2c90();
  in_stack_ffffffffffffff30 = index;
label_04404232:
  index = in_stack_ffffffffffffff30;
  il2cpp_runtime_helper_022b2c90();
label_04404237:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(plVar16);
  in_stack_ffffffffffffff30 = index;
label_04404244:
  il2cpp_runtime_helper_022b2c90();
label_04404249:
  il2cpp_runtime_helper_022b2c90();
label_0440424e:
  il2cpp_runtime_helper_022b2c90();
label_04404253:
  il2cpp_runtime_helper_022b2c90();
label_04404258:
  il2cpp_runtime_helper_022b2c90();
label_0440425d:
  il2cpp_runtime_helper_022b2c90();
  __this = (UI_LeaderboardDefaultPanel_o *)method_02;
label_04404262:
  il2cpp_runtime_helper_022b2c90();
  method_02 = (MethodInfo_24E7B40 **)__this;
label_04404267:
  il2cpp_runtime_helper_022b2fd0();
label_0440426c:
  il2cpp_runtime_helper_022b2c90();
label_04404271:
  il2cpp_runtime_helper_022b2c90();
label_04404276:
  il2cpp_runtime_helper_022b2c90();
  __this = (UI_LeaderboardDefaultPanel_o *)method_02;
label_0440427b:
  il2cpp_runtime_helper_022b2c90();
  method_02 = (MethodInfo_24E7B40 **)__this;
  pUVar37 = in_stack_ffffffffffffff28;
  index = in_stack_ffffffffffffff30;
label_04404280:
  in_stack_ffffffffffffff28 = pUVar37;
  il2cpp_runtime_helper_022b2c90();
label_04404285:
  il2cpp_runtime_helper_022b2c90();
label_0440428a:
  il2cpp_runtime_helper_022b2c90();
label_0440428f:
  il2cpp_runtime_helper_022b2c90();
label_04404294:
  il2cpp_runtime_helper_022b2c90();
label_04404299:
  il2cpp_runtime_helper_022b2c90();
label_0440429e:
  il2cpp_runtime_helper_022b2c90();
label_044042a3:
  il2cpp_runtime_helper_022b2c90();
label_044042a8:
  il2cpp_runtime_helper_022b2c90();
  in_stack_ffffffffffffff30 = index;
label_044042ad:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(method_02);
  goto label_044042ba;
  while (lVar38 = lVar38 + 0x10, (ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar38) {
label_04403b70:
    if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar38) == TypeInfo_IDisposable) {
      puVar31 = (undefined8 *)(lVar32 + (long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar38) * 0x10 + 0x138);
      goto label_04403b9d;
    }
  }
label_04403b7f:
  puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar29,TypeInfo_IDisposable,0);
label_04403b9d:
  (*(code *)*puVar31)(plVar29);
label_04403ba6:
  if ((UI_LeaderboardDefaultPanel_o *)plVar16 != (UI_LeaderboardDefaultPanel_o *)0x0) {
    if (*(int *)&(((UI_LeaderboardDefaultPanel_o *)plVar16)->fields).m_CancellationTokenSource < 1) {
      return;
    }
    method_02 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
    index = 0;
label_04403c00:
    pUVar18 = UI_ElementFactory__CreateHorizontalGroup
                        ((in_stack_ffffffffffffff18->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
    if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
      pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      pUVar18 = UI_ElementFactory__CreateHorizontalGroup(pUVar19,5.0,4,(MethodInfo *)0x0);
      if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04404249;
      parent_00 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      in_stack_ffffffffffffff30 = index + 1;
      UI_LeaderboardDefaultPanel__CreateRank
                ((UI_LeaderboardDefaultPanel_o *)in_stack_ffffffffffffff18,parent_00,in_stack_ffffffffffffff00
                 ,in_stack_ffffffffffffff30,pMVar36);
      pIVar14 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)plVar16,index,MethodInfo_JSONNode_get_Item);
      if (pIVar14 == (Il2CppObject *)0x0) goto label_0440424e;
      plVar29 = (long *)(*pIVar14->klass->vtable[7].methodPtr)
                                  (pIVar14,"Name",pIVar14->klass->vtable[7].method);
      if (plVar29 == (long *)0x0) goto label_04404253;
      pSVar15 = (System_String_o *)(**(code **)(*plVar29 + 0x1c8))(plVar29,*(undefined8 *)(*plVar29 + 0x1d0));
      UI_ElementFactory__CreateDefaultLabel(pUVar19,in_stack_ffffffffffffff00,pSVar15,0,4,(MethodInfo *)0x0);
      pIVar14 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)plVar16,index,MethodInfo_JSONNode_get_Item);
      if (pIVar14 == (Il2CppObject *)0x0) goto label_04404258;
      plVar29 = (long *)(*pIVar14->klass->vtable[7].methodPtr)
                                  (pIVar14,"Score",pIVar14->klass->vtable[7].method);
      if (plVar29 == (long *)0x0) goto label_04404232;
      in_stack_ffffffffffffff10 = (float)(**(code **)(*plVar29 + 0x388))(plVar29);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = Utility_Util__FormatFloat
                          (in_stack_ffffffffffffff10,in_stack_ffffffffffffff24,(MethodInfo *)0x0);
      pMVar36 = (MethodInfo *)&g_data_00000004;
      UI_ElementFactory__CreateDefaultLabel(pUVar19,in_stack_ffffffffffffff00,pSVar15,0,4,(MethodInfo *)0x0);
      if ((char)in_stack_ffffffffffffff0c != '\0') {
        pIVar14 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)plVar16,index,MethodInfo_JSONNode_get_Item);
        if (pIVar14 == (Il2CppObject *)0x0) goto label_0440425d;
        cVar12 = (*pIVar14->klass->vtable[0x1c].methodPtr)
                           (pIVar14,"Link",pIVar14->klass->vtable[0x1c].method);
        if (cVar12 == '\0') {
          pMVar36 = (MethodInfo *)&g_data_00000004;
          UI_ElementFactory__CreateDefaultLabel
                    (pUVar19,in_stack_ffffffffffffff00,"",0,4,(MethodInfo *)0x0);
        }
        else {
          plVar16 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_1);
          System_Object___ctor((Il2CppObject *)plVar16,(MethodInfo *)0x0);
          pIVar14 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)in_stack_ffffffffffffff28,index,
                               MethodInfo_JSONNode_get_Item);
          if (pIVar14 == (Il2CppObject *)0x0) goto label_0440426c;
          plVar29 = (long *)(*pIVar14->klass->vtable[7].methodPtr)
                                      (pIVar14,"Link",pIVar14->klass->vtable[7].method);
          if (plVar29 == (long *)0x0) goto label_04404271;
          pSVar30 = (System_Object_array *)
                    (**(code **)(*plVar29 + 0x1c8))(plVar29,*(undefined8 *)(*plVar29 + 0x1d0));
          if ((UI_LeaderboardDefaultPanel_o *)plVar16 == (UI_LeaderboardDefaultPanel_o *)0x0)
          goto label_04404276;
          (((UI_LeaderboardDefaultPanel_o *)plVar16)->fields).m_CachedPtr = (intptr_t)pSVar30;
          il2cpp_runtime_helper_022b4080(&((UI_LeaderboardDefaultPanel_o *)plVar16)->fields,pSVar30);
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pMVar36 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateLinkButton
                    (pUVar19,in_stack_ffffffffffffff00,"Link",pUVar22,(MethodInfo *)0x0);
        }
      }
      index = in_stack_ffffffffffffff30;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_04404237;
      pSVar26 = UnityEngine_Transform__GetEnumerator(pUVar19,(MethodInfo *)0x0);
      if (pSVar26 != (System_Collections_IEnumerator_o *)0x0) {
        do {
          pSVar11 = pSVar26->klass;
          uVar5._0_1_ = (pSVar11->_2).rank;
          uVar5._1_1_ = (pSVar11->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar10 = (pSVar11->_1).interfaceOffsets;
            lVar32 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IEnumerator) {
                pVVar27 = pSVar11->vtable + *(int *)((long)&pIVar10->offset + lVar32);
                goto label_04403f63;
              }
              lVar32 = lVar32 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar32);
          }
          pVVar27 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar26,TypeInfo_IEnumerator,0);
label_04403f63:
          cVar12 = (*pVVar27->methodPtr)(pSVar26,pVVar27->method);
          if (cVar12 == '\0') goto label_04404060;
          pSVar11 = pSVar26->klass;
          uVar6._0_1_ = (pSVar11->_2).rank;
          uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
          if ((ulong)uVar6 != 0) {
            pIVar10 = (pSVar11->_1).interfaceOffsets;
            lVar32 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IEnumerator) {
                pVVar27 = pSVar11->vtable + (*(int *)((long)&pIVar10->offset + lVar32) + 1);
                goto label_04403fe8;
              }
              lVar32 = lVar32 + 0x10;
            } while ((ulong)uVar6 << 4 != lVar32);
          }
          pVVar27 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar26,TypeInfo_IEnumerator,1);
label_04403fe8:
          pUVar28 = (UnityEngine_Component_o *)(*pVVar27->methodPtr)(pSVar26,pVVar27->method);
          if (pUVar28 == (UnityEngine_Component_o *)0x0) {
            pUVar28 = (UnityEngine_Component_o *)il2cpp_runtime_helper_022b2c90();
            goto label_0440421b;
          }
          bVar2 = (TypeInfo_Transform->_2).naturalAligment;
          if (((pUVar28->klass->_2).naturalAligment < bVar2) ||
             ((pUVar28->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) {
            pUVar28 = (UnityEngine_Component_o *)il2cpp_runtime_helper_022b2fd0(pUVar28);
            goto label_0440421b;
          }
          pIVar14 = UnityEngine_Component__GetComponent_object_(pUVar28,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar14 == (Il2CppObject *)0x0) {
            pUVar28 = (UnityEngine_Component_o *)il2cpp_runtime_helper_022b2c90();
            goto label_0440421b;
          }
          (*pIVar14->klass->vtable[0x24].methodPtr)
                    (in_stack_fffffffffffffef8,pIVar14,pIVar14->klass->vtable[0x24].method);
        } while( true );
      }
      il2cpp_runtime_helper_022b2c90();
      in_stack_ffffffffffffff30 = index;
    }
    goto label_04404244;
  }
label_044042ba:
  il2cpp_runtime_helper_022b2c90();
  pUVar37 = in_stack_ffffffffffffff28;
  index = in_stack_ffffffffffffff30;
label_044042bf:
  il2cpp_runtime_helper_022b2c90();
label_044042c4:
  il2cpp_runtime_helper_022b2c90();
  in_stack_ffffffffffffff28 = pUVar37;
label_044042c9:
  il2cpp_runtime_helper_022b2c90();
label_044042ce:
  il2cpp_runtime_helper_022b2c90();
label_044042d3:
  il2cpp_runtime_helper_022b2c90();
label_044042d8:
  il2cpp_runtime_helper_022b2c90();
label_044042dd:
  il2cpp_runtime_helper_022b2c90();
label_044042e2:
  il2cpp_runtime_helper_022b2c90();
label_044042e7:
  il2cpp_runtime_helper_022b2c90();
label_044042ec:
  il2cpp_runtime_helper_022b2c90();
label_044042f1:
  il2cpp_runtime_helper_022b2c90();
label_044042f6:
  il2cpp_runtime_helper_022b2c90();
label_044042fb:
  il2cpp_runtime_helper_022b2c90();
label_04404300:
  __this_03.fields._4_4_ = in_stack_fffffffffffffefc;
  __this_03.fields.type = (int32_t)in_stack_fffffffffffffef8;
  __this_03.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff00;
  __this_03.fields.m_Object.fields._version = in_stack_ffffffffffffff08;
  __this_03.fields.m_Object.fields._index = in_stack_ffffffffffffff0c;
  __this_03.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff10;
  __this_03.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff14;
  __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff18;
  __this_03.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20;
  __this_03.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff24;
  __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_03.fields.m_Array.fields._index = index;
  __this_03.fields.m_Array.fields._version = in_stack_ffffffffffffff34;
  __this_03.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)SVar42;
  SVar41 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_03,(MethodInfo *)&stack0xffffffffffffff38);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar41,(MethodInfo *)0x0);
  auVar40 = il2cpp_runtime_helper_022b2c90();
  if (auVar40._8_4_ != 1) {
    _Unwind_Resume(auVar40._0_8_);
  }
  puVar31 = (undefined8 *)__cxa_begin_catch(auVar40._0_8_);
  uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar12 = il2cpp_runtime_helper_0233e000(uVar23);
  if (cVar12 == '\0') {
    puVar33 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar33 = *puVar31;
    __cxa_throw(puVar33,&PTR_PTR_05215060,0);
  }
  pIVar14 = (Il2CppObject *)*puVar31;
  __cxa_end_catch();
  lVar32 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
  if (*(int *)(lVar32 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar32);
  }
  UnityEngine_Debug__Log(pIVar14,(MethodInfo *)0x0);
  pUVar19 = (in_stack_ffffffffffffff18->fields).SinglePanel;
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load leaderboard.");
label_044032fa:
  UI_ElementFactory__CreateDefaultLabel(pUVar19,in_stack_ffffffffffffff00,pSVar15,0,4,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel$$CreateRank
// il2cpp: void UI_LeaderboardDefaultPanel__CreateRank (UI_LeaderboardDefaultPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t rank, const MethodInfo* method);
// 0x44050c0

void UI_LeaderboardDefaultPanel__CreateRank
               (UI_LeaderboardDefaultPanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t rank,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Color_Fields UVar5;
  int32_t local_2c;
  
  local_2c = rank;
  if (g_data_057ae592 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Trophy");
    il2cpp_runtime_helper_023445d0(&"Rank");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/TrophyIcon");
    il2cpp_runtime_helper_023445d0(&"BadgeColor");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Badge1Icon");
    g_data_057ae592 = '\x01';
  }
  pSVar3 = (System_String_o *)parent;
  if (rank < 4) {
    pUVar1 = UI_ElementFactory__CreateRawImage(parent,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar2 = UnityEngine_GameObject__GetComponent_object_(pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar3 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
    pSVar4 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_3af7150("Trophy",pSVar4,"Color",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar5 = (UnityEngine_Color_Fields)
            UI_UIManager__GetThemeColor(pSVar3,"Rank",pSVar4,"DefaultPanel",(MethodInfo *)0x0);
  }
  else {
    if (10 < rank) goto label_044052e6;
    pUVar1 = UI_ElementFactory__CreateRawImage(parent,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar2 = UnityEngine_GameObject__GetComponent_object_(pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar3 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar5 = (UnityEngine_Color_Fields)
            UI_UIManager__GetThemeColor(pSVar3,"Rank","BadgeColor","DefaultPanel",(MethodInfo *)0x0);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
label_04405319:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  (*pIVar2->klass->vtable[0x17].methodPtr)(UVar5._0_8_,UVar5._8_8_,pIVar2);
label_044052e6:
  pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(parent,style,pSVar3,0,4,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel$$OnButtonClick
// il2cpp: void UI_LeaderboardDefaultPanel__OnButtonClick (UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4405330

void UI_LeaderboardDefaultPanel__OnButtonClick
               (UI_LeaderboardDefaultPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  return;
}


// UI.LeaderboardDefaultPanel$$GetCategoryNames
// il2cpp: System_String_array* UI_LeaderboardDefaultPanel__GetCategoryNames (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x4404b10

System_String_array *
UI_LeaderboardDefaultPanel__GetCategoryNames(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar6;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  UnityEngine_GameObject_o *pUVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_String_array *extraout_RAX;
  int iVar18;
  SimpleJSONFixed_JSONNode_c *pSVar19;
  UI_ElementStyle_o *style;
  long *plVar20;
  undefined8 *unaff_RBP;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  SimpleJSONFixed_JSONNode_o *unaff_R14;
  float fVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_02;
  int iStackY_1bc;
  System_String_o *pSStackY_1b8;
  SimpleJSONFixed_JSONNode_o *pSStackY_1b0;
  long *plStackY_1a8;
  SimpleJSONFixed_JSONNode_o *pSStackY_1a0;
  System_Collections_Generic_List_object__o *pSStackY_198;
  Il2CppMethodPointer pIVar24;
  InvokerMethod pIVar25;
  char *pcVar26;
  Il2CppClass *pIVar27;
  Il2CppType *pIVar28;
  Il2CppType **ppIVar29;
  _union_13 _Var30;
  _union_14 _Var31;
  SimpleJSONFixed_JSONNode_c *pSStack_140;
  Il2CppMethodPointer pIStack_138;
  InvokerMethod pIStack_130;
  char *pcStack_128;
  Il2CppClass *pIStack_120;
  Il2CppType *pIStack_118;
  Il2CppType **ppIStack_110;
  _union_13 _Stack_108;
  _union_14 _Stack_100;
  System_String_o *pSStack_f8;
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  long *plStack_e8;
  SimpleJSONFixed_JSONNode_o *pSStack_e0;
  System_Collections_Generic_List_object__o *pSStack_d8;
  undefined8 *puStack_d0;
  SimpleJSONFixed_JSONNode_c *local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ae593 == '\0') {
    puStack_d0 = (undefined8 *)0x4404b36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    puStack_d0 = (undefined8 *)0x4404b42;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_d0 = (undefined8 *)0x4404b4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_d0 = (undefined8 *)0x4404b5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_d0 = (undefined8 *)0x4404b66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_d0 = (undefined8 *)0x4404b72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    puStack_d0 = (undefined8 *)0x4404b7e;
    il2cpp_runtime_helper_023445d0(&"CategoryName");
    g_data_057ae593 = '\x01';
  }
  puStack_d0 = (undefined8 *)0x4404bb3;
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_d0 = (undefined8 *)0x4404bc8;
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_System_String);
  plVar20 = &TypeInfo_PastebinLoader;
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    puStack_d0 = (undefined8 *)0x4404be0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar3 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
  if (plVar3 == (long *)0x0) {
label_04404da2:
    aKeyValue_00.value = unaff_R14;
    aKeyValue_00.key = (System_String_o *)plVar20;
    puStack_d0 = (undefined8 *)0x4404da7;
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    puStack_d0 = (undefined8 *)0x4404c0b;
    (**(code **)(*plVar3 + 0x338))(&local_78,plVar3,*(undefined8 *)(*plVar3 + 0x340));
    puStack_d0 = (undefined8 *)0x4404c4c;
    __this_04.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_04.fields._0_8_ = local_78;
    __this_04.fields.m_Object.fields._8_8_ = local_68;
    __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this_04.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this_04.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_04.fields.m_Array.fields._current = local_38.genericMethod;
    bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar8 == '\0') {
      if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) goto label_04404d44;
      goto label_04404da2;
    }
    if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_RBP = &"CategoryName";
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar19 = local_78;
      pIVar24 = pIStack_70;
      pIVar25 = local_68;
      pcVar26 = pcStack_60;
      pIVar27 = local_58;
      pIVar28 = pIStack_50;
      ppIVar29 = local_48;
      _Var30 = _Stack_40;
      _Var31 = local_38;
      do {
        puStack_d0 = (undefined8 *)0x4404ca6;
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
        __this_06.fields._0_8_ = pSVar19;
        __this_06.fields.m_Object.fields._8_8_ = pIVar25;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_06.fields.m_Object.fields._32_8_ = pIVar28;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
        __this_06.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
        __this_06.fields.m_Array.fields._current = _Var31.genericMethod;
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R12 = aKeyValue.fields.value;
        plVar20 = (long *)aKeyValue.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          puStack_d0 = (undefined8 *)0x4404cc4;
          il2cpp_runtime_helper_02337ed0();
        }
        puStack_d0 = (undefined8 *)0x4404cd1;
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404da2;
        puStack_d0 = (undefined8 *)0x4404cf1;
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar10,"CategoryName",(pSVar10->klass->vtable)._7_get_Item.method);
        puStack_d0 = (undefined8 *)0x4404cfb;
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar10,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar9->fields)._items;
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        if (pSVar4 == (System_Object_array *)0x0) goto label_04404da2;
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar11;
          puStack_d0 = (undefined8 *)0x4404d3a;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar11);
        }
        else {
          puStack_d0 = (undefined8 *)0x4404c8a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar9,(Il2CppObject *)pSVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        puStack_d0 = (undefined8 *)0x4404c94;
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
        __this_05.fields._0_8_ = pSVar19;
        __this_05.fields.m_Object.fields._8_8_ = pIVar25;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_05.fields.m_Object.fields._32_8_ = pIVar28;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
        __this_05.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var31.genericMethod;
        bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
      } while ((char)bVar8 != '\0');
label_04404d44:
      puStack_d0 = (undefined8 *)0x4404d56;
      pSVar12 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar9,MethodInfo_String_ToArray);
      return pSVar12;
    }
    puStack_d0 = (undefined8 *)0x4404d72;
    __this_07.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_07.fields._0_8_ = local_78;
    __this_07.fields.m_Object.fields._8_8_ = local_68;
    __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this_07.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this_07.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_07.fields.m_Array.fields._current = local_38.genericMethod;
    aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_07,(MethodInfo *)&stack0xffffffffffffff38);
    unaff_R14 = aKeyValue_00.value;
    plVar20 = (long *)aKeyValue_00.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      puStack_d0 = (undefined8 *)0x4404d90;
      il2cpp_runtime_helper_02337ed0();
    }
    puStack_d0 = (undefined8 *)0x4404d9d;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                         (MethodInfo *)0x0);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404da2;
  }
  pSVar11 = aKeyValue_00.key;
  SVar6.value = unaff_R12;
  SVar6.key = pSVar11;
  SVar5.value = unaff_R12;
  SVar5.key = pSVar11;
  aKeyValue_01.value = unaff_R12;
  aKeyValue_01.key = pSVar11;
  puStack_d0 = (undefined8 *)0x4404dc4;
  pSVar13 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar10,"CategoryName",(pSVar10->klass->vtable)._7_get_Item.method);
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  puStack_d0 = (undefined8 *)0x4404dce;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar13,(MethodInfo *)0x0);
  puStack_d0 = (undefined8 *)0x4404dd3;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f0 = unaff_R12;
  plStack_e8 = unaff_R13;
  pSStack_d8 = pSVar9;
  puStack_d0 = unaff_RBP;
  if (g_data_057ae594 == '\0') {
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e09;
    pSStack_f8 = pSVar11;
    pSStack_e0 = aKeyValue_00.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e21;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e2d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e45;
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e51;
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    aKeyValue_00.value = pSStack_e0;
    aKeyValue_00.key = pSStack_f8;
    g_data_057ae594 = '\x01';
  }
  pSStack_e0 = aKeyValue_00.value;
  pSStack_f8 = aKeyValue_00.key;
  pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e86;
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404e9b;
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_System_String);
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04405082:
    unaff_R12 = aKeyValue_01.value;
    aKeyValue_02.value = pSVar10;
    aKeyValue_02.key = aKeyValue_01.key;
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4405087;
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404ec1;
    plVar20 = (long *)(*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar10,"Subcategories",(pSVar10->klass->vtable)._7_get_Item.method);
    aKeyValue_01 = SVar5;
    if (plVar20 == (long *)0x0) goto label_04405082;
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404ee2;
    (**(code **)(*plVar20 + 0x338))(&pSStack_140,plVar20,*(undefined8 *)(*plVar20 + 0x340));
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404f23;
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_138;
    __this_00.fields._0_8_ = pSStack_140;
    __this_00.fields.m_Object.fields._8_8_ = pIStack_130;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_128;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_120;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_118;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_110;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_108.rgctx_data;
    __this_00.fields.m_Array.fields._current = _Stack_100.genericMethod;
    bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffe70);
    if ((char)bVar8 == '\0') {
      aKeyValue_01 = SVar6;
      if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) goto label_04405024;
      goto label_04405082;
    }
    if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar19 = pSStack_140;
      pIVar24 = pIStack_138;
      pIVar25 = pIStack_130;
      pcVar26 = pcStack_128;
      pIVar27 = pIStack_120;
      pIVar28 = pIStack_118;
      ppIVar29 = ppIStack_110;
      _Var30 = _Stack_108;
      _Var31 = _Stack_100;
      do {
        pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404f86;
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
        __this_02.fields._0_8_ = pSVar19;
        __this_02.fields.m_Object.fields._8_8_ = pIVar25;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_02.fields.m_Object.fields._32_8_ = pIVar28;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
        __this_02.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Var31.genericMethod;
        aKeyValue_01 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_02,(MethodInfo *)&stack0xfffffffffffffe70);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404fa4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404fb1;
        pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_01,
                             (MethodInfo *)0x0);
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe70;
        if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
        pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404fd1;
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar13->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar13,"SubcategoryName",(pSVar13->klass->vtable)._7_get_Item.method);
        pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404fdb;
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar10,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar9->fields)._items;
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe70;
        if (pSVar4 == (System_Object_array *)0x0) goto label_04405082;
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar11;
          pSStackY_198 = (System_Collections_Generic_List_object__o *)0x440501a;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar11);
        }
        else {
          pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404f6a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar9,(Il2CppObject *)pSVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4404f74;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
        __this_01.fields._0_8_ = pSVar19;
        __this_01.fields.m_Object.fields._8_8_ = pIVar25;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_01.fields.m_Object.fields._32_8_ = pIVar28;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
        __this_01.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var31.genericMethod;
        bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_01,(MethodInfo *)&stack0xfffffffffffffe70);
      } while ((char)bVar8 != '\0');
label_04405024:
      pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4405036;
      pSVar12 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar9,MethodInfo_String_ToArray);
      return pSVar12;
    }
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4405052;
    __this_03.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_138;
    __this_03.fields._0_8_ = pSStack_140;
    __this_03.fields.m_Object.fields._8_8_ = pIStack_130;
    __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_128;
    __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_120;
    __this_03.fields.m_Object.fields._32_8_ = pIStack_118;
    __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_110;
    __this_03.fields.m_Array.fields._8_8_ = _Stack_108.rgctx_data;
    __this_03.fields.m_Array.fields._current = _Stack_100.genericMethod;
    aKeyValue_02 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_03,(MethodInfo *)&stack0xfffffffffffffe70);
    pSVar10 = aKeyValue_02.value;
    aKeyValue_01.key = aKeyValue_02.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStackY_198 = (System_Collections_Generic_List_object__o *)0x4405070;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_198 = (System_Collections_Generic_List_object__o *)0x440507d;
    pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_02,
                         (MethodInfo *)0x0);
    if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
  }
  pSVar19 = pSVar13->klass;
  pSStackY_198 = (System_Collections_Generic_List_object__o *)0x44050a4;
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar19->vtable)._7_get_Item.methodPtr)
                      (pSVar13,"SubcategoryName",(pSVar19->vtable)._7_get_Item.method);
  iVar18 = (int)pSVar19;
  pSVar11 = (System_String_o *)0x0;
  pSStackY_198 = (System_Collections_Generic_List_object__o *)0x44050ae;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar10,(MethodInfo *)0x0);
  pSStackY_198 = (System_Collections_Generic_List_object__o *)0x44050b3;
  il2cpp_runtime_helper_022b2c90();
  iStackY_1bc = iVar18;
  pSStackY_1b0 = unaff_R12;
  plStackY_1a8 = unaff_R13;
  pSStackY_198 = pSVar9;
  if (g_data_057ae592 == '\0') {
    pSStackY_1b8 = aKeyValue_02.key;
    pSStackY_1a0 = aKeyValue_02.value;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Trophy");
    il2cpp_runtime_helper_023445d0(&"Rank");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/TrophyIcon");
    il2cpp_runtime_helper_023445d0(&"BadgeColor");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Badge1Icon");
    aKeyValue_02.value = pSStackY_1a0;
    aKeyValue_02.key = pSStackY_1b8;
    g_data_057ae592 = '\x01';
  }
  pSStackY_1a0 = aKeyValue_02.value;
  pSStackY_1b8 = aKeyValue_02.key;
  pSVar16 = pSVar11;
  if (iVar18 < 4) {
    pUVar14 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar11,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar15 = UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar16 = (System_String_o *)(*(pSVar10->klass->vtable)._4_unknown.methodPtr)(pSVar10);
    pSVar17 = System_Int32__ToString((int32_t)&iStackY_1bc,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat_3af7150("Trophy",pSVar17,"Color",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar23 = UI_UIManager__GetThemeColor(pSVar16,"Rank",pSVar17,"DefaultPanel",(MethodInfo *)0x0);
    fVar22 = UVar23.fields.b;
    fVar21 = UVar23.fields.r;
  }
  else {
    if (10 < iVar18) goto label_044052e6;
    pUVar14 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar11,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar15 = UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar16 = (System_String_o *)
              (*(pSVar10->klass->vtable)._4_unknown.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._4_unknown.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar23 = UI_UIManager__GetThemeColor(pSVar16,"Rank","BadgeColor","DefaultPanel",(MethodInfo *)0x0);
    fVar22 = UVar23.fields.b;
    fVar21 = UVar23.fields.r;
  }
  if (pIVar15 == (Il2CppObject *)0x0) {
label_04405319:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  (*pIVar15->klass->vtable[0x17].methodPtr)(fVar21,fVar22,pIVar15);
  aKeyValue_02.value = pSStackY_1a0;
  aKeyValue_02.key = pSStackY_1b8;
label_044052e6:
  pSStackY_1a0 = aKeyValue_02.value;
  pSStackY_1b8 = aKeyValue_02.key;
  pSVar16 = System_Int32__ToString((int32_t)&iStackY_1bc,(MethodInfo *)0x0);
  pSVar12 = (System_String_array *)
            UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pSVar11,style,pSVar16,0,4,(MethodInfo *)0x0);
  return pSVar12;
}


// UI.LeaderboardDefaultPanel$$GetSubcategoryNames
// il2cpp: System_String_array* UI_LeaderboardDefaultPanel__GetSubcategoryNames (UI_LeaderboardDefaultPanel_o* __this, SimpleJSONFixed_JSONNode_o* category, const MethodInfo* method);
// 0x4404de0

System_String_array *
UI_LeaderboardDefaultPanel__GetSubcategoryNames
          (UI_LeaderboardDefaultPanel_o *__this,SimpleJSONFixed_JSONNode_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar6;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  System_String_array *extraout_RAX;
  int iVar17;
  SimpleJSONFixed_JSONNode_c *pSVar18;
  UI_ElementStyle_o *style;
  System_String_o *unaff_RBX;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  float fVar19;
  float fVar20;
  UnityEngine_Color_o UVar21;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  int iStackY_f4;
  System_String_o *pSStackY_f0;
  SimpleJSONFixed_JSONNode_o *pSStackY_e8;
  long *plStackY_e0;
  SimpleJSONFixed_JSONNode_o *pSStackY_d8;
  System_Collections_Generic_List_object__o *pSStackY_d0;
  Il2CppMethodPointer pIVar22;
  InvokerMethod pIVar23;
  char *pcVar24;
  Il2CppClass *pIVar25;
  Il2CppType *pIVar26;
  Il2CppType **ppIVar27;
  _union_13 _Var28;
  _union_14 _Var29;
  SimpleJSONFixed_JSONNode_c *local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  SVar6.value = category;
  SVar6.key = unaff_RBX;
  SVar4.value = category;
  SVar4.key = unaff_RBX;
  aKeyValue_00.value = category;
  aKeyValue_00.key = unaff_RBX;
  if (g_data_057ae594 == '\0') {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e09;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e21;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e2d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e45;
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e51;
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    g_data_057ae594 = '\x01';
  }
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e86;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404e9b;
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  if (category == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04405082:
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4405087;
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404ec1;
    plVar9 = (long *)(*(category->klass->vtable)._7_get_Item.methodPtr)
                               (category,"Subcategories",(category->klass->vtable)._7_get_Item.method);
    aKeyValue_00 = SVar4;
    if (plVar9 == (long *)0x0) goto label_04405082;
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404ee2;
    (**(code **)(*plVar9 + 0x338))(&local_78,plVar9,*(undefined8 *)(*plVar9 + 0x340));
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404f23;
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_00.fields._0_8_ = local_78;
    __this_00.fields.m_Object.fields._8_8_ = local_68;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_00.fields.m_Array.fields._current = local_38.genericMethod;
    bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar8 == '\0') {
      aKeyValue_00 = SVar6;
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto label_04405024;
      goto label_04405082;
    }
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar18 = local_78;
      pIVar22 = pIStack_70;
      pIVar23 = local_68;
      pcVar24 = pcStack_60;
      pIVar25 = local_58;
      pIVar26 = pIStack_50;
      ppIVar27 = local_48;
      _Var28 = _Stack_40;
      _Var29 = local_38;
      do {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404f86;
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar22;
        __this_02.fields._0_8_ = pSVar18;
        __this_02.fields.m_Object.fields._8_8_ = pIVar23;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar24;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
        __this_02.fields.m_Object.fields._32_8_ = pIVar26;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
        __this_02.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Var29.genericMethod;
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R12 = aKeyValue.fields.value;
        SVar5.value = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        SVar5.key = aKeyValue.fields.key;
        aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        aKeyValue_00.key = aKeyValue.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404fa4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404fb1;
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
        if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404fd1;
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar10,"SubcategoryName",(pSVar10->klass->vtable)._7_get_Item.method);
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404fdb;
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar10,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_04->fields)._items;
        aKeyValue_00 = SVar5;
        if (pSVar3 == (System_Object_array *)0x0) goto label_04405082;
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar11;
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x440501a;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar11);
        }
        else {
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404f6a;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_04,(Il2CppObject *)pSVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4404f74;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar22;
        __this_01.fields._0_8_ = pSVar18;
        __this_01.fields.m_Object.fields._8_8_ = pIVar23;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar24;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
        __this_01.fields.m_Object.fields._32_8_ = pIVar26;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
        __this_01.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var29.genericMethod;
        bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      } while ((char)bVar8 != '\0');
label_04405024:
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4405036;
      pSVar12 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
      return pSVar12;
    }
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4405052;
    __this_03.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_03.fields._0_8_ = local_78;
    __this_03.fields.m_Object.fields._8_8_ = local_68;
    __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this_03.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this_03.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_03.fields.m_Array.fields._current = local_38.genericMethod;
    aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x4405070;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x440507d;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                         (MethodInfo *)0x0);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
  }
  pSVar18 = pSVar10->klass;
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x44050a4;
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar18->vtable)._7_get_Item.methodPtr)
                      (pSVar10,"SubcategoryName",(pSVar18->vtable)._7_get_Item.method);
  iVar17 = (int)pSVar18;
  pSVar11 = (System_String_o *)0x0;
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x44050ae;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar10,(MethodInfo *)0x0);
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x44050b3;
  il2cpp_runtime_helper_022b2c90();
  iStackY_f4 = iVar17;
  pSStackY_e8 = unaff_R12;
  plStackY_e0 = unaff_R13;
  pSStackY_d0 = __this_04;
  if (g_data_057ae592 == '\0') {
    pSStackY_f0 = aKeyValue_00.key;
    pSStackY_d8 = aKeyValue_00.value;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Trophy");
    il2cpp_runtime_helper_023445d0(&"Rank");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/TrophyIcon");
    il2cpp_runtime_helper_023445d0(&"BadgeColor");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Badge1Icon");
    aKeyValue_00.value = pSStackY_d8;
    aKeyValue_00.key = pSStackY_f0;
    g_data_057ae592 = '\x01';
  }
  pSStackY_d8 = aKeyValue_00.value;
  pSStackY_f0 = aKeyValue_00.key;
  pSVar15 = pSVar11;
  if (iVar17 < 4) {
    pUVar13 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar11,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar14 = UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar15 = (System_String_o *)(*(pSVar10->klass->vtable)._4_unknown.methodPtr)(pSVar10);
    pSVar16 = System_Int32__ToString((int32_t)&iStackY_f4,(MethodInfo *)0x0);
    pSVar16 = System_String__Concat_3af7150("Trophy",pSVar16,"Color",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar21 = UI_UIManager__GetThemeColor(pSVar15,"Rank",pSVar16,"DefaultPanel",(MethodInfo *)0x0);
    fVar20 = UVar21.fields.b;
    fVar19 = UVar21.fields.r;
  }
  else {
    if (10 < iVar17) goto label_044052e6;
    pUVar13 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar11,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar14 = UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar15 = (System_String_o *)
              (*(pSVar10->klass->vtable)._4_unknown.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._4_unknown.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar21 = UI_UIManager__GetThemeColor(pSVar15,"Rank","BadgeColor","DefaultPanel",(MethodInfo *)0x0);
    fVar20 = UVar21.fields.b;
    fVar19 = UVar21.fields.r;
  }
  if (pIVar14 == (Il2CppObject *)0x0) {
label_04405319:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  (*pIVar14->klass->vtable[0x17].methodPtr)(fVar19,fVar20,pIVar14);
  aKeyValue_00.value = pSStackY_d8;
  aKeyValue_00.key = pSStackY_f0;
label_044052e6:
  pSStackY_d8 = aKeyValue_00.value;
  pSStackY_f0 = aKeyValue_00.key;
  pSVar15 = System_Int32__ToString((int32_t)&iStackY_f4,(MethodInfo *)0x0);
  pSVar12 = (System_String_array *)
            UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pSVar11,style,pSVar15,0,4,(MethodInfo *)0x0);
  return pSVar12;
}


// UI.LeaderboardDefaultPanel$$FindCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_LeaderboardDefaultPanel__FindCategory (UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4404740

SimpleJSONFixed_JSONNode_o *
UI_LeaderboardDefaultPanel__FindCategory
          (UI_LeaderboardDefaultPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  long *plVar2;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar6;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar7;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_12;
  long lVar8;
  char cVar9;
  bool_conflict bVar10;
  uint uVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  System_String_o *pSVar15;
  System_Object_array *pSVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  System_String_o *pSVar20;
  System_String_o *pSVar21;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  int iVar22;
  SimpleJSONFixed_JSONNode_c *pSVar23;
  Il2CppObject *extraout_RDX;
  UI_ElementStyle_o *style;
  long *plVar24;
  SimpleJSONFixed_JSONNode_o *unaff_RBP;
  System_String_o *unaff_R12;
  long *unaff_R13;
  MethodInfo *unaff_R15;
  float fVar25;
  float fVar26;
  UnityEngine_Color_o UVar27;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_02;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_03;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_04;
  int iStackY_35c;
  System_String_o *pSStackY_358;
  SimpleJSONFixed_JSONNode_o *pSStackY_350;
  long *plStackY_348;
  SimpleJSONFixed_JSONNode_o *pSStackY_340;
  System_Collections_Generic_List_object__o *pSStackY_338;
  Il2CppMethodPointer pIVar28;
  InvokerMethod pIVar29;
  char *pcVar30;
  Il2CppClass *pIVar31;
  Il2CppType *pIVar32;
  Il2CppType **ppIVar33;
  _union_13 _Var34;
  _union_14 _Var35;
  SimpleJSONFixed_JSONNode_c *pSStack_2e0;
  Il2CppMethodPointer pIStack_2d8;
  InvokerMethod pIStack_2d0;
  char *pcStack_2c8;
  Il2CppClass *pIStack_2c0;
  Il2CppType *pIStack_2b8;
  Il2CppType **ppIStack_2b0;
  _union_13 _Stack_2a8;
  _union_14 _Stack_2a0;
  System_String_o *pSStack_298;
  SimpleJSONFixed_JSONNode_o *pSStack_290;
  long *plStack_288;
  SimpleJSONFixed_JSONNode_o *pSStack_280;
  System_Collections_Generic_List_object__o *pSStack_278;
  SimpleJSONFixed_JSONNode_o *pSStack_270;
  System_String_c *pSVar36;
  System_String_Fields SVar37;
  System_String_c *pSStack_218;
  Il2CppMethodPointer pIStack_210;
  System_String_Fields SStack_208;
  char *pcStack_200;
  Il2CppClass *pIStack_1f8;
  Il2CppType *pIStack_1f0;
  Il2CppType **ppIStack_1e8;
  _union_13 _Stack_1e0;
  _union_14 _Stack_1d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SStack_1d0;
  long *plStack_1c0;
  System_String_o *pSStack_1b8;
  MethodInfo *pMStack_1b0;
  SimpleJSONFixed_JSONNode_o *pSStack_1a8;
  undefined8 in_stack_fffffffffffffe60;
  Il2CppMethodPointer pIVar38;
  Il2CppMethodPointer pIStack_140;
  Il2CppMethodPointer pIStack_138;
  InvokerMethod pIStack_130;
  char *pcStack_128;
  Il2CppClass *pIStack_120;
  Il2CppType *pIStack_118;
  SimpleJSONFixed_JSONNode_o *pSStack_110;
  System_String_o *pSStack_f8;
  System_String_o *pSStack_f0;
  long *plStack_e8;
  System_String_o *pSStack_e0;
  MethodInfo *pMStack_d8;
  SimpleJSONFixed_JSONNode_o *pSStack_d0;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ae595 == '\0') {
    pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x4404769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x4404775;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x4404781;
    il2cpp_runtime_helper_023445d0(&"CategoryName");
    g_data_057ae595 = '\x01';
  }
  plVar24 = &TypeInfo_PastebinLoader;
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x44047bf;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar2 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
  pSVar15 = (System_String_o *)0x0;
  if (plVar2 != (long *)0x0) {
    pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x44047ea;
    (**(code **)(*plVar2 + 0x338))(&local_78,plVar2,*(undefined8 *)(*plVar2 + 0x340));
    unaff_R13 = &TypeInfo_JSONNode;
    unaff_RBP = (SimpleJSONFixed_JSONNode_o *)&"CategoryName";
    pIVar28 = local_78;
    pIVar38 = pIStack_70;
    pIVar29 = local_68;
    pcVar30 = pcStack_60;
    pIVar31 = local_58;
    pIVar32 = pIStack_50;
    ppIVar33 = local_48;
    _Var34 = _Stack_40;
    _Var35 = local_38;
    while( true ) {
      pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x440484a;
      __this_11.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar38;
      __this_11.fields._0_8_ = pIVar28;
      __this_11.fields.m_Object.fields._8_8_ = pIVar29;
      __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
      __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
      __this_11.fields.m_Object.fields._32_8_ = pIVar32;
      __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
      __this_11.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
      __this_11.fields.m_Array.fields._current = _Var35.genericMethod;
      bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_11,(MethodInfo *)&stack0xffffffffffffff38)
      ;
      if ((char)bVar10 == '\0') {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x440485d;
      __this_12.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar38;
      __this_12.fields._0_8_ = pIVar28;
      __this_12.fields.m_Object.fields._8_8_ = pIVar29;
      __this_12.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
      __this_12.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
      __this_12.fields.m_Object.fields._32_8_ = pIVar32;
      __this_12.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
      __this_12.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
      __this_12.fields.m_Array.fields._current = _Var35.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_12,(MethodInfo *)&stack0xffffffffffffff38);
      unaff_R12 = (System_String_o *)aKeyValue.fields.value;
      plVar24 = (long *)aKeyValue.fields.key;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x4404875;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x4404882;
      pSVar15 = unaff_R12;
      pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
      unaff_R15 = (MethodInfo *)&stack0xffffffffffffff38;
      if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x44048a1;
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar12,"CategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
      pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x44048ae;
      bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar13,(Il2CppObject *)name,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return pSVar12;
      }
    }
  }
  pSStack_d0 = (SimpleJSONFixed_JSONNode_o *)0x44048cc;
  il2cpp_runtime_helper_022b2c90();
  SVar7.value = (SimpleJSONFixed_JSONNode_o *)unaff_R12;
  SVar7.key = pSVar15;
  SVar6.value = (SimpleJSONFixed_JSONNode_o *)unaff_R12;
  SVar6.key = pSVar15;
  aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)unaff_R12;
  aKeyValue_00.key = pSVar15;
  pIVar19 = extraout_RDX;
  pSStack_f8 = (System_String_o *)plVar24;
  pSStack_f0 = unaff_R12;
  plStack_e8 = unaff_R13;
  pSStack_e0 = name;
  pMStack_d8 = unaff_R15;
  pSStack_d0 = unaff_RBP;
  if (g_data_057ae596 == '\0') {
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x44048fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x440490a;
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404916;
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    g_data_057ae596 = '\x01';
  }
  if (pSVar15 != (System_String_o *)0x0) {
    name = (System_String_o *)&"Subcategories";
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404963;
    plVar24 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar15->klass)->vtable)._7_get_Item.methodPtr)
                                (pSVar15,"Subcategories",
                                 (((SimpleJSONFixed_JSONNode_c *)pSVar15->klass)->vtable)._7_get_Item.method);
    aKeyValue_00 = SVar6;
    if (plVar24 != (long *)0x0) {
      pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x440497f;
      uVar11 = (**(code **)(*plVar24 + 0x1e8))(plVar24,*(undefined8 *)(*plVar24 + 0x1f0));
      unaff_RBP = (SimpleJSONFixed_JSONNode_o *)(ulong)uVar11;
      pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404997;
      plVar24 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar15->klass)->vtable)._7_get_Item.methodPtr)
                                  (pSVar15,"Subcategories",
                                   (((SimpleJSONFixed_JSONNode_c *)pSVar15->klass)->vtable)._7_get_Item.method
                                  );
      aKeyValue_00 = SVar7;
      if (plVar24 != (long *)0x0) {
        if (uVar11 == 1) {
          pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x44049ba;
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                    (**(code **)(*plVar24 + 0x188))(plVar24,0,*(undefined8 *)(*plVar24 + 400));
        }
        else {
          pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x44049da;
          (**(code **)(*plVar24 + 0x338))(&pIStack_140,plVar24,*(undefined8 *)(*plVar24 + 0x340));
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)0x0;
          pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404a23;
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
          __this_08.fields._0_8_ = in_stack_fffffffffffffe60;
          __this_08.fields.m_Object.fields._8_8_ = pIStack_140;
          __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_138;
          __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_130;
          __this_08.fields.m_Object.fields._32_8_ = pcStack_128;
          __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_120;
          __this_08.fields.m_Array.fields._8_8_ = pIStack_118;
          __this_08.fields.m_Array.fields._current = pSStack_110;
          bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_08,(MethodInfo *)&stack0xfffffffffffffe70);
          if ((char)bVar10 != '\0') {
            unaff_R15 = (MethodInfo *)&stack0xfffffffffffffe70;
            unaff_R13 = &TypeInfo_JSONNode;
            name = (System_String_o *)&"SubcategoryName";
            pIVar28 = pIStack_140;
            pIVar38 = pIStack_138;
            pIVar29 = pIStack_130;
            pcVar30 = pcStack_128;
            pIVar31 = pIStack_120;
            pIVar32 = pIStack_118;
            pSVar13 = pSStack_110;
            do {
              pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404a78;
              __this_10.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
              __this_10.fields._0_8_ = in_stack_fffffffffffffe60;
              __this_10.fields.m_Object.fields._8_8_ = pIVar28;
              __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar38;
              __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar29;
              __this_10.fields.m_Object.fields._32_8_ = pcVar30;
              __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
              __this_10.fields.m_Array.fields._8_8_ = pIVar32;
              __this_10.fields.m_Array.fields._current = pSVar13;
              aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                             SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_10,unaff_R15);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404a90;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404a9d;
              pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                                  ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                                   (MethodInfo *)0x0);
              if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404b08;
              pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404abb;
              cVar9 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar12,"SubcategoryName",(pSVar12->klass->vtable)._28_HasKey.method);
              if (cVar9 != '\0') {
                pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404ad5;
                unaff_RBP = (SimpleJSONFixed_JSONNode_o *)
                            (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar12,"SubcategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404aee;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404a4f;
                bVar10 = SimpleJSONFixed_JSONNode__op_Equality(unaff_RBP,pIVar19,(MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  return pSVar12;
                }
              }
              pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404a61;
              __this_09.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
              __this_09.fields._0_8_ = in_stack_fffffffffffffe60;
              __this_09.fields.m_Object.fields._8_8_ = pIVar28;
              __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar38;
              __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar29;
              __this_09.fields.m_Object.fields._32_8_ = pcVar30;
              __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
              __this_09.fields.m_Array.fields._8_8_ = pIVar32;
              __this_09.fields.m_Array.fields._current = pSVar13;
              bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_09,unaff_R15);
              pSVar12 = (SimpleJSONFixed_JSONNode_o *)0x0;
            } while ((char)bVar10 != '\0');
          }
        }
        return pSVar12;
      }
    }
  }
label_04404b08:
  pSVar12 = aKeyValue_00.value;
  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b0d;
  il2cpp_runtime_helper_022b2c90();
  SStack_1d0 = aKeyValue_00;
  plStack_1c0 = unaff_R13;
  pSStack_1b8 = name;
  pMStack_1b0 = unaff_R15;
  pSStack_1a8 = unaff_RBP;
  if (g_data_057ae593 == '\0') {
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b42;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404b7e;
    il2cpp_runtime_helper_023445d0(&"CategoryName");
    g_data_057ae593 = '\x01';
  }
  pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404bb3;
  pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404bc8;
  System_Collections_Generic_List_object____ctor(pSVar14,MethodInfo_List_1_System_String);
  SVar3.value = pSVar12;
  SVar3.key = (System_String_o *)&TypeInfo_PastebinLoader;
  aKeyValue_01.value = pSVar12;
  aKeyValue_01.key = (System_String_o *)&TypeInfo_PastebinLoader;
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404be0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar24 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
  if (plVar24 == (long *)0x0) {
label_04404da2:
    pSVar12 = aKeyValue_01.value;
    aKeyValue_02.value = (SimpleJSONFixed_JSONNode_o *)name;
    aKeyValue_02.key = aKeyValue_01.key;
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404da7;
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404c0b;
    (**(code **)(*plVar24 + 0x338))(&pSStack_218,plVar24,*(undefined8 *)(*plVar24 + 0x340));
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404c4c;
    __this_04.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_210;
    __this_04.fields._0_8_ = pSStack_218;
    __this_04.fields.m_Object.fields._8_8_ = SStack_208;
    __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_200;
    __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1f8;
    __this_04.fields.m_Object.fields._32_8_ = pIStack_1f0;
    __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_1e8;
    __this_04.fields.m_Array.fields._8_8_ = _Stack_1e0.rgctx_data;
    __this_04.fields.m_Array.fields._current = _Stack_1d8.genericMethod;
    bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)&stack0xfffffffffffffd98);
    if ((char)bVar10 == '\0') {
      aKeyValue_01 = SVar3;
      if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) goto label_04404d44;
      goto label_04404da2;
    }
    if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_RBP = (SimpleJSONFixed_JSONNode_o *)&"CategoryName";
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar36 = pSStack_218;
      pIVar28 = pIStack_210;
      SVar37 = SStack_208;
      pcVar30 = pcStack_200;
      pIVar31 = pIStack_1f8;
      pIVar32 = pIStack_1f0;
      ppIVar33 = ppIStack_1e8;
      _Var34 = _Stack_1e0;
      _Var35 = _Stack_1d8;
      do {
        pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404ca6;
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar28;
        __this_06.fields._0_8_ = pSVar36;
        __this_06.fields.m_Object.fields._8_8_ = SVar37;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
        __this_06.fields.m_Object.fields._32_8_ = pIVar32;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
        __this_06.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
        __this_06.fields.m_Array.fields._current = _Var35.genericMethod;
        aKeyValue_01 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_06,(MethodInfo *)&stack0xfffffffffffffd98);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404cc4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404cd1;
        pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_01,
                             (MethodInfo *)0x0);
        name = (System_String_o *)&stack0xfffffffffffffd98;
        if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404da2;
        pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404cf1;
        pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar12,"CategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
        pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404cfb;
        pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar12,(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        piVar1 = &(pSVar14->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar16 = (pSVar14->fields)._items;
        name = (System_String_o *)&stack0xfffffffffffffd98;
        if (pSVar16 == (System_Object_array *)0x0) goto label_04404da2;
        uVar11 = (pSVar14->fields)._size;
        if (uVar11 < (uint)pSVar16->max_length) {
          (pSVar14->fields)._size = uVar11 + 1;
          pSVar16->m_Items[(int)uVar11] = (Il2CppObject *)pSVar15;
          pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404d3a;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + (int)uVar11,pSVar15);
        }
        else {
          pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404c8a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar14,(Il2CppObject *)pSVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404c94;
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar28;
        __this_05.fields._0_8_ = pSVar36;
        __this_05.fields.m_Object.fields._8_8_ = SVar37;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
        __this_05.fields.m_Object.fields._32_8_ = pIVar32;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
        __this_05.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var35.genericMethod;
        bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_05,(MethodInfo *)&stack0xfffffffffffffd98);
      } while ((char)bVar10 != '\0');
label_04404d44:
      pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404d56;
      pSVar16 = System_Collections_Generic_List_object___ToArray(pSVar14,MethodInfo_String_ToArray);
      return (SimpleJSONFixed_JSONNode_o *)pSVar16;
    }
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404d72;
    __this_07.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_210;
    __this_07.fields._0_8_ = pSStack_218;
    __this_07.fields.m_Object.fields._8_8_ = SStack_208;
    __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_200;
    __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1f8;
    __this_07.fields.m_Object.fields._32_8_ = pIStack_1f0;
    __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_1e8;
    __this_07.fields.m_Array.fields._8_8_ = _Stack_1e0.rgctx_data;
    __this_07.fields.m_Array.fields._current = _Stack_1d8.genericMethod;
    aKeyValue_02 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_07,(MethodInfo *)&stack0xfffffffffffffd98);
    name = (System_String_o *)aKeyValue_02.value;
    aKeyValue_01.key = aKeyValue_02.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404d90;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404d9d;
    pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_02,
                         (MethodInfo *)0x0);
    if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404da2;
  }
  pSVar15 = aKeyValue_02.key;
  SVar5.value = pSVar12;
  SVar5.key = pSVar15;
  SVar4.value = pSVar12;
  SVar4.key = pSVar15;
  aKeyValue_03.value = pSVar12;
  aKeyValue_03.key = pSVar15;
  pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404dc4;
  pSVar17 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar13->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar13,"CategoryName",(pSVar13->klass->vtable)._7_get_Item.method);
  pSVar13 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404dce;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar17,(MethodInfo *)0x0);
  pSStack_270 = (SimpleJSONFixed_JSONNode_o *)0x4404dd3;
  il2cpp_runtime_helper_022b2c90();
  pSStack_290 = pSVar12;
  plStack_288 = unaff_R13;
  pSStack_278 = pSVar14;
  pSStack_270 = unaff_RBP;
  if (g_data_057ae594 == '\0') {
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e09;
    pSStack_298 = pSVar15;
    pSStack_280 = aKeyValue_02.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e21;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e2d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e45;
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e51;
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    aKeyValue_02.value = pSStack_280;
    aKeyValue_02.key = pSStack_298;
    g_data_057ae594 = '\x01';
  }
  pSStack_280 = aKeyValue_02.value;
  pSStack_298 = aKeyValue_02.key;
  pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e86;
  pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404e9b;
  System_Collections_Generic_List_object____ctor(pSVar14,MethodInfo_List_1_System_String);
  if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04405082:
    pSVar12 = aKeyValue_03.value;
    aKeyValue_04.value = pSVar13;
    aKeyValue_04.key = aKeyValue_03.key;
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4405087;
    pSVar17 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404ec1;
    plVar24 = (long *)(*(pSVar13->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar13,"Subcategories",(pSVar13->klass->vtable)._7_get_Item.method);
    aKeyValue_03 = SVar4;
    if (plVar24 == (long *)0x0) goto label_04405082;
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404ee2;
    (**(code **)(*plVar24 + 0x338))(&pSStack_2e0,plVar24,*(undefined8 *)(*plVar24 + 0x340));
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404f23;
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_2d8;
    __this_00.fields._0_8_ = pSStack_2e0;
    __this_00.fields.m_Object.fields._8_8_ = pIStack_2d0;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_2c8;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_2c0;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_2b8;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_2b0;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_2a8.rgctx_data;
    __this_00.fields.m_Array.fields._current = _Stack_2a0.genericMethod;
    bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffcd0);
    if ((char)bVar10 == '\0') {
      aKeyValue_03 = SVar5;
      if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) goto label_04405024;
      goto label_04405082;
    }
    if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar23 = pSStack_2e0;
      pIVar28 = pIStack_2d8;
      pIVar29 = pIStack_2d0;
      pcVar30 = pcStack_2c8;
      pIVar31 = pIStack_2c0;
      pIVar32 = pIStack_2b8;
      ppIVar33 = ppIStack_2b0;
      _Var34 = _Stack_2a8;
      _Var35 = _Stack_2a0;
      do {
        pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404f86;
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar28;
        __this_02.fields._0_8_ = pSVar23;
        __this_02.fields.m_Object.fields._8_8_ = pIVar29;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
        __this_02.fields.m_Object.fields._32_8_ = pIVar32;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
        __this_02.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Var35.genericMethod;
        aKeyValue_03 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_02,(MethodInfo *)&stack0xfffffffffffffcd0);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404fa4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404fb1;
        pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_03,
                             (MethodInfo *)0x0);
        pSVar13 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffcd0;
        if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
        pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404fd1;
        pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar12,"SubcategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
        pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404fdb;
        pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar12,(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        piVar1 = &(pSVar14->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar16 = (pSVar14->fields)._items;
        pSVar13 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffcd0;
        if (pSVar16 == (System_Object_array *)0x0) goto label_04405082;
        uVar11 = (pSVar14->fields)._size;
        if (uVar11 < (uint)pSVar16->max_length) {
          (pSVar14->fields)._size = uVar11 + 1;
          pSVar16->m_Items[(int)uVar11] = (Il2CppObject *)pSVar15;
          pSStackY_338 = (System_Collections_Generic_List_object__o *)0x440501a;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + (int)uVar11,pSVar15);
        }
        else {
          pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404f6a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar14,(Il2CppObject *)pSVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4404f74;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar28;
        __this_01.fields._0_8_ = pSVar23;
        __this_01.fields.m_Object.fields._8_8_ = pIVar29;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
        __this_01.fields.m_Object.fields._32_8_ = pIVar32;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
        __this_01.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var35.genericMethod;
        bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffcd0);
      } while ((char)bVar10 != '\0');
label_04405024:
      pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4405036;
      pSVar16 = System_Collections_Generic_List_object___ToArray(pSVar14,MethodInfo_String_ToArray);
      return (SimpleJSONFixed_JSONNode_o *)pSVar16;
    }
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4405052;
    __this_03.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_2d8;
    __this_03.fields._0_8_ = pSStack_2e0;
    __this_03.fields.m_Object.fields._8_8_ = pIStack_2d0;
    __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_2c8;
    __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_2c0;
    __this_03.fields.m_Object.fields._32_8_ = pIStack_2b8;
    __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_2b0;
    __this_03.fields.m_Array.fields._8_8_ = _Stack_2a8.rgctx_data;
    __this_03.fields.m_Array.fields._current = _Stack_2a0.genericMethod;
    aKeyValue_04 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_03,(MethodInfo *)&stack0xfffffffffffffcd0);
    pSVar13 = aKeyValue_04.value;
    aKeyValue_03.key = aKeyValue_04.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStackY_338 = (System_Collections_Generic_List_object__o *)0x4405070;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_338 = (System_Collections_Generic_List_object__o *)0x440507d;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_04,
                         (MethodInfo *)0x0);
    if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
  }
  pSVar23 = pSVar17->klass;
  pSStackY_338 = (System_Collections_Generic_List_object__o *)0x44050a4;
  pSVar13 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar23->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"SubcategoryName",(pSVar23->vtable)._7_get_Item.method);
  iVar22 = (int)pSVar23;
  pSVar15 = (System_String_o *)0x0;
  pSStackY_338 = (System_Collections_Generic_List_object__o *)0x44050ae;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar13,(MethodInfo *)0x0);
  pSStackY_338 = (System_Collections_Generic_List_object__o *)0x44050b3;
  il2cpp_runtime_helper_022b2c90();
  iStackY_35c = iVar22;
  pSStackY_350 = pSVar12;
  plStackY_348 = unaff_R13;
  pSStackY_338 = pSVar14;
  if (g_data_057ae592 == '\0') {
    pSStackY_358 = aKeyValue_04.key;
    pSStackY_340 = aKeyValue_04.value;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Trophy");
    il2cpp_runtime_helper_023445d0(&"Rank");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/TrophyIcon");
    il2cpp_runtime_helper_023445d0(&"BadgeColor");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Badge1Icon");
    aKeyValue_04.value = pSStackY_340;
    aKeyValue_04.key = pSStackY_358;
    g_data_057ae592 = '\x01';
  }
  pSStackY_340 = aKeyValue_04.value;
  pSStackY_358 = aKeyValue_04.key;
  pSVar20 = pSVar15;
  if (iVar22 < 4) {
    pUVar18 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar15,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar20 = (System_String_o *)(*(pSVar13->klass->vtable)._4_unknown.methodPtr)(pSVar13);
    pSVar21 = System_Int32__ToString((int32_t)&iStackY_35c,(MethodInfo *)0x0);
    pSVar21 = System_String__Concat_3af7150("Trophy",pSVar21,"Color",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar27 = UI_UIManager__GetThemeColor(pSVar20,"Rank",pSVar21,"DefaultPanel",(MethodInfo *)0x0);
    fVar26 = UVar27.fields.b;
    fVar25 = UVar27.fields.r;
  }
  else {
    if (10 < iVar22) goto label_044052e6;
    pUVar18 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar15,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar20 = (System_String_o *)
              (*(pSVar13->klass->vtable)._4_unknown.methodPtr)
                        (pSVar13,(pSVar13->klass->vtable)._4_unknown.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar27 = UI_UIManager__GetThemeColor(pSVar20,"Rank","BadgeColor","DefaultPanel",(MethodInfo *)0x0);
    fVar26 = UVar27.fields.b;
    fVar25 = UVar27.fields.r;
  }
  if (pIVar19 == (Il2CppObject *)0x0) {
label_04405319:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  (*pIVar19->klass->vtable[0x17].methodPtr)(fVar25,fVar26,pIVar19);
  aKeyValue_04.value = pSStackY_340;
  aKeyValue_04.key = pSStackY_358;
label_044052e6:
  pSStackY_340 = aKeyValue_04.value;
  pSStackY_358 = aKeyValue_04.key;
  pSVar20 = System_Int32__ToString((int32_t)&iStackY_35c,(MethodInfo *)0x0);
  pUVar18 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pSVar15,style,pSVar20,0,4,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)pUVar18;
}


// UI.LeaderboardDefaultPanel$$FindSubcategory
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_LeaderboardDefaultPanel__FindSubcategory (UI_LeaderboardDefaultPanel_o* __this, SimpleJSONFixed_JSONNode_o* category, System_String_o* subcategoryName, const MethodInfo* method);
// 0x44048d0

SimpleJSONFixed_JSONNode_o *
UI_LeaderboardDefaultPanel__FindSubcategory
          (UI_LeaderboardDefaultPanel_o *__this,SimpleJSONFixed_JSONNode_o *category,
          System_String_o *subcategoryName,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar2;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar6;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  long lVar7;
  char cVar8;
  uint uVar9;
  bool_conflict bVar10;
  long *plVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  System_String_o *pSVar14;
  System_Object_array *pSVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  System_String_o *pSVar20;
  System_String_o *pSVar21;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  int iVar22;
  SimpleJSONFixed_JSONNode_c *pSVar23;
  UI_ElementStyle_o *style;
  SimpleJSONFixed_JSONNode_o *unaff_RBP;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  SimpleJSONFixed_JSONNode_o *unaff_R14;
  MethodInfo *unaff_R15;
  float fVar24;
  float fVar25;
  UnityEngine_Color_o UVar26;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_02;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_03;
  int iStackY_294;
  System_String_o *pSStackY_290;
  SimpleJSONFixed_JSONNode_o *pSStackY_288;
  long *plStackY_280;
  SimpleJSONFixed_JSONNode_o *pSStackY_278;
  System_Collections_Generic_List_object__o *pSStackY_270;
  Il2CppMethodPointer pIVar27;
  InvokerMethod pIVar28;
  char *pcVar29;
  Il2CppClass *pIVar30;
  Il2CppType *pIVar31;
  Il2CppType **ppIVar32;
  _union_13 _Var33;
  _union_14 _Var34;
  SimpleJSONFixed_JSONNode_c *pSStack_218;
  Il2CppMethodPointer pIStack_210;
  InvokerMethod pIStack_208;
  char *pcStack_200;
  Il2CppClass *pIStack_1f8;
  Il2CppType *pIStack_1f0;
  Il2CppType **ppIStack_1e8;
  _union_13 _Stack_1e0;
  _union_14 _Stack_1d8;
  System_String_o *pSStack_1d0;
  SimpleJSONFixed_JSONNode_o *pSStack_1c8;
  long *plStack_1c0;
  SimpleJSONFixed_JSONNode_o *pSStack_1b8;
  System_Collections_Generic_List_object__o *pSStack_1b0;
  SimpleJSONFixed_JSONNode_o *pSStack_1a8;
  SimpleJSONFixed_JSONNode_c *pSStack_150;
  Il2CppMethodPointer pIStack_148;
  InvokerMethod pIStack_140;
  char *pcStack_138;
  Il2CppClass *pIStack_130;
  Il2CppType *pIStack_128;
  Il2CppType **ppIStack_120;
  _union_13 _Stack_118;
  _union_14 _Stack_110;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SStack_108;
  long *plStack_f8;
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  MethodInfo *pMStack_e8;
  SimpleJSONFixed_JSONNode_o *pSStack_e0;
  undefined8 in_stack_ffffffffffffff28;
  Il2CppMethodPointer pIVar35;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  SVar6.value = unaff_R12;
  SVar6.key = (System_String_o *)category;
  SVar5.value = unaff_R12;
  SVar5.key = (System_String_o *)category;
  aKeyValue.value = unaff_R12;
  aKeyValue.key = (System_String_o *)category;
  if (g_data_057ae596 == '\0') {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x44048fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x440490a;
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404916;
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    g_data_057ae596 = '\x01';
  }
  if (category != (SimpleJSONFixed_JSONNode_o *)0x0) {
    unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&"Subcategories";
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404963;
    plVar11 = (long *)(*(category->klass->vtable)._7_get_Item.methodPtr)
                                (category,"Subcategories",(category->klass->vtable)._7_get_Item.method);
    aKeyValue = SVar5;
    if (plVar11 != (long *)0x0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x440497f;
      uVar9 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
      unaff_RBP = (SimpleJSONFixed_JSONNode_o *)(ulong)uVar9;
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404997;
      plVar11 = (long *)(*(category->klass->vtable)._7_get_Item.methodPtr)
                                  (category,"Subcategories",(category->klass->vtable)._7_get_Item.method);
      aKeyValue = SVar6;
      if (plVar11 != (long *)0x0) {
        if (uVar9 == 1) {
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x44049ba;
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                    (**(code **)(*plVar11 + 0x188))(plVar11,0,*(undefined8 *)(*plVar11 + 400));
        }
        else {
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x44049da;
          (**(code **)(*plVar11 + 0x338))(&local_78,plVar11,*(undefined8 *)(*plVar11 + 0x340));
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)0x0;
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404a23;
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)subcategoryName;
          __this_08.fields._0_8_ = in_stack_ffffffffffffff28;
          __this_08.fields.m_Object.fields._8_8_ = local_78;
          __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
          __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
          __this_08.fields.m_Object.fields._32_8_ = pcStack_60;
          __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
          __this_08.fields.m_Array.fields._8_8_ = pIStack_50;
          __this_08.fields.m_Array.fields._current = local_48;
          bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_08,(MethodInfo *)&stack0xffffffffffffff38);
          if ((char)bVar10 != '\0') {
            unaff_R15 = (MethodInfo *)&stack0xffffffffffffff38;
            unaff_R13 = &TypeInfo_JSONNode;
            unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&"SubcategoryName";
            pIVar27 = local_78;
            pIVar35 = pIStack_70;
            pIVar28 = local_68;
            pcVar29 = pcStack_60;
            pIVar30 = local_58;
            pIVar31 = pIStack_50;
            pSVar16 = local_48;
            do {
              pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404a78;
              __this_10.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)subcategoryName;
              __this_10.fields._0_8_ = in_stack_ffffffffffffff28;
              __this_10.fields.m_Object.fields._8_8_ = pIVar27;
              __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar35;
              __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar28;
              __this_10.fields.m_Object.fields._32_8_ = pcVar29;
              __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar30;
              __this_10.fields.m_Array.fields._8_8_ = pIVar31;
              __this_10.fields.m_Array.fields._current = pSVar16;
              aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                          SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_10,unaff_R15);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404a90;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404a9d;
              pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                                  ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                                   (MethodInfo *)0x0);
              if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404b08;
              pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404abb;
              cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar12,"SubcategoryName",(pSVar12->klass->vtable)._28_HasKey.method);
              if (cVar8 != '\0') {
                pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404ad5;
                unaff_RBP = (SimpleJSONFixed_JSONNode_o *)
                            (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar12,"SubcategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404aee;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404a4f;
                bVar10 = SimpleJSONFixed_JSONNode__op_Equality
                                   (unaff_RBP,(Il2CppObject *)subcategoryName,(MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  return pSVar12;
                }
              }
              pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404a61;
              __this_09.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)subcategoryName;
              __this_09.fields._0_8_ = in_stack_ffffffffffffff28;
              __this_09.fields.m_Object.fields._8_8_ = pIVar27;
              __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar35;
              __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar28;
              __this_09.fields.m_Object.fields._32_8_ = pcVar29;
              __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar30;
              __this_09.fields.m_Array.fields._8_8_ = pIVar31;
              __this_09.fields.m_Array.fields._current = pSVar16;
              bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_09,unaff_R15);
              pSVar12 = (SimpleJSONFixed_JSONNode_o *)0x0;
            } while ((char)bVar10 != '\0');
          }
        }
        return pSVar12;
      }
    }
  }
label_04404b08:
  pSVar12 = aKeyValue.value;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x4404b0d;
  il2cpp_runtime_helper_022b2c90();
  SStack_108 = aKeyValue;
  plStack_f8 = unaff_R13;
  pSStack_f0 = unaff_R14;
  pMStack_e8 = unaff_R15;
  pSStack_e0 = unaff_RBP;
  if (g_data_057ae593 == '\0') {
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b42;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404b7e;
    il2cpp_runtime_helper_023445d0(&"CategoryName");
    g_data_057ae593 = '\x01';
  }
  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404bb3;
  pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404bc8;
  System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_System_String);
  SVar2.value = pSVar12;
  SVar2.key = (System_String_o *)&TypeInfo_PastebinLoader;
  aKeyValue_00.value = pSVar12;
  aKeyValue_00.key = (System_String_o *)&TypeInfo_PastebinLoader;
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404be0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar11 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
  if (plVar11 == (long *)0x0) {
label_04404da2:
    pSVar12 = aKeyValue_00.value;
    aKeyValue_01.value = unaff_R14;
    aKeyValue_01.key = aKeyValue_00.key;
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404da7;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404c0b;
    (**(code **)(*plVar11 + 0x338))(&pSStack_150,plVar11,*(undefined8 *)(*plVar11 + 0x340));
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404c4c;
    __this_04.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_148;
    __this_04.fields._0_8_ = pSStack_150;
    __this_04.fields.m_Object.fields._8_8_ = pIStack_140;
    __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_138;
    __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_130;
    __this_04.fields.m_Object.fields._32_8_ = pIStack_128;
    __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_120;
    __this_04.fields.m_Array.fields._8_8_ = _Stack_118.rgctx_data;
    __this_04.fields.m_Array.fields._current = _Stack_110.genericMethod;
    bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)&stack0xfffffffffffffe60);
    if ((char)bVar10 == '\0') {
      aKeyValue_00 = SVar2;
      if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) goto label_04404d44;
      goto label_04404da2;
    }
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_RBP = (SimpleJSONFixed_JSONNode_o *)&"CategoryName";
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar23 = pSStack_150;
      pIVar27 = pIStack_148;
      pIVar28 = pIStack_140;
      pcVar29 = pcStack_138;
      pIVar30 = pIStack_130;
      pIVar31 = pIStack_128;
      ppIVar32 = ppIStack_120;
      _Var33 = _Stack_118;
      _Var34 = _Stack_110;
      do {
        pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404ca6;
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
        __this_06.fields._0_8_ = pSVar23;
        __this_06.fields.m_Object.fields._8_8_ = pIVar28;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_06.fields.m_Object.fields._32_8_ = pIVar31;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
        __this_06.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
        __this_06.fields.m_Array.fields._current = _Var34.genericMethod;
        aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_06,(MethodInfo *)&stack0xfffffffffffffe60);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404cc4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404cd1;
        pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                             (MethodInfo *)0x0);
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe60;
        if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404da2;
        pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404cf1;
        pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar12,"CategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
        pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404cfb;
        pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar12,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar13->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar15 = (pSVar13->fields)._items;
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe60;
        if (pSVar15 == (System_Object_array *)0x0) goto label_04404da2;
        uVar9 = (pSVar13->fields)._size;
        if (uVar9 < (uint)pSVar15->max_length) {
          (pSVar13->fields)._size = uVar9 + 1;
          pSVar15->m_Items[(int)uVar9] = (Il2CppObject *)pSVar14;
          pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404d3a;
          il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar9,pSVar14);
        }
        else {
          pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404c8a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar13,(Il2CppObject *)pSVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404c94;
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
        __this_05.fields._0_8_ = pSVar23;
        __this_05.fields.m_Object.fields._8_8_ = pIVar28;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_05.fields.m_Object.fields._32_8_ = pIVar31;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
        __this_05.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var34.genericMethod;
        bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_05,(MethodInfo *)&stack0xfffffffffffffe60);
      } while ((char)bVar10 != '\0');
label_04404d44:
      pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404d56;
      pSVar15 = System_Collections_Generic_List_object___ToArray(pSVar13,MethodInfo_String_ToArray);
      return (SimpleJSONFixed_JSONNode_o *)pSVar15;
    }
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404d72;
    __this_07.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_148;
    __this_07.fields._0_8_ = pSStack_150;
    __this_07.fields.m_Object.fields._8_8_ = pIStack_140;
    __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_138;
    __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_130;
    __this_07.fields.m_Object.fields._32_8_ = pIStack_128;
    __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_120;
    __this_07.fields.m_Array.fields._8_8_ = _Stack_118.rgctx_data;
    __this_07.fields.m_Array.fields._current = _Stack_110.genericMethod;
    aKeyValue_01 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_07,(MethodInfo *)&stack0xfffffffffffffe60);
    unaff_R14 = aKeyValue_01.value;
    aKeyValue_00.key = aKeyValue_01.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404d90;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404d9d;
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_01,
                         (MethodInfo *)0x0);
    if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04404da2;
  }
  pSVar14 = aKeyValue_01.key;
  SVar4.value = pSVar12;
  SVar4.key = pSVar14;
  SVar3.value = pSVar12;
  SVar3.key = pSVar14;
  aKeyValue_02.value = pSVar12;
  aKeyValue_02.key = pSVar14;
  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404dc4;
  pSVar17 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar16->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar16,"CategoryName",(pSVar16->klass->vtable)._7_get_Item.method);
  pSVar16 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404dce;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar17,(MethodInfo *)0x0);
  pSStack_1a8 = (SimpleJSONFixed_JSONNode_o *)0x4404dd3;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1c8 = pSVar12;
  plStack_1c0 = unaff_R13;
  pSStack_1b0 = pSVar13;
  pSStack_1a8 = unaff_RBP;
  if (g_data_057ae594 == '\0') {
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e09;
    pSStack_1d0 = pSVar14;
    pSStack_1b8 = aKeyValue_01.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e21;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e2d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e45;
    il2cpp_runtime_helper_023445d0(&"SubcategoryName");
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e51;
    il2cpp_runtime_helper_023445d0(&"Subcategories");
    aKeyValue_01.value = pSStack_1b8;
    aKeyValue_01.key = pSStack_1d0;
    g_data_057ae594 = '\x01';
  }
  pSStack_1b8 = aKeyValue_01.value;
  pSStack_1d0 = aKeyValue_01.key;
  pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e86;
  pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404e9b;
  System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_System_String);
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04405082:
    pSVar12 = aKeyValue_02.value;
    aKeyValue_03.value = pSVar16;
    aKeyValue_03.key = aKeyValue_02.key;
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4405087;
    pSVar17 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404ec1;
    plVar11 = (long *)(*(pSVar16->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar16,"Subcategories",(pSVar16->klass->vtable)._7_get_Item.method);
    aKeyValue_02 = SVar3;
    if (plVar11 == (long *)0x0) goto label_04405082;
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404ee2;
    (**(code **)(*plVar11 + 0x338))(&pSStack_218,plVar11,*(undefined8 *)(*plVar11 + 0x340));
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404f23;
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_210;
    __this_00.fields._0_8_ = pSStack_218;
    __this_00.fields.m_Object.fields._8_8_ = pIStack_208;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_200;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1f8;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_1f0;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_1e8;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_1e0.rgctx_data;
    __this_00.fields.m_Array.fields._current = _Stack_1d8.genericMethod;
    bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffd98);
    if ((char)bVar10 == '\0') {
      aKeyValue_02 = SVar4;
      if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) goto label_04405024;
      goto label_04405082;
    }
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar23 = pSStack_218;
      pIVar27 = pIStack_210;
      pIVar28 = pIStack_208;
      pcVar29 = pcStack_200;
      pIVar30 = pIStack_1f8;
      pIVar31 = pIStack_1f0;
      ppIVar32 = ppIStack_1e8;
      _Var33 = _Stack_1e0;
      _Var34 = _Stack_1d8;
      do {
        pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404f86;
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
        __this_02.fields._0_8_ = pSVar23;
        __this_02.fields.m_Object.fields._8_8_ = pIVar28;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_02.fields.m_Object.fields._32_8_ = pIVar31;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
        __this_02.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Var34.genericMethod;
        aKeyValue_02 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_02,(MethodInfo *)&stack0xfffffffffffffd98);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404fa4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404fb1;
        pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_02,
                             (MethodInfo *)0x0);
        pSVar16 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffd98;
        if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
        pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404fd1;
        pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar12,"SubcategoryName",(pSVar12->klass->vtable)._7_get_Item.method);
        pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404fdb;
        pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar12,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar13->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar15 = (pSVar13->fields)._items;
        pSVar16 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffd98;
        if (pSVar15 == (System_Object_array *)0x0) goto label_04405082;
        uVar9 = (pSVar13->fields)._size;
        if (uVar9 < (uint)pSVar15->max_length) {
          (pSVar13->fields)._size = uVar9 + 1;
          pSVar15->m_Items[(int)uVar9] = (Il2CppObject *)pSVar14;
          pSStackY_270 = (System_Collections_Generic_List_object__o *)0x440501a;
          il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar9,pSVar14);
        }
        else {
          pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404f6a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar13,(Il2CppObject *)pSVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4404f74;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
        __this_01.fields._0_8_ = pSVar23;
        __this_01.fields.m_Object.fields._8_8_ = pIVar28;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_01.fields.m_Object.fields._32_8_ = pIVar31;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
        __this_01.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var34.genericMethod;
        bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffd98);
      } while ((char)bVar10 != '\0');
label_04405024:
      pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4405036;
      pSVar15 = System_Collections_Generic_List_object___ToArray(pSVar13,MethodInfo_String_ToArray);
      return (SimpleJSONFixed_JSONNode_o *)pSVar15;
    }
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4405052;
    __this_03.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_210;
    __this_03.fields._0_8_ = pSStack_218;
    __this_03.fields.m_Object.fields._8_8_ = pIStack_208;
    __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_200;
    __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1f8;
    __this_03.fields.m_Object.fields._32_8_ = pIStack_1f0;
    __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_1e8;
    __this_03.fields.m_Array.fields._8_8_ = _Stack_1e0.rgctx_data;
    __this_03.fields.m_Array.fields._current = _Stack_1d8.genericMethod;
    aKeyValue_03 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_03,(MethodInfo *)&stack0xfffffffffffffd98);
    pSVar16 = aKeyValue_03.value;
    aKeyValue_02.key = aKeyValue_03.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStackY_270 = (System_Collections_Generic_List_object__o *)0x4405070;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_270 = (System_Collections_Generic_List_object__o *)0x440507d;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_03,
                         (MethodInfo *)0x0);
    if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04405082;
  }
  pSVar23 = pSVar17->klass;
  pSStackY_270 = (System_Collections_Generic_List_object__o *)0x44050a4;
  pSVar16 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar23->vtable)._7_get_Item.methodPtr)
                      (pSVar17,"SubcategoryName",(pSVar23->vtable)._7_get_Item.method);
  iVar22 = (int)pSVar23;
  pSVar14 = (System_String_o *)0x0;
  pSStackY_270 = (System_Collections_Generic_List_object__o *)0x44050ae;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
  pSStackY_270 = (System_Collections_Generic_List_object__o *)0x44050b3;
  il2cpp_runtime_helper_022b2c90();
  iStackY_294 = iVar22;
  pSStackY_288 = pSVar12;
  plStackY_280 = unaff_R13;
  pSStackY_270 = pSVar13;
  if (g_data_057ae592 == '\0') {
    pSStackY_290 = aKeyValue_03.key;
    pSStackY_278 = aKeyValue_03.value;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Trophy");
    il2cpp_runtime_helper_023445d0(&"Rank");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/TrophyIcon");
    il2cpp_runtime_helper_023445d0(&"BadgeColor");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Badge1Icon");
    aKeyValue_03.value = pSStackY_278;
    aKeyValue_03.key = pSStackY_290;
    g_data_057ae592 = '\x01';
  }
  pSStackY_278 = aKeyValue_03.value;
  pSStackY_290 = aKeyValue_03.key;
  pSVar20 = pSVar14;
  if (iVar22 < 4) {
    pUVar18 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar14,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar20 = (System_String_o *)(*(pSVar16->klass->vtable)._4_unknown.methodPtr)(pSVar16);
    pSVar21 = System_Int32__ToString((int32_t)&iStackY_294,(MethodInfo *)0x0);
    pSVar21 = System_String__Concat_3af7150("Trophy",pSVar21,"Color",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar26 = UI_UIManager__GetThemeColor(pSVar20,"Rank",pSVar21,"DefaultPanel",(MethodInfo *)0x0);
    fVar25 = UVar26.fields.b;
    fVar24 = UVar26.fields.r;
  }
  else {
    if (10 < iVar22) goto label_044052e6;
    pUVar18 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pSVar14,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04405319;
    pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar20 = (System_String_o *)
              (*(pSVar16->klass->vtable)._4_unknown.methodPtr)
                        (pSVar16,(pSVar16->klass->vtable)._4_unknown.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar26 = UI_UIManager__GetThemeColor(pSVar20,"Rank","BadgeColor","DefaultPanel",(MethodInfo *)0x0);
    fVar25 = UVar26.fields.b;
    fVar24 = UVar26.fields.r;
  }
  if (pIVar19 == (Il2CppObject *)0x0) {
label_04405319:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  (*pIVar19->klass->vtable[0x17].methodPtr)(fVar24,fVar25,pIVar19);
  aKeyValue_03.value = pSStackY_278;
  aKeyValue_03.key = pSStackY_290;
label_044052e6:
  pSStackY_278 = aKeyValue_03.value;
  pSStackY_290 = aKeyValue_03.key;
  pSVar20 = System_Int32__ToString((int32_t)&iStackY_294,(MethodInfo *)0x0);
  pUVar18 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pSVar14,style,pSVar20,0,4,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)pUVar18;
}


// UI.LeaderboardDefaultPanel$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___ctor (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x4405340

void UI_LeaderboardDefaultPanel___ctor(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


