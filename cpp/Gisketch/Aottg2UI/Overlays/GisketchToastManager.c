// Type: Gisketch.Aottg2UI.Overlays.GisketchToastManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastManager.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastManager.ToastItem$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* __this, System_String_o* key, Gisketch_Aottg2UI_Building_GisketchView_o* view, UnityEngine_RectTransform_o* slot, float height, const MethodInfo* method);
// 0x3aecbf0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this,
               System_String_o *key,Gisketch_Aottg2UI_Building_GisketchView_o *view,
               UnityEngine_RectTransform_o *slot,float height,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Key = key;
  il2cpp_runtime_glue(&__this->fields,key);
  (__this->fields).View = view;
  il2cpp_runtime_glue(&(__this->fields).View,view);
  (__this->fields).Slot = slot;
  il2cpp_runtime_glue(&(__this->fields).Slot,slot);
  (__this->fields).Height = height;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x3aeb320

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$<AnimateSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0___AnimateSlot_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o* __this, float value, const MethodInfo* method);
// 0x3aedaa0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass10_0__<AnimateSlot>b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass10_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).position.fields;
    fVar3 = UVar1.x;
    fVar4 = UVar1.y;
    value_00.fields.y = value * (UVar2.y - fVar4) + fVar4;
    value_00.fields.x = value * (UVar2.x - fVar3) + fVar3;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x3aec680

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass44_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$<BuildToast>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0___BuildToast_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x3aedae0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass44_0__<BuildToast>b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass44_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close(__this_00,(__this->fields).toast,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x3aecc60

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass45_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$<Wire>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0___Wire_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x3aedb00

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass45_0__<Wire>b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass45_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close(__this_00,(__this->fields).toast,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x3aecf70

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass46_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$<Close>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0___Close_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x3aedb20

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_<>c__DisplayClass46_0__<Close>b__0
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
    if (DAT_057013ed == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_057013ed = '\x01';
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,method);
    pSVar2 = (__this_00->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      if ((pSVar2->fields)._size != 0) {
        return;
      }
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this_00,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3ae94d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_object__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *__this_00;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  MethodInfo *method_00;
  MethodInfo *pMVar12;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (DAT_057013df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastVariant);
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefini);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Dismiss all");
    il2cpp_init_method_metadata(&"toast-close-all");
    il2cpp_init_method_metadata(&"toast-content");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"toastContent");
    il2cpp_init_method_metadata(&"percent");
    il2cpp_init_method_metadata(&"toast-message");
    il2cpp_init_method_metadata(&"toast-root");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"toast-border");
    il2cpp_init_method_metadata(&"toastContentPanel");
    il2cpp_init_method_metadata(&"Panel");
    il2cpp_init_method_metadata(&"toast");
    il2cpp_init_method_metadata(&"Image");
    il2cpp_init_method_metadata(&"buttonQuiet");
    il2cpp_init_method_metadata(&"toastBorder");
    DAT_057013df = '\x01';
  }
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    local_48.klass = TypeInfo_AottgToastVariant;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = (toast->fields).Variant;
    pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_GisketchNodeDefinition);
    System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefini);
    pGVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle(toast,pSVar5,method_00);
    lVar4 = MethodInfo_Void_Add;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pGVar6;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pGVar6,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
        *(undefined1 *)((long)&pIVar7[6].monitor + 2) = 1;
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar7[1].klass = "Text";
          il2cpp_runtime_glue(pIVar7 + 1);
          pIVar7[1].monitor = "toast-message";
          il2cpp_runtime_glue(&pIVar7[1].monitor);
          pIVar7[2].klass = (Il2CppClass *)(toast->fields).Content;
          il2cpp_runtime_glue(pIVar7 + 2);
          pIVar7[4].klass = "toastContent";
          il2cpp_runtime_glue(pIVar7 + 4);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar7;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,pIVar7,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
            *(undefined1 *)((long)&pIVar7[6].monitor + 2) = 1;
            System_Object___ctor(pIVar7,(MethodInfo *)0x0);
            if (pIVar7 != (Il2CppObject *)0x0) {
              pIVar7[1].klass = "Button";
              il2cpp_runtime_glue(pIVar7 + 1);
              pIVar7[1].monitor = "toast-close-all";
              il2cpp_runtime_glue(&pIVar7[1].monitor);
              pIVar7[2].klass = "Dismiss all";
              il2cpp_runtime_glue(pIVar7 + 2);
              pIVar7[4].klass = "buttonQuiet";
              il2cpp_runtime_glue(pIVar7 + 4);
              __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
              *(undefined4 *)((long)&__this_00[6].monitor + 4) = 0x3f800000;
              System_Object___ctor(__this_00,(MethodInfo *)0x0);
              __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
              System_Object___ctor(__this_01,(MethodInfo *)0x0);
              if (__this_01 != (Il2CppObject *)0x0) {
                *(undefined4 *)&__this_01[1].klass = 0x42c80000;
                __this_01[1].monitor = "percent";
                il2cpp_runtime_glue(&__this_01[1].monitor);
                if (__this_00 != (Il2CppObject *)0x0) {
                  __this_00[3].monitor = __this_01;
                  il2cpp_runtime_glue(&__this_00[3].monitor,__this_01);
                  pIVar7[0xd].monitor = __this_00;
                  il2cpp_runtime_glue(&pIVar7[0xd].monitor,__this_00);
                  lVar4 = MethodInfo_Void_Add;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (__this->fields)._items;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    uVar2 = (__this->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (__this->fields)._size = uVar2 + 1;
                      pSVar3->m_Items[(int)uVar2] = pIVar7;
                      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (__this,pIVar7,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    }
                    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                             il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
                    *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 2) = 1;
                    System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
                    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      (pGVar6->fields).type = "Panel";
                      il2cpp_runtime_glue(&pGVar6->fields);
                      (pGVar6->fields).id = "toast-root";
                      il2cpp_runtime_glue(&(pGVar6->fields).id);
                      pMVar12 = (MethodInfo *)&(pGVar6->fields).style;
                      (pGVar6->fields).style = "toast";
                      il2cpp_runtime_glue();
                      pGVar8 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(0.0,pMVar12);
                      (pGVar6->fields).search =
                           (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
                      il2cpp_runtime_glue(&(pGVar6->fields).search,pGVar8);
                      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                               il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
                      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
                      *(undefined1 *)((long)&(pGVar10->fields).hasIcon + 2) = 1;
                      System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
                      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                        (pGVar10->fields).type = "Image";
                        il2cpp_runtime_glue(&pGVar10->fields);
                        (pGVar10->fields).id = "toast-border";
                        il2cpp_runtime_glue(&(pGVar10->fields).id);
                        pSVar5 = System_String__Concat("toastBorder",pSVar5,(MethodInfo *)0x0);
                        (pGVar10->fields).style = pSVar5;
                        il2cpp_runtime_glue(&(pGVar10->fields).style,pSVar5);
                        if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                          if ((int)pGVar9->max_length != 0) {
                            pGVar9->m_Items[0] = pGVar10;
                            il2cpp_runtime_glue(pGVar9->m_Items);
                            pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                      il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
                            *(undefined1 *)((long)&(pGVar10->fields).hasIcon + 2) = 1;
                            System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
                            if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                            goto LAB_03ae9b87;
                            (pGVar10->fields).type = "Panel";
                            il2cpp_runtime_glue(&pGVar10->fields);
                            (pGVar10->fields).id = "toast-content";
                            il2cpp_runtime_glue(&(pGVar10->fields).id);
                            pMVar12 = (MethodInfo *)&(pGVar10->fields).style;
                            (pGVar10->fields).style = "toastContentPanel";
                            il2cpp_runtime_glue();
                            pGVar8 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column
                                               (12.0,pMVar12);
                            (pGVar10->fields).search =
                                 (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
                            il2cpp_runtime_glue(&(pGVar10->fields).search,pGVar8);
                            pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                      System_Collections_Generic_List<object>__ToArray
                                                (__this,MethodInfo_GisketchNodeDefinition___ToArray);
                            (pGVar10->fields).deferredChildren = pGVar11;
                            il2cpp_runtime_glue(&(pGVar10->fields).deferredChildren,pGVar11);
                            if (1 < (uint)pGVar9->max_length) {
                              pGVar9->m_Items[1] = pGVar10;
                              il2cpp_runtime_glue(pGVar9->m_Items + 1,pGVar10);
                              (pGVar6->fields).deferredChildren = pGVar9;
                              il2cpp_runtime_glue(&(pGVar6->fields).deferredChildren,pGVar9);
                              return pGVar6;
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
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
LAB_03ae9b87:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastTitle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* variant, const MethodInfo* method);
// 0x3ae9ba0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *variant,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_057013e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"toast-icon");
    il2cpp_init_method_metadata(&"toastTitle");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"buttonPrimary");
    il2cpp_init_method_metadata(&"toastIcon");
    il2cpp_init_method_metadata(&"cross");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"Panel");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"toast-title-row");
    il2cpp_init_method_metadata(&"toast-title");
    il2cpp_init_method_metadata(&"toast-close");
    DAT_057013e0 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  *(undefined1 *)((long)&(__this->fields).hasIcon + 2) = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = "toast-title-row";
    il2cpp_runtime_glue(&(__this->fields).id);
    method_00 = (MethodInfo *)&(__this->fields).style;
    (__this->fields).style = "clear";
    il2cpp_runtime_glue();
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,method_00);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
    il2cpp_runtime_glue(&(__this->fields).search,pGVar1);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 1;
    System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).type = "Icon";
      il2cpp_runtime_glue(&pGVar3->fields);
      (pGVar3->fields).id = "toast-icon";
      il2cpp_runtime_glue(&(pGVar3->fields).id);
      if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
        (pGVar3->fields).icon = (toast->fields).Icon;
        il2cpp_runtime_glue(&(pGVar3->fields).icon);
        pSVar4 = System_String__Concat("toastIcon",variant,(MethodInfo *)0x0);
        (pGVar3->fields).style = pSVar4;
        il2cpp_runtime_glue(&(pGVar3->fields).style,pSVar4);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar2->max_length == 0) goto LAB_03ae9f9d;
          pGVar2->m_Items[0] = pGVar3;
          il2cpp_runtime_glue(pGVar2->m_Items);
          pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
          *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 1;
          System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).type = "Text";
            il2cpp_runtime_glue(&pGVar3->fields);
            (pGVar3->fields).id = "toast-title";
            il2cpp_runtime_glue(&(pGVar3->fields).id);
            (pGVar3->fields).text = (toast->fields).Title;
            il2cpp_runtime_glue(&(pGVar3->fields).text);
            (pGVar3->fields).style = "toastTitle";
            il2cpp_runtime_glue(&(pGVar3->fields).style);
            __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)
                        il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
            *(undefined4 *)((long)&__this_00[1].fields.icon + 4) = 0x3f800000;
            System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
              *(undefined4 *)&__this_00[1].fields.icon = 0x3f800000;
              (pGVar3->fields).search = __this_00;
              il2cpp_runtime_glue(&(pGVar3->fields).search,__this_00);
              if (1 < (uint)pGVar2->max_length) {
                pGVar2->m_Items[1] = pGVar3;
                il2cpp_runtime_glue(pGVar2->m_Items + 1);
                pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                         il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
                *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 1;
                System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
                if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                goto LAB_03ae9f98;
                (pGVar3->fields).type = "Button";
                il2cpp_runtime_glue(&pGVar3->fields);
                (pGVar3->fields).id = "toast-close";
                il2cpp_runtime_glue(&(pGVar3->fields).id);
                (pGVar3->fields).icon = "cross";
                il2cpp_runtime_glue(&(pGVar3->fields).icon);
                *(undefined1 *)&(pGVar3->fields).hasIcon = 1;
                (pGVar3->fields).style = "buttonPrimary";
                il2cpp_runtime_glue(&(pGVar3->fields).style);
                if (2 < (uint)pGVar2->max_length) {
                  pGVar2->m_Items[2] = pGVar3;
                  il2cpp_runtime_glue(pGVar2->m_Items + 2,pGVar3);
                  (__this->fields).deferredChildren = pGVar2;
                  il2cpp_runtime_glue(&(__this->fields).deferredChildren,pGVar2);
                  return __this;
                }
              }
