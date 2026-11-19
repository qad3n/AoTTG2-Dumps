// Type: Gisketch.Aottg2UI.Overlays.GisketchToastManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastManager.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastManager.ToastItem$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* __this, System_String_o* key, Gisketch_Aottg2UI_Building_GisketchView_o* view, UnityEngine_RectTransform_o* slot, float height, const MethodInfo* method);
// 0x535c880

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this,System_String_o *key,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,UnityEngine_RectTransform_o *slot,float height,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Key = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Key);
  (__this->fields).View = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).View);
  (__this->fields).Slot = slot;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Slot);
  (__this->fields).Height = height;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x535b040

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$<AnimateSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___AnimateSlot_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, float value, const MethodInfo* method);
// 0x535d630

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___AnimateSlot_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).start.fields;
  UVar2 = (__this->fields).position.fields;
  fVar3 = UVar1.x;
  fVar4 = UVar1.y;
  value_00.fields.y = value * (UVar2.y - fVar4) + fVar4;
  value_00.fields.x = value * (UVar2.x - fVar3) + fVar3;
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x535c310

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$<BuildToast>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___BuildToast_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x535d670

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___BuildToast_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_525c900(__this_00,(__this->fields).toast,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x535c8f0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$<Wire>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___Wire_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x535d690

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___Wire_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_525c900(__this_00,(__this->fields).toast,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x535cb80

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$<Close>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___Close_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x535d6b0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___Close_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  UnityEngine_RectTransform_o *slot;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  
  pGVar1 = (__this->fields).item;
  if ((pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) {
    slot = (pGVar1->fields).Slot;
    if (Il2CppMethodInitialized_0754297a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
      Il2CppMethodInitialized_0754297a = '\x01';
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,method);
    pSVar2 = (__this_00->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      if ((pSVar2->fields)._size == 0) {
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this_00,method);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x5359210

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  MethodInfo *method_00;
  MethodInfo *pMVar10;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_0754296c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
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
    il2cpp_codegen_initialize_runtime_metadata(&"Common.DismissAll");
    il2cpp_codegen_initialize_runtime_metadata(&"toastBorder");
    Il2CppMethodInitialized_0754296c = '\x01';
  }
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = (toast->fields).Variant;
    pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    pGVar4 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle(toast,pSVar3,method_00);
    pMVar10 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    if (__this != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar7 = (__this->fields)._items;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pGVar7->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pGVar7->m_Items[(int)uVar2] = pGVar4;
          Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar4,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        }
        pGVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        (pGVar4->fields).active = true;
        System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
        (pGVar4->fields).type = "Text";
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
        (pGVar4->fields).id = "toast-message";
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
        (pGVar4->fields).text = (toast->fields).Content;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text);
        (pGVar4->fields).style = "toastContent";
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
        pMVar10 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar7 = (__this->fields)._items;
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pGVar7->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pGVar7->m_Items[(int)uVar2] = pGVar4;
            Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar4,
                       (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
          }
          pGVar4 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          (pGVar4->fields).active = true;
          System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
          (pGVar4->fields).type = "Button";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
          pMVar10 = (MethodInfo *)"toast-close-all";
          (pGVar4->fields).id = "toast-close-all";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.DismissAll",pMVar10);
          (pGVar4->fields).text = pSVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text);
          (pGVar4->fields).textKey = "Common.DismissAll";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey);
          (pGVar4->fields).style = "buttonQuiet";
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
          pGVar6 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
          (pGVar6->fields).shrink = 1.0;
          System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength)
          ;
          System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
          if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            (__this_00->fields).value = 100.0;
            (__this_00->fields).unit = "percent";
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
            (pGVar6->fields).width = __this_00;
            Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
            (pGVar4->fields).layout = pGVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
            pMVar10 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar7 = (__this->fields)._items;
            if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pGVar7->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pGVar7->m_Items[(int)uVar2] = pGVar4;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar4,
                           (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
              }
              pGVar4 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
              (pGVar4->fields).active = true;
              System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
              (pGVar4->fields).type = "Panel";
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
              (pGVar4->fields).id = "toast-root";
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
              pMVar10 = (MethodInfo *)&(pGVar4->fields).style;
              (pGVar4->fields).style = "toast";
              Il2CppCodeGenWriteBarrier((void **)pMVar10);
              pGVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(0.0,pMVar10);
              (pGVar4->fields).layout = pGVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
              pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                       SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
              pGVar8 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
              (pGVar8->fields).active = true;
              System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
              (pGVar8->fields).type = "Image";
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).type);
              (pGVar8->fields).id = "toast-border";
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).id);
              pSVar3 = System_String__Concat_52f0320("toastBorder",pSVar3,(MethodInfo *)0x0);
              (pGVar8->fields).style = pSVar3;
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).style);
              if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                if ((int)pGVar7->max_length != 0) {
                  pGVar7->m_Items[0] = pGVar8;
                  Il2CppCodeGenWriteBarrier(pGVar7->m_Items);
                  pGVar8 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                  (pGVar8->fields).active = true;
                  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
                  (pGVar8->fields).type = "Panel";
                  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).type);
                  (pGVar8->fields).id = "toast-content";
                  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).id);
                  pMVar10 = (MethodInfo *)&(pGVar8->fields).style;
                  (pGVar8->fields).style = "toastContentPanel";
                  Il2CppCodeGenWriteBarrier((void **)pMVar10);
                  pGVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(12.0,pMVar10);
                  (pGVar8->fields).layout = pGVar6;
                  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
                  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                           System_Collections_Generic_List_object___ToArray
                                     ((System_Collections_Generic_List_object__o *)__this,
                                      (MethodInfo_395F5A0 *)
                                      MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray
                                     );
                  (pGVar8->fields).children = pGVar9;
                  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).children);
                  if ((pGVar7->max_length & 0xfffffffe) != 0) {
                    pGVar7->m_Items[1] = pGVar8;
                    Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1);
                    (pGVar4->fields).children = pGVar7;
                    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children);
                    return pGVar4;
                  }
                }
                ThrowIndexOutOfRangeException();
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastTitle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* variant, const MethodInfo* method);
// 0x53598d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *variant,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754296d == '\0') {
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
    Il2CppMethodInitialized_0754296d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields).active = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).type = "Panel";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type);
  (__this->fields).id = "toast-title-row";
  Il2CppCodeGenWriteBarrier(&(__this->fields).id);
  method_00 = (MethodInfo *)&(__this->fields).style;
  (__this->fields).style = "clear";
  Il2CppCodeGenWriteBarrier((void **)method_00);
  pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,method_00);
  (__this->fields).layout = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,3);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (pGVar3->fields).active = true;
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  (pGVar3->fields).type = "Icon";
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
  (pGVar3->fields).id = "toast-icon";
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).id);
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    (pGVar3->fields).icon = (toast->fields).Icon;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).icon);
    pSVar4 = System_String__Concat_52f0320("toastIcon",variant,(MethodInfo *)0x0);
    (pGVar3->fields).style = pSVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)pGVar2->max_length != 0) {
        pGVar2->m_Items[0] = pGVar3;
        Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
        pGVar3 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        (pGVar3->fields).active = true;
        System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
        (pGVar3->fields).type = "Text";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
        (pGVar3->fields).id = "toast-title";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).id);
        (pGVar3->fields).text = (toast->fields).Title;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).text);
        (pGVar3->fields).style = "toastTitle";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
        pGVar1 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
        (pGVar1->fields).shrink = 1.0;
        System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
        (pGVar1->fields).grow = 1.0;
        (pGVar3->fields).layout = pGVar1;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
        if ((pGVar2->max_length & 0xfffffffe) != 0) {
          pGVar2->m_Items[1] = pGVar3;
          Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1);
          pGVar3 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          (pGVar3->fields).active = true;
          System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
          (pGVar3->fields).type = "Button";
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).type);
          (pGVar3->fields).id = "toast-close";
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).id);
          (pGVar3->fields).icon = "cross";
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).icon);
          (pGVar3->fields).hasIcon = true;
          (pGVar3->fields).style = "buttonPrimary";
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
          if (2 < (uint)pGVar2->max_length) {
            pGVar2->m_Items[2] = pGVar3;
            Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 2);
            (__this->fields).children = pGVar2;
            Il2CppCodeGenWriteBarrier(&(__this->fields).children);
            return __this;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Button
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button (UnityEngine_GameObject_o* root, System_String_o* id, const MethodInfo* method);
// 0x5359f60

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
          (UnityEngine_GameObject_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754296e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754296e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_0535a033;
    pUVar2 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(pUVar2,id,method_00);
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
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
    return pUVar3;
  }
