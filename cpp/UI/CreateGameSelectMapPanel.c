// Type: UI.CreateGameSelectMapPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameSelectMapPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGameSelectMapPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGameSelectMapPanel.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass12_0___ctor (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x406fe50

void UI_CreateGameSelectMapPanel_<>c__DisplayClass12_0___ctor
               (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass12_0$$<Setup>b__0
// il2cpp: bool UI_CreateGameSelectMapPanel___c__DisplayClass12_0___Setup_b__0 (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o* __this, System_String_o* map, const MethodInfo* method);
// 0x40717b0

bool_conflict
UI_CreateGameSelectMapPanel_<>c__DisplayClass12_0__<Setup>b__0
          (UI_CreateGameSelectMapPanel___c__DisplayClass12_0_o *__this,System_String_o *map,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  
  if (map != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(map,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass14_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass14_0___ctor (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x4070b10

void UI_CreateGameSelectMapPanel_<>c__DisplayClass14_0___ctor
               (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass14_0$$<CreateRow>b__0
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass14_0___CreateRow_b__0 (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x40717e0

void UI_CreateGameSelectMapPanel_<>c__DisplayClass14_0__<CreateRow>b__0
               (UI_CreateGameSelectMapPanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  UI_CreateGameSelectMapPanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CreateGameSelectMapPanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._38_OnSelectObject.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._38_OnSelectObject.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass18_0___ctor (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4071750

void UI_CreateGameSelectMapPanel_<>c__DisplayClass18_0___ctor
               (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPanel.<>c__DisplayClass18_0$$<CreateCustomTextRow>b__0
// il2cpp: void UI_CreateGameSelectMapPanel___c__DisplayClass18_0___CreateCustomTextRow_b__0 (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4071810

void UI_CreateGameSelectMapPanel_<>c__DisplayClass18_0__<CreateCustomTextRow>b__0
               (UI_CreateGameSelectMapPanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_CreateGameSelectMapPanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CreateGameSelectMapPanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._38_OnSelectObject.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._38_OnSelectObject.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameSelectMapPanel__get_ScrollBar (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x406fa80

bool_conflict
UI_CreateGameSelectMapPanel__get_ScrollBar(UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameSelectMapPanel$$get_VerticalSpacing
// il2cpp: float UI_CreateGameSelectMapPanel__get_VerticalSpacing (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x406fa90

float UI_CreateGameSelectMapPanel__get_VerticalSpacing
                (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.CreateGameSelectMapPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CreateGameSelectMapPanel__get_HorizontalPadding (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x406faa0

int32_t UI_CreateGameSelectMapPanel__get_HorizontalPadding
                  (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.CreateGameSelectMapPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CreateGameSelectMapPanel__get_VerticalPadding (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x406fab0

int32_t UI_CreateGameSelectMapPanel__get_VerticalPadding
                  (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.CreateGameSelectMapPanel$$get_CustomListButtonHeight
// il2cpp: float UI_CreateGameSelectMapPanel__get_CustomListButtonHeight (UI_CreateGameSelectMapPanel_o* __this, const MethodInfo* method);
// 0x406fac0

float UI_CreateGameSelectMapPanel__get_CustomListButtonHeight
                (UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  return 42.0;
}


// UI.CreateGameSelectMapPanel$$Setup
// il2cpp: void UI_CreateGameSelectMapPanel__Setup (UI_CreateGameSelectMapPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x406fad0

void UI_CreateGameSelectMapPanel__Setup
               (UI_CreateGameSelectMapPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_c *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  Il2CppObject *__this_03;
  System_String_o *pSVar4;
  System_Collections_Generic_List_string__o *items;
  Il2CppClass *pIVar5;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_List_T___o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  System_Collections_Generic_List_string__o *items_00;
  
  if (DAT_057044a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CreateGameSelectMapPopup);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_List_1_System_String___GetE);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Setup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass12_0);
    il2cpp_init_method_metadata(&MethodInfo_List_1_List_1_System_String___GroupItems_String);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Custom");
    DAT_057044a4 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  items_00 = (System_Collections_Generic_List_string__o *)0x0;
  __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass12_0);
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_CreateGameSelectMapPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGameSelectMapPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    pSVar4 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar4,"Custom",(MethodInfo *)0x0);
    *(char *)&(__this->fields).IsCustom = (char)bVar3;
    items = (System_Collections_Generic_List_string__o *)
            (*(__this->klass->vtable)._36_GetItems.methodPtr)
                      (__this,pSVar4,(__this->klass->vtable)._36_GetItems.method);
    pUVar2 = parent[1].fields._currentCategoryPanel;
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = pUVar2[1].klass, __this_00 != (UnityEngine_GameObject_c *)0x0)) {
      pSVar4 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        pIVar5 = (Il2CppClass *)System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
        if (__this_03 != (Il2CppObject *)0x0) {
          __this_03[1].klass = pIVar5;
          il2cpp_runtime_glue(__this_03 + 1);
          bVar3 = System_String__IsNullOrEmpty
                            ((System_String_o *)__this_03[1].klass,(MethodInfo *)0x0);
          method_00 = extraout_RDX;
          if ((char)bVar3 == '\0') {
            predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
            System_Func<object__bool>___ctor();
            source = System_Linq_Enumerable__Where<object>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)items,predicate
                                ,MethodInfo_IEnumerable_1_System_String__Where_String);
            items = (System_Collections_Generic_List_string__o *)
                    System_Linq_Enumerable__ToList<object>(source,MethodInfo_List_1_System_String__ToList_String);
            method_00 = extraout_RDX_00;
          }
          if ((char)(__this->fields).IsCustom == '\0') {
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_04 = Utility_Util__GroupItems<object>
                                  ((System_Collections_Generic_List_T__o *)items,4,MethodInfo_List_1_List_1_System_String___GroupItems_String);
            if (__this_04 == (System_Collections_Generic_List_List_T___o *)0x0) goto LAB_0406fdbe;
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                       (System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_T__Enumerator_List_1_System_String___GetE);
            while( true ) {
              __this_01.fields._8_8_ = pIVar7;
              __this_01.fields._list = pSVar6;
              __this_01.fields._current = (Il2CppObject *)items_00;
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
              if ((char)bVar3 == '\0') break;
              UI_CreateGameSelectMapPanel__CreateRow(__this,items_00,method_01);
            }
            __this_02.fields._8_8_ = pIVar7;
            __this_02.fields._list = pSVar6;
            __this_02.fields._current = (Il2CppObject *)items_00;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
          }
          else {
            UI_CreateGameSelectMapPanel__CreateCustomTextList(__this,items,method_00);
          }
          return;
        }
      }
    }
  }
LAB_0406fdbe:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_CreateGameSelectMapPanel__GetItems (UI_CreateGameSelectMapPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4070950

System_Collections_Generic_List_string__o *
UI_CreateGameSelectMapPanel__GetItems
          (UI_CreateGameSelectMapPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  System_String_array *source;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (DAT_057044a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    DAT_057044a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String__ToList_String);
  return pSVar1;
}


// UI.CreateGameSelectMapPanel$$CreateRow
// il2cpp: void UI_CreateGameSelectMapPanel__CreateRow (UI_CreateGameSelectMapPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4070070

void UI_CreateGameSelectMapPanel__CreateRow
               (UI_CreateGameSelectMapPanel_o *__this,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  Il2CppClass *__this_00;
  System_String_o *path;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_03;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar4;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppObject *pIVar5;
  float spacing;
  UnityEngine_Color_o UVar6;
  UnityEngine_GameObject_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_057044a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass14_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Misc/MapSelectObjectButton");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"Previews/");
    DAT_057044a6 = '\x01';
    method = extraout_RDX;
  }
  pUVar3 = (__this->fields).SinglePanel;
  spacing = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                             (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method,method);
  __this_03 = UI_ElementFactory__CreateHorizontalGroup(pUVar3,spacing,3,method_00);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
  do {
    __this_01.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this;
    __this_01.fields._current = (Il2CppObject *)pSVar7;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar1 == '\0') {
      __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)__this;
      __this_02.fields._current = (Il2CppObject *)pSVar7;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass14_0);
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2[1].monitor = __this;
    il2cpp_runtime_glue(&pIVar2[1].monitor);
    pIVar5 = pIVar2 + 1;
    pIVar2[1].klass = (Il2CppClass *)local_48.fields._current;
    il2cpp_runtime_glue(pIVar5);
    if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
    in_stack_ffffffffffffff90 = UI_ElementFactory__InstantiateAndBind(pUVar3,"Prefabs/Misc/MapSelectObjectButton",method_01)
    ;
    if (in_stack_ffffffffffffff90 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(in_stack_ffffffffffffff90,MethodInfo_Button_GetComponent_Button);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = pIVar2[0x10].klass;
    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
    if ((char)(__this->fields).IsCustom == '\0') {
      pSVar4 = (System_String_o *)
               (*(__this->klass->vtable)._37_GetPreviewName.methodPtr)
                         (__this,pIVar5->klass,(__this->klass->vtable)._37_GetPreviewName.method);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x20);
      pSVar4 = System_String__Concat("Previews/",pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar4,0,(MethodInfo *)0x0);
      if (value == (UnityEngine_Texture_o *)0x0) goto LAB_04070334;
      pUVar3 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Icon",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
      if (__this_04 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (value->klass != TypeInfo_Texture2D) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(value);
      }
      UnityEngine_UI_RawImage__set_texture(__this_04,value,(MethodInfo *)0x0);
    }
    else {
LAB_04070334:
      pUVar3 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Icon",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar2->klass->vtable[0x17].methodPtr)(0x3ea3d70a,0x3f8000003ea3d70a,pIVar2);
    }
    pUVar3 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*pIVar2->klass->vtable[0x4b].methodPtr)
              (pIVar2,pIVar5->klass,pIVar2->klass->vtable[0x4b].method);
    pUVar3 = UnityEngine_GameObject__get_transform(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar6 = UI_UIManager__GetThemeColor
                      ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar6.fields.r,UVar6.fields._8_8_);
    }
    (*pIVar2->klass->vtable[0x17].methodPtr)(pIVar2,pIVar2->klass->vtable[0x17].method);
  } while( true );
}


// UI.CreateGameSelectMapPanel$$GetPreviewName
// il2cpp: System_String_o* UI_CreateGameSelectMapPanel__GetPreviewName (UI_CreateGameSelectMapPanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4070c40

System_String_o *
UI_CreateGameSelectMapPanel__GetPreviewName
          (UI_CreateGameSelectMapPanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057044a7 == '\0') {
    il2cpp_init_method_metadata(&"Preview");
    DAT_057044a7 = '\x01';
  }
  pSVar1 = System_String__Concat(item,"Preview",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CreateGameSelectMapPanel$$OnSelectObject
// il2cpp: void UI_CreateGameSelectMapPanel__OnSelectObject (UI_CreateGameSelectMapPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4070c80

void UI_CreateGameSelectMapPanel__OnSelectObject
               (UI_CreateGameSelectMapPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_BasePanel_o *pUVar3;
  long lVar4;
  Settings_TypedSetting_T__o *pSVar5;
  System_String_o *value;
  long *plVar6;
  
  if (DAT_057044a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CreateGameSelectMapPopup);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057044a8 = '\x01';
  }
  pUVar3 = (__this->fields).Parent;
  if (pUVar3 == (UI_BasePanel_o *)0x0) goto LAB_04070ec4;
  bVar1 = (TypeInfo_CreateGameSelectMapPopup->_2).naturalAligment;
  if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
     ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGameSelectMapPopup)) goto LAB_04070ec9;
  value = UI_BasePanel__GetCurrentCategoryName(pUVar3,(MethodInfo *)0x0);
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((lVar4 == 0) ||
     ((lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0 ||
      (pSVar5 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x20),
      pSVar5 == (Settings_TypedSetting_T__o *)0x0)))) goto LAB_04070ec4;
  Settings_TypedSetting<object>__set_Value(pSVar5,(Il2CppObject *)value,MethodInfo_Void_set_Value);
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((lVar4 == 0) ||
     ((lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0 ||
      (pSVar5 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x28),
      pSVar5 == (Settings_TypedSetting_T__o *)0x0)))) goto LAB_04070ec4;
  Settings_TypedSetting<object>__set_Value(pSVar5,(Il2CppObject *)name,MethodInfo_Void_set_Value);
  iVar2 = *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    plVar6 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (iVar2 != 2) goto LAB_04070e5b;
LAB_04070df7:
    if (plVar6 == (long *)0x0) goto LAB_04070ec4;
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) {
LAB_04070ec9:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pUVar3 = (UI_BasePanel_o *)plVar6[0x21];
  }
  else {
    plVar6 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (iVar2 == 2) goto LAB_04070df7;
LAB_04070e5b:
    if (plVar6 == (long *)0x0) goto LAB_04070ec4;
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_MainMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) !=
        TypeInfo_MainMenu)) goto LAB_04070ec9;
    pUVar3 = (UI_BasePanel_o *)plVar6[0x13];
  }
  if (pUVar3 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Parent;
    if (pUVar3 != (UI_BasePanel_o *)0x0) {
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
      return;
    }
  }