LAB_03ae9f9d:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
  }
LAB_03ae9f98:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Button
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button (UnityEngine_GameObject_o* root, System_String_o* id, const MethodInfo* method);
// 0x3aea160

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
          (UnityEngine_GameObject_o *root,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_057013e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013e1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar1 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03aea233;
    pUVar2 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(pUVar2,id,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return (UnityEngine_UI_Button_o *)0x0;
  }
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = (UnityEngine_UI_Button_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,MethodInfo_Button_GetComponent_Button);
    return pUVar3;
  }
LAB_03aea233:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x3aea240

/* WARNING: Removing unreachable block (ram,0x03aea52e) */

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *a;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Transform_o *x;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  long lVar12;
  long lVar13;
  int iVar14;
  UnityEngine_Transform_o *pUVar15;
  undefined1 auVar16 [16];
  
  if (DAT_057013e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_057013e2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar15 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
    pUVar15 = root;
    if ((char)bVar7 == '\0') {
      pSVar8 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        pSVar4 = pSVar8->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
              goto LAB_03aea383;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,0);
LAB_03aea383:
        cVar6 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (cVar6 == '\0') {
          iVar14 = 7;
          x = (UnityEngine_Transform_o *)0x0;
          goto LAB_03aea485;
        }
        pSVar4 = pSVar8->klass;
        uVar3._0_1_ = (pSVar4->_2).rank;
        uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 1);
              goto LAB_03aea408;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03aea408:
        auVar16 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        method_00 = auVar16._8_8_;
        pUVar15 = auVar16._0_8_;
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_Transform->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
             ((pUVar15->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform))
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pUVar15);
          }
        }
        x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(pUVar15,id,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      iVar14 = 6;
LAB_03aea485:
      plVar10 = (long *)il2cpp_runtime_glue(pSVar8,TypeInfo_IDisposable);
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 +
                        0x138);
              goto LAB_03aea4ed;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03aea4ed:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      pUVar15 = (UnityEngine_Transform_o *)0x0;
      if (iVar14 == 6) {
        pUVar15 = x;
      }
    }
  }
  return pUVar15;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3aea650

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (DAT_057013e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastVariant);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"|");
    DAT_057013e3 = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    il2cpp_glue_02274930(TypeInfo_string,7);
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (toast->fields).UpdateKey;
    }
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
    local_30.klass = TypeInfo_AottgToastVariant;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = (toast->fields).Variant;
    pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar2;
        il2cpp_runtime_glue(values->m_Items,pSVar2);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = "|";
          il2cpp_runtime_glue(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = (toast->fields).Icon;
            il2cpp_runtime_glue(values->m_Items + 2);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = "|";
              il2cpp_runtime_glue(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = (toast->fields).Title;
                il2cpp_runtime_glue(values->m_Items + 4);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = "|";
                  il2cpp_runtime_glue(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = (toast->fields).Content;
                    il2cpp_runtime_glue(values->m_Items + 6);
                    pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                    return pSVar2;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row (float gap, const MethodInfo* method);
// 0x3ae9fe0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (DAT_057013e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    DAT_057013e4 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
  (__this->fields).shrink = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Row";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).alignItems = "Center";
    il2cpp_runtime_glue(&(__this->fields).alignItems);
    (__this->fields).gap = gap;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Column
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column (float gap, const MethodInfo* method);
// 0x3aea0a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (DAT_057013e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_057013e5 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
  (__this->fields).shrink = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Column";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).alignItems = "Stretch";
    il2cpp_runtime_glue(&(__this->fields).alignItems);
    (__this->fields).gap = gap;
    (__this->fields).grow = 1.0;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyStack
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x3aea810

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  undefined8 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  DG_Tweening_Tween_o *t;
  Il2CppClass *pIVar4;
  UnityEngine_Vector2_o value;
  bool_conflict bVar5;
  DG_Tweening_Sequence_o *pDVar6;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar8;
  int iVar9;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o scale;
  float local_7c;
  
  if (DAT_057013e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_057013e6 = '\x01';
  }
  pUVar3 = (__this->fields)._stack;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = (__this->fields)._stack;
    fVar12 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,pMVar8);
    if ((char)(__this->fields)._expanded == '\0') {
      (__this->fields)._expandedStackHeight = 0.0;
      fVar15 = fVar12;
    }
    else {
      fVar15 = (__this->fields)._expandedStackHeight;
      if (fVar15 <= fVar12) {
        fVar15 = fVar12;
      }
      (__this->fields)._expandedStackHeight = fVar15;
    }
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03aead7c;
    value.fields.y = fVar15;
    value.fields.x = 560.0;
    UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
  }
  ppDVar1 = &(__this->fields)._stackTween;
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
  pDVar6 = (DG_Tweening_Sequence_o *)0x0;
  il2cpp_runtime_glue(ppDVar1,0);
  if ((char)animate == '\0') {
LAB_03aea9c5:
    pSVar10 = (__this->fields)._items;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pDVar6 = (DG_Tweening_Sequence_o *)0x0;
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto LAB_03aea9c5;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
      cVar11 = **(char **)(TypeInfo_GisketchMotion + 0xb8);
    }
    else {
      cVar11 = **(char **)(TypeInfo_GisketchMotion + 0xb8);
    }
    if (cVar11 != '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)pDVar6,1,MethodInfo_Sequence_SetUpdate_Sequence);
      goto LAB_03aea9c5;
    }
    pDVar6 = (DG_Tweening_Sequence_o *)0x0;
    pSVar10 = (__this->fields)._items;
  }
  if (pSVar10 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    iVar9 = 0;
    local_7c = 0.0;
    if (0 < (pSVar10->fields)._size) {
      do {
        pIVar7 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar10,iVar9,MethodInfo_GisketchToastManager_ToastItem_get_Item)
        ;
        if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03aead7c;
        pIVar4 = pIVar7[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          cVar11 = '\x01';
          fVar12 = local_7c;
          pMVar8 = extraout_RDX;
          if ((char)(__this->fields)._expanded == '\0') {
            if (iVar9 == 0) {
              cVar11 = '\0';
              fVar12 = 0.0;
            }
            else {
              if (DAT_057013e9 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
                il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
                DAT_057013e9 = '\x01';
                pMVar8 = extraout_RDX_03;
              }
              pSVar10 = (__this->fields)._items;
              if (pSVar10 ==
                  (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
              goto LAB_03aead7c;
              if ((pSVar10->fields)._size < 1) {
                fVar12 = 0.0;
              }
              else {
                pIVar7 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar10,0,
                                    MethodInfo_GisketchToastManager_ToastItem_get_Item);
                if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03aead7c;
                fVar12 = *(float *)&pIVar7[2].monitor + -96.0;
                pMVar8 = extraout_RDX_04;
              }
              fVar15 = 0.0;
              if (0.0 <= fVar12) {
                fVar15 = fVar12;
              }
              cVar11 = (char)(__this->fields)._expanded;
              fVar12 = (float)iVar9 * 14.0 + fVar15;
            }
          }
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
            pMVar8 = extraout_RDX_00;
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          fVar16 = (float)uVar2;
          fVar17 = (float)((ulong)uVar2 >> 0x20);
          fVar15 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          if (cVar11 == '\0') {
            fVar13 = (float)iVar9 * -0.06 + 1.0;
            fVar14 = 0.82;
            if (0.82 <= fVar13) {
              fVar14 = fVar13;
            }
            fVar15 = fVar15 * fVar14;
            fVar16 = fVar16 * fVar14;
            fVar17 = fVar17 * fVar14;
          }
          value_00.fields.y = fVar17;
          value_00.fields.x = fVar16;
          if (DAT_057013e9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
            il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            DAT_057013e9 = '\x01';
            pMVar8 = extraout_RDX_01;
          }
          pSVar10 = (__this->fields)._items;
          if (pSVar10 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
          goto LAB_03aead7c;
          fVar14 = 96.0;
          if (iVar9 < (pSVar10->fields)._size) {
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar10,iVar9,
                                MethodInfo_GisketchToastManager_ToastItem_get_Item);
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03aead7c;
            fVar14 = *(float *)&pIVar7[2].monitor;
            pMVar8 = extraout_RDX_02;
          }
          local_7c = local_7c + fVar14 + 8.0;
          if (pDVar6 != (DG_Tweening_Sequence_o *)0x0) {
            scale.fields.y = fVar17;
            scale.fields.x = fVar16;
            scale.fields.z = fVar15;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
                      (pDVar6,(UnityEngine_RectTransform_o *)pIVar4,
                       (UnityEngine_Vector2_o)((ulong)(uint)fVar12 << 0x20),scale,pMVar8);
            goto LAB_03aeaa51;
          }
          if (pIVar4 == (Il2CppClass *)0x0) goto LAB_03aead7c;
          UnityEngine_RectTransform__set_anchoredPosition
                    ((UnityEngine_RectTransform_o *)pIVar4,
                     (UnityEngine_Vector2_o)((ulong)(uint)fVar12 << 0x20),(MethodInfo *)0x0);
          value_00.fields.z = fVar15;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)pIVar4,value_00,(MethodInfo *)0x0);
          pSVar10 = (__this->fields)._items;
        }
        else {
LAB_03aeaa51:
          pSVar10 = (__this->fields)._items;
        }
        if (pSVar10 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto LAB_03aead7c;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (pSVar10->fields)._size);
    }
    (__this->fields)._stackTween = (DG_Tweening_Tween_o *)pDVar6;
    il2cpp_runtime_glue(ppDVar1,pDVar6);
    pSVar10 = (__this->fields)._items;
    if (pSVar10 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      iVar9 = (pSVar10->fields)._size + -1;
      if (iVar9 < 0) {
        return;
      }
      while (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar10,iVar9,
                                 MethodInfo_GisketchToastManager_ToastItem_get_Item), pIVar7 != (Il2CppObject *)0x0) {
        pIVar4 = pIVar7[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar10 = (__this->fields)._items;
          if (((pSVar10 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
              || (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar10,iVar9,
                                      MethodInfo_GisketchToastManager_ToastItem_get_Item), pIVar7 == (Il2CppObject *)0x0)) ||
             (pIVar7[2].klass == (Il2CppClass *)0x0)) break;
          UnityEngine_Transform__SetAsLastSibling
                    ((UnityEngine_Transform_o *)pIVar7[2].klass,(MethodInfo *)0x0);
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) {
          return;
        }
        pSVar10 = (__this->fields)._items;
        if (pSVar10 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        break;
      }
    }
  }