label_0535a033:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x535a040
// eh: try 0x535a17f..0x535a2b1 -> pad 0x535a2c4 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x535a2e0..0x535a2e5 -> pad 0x535a385 cleanup
// eh: try 0x535a388..0x535a392 -> pad 0x535a39a catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535a16d: nop dword ptr [rax]
// asm:   0x535a29d: jmp 0x535a2e7
// asm:   0x535a2b6: jmp 0x535a2c4
// asm:   0x535a2b8: jmp 0x535a2c4
// asm:   0x535a2ba: jmp 0x535a2c4
// asm:   0x535a2bc: jmp 0x535a2c4
// asm:   0x535a2be: jmp 0x535a2c4
// asm:   0x535a2c0: jmp 0x535a2c4
// asm:   0x535a2c2: jmp 0x535a2c4
// asm:   0x535a2c4: mov rbx, rax
// asm:   0x535a2c7: cmp edx, 1
// asm:   0x535a2ca: jne 0x535a388
// asm:   0x535a2d0: mov rdi, rbx
// asm:   0x535a2d3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x535a2d8: mov r14, qword ptr [rax]
// asm:   0x535a2db: mov qword ptr [rsp + 0x10], r14
// asm:   0x535a2e0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x535a366: test r14, r14
// asm:   0x535a369: jne 0x535a37d
// asm:   0x535a37d: mov rdi, r14
// asm:   0x535a380: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x535a385: mov rbx, rax
// asm:   0x535a388: lea rdi, [rsp + 0x10]
// asm:   0x535a38d: call 0x2d4ad50  ; il2cpp_runtime_helper_02d4ad50()
// asm:   0x535a392: mov rdi, rbx
// asm:   0x535a395: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x535a39a: mov rdi, rax
// asm:   0x535a39d: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_o *a;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  long lVar9;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754296f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_0754296f = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  if (!bVar4) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar6 = root;
    }
    else {
      local_58 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_58;
      local_48 = 0;
      local_38 = &local_50;
      do {
        pIVar7 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_0535a1a3;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0535a1a3:
        bVar4 = (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        pIVar7 = local_58;
        if (!bVar4) {
          pUVar6 = (UnityEngine_Transform_o *)0x0;
          break;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 1);
              goto label_0535a237;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_0535a237:
        pUVar6 = (UnityEngine_Transform_o *)(*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        method_00 = extraout_RDX;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar6->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
          }
        }
        pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(pUVar6,id,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar4);
      pIVar7 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar7->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        local_50 = pIVar7;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_IDisposable) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_0535a35d;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_0535a35d:
        (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      }
    }
  }
  return pUVar6;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x535a3b0

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_07542970 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07542970 = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    SZArrayNew(TypeInfo_string_array,7);
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
    if (!bVar1) {
      return (toast->fields).UpdateKey;
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    local_30.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastVariant;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = (toast->fields).Variant;
    pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = "|";
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = (toast->fields).Icon;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = "|";
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = (toast->fields).Title;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = "|";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = (toast->fields).Content;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                    pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
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
// 0x5359e00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07542971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07542971 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  (__this->fields).shrink = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).direction = "Row";
  Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
  (__this->fields).alignItems = "Center";
  Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
  (__this->fields).gap = gap;
  return __this;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Column
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column (float gap, const MethodInfo* method);
// 0x5359eb0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07542972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07542972 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  (__this->fields).shrink = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).direction = "Column";
  Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
  (__this->fields).alignItems = "Stretch";
  Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
  (__this->fields).gap = gap;
  (__this->fields).grow = 1.0;
  return __this;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyStack
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x535a570
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535a63e: jmp 0x535aac6
// asm:   0x535a89d: jmp 0x535aac6
// asm:   0x535a9e5: jmp 0x535a86c

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool animate,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  UnityEngine_RectTransform_o *pUVar6;
  DG_Tweening_Tween_o *t;
  Il2CppClass *pIVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  bool bVar9;
  DG_Tweening_Sequence_o *pDVar10;
  Il2CppObject *pIVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX_05;
  int iVar13;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector2_Fields local_78;
  float local_68;
  float fStack_64;
  
  if (Il2CppMethodInitialized_07542973 == '\0') {
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
    Il2CppMethodInitialized_07542973 = '\x01';
  }
  pUVar6 = (__this->fields)._stack;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar6 = (__this->fields)._stack;
    fVar15 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,pMVar12);
    if ((__this->fields)._expanded == false) {
      (__this->fields)._expandedStackHeight = 0.0;
      fVar17 = fVar15;
    }
    else {
      fVar17 = (__this->fields)._expandedStackHeight;
      if (fVar17 <= fVar15) {
        fVar17 = fVar15;
      }
      (__this->fields)._expandedStackHeight = fVar17;
    }
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_0535aac6;
    value.fields.y = fVar17;
    value.fields.x = 560.0;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
  }
  targetAddress = &(__this->fields)._stackTween;
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  *targetAddress = (DG_Tweening_Tween_o *)0x0;
  pDVar10 = (DG_Tweening_Sequence_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (animate) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    pDVar10 = (DG_Tweening_Sequence_o *)0x0;
    bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar9) goto label_0535a725;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      cVar5 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
    }
    else {
      cVar5 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
    }
    if (cVar5 != '\0') {
      if ((((Il2CppClass *)TypeInfo_DG_Tweening_DOTween)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                          ((Il2CppObject *)pDVar10,true,
                           (MethodInfo_36B08F0 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      goto label_0535a725;
    }
    pDVar10 = (DG_Tweening_Sequence_o *)0x0;
    pSVar14 = (__this->fields)._items;
  }
  else {
label_0535a725:
    pSVar14 = (__this->fields)._items;
  }
  if (pSVar14 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    iVar13 = 0;
    fVar15 = 0.0;
    do {
      if ((pSVar14->fields)._size <= iVar13) {
        (__this->fields)._stackTween = (DG_Tweening_Tween_o *)pDVar10;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pSVar14 = (__this->fields)._items;
        if (pSVar14 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          iVar13 = (pSVar14->fields)._size;
          goto label_0535aa10;
        }
        break;
      }
      pIVar11 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item)
      ;
      if (pIVar11 == (Il2CppObject *)0x0) break;
      pIVar7 = pIVar11[2].klass;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar9) {
        pMVar12 = extraout_RDX;
        if ((__this->fields)._expanded == false) {
          if (iVar13 == 0) {
            local_78.x = 0.0;
            local_78.y = 0.0;
          }
          else {
            if (Il2CppMethodInitialized_07542976 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count)
              ;
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
              Il2CppMethodInitialized_07542976 = '\x01';
              pMVar12 = extraout_RDX_03;
            }
            pSVar14 = (__this->fields)._items;
            if (pSVar14 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
            if ((pSVar14->fields)._size < 1) {
              fVar17 = 0.0;
            }
            else {
              pIVar11 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar14,0,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                                  );
              if (pIVar11 == (Il2CppObject *)0x0) break;
              fVar17 = *(float *)&pIVar11[2].monitor + -96.0;
              pMVar12 = extraout_RDX_04;
            }
            fVar1 = 0.0;
            if (0.0 <= fVar17) {
              fVar1 = fVar17;
            }
            local_78 = (UnityEngine_Vector2_Fields)((ulong)(uint)((float)iVar13 * 14.0 + fVar1) << 0x20);
            if ((__this->fields)._expanded != false) goto label_0535a811;
          }
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
            pMVar12 = extraout_RDX_05;
          }
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar2 = (pUVar8->oneVector).fields.x;
          uVar4 = (pUVar8->oneVector).fields.y;
          fVar1 = (float)iVar13 * -0.06 + 1.0;
          fVar17 = 0.82;
          if (0.82 <= fVar1) {
            fVar17 = fVar1;
          }
          fVar1 = fVar17 * (float)uVar2;
          fVar3 = fVar17 * (float)uVar4;
          fVar17 = fVar17 * (pUVar8->oneVector).fields.z;
        }
        else {
          local_78 = (UnityEngine_Vector2_Fields)((ulong)(uint)fVar15 << 0x20);
label_0535a811:
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
            pMVar12 = extraout_RDX_00;
          }
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar1 = (pUVar8->oneVector).fields.x;
          fVar3 = (pUVar8->oneVector).fields.y;
          fVar17 = (pUVar8->oneVector).fields.z;
        }
        if (Il2CppMethodInitialized_07542976 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
          Il2CppMethodInitialized_07542976 = '\x01';
          pMVar12 = extraout_RDX_01;
        }
        pSVar14 = (__this->fields)._items;
        if (pSVar14 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
        fVar16 = 96.0;
        if (iVar13 < (pSVar14->fields)._size) {
          pIVar11 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                              );
          if (pIVar11 == (Il2CppObject *)0x0) break;
          fVar16 = *(float *)&pIVar11[2].monitor;
          pMVar12 = extraout_RDX_02;
        }
        fVar15 = fVar15 + fVar16 + 8.0;
        if (pDVar10 == (DG_Tweening_Sequence_o *)0x0) {
          if (pIVar7 == (Il2CppClass *)0x0) break;
          UnityEngine_RectTransform__set_anchoredPosition
                    ((UnityEngine_RectTransform_o *)pIVar7,(UnityEngine_Vector2_o)local_78,(MethodInfo *)0x0);
          value_00.fields.y = fVar3;
          value_00.fields.x = fVar1;
          value_00.fields.z = fVar17;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pIVar7,value_00,(MethodInfo *)0x0);
        }
        else {
          scale.fields.y = fVar3;
          scale.fields.x = fVar1;
          scale.fields.z = fVar17;
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
                    (pDVar10,(UnityEngine_RectTransform_o *)pIVar7,(UnityEngine_Vector2_o)local_78,scale,
                     pMVar12);
        }
      }
      iVar13 = iVar13 + 1;
      pSVar14 = (__this->fields)._items;
    } while (pSVar14 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0);
  }
