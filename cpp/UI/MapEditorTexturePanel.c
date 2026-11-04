// Type: UI.MapEditorTexturePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorTexturePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePanel.cs
// --------------------------------

// UI.MapEditorTexturePanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTexturePanel___c___cctor (const MethodInfo* method);
// 0x1822ea8f0

void UI_MapEditorTexturePanel___c___cctor(MethodInfo *method)

{
  UI_MapEditorTexturePanel___c_o *__this;
  
  if (Il2CppMethodInitialized_1843475d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTexturePanel_c);
    Il2CppMethodInitialized_1843475d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9,__this);
  return;
}


// UI.MapEditorTexturePanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___c___ctor (UI_MapEditorTexturePanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorTexturePanel___c___ctor(UI_MapEditorTexturePanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTexturePanel.<>c$$<GetItems>b__0_0
// il2cpp: System_String_o* UI_MapEditorTexturePanel___c___GetItems_b__0_0 (UI_MapEditorTexturePanel___c_o* __this, Map_MapScriptBasicMaterial_o* x, const MethodInfo* method);
// 0x1822ea1d0

System_String_o *
UI_MapEditorTexturePanel___c___GetItems_b__0_0
          (UI_MapEditorTexturePanel___c_o *__this,Map_MapScriptBasicMaterial_o *x,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_array *pSVar1;
  
  if ((x != (Map_MapScriptBasicMaterial_o *)0x0) &&
     (__this_00 = (x->fields).Texture, __this_00 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Split(__this_00,0x2f,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if (1 < (uint)pSVar1->max_length) {
        return pSVar1->m_Items[1];
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTexturePanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorTexturePanel__GetItems (UI_MapEditorTexturePanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x1822d3980

System_Collections_Generic_List_string__o *
UI_MapEditorTexturePanel__GetItems
          (UI_MapEditorTexturePanel_o *__this,System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *__this_01;
  bool bVar1;
  Il2CppObject *source;
  System_Func_MapScriptBasicMaterial__string__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_IEnumerable_TKey__o *source_01;
  
  if (Il2CppMethodInitialized_1843475d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MapScriptBasicMaterial_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptBasicMaterial_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTexturePanel_c_GetItems_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTexturePanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_1843475d1 = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    __this_01 = TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *)0x0) {
      source_01 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Keys
                            );
      pSVar2 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                          (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      return pSVar2;
    }
  }
  else {
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)category,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_get_Item
                         );
      if ((TypeInfo_UI_MapEditorTexturePanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c);
      }
      __this_02 = TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9__0_0;
      if (__this_02 == (System_Func_MapScriptBasicMaterial__string__o *)0x0) {
        if ((TypeInfo_UI_MapEditorTexturePanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c);
        }
        object = (Il2CppObject *)TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_MapScriptBasicMaterial_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_02,object,
                   (intptr_t)MethodInfo_UI_MapEditorTexturePanel_c_GetItems_b__0_0,(MethodInfo_16E67D0 *)0x0);
        TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9__0_0 = __this_02;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9__0_0,__this_02);
      }
      source_00 = System_Linq_Enumerable__Select_Vector3__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TResult__o *)__this_02,
                             (MethodInfo_6C2170 *)
                             MethodInfo_System_Linq_Enumerable_Select_MapScriptBasicMaterial_string);
      pSVar2 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTexturePanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorTexturePanel__GetPreviewName (UI_MapEditorTexturePanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1822d3b90

System_String_o *
UI_MapEditorTexturePanel__GetPreviewName
          (UI_MapEditorTexturePanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843475d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TexturePreview");
    Il2CppMethodInitialized_1843475d2 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(item,"TexturePreview",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorTexturePanel$$OnSelectObject
// il2cpp: void UI_MapEditorTexturePanel__OnSelectObject (UI_MapEditorTexturePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822d3bd0

void UI_MapEditorTexturePanel__OnSelectObject
               (UI_MapEditorTexturePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  longlong lVar3;
  UI_BasePanel_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843475d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843475d3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    if ((*(uint64_t *)((char *)pUVar2 + 0x140)) == 0) {
      if ((UI_MapEditorInspectPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0x98)) == (UI_MapEditorInspectPanel_o *)0x0)
      goto label_1822d3cf2;
      UI_MapEditorInspectPanel__OnSelectTexture
                ((UI_MapEditorInspectPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0x98)),name,(MethodInfo *)0x0);
    }
    else {
      lVar3 = (*(uint64_t *)((char *)pUVar2 + 0x140));
      (*(uint64_t *)((char *)pUVar2 + 0x140)) = 0;
      Il2CppCodeGenWriteBarrier((void **)&pUVar2[2].fields,(void *)0x0);
      if (lVar3 == 0) goto label_1822d3cf2;
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),name,*(undefined8 *)(lVar3 + 0x28));
    }
    pUVar4 = (__this->fields).Parent;
    if (pUVar4 != (UI_BasePanel_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_1822d3cf2:
  ThrowNullReferenceException();
}


// UI.MapEditorTexturePanel$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___ctor (UI_MapEditorTexturePanel_o* __this, const MethodInfo* method);
// 0x1822d3d10

void
UI_MapEditorTexturePanel___ctor(UI_MapEditorTexturePanel_o* __this, MethodInfo* method)

{
  UI_MapEditorAddObjectPanel___ctor((UI_SettingsSkinsHumanPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