LAB_03aead7c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AppliedStackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aead90

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,method);
  if ((char)(__this->fields)._expanded != '\0') {
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
// 0x3aeb060

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o position,
               UnityEngine_Vector3_o scale,MethodInfo *method)

{
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(rect,position,(MethodInfo *)0x0);
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,scale,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AnimateSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot (DG_Tweening_Sequence_o* sequence, UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x3aeaee0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
               (DG_Tweening_Sequence_o *sequence,UnityEngine_RectTransform_o *rect,
               UnityEngine_Vector2_o position,UnityEngine_Vector3_o scale,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  Il2CppObject *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t_00;
  
  if (DAT_057013e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__AnimateSlot_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass10_0);
    DAT_057013e7 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass10_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)rect;
    il2cpp_runtime_glue(__this + 1);
    __this[2].klass = (Il2CppClass *)position.fields;
    if (__this[1].klass != (Il2CppClass *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_anchoredPosition
                        ((UnityEngine_RectTransform_o *)__this[1].klass,(MethodInfo *)0x0);
      __this[1].monitor = (void *)UVar1.fields;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
      DG_Tweening_TweenSettingsExtensions__Join(sequence,pDVar2,(MethodInfo *)0x0);
      t_00 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)__this[1].klass,scale,0.12,(MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)t_00,1,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
      DG_Tweening_TweenSettingsExtensions__Join(sequence,pDVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$StackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aeb0a0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar4;
  float fVar5;
  float fVar6;
  float local_24;
  
  if (DAT_057013e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013e8 = '\x01';
  }
  pSVar4 = (__this->fields)._items;
  if (pSVar4 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
LAB_03aeb311:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = (pSVar4->fields)._size;
  if (iVar2 == 0) {
    local_24 = 96.0;
  }
  else if ((char)(__this->fields)._expanded == '\0') {
    if (DAT_057013e9 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
      DAT_057013e9 = '\x01';
      pSVar4 = (__this->fields)._items;
      if (pSVar4 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
      goto LAB_03aeb311;
    }
    if ((pSVar4->fields)._size < 1) {
      local_24 = 96.0;
      iVar2 = (pSVar4->fields)._size;
    }
    else {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if ((pIVar3 == (Il2CppObject *)0x0) ||
         (pSVar4 = (__this->fields)._items,
         pSVar4 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0))
      goto LAB_03aeb311;
      local_24 = *(float *)&pIVar3[2].monitor;
      iVar2 = (pSVar4->fields)._size;
    }
    fVar5 = 96.0;
    if (0 < iVar2 + -1) {
      if (DAT_057013e9 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
        il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
        DAT_057013e9 = '\x01';
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto LAB_03aeb311;
      }
      fVar5 = 0.0;
      if (0 < (pSVar4->fields)._size) {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03aeb311;
        fVar5 = *(float *)&pIVar3[2].monitor + -96.0;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = (float)(iVar2 + -1) * 14.0 + fVar6 + 96.0;
    }
    if (local_24 <= fVar5) {
      local_24 = fVar5;
    }
    local_24 = local_24 + 16.0;
  }
  else {
    local_24 = 16.0;
    if (0 < iVar2) {
      local_24 = 16.0;
      iVar2 = 0;
      do {
        if (DAT_057013e9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
          il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
          DAT_057013e9 = '\x01';
        }
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto LAB_03aeb311;
        fVar5 = 96.0;
        if (iVar2 < (pSVar4->fields)._size) {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,iVar2,MethodInfo_GisketchToastManager_ToastItem_get_Item
                             );
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03aeb311;
          fVar5 = *(float *)&pIVar3[2].monitor;
        }
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto LAB_03aeb311;
        iVar1 = iVar2 + 1;
        fVar6 = 0.0;
        if (iVar2 != 0) {
          fVar6 = 8.0;
        }
        local_24 = local_24 + fVar6 + fVar5;
        iVar2 = iVar1;
      } while (iVar1 < (pSVar4->fields)._size);
    }
  }
  return local_24;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HeightAt
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x3aeae60

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,
                MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  
  if (DAT_057013e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013e9 = '\x01';
  }
  fVar2 = 96.0;
  if (-1 < index) {
    __this_00 = (__this->fields)._items;
    if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
LAB_03aeaece:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (index < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchToastManager_ToastItem_get_Item)
      ;
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03aeaece;
      fVar2 = *(float *)&pIVar1[2].monitor;
    }
  }
  return fVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight (bool showDismissAll, const MethodInfo* method);
// 0x3aeb330

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight
                (bool_conflict showDismissAll,MethodInfo *method)

{
  if (showDismissAll == 0) {
    return 96.0;
  }
  return 168.0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RefreshDismissAllButtons
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aeb350

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float height;
  int iVar1;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Button_o *x;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *method_00;
  uint index;
  MethodInfo *method_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar5;
  ulong uVar6;
  
  if (DAT_057013ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"toast-close-all");
    DAT_057013ea = '\x01';
  }
  pSVar5 = (__this->fields)._items;
  if (pSVar5 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    index = 0;
    do {
      iVar1 = (pSVar5->fields)._size;
      if (iVar1 <= (int)index) {
        return;
      }
      uVar6 = 0;
      if ((index == 0) && (uVar6 = 1, iVar1 < 2)) {
        pSVar2 = (__this->fields)._pending;
        if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
        uVar6 = (ulong)(0 < (pSVar2->fields)._size);
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].monitor == (void *)0x0)) break;
      x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                    (*(UnityEngine_GameObject_o **)((long)pIVar4[1].monitor + 0x18),"toast-close-all",
                     method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (x == (UnityEngine_UI_Button_o *)0x0) break;
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive(__this_00,(bool_conflict)uVar6,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields)._items;
      if (pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) break;
      height = *(float *)(&DAT_00cd0f30 + uVar6 * 4);
      *(float *)&pIVar4[2].monitor = height;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
      method_01 = (MethodInfo *)(ulong)index;
      item = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight(item,height,method_01);
      index = index + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CollapsedY
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x3aeadc0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,
                MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  
  if (index < 1) {
    return 0.0;
  }
  if (DAT_057013e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013e9 = '\x01';
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    fVar2 = 0.0;
    if (0 < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03aeae58;
      fVar2 = *(float *)&pIVar1[2].monitor + -96.0;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    return (float)index * 14.0 + fVar3;
  }
LAB_03aeae58:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlotHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* item, float height, const MethodInfo* method);
// 0x3aeb510

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item,float height,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (DAT_057013eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013eb = '\x01';
  }
  if (item != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
    pUVar4 = (item->fields).Slot;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pUVar4 = (item->fields).Slot;
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03aeb65e;
      UnityEngine_RectTransform__set_offsetMax
                (pUVar4,(UnityEngine_Vector2_o)((ulong)(uint)height << 0x20),(MethodInfo *)0x0);
    }
    pGVar1 = (item->fields).View;
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      x = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar4 = (UnityEngine_RectTransform_o *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pGVar1 = (item->fields).View;
        if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (__this = (pGVar1->fields)._Root_k__BackingField,
           __this == (UnityEngine_GameObject_o *)0x0)) goto LAB_03aeb65e;
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RectTransform_GetComponent_RectTransform);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
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
LAB_03aeb65e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroySlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot (UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x3aeb670

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
               (UnityEngine_RectTransform_o *slot,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *obj;
  
  if (DAT_057013ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013ec = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)slot,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (slot == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)slot,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 == '\0') {
    UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FinishClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x3aeb740

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               UnityEngine_RectTransform_o *slot,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)slot;
  if (DAT_057013ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013ed = '\x01';
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,method_00);
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdateVisible
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x3aeb900

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *method_00;
  int index;
  MethodInfo *pMVar4;
  MethodInfo *method_01;
  
  if (DAT_057013ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013ee = '\x01';
    pSVar1 = (__this->fields)._items;
  }
  else {
    pSVar1 = (__this->fields)._items;
  }
  if (DAT_057013ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013ff = '\x01';
  }
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    pMVar4 = (MethodInfo *)0x0;
    if (0 < (pSVar1->fields)._size) {
      do {
        index = (int)pMVar4;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03aeba6d;
        bVar2 = System_String__op_Equality((System_String_o *)pIVar3[1].klass,key,(MethodInfo *)0x0)
        ;
        if ((char)bVar2 != '\0') {
          pSVar1 = (__this->fields)._items;
          if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                MethodInfo_GisketchToastManager_ToastItem_get_Item);
            pSVar1 = (__this->fields)._items;
            if ((pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
               && (method_01 = pMVar4,
                  System_Collections_Generic_List<object>__RemoveAt
                            ((System_Collections_Generic_List_object__o *)pSVar1,index,MethodInfo_Void_RemoveAt)
                  , pIVar3 != (Il2CppObject *)0x0)) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pIVar3[2].klass,method_01);
              pSVar1 = (__this->fields)._items;
              item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
                               (__this,toast,method_00);
              if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0
                 ) {
                System_Collections_Generic_List<object>__Insert
                          ((System_Collections_Generic_List_object__o *)pSVar1,index,
                           (Il2CppObject *)item,MethodInfo_Void_Insert);
                return (bool_conflict)CONCAT71((int7)((ulong)pMVar4 >> 8),1);
              }
            }
          }
          goto LAB_03aeba6d;
        }
        pMVar4 = (MethodInfo *)(ulong)(index + 1U);
      } while ((int)(index + 1U) < (pSVar1->fields)._size);
    }
    return 0;
  }
LAB_03aeba6d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdatePending
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x3aebe20

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,
          MethodInfo *method)

