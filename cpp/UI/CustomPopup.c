// Type: UI.CustomPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CustomPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomPopup.cs
// --------------------------------

// UI.CustomPopup.<>c__DisplayClass11_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___ctor (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x43bb3a0

void UI_CustomPopup___c__DisplayClass11_0___ctor
               (UI_CustomPopup___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass11_0$$<AddBottomButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0 (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x43bba50

void UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0
               (UI_CustomPopup___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  undefined8 uVar5;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined1 *puVar6;
  System_Threading_CancellationTokenSource_o *a;
  UI_CustomPopup_o *pUVar7;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  UI_CustomPopup_o *pUVar8;
  undefined8 unaff_R14;
  undefined1 auStack_8 [8];
  
  puVar6 = auStack_8;
  pUVar8 = (__this->fields).__4__this;
  if (pUVar8 == (UI_CustomPopup_o *)0x0) {
    in_RAX = il2cpp_runtime_helper_022b2c90();
    pUVar7 = (UI_CustomPopup_o *)(pUVar8->fields).m_CachedPtr;
    if (pUVar7 == (UI_CustomPopup_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    a = (pUVar8->fields).m_CancellationTokenSource;
  }
  else {
    a = (System_Threading_CancellationTokenSource_o *)(__this->fields).name;
    puVar6 = (undefined1 *)register0x00000020;
    pUVar7 = pUVar8;
  }
  *(undefined8 *)(puVar6 + -8) = unaff_R14;
  *(undefined8 *)(puVar6 + -0x10) = unaff_RBX;
  *(undefined8 *)(puVar6 + -0x18) = in_RAX;
  if (g_data_057ae3b0 == '\0') {
    *(undefined8 *)(puVar6 + -0x20) = 0x43bb8df;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)(puVar6 + -0x20) = 0x43bb8eb;
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3b0 = '\x01';
  }
  *(undefined8 *)(puVar6 + -0x20) = 0x43bb906;
  bVar4 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    pMVar2 = (pUVar7->klass->vtable)._22_Hide.method;
    pIVar3 = (pUVar7->klass->vtable)._22_Hide.methodPtr;
    *(undefined8 *)(puVar6 + -0x20) = 0x43bb951;
    (*pIVar3)(pUVar7,pMVar2);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)(puVar6 + -0x20) = 0x43bb969;
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_01,(System_String_o *)a,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar6 + -0x20) = 0x43bb981;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  *(System_Threading_CancellationTokenSource_o **)(puVar6 + -0x20) = a;
  *(long **)(puVar6 + -0x28) = &TypeInfo_CustomLogicManager;
  *(undefined8 *)(puVar6 + -0x30) = uVar5;
  if (g_data_057ae3b1 == '\0') {
    *(undefined8 *)(puVar6 + -0x38) = 0x43bb9ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    *(undefined8 *)(puVar6 + -0x38) = 0x43bb9b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3b1 = '\x01';
  }
  *(undefined8 *)(puVar6 + -0x38) = 0x43bb9ce;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  *(undefined8 *)(puVar6 + -0x38) = 0x43bb9e3;
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)__this_00;
  *(undefined8 *)(puVar6 + -0x38) = 0x43bb9f9;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Compiler_k__BackingField);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___ctor (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x43bb7b0

void UI_CustomPopup___c__DisplayClass16_0___ctor
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass16_0$$<AddButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0 (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x43bba70

void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_CustomPopup_o *pUVar2;
  System_String_o *a;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_CustomPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  a = (__this->fields).name;
  if (g_data_057ae3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3b0 = '\x01';
  }
  bVar3 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_01,a,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Compiler_k__BackingField);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$get_Title
// il2cpp: System_String_o* UI_CustomPopup__get_Title (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb0b0

System_String_o * UI_CustomPopup__get_Title(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.CustomPopup$$get_VerticalSpacing
// il2cpp: float UI_CustomPopup__get_VerticalSpacing (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb0d0

float UI_CustomPopup__get_VerticalSpacing(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CustomPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomPopup__get_VerticalPadding (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb0e0

int32_t UI_CustomPopup__get_VerticalPadding(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CustomPopup$$Setup
// il2cpp: void UI_CustomPopup__Setup (UI_CustomPopup_o* __this, UI_BasePanel_o* parent, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x43bb0f0

void UI_CustomPopup__Setup
               (UI_CustomPopup_o *__this,UI_BasePanel_o *parent,System_String_o *title,float width,
               float height,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae3aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3aa = '\x01';
  }
  (__this->fields)._width = width;
  (__this->fields)._height = height;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  (__this->fields)._style = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._style);
  parent_00 = (__this->fields).BottomBar;
  pUVar2 = (__this->fields)._style;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,pUVar2,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$AddBottomButton
// il2cpp: void UI_CustomPopup__AddBottomButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x43bb290

void UI_CustomPopup__AddBottomButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,MethodInfo *method)

{
  UI_ElementStyle_o *style;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  
  if (g_data_057ae3ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddBottomButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae3ab = '\x01';
  }
  pUVar1 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  parent = pUVar1;
  System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    (pUVar1->fields).m_CachedPtr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar1->fields,__this);
    pUVar1[1].klass = (UnityEngine_Transform_c *)name;
    il2cpp_runtime_helper_022b4080(pUVar1 + 1,name);
    parent = (__this->fields).BottomBar;
    style = (__this->fields)._style;
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar1 = (UnityEngine_Transform_o *)
             UI_ElementFactory__CreateTextButton(parent,style,title,0.0,onClick,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar1,(MethodInfo *)0x0);
      parent = pUVar1;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$GetHeight
// il2cpp: float UI_CustomPopup__GetHeight (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb3b0

float UI_CustomPopup__GetHeight(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._height;
}


// UI.CustomPopup$$GetWidth
// il2cpp: float UI_CustomPopup__GetWidth (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb3c0

float UI_CustomPopup__GetWidth(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._width;
}


// UI.CustomPopup$$Clear
// il2cpp: void UI_CustomPopup__Clear (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb3d0

void UI_CustomPopup__Clear(UI_CustomPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ae3ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3ac = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._items;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bb4fe;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar9;
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar2 = (__this->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
label_043bb4fe:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_043bb544;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_043bb544:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.CustomPopup$$AddLabel
// il2cpp: void UI_CustomPopup__AddLabel (UI_CustomPopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x43bb580

void UI_CustomPopup__AddLabel(UI_CustomPopup_o *__this,System_String_o *label,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Transform_o *parent;
  int32_t *piVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  System_String_o *title;
  UI_ElementStyle_o *pUVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_object__o *__this_01;
  
  if (g_data_057ae3ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ad = '\x01';
  }
  pUVar6 = (__this->fields)._style;
  pUVar5 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,pUVar6,label,0,4,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  pSVar7 = (System_Object_array *)(__this->fields)._items;
  if (pSVar7 != (System_Object_array *)0x0) {
    piVar3 = (int32_t *)((long)&pSVar7->max_length + 4);
    *piVar3 = *piVar3 + 1;
    pSVar2 = ((System_Collections_Generic_List_object__Fields *)&pSVar7->bounds)->_items;
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar7->max_length;
      if (uVar1 < (uint)pSVar2->max_length) {
        *(uint *)&pSVar7->max_length = uVar1 + 1;
        pSVar2->m_Items[(int)uVar1] = (Il2CppObject *)pUVar5;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar1,pUVar5);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar5,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae3ae = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    (__this_00->fields)._items = pSVar7;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar7);
    *(UI_ElementStyle_o **)&(__this_00->fields)._size = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._size,pUVar6);
    parent = (UnityEngine_Transform_o *)pSVar7->m_Items[0];
    pUVar6 = (UI_ElementStyle_o *)pSVar7->m_Items[0x12];
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar5 = UI_ElementFactory__CreateDefaultButton(parent,pUVar6,title,0.0,0.0,onClick,(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    __this_01 = (System_Collections_Generic_List_object__o *)pSVar7->m_Items[0x11];
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar3 = &(__this_01->fields)._version;
      *piVar3 = *piVar3 + 1;
      pSVar7 = (__this_01->fields)._items;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pUVar5;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar1,pUVar5);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,(Il2CppObject *)pUVar5,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$AddButton
// il2cpp: void UI_CustomPopup__AddButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x43bb640

void UI_CustomPopup__AddButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *parent;
  UI_ElementStyle_o *style;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *item;
  System_Collections_Generic_List_GameObject__o *__this_01;
  
  if (g_data_057ae3ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae3ae = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    (__this_00->fields)._items = (UnityEngine_GameObject_array *)__this;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,__this);
    *(System_String_o **)&(__this_00->fields)._size = name;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._size,name);
    parent = (__this->fields).SinglePanel;
    style = (__this->fields)._style;
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    item = UI_ElementFactory__CreateDefaultButton(parent,style,title,0.0,0.0,onClick,(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    __this_01 = (__this->fields)._items;
    if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2,item);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$AddButtons
// il2cpp: void UI_CustomPopup__AddButtons (UI_CustomPopup_o* __this, System_Collections_Generic_List_object__o* names, System_Collections_Generic_List_object__o* titles, const MethodInfo* method);
// 0x43bb7c0

void UI_CustomPopup__AddButtons
               (UI_CustomPopup_o *__this,System_Collections_Generic_List_object__o *names,
               System_Collections_Generic_List_object__o *titles,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *title;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  
  if (g_data_057ae3af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057ae3af = '\x01';
  }
  if (names != (System_Collections_Generic_List_object__o *)0x0) {
    iVar1 = (names->fields)._size;
    if (titles == (System_Collections_Generic_List_object__o *)0x0) {
label_043bb881:
      if (0 < iVar1) goto label_043bb8a1;
    }
    else if (0 < iVar1) {
      iVar1 = 0;
      do {
        pSVar3 = (System_String_o *)
                 System_Collections_Generic_List_object___get_Item(names,iVar1,MethodInfo_Object_get_Item);
        title = (System_String_o *)
                System_Collections_Generic_List_object___get_Item(titles,iVar1,MethodInfo_Object_get_Item);
        if ((pSVar3 != (System_String_o *)0x0) && (pSVar3->klass != g_data_057b9c00)) {
          il2cpp_runtime_helper_022b2fd0(pSVar3);
          goto label_043bb89c;
        }
        if ((title != (System_String_o *)0x0) && (title->klass != g_data_057b9c00)) {
          iVar1 = il2cpp_runtime_helper_022b2fd0(title);
          goto label_043bb881;
        }
        UI_CustomPopup__AddButton(__this,pSVar3,title,(MethodInfo *)&g_data_057b9b70);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (names->fields)._size);
    }
    return;
  }
label_043bb89c:
  il2cpp_runtime_helper_022b2c90();
label_043bb8a1:
  pSVar3 = (System_String_o *)0x0;
  System_Collections_Generic_List_object___get_Item(names,0,MethodInfo_Object_get_Item);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3b0 = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar3,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    (*(names->klass->vtable)._22_Clear.methodPtr)(names,(names->klass->vtable)._22_Clear.method);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_01,pSVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Compiler_k__BackingField);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$OnButtonClick
// il2cpp: void UI_CustomPopup__OnButtonClick (UI_CustomPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43bb8c0

void UI_CustomPopup__OnButtonClick(UI_CustomPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  
  if (g_data_057ae3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3b0 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_01,name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Compiler_k__BackingField);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$.ctor
// il2cpp: void UI_CustomPopup___ctor (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bb990

void UI_CustomPopup___ctor(UI_CustomPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$<Setup>b__10_0
// il2cpp: void UI_CustomPopup___Setup_b__10_0 (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x43bba10

void UI_CustomPopup___Setup_b__10_0(UI_CustomPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *a;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  
  if (g_data_057ae3b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3b2 = '\x01';
  }
  a = "Back";
  if (g_data_057ae3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae3b0 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_01,a,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Compiler_k__BackingField);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