label_0535aac6:
  ThrowNullReferenceException();
label_0535aa10:
  iVar13 = iVar13 + -1;
  if (iVar13 < 0) {
    return;
  }
  pSVar14 = (__this->fields)._items;
  if ((pSVar14 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
     (pIVar11 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item)
     , pIVar11 == (Il2CppObject *)0x0)) goto label_0535aac6;
  pIVar7 = pIVar11[2].klass;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pSVar14 = (__this->fields)._items;
    if (((pSVar14 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
        (pIVar11 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             ), pIVar11 == (Il2CppObject *)0x0)) || (pIVar11[2].klass == (Il2CppClass *)0x0))
    goto label_0535aac6;
    UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pIVar11[2].klass,(MethodInfo *)0x0);
  }
  goto label_0535aa10;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AppliedStackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535aad0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,method);
  if ((__this->fields)._expanded == false) {
    (__this->fields)._expandedStackHeight = 0.0;
    return fVar1;
  }
  fVar2 = (__this->fields)._expandedStackHeight;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  (__this->fields)._expandedStackHeight = fVar2;
  return fVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x535ada0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o position,UnityEngine_Vector3_o scale,
               MethodInfo *method)

{
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchoredPosition(rect,position,(MethodInfo *)0x0);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,scale,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AnimateSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot (DG_Tweening_Sequence_o* sequence, UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x535ac20

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
               (DG_Tweening_Sequence_o *sequence,UnityEngine_RectTransform_o *rect,
               UnityEngine_Vector2_o position,UnityEngine_Vector3_o scale,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  
  if (Il2CppMethodInitialized_07542974 == '\0') {
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
    Il2CppMethodInitialized_07542974 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *)0x0) {
    (__this_00->fields).rect = rect;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).rect);
    (__this_00->fields).position.fields = position.fields;
    __this = (__this_00->fields).rect;
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      (__this_00->fields).start.fields = UVar1;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0_AnimateSlot_b__0
                 ,(MethodInfo_4293C90 *)0x0);
      pDVar2 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,__this_01,(MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar2,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      DG_Tweening_TweenSettingsExtensions__Join(sequence,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOScale
                    ((UnityEngine_Transform_o *)(__this_00->fields).rect,scale,0.12,(MethodInfo *)0x0);
      t_00 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)t,true,
                        (MethodInfo_36B08F0 *)
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
// 0x535ade0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535af76: jmp 0x535b019

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  int32_t index;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_07542975 = '\x01';
  }
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_0535b030:
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._size == 0) {
    fVar4 = 96.0;
  }
  else {
    if ((__this->fields)._expanded != false) {
      index = 0;
      fVar4 = 16.0;
      do {
        if ((pSVar3->fields)._size <= index) {
          return fVar4;
        }
        if (Il2CppMethodInitialized_07542976 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
          Il2CppMethodInitialized_07542976 = '\x01';
        }
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
        fVar5 = 96.0;
        if (index < (pSVar3->fields)._size) {
          pIVar2 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             );
          if (pIVar2 == (Il2CppObject *)0x0) break;
          fVar5 = *(float *)&pIVar2[2].monitor;
        }
        fVar6 = 0.0;
        if (index != 0) {
          fVar6 = 8.0;
        }
        fVar4 = fVar4 + fVar5 + fVar6;
        index = index + 1;
        pSVar3 = (__this->fields)._items;
      } while (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0);
      goto label_0535b030;
    }
    if (Il2CppMethodInitialized_07542976 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      Il2CppMethodInitialized_07542976 = '\x01';
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
      goto label_0535b030;
    }
    if ((pSVar3->fields)._size < 1) {
      fVar4 = 96.0;
      iVar1 = (pSVar3->fields)._size;
    }
    else {
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if ((pIVar2 == (Il2CppObject *)0x0) ||
         (pSVar3 = (__this->fields)._items,
         pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0))
      goto label_0535b030;
      fVar4 = *(float *)&pIVar2[2].monitor;
      iVar1 = (pSVar3->fields)._size;
    }
    fVar5 = 96.0;
    if (0 < iVar1 + -1) {
      if (Il2CppMethodInitialized_07542976 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
        Il2CppMethodInitialized_07542976 = '\x01';
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto label_0535b030;
      }
      fVar5 = 0.0;
      if (0 < (pSVar3->fields)._size) {
        pIVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto label_0535b030;
        fVar5 = *(float *)&pIVar2[2].monitor + -96.0;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = (float)(iVar1 + -1) * 14.0 + fVar6 + 96.0;
    }
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar4 = fVar4 + 16.0;
  }
  return fVar4;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HeightAt
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x535aba0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07542976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_07542976 = '\x01';
  }
  fVar2 = 96.0;
  if (-1 < index) {
    __this_00 = (__this->fields)._items;
    if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_0535ac0e:
      ThrowNullReferenceException();
    }
    if (index < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if (pIVar1 == (Il2CppObject *)0x0) goto label_0535ac0e;
      fVar2 = *(float *)&pIVar1[2].monitor;
    }
  }
  return fVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight (bool showDismissAll, const MethodInfo* method);
