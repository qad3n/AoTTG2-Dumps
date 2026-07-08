// Type: UI.MapEditorAddVariantPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorAddVariantPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorAddVariantPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4106e60

void UI_MapEditorAddVariantPopup_<>c__DisplayClass21_0___ctor
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0 (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x41070f0

void UI_MapEditorAddVariantPopup_<>c__DisplayClass21_0__<CreateRow>b__0
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddVariantPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddVariantPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._60_OnSelectObject.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._60_OnSelectObject.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddVariantPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__get_Title (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x4106290

System_String_o *
UI_MapEditorAddVariantPopup__get_Title(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704897 == '\0') {
    il2cpp_init_method_metadata(&"Choose Variant");
    DAT_05704897 = '\x01';
  }
  return "Choose Variant";
}


// UI.MapEditorAddVariantPopup$$get_Width
// il2cpp: float UI_MapEditorAddVariantPopup__get_Width (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x41062c0

float UI_MapEditorAddVariantPopup__get_Width
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 1155.0;
}


// UI.MapEditorAddVariantPopup$$get_Height
// il2cpp: float UI_MapEditorAddVariantPopup__get_Height (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x41062d0

float UI_MapEditorAddVariantPopup__get_Height
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 865.0;
}


// UI.MapEditorAddVariantPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddVariantPopup__get_TopBarHeight (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x41062e0

float UI_MapEditorAddVariantPopup__get_TopBarHeight
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddVariantPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddVariantPopup__get_ScrollBar (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x41062f0

bool_conflict
UI_MapEditorAddVariantPopup__get_ScrollBar(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddVariantPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddVariantPopup__get_VerticalSpacing (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x4106300

float UI_MapEditorAddVariantPopup__get_VerticalSpacing
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddVariantPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x4106310

int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding
                  (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorAddVariantPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x4106320

int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding
                  (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorAddVariantPopup$$Setup
// il2cpp: void UI_MapEditorAddVariantPopup__Setup (UI_MapEditorAddVariantPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4106330

void UI_MapEditorAddVariantPopup__Setup
               (UI_MapEditorAddVariantPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_05704898 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704898 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4106460

void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.MapEditorAddVariantPopup$$Show
// il2cpp: void UI_MapEditorAddVariantPopup__Show (UI_MapEditorAddVariantPopup_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x41046e0

void UI_MapEditorAddVariantPopup__Show
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *prefab,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_05;
  Il2CppObject *collection;
  System_Collections_Generic_List_List_T___o *__this_06;
  MethodInfo *method_00;
  _union_247328 _Var8;
  Il2CppType *pIVar9;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar10;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  System_Collections_Generic_List_string__o *local_58;
  _union_247328 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *local_38;
  
  if (DAT_05704899 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Current);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_List_1_System_String___GetE);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_List_1_System_String___GroupItems_String);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704899 = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (System_Collections_Generic_List_string__o *)0x0;
  __this_00 = (__this->fields)._rows;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    _Var8 = local_48;
    pIVar9 = pIStack_40;
    obj = local_38;
    while (__this_01.fields._8_8_ = pIVar9, __this_01.fields._list = _Var8.genericMethod,
          __this_01.fields._current = (Il2CppObject *)obj,
          bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
          (char)bVar7 != '\0') {
      pUVar10 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      obj = pUVar10;
    }
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = _Var8.genericMethod;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_05,MethodInfo_List_1_System_String);
    lVar6 = MethodInfo_Void_Add;
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_05->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (__this_05->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_05->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)prefab;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,prefab);
          iVar3 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_05,(Il2CppObject *)prefab,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          iVar3 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_init_class();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar5,(Il2CppObject *)prefab,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_04104a6c;
            collection = System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar5,(Il2CppObject *)prefab,MethodInfo_List_1_System_String__get_Item);
            System_Collections_Generic_List<object>__AddRange
                      (__this_05,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       MethodInfo_Void_AddRange);
          }
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_06 = Utility_Util__GroupItems<object>
                                ((System_Collections_Generic_List_T__o *)__this_05,8,MethodInfo_List_1_List_1_System_String___GroupItems_String);
          if (__this_06 != (System_Collections_Generic_List_List_T___o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,
                       (System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_T__Enumerator_List_1_System_String___GetE);
            while (__this_03.fields._8_8_ = pIVar9, __this_03.fields._list = _Var8.genericMethod,
                  __this_03.fields._current = (Il2CppObject *)obj,
                  bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_03,(MethodInfo_3185E20 *)&local_68), (char)bVar7 != '\0'
                  ) {
              UI_MapEditorAddVariantPopup__CreateRow(__this,local_58,method_00);
            }
            __this_04.fields._8_8_ = pIVar9;
            __this_04.fields._list = _Var8.genericMethod;
            __this_04.fields._current = (Il2CppObject *)obj;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_04,(MethodInfo_3185E10 *)&local_68);
            UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_04104a6c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddVariantPopup$$CreateRow
