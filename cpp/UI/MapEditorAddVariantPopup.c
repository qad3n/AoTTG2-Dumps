// Type: UI.MapEditorAddVariantPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddVariantPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddVariantPopup.cs
// --------------------------------

// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x441b330

void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0 (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x441b5c0

void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddVariantPopup_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddVariantPopup_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._60_OnSelectObject.methodPtr;
    (*vtableDispatch)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._60_OnSelectObject.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorAddVariantPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__get_Title (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a760

System_String_o *
UI_MapEditorAddVariantPopup__get_Title(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae633 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Choose Variant");
    g_data_057ae633 = '\x01';
  }
  return "Choose Variant";
}


// UI.MapEditorAddVariantPopup$$get_Width
// il2cpp: float UI_MapEditorAddVariantPopup__get_Width (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a790

float UI_MapEditorAddVariantPopup__get_Width(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 1155.0;
}


// UI.MapEditorAddVariantPopup$$get_Height
// il2cpp: float UI_MapEditorAddVariantPopup__get_Height (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a7a0

float UI_MapEditorAddVariantPopup__get_Height(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 865.0;
}


// UI.MapEditorAddVariantPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddVariantPopup__get_TopBarHeight (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a7b0

float UI_MapEditorAddVariantPopup__get_TopBarHeight(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddVariantPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddVariantPopup__get_ScrollBar (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a7c0

bool_conflict
UI_MapEditorAddVariantPopup__get_ScrollBar(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddVariantPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddVariantPopup__get_VerticalSpacing (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a7d0

float UI_MapEditorAddVariantPopup__get_VerticalSpacing
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddVariantPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a7e0

int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding
                  (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorAddVariantPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441a7f0

int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding
                  (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorAddVariantPopup$$Setup
// il2cpp: void UI_MapEditorAddVariantPopup__Setup (UI_MapEditorAddVariantPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x441a800

void UI_MapEditorAddVariantPopup__Setup
               (UI_MapEditorAddVariantPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae634 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae634 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x441a930

void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.MapEditorAddVariantPopup$$Show
// il2cpp: void UI_MapEditorAddVariantPopup__Show (UI_MapEditorAddVariantPopup_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x4418bb0

void UI_MapEditorAddVariantPopup__Show
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *prefab,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppObject *collection;
  System_Collections_Generic_List_List_T___o *__this_08;
  long *plVar8;
  MethodInfo *method_00;
  undefined1 auVar9 [12];
  _union_249689 _Var10;
  Il2CppType *pIVar11;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar12;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  System_Collections_Generic_List_string__o *local_58;
  _union_249689 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *local_38;
  
  if (g_data_057ae635 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupItems_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae635 = '\x01';
  }
  _Var10.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppType *)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (System_Collections_Generic_List_string__o *)0x0;
  __this_00 = (__this->fields)._rows;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    _Var10 = local_48;
    pIVar11 = pIStack_40;
    obj = local_38;
    while (__this_01.fields._8_8_ = pIVar11, __this_01.fields._list = _Var10.genericMethod,
          __this_01.fields._current = (Il2CppObject *)obj,
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), (char)bVar7 != '\0') {
      pUVar12 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      obj = pUVar12;
    }
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = _Var10.genericMethod;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_System_String);
    lVar6 = MethodInfo_Void_Add;
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_07->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_07->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (__this_07->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_07->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)prefab;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,prefab);
          iVar3 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,(Il2CppObject *)prefab,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          iVar3 = *(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar5,(Il2CppObject *)prefab,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04418f3c;
            collection = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar5,(Il2CppObject *)prefab,MethodInfo_List_1_System_String_get_Item);
            System_Collections_Generic_List_object___AddRange
                      (__this_07,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
          }
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_08 = Utility_Util__GroupItems_object_
                                ((System_Collections_Generic_List_T__o *)__this_07,8,MethodInfo_List_1_List_1_System_String_GroupItems_String);
          if (__this_08 != (System_Collections_Generic_List_List_T___o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,
                       (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T_Enumerator_List_1_System_String_GetEnumerator);
            while (__this_03.fields._8_8_ = pIVar11, __this_03.fields._list = _Var10.genericMethod,
                  __this_03.fields._current = (Il2CppObject *)obj,
                  bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_03,(MethodInfo_321A1D0 *)&local_68), (char)bVar7 != '\0') {
              UI_MapEditorAddVariantPopup__CreateRow(__this,local_58,method_00);
            }
            __this_04.fields._8_8_ = pIVar11;
            __this_04.fields._list = _Var10.genericMethod;
            __this_04.fields._current = (Il2CppObject *)obj;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&local_68);
            goto label_04418f23;
          }
        }
      }
    }
  }