// 0x535b050

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight(bool showDismissAll,MethodInfo *method)

{
  undefined3 in_register_00000039;
  
  if (CONCAT31(in_register_00000039,showDismissAll) == 0) {
    return 96.0;
  }
  return 168.0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RefreshDismissAllButtons
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535b070

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float height;
  int iVar2;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  UnityEngine_UI_Button_o *x;
  UnityEngine_GameObject_o *pUVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *method_00;
  uint index;
  MethodInfo *method_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_07542977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"toast-close-all");
    Il2CppMethodInitialized_07542977 = '\x01';
  }
  pSVar7 = (__this->fields)._items;
  if (pSVar7 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    index = 0;
    do {
      iVar2 = (pSVar7->fields)._size;
      if (iVar2 <= (int)index) {
        return;
      }
      uVar8 = 0;
      if ((index == 0) && (uVar8 = 1, iVar2 < 2)) {
        pSVar3 = (__this->fields)._pending;
        if (pSVar3 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
        uVar8 = (ulong)(0 < (pSVar3->fields)._size);
      }
      pIVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar7,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar5[1].monitor == (void *)0x0)) break;
      x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                    (*(UnityEngine_GameObject_o **)((long)pIVar5[1].monitor + 0x18),"toast-close-all",
                     method_00);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (x == (UnityEngine_UI_Button_o *)0x0) break;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_GameObject_o *)0x0) break;
        bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
        if ((uint)uVar8 != (uint)bVar4) {
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) break;
          UnityEngine_GameObject__SetActive(pUVar6,SUB81(uVar8,0),(MethodInfo *)0x0);
          pSVar7 = (__this->fields)._items;
          if (pSVar7 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar7,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                             );
          if (pIVar5 == (Il2CppObject *)0x0) break;
          *(undefined1 *)((long)&pIVar5[2].monitor + 4) = 1;
        }
      }
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
      pIVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar7,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if (pIVar5 == (Il2CppObject *)0x0) break;
      fVar1 = *(float *)&pIVar5[2].monitor;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      height = *(float *)(&g_data_0100ad70 + uVar8 * 4);
      fVar10 = ABS(fVar1);
      if (fVar10 <= height) {
        fVar10 = height;
      }
      fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar11 = fVar10 * 1e-06;
      if (fVar10 * 1e-06 <= fVar9) {
        fVar11 = fVar9;
      }
      if (fVar11 <= ABS(height - fVar1)) {
        pSVar7 = (__this->fields)._items;
        if (pSVar7 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
        pIVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item
                           );
        if (pIVar5 == (Il2CppObject *)0x0) break;
        *(undefined1 *)((long)&pIVar5[2].monitor + 4) = 1;
      }
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
      pIVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar7,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if (pIVar5 == (Il2CppObject *)0x0) break;
      *(float *)&pIVar5[2].monitor = height;
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
      method_01 = (MethodInfo *)(ulong)index;
      item = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar7,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight(item,height,method_01);
      index = index + 1;
      pSVar7 = (__this->fields)._items;
    } while (pSVar7 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CollapsedY
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x535ab00

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
  if (Il2CppMethodInitialized_07542976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_07542976 = '\x01';
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_0535ab98:
    ThrowNullReferenceException();
  }
  fVar2 = 0.0;
  if (0 < (__this_00->fields)._size) {
    pIVar1 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_0535ab98;
    fVar2 = *(float *)&pIVar1[2].monitor + -96.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  return (float)index * 14.0 + fVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlotHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* item, float height, const MethodInfo* method);
// 0x535b320

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item,float height,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (Il2CppMethodInitialized_07542978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542978 = '\x01';
  }
  if (item != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
    pUVar4 = (item->fields).Slot;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar4 = (item->fields).Slot;
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_0535b46a;
      UnityEngine_RectTransform__set_offsetMax
                (pUVar4,(UnityEngine_Vector2_o)((ulong)(uint)height << 0x20),(MethodInfo *)0x0);
    }
    pGVar1 = (item->fields).View;
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      x = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pUVar4 = (UnityEngine_RectTransform_o *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pGVar1 = (item->fields).View;
        if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (__this = (pGVar1->fields)._Root_k__BackingField, __this == (UnityEngine_GameObject_o *)0x0))
        goto label_0535b46a;
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           (__this,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
        value.fields.y = height;
        value.fields.x = UVar2.fields.x;
        UnityEngine_RectTransform__set_sizeDelta(pUVar4,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0535b46a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroySlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot (UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x535b470

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
               (UnityEngine_RectTransform_o *slot,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542979 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)slot,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (bVar1) {
    if (slot != (UnityEngine_RectTransform_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)slot,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if (slot != (UnityEngine_RectTransform_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)slot,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_6921750(pUVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FinishClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x535b570

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_RectTransform_o *slot,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)slot;
  if (Il2CppMethodInitialized_0754297a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_0754297a = '\x01';
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,method_00);
  pSVar1 = (__this->fields)._items;
  if (pSVar1 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._size == 0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdateVisible
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x535b730

bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  uint index;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  
  pMVar3 = (MethodInfo *)key;
  if (Il2CppMethodInitialized_0754297b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_0754297b = '\x01';
    pMVar3 = extraout_RDX;
  }
  index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_525b810((__this->fields)._items,key,pMVar3)
  ;
  if ((int)index < 0) {
label_0535b7fb:
    return -1 < (int)index;
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    pIVar2 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    pSVar1 = (__this->fields)._items;
    if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      pMVar3 = (MethodInfo *)(ulong)index;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                 (MethodInfo_395F100 *)
                 MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
      if (pIVar2 != (Il2CppObject *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                  ((UnityEngine_RectTransform_o *)pIVar2[2].klass,pMVar3);
        pSVar1 = (__this->fields)._items;
        item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,method_00);
        if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)pSVar1,index,(Il2CppObject *)item,
                     (MethodInfo_395E3E0 *)
                     MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
          goto label_0535b7fb;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdatePending
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x535bbb0

bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_AottgToastDefinition__o *__this_00;
  int32_t index;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)key;
  if (Il2CppMethodInitialized_0754297c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item);
    Il2CppMethodInitialized_0754297c = '\x01';
    method_00 = extraout_RDX;
  }
  index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf((__this->fields)._pending,key,method_00);
  if (-1 < index) {
    __this_00 = (__this->fields)._pending;
    if (__this_00 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___set_Item
              ((System_Collections_Generic_List_object__o *)__this_00,index,(Il2CppObject *)toast,
               (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item)
    ;
  }
  return -1 < index;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HasUpdateKey
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x535a550

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
// 0x535bc20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535bc9e: jmp 0x535bca3

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf
                  (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
                  MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  uint index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754297d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_0754297d = '\x01';
  }
  if (list == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (list->fields)._size) {
    index = 0;
    do {
      method_00 = (MethodInfo *)(ulong)index;
      toast = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)list,index,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
      a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,method_00);
      bVar1 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      index = index + 1;
    } while ((int)index < (list->fields)._size);
  }
  return -1;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x535bcc0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  System_Collections_Generic_List_AottgToastDefinition__o *__this_01;
  
  if (Il2CppMethodInitialized_0754297e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgToastDefinition)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem);
    Il2CppMethodInitialized_0754297e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgToastDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_ctor);
  (__this->fields)._pending = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layer);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Show
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x535bdc0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535bea4: jmp 0x535bf37
// asm:   0x535bf1b: cmp byte ptr [rip + 0x21e6a65], 0
// asm:   0x535bf22: jne 0x535bf37
// asm:   0x535bf8e: jmp 0x535bf37

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar4;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *pGVar5;
  bool bVar6;
  int32_t index;
  System_String_o *key;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *method_02;
  
  pMVar7 = (MethodInfo *)toast;
  if (Il2CppMethodInitialized_0754297f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_0754297f = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    return;
  }
  key = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar7);
  bVar6 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
  if (bVar6) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible(__this,key,method_00);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove((__this->fields)._pending,key,method_01);
label_0535be31:
    pMVar7 = MethodInfo_System_Collections_Generic_List_AottgToastDefinition_Add;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) goto label_0535bf90;
    if ((pSVar3->fields)._size < 3) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
      pMVar7 = (MethodInfo *)toast;
    }
    else {
      pSVar4 = (__this->fields)._pending;
      if (pSVar4 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) goto label_0535bf90;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (pSVar4->fields)._items;
      if (pGVar5 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) goto label_0535bf90;
      uVar2 = (pSVar4->fields)._size;
      if (uVar2 < (uint)pGVar5->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
        pGVar5->m_Items[(int)uVar2] = toast;
        Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2);
        pMVar7 = (MethodInfo *)toast;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)toast,
                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        pMVar7 = (MethodInfo *)toast;
      }
    }
  }
  else {
    pMVar7 = (MethodInfo *)toast;
    bVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible(__this,toast,key,in_RCX);
    if (!bVar6) {
      pMVar7 = extraout_RDX;
      if (Il2CppMethodInitialized_0754297c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item);
        Il2CppMethodInitialized_0754297c = '\x01';
        pMVar7 = extraout_RDX_00;
      }
      index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf((__this->fields)._pending,key,pMVar7);
      if (-1 < index) {
        pSVar4 = (__this->fields)._pending;
        if (pSVar4 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
          System_Collections_Generic_List_object___set_Item
                    ((System_Collections_Generic_List_object__o *)pSVar4,index,(Il2CppObject *)toast,
                     (MethodInfo_395CF60 *)
                     MethodInfo_System_Collections_Generic_List_AottgToastDefinition_set_Item);
          return;
        }
        goto label_0535bf90;
      }
      goto label_0535be31;
    }
  }
  if (Il2CppMethodInitialized_07542987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_07542987 = '\x01';
  }
  pSVar3 = (__this->fields)._items;
  if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar3->fields)._size == 0) {
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,pMVar7);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar7);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,true,method_02);
    return;
  }