LAB_04070ec4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel$$CreateCustomTextList
// il2cpp: void UI_CreateGameSelectMapPanel__CreateCustomTextList (UI_CreateGameSelectMapPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x406fe60

void UI_CreateGameSelectMapPanel__CreateCustomTextList
               (UI_CreateGameSelectMapPanel_o *__this,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *style;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  float fVar4;
  undefined1 in_stack_ffffffffffffffb8 [12];
  Il2CppObject *pIVar5;
  
  if (DAT_057044a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    DAT_057044a9 = '\x01';
    method = extraout_RDX;
  }
  pIVar5 = (Il2CppObject *)0x0;
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar3;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar3);
  fVar4 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                           (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    fVar4 = fVar4 - ((float)iVar1 + (float)iVar1);
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    while( true ) {
      __this_00.fields._version = (int32_t)fVar4;
      __this_00.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffffb8._8_4_;
      __this_00.fields._current = pIVar5;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') break;
      UI_CreateGameSelectMapPanel__CreateCustomTextRow
                (__this,style,(System_String_o *)0x0,fVar4,in_RCX);
    }
    __this_01.fields._version = (int32_t)fVar4;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_
    ;
    __this_01.fields._index = in_stack_ffffffffffffffb8._8_4_;
    __this_01.fields._current = pIVar5;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel$$CreateCustomTextRow
// il2cpp: void UI_CreateGameSelectMapPanel__CreateCustomTextRow (UI_CreateGameSelectMapPanel_o* __this, UI_ElementStyle_o* style, System_String_o* item, float width, const MethodInfo* method);
// 0x4070ed0

void UI_CreateGameSelectMapPanel__CreateCustomTextRow
               (UI_CreateGameSelectMapPanel_o *__this,UI_ElementStyle_o *style,System_String_o *item
               ,float width,MethodInfo *method)

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
  undefined8 uVar7;
  MethodInfo *method_00;
  void **ppvVar8;
  UnityEngine_Color_o UVar9;
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
  
  if (DAT_057044aa == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateCustomTextRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"CustomMapRow");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"");
    DAT_057044aa = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_0407172a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar1[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar1 + 1,__this);
  ppvVar8 = &pIVar1[1].monitor;
  pIVar1[1].monitor = item;
  il2cpp_runtime_glue(ppvVar8,item);
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto LAB_0407172a;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_04071734;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_04071734;
    }
    if ((uint)components->max_length < 2) goto LAB_0407172f;
    components->m_Items[1] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_04071734;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 2);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_04071734:
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
      }
      if (3 < (uint)components->max_length) {
        components->m_Items[3] = pSVar2;
        il2cpp_runtime_glue(components->m_Items + 3,pSVar2);
        pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar4,"CustomMapRow",components,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent
                      (pUVar5,(__this->fields).SinglePanel,0,(MethodInfo *)0x0);
            pIVar1 = UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar1 != (Il2CppObject *)0x0) {
              (*pIVar1->klass->vtable[0x24].methodPtr)
                        (width,pIVar1,pIVar1->klass->vtable[0x24].method);
              (*(__this->klass->vtable)._35_get_CustomListButtonHeight.methodPtr)
                        (__this,(__this->klass->vtable)._35_get_CustomListButtonHeight.method);
              (*pIVar1->klass->vtable[0x26].methodPtr)(pIVar1,pIVar1->klass->vtable[0x26].method);
              pSVar6 = (System_String_o *)
                       (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              method_00 = (MethodInfo *)0x0;
              UI_UIManager__GetThemeColorBlock
                        (&local_88,pSVar6,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                il2cpp_init_class();
              }
              __this_01 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Image_GetComponent_Image);
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
                UnityEngine_UI_Image__set_sprite
                          (__this_01,(UnityEngine_Sprite_o *)0x0,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_01,0,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Button_GetComponent_Button);
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
                  __this_00 = (UnityEngine_Events_UnityEvent_o *)
                              (__this_02->fields).m_CanvasGroupCache;
                  call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
                    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                    pUVar4 = UI_ElementFactory__CreateDefaultLabel
                                       (pUVar5,style,*ppvVar8,0,3,method_00);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      __this_03 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
                      if (DAT_056fe093 == '\0') {
                        il2cpp_init_method_metadata(&TypeInfo_Vector2);
                        DAT_056fe093 = '\x01';
                      }
                      if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMin
                                  (__this_03,
                                   (UnityEngine_Vector2_o)
                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                   (MethodInfo *)0x0);
                        if (DAT_0570136e == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_0570136e = '\x01';
                        }
                        UnityEngine_RectTransform__set_anchorMax
                                  (__this_03,
                                   (UnityEngine_Vector2_o)
                                   *(UnityEngine_Vector2_Fields *)
                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_offsetMin
                                  (__this_03,(UnityEngine_Vector2_o)0x41800000,(MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_offsetMax
                                  (__this_03,(UnityEngine_Vector2_o)0xc1800000,(MethodInfo *)0x0);
                        __this_04 = (UnityEngine_UI_Text_o *)
                                    UnityEngine_GameObject__GetComponent<object>
                                              (pUVar4,MethodInfo_Text_GetComponent_Text);
                        if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(__this_04->klass->vtable)._75_set_text.methodPtr)
                                    (__this_04,*ppvVar8,
                                     (__this_04->klass->vtable)._75_set_text.method);
                          if (style != (UI_ElementStyle_o *)0x0) {
                            UnityEngine_UI_Text__set_fontSize
                                      (__this_04,(style->fields).FontSize,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_supportRichText(__this_04,0,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_alignment(__this_04,3,(MethodInfo *)0x0);
                            pSVar6 = (System_String_o *)
                                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                       method);
                            UVar9 = UI_UIManager__GetThemeColor
                                              (pSVar6,"DefaultButton","TextColor","DefaultPanel",
                                               (MethodInfo *)0x0);
                            (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                                      (UVar9.fields.r,UVar9.fields.b,__this_04,
                                       (__this_04->klass->vtable)._23_set_color.method);
                            UnityEngine_UI_Text__set_horizontalOverflow
                                      (__this_04,1,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_verticalOverflow(__this_04,0,(MethodInfo *)0x0)
                            ;
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
        goto LAB_0407172a;
      }
    }
  }
LAB_0407172f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPanel$$DarkenColor
// il2cpp: UnityEngine_Color_o UI_CreateGameSelectMapPanel__DarkenColor (UI_CreateGameSelectMapPanel_o* __this, UnityEngine_Color_o color, float amount, const MethodInfo* method);
// 0x4071760

UnityEngine_Color_o
UI_CreateGameSelectMapPanel__DarkenColor
          (UI_CreateGameSelectMapPanel_o *__this,UnityEngine_Color_o color,float amount,
          MethodInfo *method)

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
// 0x40717a0

void UI_CreateGameSelectMapPanel___ctor(UI_CreateGameSelectMapPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


