// Type: UI.LeaderboardDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/LeaderboardDefaultPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.LeaderboardDefaultPanel.<>c$$.cctor
// il2cpp: void UI_LeaderboardDefaultPanel___c___cctor (const MethodInfo* method);
// 0x40f1120

void UI_LeaderboardDefaultPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057047fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057047fc = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.LeaderboardDefaultPanel.<>c$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c___ctor (UI_LeaderboardDefaultPanel___c_o* __this, const MethodInfo* method);
// 0x40f1190

void UI_LeaderboardDefaultPanel_<>c___ctor
               (UI_LeaderboardDefaultPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c$$<Setup>b__8_2
// il2cpp: float UI_LeaderboardDefaultPanel___c___Setup_b__8_2 (UI_LeaderboardDefaultPanel___c_o* __this, SimpleJSONFixed_JSONNode_o* x, const MethodInfo* method);
// 0x40f11a0

float UI_LeaderboardDefaultPanel_<>c__<Setup>b__8_2
                (UI_LeaderboardDefaultPanel___c_o *__this,SimpleJSONFixed_JSONNode_o *x,
                MethodInfo *method)

{
  code *vtable_dispatch;
  long *plVar1;
  float fVar2;
  
  if (DAT_057047fd == '\0') {
    il2cpp_init_method_metadata(&"Score");
    DAT_057047fd = '\x01';
  }
  if (x != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar1 = (long *)(*(x->klass->vtable)._7_get_Item.methodPtr)
                               (x,"Score",(x->klass->vtable)._7_get_Item.method);
    if (plVar1 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar1 + 0x388);
      fVar2 = (float)(*vtable_dispatch)
                               (plVar1,*(undefined8 *)(*plVar1 + 0x390),vtable_dispatch);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel.<>c$$<Setup>b__8_3
// il2cpp: float UI_LeaderboardDefaultPanel___c___Setup_b__8_3 (UI_LeaderboardDefaultPanel___c_o* __this, SimpleJSONFixed_JSONNode_o* x, const MethodInfo* method);
// 0x40f1210

float UI_LeaderboardDefaultPanel_<>c__<Setup>b__8_3
                (UI_LeaderboardDefaultPanel___c_o *__this,SimpleJSONFixed_JSONNode_o *x,
                MethodInfo *method)

{
  code *vtable_dispatch;
  long *plVar1;
  float fVar2;
  
  if (DAT_057047fe == '\0') {
    il2cpp_init_method_metadata(&"Score");
    DAT_057047fe = '\x01';
  }
  if (x != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar1 = (long *)(*(x->klass->vtable)._7_get_Item.methodPtr)
                               (x,"Score",(x->klass->vtable)._7_get_Item.method);
    if (plVar1 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar1 + 0x388);
      fVar2 = (float)(*vtable_dispatch)
                               (plVar1,*(undefined8 *)(*plVar1 + 0x390),vtable_dispatch);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___ctor (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x40f0500

void UI_LeaderboardDefaultPanel_<>c__DisplayClass8_0___ctor
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$<Setup>b__0
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__0 (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x40f1280

void UI_LeaderboardDefaultPanel_<>c__DisplayClass8_0__<Setup>b__0
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$<Setup>b__1
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__1 (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x40f12a0

void UI_LeaderboardDefaultPanel_<>c__DisplayClass8_0__<Setup>b__1
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_1$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___ctor (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x40f10f0

void UI_LeaderboardDefaultPanel_<>c__DisplayClass8_1___ctor
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_1$$<Setup>b__4
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___Setup_b__4 (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x40f12c0

void UI_LeaderboardDefaultPanel_<>c__DisplayClass8_1__<Setup>b__4
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_057047ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057047ff = '\x01';
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


// UI.LeaderboardDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_LeaderboardDefaultPanel__get_ScrollBar (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x40ee800

bool_conflict
UI_LeaderboardDefaultPanel__get_ScrollBar(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.LeaderboardDefaultPanel$$get_VerticalPadding
// il2cpp: int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x40ee810

int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding
                  (UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.LeaderboardDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_LeaderboardDefaultPanel__get_VerticalSpacing (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x40ee820

float UI_LeaderboardDefaultPanel__get_VerticalSpacing
                (UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.LeaderboardDefaultPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_LeaderboardDefaultPanel__get_ThemePanel (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x40ee830

System_String_o *
UI_LeaderboardDefaultPanel__get_ThemePanel(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  if (DAT_057047f5 == '\0') {
    il2cpp_init_method_metadata(&"LeaderboardPopup");
    DAT_057047f5 = '\x01';
  }
  return "LeaderboardPopup";
}


// UI.LeaderboardDefaultPanel$$Setup
// il2cpp: void UI_LeaderboardDefaultPanel__Setup (UI_LeaderboardDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ee860

/* WARNING: Removing unreachable block (ram,0x040f000c) */
/* WARNING: Removing unreachable block (ram,0x040ef984) */
/* WARNING: Removing unreachable block (ram,0x040efecd) */
/* WARNING: Removing unreachable block (ram,0x040efed5) */
/* WARNING: Removing unreachable block (ram,0x040f0082) */

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
  void *pvVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Object_array *pSVar10;
  System_Collections_IEnumerator_c *pSVar11;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  char cVar12;
  bool_conflict bVar13;
  undefined4 uVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  UI_ElementStyle_o *__this_04;
  long *plVar17;
  SimpleJSONFixed_JSONNode_o *pSVar18;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UI_LeaderboardDefaultPanel_o *pUVar22;
  System_String_array *pSVar23;
  UnityEngine_Events_UnityAction_o *pUVar24;
  undefined8 uVar25;
  System_Collections_Generic_List_object__o *__this_05;
  System_Func_TSource__TKey__o *pSVar26;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar27;
  System_Collections_Generic_List_TSource__o *__this_06;
  System_Collections_IEnumerator_o *pSVar28;
  VirtualInvokeData *pVVar29;
  UnityEngine_Component_o *pUVar30;
  undefined8 *puVar31;
  UnityEngine_Transform_o *parent_00;
  Il2CppObject *pIVar32;
  Il2CppClass *pIVar33;
  MethodInfo_29B42A0 **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined1 uVar34;
  int iVar35;
  MethodInfo *pMVar36;
  UI_LeaderboardDefaultPanel_o *pUVar37;
  long lVar38;
  long lVar39;
  float fVar40;
  float num;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  UI_ElementStyle_o *style;
  undefined4 in_stack_ffffffffffffff08;
  undefined4 uVar44;
  undefined4 uVar45;
  UI_BasePanel_o *__this_07;
  undefined4 in_stack_ffffffffffffff20;
  int32_t decimalPlaces;
  UI_LeaderboardDefaultPanel_o *__this_08;
  System_Collections_Generic_List_TSource__o *__this_09;
  undefined4 uVar46;
  int rank;
  undefined4 uVar47;
  System_Nullable_float__Fields SVar48;
  System_Nullable_float__Fields aSStack_78 [9];
  
  if (DAT_057047f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode__O);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode__O);
    il2cpp_init_method_metadata(&MethodInfo_List_1_SimpleJSONFixed_JSONNode__ToList_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_Func_JSONNode__float);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_LeaderboardPopup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_SimpleJSONFixed_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single__Setup_b__8_2);
    il2cpp_init_method_metadata(&MethodInfo_Single__Setup_b__8_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass8_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass8_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Score");
    il2cpp_init_method_metadata(&"Sort");
    il2cpp_init_method_metadata(&"Rank");
    il2cpp_init_method_metadata(&"DecimalPlaces");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Watch");
    il2cpp_init_method_metadata(&"HasLink");
    il2cpp_init_method_metadata(&"SubcategoryName");
    il2cpp_init_method_metadata(&"ScoreLabel");
    il2cpp_init_method_metadata(&"Players");
    il2cpp_init_method_metadata(&"Join the discord to participate in the leaderboard.");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"CategoryName");
    il2cpp_init_method_metadata(&"Descending");
    il2cpp_init_method_metadata(&"Subcategories");
    il2cpp_init_method_metadata(&"Loading leaderboard...");
    il2cpp_init_method_metadata(&"Link");
    DAT_057047f6 = '\x01';
  }
  pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass8_0);
  System_Object___ctor(pIVar15,(MethodInfo *)0x0);
  if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar15[1].klass = (Il2CppClass *)parent;
  il2cpp_runtime_glue(pIVar15 + 1,parent);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)pIVar15[1].klass,(MethodInfo *)0x0)
  ;
  pSVar16 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_04,0x18,120.0,20.0,pSVar16,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    il2cpp_init_class();
    iVar35 = *(int *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18);
  }
  else {
    iVar35 = *(int *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18);
  }
  if (iVar35 != 1) {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,__this_04,"Loading leaderboard...",0,4,(MethodInfo *)0x0);
    return;
  }
  pIVar33 = pIVar15[1].klass;
  if (pIVar33 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pvVar8 = (pIVar33->_1).image;
  method_00 = (MethodInfo_29B42A0 **)(ulong)*(byte *)(TypeInfo_LeaderboardPopup + 0x130);
  if ((*(byte *)((long)pvVar8 + 0x130) < *(byte *)(TypeInfo_LeaderboardPopup + 0x130)) ||
     (*(long *)(*(long *)((long)pvVar8 + 200) + -8 + (long)method_00 * 8) != TypeInfo_LeaderboardPopup)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  __this_08 = (UI_LeaderboardDefaultPanel_o *)(pIVar33->_1).implementedInterfaces;
  if (__this_08 == (UI_LeaderboardDefaultPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar9 = (pIVar33->_1).interfaceOffsets;
  uVar14 = SUB84(pIVar9,0);
  uVar44 = (undefined4)((ulong)pIVar9 >> 0x20);
  pUVar37 = (UI_LeaderboardDefaultPanel_o *)(__this_08->fields).m_CancellationTokenSource;
  bVar13 = System_String__op_Equality
                     ((System_String_o *)pUVar37,
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  pMVar36 = extraout_RDX;
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar17 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x188))(plVar17,0,*(undefined8 *)(*plVar17 + 400));
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar18 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar17 + 0x1a8))
                        (plVar17,"CategoryName",*(undefined8 *)(*plVar17 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar18,(MethodInfo *)0x0);
    method_00 = &MethodInfo_Void_set_Value;
    pUVar37 = __this_08;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_08,(Il2CppObject *)pSVar16,MethodInfo_Void_set_Value);
    pMVar36 = extraout_RDX_00;
  }
  pSVar18 = UI_LeaderboardDefaultPanel__FindCategory
                      (pUVar37,(System_String_o *)(__this_08->fields).m_CancellationTokenSource,
                       pMVar36);
  pUVar37 = (UI_LeaderboardDefaultPanel_o *)CONCAT44(uVar44,uVar14);
  if (pUVar37 == (UI_LeaderboardDefaultPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar22 = (UI_LeaderboardDefaultPanel_o *)(pUVar37->fields).m_CancellationTokenSource;
  bVar13 = System_String__op_Equality
                     ((System_String_o *)pUVar22,
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar17 = (long *)(*(pSVar18->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar18,"Subcategories",(pSVar18->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x188))(plVar17,0,*(undefined8 *)(*plVar17 + 400));
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar19 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar17 + 0x1a8))
                        (plVar17,"SubcategoryName",*(undefined8 *)(*plVar17 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar19,(MethodInfo *)0x0);
    method_00 = &MethodInfo_Void_set_Value;
    pUVar22 = pUVar37;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pUVar37,(Il2CppObject *)pSVar16,MethodInfo_Void_set_Value);
  }
  pSVar19 = UI_LeaderboardDefaultPanel__FindSubcategory
                      (pUVar22,pSVar18,
                       (System_String_o *)(pUVar37->fields).m_CancellationTokenSource,
                       (MethodInfo *)method_00);
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((((UI_BasePanel_o *)__this)->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  uVar42 = SUB84(pUVar21,0);
  uVar43 = (undefined4)((ulong)pUVar21 >> 0x20);
  pSVar16 = (System_String_o *)
            (*(((UI_BasePanel_o *)__this)->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(((UI_BasePanel_o *)__this)->klass->vtable)._4_get_ThemePanel.method);
  pUVar22 = (UI_LeaderboardDefaultPanel_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  pMVar36 = (MethodInfo *)0x18;
  pUVar37 = pUVar22;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar22,0x18,0.0,20.0,pSVar16,(MethodInfo *)0x0);
  uVar46 = SUB84(pUVar22,0);
  uVar47 = (undefined4)((ulong)pUVar22 >> 0x20);
  pSVar23 = UI_LeaderboardDefaultPanel__GetCategoryNames(pUVar37,pMVar36);
  aSStack_78[0].hasValue = 0;
  aSStack_78[0].value = 0.0;
  System_Nullable<float>___ctor((System_Nullable_float__o)aSStack_78,180.0,MethodInfo_Nullable_1_Single);
  pUVar24 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar37 = (UI_LeaderboardDefaultPanel_o *)CONCAT44(uVar43,uVar42);
  UI_ElementFactory__CreateDropdownSetting
            ((UnityEngine_Transform_o *)pUVar37,(UI_ElementStyle_o *)CONCAT44(uVar47,uVar46),
             (Settings_BaseSetting_o *)__this_08,"",pSVar23,"",180.0,40.0,300.0,
             (System_Nullable_float__o)aSStack_78[0],pUVar24,(MethodInfo *)0x0);
  pSVar23 = UI_LeaderboardDefaultPanel__GetSubcategoryNames(pUVar37,pSVar18,method_01);
  if (pSVar23 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (1 < (int)pSVar23->max_length) {
    aSStack_78[0].hasValue = 0;
    aSStack_78[0].value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)aSStack_78,180.0,MethodInfo_Nullable_1_Single);
    pUVar24 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateDropdownSetting
              ((UnityEngine_Transform_o *)CONCAT44(uVar43,uVar42),
               (UI_ElementStyle_o *)CONCAT44(uVar47,uVar46),
               (Settings_BaseSetting_o *)CONCAT44(uVar44,uVar14),"",pSVar23,"",
               180.0,40.0,300.0,(System_Nullable_float__o)aSStack_78[0],pUVar24,(MethodInfo *)0x0);
  }
  UI_ElementFactory__CreateTooltipIcon
            ((UnityEngine_Transform_o *)CONCAT44(uVar43,uVar42),__this_04,"Join the discord to participate in the leaderboard.",30.0,30.0,
             (MethodInfo *)0x0);
  if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar12 = (*(pSVar18->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar18,"Sort",(pSVar18->klass->vtable)._28_HasKey.method);
  uVar34 = 1;
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar18->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar18,"Sort",(pSVar18->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar16 = (System_String_o *)
              (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
    bVar13 = System_String__op_Equality(pSVar16,"Descending",(MethodInfo *)0x0);
    uVar34 = (undefined1)bVar13;
  }
  cVar12 = (*(pSVar18->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar18,"HasLink",(pSVar18->klass->vtable)._28_HasKey.method);
  if (cVar12 == '\0') {
    uVar14 = 0;
  }
  else {
    plVar17 = (long *)(*(pSVar18->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar18,"HasLink",(pSVar18->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar14 = (**(code **)(*plVar17 + 0x3a8))(plVar17,*(undefined8 *)(*plVar17 + 0x3b0));
  }
  cVar12 = (*(pSVar18->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar18,"DecimalPlaces",(pSVar18->klass->vtable)._28_HasKey.method);
  decimalPlaces = 0;
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar18->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar18,"DecimalPlaces",(pSVar18->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    decimalPlaces = (**(code **)(*plVar17 + 0x368))(plVar17,*(undefined8 *)(*plVar17 + 0x370));
  }
  uVar44 = CONCAT31((int3)((uint)uVar42 >> 8),uVar34);
  cVar12 = (*(pSVar18->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar18,"ScoreLabel",(pSVar18->klass->vtable)._28_HasKey.method);
  uVar25 = "Score";
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar18->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar18,"ScoreLabel",(pSVar18->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar25 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
  }
  uVar42 = (undefined4)uVar25;
  uVar45 = (undefined4)((ulong)uVar25 >> 0x20);
  if (pSVar19 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar12 = (*(pSVar19->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar19,"Sort",(pSVar19->klass->vtable)._28_HasKey.method);
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar19,"Sort",(pSVar19->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar16 = (System_String_o *)
              (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
    bVar13 = System_String__op_Equality(pSVar16,"Descending",(MethodInfo *)0x0);
    uVar44 = CONCAT31((int3)((uint)uVar44 >> 8),(char)bVar13);
  }
  cVar12 = (*(pSVar19->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar19,"HasLink",(pSVar19->klass->vtable)._28_HasKey.method);
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar19,"HasLink",(pSVar19->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar14 = (**(code **)(*plVar17 + 0x3a8))(plVar17,*(undefined8 *)(*plVar17 + 0x3b0));
  }
  cVar12 = (*(pSVar19->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar19,"DecimalPlaces",(pSVar19->klass->vtable)._28_HasKey.method);
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar19,"DecimalPlaces",(pSVar19->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    decimalPlaces = (**(code **)(*plVar17 + 0x368))(plVar17,*(undefined8 *)(*plVar17 + 0x370));
  }
  cVar12 = (*(pSVar19->klass->vtable)._28_HasKey.methodPtr)
                     (pSVar19,"ScoreLabel",(pSVar19->klass->vtable)._28_HasKey.method);
  if (cVar12 != '\0') {
    plVar17 = (long *)(*(pSVar18->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar18,"ScoreLabel",(pSVar18->klass->vtable)._7_get_Item.method);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar25 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
    uVar42 = (undefined4)uVar25;
    uVar45 = (undefined4)((ulong)uVar25 >> 0x20);
  }
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_JSONNode);
  System_Collections_Generic_List<object>___ctor(__this_05,MethodInfo_List_1_SimpleJSONFixed_JSONNode);
  plVar17 = (long *)(*(pSVar19->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar19,"Players",(pSVar19->klass->vtable)._7_get_Item.method);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (**(code **)(*plVar17 + 0x338))(aSStack_78,plVar17,*(undefined8 *)(*plVar17 + 0x340));
  if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_02.fields._4_4_ = uVar43;
    __this_02.fields.type = uVar44;
    __this_02.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
    __this_02.fields.m_Object.fields._version = in_stack_ffffffffffffff08;
    __this_02.fields.m_Object.fields._index = uVar14;
    __this_02.fields.m_Object.fields._current.fields.key._0_4_ = uVar42;
    __this_02.fields.m_Object.fields._current.fields.key._4_4_ = uVar45;
    __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)__this;
    __this_02.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20;
    __this_02.fields.m_Object.fields._36_4_ = decimalPlaces;
    __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)__this_08;
    __this_02.fields.m_Array.fields._index = uVar46;
    __this_02.fields.m_Array.fields._version = uVar47;
    __this_02.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)aSStack_78[0];
    SVar48 = aSStack_78[0];
    bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                       (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar13 != '\0') {
      __this_03.fields._4_4_ = uVar43;
      __this_03.fields.type = uVar44;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
      __this_03.fields.m_Object.fields._version = in_stack_ffffffffffffff08;
      __this_03.fields.m_Object.fields._index = uVar14;
      __this_03.fields.m_Object.fields._current.fields.key._0_4_ = uVar42;
      __this_03.fields.m_Object.fields._current.fields.key._4_4_ = uVar45;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)__this;
      __this_03.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20;
      __this_03.fields.m_Object.fields._36_4_ = decimalPlaces;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)__this_08;
      __this_03.fields.m_Array.fields._index = uVar46;
      __this_03.fields.m_Array.fields._version = uVar47;
      __this_03.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)SVar48;
      SVar41 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      SimpleJSONFixed_JSONNode__op_Implicit(SVar41,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    SVar48 = aSStack_78[0];
    while (__this_00.fields._4_4_ = uVar43, __this_00.fields.type = uVar44,
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
          __this_00.fields.m_Object.fields._version = in_stack_ffffffffffffff08,
          __this_00.fields.m_Object.fields._index = uVar14,
          __this_00.fields.m_Object.fields._current.fields.key._0_4_ = uVar42,
          __this_00.fields.m_Object.fields._current.fields.key._4_4_ = uVar45,
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)__this,
          __this_00.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20,
          __this_00.fields.m_Object.fields._36_4_ = decimalPlaces,
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)__this_08,
          __this_00.fields.m_Array.fields._index = uVar46,
          __this_00.fields.m_Array.fields._version = uVar47,
          __this_00.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)SVar48,
          bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_00,(MethodInfo *)&stack0xffffffffffffff38),
          (char)bVar13 != '\0') {
      __this_01.fields._4_4_ = uVar43;
      __this_01.fields.type = uVar44;
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
      __this_01.fields.m_Object.fields._version = in_stack_ffffffffffffff08;
      __this_01.fields.m_Object.fields._index = uVar14;
      __this_01.fields.m_Object.fields._current.fields.key._0_4_ = uVar42;
      __this_01.fields.m_Object.fields._current.fields.key._4_4_ = uVar45;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)__this;
      __this_01.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff20;
      __this_01.fields.m_Object.fields._36_4_ = decimalPlaces;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)__this_08;
      __this_01.fields.m_Array.fields._index = uVar46;
      __this_01.fields.m_Array.fields._version = uVar47;
      __this_01.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)SVar48;
      SVar41 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar15 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit(SVar41,(MethodInfo *)0x0);
      lVar38 = MethodInfo_Void_Add;
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar10 = (__this_05->fields)._items;
      if (pSVar10 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar7 = (__this_05->fields)._size;
      if (uVar7 < (uint)pSVar10->max_length) {
        (__this_05->fields)._size = uVar7 + 1;
        pSVar10->m_Items[(int)uVar7] = pIVar15;
        il2cpp_runtime_glue(pSVar10->m_Items + (int)uVar7,pIVar15);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_05,pIVar15,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar38 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  if ((char)uVar44 == '\0') {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar26 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar26 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar26 == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar26 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_JSONNode__float);
      System_Func<object__float>___ctor();
      lVar38 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar38 + 0x10) = pSVar26;
      il2cpp_runtime_glue(lVar38 + 0x10,pSVar26);
    }
    pSVar27 = System_Linq_Enumerable__OrderBy<object__float>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)__this_05,pSVar26,
                         MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode__O);
    style = __this_04;
    __this_07 = (UI_BasePanel_o *)__this;
    __this_06 = System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar27,MethodInfo_List_1_SimpleJSONFixed_JSONNode__ToList_JSONNode
                          );
  }
  else {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar26 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar26 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar26 == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar26 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_JSONNode__float);
      System_Func<object__float>___ctor();
      lVar38 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar38 + 8) = pSVar26;
      il2cpp_runtime_glue(lVar38 + 8,pSVar26);
    }
    pSVar27 = System_Linq_Enumerable__OrderByDescending<object__float>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)__this_05,pSVar26,
                         MethodInfo_IOrderedEnumerable_1_SimpleJSONFixed_JSONNode__O);
    style = __this_04;
    __this_07 = (UI_BasePanel_o *)__this;
    __this_06 = System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar27,MethodInfo_List_1_SimpleJSONFixed_JSONNode__ToList_JSONNode
                          );
  }
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(((UI_BasePanel_o *)__this)->fields).SinglePanel,1.0,
             (MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((((UI_BasePanel_o *)__this)->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar21,__this_04,"Rank",1,4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar21,__this_04,"Name",1,4,(MethodInfo *)0x0);
  pMVar36 = (MethodInfo *)0x4;
  UI_ElementFactory__CreateDefaultLabel
            (pUVar21,__this_04,(System_String_o *)CONCAT44(uVar45,uVar42),1,4,(MethodInfo *)0x0);
  if ((char)uVar14 == '\0') {
    fVar40 = (float)(*(((UI_BasePanel_o *)__this)->klass->vtable)._33_GetWidth.methodPtr)(__this);
    fVar40 = fVar40 / 3.0;
  }
  else {
    pMVar36 = (MethodInfo *)0x4;
    UI_ElementFactory__CreateDefaultLabel(pUVar21,__this_04,"Watch",1,4,(MethodInfo *)0x0);
    fVar40 = (float)(*(((UI_BasePanel_o *)__this)->klass->vtable)._33_GetWidth.methodPtr)(__this);
    fVar40 = fVar40 * 0.25;
  }
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar28 = UnityEngine_Transform__GetEnumerator(pUVar21,(MethodInfo *)0x0);
  __this_09 = __this_06;
  if (pSVar28 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar11 = pSVar28->klass;
    uVar3._0_1_ = (pSVar11->_2).rank;
    uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar9 = (pSVar11->_1).interfaceOffsets;
      lVar38 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar38) == TypeInfo_IEnumerator) {
          pVVar29 = pSVar11->vtable + *(int *)((long)&pIVar9->offset + lVar38);
          goto LAB_040ef803;
        }
        lVar38 = lVar38 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar38);
    }
    pVVar29 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar28,TypeInfo_IEnumerator,0);
LAB_040ef803:
    cVar12 = (*pVVar29->methodPtr)(pSVar28,pVVar29->method);
    if (cVar12 == '\0') {
      plVar17 = (long *)il2cpp_runtime_glue();
      if (plVar17 == (long *)0x0) goto LAB_040ef976;
      lVar38 = *plVar17;
      if ((ulong)*(ushort *)(lVar38 + 0x12e) == 0) goto LAB_040ef94f;
      lVar39 = 0;
      break;
    }
    pSVar11 = pSVar28->klass;
    uVar4._0_1_ = (pSVar11->_2).rank;
    uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar9 = (pSVar11->_1).interfaceOffsets;
      lVar38 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar38) == TypeInfo_IEnumerator) {
          pVVar29 = pSVar11->vtable + (*(int *)((long)&pIVar9->offset + lVar38) + 1);
          goto LAB_040ef888;
        }
        lVar38 = lVar38 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar38);
    }
    pVVar29 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar28,TypeInfo_IEnumerator,1);
