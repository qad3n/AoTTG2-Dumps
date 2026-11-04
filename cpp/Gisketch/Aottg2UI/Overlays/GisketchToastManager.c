// Type: Gisketch.Aottg2UI.Overlays.GisketchToastManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastManager.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastManager.ToastItem$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* __this, System_String_o* key, Gisketch_Aottg2UI_Building_GisketchView_o* view, UnityEngine_RectTransform_o* slot, float height, const MethodInfo* method);
// 0x1818d9050

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this,System_String_o *key,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,UnityEngine_RectTransform_o *slot,float height,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Key = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Key,key);
  (__this->fields).View = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).View,view);
  (__this->fields).Slot = slot;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Slot,slot);
  (__this->fields).Height = height;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___ctor(Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$<AnimateSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___AnimateSlot_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, float value, const MethodInfo* method);
// 0x1818d9d20

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___AnimateSlot_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *__this,float value,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  
  fVar1 = (__this->fields).start.fields.x;
  fVar2 = (__this->fields).start.fields.y;
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    value_00.fields.y = ((__this->fields).position.fields.y - fVar2) * value + fVar2;
    value_00.fields.x = ((__this->fields).position.fields.x - fVar1) * value + fVar1;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___ctor(Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$<BuildToast>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___BuildToast_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x1818d9f10

void
Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___BuildToast_b__0(Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_18b6400
              (__this_00,(__this->fields).toast,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___ctor(Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$<Wire>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___Wire_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x1818d9f10

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___Wire_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_18b6400
              (__this_00,(__this->fields).toast,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___ctor(Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$<Close>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___Close_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x1818d9f40

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___Close_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  pGVar1 = (__this->fields).item;
  if ((pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose
              (__this_00,(pGVar1->fields).Slot,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b8b80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *value;
  MethodInfo *pMVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_00;
  System_Enum_o local_38;
  int32_t local_28;
  
  if (Il2CppMethodInitialized_184341fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Dismiss all");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-close-all");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"toastContent");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-message");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-root");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-border");
    il2cpp_codegen_initialize_runtime_metadata(&"toastContentPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"toast");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"toastBorder");
    Il2CppMethodInitialized_184341fef = '\x01';
  }
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    local_38.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant;
    local_28 = (toast->fields).Variant;
    local_38.monitor = &g_data_ffffffffffffffff;
    pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    pGVar5 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle(toast,pSVar4,(MethodInfo *)0x0);
    pMVar3 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    if (__this == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_1818b92e6;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (__this->fields)._items;
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1818b92e6;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pGVar7->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pGVar7->max_length <= uVar2) goto label_1818b92ec;
      pGVar7->m_Items[(int)uVar2] = pGVar5;
      Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2,pGVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar5,
                 (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
    pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b92e6;
    (pGVar5->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"Text");
    (pGVar5->fields).id = "toast-message";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).id,"toast-message");
    value = (toast->fields).Content;
    (pGVar5->fields).text = value;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,value);
    (pGVar5->fields).style = "toastContent";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,"toastContent");
    pMVar3 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (__this->fields)._items;
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1818b92e6;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pGVar7->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pGVar7->max_length <= uVar2) goto label_1818b92ec;
      pGVar7->m_Items[(int)uVar2] = pGVar5;
      Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2,pGVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar5,
                 (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
    pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b92e6;
    (pGVar5->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"Button");
    (pGVar5->fields).id = "toast-close-all";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).id,"toast-close-all");
    (pGVar5->fields).text = "Dismiss all";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,"Dismiss all");
    (pGVar5->fields).style = "buttonQuiet";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,"buttonQuiet");
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_1818b92e6;
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit,"percent");
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818b92e6;
    (pGVar6->fields).width = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width,__this_00);
    (pGVar5->fields).layout = pGVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar6);
    pMVar3 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (__this->fields)._items;
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1818b92e6;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pGVar7->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pGVar7->max_length <= uVar2) goto label_1818b92ec;
      pGVar7->m_Items[(int)uVar2] = pGVar5;
      Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2,pGVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar5,
                 (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
    pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"Panel");
      (pGVar5->fields).id = "toast-root";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).id,"toast-root");
      (pGVar5->fields).style = "toast";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,"toast");
      pGVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(0.0,(MethodInfo *)0x0);
      (pGVar5->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar6);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).type = "Image";
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).type,"Image");
        (pGVar8->fields).id = "toast-border";
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).id,"toast-border");
        pSVar4 = System_String__Concat_1969e50("toastBorder",pSVar4,(MethodInfo *)0x0);
        (pGVar8->fields).style = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).style,pSVar4);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar7->max_length == 0) {
label_1818b92ec:
            ThrowIndexOutOfRangeException();
          }
          pGVar7->m_Items[0] = pGVar8;
          Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar8);
          pGVar8 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar8->fields).type = "Panel";
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).type,"Panel");
            (pGVar8->fields).id = "toast-content";
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).id,"toast-content");
            (pGVar8->fields).style = "toastContentPanel";
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).style,"toastContentPanel");
            if (Il2CppMethodInitialized_184341ff5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
              il2cpp_codegen_initialize_runtime_metadata(&"Column");
              il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
              Il2CppMethodInitialized_184341ff5 = '\x01';
            }
            pGVar6 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
            Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar6->fields).direction = "Column";
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).direction,"Column");
              (pGVar6->fields).alignItems = "Stretch";
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).alignItems,"Stretch");
              (pGVar6->fields).gap = 12.0;
              (pGVar6->fields).grow = 1.0;
              (pGVar8->fields).layout = pGVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout,pGVar6);
              value_00 = System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_T__o *)__this,
                                    (MethodInfo_929FE0 *)
                                    MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray)
              ;
              (pGVar8->fields).children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value_00;
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).children,value_00);
              if (1 < (uint)pGVar7->max_length) {
                pGVar7->m_Items[1] = pGVar8;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar8);
                (pGVar5->fields).children = pGVar7;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).children,pGVar7);
                return pGVar5;
              }
              goto label_1818b92ec;
            }
          }
        }
      }
    }
  }