// il2cpp: void UI_MapEditorAddVariantPopup__CreateRow (UI_MapEditorAddVariantPopup_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4106480

void UI_MapEditorAddVariantPopup__CreateRow
               (UI_MapEditorAddVariantPopup_o *__this,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  System_String_o *path;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *__this_04;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar8;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *__this_06;
  MethodInfo *extraout_RDX;
  Il2CppObject *pIVar9;
  float spacing;
  UnityEngine_Color_o UVar10;
  undefined8 in_stack_ffffffffffffff88;
  UnityEngine_GameObject_o *pUVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_0570489a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"Previews/");
    DAT_0570489a = '\x01';
    method = extraout_RDX;
  }
  pUVar7 = (__this->fields).SinglePanel;
  spacing = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                             (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method,method);
  __this_04 = UI_ElementFactory__CreateHorizontalGroup(pUVar7,spacing,3,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    pUVar11 = __this_04;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    while( true ) {
      __this_02.fields._8_8_ = pUVar11;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)pSVar12;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar5 == '\0') break;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar6[1].monitor = __this;
      il2cpp_runtime_glue(&pIVar6[1].monitor,__this);
      pIVar9 = pIVar6 + 1;
      pIVar6[1].klass = (Il2CppClass *)local_48.fields._current;
      il2cpp_runtime_glue(pIVar9);
      if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
      __this_05 = UI_ElementFactory__InstantiateAndBind(pUVar7,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar6 = UnityEngine_GameObject__GetComponent<object>(__this_05,MethodInfo_Button_GetComponent_Button);
      if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00 = pIVar6[0x10].klass;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04 = pUVar11;
      UnityEngine_Events_UnityEvent__AddListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
      pUVar11 = __this_04;
      pSVar8 = (System_String_o *)
               (*(__this->klass->vtable)._59_GetPreviewName.methodPtr)
                         (__this,pIVar9->klass,(__this->klass->vtable)._59_GetPreviewName.method);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
      pSVar8 = System_String__Concat("Previews/",pSVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar8,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                        );
      if ((char)bVar5 == '\0') {
        pUVar7 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Icon",(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar6 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*pIVar6->klass->vtable[0x17].methodPtr)(0x3ea3d70a,0x3f8000003ea3d70a,pIVar6);
      }
      else {
        pUVar7 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Icon",(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_06 = (UnityEngine_UI_RawImage_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
        if (__this_06 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(value);
        }
        UnityEngine_UI_RawImage__set_texture(__this_06,value,(MethodInfo *)0x0);
      }
      pUVar7 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar6 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
      if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar6->klass->vtable[0x4b].methodPtr)
                (pIVar6,pIVar9->klass,pIVar6->klass->vtable[0x4b].method);
      pUVar7 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar6 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar10 = UI_UIManager__GetThemeColor
                         ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception(UVar10.fields.r,UVar10.fields._8_8_);
      }
      (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    }
    __this_03.fields._8_8_ = pUVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    lVar4 = MethodInfo_Void_Add;
    __this_01 = (__this->fields)._rows;
    if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = __this_04;
          il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,__this_04);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_04,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddVariantPopup$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__GetPreviewName (UI_MapEditorAddVariantPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4106e70

System_String_o *
UI_MapEditorAddVariantPopup__GetPreviewName
          (UI_MapEditorAddVariantPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_0570489b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&"Preview");
    DAT_0570489b = '\x01';
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) goto LAB_04106ef2;
LAB_04106e93:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  else {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) != 0) goto LAB_04106e93;
LAB_04106ef2:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04106f74;
      item = (System_String_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,(Il2CppObject *)item,MethodInfo_String_get_Item);
    }
    pSVar3 = System_String__Concat(item,"Preview",(MethodInfo *)0x0);
    return pSVar3;
  }
LAB_04106f74:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddVariantPopup$$OnSelectObject
// il2cpp: void UI_MapEditorAddVariantPopup__OnSelectObject (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4106f80

void UI_MapEditorAddVariantPopup__OnSelectObject
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  if (DAT_0570489c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570489c = '\x01';
  }
  __this_00 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)) {
      GameManagers_MapEditorGameManager__AddObject(__this_00,name,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddVariantPopup$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___ctor (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x4107030

void UI_MapEditorAddVariantPopup___ctor(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_0570489d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_0570489d = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._rows = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._rows);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddVariantPopup___Setup_b__18_0 (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x41070b0

void UI_MapEditorAddVariantPopup__<Setup>b__18_0
               (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_0570489e == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570489e = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


