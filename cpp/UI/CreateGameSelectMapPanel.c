// Type: UI.CreateGameSelectMapPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameSelectMapPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameSelectMapPanel.cs
// --------------------------------

// UI.CreateGameSelectMapPanel.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass12_0___ctor (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x437d860

void UI_CreateGameSelectMapPanel___c__DisplayClass12_0___ctor
               (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass12_0$$<Setup>b__0
// il2cpp: bool UI_CreateGameSelectMapPanel___c__DisplayClass12_0___Setup_b__0 (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o* __this, System_String_o* map, const MethodInfo* method);
// 0x437f1c0

bool_conflict
UI_CreateGameSelectMapPanel___c__DisplayClass12_0___Setup_b__0
          (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o *__this,System_String_o *map,MethodInfo *method
          )

{
  void *pvVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  System_String_o *__this_00;
  System_String_o *pSVar5;
  System_String_c *pSVar6;
  MethodInfo *in_R9;
  
  pSVar5 = (System_String_o *)__this;
  if (map != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(map,(MethodInfo *)0x0);
    pSVar5 = map;
    if (__this_00 != (System_String_o *)0x0) {
      iVar3 = System_String__IndexOf_3afc470
                        (__this_00,(__this->fields).query,0,(__this_00->fields)._stringLength,4,in_R9);
      return CONCAT31((int3)((uint)iVar3 >> 8),-1 < iVar3);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = pSVar5[1].klass;
  if (pSVar6 != (System_String_c *)0x0) {
    pvVar1 = (pSVar6->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x398);
    bVar4 = (*UNRECOVERED_JUMPTABLE_00)
                      (pSVar6,pSVar5->fields,*(undefined8 *)((long)pvVar1 + 0x3a0),UNRECOVERED_JUMPTABLE_00);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar2 = (long *)(pSVar6->_1).name;
  if (plVar2 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x398);
    bVar4 = (*UNRECOVERED_JUMPTABLE_00)
                      (plVar2,(pSVar6->_1).namespaze,*(undefined8 *)(*plVar2 + 0x3a0),UNRECOVERED_JUMPTABLE_00
                      );
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass14_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass14_0___ctor (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x437e520

void UI_CreateGameSelectMapPanel___c__DisplayClass14_0___ctor
               (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass14_0$$<CreateRow>b__0
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass14_0___CreateRow_b__0 (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x437f1f0

void UI_CreateGameSelectMapPanel___c__DisplayClass14_0___CreateRow_b__0
               (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  code *vtableDispatch;
  UI_CreateGameSelectMapPanel_o *pUVar2;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CreateGameSelectMapPanel_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._38_OnSelectObject.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar2,(__this->fields).item,(pUVar2->klass->vtable)._38_OnSelectObject.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1 = (long *)(pUVar2->fields).m_CachedPtr;
  if (plVar1 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar1 + 0x398);
    (*vtableDispatch)
              (plVar1,(pUVar2->fields).m_CancellationTokenSource,*(undefined8 *)(*plVar1 + 0x3a0),
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass18_0___ctor (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x437f160

void UI_CreateGameSelectMapPanel___c__DisplayClass18_0___ctor
               (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass18_0$$<CreateCustomTextRow>b__0
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass18_0___CreateCustomTextRow_b__0 (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x437f220

void UI_CreateGameSelectMapPanel___c__DisplayClass18_0___CreateCustomTextRow_b__0
               (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_CreateGameSelectMapPanel_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CreateGameSelectMapPanel_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._38_OnSelectObject.methodPtr;
    (*vtableDispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._38_OnSelectObject.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CreateGameSelectMapPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameSelectMapPanel__get_ScrollBar (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x437d490

bool_conflict
UI_CreateGameSelectMapPanel__get_ScrollBar(UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameSelectMapPanel$$get_VerticalSpacing
// il2cpp: float UI_CreateGameSelectMapPanel__get_VerticalSpacing (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x437d4a0

float UI_CreateGameSelectMapPanel__get_VerticalSpacing
                (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.CreateGameSelectMapPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CreateGameSelectMapPanel__get_HorizontalPadding (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x437d4b0

int32_t UI_CreateGameSelectMapPanel__get_HorizontalPadding
                  (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.CreateGameSelectMapPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CreateGameSelectMapPanel__get_VerticalPadding (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x437d4c0

int32_t UI_CreateGameSelectMapPanel__get_VerticalPadding
                  (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.CreateGameSelectMapPanel$$get_CustomListButtonHeight
// il2cpp: float UI_CreateGameSelectMapPanel__get_CustomListButtonHeight (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x437d4d0

float UI_CreateGameSelectMapPanel__get_CustomListButtonHeight
                (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 42.0;
}


// UI.CreateGameSelectMapPanel$$Setup
// il2cpp: void UI_CreateGameSelectMapPanel__Setup (UI_CreateGameSelectMapPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x437d4e0

void UI_CreateGameSelectMapPanel__Setup
               (UI_CreateGameSelectMapPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_c *__this_00;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  Il2CppObject *__this_05;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *items;
  Il2CppClass *pIVar6;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_List_T___o *__this_06;
  long *plVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  System_Collections_Generic_List_string__o *items_00;
  
  if (g_data_057ae21e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameSelectMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupItems_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Custom");
    g_data_057ae21e = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  items_00 = (System_Collections_Generic_List_string__o *)0x0;
  __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  System_Object___ctor(__this_05,(MethodInfo *)0x0);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_CreateGameSelectMapPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGameSelectMapPopup)) goto label_0437d7d3;
    pSVar5 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,"Custom",(MethodInfo *)0x0);
    *(char *)&(__this->fields).IsCustom = (char)bVar4;
    items = (System_Collections_Generic_List_string__o *)
            (*(__this->klass->vtable)._36_GetItems.methodPtr)
                      (__this,pSVar5,(__this->klass->vtable)._36_GetItems.method);
    pUVar2 = parent[1].fields._currentCategoryPanel;
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (((__this_00 = pUVar2[1].klass, __this_00 != (UnityEngine_GameObject_c *)0x0 &&
         (pSVar5 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0),
         pSVar5 != (System_String_o *)0x0)) &&
        (pIVar6 = (Il2CppClass *)System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0),
        __this_05 != (Il2CppObject *)0x0)))) {
      __this_05[1].klass = pIVar6;
      il2cpp_runtime_helper_022b4080(__this_05 + 1);
      bVar4 = System_String__IsNullOrEmpty((System_String_o *)__this_05[1].klass,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((char)bVar4 == '\0') {
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
        System_Func_object__bool____ctor();
        source = System_Linq_Enumerable__Where_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)items,predicate,MethodInfo_IEnumerable_1_System_String_Where_String)
        ;
        items = (System_Collections_Generic_List_string__o *)
                System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
        method_00 = extraout_RDX_00;
      }
      if ((char)(__this->fields).IsCustom != '\0') {
        UI_CreateGameSelectMapPanel__CreateCustomTextList(__this,items,method_00);
        return;
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = Utility_Util__GroupItems_object_
                            ((System_Collections_Generic_List_T__o *)items,4,MethodInfo_List_1_List_1_System_String_GroupItems_String);
      if (__this_06 != (System_Collections_Generic_List_List_T___o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                   (System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
        while (__this_01.fields._8_8_ = pIVar10, __this_01.fields._list = pSVar9,
              __this_01.fields._current = (Il2CppObject *)items_00,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
              (char)bVar4 != '\0') {
          UI_CreateGameSelectMapPanel__CreateRow(__this,items_00,method_01);
        }
        __this_02.fields._8_8_ = pIVar10;
        __this_02.fields._list = pSVar9;
        __this_02.fields._current = (Il2CppObject *)items_00;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0437d7d3:
  auVar8 = il2cpp_runtime_helper_022b2fd0(parent);
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = pSVar9;
    __this_03.fields._current = (Il2CppObject *)items_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._list = pSVar9;
  __this_04.fields._current = (Il2CppObject *)items_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar8._0_8_);
}


// UI.CreateGameSelectMapPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_CreateGameSelectMapPanel__GetItems (UI_CreateGameSelectMapPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x437e360

System_Collections_Generic_List_string__o *
UI_CreateGameSelectMapPanel__GetItems
          (UI_CreateGameSelectMapPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  System_String_array *source;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (g_data_057ae21f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae21f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
  return pSVar1;
}


// UI.CreateGameSelectMapPanel$$CreateRow
// il2cpp: void UI_CreateGameSelectMapPanel__CreateRow (UI_CreateGameSelectMapPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x437da80

void UI_CreateGameSelectMapPanel__CreateRow
               (UI_CreateGameSelectMapPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  void *pvVar1;
  Il2CppClass *__this_00;
  System_String_o *path;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Texture_o *value;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_06;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar6;
  UnityEngine_UI_RawImage_o *__this_07;
  long *plVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Texture_Fields *pUVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  undefined1 auVar11 [12];
  UnityEngine_GameObject_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ae220 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/MapSelectObjectButton");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Previews/");
    g_data_057ae220 = '\x01';
    method = extraout_RDX;
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pvVar1 = (((UnityEngine_Texture_c *)__this)->_1).image;
  pUVar4 = (((UnityEngine_Texture_c *)__this)->_1).byval_arg.data;
  fVar9 = (float)(**(code **)((long)pvVar1 + 0x1e8))(__this,*(undefined8 *)((long)pvVar1 + 0x1f0),method);
  __this_05 = UI_ElementFactory__CreateHorizontalGroup(pUVar4,fVar9,3,method_00);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    while( true ) {
      __this_01.fields._8_8_ = in_stack_ffffffffffffff90;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this;
      __this_01.fields._current = (Il2CppObject *)pSVar12;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)__this;
        __this_02.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
      System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
      if (value == (UnityEngine_Texture_o *)0x0) break;
      value[1].klass = (UnityEngine_Texture_c *)__this;
      il2cpp_runtime_helper_022b4080(value + 1);
      pUVar8 = &value->fields;
      (value->fields).m_CachedPtr = (intptr_t)local_48.fields._current;
      il2cpp_runtime_helper_022b4080(pUVar8);
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_0437dfe6;
      pUVar4 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
      __this_06 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Misc/MapSelectObjectButton",method_01);
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0437dfeb;
      pIVar5 = UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_Button_GetComponent_Button);
      in_stack_ffffffffffffff90 = __this_06;
      if (pIVar5 == (Il2CppObject *)0x0) goto label_0437dff0;
      __this_00 = pIVar5[0x10].klass;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 == (Il2CppClass *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        in_stack_ffffffffffffff90 = __this_06;
label_0437dfd7:
        fVar9 = (float)il2cpp_runtime_helper_022b2c90();
label_0437dfdc:
        il2cpp_runtime_helper_022b2c90(fVar9);
        break;
      }
      UnityEngine_Events_UnityEvent__AddListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
      in_stack_ffffffffffffff90 = __this_06;
      if (*(char *)&(((UnityEngine_Texture_c *)__this)->_1).typeMetadataHandle == '\0') {
        pvVar1 = (((UnityEngine_Texture_c *)__this)->_1).image;
        pSVar6 = (System_String_o *)
                 (**(code **)((long)pvVar1 + 0x388))
                           (__this,pUVar8->m_CachedPtr,*(undefined8 *)((long)pvVar1 + 0x390));
        in_stack_ffffffffffffff90 = __this_06;
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_ffffffffffffff90 = __this_06;
        }
        path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x20);
        pSVar6 = System_String__Concat_3ae5ba0("Previews/",pSVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(path,pSVar6,0,(MethodInfo *)0x0);
        if (value == (UnityEngine_Texture_o *)0x0) goto label_0437dd44;
        pUVar4 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437e022;
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Icon",(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437e01d;
        __this_07 = (UnityEngine_UI_RawImage_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
        if (__this_07 == (UnityEngine_UI_RawImage_o *)0x0) goto label_0437e018;
        if (value->klass == TypeInfo_Texture2D) {
          UnityEngine_UI_RawImage__set_texture(__this_07,value,(MethodInfo *)0x0);
          goto label_0437debf;
        }
        goto label_0437e027;
      }
label_0437dd44:
      pUVar4 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437e009;
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Icon",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437e00e;
      pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_0437e013;
      (*pIVar5->klass->vtable[0x17].methodPtr)(0x3ea3d70a,0x3f8000003ea3d70a,pIVar5);
label_0437debf:
      pUVar4 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437dff5;
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437dffa;
      pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_0437dfff;
      (*pIVar5->klass->vtable[0x4b].methodPtr)(pIVar5,pUVar8->m_CachedPtr,pIVar5->klass->vtable[0x4b].method);
      pUVar4 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437dfd7;
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0437e004;
      pIVar5 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar10 = UI_UIManager__GetThemeColor
                         ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar9 = UVar10.fields.r;
      if (pIVar5 == (Il2CppObject *)0x0) goto label_0437dfdc;
      (*pIVar5->klass->vtable[0x17].methodPtr)
                (fVar9,UVar10.fields._8_8_,pIVar5,pIVar5->klass->vtable[0x17].method);
    }
    il2cpp_runtime_helper_022b2c90();
label_0437dfe6:
    il2cpp_runtime_helper_022b2c90();
label_0437dfeb:
    il2cpp_runtime_helper_022b2c90();
label_0437dff0:
    il2cpp_runtime_helper_022b2c90();
label_0437dff5:
    il2cpp_runtime_helper_022b2c90();
label_0437dffa:
    il2cpp_runtime_helper_022b2c90();
label_0437dfff:
    il2cpp_runtime_helper_022b2c90();
label_0437e004:
    il2cpp_runtime_helper_022b2c90();
label_0437e009:
    il2cpp_runtime_helper_022b2c90();
label_0437e00e:
    il2cpp_runtime_helper_022b2c90();
label_0437e013:
    il2cpp_runtime_helper_022b2c90();
label_0437e018:
    il2cpp_runtime_helper_022b2c90();
label_0437e01d:
    il2cpp_runtime_helper_022b2c90();
label_0437e022:
    il2cpp_runtime_helper_022b2c90();
label_0437e027:
    il2cpp_runtime_helper_022b2fd0(value);
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)__this;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)__this;
  __this_04.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.CreateGameSelectMapPanel$$GetPreviewName
// il2cpp: System_String_o* UI_CreateGameSelectMapPanel__GetPreviewName (UI_CreateGameSelectMapPanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x437e650

System_String_o *
UI_CreateGameSelectMapPanel__GetPreviewName
          (UI_CreateGameSelectMapPanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae221 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Preview");
    g_data_057ae221 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(item,"Preview",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CreateGameSelectMapPanel$$OnSelectObject
// il2cpp: void UI_CreateGameSelectMapPanel__OnSelectObject (UI_CreateGameSelectMapPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x437e690

void UI_CreateGameSelectMapPanel__OnSelectObject
               (UI_CreateGameSelectMapPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UI_BasePanel_c *pUVar3;
  Settings_TypedSetting_T__o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_UI_ColorBlock_o value;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *value_00;
  Il2CppObject *pIVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_UI_Text_o *__this_05;
  void *extraout_RDX;
  MethodInfo_2A24090 **unaff_RBX;
  Il2CppClass *style;
  Il2CppClass *__this_06;
  UI_BasePanel_o *pUVar10;
  MethodInfo *method_00;
  long *unaff_R12;
  void **ppvVar11;
  undefined4 uVar12;
  UnityEngine_Color_o UVar13;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c0;
  float fStack_bc;
  UnityEngine_UI_ColorBlock_o UStack_b0;
  MethodInfo_2A24090 **ppMStack_58;
  long *plStack_50;
  
  style = (Il2CppClass *)name;
  if (g_data_057ae222 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameSelectMapPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae222 = '\x01';
  }
  __this_06 = (Il2CppClass *)(__this->fields).Parent;
  if (__this_06 == (Il2CppClass *)0x0) goto label_0437e8d4;
  pUVar3 = (__this_06->_1).image;
  bVar1 = (TypeInfo_CreateGameSelectMapPopup->_2).naturalAligment;
  style = TypeInfo_CreateGameSelectMapPopup;
  if ((bVar1 <= (pUVar3->_2).naturalAligment) &&
     ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGameSelectMapPopup)) {
    style = (Il2CppClass *)0x0;
    value_00 = (Il2CppClass *)
               UI_BasePanel__GetCurrentCategoryName((UI_BasePanel_o *)__this_06,(MethodInfo *)0x0);
    unaff_R12 = &TypeInfo_SettingsManager;
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if ((lVar6 != 0) &&
       ((lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0 &&
        (__this_06 = *(Il2CppClass **)(lVar6 + 0x20), __this_06 != (Il2CppClass *)0x0)))) {
      unaff_RBX = &MethodInfo_Void_set_Value;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_06,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      style = value_00;
      if ((lVar6 != 0) &&
         ((lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0 &&
          (__this_00 = *(Settings_TypedSetting_T__o **)(lVar6 + 0x28), __this_06 = (Il2CppClass *)0x0,
          __this_00 != (Settings_TypedSetting_T__o *)0x0)))) {
        Settings_TypedSetting_object___set_Value(__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
        uVar2 = *(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
        unaff_RBX = (MethodInfo_2A24090 **)(ulong)uVar2;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_06 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          style = (Il2CppClass *)name;
          if (uVar2 != 2) goto label_0437e86b;
label_0437e807:
          style = (Il2CppClass *)name;
          if (__this_06 != (Il2CppClass *)0x0) {
            pUVar3 = (__this_06->_1).image;
            bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
            style = TypeInfo_InGameMenu;
            if (((pUVar3->_2).naturalAligment < bVar1) ||
               ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_0437e8d9;
            pUVar10 = *(UI_BasePanel_o **)&(__this_06->_2).static_fields_size;
            if (pUVar10 != (UI_BasePanel_o *)0x0) goto label_0437e8a6;
            __this_06 = (Il2CppClass *)0x0;
          }
        }
        else {
          __this_06 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          style = (Il2CppClass *)name;
          if (uVar2 == 2) goto label_0437e807;
label_0437e86b:
          if (__this_06 == (Il2CppClass *)0x0) goto label_0437e8d4;
          pUVar3 = (__this_06->_1).image;
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          style = TypeInfo_MainMenu;
          if (((pUVar3->_2).naturalAligment < bVar1) ||
             ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MainMenu)) goto label_0437e8d9;
          pUVar10 = (__this_06->_1).methods;
          __this_06 = (Il2CppClass *)0x0;
          if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_0437e8d4;
label_0437e8a6:
          style = (Il2CppClass *)0x0;
          UI_BasePanel__RebuildCategoryPanel(pUVar10,(MethodInfo *)0x0);
          pUVar10 = (__this->fields).Parent;
          __this_06 = (Il2CppClass *)0x0;
          if (pUVar10 != (UI_BasePanel_o *)0x0) {
            (*(pUVar10->klass->vtable)._22_Hide.methodPtr)(pUVar10,(pUVar10->klass->vtable)._22_Hide.method);
            return;
          }
        }
      }
    }
label_0437e8d4:
    il2cpp_runtime_helper_022b2c90();
  }
label_0437e8d9:
  uVar12 = il2cpp_runtime_helper_022b2fd0();
  ppMStack_58 = unaff_RBX;
  plStack_50 = unaff_R12;
  if (g_data_057ae224 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCustomTextRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"CustomMapRow");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae224 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 == (Il2CppObject *)0x0) {
label_0437f13a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar4[1].klass = __this_06;
    il2cpp_runtime_helper_022b4080(pIVar4 + 1,__this_06);
    ppvVar11 = &pIVar4[1].monitor;
    pIVar4[1].monitor = extraout_RDX;
    il2cpp_runtime_helper_022b4080(ppvVar11,extraout_RDX);
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_0437f13a;
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
      if (lVar6 == 0) goto label_0437f144;
    }
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar5;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_o *)0x0) {
        lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
        if (lVar6 == 0) goto label_0437f144;
      }
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar5;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1);
        pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
        if (pSVar5 != (System_Type_o *)0x0) {
          lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
          if (lVar6 == 0) goto label_0437f144;
        }
        if (2 < (uint)components->max_length) {
          components->m_Items[2] = pSVar5;
          il2cpp_runtime_helper_022b4080(components->m_Items + 2);
          pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
          if (pSVar5 != (System_Type_o *)0x0) {
            lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
            if (lVar6 == 0) goto label_0437f144;
          }
          if (3 < (uint)components->max_length) {
            components->m_Items[3] = pSVar5;
            il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar5);
            pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440(pUVar7,"CustomMapRow",components,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_4e09e30
                          (pUVar8,(__this_06->_1).byval_arg.data,0,(MethodInfo *)0x0);
                pIVar4 = UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar4 != (Il2CppObject *)0x0) {
                  (*pIVar4->klass->vtable[0x24].methodPtr)(uVar12,pIVar4,pIVar4->klass->vtable[0x24].method);
                  pUVar3 = (__this_06->_1).image;
                  (*pUVar3[1]._1.image)(__this_06,pUVar3[1]._1.gc_desc);
                  (*pIVar4->klass->vtable[0x26].methodPtr)(pIVar4,pIVar4->klass->vtable[0x26].method);
                  pUVar3 = (__this_06->_1).image;
                  pSVar9 = (System_String_o *)
                           (*(pUVar3->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this_06,(pUVar3->vtable)._4_get_ThemePanel.method);
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  method_00 = (MethodInfo *)0x0;
                  UI_UIManager__GetThemeColorBlock
                            (&UStack_b0,pSVar9,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_02 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Image_GetComponent_Image);
                  if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                    fStack_170 = UStack_b0.fields.m_NormalColor.fields.r;
                    fStack_16c = UStack_b0.fields.m_NormalColor.fields.g;
                    fStack_170 = (0.0 - fStack_170) * 0.08 + fStack_170;
                    fStack_16c = (0.0 - fStack_16c) * 0.08 + fStack_16c;
                    fStack_160 = UStack_b0.fields.m_NormalColor.fields.b;
                    fStack_15c = UStack_b0.fields.m_NormalColor.fields.a;
                    fStack_160 = (0.0 - fStack_160) * 0.08 + fStack_160;
                    fStack_15c = (1.0 - fStack_15c) * 0.08 + fStack_15c;
                    (*(__this_02->klass->vtable)._23_set_color.methodPtr)(__this_02);
                    UnityEngine_UI_Image__set_sprite(__this_02,(UnityEngine_Sprite_o *)0x0,(MethodInfo *)0x0);
                    UnityEngine_UI_Image__set_type(__this_02,0,(MethodInfo *)0x0);
                    __this_03 = (UnityEngine_UI_Selectable_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Button_GetComponent_Button);
                    if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                      fStack_e0 = UStack_b0.fields.m_HighlightedColor.fields.r;
                      fStack_dc = UStack_b0.fields.m_HighlightedColor.fields.g;
                      fStack_e0 = (0.0 - fStack_e0) * 0.04 + fStack_e0;
                      fStack_dc = (0.0 - fStack_dc) * 0.04 + fStack_dc;
                      fStack_d0 = UStack_b0.fields.m_HighlightedColor.fields.b;
                      fStack_cc = UStack_b0.fields.m_HighlightedColor.fields.a;
                      fStack_d0 = (0.0 - fStack_d0) * 0.04 + fStack_d0;
                      fStack_cc = (1.0 - fStack_cc) * 0.04 + fStack_cc;
                      fStack_c0 = UStack_b0.fields.m_PressedColor.fields.r;
                      fStack_bc = UStack_b0.fields.m_PressedColor.fields.g;
                      fStack_150 = UStack_b0.fields.m_PressedColor.fields.b;
                      fStack_14c = UStack_b0.fields.m_PressedColor.fields.a;
                      value.fields.m_DisabledColor.fields.g = (0.0 - fStack_16c) * 0.3 + fStack_16c;
                      value.fields.m_DisabledColor.fields.r = (0.0 - fStack_170) * 0.3 + fStack_170;
                      value.fields.m_DisabledColor.fields.a = (1.0 - fStack_15c) * 0.3 + fStack_15c;
                      value.fields.m_DisabledColor.fields.b = (0.0 - fStack_160) * 0.3 + fStack_160;
                      value.fields.m_NormalColor.fields.g = fStack_16c;
                      value.fields.m_NormalColor.fields.r = fStack_170;
                      value.fields.m_NormalColor.fields.a = fStack_15c;
                      value.fields.m_NormalColor.fields.b = fStack_160;
                      value.fields.m_HighlightedColor.fields.g = fStack_dc;
                      value.fields.m_HighlightedColor.fields.r = fStack_e0;
                      value.fields.m_HighlightedColor.fields.a = fStack_cc;
                      value.fields.m_HighlightedColor.fields.b = fStack_d0;
                      value.fields.m_PressedColor.fields.g = (0.0 - fStack_bc) * 0.12 + fStack_bc;
                      value.fields.m_PressedColor.fields.r = (0.0 - fStack_c0) * 0.12 + fStack_c0;
                      value.fields.m_PressedColor.fields.a = (1.0 - fStack_14c) * 0.12 + fStack_14c;
                      value.fields.m_PressedColor.fields.b = (0.0 - fStack_150) * 0.12 + fStack_150;
                      value.fields.m_SelectedColor.fields.g = fStack_dc;
                      value.fields.m_SelectedColor.fields.r = fStack_e0;
                      value.fields.m_SelectedColor.fields.a = fStack_cc;
                      value.fields.m_SelectedColor.fields.b = fStack_d0;
                      value.fields.m_ColorMultiplier = 1.0;
                      value.fields.m_FadeDuration = 0.08;
                      UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                      __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_CanvasGroupCache;
                      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                        pUVar7 = UI_ElementFactory__CreateDefaultLabel
                                           (pUVar8,(UI_ElementStyle_o *)style,*ppvVar11,0,3,method_00);
                        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                          __this_04 = (UnityEngine_RectTransform_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                          if (g_data_057a694c == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                            g_data_057a694c = '\x01';
                          }
                          if (__this_04 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchorMin
                                      (__this_04,
                                       (UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                       (MethodInfo *)0x0);
                            if (g_data_057a9c86 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                              g_data_057a9c86 = '\x01';
                            }
                            UnityEngine_RectTransform__set_anchorMax
                                      (__this_04,
                                       (UnityEngine_Vector2_o)
                                       *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_offsetMin
                                      (__this_04,(UnityEngine_Vector2_o)0x41800000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_offsetMax
                                      (__this_04,(UnityEngine_Vector2_o)0xc1800000,(MethodInfo *)0x0);
                            __this_05 = (UnityEngine_UI_Text_o *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Text_GetComponent_Text);
                            if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(__this_05->klass->vtable)._75_set_text.methodPtr)
                                        (__this_05,*ppvVar11,(__this_05->klass->vtable)._75_set_text.method);
                              if (style != (Il2CppClass *)0x0) {
                                UnityEngine_UI_Text__set_fontSize
                                          (__this_05,*(int32_t *)&(style->_1).name,(MethodInfo *)0x0);
                                UnityEngine_UI_Text__set_supportRichText(__this_05,0,(MethodInfo *)0x0);
                                UnityEngine_UI_Text__set_alignment(__this_05,3,(MethodInfo *)0x0);
                                pUVar3 = (__this_06->_1).image;
                                pSVar9 = (System_String_o *)
                                         (*(pUVar3->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this_06,(pUVar3->vtable)._4_get_ThemePanel.method);
                                UVar13 = UI_UIManager__GetThemeColor
                                                   (pSVar9,"DefaultButton","TextColor","DefaultPanel",
                                                    (MethodInfo *)0x0);
                                (*(__this_05->klass->vtable)._23_set_color.methodPtr)
                                          (UVar13.fields.r,UVar13.fields.b,__this_05,
                                           (__this_05->klass->vtable)._23_set_color.method);
                                UnityEngine_UI_Text__set_horizontalOverflow(__this_05,1,(MethodInfo *)0x0);
                                UnityEngine_UI_Text__set_verticalOverflow(__this_05,0,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_0437f13a;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0437f144:
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel$$CreateCustomTextList
// il2cpp: void UI_CreateGameSelectMapPanel__CreateCustomTextList (UI_CreateGameSelectMapPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x437d870

void UI_CreateGameSelectMapPanel__CreateCustomTextList
               (UI_CreateGameSelectMapPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  int iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *style;
  long *plVar5;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  float fVar6;
  undefined1 auVar7 [12];
  undefined1 in_stack_ffffffffffffffb8 [12];
  Il2CppObject *pIVar8;
  
  if (g_data_057ae223 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ae223 = '\x01';
    method = extraout_RDX;
  }
  pIVar8 = (Il2CppObject *)0x0;
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar4;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar4);
  fVar6 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                           (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar1 = *plVar5;
      __cxa_end_catch();
      __this_02.fields._version = (int32_t)fVar6;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffffb8._8_4_;
      __this_02.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_03.fields._version = (int32_t)fVar6;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffffb8._8_4_;
    __this_03.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    _Unwind_Resume(auVar7._0_8_);
  }
  fVar6 = fVar6 - ((float)iVar2 + (float)iVar2);
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  while (__this_00.fields._version = (int32_t)fVar6,
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_,
        __this_00.fields._index = in_stack_ffffffffffffffb8._8_4_, __this_00.fields._current = pIVar8,
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar3 != '\0') {
    UI_CreateGameSelectMapPanel__CreateCustomTextRow(__this,style,(System_String_o *)0x0,fVar6,in_RCX);
  }
  __this_01.fields._version = (int32_t)fVar6;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffffb8._8_4_;
  __this_01.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  return;
}


// UI.CreateGameSelectMapPanel$$CreateCustomTextRow
// il2cpp: void UI_CreateGameSelectMapPanel__CreateCustomTextRow (UI_CreateGameSelectMapPanel_o* __this, UI_ElementStyle_o* style, System_String_o* item, float width, const MethodInfo* method);
// 0x437e8e0

void UI_CreateGameSelectMapPanel__CreateCustomTextRow
               (UI_CreateGameSelectMapPanel_o *__this,UI_ElementStyle_o *style,System_String_o *item,
               float width,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *pIVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Text_o *__this_04;
  MethodInfo *method_00;
  void **ppvVar7;
  UnityEngine_Color_o UVar8;
  float local_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  float local_128;
  float fStack_124;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (g_data_057ae224 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCustomTextRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"CustomMapRow");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae224 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 == (Il2CppObject *)0x0) {
label_0437f13a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar1[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar1 + 1,__this);
    ppvVar7 = &pIVar1[1].monitor;
    pIVar1[1].monitor = item;
    il2cpp_runtime_helper_022b4080(ppvVar7,item);
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_0437f13a;
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
      if (lVar3 == 0) goto label_0437f144;
    }
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar2;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
        if (lVar3 == 0) goto label_0437f144;
      }
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar2;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1);
        pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
        if (pSVar2 != (System_Type_o *)0x0) {
          lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
          if (lVar3 == 0) goto label_0437f144;
        }
        if (2 < (uint)components->max_length) {
          components->m_Items[2] = pSVar2;
          il2cpp_runtime_helper_022b4080(components->m_Items + 2);
          pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
          if (pSVar2 != (System_Type_o *)0x0) {
            lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
            if (lVar3 == 0) goto label_0437f144;
          }
          if (3 < (uint)components->max_length) {
            components->m_Items[3] = pSVar2;
            il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar2);
            pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440(pUVar4,"CustomMapRow",components,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_4e09e30
                          (pUVar5,(__this->fields).SinglePanel,0,(MethodInfo *)0x0);
                pIVar1 = UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar1 != (Il2CppObject *)0x0) {
                  (*pIVar1->klass->vtable[0x24].methodPtr)(width,pIVar1,pIVar1->klass->vtable[0x24].method);
                  (*(__this->klass->vtable)._35_get_CustomListButtonHeight.methodPtr)
                            (__this,(__this->klass->vtable)._35_get_CustomListButtonHeight.method);
                  (*pIVar1->klass->vtable[0x26].methodPtr)(pIVar1,pIVar1->klass->vtable[0x26].method);
                  pSVar6 = (System_String_o *)
                           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  method_00 = (MethodInfo *)0x0;
                  UI_UIManager__GetThemeColorBlock
                            (&local_88,pSVar6,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_01 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_Image_GetComponent_Image);
                  if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                    local_148 = local_88.fields.m_NormalColor.fields.r;
                    fStack_144 = local_88.fields.m_NormalColor.fields.g;
                    local_148 = (0.0 - local_148) * 0.08 + local_148;
                    fStack_144 = (0.0 - fStack_144) * 0.08 + fStack_144;
                    local_138 = local_88.fields.m_NormalColor.fields.b;
                    fStack_134 = local_88.fields.m_NormalColor.fields.a;
                    local_138 = (0.0 - local_138) * 0.08 + local_138;
                    fStack_134 = (1.0 - fStack_134) * 0.08 + fStack_134;
                    (*(__this_01->klass->vtable)._23_set_color.methodPtr)(__this_01);
                    UnityEngine_UI_Image__set_sprite(__this_01,(UnityEngine_Sprite_o *)0x0,(MethodInfo *)0x0);
                    UnityEngine_UI_Image__set_type(__this_01,0,(MethodInfo *)0x0);
                    __this_02 = (UnityEngine_UI_Selectable_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_Button_GetComponent_Button);
                    if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                      local_b8 = local_88.fields.m_HighlightedColor.fields.r;
                      fStack_b4 = local_88.fields.m_HighlightedColor.fields.g;
                      local_b8 = (0.0 - local_b8) * 0.04 + local_b8;
                      fStack_b4 = (0.0 - fStack_b4) * 0.04 + fStack_b4;
                      local_a8 = local_88.fields.m_HighlightedColor.fields.b;
                      fStack_a4 = local_88.fields.m_HighlightedColor.fields.a;
                      local_a8 = (0.0 - local_a8) * 0.04 + local_a8;
                      fStack_a4 = (1.0 - fStack_a4) * 0.04 + fStack_a4;
                      local_98 = local_88.fields.m_PressedColor.fields.r;
                      fStack_94 = local_88.fields.m_PressedColor.fields.g;
                      local_128 = local_88.fields.m_PressedColor.fields.b;
                      fStack_124 = local_88.fields.m_PressedColor.fields.a;
                      value.fields.m_DisabledColor.fields.g = (0.0 - fStack_144) * 0.3 + fStack_144;
                      value.fields.m_DisabledColor.fields.r = (0.0 - local_148) * 0.3 + local_148;
                      value.fields.m_DisabledColor.fields.a = (1.0 - fStack_134) * 0.3 + fStack_134;
                      value.fields.m_DisabledColor.fields.b = (0.0 - local_138) * 0.3 + local_138;
                      value.fields.m_NormalColor.fields.g = fStack_144;
                      value.fields.m_NormalColor.fields.r = local_148;
                      value.fields.m_NormalColor.fields.a = fStack_134;
                      value.fields.m_NormalColor.fields.b = local_138;
                      value.fields.m_HighlightedColor.fields.g = fStack_b4;
                      value.fields.m_HighlightedColor.fields.r = local_b8;
                      value.fields.m_HighlightedColor.fields.a = fStack_a4;
                      value.fields.m_HighlightedColor.fields.b = local_a8;
                      value.fields.m_PressedColor.fields.g = (0.0 - fStack_94) * 0.12 + fStack_94;
                      value.fields.m_PressedColor.fields.r = (0.0 - local_98) * 0.12 + local_98;
                      value.fields.m_PressedColor.fields.a = (1.0 - fStack_124) * 0.12 + fStack_124;
                      value.fields.m_PressedColor.fields.b = (0.0 - local_128) * 0.12 + local_128;
                      value.fields.m_SelectedColor.fields.g = fStack_b4;
                      value.fields.m_SelectedColor.fields.r = local_b8;
                      value.fields.m_SelectedColor.fields.a = fStack_a4;
                      value.fields.m_SelectedColor.fields.b = local_a8;
                      value.fields.m_ColorMultiplier = 1.0;
                      value.fields.m_FadeDuration = 0.08;
                      UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                      __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).m_CanvasGroupCache;
                      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
                        pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                        pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar5,style,*ppvVar7,0,3,method_00);
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          __this_03 = (UnityEngine_RectTransform_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
                          if (g_data_057a694c == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                            g_data_057a694c = '\x01';
                          }
                          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchorMin
                                      (__this_03,
                                       (UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                       (MethodInfo *)0x0);
                            if (g_data_057a9c86 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                              g_data_057a9c86 = '\x01';
                            }
                            UnityEngine_RectTransform__set_anchorMax
                                      (__this_03,
                                       (UnityEngine_Vector2_o)
                                       *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_offsetMin
                                      (__this_03,(UnityEngine_Vector2_o)0x41800000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_offsetMax
                                      (__this_03,(UnityEngine_Vector2_o)0xc1800000,(MethodInfo *)0x0);
                            __this_04 = (UnityEngine_UI_Text_o *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_Text_GetComponent_Text);
                            if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(__this_04->klass->vtable)._75_set_text.methodPtr)
                                        (__this_04,*ppvVar7,(__this_04->klass->vtable)._75_set_text.method);
                              if (style != (UI_ElementStyle_o *)0x0) {
                                UnityEngine_UI_Text__set_fontSize
                                          (__this_04,(style->fields).FontSize,(MethodInfo *)0x0);
                                UnityEngine_UI_Text__set_supportRichText(__this_04,0,(MethodInfo *)0x0);
                                UnityEngine_UI_Text__set_alignment(__this_04,3,(MethodInfo *)0x0);
                                pSVar6 = (System_String_o *)
                                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                UVar8 = UI_UIManager__GetThemeColor
                                                  (pSVar6,"DefaultButton","TextColor","DefaultPanel",
                                                   (MethodInfo *)0x0);
                                (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                                          (UVar8.fields.r,UVar8.fields.b,__this_04,
                                           (__this_04->klass->vtable)._23_set_color.method);
                                UnityEngine_UI_Text__set_horizontalOverflow(__this_04,1,(MethodInfo *)0x0);
                                UnityEngine_UI_Text__set_verticalOverflow(__this_04,0,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_0437f13a;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0437f144:
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel$$DarkenColor
// il2cpp: UnityEngine_Color_o UI_CreateGameSelectMapPanel__DarkenColor (UI_CreateGameSelectMapPanel_o* __this, UnityEngine_Color_o color, float amount, const MethodInfo* method);
// 0x437f170

UnityEngine_Color_o
UI_CreateGameSelectMapPanel__DarkenColor
          (UI_CreateGameSelectMapPanel_o *__this,UnityEngine_Color_o color,float amount,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Color_o UVar3;
  
  fVar1 = 1.0;
  if (amount <= 1.0) {
    fVar1 = amount;
  }
  fVar1 = (float)(-(uint)(0.0 <= amount) & (uint)fVar1);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  UVar3.fields.r = color.fields.r + (0.0 - color.fields.r) * fVar2;
  UVar3.fields.g = color.fields.g + (0.0 - color.fields.g) * fVar2;
  UVar3.fields.b = color.fields.b + (0.0 - color.fields.b) * fVar2;
  UVar3.fields.a = color.fields.a + (1.0 - color.fields.a) * fVar2;
  return (UnityEngine_Color_o)UVar3.fields;
}


// UI.CreateGameSelectMapPanel$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___ctor (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x437f1b0

void UI_CreateGameSelectMapPanel___ctor(UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