label_1818b92e6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastTitle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* variant, const MethodInfo* method);
// 0x1818b93b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *variant,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184341ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"toastTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"toastIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"cross");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-title-row");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-title");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-close");
    Il2CppMethodInitialized_184341ff0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
    (__this->fields).id = "toast-title-row";
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,"toast-title-row");
    (__this->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"clear");
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,(MethodInfo *)0x0);
    (__this->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout,pGVar1);
    value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,3);
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).type = "Icon";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type,"Icon");
      (pGVar2->fields).id = "toast-icon";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id,"toast-icon");
      if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
        pSVar3 = (toast->fields).Icon;
        (pGVar2->fields).icon = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).icon,pSVar3);
        pSVar3 = System_String__Concat_1969e50("toastIcon",variant,(MethodInfo *)0x0);
        (pGVar2->fields).style = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style,pSVar3);
        if (value != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)value->max_length == 0) goto label_1818b97c6;
          value->m_Items[0] = pGVar2;
          Il2CppCodeGenWriteBarrier(value->m_Items,pGVar2);
          pGVar2 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar2->fields).type = "Text";
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type,"Text");
            (pGVar2->fields).id = "toast-title";
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id,"toast-title");
            pSVar3 = (toast->fields).Title;
            (pGVar2->fields).text = pSVar3;
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text,pSVar3);
            (pGVar2->fields).style = "toastTitle";
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style,"toastTitle");
            pGVar1 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
            Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar1,(MethodInfo *)0x0);
            if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (pGVar1->fields).grow = 1.0;
              (pGVar2->fields).layout = pGVar1;
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar1);
              if (1 < (uint)value->max_length) {
                value->m_Items[1] = pGVar2;
                Il2CppCodeGenWriteBarrier(value->m_Items + 1,pGVar2);
                pGVar2 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
                if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818b97c0;
                (pGVar2->fields).type = "Button";
                Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type,"Button");
                (pGVar2->fields).id = "toast-close";
                Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id,"toast-close");
                (pGVar2->fields).icon = "cross";
                Il2CppCodeGenWriteBarrier(&(pGVar2->fields).icon,"cross");
                (pGVar2->fields).hasIcon = true;
                (pGVar2->fields).style = "buttonPrimary";
                Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style,"buttonPrimary");
                if (2 < (uint)value->max_length) {
                  value->m_Items[2] = pGVar2;
                  Il2CppCodeGenWriteBarrier(value->m_Items + 2,pGVar2);
                  (__this->fields).children = value;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).children,value);
                  return __this;
                }
              }