LAB_040ef888:
    pUVar30 = (UnityEngine_Component_o *)(*pVVar29->methodPtr)(pSVar28,pVVar29->method);
    if (pUVar30 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = (TypeInfo_Transform->_2).naturalAligment;
    if (((pUVar30->klass->_2).naturalAligment < bVar2) ||
       ((pUVar30->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar30);
    }
    pIVar15 = UnityEngine_Component__GetComponent<object>(pUVar30,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*pIVar15->klass->vtable[0x24].methodPtr)(fVar40,pIVar15,pIVar15->klass->vtable[0x24].method);
  } while( true );
  while (lVar39 = lVar39 + 0x10, (ulong)*(ushort *)(lVar38 + 0x12e) << 4 != lVar39) {
    if (*(long *)(*(long *)(lVar38 + 0xb0) + lVar39) == TypeInfo_IDisposable) {
      puVar31 = (undefined8 *)
                (lVar38 + (long)*(int *)(*(long *)(lVar38 + 0xb0) + 8 + lVar39) * 0x10 + 0x138);
      goto LAB_040ef96d;
    }
  }
LAB_040ef94f:
  puVar31 = (undefined8 *)il2cpp_runtime_glue(plVar17,TypeInfo_IDisposable,0);
LAB_040ef96d:
  (*(code *)*puVar31)(plVar17);
LAB_040ef976:
  if (__this_06 == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((__this_06->fields)._size < 1) {
    return;
  }
  iVar35 = 0;
LAB_040ef9d0:
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this_07->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup(pUVar21,5.0,4,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  parent_00 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  rank = iVar35 + 1;
  UI_LeaderboardDefaultPanel__CreateRank
            ((UI_LeaderboardDefaultPanel_o *)__this_07,parent_00,style,rank,pMVar36);
  pIVar15 = System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_06,iVar35,MethodInfo_JSONNode_get_Item);
  if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar17 = (long *)(*pIVar15->klass->vtable[7].methodPtr)
                              (pIVar15,"Name",pIVar15->klass->vtable[7].method);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar16 = (System_String_o *)
            (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
  UI_ElementFactory__CreateDefaultLabel(pUVar21,style,pSVar16,0,4,(MethodInfo *)0x0);
  pIVar15 = System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_06,iVar35,MethodInfo_JSONNode_get_Item);
  if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar17 = (long *)(*pIVar15->klass->vtable[7].methodPtr)
                              (pIVar15,"Score",pIVar15->klass->vtable[7].method);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  num = (float)(**(code **)(*plVar17 + 0x388))(plVar17);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = Utility_Util__FormatFloat(num,decimalPlaces,(MethodInfo *)0x0);
  pMVar36 = (MethodInfo *)0x4;
  UI_ElementFactory__CreateDefaultLabel(pUVar21,style,pSVar16,0,4,(MethodInfo *)0x0);
  if ((char)uVar14 != '\0') {
    pIVar15 = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this_06,iVar35,MethodInfo_JSONNode_get_Item)
    ;
    if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar12 = (*pIVar15->klass->vtable[0x1c].methodPtr)
                       (pIVar15,"Link",pIVar15->klass->vtable[0x1c].method);
    if (cVar12 == '\0') {
      pMVar36 = (MethodInfo *)0x4;
      UI_ElementFactory__CreateDefaultLabel(pUVar21,style,"",0,4,(MethodInfo *)0x0);
    }
    else {
      pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass8_1);
      System_Object___ctor(pIVar15,(MethodInfo *)0x0);
      pIVar32 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_09,iVar35,
                           MethodInfo_JSONNode_get_Item);
      if (pIVar32 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar17 = (long *)(*pIVar32->klass->vtable[7].methodPtr)
                                  (pIVar32,"Link",pIVar32->klass->vtable[7].method);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar33 = (Il2CppClass *)
                (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
      if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar15[1].klass = pIVar33;
      il2cpp_runtime_glue(pIVar15 + 1,pIVar33);
      pUVar24 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pMVar36 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateLinkButton(pUVar21,style,"Link",pUVar24,(MethodInfo *)0x0);
    }
  }
  iVar35 = rank;
  __this_06 = __this_09;
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar28 = UnityEngine_Transform__GetEnumerator(pUVar21,(MethodInfo *)0x0);
  if (pSVar28 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar11 = pSVar28->klass;
    uVar5._0_1_ = (pSVar11->_2).rank;
    uVar5._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar9 = (pSVar11->_1).interfaceOffsets;
      lVar38 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar38) == TypeInfo_IEnumerator) {
          pVVar29 = pSVar11->vtable + *(int *)((long)&pIVar9->offset + lVar38);
          goto LAB_040efd33;
        }
        lVar38 = lVar38 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar38);
    }
    pVVar29 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar28,TypeInfo_IEnumerator,0);