label_0535bf90:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x535c230

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool animate,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,animate);
  if (Il2CppMethodInitialized_07542980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_Clear);
    Il2CppMethodInitialized_07542980 = '\x01';
  }
  pSVar2 = (__this->fields)._pending;
  if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    method_00 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AddVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, int32_t index, const MethodInfo* method);
// 0x535c160

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,int32_t index,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07542981 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
    Il2CppMethodInitialized_07542981 = '\x01';
  }
  if (Il2CppMethodInitialized_07542989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542989 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar1) {
    pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,method_01);
    (__this->fields)._host = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._host);
    method_00 = extraout_RDX_00;
  }
  __this_00 = (__this->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,method_00);
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Insert
            ((System_Collections_Generic_List_object__o *)__this_00,index,(Il2CppObject *)item,
             (MethodInfo_395E3E0 *)
             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Insert);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$BuildToast
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x535b8b0

Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *pUVar3;
  Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *pGVar4;
  System_Action_o *__this_01;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this_02;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o **targetAddress;
  
  if (Il2CppMethodInitialized_07542982 == '\0') {
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
    Il2CppMethodInitialized_07542982 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    targetAddress = &(__this_00->fields).toast;
    (__this_00->fields).toast = toast;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
                       ((__this->fields)._stack,96.0,(MethodInfo *)toast);
    overlay = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    (overlay->fields).modal = true;
    (overlay->fields).dismissOnBackdrop = true;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    pMVar6 = (MethodInfo *)"toast";
    (overlay->fields).id = "toast";
    Il2CppCodeGenWriteBarrier(&(overlay->fields).id);
    (overlay->fields).modal = false;
    pGVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode((__this_00->fields).toast,pMVar6);
    (overlay->fields).root = pGVar2;
    Il2CppCodeGenWriteBarrier(&(overlay->fields).root);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      context = (__this->fields)._context;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      pMVar6 = (MethodInfo *)0x0;
      view = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                       (overlay,parent,context,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar1,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
                  (__this,(view->fields)._Root_k__BackingField,96.0,method_00);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
                  ((view->fields)._Root_k__BackingField,1,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
                  (__this,(view->fields)._Root_k__BackingField,*targetAddress,pMVar6);
        pUVar1 = (view->fields)._Root_k__BackingField;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pGVar4 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar1,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToastBehaviour);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0_BuildToast_b__0
                     ,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *)0x0) {
            (pGVar4->fields)._close = __this_01;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields)._close);
            (pGVar4->fields)._remaining = 5.0;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            pMVar6 = (MethodInfo *)0x0;
            Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
            pSVar5 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(*targetAddress,pMVar6);
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem);
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            (__this_02->fields).Key = pSVar5;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).Key);
            (__this_02->fields).View = view;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).View);
            (__this_02->fields).Slot = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).Slot);
            (__this_02->fields).Height = 96.0;
            return __this_02;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Wire
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x535c690

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_GameObject_o *root,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *__this_00;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07542983 == '\0') {
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
    Il2CppMethodInitialized_07542983 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *)0x0)
  goto label_0535c879;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).toast = toast;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).toast);
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close",method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_RDX;
  if (bVar2) {
    if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto label_0535c879;
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar4,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0_Wire_b__0,
               (MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_0535c879;
    UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
    method_01 = extraout_RDX_00;
  }
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close-all",method_01);
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
              (pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_CloseAll,(MethodInfo *)0x0
              );
    if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
label_0535c879:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x535c900
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535ca8d: jmp 0x535cb1f

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_525c900
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *slot;
  uint index;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *__this_00;
  System_String_o *key;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar3;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o **targetAddress;
  
  if (Il2CppMethodInitialized_07542984 == '\0') {
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
    Il2CppMethodInitialized_07542984 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    pMVar4 = (MethodInfo *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pSVar2 = (__this->fields)._items;
    key = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar4);
    index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_525b810(pSVar2,key,method_00);
    if ((int)index < 0) {
      return;
    }
    pSVar2 = (__this->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      pGVar3 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      targetAddress = &(__this_00->fields).item;
      (__this_00->fields).item = pGVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar2 = (__this->fields)._items;
      if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
        pMVar4 = (MethodInfo *)(ulong)index;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,
                   (MethodInfo_395F100 *)
                   MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,pMVar4);
        if (Il2CppMethodInitialized_07542987 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
          Il2CppMethodInitialized_07542987 = '\x01';
        }
        pSVar2 = (__this->fields)._items;
        if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          if ((pSVar2->fields)._size != 0) {
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,pMVar4);
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar4);
            pMVar4 = (MethodInfo *)0x1;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,true,method_01);
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            cVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
          }
          else {
            cVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
          }
          if (cVar1 != '\0') {
            if (*targetAddress == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0)
            goto label_0535cb7b;
            view = ((*targetAddress)->fields).View;
            if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            pMVar4 = (MethodInfo *)0x0;
            t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
            if (t != (DG_Tweening_Tween_o *)0x0) {
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        (__this_01,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0_Close_b__0
                         ,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                        ((Il2CppObject *)t,__this_01,
                         (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween
                        );
              return;
            }
          }
          if (*targetAddress != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
            slot = ((*targetAddress)->fields).Slot;
            if (Il2CppMethodInitialized_0754297a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count)
              ;
              Il2CppMethodInitialized_0754297a = '\x01';
            }
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,pMVar4);
            pSVar2 = (__this->fields)._items;
            if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
              if ((pSVar2->fields)._size == 0) {
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,pMVar4);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
label_0535cb7b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CloseAll
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535cc60

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,method);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,method);
  if (Il2CppMethodInitialized_07542987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_07542987 = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._size == 0) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,method);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,method);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetExpanded
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool expanded, const MethodInfo* method);
// 0x535ccc0
// eh: try 0x535cda4..0x535ce4e -> pad 0x535ce61 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x535ce79..0x535ce7e -> pad 0x535ce9f cleanup
// eh: try 0x535cea2..0x535ceac -> pad 0x535ceb4 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535ce53: jmp 0x535ce61
// asm:   0x535ce55: jmp 0x535ce61
// asm:   0x535ce57: jmp 0x535ce61
// asm:   0x535ce59: jmp 0x535ce61
// asm:   0x535ce5b: jmp 0x535ce61
// asm:   0x535ce5d: jmp 0x535ce61
// asm:   0x535ce5f: jmp 0x535ce61
// asm:   0x535ce61: mov rbx, rax
// asm:   0x535ce64: cmp edx, 1
// asm:   0x535ce67: jne 0x535cea2
// asm:   0x535ce69: mov rdi, rbx
// asm:   0x535ce6c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x535ce71: mov rbx, qword ptr [rax]
// asm:   0x535ce74: mov qword ptr [rsp + 8], rbx
// asm:   0x535ce79: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x535ce7e: lea rax, [rip + 0x1f32393]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose
// asm:   0x535ce85: mov rsi, qword ptr [rax]
// asm:   0x535ce88: lea rdi, [rsp + 0x20]
// asm:   0x535ce8d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x535ce92: test rbx, rbx
// asm:   0x535ce95: je 0x535ce1c
// asm:   0x535ce97: mov rdi, rbx
// asm:   0x535ce9a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x535ce9f: mov rbx, rax
// asm:   0x535cea2: lea rdi, [rsp + 8]
// asm:   0x535cea7: call 0x2d4adf0  ; il2cpp_runtime_helper_02d4adf0()
// asm:   0x535ceac: mov rdi, rbx
// asm:   0x535ceaf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x535ceb4: mov rdi, rax
// asm:   0x535ceb7: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool expanded,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *x;
  MethodInfo *method_00;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  System_Collections_Generic_List_Enumerator_object__o SStack_58;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGStack_38;
  
  if (Il2CppMethodInitialized_07542985 == '\0') {
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
    Il2CppMethodInitialized_07542985 = '\x01';
  }
  (__this->fields)._expanded = expanded;
  __this_00 = (__this->fields)._items;
  pGStack_38 = __this;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_GetEnumerator);
  SStack_58.fields._current = pIStack_60;
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)auStack_70._0_8_;
  SStack_58.fields._index = auStack_70._8_4_;
  SStack_58.fields._version = auStack_70._12_4_;
  auStack_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_70._8_8_ = &SStack_58;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext
                      );
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&SStack_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose)
      ;
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(pGStack_38,true,method_00);
      return;
    }
    if (SStack_58.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (SStack_58.fields._current[1].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = *(UnityEngine_GameObject_o **)((long)SStack_58.fields._current[1].monitor + 0x18);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_01,
                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchToastBehaviour
                  );
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
// 0x535cb90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535cbe4: lea r15, [rip + 0x1f36925]  ; MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item
// asm:   0x535cbeb: lea r12, [rip + 0x1f3690e]  ; MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt
// asm:   0x535cbf2: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07542986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_07542986 = '\x01';
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
    toast = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar2,0,
                       (MethodInfo_395CF20 *)
                       MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    pSVar2 = (__this->fields)._pending;
    if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar2,0,
               (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt)
    ;
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
    pSVar1 = (__this->fields)._items;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyCurrentLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x535bfa0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool animate,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT71(in_register_00000031,animate);
  if (Il2CppMethodInitialized_07542987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    Il2CppMethodInitialized_07542987 = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._size == 0) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,method_01);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,method_01);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,animate,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SettleVisibleLayouts
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535cec0
// eh: try 0x535cf93..0x535d04f -> pad 0x535d060 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x535d078..0x535d07d -> pad 0x535d09e cleanup
// eh: try 0x535d0a1..0x535d0ab -> pad 0x535d0b3 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535d054: jmp 0x535d060
// asm:   0x535d056: jmp 0x535d060
// asm:   0x535d058: jmp 0x535d060
// asm:   0x535d05a: jmp 0x535d060
// asm:   0x535d05c: jmp 0x535d060
// asm:   0x535d05e: jmp 0x535d060
// asm:   0x535d060: mov rbx, rax
// asm:   0x535d063: cmp edx, 1
// asm:   0x535d066: jne 0x535d0a1
// asm:   0x535d068: mov rdi, rbx
// asm:   0x535d06b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x535d070: mov rbx, qword ptr [rax]
// asm:   0x535d073: mov qword ptr [rsp + 8], rbx
// asm:   0x535d078: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x535d07d: lea rax, [rip + 0x1f32194]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose
// asm:   0x535d084: mov rsi, qword ptr [rax]
// asm:   0x535d087: lea rdi, [rsp + 0x20]
// asm:   0x535d08c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x535d091: test rbx, rbx
// asm:   0x535d094: je 0x535d031
// asm:   0x535d096: mov rdi, rbx
// asm:   0x535d099: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x535d09e: mov rbx, rax
// asm:   0x535d0a1: lea rdi, [rsp + 8]
// asm:   0x535d0a6: call 0x2d4ae20  ; il2cpp_runtime_helper_02d4ae20()
// asm:   0x535d0ab: mov rdi, rbx
// asm:   0x535d0ae: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x535d0b3: mov rdi, rax
// asm:   0x535d0b6: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_Object_o *x;
  void *pvVar1;
  UnityEngine_GameObject_o *root;
  Il2CppObject *pIVar2;
  bool bVar3;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07542988 == '\0') {
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
    Il2CppMethodInitialized_07542988 = '\x01';
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_GetEnumerator);
  local_48.fields._current = local_50;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext
                      );
    pIVar2 = local_48.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_Dispose)
      ;
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (*(char *)((long)&local_48.fields._current[2].monitor + 4) != '\0') {
      if (local_48.fields._current[1].monitor == (void *)0x0) {
        ThrowNullReferenceException();
      }
      x = *(UnityEngine_Object_o **)((long)local_48.fields._current[1].monitor + 0x18);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pvVar1 = pIVar2[1].monitor;
        if (pvVar1 == (void *)0x0) {
          ThrowNullReferenceException();
        }
        root = *(UnityEngine_GameObject_o **)((long)pvVar1 + 0x18);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,1,(MethodInfo *)0x0);
        *(undefined1 *)((long)&pIVar2[2].monitor + 4) = 0;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$EnsureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535c290

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542989 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,method_00);
    (__this->fields)._host = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._host);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RemoveVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, System_String_o* key, const MethodInfo* method);
