// Type: UI.MapEditorTexturePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorTexturePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePanel.cs
// --------------------------------

// UI.MapEditorTexturePanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTexturePanel___c___cctor (const MethodInfo* method);
// 0x4439ea0

void UI_MapEditorTexturePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae6b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae6b2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.MapEditorTexturePanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___c___ctor (UI_MapEditorTexturePanel___c_o* __this, const MethodInfo* method);
// 0x4439f10

void UI_MapEditorTexturePanel___c___ctor(UI_MapEditorTexturePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTexturePanel.<>c$$<GetItems>b__0_0
// il2cpp: System_String_o* UI_MapEditorTexturePanel___c___GetItems_b__0_0 (UI_MapEditorTexturePanel___c_o* __this, Map_MapScriptBasicMaterial_o* x, const MethodInfo* method);
// 0x4439f20

System_String_o *
UI_MapEditorTexturePanel___c___GetItems_b__0_0
          (UI_MapEditorTexturePanel___c_o *__this,Map_MapScriptBasicMaterial_o *x,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  
  if ((x != (Map_MapScriptBasicMaterial_o *)0x0) &&
     (pSVar2 = (x->fields).Texture, pSVar2 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Split(pSVar2,0x2f,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if (1 < (uint)pSVar1->max_length) {
        return pSVar1->m_Items[1];
      }
      goto label_04439f53;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04439f53:
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  return pSVar2;
}


// UI.MapEditorTexturePanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorTexturePanel__GetItems (UI_MapEditorTexturePanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4439b20

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
  System_String_o *str0;
  
  if (g_data_057ae6af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_MapScriptBasicMateria);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_MapScriptBasicMaterial_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetItems_b__0_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"All");
    g_data_057ae6af = '\x01';
  }
  str0 = "All";
  bVar2 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  }
  else {
    lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  }
  if ((char)bVar2 == '\0') {
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04439d02;
    source_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10),
                           (Il2CppObject *)category,MethodInfo_List_1_Map_MapScriptBasicMaterial_get_Item);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_MapScriptBasicMaterial_string);
      System_Func_object__object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,selector);
    }
    source = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
             System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,selector,MethodInfo_IEnumerable_1_System_String_Select_MapScriptBasicMateria);
  }
  else {
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04439d02:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae6b0 == '\0') {
        il2cpp_runtime_helper_023445d0(&"TexturePreview");
        g_data_057ae6b0 = '\x01';
      }
      pSVar3 = (System_Collections_Generic_List_string__o *)
               System_String__Concat_3ae5ba0(str0,"TexturePreview",(MethodInfo *)0x0);
      return pSVar3;
    }
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20),
                        MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
  }
  pSVar3 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
  return pSVar3;
}


// UI.MapEditorTexturePanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorTexturePanel__GetPreviewName (UI_MapEditorTexturePanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4439d10

System_String_o *
UI_MapEditorTexturePanel__GetPreviewName
          (UI_MapEditorTexturePanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae6b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TexturePreview");
    g_data_057ae6b0 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(item,"TexturePreview",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorTexturePanel$$OnSelectObject
// il2cpp: void UI_MapEditorTexturePanel__OnSelectObject (UI_MapEditorTexturePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4439d50

void UI_MapEditorTexturePanel__OnSelectObject
               (UI_MapEditorTexturePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_RawImage_o *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UI_MapEditorInspectPanel_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_UI_RawImage_o **ppUVar5;
  UI_BasePanel_o *pUVar6;
  UI_CategoryPanel_o *__this_01;
  
  if (g_data_057ae6b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae6b1 = '\x01';
    method = extraout_RDX;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04439dbe;
label_04439d77:
    __this_01 = *(UI_CategoryPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04439d77;
label_04439dbe:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(UI_CategoryPanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    method = extraout_RDX_00;
  }
  if (__this_01 != (UI_CategoryPanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu))
    goto UI_MapEditorAddObjectPanel___ctor;
    pUVar2 = __this_01[2].fields.MaskBackground;
    if (pUVar2 == (UnityEngine_UI_RawImage_o *)0x0) {
      __this_00 = (UI_MapEditorInspectPanel_o *)__this_01[1].fields.DoublePanelRight;
      __this_01 = (UI_CategoryPanel_o *)0x0;
      if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
        UI_MapEditorInspectPanel__OnSelectTexture(__this_00,name,method);
        pUVar6 = (__this->fields).Parent;
        __this_01 = (UI_CategoryPanel_o *)0x0;
        if (pUVar6 != (UI_BasePanel_o *)0x0) goto label_04439e5f;
      }
    }
    else {
      ppUVar5 = &__this_01[2].fields.MaskBackground;
      *ppUVar5 = (UnityEngine_UI_RawImage_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar5,0);
      uVar3._0_4_ = (pUVar2->fields).m_Color.fields.r;
      uVar3._4_4_ = (pUVar2->fields).m_Color.fields.g;
      uVar4._0_4_ = (pUVar2->fields).m_RaycastTarget;
      uVar4._4_4_ = (pUVar2->fields).m_RaycastTargetCache;
      (*(code *)(pUVar2->fields).m_CancellationTokenSource)(uVar4,name,uVar3);
      pUVar6 = (__this->fields).Parent;
      if (pUVar6 != (UI_BasePanel_o *)0x0) {
label_04439e5f:
        (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
        return;
      }
      __this_01 = (UI_CategoryPanel_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
UI_MapEditorAddObjectPanel___ctor:
  il2cpp_runtime_helper_022b2fd0();
  UI_CategoryPanel___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTexturePanel$$.ctor
// il2cpp: void UI_MapEditorTexturePanel___ctor (UI_MapEditorTexturePanel_o* __this, const MethodInfo* method);
// 0x4439e90

void UI_MapEditorTexturePanel___ctor(UI_MapEditorTexturePanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