{
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast_00;
  System_String_o *a;
  int index;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  
  if (DAT_057013ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_057013ef = '\x01';
    pSVar1 = (__this->fields)._pending;
  }
  else {
    pSVar1 = (__this->fields)._pending;
  }
  if (DAT_057013f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgToastDefinition_get_Item);
    DAT_057013f0 = '\x01';
  }
  if (pSVar1 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
LAB_03aebf1e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar3 = (MethodInfo *)0x0;
  if (0 < (pSVar1->fields)._size) {
    do {
      index = (int)pMVar3;
      method_00 = pMVar3;
      toast_00 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,MethodInfo_AottgToastDefinition_get_Item);
      a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast_00,method_00);
      bVar2 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pSVar1 = (__this->fields)._pending;
        if (pSVar1 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
          System_Collections_Generic_List<object>__set_Item
                    ((System_Collections_Generic_List_object__o *)pSVar1,index,(Il2CppObject *)toast
                     ,MethodInfo_Void_set_Item);
          return (bool_conflict)CONCAT71((int7)((ulong)pMVar3 >> 8),1);
        }
        goto LAB_03aebf1e;
      }
      pMVar3 = (MethodInfo *)(ulong)(index + 1U);
    } while ((int)(index + 1U) < (pSVar1->fields)._size);
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HasUpdateKey
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3aea7f0

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  uint uVar1;
  
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x3aebf30

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf
                  (System_Collections_Generic_List_AottgToastDefinition__o *list,
                  System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  uint index;
  MethodInfo *method_00;
  
  if (DAT_057013f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgToastDefinition_get_Item);
    DAT_057013f0 = '\x01';
  }
  if (list != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    if (0 < (list->fields)._size) {
      index = 0;
      do {
        method_00 = (MethodInfo *)(ulong)index;
        toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_AottgToastDefinition_get_Item);
        a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,method_00);
        bVar1 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return index;
        }
        index = index + 1;
      } while ((int)index < (list->fields)._size);
    }
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x3aebfd0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  System_Collections_Generic_List_AottgToastDefinition__o *__this_01;
  
  if (DAT_057013f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchToastM);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgToastDefiniti);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgToastDefinition);
    il2cpp_init_method_metadata(&TypeInfo_List_ToastItem);
    DAT_057013f1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)
              il2cpp_runtime_glue(TypeInfo_List_ToastItem);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchToastM);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._items,__this_00);
  __this_01 = (System_Collections_Generic_List_AottgToastDefinition__o *)
              il2cpp_runtime_glue(TypeInfo_List_AottgToastDefinition);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgToastDefiniti);
  (__this->fields)._pending = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._pending);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  il2cpp_runtime_glue(&__this->fields,layer);
  (__this->fields)._context = context;
  il2cpp_runtime_glue(&(__this->fields)._context,context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Show
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3aec0d0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *pGVar4;
  long lVar5;
  bool_conflict bVar6;
  System_String_o *key;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar7;
  
  pMVar7 = (MethodInfo *)toast;
  if (DAT_057013f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013f2 = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    return;
  }
  key = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar7);
  bVar6 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pMVar7 = (MethodInfo *)toast;
    bVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible(__this,toast,key,in_RCX);
    if ((char)bVar6 == '\0') {
      bVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending
                        (__this,toast,key,in_RCX);
      if ((char)bVar6 != '\0') {
        return;
      }
      goto LAB_03aec141;
    }
  }
  else {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible(__this,key,method_00);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove((__this->fields)._pending,key,method_01)
    ;
LAB_03aec141:
    lVar5 = MethodInfo_Void_Add;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
    goto LAB_03aec25c;
    if ((pSVar3->fields)._size < 3) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
      pMVar7 = (MethodInfo *)toast;
    }
    else {
      __this_00 = (__this->fields)._pending;
      if (__this_00 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0)
      goto LAB_03aec25c;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (__this_00->fields)._items;
      if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) goto LAB_03aec25c;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pGVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pGVar4->m_Items[(int)uVar2] = toast;
        il2cpp_runtime_glue(pGVar4->m_Items + (int)uVar2);
        pMVar7 = (MethodInfo *)toast;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)toast,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        pMVar7 = (MethodInfo *)toast;
      }
    }
  }
  if (DAT_057013fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013fa = '\x01';
  }
  pSVar3 = (__this->fields)._items;
  if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar3->fields)._size == 0) {
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,pMVar7);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar7);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,1,method_02);
    return;
  }