label_1818b97c6:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_1818b97c0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Button
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button (UnityEngine_GameObject_o* root, System_String_o* id, const MethodInfo* method);
// 0x1818b6230

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
          (UnityEngine_GameObject_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  
  if (Il2CppMethodInitialized_184341ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ff1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818b6303;
    pUVar2 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(pUVar2,id,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (UnityEngine_UI_Button_o *)0x0;
  }
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
    return pUVar3;
  }
label_1818b6303:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x1818b6cd0
// eh: try 0x1818b6dc0..0x1818b6e77 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x1818b6ec1..0x1818b6ee9 -> pad 0x180026a30 cleanup
// eh: try 0x1818b6ee9..0x1818b6ef9 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b6ead: lea rcx, [rsp + 0x30]
// asm:   0x1818b6eb2: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1818b6eb7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818b6ebc: test rcx, rcx
// asm:   0x1818b6ebf: jne 0x1818b6ef9
// asm:   0x1818b6ec1: jmp 0x1818b6ed5
// asm:   0x1818b6ef9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *a;
  void *pvVar3;
  UnityEngine_Transform_o *root_00;
  Il2CppObject *local_res8;
  Il2CppObject *local_res20;
  Il2CppObject **local_28;
  Il2CppObject **local_20;
  
  if (Il2CppMethodInitialized_184341ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_184341ff2 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_Transform_o *)0x0;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
  if (!bVar2) {
    local_res8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
    local_28 = &local_res8;
    local_20 = &local_res20;
    do {
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar3 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if ((char)pvVar3 == '\0') {
        local_res20 = il2cpp_vm_Object_IsInst(local_res8,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (local_res20 == (Il2CppObject *)0x0) {
          return (UnityEngine_Transform_o *)0x0;
        }
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
        return (UnityEngine_Transform_o *)0x0;
      }
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      root_00 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if (root_00 != (UnityEngine_Transform_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((root_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((root_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(root_00,TypeInfo_UnityEngine_Transform);
        }
      }
      root = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(root_00,id,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar2);
    il2cpp_runtime_helper_1806aa210(&local_28);
  }
  return root;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b76a0

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184341ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184341ff3 = '\x01';
  }
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
    if (!bVar1) {
      return (toast->fields).UpdateKey;
    }
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    local_28.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant;
    local_18 = (toast->fields).Variant;
    local_28.monitor = &g_data_ffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
        pSVar2 = "|";
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = "|";
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
          if (2 < (uint)values->max_length) {
            pSVar2 = (toast->fields).Icon;
            values->m_Items[2] = pSVar2;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
            pSVar2 = "|";
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = "|";
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar2);
              if (4 < (uint)values->max_length) {
                pSVar2 = (toast->fields).Title;
                values->m_Items[4] = pSVar2;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
                pSVar2 = "|";
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = "|";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar2);
                  if (6 < (uint)values->max_length) {
                    pSVar2 = (toast->fields).Content;
                    values->m_Items[6] = pSVar2;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar2);
                    pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                    return pSVar2;
                  }
                }
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row (float gap, const MethodInfo* method);
// 0x1818b7d50

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184341ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184341ff4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction,"Row");
    (__this->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,"Center");
    (__this->fields).gap = gap;
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Column
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column (float gap, const MethodInfo* method);
// 0x1818b6720

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184341ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184341ff5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Column";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction,"Column");
    (__this->fields).alignItems = "Stretch";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,"Stretch");
    (__this->fields).gap = gap;
    (__this->fields).grow = 1.0;
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyStack
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x1818b5a20
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b5b3e: movaps xmm0, xmm1
// asm:   0x1818b5b41: jmp 0x1818b5b49
// asm:   0x1818b5c19: mov r14, r15
// asm:   0x1818b5c33: movss xmm12, dword ptr [rip + 0x1aa3ca4]
// asm:   0x1818b5c3c: movss xmm13, dword ptr [rip + 0x1aa2fc3]
// asm:   0x1818b5c45: movss xmm11, dword ptr [rip + 0x1aa3c9a]
// asm:   0x1818b5c4e: movss xmm14, dword ptr [rip + 0x1aa3091]
// asm:   0x1818b5cb8: movaps xmm9, xmm10
// asm:   0x1818b5cbc: jmp 0x1818b5ccf
// asm:   0x1818b5e16: jmp 0x1818b5c57
// asm:   0x1818b5e44: nop dword ptr [rax]
// asm:   0x1818b5e48: nop dword ptr [rax + rax]
// asm:   0x1818b5ed2: sub ebx, 1
// asm:   0x1818b5ed5: jns 0x1818b5e50

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool animate,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  DG_Tweening_Tween_o *t;
  Il2CppClass *pIVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  bool bVar4;
  DG_Tweening_Sequence_o *pDVar5;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  DG_Tweening_Sequence_o *pDVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector2_o value;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8 [13];
  
  if (Il2CppMethodInitialized_184341ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184341ff6 = '\x01';
  }
  pUVar1 = (__this->fields)._stack;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields)._stack;
    fVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,(MethodInfo *)0x0);
    if ((__this->fields)._expanded == false) {
      fVar11 = fVar10;
      fVar13 = 0.0;
    }
    else {
      fVar11 = (__this->fields)._expandedStackHeight;
      fVar13 = fVar11;
      if (fVar11 <= fVar10) {
        fVar11 = fVar10;
        fVar13 = fVar10;
      }
    }
    (__this->fields)._expandedStackHeight = fVar13;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1818b5f44;
    value.fields.y = fVar11;
    value.fields.x = 560.0;
    UnityEngine_RectTransform__set_sizeDelta(pUVar1,value,(MethodInfo *)0x0);
  }
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  pDVar9 = (DG_Tweening_Sequence_o *)0x0;
  (__this->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stackTween,(void *)0x0);
  pDVar5 = pDVar9;
  if (animate) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled != false) {
        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar5,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      }
    }
  }
  pSVar6 = (__this->fields)._items;
  fVar10 = 0.0;
  if (pSVar6 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    while (iVar8 = (int)pDVar9, iVar8 < (pSVar6->fields)._size) {
      pSVar6 = (__this->fields)._items;
      if ((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
         (pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,iVar8,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             ), pIVar7 == (Il2CppObject *)0x0)) goto label_1818b5f44;
      pIVar2 = pIVar7[2].klass;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        fVar11 = fVar10;
        if ((__this->fields)._expanded == false) {
          fVar11 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY(__this,iVar8,(MethodInfo *)0x0)
          ;
        }
        if ((__this->fields)._expanded == false) {
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar13 = 1.0 - (float)iVar8 * 0.06;
          if (fVar13 < 0.82) {
            fVar13 = 0.82;
          }
          fVar14 = (pUVar3->oneVector).fields.x * fVar13;
          fVar15 = (pUVar3->oneVector).fields.y * fVar13;
          fVar13 = (pUVar3->oneVector).fields.z * fVar13;
        }
        else {
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar14 = (pUVar3->oneVector).fields.x;
          fVar15 = (pUVar3->oneVector).fields.y;
          fVar13 = (pUVar3->oneVector).fields.z;
        }
        fVar12 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt(__this,iVar8,(MethodInfo *)0x0);
        fVar10 = fVar10 + fVar12 + 8.0;
        if (pDVar5 == (DG_Tweening_Sequence_o *)0x0) {
          if (pIVar2 == (Il2CppClass *)0x0) goto label_1818b5f44;
          UnityEngine_RectTransform__set_anchoredPosition
                    ((UnityEngine_RectTransform_o *)pIVar2,
                     (UnityEngine_Vector2_o)((ulonglong)(uint)fVar11 << 0x20),(MethodInfo *)0x0);
          local_c8.y = fVar15;
          local_c8.x = fVar14;
          local_c8.z = fVar13;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)pIVar2,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
        }
        else {
          local_b8[0].y = fVar15;
          local_b8[0].x = fVar14;
          local_b8[0].z = fVar13;
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
                    (pDVar5,(UnityEngine_RectTransform_o *)pIVar2,
                     (UnityEngine_Vector2_o)((ulonglong)(uint)fVar11 << 0x20),
                     (UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
        }
      }
      pSVar6 = (__this->fields)._items;
      pDVar9 = (DG_Tweening_Sequence_o *)(ulonglong)(iVar8 + 1);
      if (pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
      goto label_1818b5f44;
    }
    (__this->fields)._stackTween = (DG_Tweening_Tween_o *)pDVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._stackTween,pDVar5);
    pSVar6 = (__this->fields)._items;
    if (pSVar6 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      iVar8 = (pSVar6->fields)._size;
      goto joined_r0x0001818b5e3e;
    }
  }
label_1818b5f44:
  ThrowNullReferenceException();
