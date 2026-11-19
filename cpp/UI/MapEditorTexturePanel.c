// Type: UI.MapEditorTexturePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorTexturePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePanel.cs
// --------------------------------

// UI.MapEditorTexturePanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTexturePanel___c___cctor (const MethodInfo* method);
// 0x5d9cb70

void UI_MapEditorTexturePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754808f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorTexturePanel_c);
    Il2CppMethodInitialized_0754808f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9 = (UI_MapEditorTexturePanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorTexturePanel_c->static_fields->__9);
  return;
}


// UI.MapEditorTexturePanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___c___ctor (UI_MapEditorTexturePanel___c_o* __this, const MethodInfo* method);
// 0x5d9cbe0

void UI_MapEditorTexturePanel___c___ctor(UI_MapEditorTexturePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTexturePanel.<>c$$<GetItems>b__0_0
// il2cpp: System_String_o* UI_MapEditorTexturePanel___c___GetItems_b__0_0 (UI_MapEditorTexturePanel___c_o* __this, Map_MapScriptBasicMaterial_o* x, const MethodInfo* method);
// 0x5d9cbf0

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
      if ((pSVar1->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      return pSVar1->m_Items[1];
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTexturePanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorTexturePanel__GetItems (UI_MapEditorTexturePanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5d9c7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9c92c: jmp 0x5d9c947

System_Collections_Generic_List_string__o *
UI_MapEditorTexturePanel__GetItems
          (UI_MapEditorTexturePanel_o *__this,System_String_o *category,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *object;
  bool bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppObject *source_00;
  UI_MapEditorTexturePanel___c_StaticFields *pUVar4;
  System_Func_MapScriptBasicMaterial__string__o *__this_00;
  System_Collections_Generic_List_string__o *pSVar5;
  
  if (Il2CppMethodInitialized_0754808c == '\0') {
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
    Il2CppMethodInitialized_0754808c = '\x01';
  }
  bVar3 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d9c9d9;
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (pSVar2,(MethodInfo_4AAD0F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Keys
                       );
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d9c9d9:
      ThrowNullReferenceException();
    }
    source_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar2,(Il2CppObject *)category,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_get_Item
                          );
    if ((TypeInfo_UI_MapEditorTexturePanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c);
      pUVar4 = TypeInfo_UI_MapEditorTexturePanel_c->static_fields;
      __this_00 = pUVar4->__9__0_0;
    }
    else {
      pUVar4 = TypeInfo_UI_MapEditorTexturePanel_c->static_fields;
      __this_00 = pUVar4->__9__0_0;
    }
    if (__this_00 == (System_Func_MapScriptBasicMaterial__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorTexturePanel_c);
        pUVar4 = TypeInfo_UI_MapEditorTexturePanel_c->static_fields;
      }
      object = (Il2CppObject *)pUVar4->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBasicMaterial_string)
      ;
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_00,object,
                 (intptr_t)MethodInfo_UI_MapEditorTexturePanel_c_GetItems_b__0_0,(MethodInfo_4F19B50 *)0x0);
      pUVar4 = TypeInfo_UI_MapEditorTexturePanel_c->static_fields;
      pUVar4->__9__0_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pUVar4->__9__0_0);
    }
    source = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
             System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (System_Func_TSource__TResult__o *)__this_00,
                        (MethodInfo_34F60F0 *)
                        MethodInfo_System_Linq_Enumerable_Select_MapScriptBasicMaterial_string);
  }
  pSVar5 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  return pSVar5;
}


// UI.MapEditorTexturePanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorTexturePanel__GetPreviewName (UI_MapEditorTexturePanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5d9c9e0

System_String_o *
UI_MapEditorTexturePanel__GetPreviewName
          (UI_MapEditorTexturePanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754808d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TexturePreview");
    Il2CppMethodInitialized_0754808d = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(item,"TexturePreview",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorTexturePanel$$OnSelectObject
// il2cpp: void UI_MapEditorTexturePanel__OnSelectObject (UI_MapEditorTexturePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d9ca20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9ca57: jmp 0x5d9cb49
// asm:   0x5d9cb10: jmp 0x5d9cb49

void UI_MapEditorTexturePanel__OnSelectObject
               (UI_MapEditorTexturePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  long lVar3;
  UI_BasePanel_o *pUVar4;
  
  if (Il2CppMethodInitialized_0754808e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754808e = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d9ca8e;
label_05d9ca47:
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d9ca47;
label_05d9ca8e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_MapEditorMenu)->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    lVar3 = (*(uint64_t *)((char *)pUVar2 + 0x140));
    if (lVar3 == 0) {
      if ((*(uint64_t *)((char *)pUVar2 + 0x98)) == (UI_BaseMenu_c *)0x0) goto label_05d9cb49;
      UI_MapEditorInspectPanel__OnSelectTexture
                ((UI_MapEditorInspectPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0x98)),name,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).Parent;
    }
    else {
      (*(uint64_t *)((char *)pUVar2 + 0x140)) = 0;
      Il2CppCodeGenWriteBarrier((void **)&pUVar2[2].fields);
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),name,*(undefined8 *)(lVar3 + 0x28));
      pUVar4 = (__this->fields).Parent;
    }
    if (pUVar4 != (UI_BasePanel_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_05d9cb49:
  ThrowNullReferenceException();
}


// UI.MapEditorTexturePanel$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___ctor (UI_MapEditorTexturePanel_o* __this, const MethodInfo* method);
// 0x5d9cb60

void UI_MapEditorTexturePanel___ctor(UI_MapEditorTexturePanel_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPanel___ctor((UI_MapEditorAddObjectPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