LAB_03aec25c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x3aec5a0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,animate);
  if (DAT_057013f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057013f3 = '\x01';
  }
  pSVar2 = (__this->fields)._pending;
  if (pSVar2 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AddVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, int32_t index, const MethodInfo* method);
// 0x3aec4d0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,int32_t index,MethodInfo *method
               )

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057013f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    DAT_057013f4 = '\x01';
  }
  if (DAT_057013fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013fc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar1 != '\0') {
    pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,method_01);
    (__this->fields)._host = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._host,pUVar2);
    method_00 = extraout_RDX_00;
  }
  __this_00 = (__this->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,method_00);
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List<object>__Insert
              ((System_Collections_Generic_List_object__o *)__this_00,index,(Il2CppObject *)item,
               MethodInfo_Void_Insert);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$BuildToast
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3aebb20

Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *pUVar4;
  Il2CppClass *pIVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this_00;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  void **ppvVar8;
  
  if (DAT_057013f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastBehaviour_AddComponent_GisketchToas);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_ToastItem);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildToast_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass44_0);
    il2cpp_init_method_metadata(&"toast");
    DAT_057013f5 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass44_0);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar1 + 1,__this);
    ppvVar8 = &pIVar1[1].monitor;
    pIVar1[1].monitor = toast;
    il2cpp_runtime_glue(ppvVar8);
    pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
                       ((__this->fields)._stack,96.0,(MethodInfo *)toast);
    overlay = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchOverlayDefinition)
    ;
    *(undefined2 *)&(overlay->fields).modal = 0x101;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    pMVar7 = "toast";
    if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      (overlay->fields).id = (System_String_o *)"toast";
      il2cpp_runtime_glue(&overlay->fields);
      *(undefined1 *)&(overlay->fields).modal = 0;
      pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode(*ppvVar8,pMVar7);
      (overlay->fields).root = pGVar3;
      il2cpp_runtime_glue(&(overlay->fields).root);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        context = (__this->fields)._context;
        if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar7 = (MethodInfo *)0x0;
        view = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                         (overlay,parent,context,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
                    (__this,(view->fields)._Root_k__BackingField,96.0,method_00);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
                    ((view->fields)._Root_k__BackingField,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
                    (__this,(view->fields)._Root_k__BackingField,*ppvVar8,pMVar7);
          pUVar2 = (view->fields)._Root_k__BackingField;
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pIVar1 = UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_GisketchToastBehaviour_AddComponent_GisketchToas);
            pIVar5 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action);
            System_Action___ctor();
            if (pIVar1 != (Il2CppObject *)0x0) {
              pIVar1[2].klass = pIVar5;
              il2cpp_runtime_glue(pIVar1 + 2);
              *(undefined4 *)&pIVar1[3].klass = 0x40a00000;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pMVar7 = (MethodInfo *)0x0;
              Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
              pSVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(*ppvVar8,pMVar7);
              __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
                          il2cpp_runtime_glue(TypeInfo_ToastItem);
              System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
              (__this_00->fields).Key = pSVar6;
              il2cpp_runtime_glue(&__this_00->fields,pSVar6);
              (__this_00->fields).View = view;
              il2cpp_runtime_glue(&(__this_00->fields).View,view);
              (__this_00->fields).Slot = pUVar4;
              il2cpp_runtime_glue(&(__this_00->fields).Slot,pUVar4);
              (__this_00->fields).Height = 96.0;
              return __this_00;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Wire
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3aeca00

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               UnityEngine_GameObject_o *root,Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  
  if (DAT_057013f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_CloseAll);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__Wire_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass45_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"toast-close-all");
    il2cpp_init_method_metadata(&"toast-close");
    DAT_057013f6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass45_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_03aecbe9;
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_00 + 1,__this);
  __this_00[1].monitor = toast;
  il2cpp_runtime_glue(&__this_00[1].monitor,toast);
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close",method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_RDX;
  if ((char)bVar2 != '\0') {
    if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto LAB_03aecbe9;
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_CanvasGroupCache;
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03aecbe9;
    UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
    method_01 = extraout_RDX_00;
  }
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close-all",method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_CanvasGroupCache;
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03aecbe9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3aecc70

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *slot;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  System_String_o *b;
  Il2CppObject *pIVar4;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  uint index;
  MethodInfo *pMVar5;
  void **ppvVar6;
  
  if (DAT_057013f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_init_method_metadata(&MethodInfo_Void__Close_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass46_0);
    DAT_057013f7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass46_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    pMVar5 = (MethodInfo *)__this;
    il2cpp_runtime_glue(__this_00 + 1);
    pSVar2 = (__this->fields)._items;
    b = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar5);
    if (DAT_057013ff == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
      DAT_057013ff = '\x01';
    }
    if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        index = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,MethodInfo_GisketchToastManager_ToastItem_get_Item
                             );
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03aecf67;
          bVar3 = System_String__op_Equality((System_String_o *)pIVar4[1].klass,b,(MethodInfo *)0x0)
          ;
          if ((char)bVar3 != '\0') {
            pSVar2 = (__this->fields)._items;
            if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            goto LAB_03aecf67;
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                MethodInfo_GisketchToastManager_ToastItem_get_Item);
            ppvVar6 = &__this_00[1].monitor;
            __this_00[1].monitor = pIVar4;
            il2cpp_runtime_glue(ppvVar6,pIVar4);
            pSVar2 = (__this->fields)._items;
            if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            goto LAB_03aecf67;
            pMVar5 = (MethodInfo *)(ulong)index;
            System_Collections_Generic_List<object>__RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar2,index,MethodInfo_Void_RemoveAt);
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,pMVar5);
            if (DAT_057013fa == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
              DAT_057013fa = '\x01';
            }
            pSVar2 = (__this->fields)._items;
            if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            goto LAB_03aecf67;
            if ((pSVar2->fields)._size != 0) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                        (__this,pMVar5);
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar5);
              pMVar5 = (MethodInfo *)0x1;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,1,method_00);
            }
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
              cVar1 = **(char **)(TypeInfo_GisketchMotion + 0xb8);
            }
            else {
              cVar1 = **(char **)(TypeInfo_GisketchMotion + 0xb8);
            }
            if (cVar1 != '\0') {
              if (*ppvVar6 == (void *)0x0) goto LAB_03aecf67;
              view = *(Gisketch_Aottg2UI_Building_GisketchView_o **)((long)*ppvVar6 + 0x18);
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pMVar5 = (MethodInfo *)0x0;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
              if (t != (DG_Tweening_Tween_o *)0x0) {
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
                DG_Tweening_TweenCallback___ctor();
                DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                          ((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
                return;
              }
            }
            if (*ppvVar6 != (void *)0x0) {
              slot = *(UnityEngine_RectTransform_o **)((long)*ppvVar6 + 0x20);
              if (DAT_057013ed == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
                DAT_057013ed = '\x01';
              }
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,pMVar5);
              pSVar2 = (__this->fields)._items;
              if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0
                 ) {
                if ((pSVar2->fields)._size != 0) {
                  return;
                }
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,pMVar5);
                return;
              }
            }
            goto LAB_03aecf67;
          }
          index = index + 1;
        } while ((int)index < (pSVar2->fields)._size);
      }
      return;
    }
  }