LAB_040efd33:
    cVar12 = (*pVVar29->methodPtr)(pSVar28,pVVar29->method);
    if (cVar12 == '\0') break;
    pSVar11 = pSVar28->klass;
    uVar6._0_1_ = (pSVar11->_2).rank;
    uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar9 = (pSVar11->_1).interfaceOffsets;
      lVar38 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar38) == TypeInfo_IEnumerator) {
          pVVar29 = pSVar11->vtable + (*(int *)((long)&pIVar9->offset + lVar38) + 1);
          goto LAB_040efdb8;
        }
        lVar38 = lVar38 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar38);
    }
    pVVar29 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar28,TypeInfo_IEnumerator,1);
LAB_040efdb8:
    pUVar30 = (UnityEngine_Component_o *)(*pVVar29->methodPtr)(pSVar28,pVVar29->method);
    if (pUVar30 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = (TypeInfo_Transform->_2).naturalAligment;
    if (((pUVar30->klass->_2).naturalAligment < bVar2) ||
       ((pUVar30->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar30);
    }
    pIVar15 = UnityEngine_Component__GetComponent<object>(pUVar30,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*pIVar15->klass->vtable[0x24].methodPtr)(fVar40,pIVar15,pIVar15->klass->vtable[0x24].method);
  } while( true );
  plVar17 = (long *)il2cpp_runtime_glue();
  if (plVar17 != (long *)0x0) {
    lVar38 = *plVar17;
    if ((ulong)*(ushort *)(lVar38 + 0x12e) != 0) {
      lVar39 = 0;
      do {
        if (*(long *)(*(long *)(lVar38 + 0xb0) + lVar39) == TypeInfo_IDisposable) {
          puVar31 = (undefined8 *)
                    (lVar38 + (long)*(int *)(*(long *)(lVar38 + 0xb0) + 8 + lVar39) * 0x10 + 0x138);
          goto LAB_040efead;
        }
        lVar39 = lVar39 + 0x10;
      } while ((ulong)*(ushort *)(lVar38 + 0x12e) << 4 != lVar39);
    }
    puVar31 = (undefined8 *)il2cpp_runtime_glue(plVar17,TypeInfo_IDisposable,0);
LAB_040efead:
    (*(code *)*puVar31)(plVar17);
  }
  __this_09 = __this_06;
  if ((__this_06->fields)._size <= iVar35) {
    return;
  }
  goto LAB_040ef9d0;
}