// 0x535c010

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,System_String_o *key,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  uint index;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754298a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_0754298a = '\x01';
    method = extraout_RDX;
  }
  index = Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_525b810((__this->fields)._items,key,method)
  ;
  if ((int)index < 0) {
    return;
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    pIVar2 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    pSVar1 = (__this->fields)._items;
    if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      method_00 = (MethodInfo *)(ulong)index;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                 (MethodInfo_395F100 *)
                 MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_RemoveAt);
      if (pIVar2 != (Il2CppObject *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                  ((UnityEngine_RectTransform_o *)pIVar2[2].klass,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Remove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x535c0b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535c0fe: lea r15, [rip + 0x1f3740b]  ; MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item
// asm:   0x535c105: lea r12, [rip + 0x1f373f4]  ; MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt
// asm:   0x535c10c: jmp 0x535c114
// asm:   0x535c110: dec ebp
// asm:   0x535c112: js 0x535c14a

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove
               (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
               MethodInfo *method)

{
  uint index;
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754298b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    Il2CppMethodInitialized_0754298b = '\x01';
  }
  if (list == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = (list->fields)._size;
  while (index = index - 1, -1 < (int)index) {
    method_00 = (MethodInfo *)(ulong)index;
    toast = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)list,index,
                       (MethodInfo_395CF20 *)
                       MethodInfo_System_Collections_Generic_List_AottgToastDefinition_get_Item);
    a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,method_00);
    bVar1 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
    if (bVar1) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)list,index,
                 (MethodInfo_395F100 *)
                 MethodInfo_System_Collections_Generic_List_AottgToastDefinition_RemoveAt);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_GisketchToastManager_ToastItem__o* list, System_String_o* key, const MethodInfo* method);