LAB_03aecf67:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CloseAll
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aed050

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,method);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,method);
  if (DAT_057013fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013fa = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,method);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,method);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,0,method_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetExpanded
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool expanded, const MethodInfo* method);
// 0x3aed0b0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict expanded,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar2;
  Il2CppType *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_057013f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToas);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Overlays);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013f8 = '\x01';
  }
  *(char *)&(__this->fields)._expanded = (char)expanded;
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Overlays);
  pSVar2 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar3 = (Il2CppType *)auStack_48._8_8_;
  pIVar4 = pIStack_38;
  while( true ) {
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar2;
    __this_02.fields._current = pIVar4;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar1 == '\0') {
      __this_03.fields._8_8_ = pIVar3;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar2;
      __this_03.fields._current = pIVar4;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,1,method_00);
      return;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pIVar4[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = *(UnityEngine_GameObject_o **)((long)pIVar4[1].monitor + 0x18);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToas)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(char *)((long)&x[2].klass + 4) = (char)expanded;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$PromotePending
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aecf80

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  MethodInfo *in_RCX;
  
  if (DAT_057013f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgToastDefinition_get_Item);
    DAT_057013f9 = '\x01';
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
    toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar2,0,MethodInfo_AottgToastDefinition_get_Item);
    pSVar2 = (__this->fields)._pending;
    if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    System_Collections_Generic_List<object>__RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar2,0,MethodInfo_Void_RemoveAt);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
    pSVar1 = (__this->fields)._items;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyCurrentLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x3aec270

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,animate);
  if (DAT_057013fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013fa = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,method_01);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,method_01);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,animate & 0xff,method_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SettleVisibleLayouts
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aed300

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_Enumerator_T__c *pSVar2;
  Il2CppType *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_057013fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Overlays);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013fb = '\x01';
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Overlays);
    pSVar2 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar3 = (Il2CppType *)local_48._8_8_;
    while( true ) {
      pIVar4 = local_38;
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      if (pIVar4[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x = *(UnityEngine_Object_o **)((long)pIVar4[1].monitor + 0x18);
      pIVar5 = pIVar4;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_38 = pIVar5;
      if ((char)bVar1 != '\0') {
        if (pIVar4[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        root = *(UnityEngine_GameObject_o **)((long)pIVar4[1].monitor + 0x18);
        if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
        local_38 = pIVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$EnsureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aec600

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  
  if (DAT_057013fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013fc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,method_00);
    (__this->fields)._host = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._host,pUVar2);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RemoveVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, System_String_o* key, const MethodInfo* method);
// 0x3aec2e0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,System_String_o *key,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  uint index;
  MethodInfo *method_00;
  
  if (DAT_057013fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013fd = '\x01';
    pSVar1 = (__this->fields)._items;
  }
  else {
    pSVar1 = (__this->fields)._items;
  }
  if (DAT_057013ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013ff = '\x01';
  }
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if (0 < (pSVar1->fields)._size) {
      index = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03aec40f;
        bVar2 = System_String__op_Equality((System_String_o *)pIVar3[1].klass,key,(MethodInfo *)0x0)
        ;
        if ((char)bVar2 != '\0') {
          pSVar1 = (__this->fields)._items;
          if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                MethodInfo_GisketchToastManager_ToastItem_get_Item);
            pSVar1 = (__this->fields)._items;
            if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            {
              method_00 = (MethodInfo *)(ulong)index;
              System_Collections_Generic_List<object>__RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar1,index,MethodInfo_Void_RemoveAt);
              if (pIVar3 != (Il2CppObject *)0x0) {
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                          ((UnityEngine_RectTransform_o *)pIVar3[2].klass,method_00);
                return;
              }
            }
          }
          goto LAB_03aec40f;
        }
        index = index + 1;
      } while ((int)index < (pSVar1->fields)._size);
    }
    return;
  }