// UI.LeaderboardDefaultPanel$$CreateRank
// il2cpp: void UI_LeaderboardDefaultPanel__CreateRank (UI_LeaderboardDefaultPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t rank, const MethodInfo* method);
// 0x40f0e90

void UI_LeaderboardDefaultPanel__CreateRank
               (UI_LeaderboardDefaultPanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,int32_t rank,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Color_Fields UVar5;
  int32_t local_2c;
  
  local_2c = rank;
  if (DAT_057047f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Trophy");
    il2cpp_init_method_metadata(&"Rank");
    il2cpp_init_method_metadata(&"Icons/Quests/TrophyIcon");
    il2cpp_init_method_metadata(&"BadgeColor");
    il2cpp_init_method_metadata(&"Icons/Quests/Badge1Icon");
    DAT_057047f7 = '\x01';
  }
  if (rank < 4) {
    pUVar1 = UI_ElementFactory__CreateRawImage
                       (parent,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040f10e9;
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar3 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
    pSVar4 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("Trophy",pSVar4,"Color",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar5 = (UnityEngine_Color_Fields)
            UI_UIManager__GetThemeColor(pSVar3,"Rank",pSVar4,"DefaultPanel",(MethodInfo *)0x0);
  }
  else {
    if (10 < rank) goto LAB_040f10b6;
    pUVar1 = UI_ElementFactory__CreateRawImage
                       (parent,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040f10e9;
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar3 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar5 = (UnityEngine_Color_Fields)
            UI_UIManager__GetThemeColor
                      (pSVar3,"Rank","BadgeColor","DefaultPanel",(MethodInfo *)0x0);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
LAB_040f10e9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*pIVar2->klass->vtable[0x17].methodPtr)(UVar5._0_8_,UVar5._8_8_,pIVar2);
LAB_040f10b6:
  pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(parent,style,pSVar3,0,4,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel$$OnButtonClick
// il2cpp: void UI_LeaderboardDefaultPanel__OnButtonClick (UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f1100

void UI_LeaderboardDefaultPanel__OnButtonClick
               (UI_LeaderboardDefaultPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  return;
}


// UI.LeaderboardDefaultPanel$$GetCategoryNames
// il2cpp: System_String_array* UI_LeaderboardDefaultPanel__GetCategoryNames (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x40f08e0

System_String_array *
UI_LeaderboardDefaultPanel__GetCategoryNames
          (UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Object_array *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_04;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *item;
  System_String_array *pSVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  Il2CppClass *pIVar14;
  Il2CppType *pIVar15;
  Il2CppType **ppIVar16;
  _union_13 _Var17;
  _union_14 _Var18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_057047f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&"CategoryName");
    DAT_057047f8 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar3 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x338))(&local_78,plVar3,*(undefined8 *)(*plVar3 + 0x340));
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
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar6 == '\0') {
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto LAB_040f0b14;
    }
    else {
      pIVar10 = local_78;
      pIVar11 = pIStack_70;
      pIVar12 = local_68;
      pcVar13 = pcStack_60;
      pIVar14 = local_58;
      pIVar15 = pIStack_50;
      ppIVar16 = local_48;
      _Var17 = _Stack_40;
      _Var18 = local_38;
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
        do {
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
          __this_02.fields._0_8_ = pIVar10;
          __this_02.fields.m_Object.fields._8_8_ = pIVar12;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
          __this_02.fields.m_Object.fields._32_8_ = pIVar15;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar16;
          __this_02.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
          __this_02.fields.m_Array.fields._current = _Var18.genericMethod;
          SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar9,(MethodInfo *)0x0);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_040f0b72;
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"CategoryName",(pSVar7->klass->vtable)._7_get_Item.method);
          item = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_04->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_040f0b72;
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
          __this_01.fields._0_8_ = pIVar10;
          __this_01.fields.m_Object.fields._8_8_ = pIVar12;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
          __this_01.fields.m_Object.fields._32_8_ = pIVar15;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar16;
          __this_01.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
          __this_01.fields.m_Array.fields._current = _Var18.genericMethod;
          bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        } while ((char)bVar6 != '\0');
LAB_040f0b14:
        pSVar8 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_04,MethodInfo_String___ToArray);
        return pSVar8;
      }
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
      SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar9,(MethodInfo *)0x0);
      if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar7,"CategoryName",(pSVar7->klass->vtable)._7_get_Item.method);
        SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_040f0b72:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel$$GetSubcategoryNames
