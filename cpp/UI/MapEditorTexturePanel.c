// Type: UI.MapEditorTexturePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorTexturePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorTexturePanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTexturePanel___c___cctor (const MethodInfo* method);
// 0x4124ad0

void UI_MapEditorTexturePanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570490f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570490f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.MapEditorTexturePanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___c___ctor (UI_MapEditorTexturePanel___c_o* __this, const MethodInfo* method);
// 0x4124b40

void UI_MapEditorTexturePanel_<>c___ctor(UI_MapEditorTexturePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTexturePanel.<>c$$<GetItems>b__0_0
// il2cpp: System_String_o* UI_MapEditorTexturePanel___c___GetItems_b__0_0 (UI_MapEditorTexturePanel___c_o* __this, Map_MapScriptBasicMaterial_o* x, const MethodInfo* method);
// 0x4124b50

System_String_o *
UI_MapEditorTexturePanel_<>c__<GetItems>b__0_0
          (UI_MapEditorTexturePanel___c_o *__this,Map_MapScriptBasicMaterial_o *x,MethodInfo *method
          )

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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTexturePanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorTexturePanel__GetItems (UI_MapEditorTexturePanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4124750

System_Collections_Generic_List_string__o *
UI_MapEditorTexturePanel__GetItems
          (UI_MapEditorTexturePanel_o *__this,System_String_o *category,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppObject *source_00;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_List_string__o *pSVar3;
  
  if (DAT_0570490c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBasicMaterial__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_MapScriptBas);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_MapScriptBasicMaterial__string);
    il2cpp_init_method_metadata(&MethodInfo_String__GetItems_b__0_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"All");
    DAT_0570490c = '\x01';
  }
  bVar2 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
    il2cpp_init_class();
    lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  }
  else {
    lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  }
  if ((char)bVar2 == '\0') {
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_04124932;
    source_00 = System_Collections_Generic_Dictionary<object__object>__get_Item
                          (*(System_Collections_Generic_Dictionary_object__object__o **)
                            (lVar1 + 0x10),(Il2CppObject *)category,MethodInfo_List_1_Map_MapScriptBasicMaterial__get_Item);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_MapScriptBasicMaterial__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_glue(lVar1 + 8,selector);
    }
    source = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
             System_Linq_Enumerable__Select<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,selector,
                        MethodInfo_IEnumerable_1_System_String__Select_MapScriptBas);
  }
  else {
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_04124932:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    source = System_Collections_Generic_Dictionary<object__object>__get_Keys
                       (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20),
                        MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
  }
  pSVar3 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String__ToList_String);
  return pSVar3;
}


// UI.MapEditorTexturePanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorTexturePanel__GetPreviewName (UI_MapEditorTexturePanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4124940

System_String_o *
UI_MapEditorTexturePanel__GetPreviewName
          (UI_MapEditorTexturePanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570490d == '\0') {
    il2cpp_init_method_metadata(&"TexturePreview");
    DAT_0570490d = '\x01';
  }
  pSVar1 = System_String__Concat(item,"TexturePreview",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorTexturePanel$$OnSelectObject
// il2cpp: void UI_MapEditorTexturePanel__OnSelectObject (UI_MapEditorTexturePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4124980

void UI_MapEditorTexturePanel__OnSelectObject
               (UI_MapEditorTexturePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  UI_BasePanel_o *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_0570490e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570490e = '\x01';
    method = extraout_RDX;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_041249ee;
LAB_041249a7:
    plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_041249a7;
LAB_041249ee:
    il2cpp_init_class();
    plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    method = extraout_RDX_00;
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_MapEditorMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) * 8) !=
        TypeInfo_MapEditorMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    lVar2 = plVar1[0x25];
    if (lVar2 == 0) {
      if ((UI_MapEditorInspectPanel_o *)plVar1[0x13] == (UI_MapEditorInspectPanel_o *)0x0)
      goto LAB_04124aa7;
      UI_MapEditorInspectPanel__OnSelectTexture
                ((UI_MapEditorInspectPanel_o *)plVar1[0x13],name,method);
      pUVar3 = (__this->fields).Parent;
    }
    else {
      plVar1[0x25] = 0;
      il2cpp_runtime_glue(plVar1 + 0x25,0);
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),name,*(undefined8 *)(lVar2 + 0x28));
      pUVar3 = (__this->fields).Parent;
    }
    if (pUVar3 != (UI_BasePanel_o *)0x0) {
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
      return;
    }
  }
LAB_04124aa7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTexturePanel$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___ctor (UI_MapEditorTexturePanel_o* __this, const MethodInfo* method);
// 0x4124ac0

void UI_MapEditorTexturePanel___ctor(UI_MapEditorTexturePanel_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPanel___ctor((UI_MapEditorAddObjectPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