LAB_03aec40f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Remove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x3aec420

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove
               (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
               MethodInfo *method)

{
  uint index;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  MethodInfo *method_00;
  
  if (DAT_057013fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgToastDefinition_get_Item);
    DAT_057013fe = '\x01';
  }
  if (list == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = (list->fields)._size;
  while (index = index - 1, -1 < (int)index) {
    method_00 = (MethodInfo *)(ulong)index;
    toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_AottgToastDefinition_get_Item);
    a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,method_00);
    bVar1 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_Void_RemoveAt);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_GisketchToastManager_ToastItem__o* list, System_String_o* key, const MethodInfo* method);
// 0x3aeba80

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf
                  (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *list,
                  System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  int index;
  int32_t iVar3;
  
  if (DAT_057013ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    DAT_057013ff = '\x01';
  }
  if (list == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
LAB_03aebb0e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar3 = -1;
  if (0 < (list->fields)._size) {
    index = 0;
    do {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03aebb0e;
      bVar1 = System_String__op_Equality((System_String_o *)pIVar2[1].klass,key,(MethodInfo *)0x0);
      iVar3 = index;
    } while (((char)bVar1 == '\0') && (index = index + 1, iVar3 = -1, index < (list->fields)._size))
    ;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroyHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aeb7a0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o **ppUVar5;
  
  if (DAT_05701400 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701400 = '\x01';
  }
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (__this->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._stackTween);
  pSVar2 = (__this->fields)._items;
  if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  (__this->fields)._expandedStackHeight = 0.0;
  *(undefined1 *)&(__this->fields)._expanded = 0;
  (__this->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._stack);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  ppUVar5 = &(__this->fields)._host;
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)*ppUVar5;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar4 == '\0') {
    UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy(pUVar3,(MethodInfo *)0x0);
  }
  *ppUVar5 = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_glue(ppUVar5,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Host
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aed530

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *pSVar2;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  undefined8 uVar9;
  
  if (DAT_05701401 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool);
    il2cpp_init_method_metadata(&MethodInfo_GisketchToastStackHover_AddComponent_GisketchToa);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_SetExpanded);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Toast Host");
    il2cpp_init_method_metadata(&"AoTTG Toast Stack");
    DAT_05701401 = '\x01';
  }
  pSVar2 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_array *)0x0) {
    if (pSVar3 != (System_Type_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar4 == 0) goto LAB_03aed9db;
    }
    if ((int)pSVar2->max_length == 0) {
LAB_03aed9d6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2->m_Items[0] = pSVar3;
    il2cpp_runtime_glue(pSVar2->m_Items,pSVar3);
    __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"AoTTG Toast Host",pSVar2,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar5,(__this->fields)._layer,0,(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar6,(UnityEngine_Vector2_o)
                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
                    );
          if (DAT_0570136e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_0570136e = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar6,(UnityEngine_Vector2_o)
                            *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                     (MethodInfo *)0x0);
          if (DAT_056fe093 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_056fe093 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar6,(UnityEngine_Vector2_o)
                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
                    );
          if (DAT_056fe093 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_056fe093 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (pUVar6,(UnityEngine_Vector2_o)
                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
                    );
          pSVar2 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
          pSVar3 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar2 != (System_Type_array *)0x0) {
            if (pSVar3 != (System_Type_o *)0x0) {
              lVar4 = il2cpp_runtime_glue(pSVar3,(((pSVar2->obj).klass)->_1).element_class);
              if (lVar4 == 0) {
LAB_03aed9db:
                uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar9,0);
              }
            }
            if ((int)pSVar2->max_length == 0) goto LAB_03aed9d6;
            pSVar2->m_Items[0] = pSVar3;
            il2cpp_runtime_glue(pSVar2->m_Items,pSVar3);
            __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor(__this_01,"AoTTG Toast Stack",pSVar2,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent(pUVar5,parent,0,(MethodInfo *)0x0);
                pUVar6 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
                ppUVar1 = &(__this->fields)._stack;
                (__this->fields)._stack = pUVar6;
                il2cpp_runtime_glue(ppUVar1);
                pUVar6 = (__this->fields)._stack;
                if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar6,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                  if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (*ppUVar1,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                    if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (*ppUVar1,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                      if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (*ppUVar1,(UnityEngine_Vector2_o)0x4200000000000000,
                                   (MethodInfo *)0x0);
                        if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (*ppUVar1,(UnityEngine_Vector2_o)0x42c00000440c0000,
                                     (MethodInfo *)0x0);
                          pIVar7 = UnityEngine_GameObject__AddComponent<object>
                                             (__this_01,MethodInfo_Image_AddComponent_Image);
                          if (pIVar7 != (Il2CppObject *)0x0) {
                            (*pIVar7->klass->vtable[0x17].methodPtr)
                                      (0,0,pIVar7,pIVar7->klass->vtable[0x17].method);
                            (*pIVar7->klass->vtable[0x19].methodPtr)
                                      (pIVar7,1,pIVar7->klass->vtable[0x19].method);
                            pIVar7 = UnityEngine_GameObject__AddComponent<object>
                                               (__this_01,MethodInfo_GisketchToastStackHover_AddComponent_GisketchToa);
                            pIVar8 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action_bool);
                            System_Action<bool>___ctor();
                            if (pIVar7 != (Il2CppObject *)0x0) {
                              pIVar7[2].klass = pIVar8;
                              il2cpp_runtime_glue(pIVar7 + 2,pIVar8);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Slot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot (UnityEngine_RectTransform_o* parent, float height, const MethodInfo* method);
// 0x3aec690

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
          (UnityEngine_RectTransform_o *parent,float height,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 uVar3;
  
  if (DAT_05701402 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Toast Slot");
    DAT_05701402 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,"AoTTG Toast Slot",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent
                  (__this_00,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
          if (DAT_056fe093 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_056fe093 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,
                     (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)((ulong)(uint)height << 0x20),
                     (MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ConfigureToastRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, float height, const MethodInfo* method);
// 0x3aec8a0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               UnityEngine_GameObject_o *root,float height,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  
  if (DAT_05701403 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701403 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03aec9ef;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    return;
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    fVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth(__this,method_00);
    value.fields.y = height;
    value.fields.x = fVar2;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_03aec9ef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastRootWidth
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3aed9f0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  float fVar5;
  
  if (DAT_05701404 == '\0') {
    il2cpp_init_method_metadata(&"point");
    il2cpp_init_method_metadata(&"toast");
    DAT_05701404 = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Theme,
     __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                       (__this_00,"toast",(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar2 = (pGVar4->fields).width;
      fVar5 = 520.0;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        bVar3 = System_String__Equals((pGVar2->fields).unit,"point",5,(MethodInfo *)0x0);
        fVar5 = 520.0;
        if ((char)bVar3 != '\0') {
          pGVar2 = (pGVar4->fields).width;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03aeda8e;
          fVar5 = (pGVar2->fields).value;
        }
      }
      return fVar5;
    }
  }
LAB_03aeda8e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