joined_r0x0001818b5e3e:
  iVar8 = iVar8 + -1;
  if (iVar8 < 0) {
    return;
  }
  pSVar6 = (__this->fields)._items;
  if ((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
     (pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar6,iVar8,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item),
     pIVar7 == (Il2CppObject *)0x0)) goto label_1818b5f44;
  pIVar2 = pIVar7[2].klass;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar6 = (__this->fields)._items;
    if (((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
        (pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,iVar8,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                            ), pIVar7 == (Il2CppObject *)0x0)) || (pIVar7[2].klass == (Il2CppClass *)0x0))
    goto label_1818b5f44;
    UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pIVar7[2].klass,(MethodInfo *)0x0);
  }
  goto joined_r0x0001818b5e3e;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AppliedStackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b5970

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,(MethodInfo *)0x0);
  if ((__this->fields)._expanded != false) {
    fVar2 = (__this->fields)._expandedStackHeight;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    (__this->fields)._expandedStackHeight = fVar2;
    return fVar2;
  }
  (__this->fields)._expandedStackHeight = 0.0;
  return fVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x1818b8110

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o position,UnityEngine_Vector3_o *scale,
               MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_18;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(rect,position,(MethodInfo *)0x0);
    local_18.x = (scale->fields).x;
    local_18.y = (scale->fields).y;
    local_18.z = (scale->fields).z;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AnimateSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot (DG_Tweening_Sequence_o* sequence, UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x1818b57c0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
               (DG_Tweening_Sequence_o *sequence,UnityEngine_RectTransform_o *rect,
               UnityEngine_Vector2_o position,UnityEngine_Vector3_o *scale,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *object;
  UnityEngine_Vector2_o UVar1;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  float fStackX_14;
  float fStack_44;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184341ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0_AnimateSlot_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0);
    Il2CppMethodInitialized_184341ff7 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *)0x0) {
    (object->fields).rect = rect;
    Il2CppCodeGenWriteBarrier(&(object->fields).rect,rect);
    __this = (object->fields).rect;
    fStack_44 = position.fields.y;
    (object->fields).position.fields.x = position.fields.x;
    (object->fields).position.fields.y = fStack_44;
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      fStackX_14 = UVar1.fields.y;
      (object->fields).start.fields.y = fStackX_14;
      (object->fields).start.fields.x = UVar1.fields.x;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0_AnimateSlot_b__0
                 ,(MethodInfo_E5A750 *)0x0);
      pDVar2 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,__this_00,(MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar2,true,
                          (MethodInfo_7CA3D0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      DG_Tweening_TweenSettingsExtensions__Join(sequence,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
      local_38[0].x = (scale->fields).x;
      local_38[0].y = (scale->fields).y;
      local_38[0].z = (scale->fields).z;
      t = DG_Tweening_ShortcutExtensions__DOScale
                    ((UnityEngine_Transform_o *)(object->fields).rect,(UnityEngine_Vector3_o *)local_38,0.12,
                     (MethodInfo *)0x0);
      t_00 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)t,true,
                        (MethodInfo_7CA3D0 *)
                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_Vector3_Vector3_VectorOptions
                       );
      DG_Tweening_TweenSettingsExtensions__Join(sequence,t_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$StackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b8960
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b8a71: jmp 0x1818b89e0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184341ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_184341ff8 = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size == 0) {
      return 96.0;
    }
    if ((__this->fields)._expanded == false) {
      if (Il2CppMethodInitialized_184341ff9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
        Il2CppMethodInitialized_184341ff9 = '\x01';
      }
      pSVar1 = (__this->fields)._items;
      if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
        if ((pSVar1->fields)._size < 1) {
          fVar5 = 96.0;
        }
        else {
          pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,0,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             );
          if (pIVar2 == (Il2CppObject *)0x0) goto label_1818b8b2e;
          fVar5 = *(float *)&pIVar2[2].monitor;
        }
        pSVar1 = (__this->fields)._items;
        if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          fVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY
                            (__this,(pSVar1->fields)._size + -1,(MethodInfo *)0x0);
          if (fVar5 <= fVar3 + 96.0) {
            fVar5 = fVar3 + 96.0;
          }
          return fVar5 + 16.0;
        }
      }
    }
    else {
      fVar5 = 16.0;
      index = 0;
      do {
        if ((pSVar1->fields)._size <= index) {
          return fVar5;
        }
        if (Il2CppMethodInitialized_184341ff9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
          Il2CppMethodInitialized_184341ff9 = '\x01';
        }
        if (index < 0) {
label_1818b8a48:
          fVar3 = 96.0;
        }
        else {
          pSVar1 = (__this->fields)._items;
          if (pSVar1 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
          if ((pSVar1->fields)._size <= index) goto label_1818b8a48;
          pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             );
          if (pIVar2 == (Il2CppObject *)0x0) break;
          fVar3 = *(float *)&pIVar2[2].monitor;
        }
        if (index < 1) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = 8.0;
        }
        pSVar1 = (__this->fields)._items;
        index = index + 1;
        fVar5 = fVar5 + fVar3 + fVar4;
      } while (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0);
    }
  }
label_1818b8b2e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HeightAt
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x1818b6fa0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184341ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_184341ff9 = '\x01';
  }
  if (index < 0) {
    return 96.0;
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((__this_00->fields)._size <= index) {
      return 96.0;
    }
    pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    if (pIVar1 != (Il2CppObject *)0x0) {
      return *(float *)&pIVar1[2].monitor;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight (bool showDismissAll, const MethodInfo* method);
// 0x1818b8b40

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight(bool showDismissAll,MethodInfo *method)

{
  float fVar1;
  
  if (showDismissAll) {
    fVar1 = 168.0;
  }
  else {
    fVar1 = 96.0;
  }
  if (fVar1 < 96.0) {
    fVar1 = 96.0;
  }
  else if (180.0 < fVar1) {
    return 180.0;
  }
  return fVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RefreshDismissAllButtons
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b7900
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b798a: movss xmm9, dword ptr [rip + 0x1aa1f5d]
// asm:   0x1818b7993: movss xmm7, dword ptr [rip + 0x1aa1f51]
// asm:   0x1818b799b: movss xmm8, dword ptr [rip + 0x1aa127c]
// asm:   0x1818b79c0: jmp 0x1818b79f9
// asm:   0x1818b7ba3: jmp 0x1818b79a4

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar1;
  bool bVar2;
  char cVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Button_o *x;
  UnityEngine_GameObject_o *pUVar5;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar6;
  int index;
  bool value;
  float height;
  
  if (Il2CppMethodInitialized_184341ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"toast-close-all");
    Il2CppMethodInitialized_184341ffa = '\x01';
  }
  index = 0;
  pSVar6 = (__this->fields)._items;
  while (pSVar6 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar6->fields)._size <= index) {
      return;
    }
    if (index == 0) {
      pSVar6 = (__this->fields)._items;
      if (pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
      if ((pSVar6->fields)._size < 2) {
        pSVar1 = (__this->fields)._pending;
        if (pSVar1 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
        pSVar6 = (__this->fields)._items;
        value = 0 < (pSVar1->fields)._size;
      }
      else {
        value = true;
      }
    }
    else {
      pSVar6 = (__this->fields)._items;
      value = false;
      if (pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
    }
    pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar6,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].monitor == (void *)0x0)) break;
    x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                  (*(UnityEngine_GameObject_o **)((longlong)pIVar4[1].monitor + 0x18),"toast-close-all",
                   (MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((x == (UnityEngine_UI_Button_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) break;
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (bVar2 != value) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive(pUVar5,value,(MethodInfo *)0x0);
        pSVar6 = (__this->fields)._items;
        if ((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
           (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                               ), pIVar4 == (Il2CppObject *)0x0)) break;
        *(undefined1 *)((longlong)&pIVar4[2].monitor + 4) = 1;
      }
    }
    if (value == false) {
      height = 96.0;
    }
    else {
      height = 168.0;
    }
    if (height < 96.0) {
      height = 96.0;
    }
    else if (180.0 < height) {
      height = 180.0;
    }
    pSVar6 = (__this->fields)._items;
    if ((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                           ), pIVar4 == (Il2CppObject *)0x0)) break;
    cVar3 = il2cpp_runtime_helper_180562af0(*(undefined4 *)&pIVar4[2].monitor,height,0);
    if (cVar3 == '\0') {
      pSVar6 = (__this->fields)._items;
      if ((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             ), pIVar4 == (Il2CppObject *)0x0)) break;
      *(undefined1 *)((longlong)&pIVar4[2].monitor + 4) = 1;
    }
    pSVar6 = (__this->fields)._items;
    if ((pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                           ), pIVar4 == (Il2CppObject *)0x0)) break;
    pSVar6 = (__this->fields)._items;
    *(float *)&pIVar4[2].monitor = height;
    if (pSVar6 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
    item = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
           System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar6,index,
                      (MethodInfo_92B830 *)
                      MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight(item,height,(MethodInfo *)0x0);
    index = index + 1;
    pSVar6 = (__this->fields)._items;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CollapsedY
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x1818b6670

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  
  if (index < 1) {
    return 0.0;
  }
  if (Il2CppMethodInitialized_184341ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_184341ff9 = '\x01';
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      fVar3 = 96.0;
    }
    else {
      pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if (pIVar1 == (Il2CppObject *)0x0) goto label_1818b671a;
      fVar3 = *(float *)&pIVar1[2].monitor;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar3 - 96.0) {
      fVar2 = fVar3 - 96.0;
    }
    return fVar2 + (float)index * 14.0;
  }