// il2cpp: System_String_array* UI_LeaderboardDefaultPanel__GetSubcategoryNames (UI_LeaderboardDefaultPanel_o* __this, SimpleJSONFixed_JSONNode_o* category, const MethodInfo* method);
// 0x40f0bb0

System_String_array *
UI_LeaderboardDefaultPanel__GetSubcategoryNames
          (UI_LeaderboardDefaultPanel_o *__this,SimpleJSONFixed_JSONNode_o *category,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *item;
  System_String_array *pSVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  Il2CppClass *pIVar14;
  Il2CppType *pIVar15;
  Il2CppType **ppIVar16;
  _union_13 _Var17;
  _union_14 _Var18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_057047f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"SubcategoryName");
    il2cpp_init_method_metadata(&"Subcategories");
    DAT_057047f9 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  if ((category != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar6 = (long *)(*(category->klass->vtable)._7_get_Item.methodPtr)
                                 (category,"Subcategories",(category->klass->vtable)._7_get_Item.method
                                 ), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x338))(&local_78,plVar6,*(undefined8 *)(*plVar6 + 0x340));
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
    bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar5 == '\0') {
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto LAB_040f0df4;
    }
    else {
      pIVar10 = local_78;
      pIVar11 = pIStack_70;
      pIVar12 = local_68;
      pcVar13 = pcStack_60;
      pIVar14 = local_58;
      pIVar15 = pIStack_50;
      ppIVar16 = local_48;
      _Var17 = _Stack_40;
      _Var18 = local_38;
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
        do {
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
          __this_02.fields._0_8_ = pIVar10;
          __this_02.fields.m_Object.fields._8_8_ = pIVar12;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
          __this_02.fields.m_Object.fields._32_8_ = pIVar15;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar16;
          __this_02.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
          __this_02.fields.m_Array.fields._current = _Var18.genericMethod;
          SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar9,(MethodInfo *)0x0);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_040f0e52;
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"SubcategoryName",(pSVar7->klass->vtable)._7_get_Item.method);
          item = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_04->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_040f0e52;
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
          __this_01.fields._0_8_ = pIVar10;
          __this_01.fields.m_Object.fields._8_8_ = pIVar12;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
          __this_01.fields.m_Object.fields._32_8_ = pIVar15;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar16;
          __this_01.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
          __this_01.fields.m_Array.fields._current = _Var18.genericMethod;
          bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        } while ((char)bVar5 != '\0');