label_04418f3c:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar6 = *plVar8;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar11;
    __this_05.fields._list = _Var10.genericMethod;
    __this_05.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&local_68);
    if (lVar6 == 0) {
label_04418f23:
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_06.fields._8_8_ = pIVar11;
  __this_06.fields._list = _Var10.genericMethod;
  __this_06.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&local_68);
  _Unwind_Resume(auVar9._0_8_);
}


// UI.MapEditorAddVariantPopup$$CreateRow
// il2cpp: void UI_MapEditorAddVariantPopup__CreateRow (UI_MapEditorAddVariantPopup_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x441a950

void UI_MapEditorAddVariantPopup__CreateRow
               (UI_MapEditorAddVariantPopup_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  System_String_o *path;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Texture_o *value;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_07;
  Il2CppObject *pIVar6;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar7;
  UnityEngine_UI_RawImage_o *__this_08;
  long *plVar8;
  undefined8 uVar9;
  MethodInfo *extraout_RDX;
  long lVar10;
  UnityEngine_Texture_Fields *pUVar11;
  float fVar12;
  UnityEngine_Color_o UVar13;
  undefined1 auVar14 [12];
  undefined8 in_stack_ffffffffffffff88;
  UnityEngine_GameObject_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ae636 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Previews/");
    g_data_057ae636 = '\x01';
    method = extraout_RDX;
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar5 = (__this->fields).SinglePanel;
  fVar12 = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                            (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method,method);
  __this_06 = UI_ElementFactory__CreateHorizontalGroup(pUVar5,fVar12,3,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    in_stack_ffffffffffffff90 = __this_06;
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    while( true ) {
      __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)pSVar15;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') {
        __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_03.fields._current = (Il2CppObject *)pSVar15;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        goto label_0441aec8;
      }
      value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
      System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
      if (value == (UnityEngine_Texture_o *)0x0) break;
      value[1].klass = (UnityEngine_Texture_c *)__this;
      il2cpp_runtime_helper_022b4080(value + 1,__this);
      pUVar11 = &value->fields;
      (value->fields).m_CachedPtr = (intptr_t)local_48.fields._current;
      il2cpp_runtime_helper_022b4080(pUVar11);
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0441af45;
      pUVar5 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      __this_07 = UI_ElementFactory__InstantiateAndBind(pUVar5,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
      if (__this_07 == (UnityEngine_GameObject_o *)0x0) goto label_0441af4a;
      pIVar6 = UnityEngine_GameObject__GetComponent_object_(__this_07,MethodInfo_Button_GetComponent_Button);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_0441af4f;
      __this_00 = pIVar6[0x10].klass;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 == (Il2CppClass *)0x0) goto label_0441af54;
      __this_06 = in_stack_ffffffffffffff90;
      UnityEngine_Events_UnityEvent__AddListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
      in_stack_ffffffffffffff90 = __this_06;
      pSVar7 = (System_String_o *)
               (*(__this->klass->vtable)._59_GetPreviewName.methodPtr)
                         (__this,pUVar11->m_CachedPtr,(__this->klass->vtable)._59_GetPreviewName.method);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
      pSVar7 = System_String__Concat_3ae5ba0("Previews/",pSVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar7,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar5 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af86;
        pUVar5 = UnityEngine_Transform__Find(pUVar5,"Icon",(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af8b;
        __this_08 = (UnityEngine_UI_RawImage_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
        if (__this_08 == (UnityEngine_UI_RawImage_o *)0x0) goto label_0441af90;
        if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
          UnityEngine_UI_RawImage__set_texture(__this_08,value,(MethodInfo *)0x0);
          goto label_0441adac;
        }
        goto label_0441af95;
      }
      pUVar5 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af81;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Icon",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af7c;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_0441af77;
      (*pIVar6->klass->vtable[0x17].methodPtr)(0x3ea3d70a,0x3f8000003ea3d70a,pIVar6);
label_0441adac:
      pUVar5 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af59;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af5e;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_0441af63;
      (*pIVar6->klass->vtable[0x4b].methodPtr)(pIVar6,pUVar11->m_CachedPtr,pIVar6->klass->vtable[0x4b].method)
      ;
      pUVar5 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af68;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0441af6d;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar13 = UI_UIManager__GetThemeColor
                         ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar12 = UVar13.fields.r;
      if (pIVar6 == (Il2CppObject *)0x0) goto label_0441af72;
      (*pIVar6->klass->vtable[0x17].methodPtr)
                (fVar12,UVar13.fields._8_8_,pIVar6,pIVar6->klass->vtable[0x17].method);
    }
    il2cpp_runtime_helper_022b2c90();
label_0441af45:
    il2cpp_runtime_helper_022b2c90();
label_0441af4a:
    il2cpp_runtime_helper_022b2c90();
label_0441af4f:
    il2cpp_runtime_helper_022b2c90();
label_0441af54:
    il2cpp_runtime_helper_022b2c90();
label_0441af59:
    il2cpp_runtime_helper_022b2c90();
label_0441af5e:
    il2cpp_runtime_helper_022b2c90();
label_0441af63:
    il2cpp_runtime_helper_022b2c90();
label_0441af68:
    il2cpp_runtime_helper_022b2c90();
label_0441af6d:
    fVar12 = (float)il2cpp_runtime_helper_022b2c90();
label_0441af72:
    il2cpp_runtime_helper_022b2c90(fVar12);
label_0441af77:
    il2cpp_runtime_helper_022b2c90();
label_0441af7c:
    il2cpp_runtime_helper_022b2c90();
label_0441af81:
    il2cpp_runtime_helper_022b2c90();
label_0441af86:
    il2cpp_runtime_helper_022b2c90();
label_0441af8b:
    il2cpp_runtime_helper_022b2c90();
label_0441af90:
    il2cpp_runtime_helper_022b2c90();
label_0441af95:
    il2cpp_runtime_helper_022b2fd0(value);
  }
  do {
    __this_06 = in_stack_ffffffffffffff90;
    auVar14 = il2cpp_runtime_helper_022b2c90();
    uVar9 = auVar14._0_8_;
    in_stack_ffffffffffffff90 = __this_06;
    if (auVar14._8_4_ != 1) {
      lVar10 = 0;
label_0441b2f5:
      __this_05.fields._8_8_ = in_stack_ffffffffffffff90;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_05.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      if (lVar10 == 0) {
        _Unwind_Resume(uVar9);
      }
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022fefe0(lVar10);
      il2cpp_runtime_helper_01f66400();
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      return;
    }
    plVar8 = (long *)__cxa_begin_catch(uVar9);
    lVar10 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_04.fields._current = (Il2CppObject *)pSVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar10 != 0) {
      uVar9 = il2cpp_runtime_helper_022fefe0(lVar10);
      goto label_0441b2f5;
    }
label_0441aec8:
    lVar10 = MethodInfo_Void_Add;
    __this_01 = (__this->fields)._rows;
    if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = __this_06;
          il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2,__this_06);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_06,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorAddVariantPopup$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__GetPreviewName (UI_MapEditorAddVariantPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x441b340

System_String_o *
UI_MapEditorAddVariantPopup__GetPreviewName
          (UI_MapEditorAddVariantPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UnityEngine_UI_Text_o *__this_00;
  System_String_o *extraout_RAX;
  long *plVar5;
  UI_TooltipPopup_o *__this_01;
  
  pSVar4 = item;
  if (g_data_057ae637 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&"Preview");
    g_data_057ae637 = '\x01';
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) goto label_0441b3c2;
label_0441b363:
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  else {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) != 0) goto label_0441b363;
label_0441b3c2:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar4 = item;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)item,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0441b444;
      item = (System_String_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)item,MethodInfo_String_get_Item);
    }
    pSVar4 = System_String__Concat_3ae5ba0(item,"Preview",(MethodInfo *)0x0);
    return pSVar4;
  }