label_1818b671a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlotHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* item, float height, const MethodInfo* method);
// 0x1818b7fc0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item,float height,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  
  if (Il2CppMethodInitialized_184341ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ffb = '\x01';
  }
  if (item != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
    pUVar3 = (item->fields).Slot;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = (item->fields).Slot;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1818b810a;
      UnityEngine_RectTransform__set_offsetMax
                (pUVar3,(UnityEngine_Vector2_o)((ulonglong)(uint)height << 0x20),(MethodInfo *)0x0);
    }
    pGVar1 = (item->fields).View;
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      x = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pGVar1 = (item->fields).View;
        if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (__this = (pGVar1->fields)._Root_k__BackingField, __this == (UnityEngine_GameObject_o *)0x0))
        goto label_1818b810a;
        pUVar3 = UnityEngine_GameObject__GetComponent_object_
                           (__this,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      }
      else {
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1818b810a;
        UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        UVar4.fields.y = height;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar4,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1818b810a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroySlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot (UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x1818b6b60

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
               (UnityEngine_RectTransform_o *slot,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  
  if (Il2CppMethodInitialized_184341ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ffc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)slot,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (slot != (UnityEngine_RectTransform_o *)0x0) {
      if (!bVar1) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)slot,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar2,(MethodInfo *)0x0);
        return;
      }
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)slot,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FinishClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x1818b6f10

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_RectTransform_o *slot,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  
  if (Il2CppMethodInitialized_184341ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_184341ffd = '\x01';
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size == 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdateVisible
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x1818b98b0

bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  int32_t index;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  
  if (Il2CppMethodInitialized_184341ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_184341ffe = '\x01';
  }
  index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_18b7540
                    ((__this->fields)._items,key,(MethodInfo *)0x0);
  if (-1 < index) {
    pSVar1 = (__this->fields)._items;
    if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      pSVar1 = (__this->fields)._items;
      if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
        if (pIVar2 != (Il2CppObject *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                    ((UnityEngine_RectTransform_o *)pIVar2[2].klass,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._items;
          item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,(MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            System_Collections_Generic_List_object___Insert
                      ((System_Collections_Generic_List_object__o *)pSVar1,index,(Il2CppObject *)item,
                       (MethodInfo_945FE0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
            return true;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdatePending
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x1818b97d0

bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast_00;
  System_String_o *a;
  int index;
  
  if (Il2CppMethodInitialized_184341fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item);
    Il2CppMethodInitialized_184341fff = '\x01';
  }
  pSVar1 = (__this->fields)._pending;
  if (Il2CppMethodInitialized_184342000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_184342000 = '\x01';
  }
  index = 0;
  if (pSVar1 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    while( true ) {
      if ((pSVar1->fields)._size <= index) {
        return false;
      }
      toast_00 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast_00,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
      if (bVar2) break;
      index = index + 1;
    }
    if (index < 0) {
      return false;
    }
    pSVar1 = (__this->fields)._pending;
    if (pSVar1 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar1,index,(Il2CppObject *)toast,
                 (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item
                );
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HasUpdateKey
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b6f70

bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey
               (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  bool bVar1;
  
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x1818b75f0

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf
                  (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
                  MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  int32_t index;
  
  if (Il2CppMethodInitialized_184342000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_184342000 = '\x01';
  }
  index = 0;
  if (list != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    while( true ) {
      if ((list->fields)._size <= index) {
        return -1;
      }
      toast = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)list,index,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
      if (bVar1) break;
      index = index + 1;
    }
    return index;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818b9ba0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  System_Collections_Generic_List_AottgToastDefinition__o *__this_01;
  
  if (Il2CppMethodInitialized_184342001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgToastDefinition)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem);
    Il2CppMethodInitialized_184342001 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgToastDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_ctor);
  (__this->fields)._pending = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layer,layer);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Show
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b8320
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b84a1: sub ebx, 1
// asm:   0x1818b84a4: jns 0x1818b8463
// asm:   0x1818b8648: nop dword ptr [rax + rax]
// asm:   0x1818b86d9: mov qword ptr [rdx + r8*8 + 0x20], rbp
// asm:   0x1818b86de: add rdx, 0x20
// asm:   0x1818b86e2: lea rcx, [rdx + r8*8]
// asm:   0x1818b86e6: mov rdx, rbp
// asm:   0x1818b86e9: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1818b86ee: xor r8d, r8d
// asm:   0x1818b86f1: mov dl, 1
// asm:   0x1818b86f3: mov rcx, rdi
// asm:   0x1818b86f6: call 0x1818b59b0  ; Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout()
// asm:   0x1818b86fb: jmp 0x1818b86b2
// asm:   0x1818b86fd: xor r9d, r9d
// asm:   0x1818b8700: xor r8d, r8d
// asm:   0x1818b8703: mov rdx, rbp
// asm:   0x1818b8706: mov rcx, rdi
// asm:   0x1818b8709: call 0x1818b56f0  ; Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible()
// asm:   0x1818b870e: xor r8d, r8d
// asm:   0x1818b8711: mov dl, 1
// asm:   0x1818b8713: mov rcx, rdi
// asm:   0x1818b8716: call 0x1818b59b0  ; Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout()
// asm:   0x1818b871b: jmp 0x1818b86b2

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar4;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *pGVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  int32_t iVar8;
  System_String_o *key;
  Il2CppObject *pIVar9;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  int index;
  
  if (Il2CppMethodInitialized_184342002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_184342002 = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    return;
  }
  key = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,(MethodInfo *)0x0);
  bVar7 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
  if (bVar7) {
    if (Il2CppMethodInitialized_18434200d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      Il2CppMethodInitialized_18434200d = '\x01';
    }
    iVar8 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_18b7540
                      ((__this->fields)._items,key,(MethodInfo *)0x0);
    if (-1 < iVar8) {
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
      goto label_1818b871d;
      pIVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,iVar8,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      pSVar3 = (__this->fields)._items;
      if ((pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
         (System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar3,iVar8,
                     (MethodInfo_947010 *)
                     MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt),
         pIVar9 == (Il2CppObject *)0x0)) goto label_1818b871d;
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                ((UnityEngine_RectTransform_o *)pIVar9[2].klass,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._pending;
    if (Il2CppMethodInitialized_18434200e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      Il2CppMethodInitialized_18434200e = '\x01';
    }
    if (pSVar4 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) goto label_1818b871d;
    iVar8 = (pSVar4->fields)._size;
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      pGVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar4,iVar8,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      pSVar11 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar10,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(pSVar11,key,(MethodInfo *)0x0);
      if (bVar7) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar4,iVar8,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
      }
    }
  }
  else {
    if (Il2CppMethodInitialized_184341ffe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      Il2CppMethodInitialized_184341ffe = '\x01';
    }
    iVar8 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_18b7540
                      ((__this->fields)._items,key,(MethodInfo *)0x0);
    if (-1 < iVar8) {
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
        pIVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,iVar8,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                           );
        pSVar3 = (__this->fields)._items;
        if ((pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) &&
           (System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar8,
                       (MethodInfo_947010 *)
                       MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt),
           pIVar9 != (Il2CppObject *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                    ((UnityEngine_RectTransform_o *)pIVar9[2].klass,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._items;
          item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,(MethodInfo *)0x0);
          if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            System_Collections_Generic_List_object___Insert
                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar8,(Il2CppObject *)item,
                       (MethodInfo_945FE0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout(__this,true,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
      goto label_1818b871d;
    }
    if (Il2CppMethodInitialized_184341fff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item);
      Il2CppMethodInitialized_184341fff = '\x01';
    }
    pSVar4 = (__this->fields)._pending;
    if (Il2CppMethodInitialized_184342000 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      Il2CppMethodInitialized_184342000 = '\x01';
    }
    index = 0;
    if (pSVar4 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) goto label_1818b871d;
    for (; index < (pSVar4->fields)._size; index = index + 1) {
      pGVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar4,index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      pSVar11 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar10,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(pSVar11,key,(MethodInfo *)0x0);
      if (bVar7) {
        if (-1 < index) {
          pSVar4 = (__this->fields)._pending;
          if (pSVar4 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar4,index,(Il2CppObject *)toast,
                       (MethodInfo_950000 *)
                       MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item);
            return;
          }
          goto label_1818b871d;
        }
        break;
      }
    }
  }
  pMVar6 = MethodInfo_System_Collections_Generic_List_AottgToastDefinition_Add;
  pSVar3 = (__this->fields)._items;
  if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar3->fields)._size < 3) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout(__this,true,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (__this->fields)._pending;
    if (pSVar4 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (pSVar4->fields)._items;
      if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if ((uint)pGVar5->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)toast,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout(__this,true,(MethodInfo *)0x0);
          return;
        }
        (pSVar4->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pGVar5->max_length) {
          pGVar5->m_Items[(int)uVar2] = toast;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2,toast);
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout(__this,true,(MethodInfo *)0x0);
          return;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1818b871d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x1818b6390

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool animate,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  
  if (Il2CppMethodInitialized_184342003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_Clear);
    Il2CppMethodInitialized_184342003 = '\x01';
  }
  pSVar2 = (__this->fields)._pending;
  if (pSVar2 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AddVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, int32_t index, const MethodInfo* method);
// 0x1818b56f0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,int32_t index,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *value;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  
  if (Il2CppMethodInitialized_184342004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
    Il2CppMethodInitialized_184342004 = '\x01';
  }
  if (Il2CppMethodInitialized_18434200c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434200c = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    value = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,(MethodInfo *)0x0);
    (__this->fields)._host = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._host,value);
  }
  __this_00 = (__this->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)__this_00,index,(Il2CppObject *)item,
               (MethodInfo_945FE0 *)
               MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$BuildToast
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b5f50

Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *object;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *slot;
  Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *pGVar2;
  System_Action_o *__this_01;
  System_String_o *key;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this_02;
  
  if (Il2CppMethodInitialized_184342005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToastBehaviour);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0_BuildToast_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0);
    il2cpp_codegen_initialize_runtime_metadata(&"toast");
    Il2CppMethodInitialized_184342005 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).toast = toast;
    Il2CppCodeGenWriteBarrier(&(object->fields).toast,toast);
    pUVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
                       ((__this->fields)._stack,96.0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      (__this_00->fields).id = "toast";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,"toast");
      (__this_00->fields).modal = false;
      value = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode
                        ((object->fields).toast,(MethodInfo *)0x0);
      (__this_00->fields).root = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).root,value);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        context = (__this->fields)._context;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        view = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                         (__this_00,parent,context,(MethodInfo *)0x0);
        slot = UnityEngine_GameObject__GetComponent_object_
                         (pUVar1,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
                    (__this,(view->fields)._Root_k__BackingField,96.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
                    ((view->fields)._Root_k__BackingField,1,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
                    (__this,(view->fields)._Root_k__BackingField,(object->fields).toast,(MethodInfo *)0x0);
          pUVar1 = (view->fields)._Root_k__BackingField;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pGVar2 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar1,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToastBehaviour);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0_BuildToast_b__0
                       ,(MethodInfo *)0x0);
            if (pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *)0x0) {
              (pGVar2->fields)._close = __this_01;
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._close,__this_01);
              (pGVar2->fields)._remaining = 5.0;
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              }
              Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
              key = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                              ((object->fields).toast,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem);
              Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor
                        (__this_02,key,view,slot,96.0,(MethodInfo *)0x0);
              return __this_02;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Wire
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b99c0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_GameObject_o *root,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *object;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (Il2CppMethodInitialized_184342006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_CloseAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0_Wire_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"toast-close-all");
    il2cpp_codegen_initialize_runtime_metadata(&"toast-close");
    Il2CppMethodInitialized_184342006 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *)0x0)
  goto label_1818b9b91;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  (object->fields).toast = toast;
  Il2CppCodeGenWriteBarrier(&(object->fields).toast,toast);
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                     (root,"toast-close",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto label_1818b9b91;
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0_Wire_b__0,
               (MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_1818b9b91;
    UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
  }
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                     (root,"toast-close-all",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_CloseAll,(MethodInfo *)0x0
              );
    if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
label_1818b9b91:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x1818b6400
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b665c: xor edx, edx
// asm:   0x1818b665e: mov rcx, rdi
// asm:   0x1818b6661: call 0x1818b6a00  ; Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost()
// asm:   0x1818b6666: jmp 0x1818b6605

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_18b6400
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *slot;
  int32_t index;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *object;
  System_String_o *key;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar2;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  
  if (Il2CppMethodInitialized_184342007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0_Close_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0);
    Il2CppMethodInitialized_184342007 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pSVar1 = (__this->fields)._items;
    key = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,(MethodInfo *)0x0);
    index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_18b7540(pSVar1,key,(MethodInfo *)0x0);
    if (index < 0) {
      return;
    }
    pSVar1 = (__this->fields)._items;
    if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      (object->fields).item = pGVar2;
      Il2CppCodeGenWriteBarrier(&(object->fields).item,pGVar2);
      pSVar1 = (__this->fields)._items;
      if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18434200a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
          Il2CppMethodInitialized_18434200a = '\x01';
        }
        pSVar1 = (__this->fields)._items;
        if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          if ((pSVar1->fields)._size != 0) {
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                      (__this,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,true,(MethodInfo *)0x0);
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
          }
          if (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled != false) {
            pGVar2 = (object->fields).item;
            if (pGVar2 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0)
            goto label_1818b6668;
            view = (pGVar2->fields).View;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
            if (t != (DG_Tweening_Tween_o *)0x0) {
              action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0_Close_b__0
                         ,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                        ((Il2CppObject *)t,action,
                         (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween)
              ;
              return;
            }
          }
          pGVar2 = (object->fields).item;
          if (pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
            slot = (pGVar2->fields).Slot;
            if (Il2CppMethodInitialized_184341ffd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count)
              ;
              Il2CppMethodInitialized_184341ffd = '\x01';
            }
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._items;
            if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
              if ((pSVar1->fields)._size != 0) {
                return;
              }
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1818b6668:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CloseAll
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b6310

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434200a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_18434200a = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,false,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetExpanded
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool expanded, const MethodInfo* method);
// 0x1818b7e00
// eh: try 0x1818b7ed0..0x1818b7fb4 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b7f5e: mov rdx, qword ptr [rip + 0x27eb93b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose
// asm:   0x1818b7f65: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818b7f6a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818b7f6f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818b7f74: test rcx, rcx
// asm:   0x1818b7f77: jne 0x1818b7fb4
// asm:   0x1818b7f79: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1818b7fb4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool expanded,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *x;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184342008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchToastBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342008 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._expanded = expanded;
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)
             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_GetEnumerator);
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_48.fields._current = local_50;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext
                      );
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose)
      ;
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,true,(MethodInfo *)0x0);
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_48.fields._current[1].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = *(UnityEngine_GameObject_o **)((longlong)local_48.fields._current[1].monitor + 0x18);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_01,
                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchToastBehaviour)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *)0x0) {
        ThrowNullReferenceException();
      }
      (x->fields)._paused = expanded;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$PromotePending
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b7830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b78e1: jmp 0x1818b7887

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  
  if (Il2CppMethodInitialized_184342009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_184342009 = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  while (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if (2 < (pSVar1->fields)._size) {
      return;
    }
    pSVar2 = (__this->fields)._pending;
    if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    if ((pSVar2->fields)._size < 1) {
      return;
    }
    toast = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar2,0,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    pSVar2 = (__this->fields)._pending;
    if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar2,0,
               (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._items;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyCurrentLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x1818b59b0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool animate,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434200a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_18434200a = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,animate,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SettleVisibleLayouts
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b8160
// eh: try 0x1818b8220..0x1818b830c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b82d0: mov rdx, qword ptr [rip + 0x27eb5c9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose
// asm:   0x1818b82d7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818b82dc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818b82e1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818b82e6: test rcx, rcx
// asm:   0x1818b82e9: jne 0x1818b830c
// asm:   0x1818b830c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_Object_o *x;
  void *pvVar1;
  UnityEngine_GameObject_o *root;
  Il2CppObject *pIVar2;
  bool bVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434200b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434200b = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext
                        );
      pIVar2 = local_28.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose
                  );
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      if (*(char *)((longlong)&local_28.fields._current[2].monitor + 4) != '\0') {
        if (local_28.fields._current[1].monitor == (void *)0x0) {
          ThrowNullReferenceException();
        }
        x = *(UnityEngine_Object_o **)((longlong)local_28.fields._current[1].monitor + 0x18);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pvVar1 = pIVar2[1].monitor;
          if (pvVar1 == (void *)0x0) {
            ThrowNullReferenceException();
          }
          root = *(UnityEngine_GameObject_o **)((longlong)pvVar1 + 0x18);
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,1,(MethodInfo *)0x0);
          *(undefined1 *)((longlong)&pIVar2[2].monitor + 4) = 0;
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$EnsureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b6c50

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_18434200c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434200c = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    value = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,(MethodInfo *)0x0);
    (__this->fields)._host = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._host,value);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RemoveVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, System_String_o* key, const MethodInfo* method);