LAB_040f0df4:
        pSVar8 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_04,MethodInfo_String___ToArray);
        return pSVar8;
      }
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
      SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar9,(MethodInfo *)0x0);
      if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar7,"SubcategoryName",(pSVar7->klass->vtable)._7_get_Item.method);
        SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_040f0e52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel$$FindCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_LeaderboardDefaultPanel__FindCategory (UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f0510

SimpleJSONFixed_JSONNode_o *
UI_LeaderboardDefaultPanel__FindCategory
          (UI_LeaderboardDefaultPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  long *plVar1;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  char *pcVar7;
  Il2CppClass *pIVar8;
  Il2CppType *pIVar9;
  Il2CppType **ppIVar10;
  _union_13 _Var11;
  _union_14 _Var12;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_057047fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&"CategoryName");
    DAT_057047fa = '\x01';
  }
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar1 = (long *)**(long **)(TypeInfo_PastebinLoader + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(&local_78,plVar1,*(undefined8 *)(*plVar1 + 0x340));
    pIVar4 = local_78;
    pIVar5 = pIStack_70;
    pIVar6 = local_68;
    pcVar7 = pcStack_60;
    pIVar8 = local_58;
    pIVar9 = pIStack_50;
    ppIVar10 = local_48;
    _Var11 = _Stack_40;
    _Var12 = local_38;
    while( true ) {
      __this_00.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar5;
      __this_00.fields._0_8_ = pIVar4;
      __this_00.fields.m_Object.fields._8_8_ = pIVar6;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar7;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
      __this_00.fields.m_Object.fields._32_8_ = pIVar9;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar10;
      __this_00.fields.m_Array.fields._8_8_ = _Var11.rgctx_data;
      __this_00.fields.m_Array.fields._current = _Var12.genericMethod;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar2 == '\0') {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar5;
      __this_01.fields._0_8_ = pIVar4;
      __this_01.fields.m_Object.fields._8_8_ = pIVar6;
      __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar7;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
      __this_01.fields.m_Object.fields._32_8_ = pIVar9;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar10;
      __this_01.fields.m_Array.fields._8_8_ = _Var11.rgctx_data;
      __this_01.fields.m_Array.fields._current = _Var12.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                    (pSVar3,"CategoryName",(pSVar3->klass->vtable)._7_get_Item.method);
      bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)name,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel$$FindSubcategory
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_LeaderboardDefaultPanel__FindSubcategory (UI_LeaderboardDefaultPanel_o* __this, SimpleJSONFixed_JSONNode_o* category, System_String_o* subcategoryName, const MethodInfo* method);
// 0x40f06a0

SimpleJSONFixed_JSONNode_o *
UI_LeaderboardDefaultPanel__FindSubcategory
          (UI_LeaderboardDefaultPanel_o *__this,SimpleJSONFixed_JSONNode_o *category,
          System_String_o *subcategoryName,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  long *plVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined8 in_stack_ffffffffffffff28;
  Il2CppMethodPointer pIVar6;
  Il2CppMethodPointer pIVar7;
  InvokerMethod pIVar8;
  char *pcVar9;
  Il2CppClass *pIVar10;
  Il2CppType *pIVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (DAT_057047fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"SubcategoryName");
    il2cpp_init_method_metadata(&"Subcategories");
    DAT_057047fb = '\x01';
  }
  if ((category != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar4 = (long *)(*(category->klass->vtable)._7_get_Item.methodPtr)
                                 (category,"Subcategories",(category->klass->vtable)._7_get_Item.method
                                 ), plVar4 != (long *)0x0)) {
    iVar2 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
    plVar4 = (long *)(*(category->klass->vtable)._7_get_Item.methodPtr)
                               (category,"Subcategories",(category->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      if (iVar2 == 1) {
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar4 + 0x188))(plVar4,0,*(undefined8 *)(*plVar4 + 400));
      }
      else {
        (**(code **)(*plVar4 + 0x338))(&local_78,plVar4,*(undefined8 *)(*plVar4 + 0x340));
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)subcategoryName;
        __this_00.fields._0_8_ = in_stack_ffffffffffffff28;
        __this_00.fields.m_Object.fields._8_8_ = local_78;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
        __this_00.fields.m_Object.fields._32_8_ = pcStack_60;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
        __this_00.fields.m_Array.fields._8_8_ = pIStack_50;
        __this_00.fields.m_Array.fields._current = local_48;
        bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar3 != '\0') {
          pIVar6 = local_78;
          pIVar7 = pIStack_70;
          pIVar8 = local_68;
          pcVar9 = pcStack_60;
          pIVar10 = local_58;
          pIVar11 = pIStack_50;
          pSVar12 = local_48;
          do {
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)subcategoryName;
            __this_02.fields._0_8_ = in_stack_ffffffffffffff28;
            __this_02.fields.m_Object.fields._8_8_ = pIVar6;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar7;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
            __this_02.fields.m_Object.fields._32_8_ = pcVar9;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar10;
            __this_02.fields.m_Array.fields._8_8_ = pIVar11;
            __this_02.fields.m_Array.fields._current = pSVar12;
            aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_040f08d8;
            cVar1 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar5,"SubcategoryName",(pSVar5->klass->vtable)._28_HasKey.method);
            if (cVar1 != '\0') {
              a = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar5,"SubcategoryName",(pSVar5->klass->vtable)._7_get_Item.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                                (a,(Il2CppObject *)subcategoryName,(MethodInfo *)0x0);
              if ((char)bVar3 != '\0') {
                return pSVar5;
              }
            }
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)subcategoryName;
            __this_01.fields._0_8_ = in_stack_ffffffffffffff28;
            __this_01.fields.m_Object.fields._8_8_ = pIVar6;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar7;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
            __this_01.fields.m_Object.fields._32_8_ = pcVar9;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar10;
            __this_01.fields.m_Array.fields._8_8_ = pIVar11;
            __this_01.fields.m_Array.fields._current = pSVar12;
            bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
          } while ((char)bVar3 != '\0');
        }
      }
      return pSVar5;
    }
  }
LAB_040f08d8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardDefaultPanel$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___ctor (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x40f1110

void UI_LeaderboardDefaultPanel___ctor(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