// 0x535b810
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535b88c: jmp 0x535b891

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_525b810
                  (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *list,
                  System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int32_t index;
  
  if (Il2CppMethodInitialized_0754298c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
    Il2CppMethodInitialized_0754298c = '\x01';
  }
  if (list == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_0535b89d:
    ThrowNullReferenceException();
  }
  if (0 < (list->fields)._size) {
    index = 0;
    do {
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)list,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0535b89d;
      bVar1 = System_String__op_Equality((System_String_o *)pIVar2[1].klass,key,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      index = index + 1;
    } while (index < (list->fields)._size);
  }
  return -1;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroyHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535b5d0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint32_t uVar2;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  bool bVar5;
  UnityEngine_GameObject_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754298d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754298d = '\x01';
  }
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stackTween);
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  (__this->fields)._expandedStackHeight = 0.0;
  (__this->fields)._expanded = false;
  (__this->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stack);
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._host;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  targetAddress = &(__this->fields)._host;
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Object_o *)*targetAddress;
  uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar5) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
  }
  else {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_6921750(pUVar4,(MethodInfo *)0x0);
  }
  *targetAddress = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Host
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535d0c0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
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
  System_Action_bool__o *__this_02;
  
  if (Il2CppMethodInitialized_0754298e == '\0') {
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
    Il2CppMethodInitialized_0754298e = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Type_array *)0x0) {
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_0535d56b;
    }
    if ((int)pSVar1->max_length == 0) {
label_0535d566:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Toast Host",pSVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(pUVar4,(__this->fields)._layer,false,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                           );
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0)
          ;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
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
label_0535d56b:
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if ((int)pSVar1->max_length == 0) goto label_0535d566;
            pSVar1->m_Items[0] = pSVar2;
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_691aa60(__this_01,"AoTTG Toast Stack",pSVar1,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
                pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_01,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                targetAddress = &(__this->fields)._stack;
                (__this->fields)._stack = pUVar5;
                Il2CppCodeGenWriteBarrier(targetAddress);
                pUVar5 = (__this->fields)._stack;
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar5,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                  if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (*targetAddress,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                    if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (*targetAddress,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                      if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (*targetAddress,(UnityEngine_Vector2_o)0x4200000000000000,(MethodInfo *)0x0)
                        ;
                        if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (*targetAddress,(UnityEngine_Vector2_o)0x42c00000440c0000,
                                     (MethodInfo *)0x0);
                          pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                             (__this_01,
                                              (MethodInfo_353B6A0 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar6,(UnityEngine_Color_o)ZEXT816(0),
                                       (pUVar6->klass->vtable)._23_set_color.method);
                            (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                                      (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
                            pGVar7 = UnityEngine_GameObject__AddComponent_object_
                                               (__this_01,
                                                (MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToastStackHover
                                               );
                            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
                            System_Action_bool____ctor
                                      (__this_02,(Il2CppObject *)__this,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_SetExpanded,
                                       (MethodInfo_4A7F1E0 *)0x0);
                            if (pGVar7 != (Gisketch_Aottg2UI_Overlays_GisketchToastStackHover_o *)0x0) {
                              (pGVar7->fields)._hover = __this_02;
                              Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._hover);
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
// 0x535c320

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
  
  if (Il2CppMethodInitialized_0754298f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toast Slot");
    Il2CppMethodInitialized_0754298f = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
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
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Toast Slot",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_01,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot(__this_01,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)((ulong)(uint)height << 0x20),(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ConfigureToastRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, float height, const MethodInfo* method);
// 0x535c530

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_GameObject_o *root,
               float height,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_07542990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542990 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_0535c67f;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (root,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin(__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax(__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    fVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth(__this,method_00);
    value.fields.y = height;
    value.fields.x = fVar2;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
label_0535c67f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastRootWidth
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x535d580

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07542991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    il2cpp_codegen_initialize_runtime_metadata(&"toast");
    Il2CppMethodInitialized_07542991 = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                       (__this_00,"toast",(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar2 = (pGVar4->fields).width;
      fVar5 = 520.0;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        bVar3 = System_String__Equals_52ffe30((pGVar2->fields).unit,"point",5,(MethodInfo *)0x0)
        ;
        fVar5 = 520.0;
        if (bVar3) {
          pGVar2 = (pGVar4->fields).width;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0535d61e;
          fVar5 = (pGVar2->fields).value;
        }
      }
      return fVar5;
    }
  }
label_0535d61e:
  ThrowNullReferenceException();
}