// 0x1818b7be0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,System_String_o *key,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  int32_t index;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_18434200d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_18434200d = '\x01';
  }
  index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_18b7540
                    ((__this->fields)._items,key,(MethodInfo *)0x0);
  if (index < 0) {
    return;
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    pSVar1 = (__this->fields)._items;
    if ((pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) &&
       (System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt),
       pIVar2 != (Il2CppObject *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                ((UnityEngine_RectTransform_o *)pIVar2[2].klass,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Remove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x1818b7c90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b7ce6: nop word ptr [rax + rax]
// asm:   0x1818b7d2e: sub ebx, 1
// asm:   0x1818b7d31: jns 0x1818b7cf0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove
               (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
               MethodInfo *method)

{
  int index;
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_18434200e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_18434200e = '\x01';
  }
  if (list == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = (list->fields)._size;
  while (index = index + -1, -1 < index) {
    toast = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)list,index,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
    if (bVar1) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)list,index,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt
                );
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_GisketchToastManager_ToastItem__o* list, System_String_o* key, const MethodInfo* method);
// 0x1818b7540

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_18b7540
                  (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *list,
                  System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if (Il2CppMethodInitialized_18434200f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_18434200f = '\x01';
  }
  index = 0;
  if (list != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    while( true ) {
      if ((list->fields)._size <= index) {
        return -1;
      }
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)list,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality((System_String_o *)pIVar2[1].klass,key,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroyHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b6a00

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184342010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342010 = '\x01';
  }
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stackTween,(void *)0x0);
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    (__this->fields)._expandedStackHeight = 0.0;
    (__this->fields)._expanded = false;
    (__this->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._stack,(void *)0x0);
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._host;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Object_o *)(__this->fields)._host;
      if (bVar4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar3,(MethodInfo *)0x0);
      }
      (__this->fields)._host = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._host,(void *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Host
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b7030

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *pUVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *pGVar7;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_02;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184342011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToastStackHover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_SetExpanded);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toast Host");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toast Stack");
    Il2CppMethodInitialized_184342011 = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Type_array *)0x0) {
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)pSVar1->max_length == 0) {
label_1818b7533:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Toast Host",pSVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,(__this->fields)._layer,false,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
        ;
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          if (Il2CppMethodInitialized_184341f36 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_184341f36 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0)
          ;
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
          pSVar2 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0)
          ;
          if (pSVar1 != (System_Type_array *)0x0) {
            if (pSVar2 != (System_Type_o *)0x0) {
              pIVar3 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if ((int)pSVar1->max_length == 0) goto label_1818b7533;
            pSVar1->m_Items[0] = pSVar2;
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(__this_01,"AoTTG Toast Stack",pSVar1,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent,false,(MethodInfo *)0x0);
                pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_01,
                                    (MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                (__this->fields)._stack = pUVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._stack,pUVar5);
                pUVar5 = (__this->fields)._stack;
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar5,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                  pUVar5 = (__this->fields)._stack;
                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (pUVar5,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                    pUVar5 = (__this->fields)._stack;
                    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (pUVar5,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                      pUVar5 = (__this->fields)._stack;
                      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (pUVar5,(UnityEngine_Vector2_o)0x4200000000000000,(MethodInfo *)0x0);
                        pUVar5 = (__this->fields)._stack;
                        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (pUVar5,(UnityEngine_Vector2_o)0x42c00000440c0000,(MethodInfo *)0x0);
                          pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                             (__this_01,
                                              (MethodInfo_6F4D60 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                            local_38[0].r = 0.0;
                            local_38[0].g = 0.0;
                            local_38[0].b = 0.0;
                            local_38[0].a = 0.0;
                            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar6,(UnityEngine_Color_o *)local_38,
                                       (pUVar6->klass->vtable)._23_set_color.method);
                            (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                                      (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
                            pGVar7 = UnityEngine_GameObject__AddComponent_object_
                                               (__this_01,
                                                (MethodInfo_6F4D60 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToastStackHover
                                               );
                            __this_02 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
                            System_Action_bool____ctor
                                      (__this_02,(Il2CppObject *)__this,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_SetExpanded,
                                       (MethodInfo *)0x0);
                            if (pGVar7 != (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *)0x0) {
                              (pGVar7->fields)._hover = (System_Action_bool__o *)__this_02;
                              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._hover,__this_02);
                              return __this_00;
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
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Slot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot (UnityEngine_RectTransform_o* parent, float height, const MethodInfo* method);
// 0x1818b8730

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
          (UnityEngine_RectTransform_o *parent,float height,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_184342012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toast Slot");
    Il2CppMethodInitialized_184342012 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Toast Slot",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_01,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot(__this_01,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)((ulonglong)(uint)height << 0x20),(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ConfigureToastRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, float height, const MethodInfo* method);
// 0x1818b67e0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_GameObject_o *root,
               float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  UnityEngine_Vector2_o value;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184342013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342013 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818b69ee;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (root,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin(__this_01,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax(__this_01,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(__this_01,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_01,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342014 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      il2cpp_codegen_initialize_runtime_metadata(&"toast");
      Il2CppMethodInitialized_184342014 = '\x01';
    }
    pGVar1 = (__this->fields)._context;
    if (((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
        (__this_00 = (pGVar1->fields).Theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
       && (pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                              (__this_00,"toast",(MethodInfo *)0x0),
          pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
      if (((pGVar4->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
         (bVar3 = System_String__Equals_196c550
                            ((((pGVar4->fields).width)->fields).unit,"point",5,(MethodInfo *)0x0
                            ), !bVar3)) {
        fVar5 = 520.0;
      }
      else {
        pGVar2 = (pGVar4->fields).width;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_1818b69ee;
        fVar5 = (pGVar2->fields).value;
      }
      value.fields.y = height;
      value.fields.x = fVar5;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
label_1818b69ee:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastRootWidth
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x1818b9300

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184342014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    il2cpp_codegen_initialize_runtime_metadata(&"toast");
    Il2CppMethodInitialized_184342014 = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                       (__this_00,"toast",(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      if ((pGVar4->fields).width != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        bVar3 = System_String__Equals_196c550
                          ((((pGVar4->fields).width)->fields).unit,"point",5,(MethodInfo *)0x0);
        if (bVar3) {
          pGVar2 = (pGVar4->fields).width;
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            return (pGVar2->fields).value;
          }
          goto label_1818b93a4;
        }
      }
      return 520.0;
    }
  }
label_1818b93a4:
  ThrowNullReferenceException();
}