label_0441b444:
  plVar5 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae638 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae638 = '\x01';
  }
  __this_01 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_01 != (UI_TooltipPopup_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)) {
      GameManagers_MapEditorGameManager__AddObject
                ((GameManagers_MapEditorGameManager_o *)__this_01,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_String_o *)(**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      return pSVar4;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae639 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae639 = '\x01';
  }
  __this_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._label = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._label);
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.MapEditorAddVariantPopup$$OnSelectObject
// il2cpp: void UI_MapEditorAddVariantPopup__OnSelectObject (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x441b450

void UI_MapEditorAddVariantPopup__OnSelectObject
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Text_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  
  if (g_data_057ae638 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae638 = '\x01';
  }
  __this_01 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_01 != (UI_TooltipPopup_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)) {
      GameManagers_MapEditorGameManager__AddObject
                ((GameManagers_MapEditorGameManager_o *)__this_01,name,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae639 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae639 = '\x01';
  }
  __this_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._label = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._label);
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___ctor (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441b500

void UI_MapEditorAddVariantPopup___ctor(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae639 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae639 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._rows = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rows);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddVariantPopup___Setup_b__18_0 (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x441b580

void UI_MapEditorAddVariantPopup___Setup_b__18_0(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae63a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae63a = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


