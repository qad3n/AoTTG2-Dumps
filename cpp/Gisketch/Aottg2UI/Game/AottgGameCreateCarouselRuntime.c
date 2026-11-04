// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__MoveNext (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x1823cd8c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cda09: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  bool bVar3;
  uint32_t length;
  int32_t iVar4;
  UnityEngine_RectTransform_array *pUVar5;
  UnityEngine_CanvasGroup_array *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_CanvasGroup_o *x;
  UnityEngine_GameObject_o *pUVar9;
  System_Object_array *pSVar10;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o *pGVar11;
  uint index;
  uint uVar12;
  
  if (Il2CppMethodInitialized_184347d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CanvasGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Button_40ab7b8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselFocus);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform_array);
    Il2CppMethodInitialized_184347d5e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)0x0) &&
      (pUVar2 = (__this_00->fields)._scroll, pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0)) &&
     (pUVar8 = (pUVar2->fields).m_Content, pUVar8 != (UnityEngine_RectTransform_o *)0x0)) {
    length = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_RectTransform_array *)SZArrayNew(TypeInfo_UnityEngine_RectTransform_array,length);
    (__this_00->fields)._items = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._items,pUVar5);
    pUVar5 = (__this_00->fields)._items;
    if (pUVar5 != (UnityEngine_RectTransform_array *)0x0) {
      pUVar6 = (UnityEngine_CanvasGroup_array *)
               SZArrayNew(TypeInfo_UnityEngine_CanvasGroup_array,(uint32_t)pUVar5->max_length);
      (__this_00->fields)._itemFades = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._itemFades,pUVar6);
      uVar12 = 0;
      index = 0;
      while( true ) {
        pUVar5 = (__this_00->fields)._items;
        if ((pUVar5 == (UnityEngine_RectTransform_array *)0x0) ||
           (pUVar2 = (__this_00->fields)._scroll, pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0))
        goto label_1823cdcac;
        pUVar8 = (pUVar2->fields).m_Content;
        if ((int)pUVar5->max_length <= (int)index) break;
        if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_1823cdcac;
        pUVar5 = (__this_00->fields)._items;
        pUVar7 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pUVar8,index,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1823cdcac;
        pUVar8 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar7,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if ((uint)pUVar5->max_length <= index) goto label_1823cdca6;
        pUVar5->m_Items[(int)index] = pUVar8;
        Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)index,pUVar8);
        pUVar5 = (__this_00->fields)._items;
        if (pUVar5 == (UnityEngine_RectTransform_array *)0x0) goto label_1823cdcac;
        if ((uint)pUVar5->max_length <= index) goto label_1823cdca6;
        if (pUVar5->m_Items[(int)index] == (UnityEngine_RectTransform_o *)0x0) goto label_1823cdcac;
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar5->m_Items[(int)index],
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar5 = (__this_00->fields)._items;
          if (pUVar5 == (UnityEngine_RectTransform_array *)0x0) goto label_1823cdcac;
          if ((uint)pUVar5->max_length <= index) goto label_1823cdca6;
          if (pUVar5->m_Items[(int)index] == (UnityEngine_RectTransform_o *)0x0) goto label_1823cdcac;
          pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar5->m_Items[(int)index],(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1823cdcac;
          x = UnityEngine_GameObject__AddComponent_object_
                        (pUVar9,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
        }
        pUVar6 = (__this_00->fields)._itemFades;
        if (pUVar6 == (UnityEngine_CanvasGroup_array *)0x0) goto label_1823cdcac;
        if ((uint)pUVar6->max_length <= index) goto label_1823cdca6;
        pUVar6->m_Items[(int)index] = x;
        Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)index,x);
        index = index + 1;
      }
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                            ((UnityEngine_Component_o *)pUVar8,true,
                             (MethodInfo_665440 *)
                             MethodInfo_UnityEngine_Component_GetComponentsInChildren_Button_40ab7b8);
        if (pSVar10 != (System_Object_array *)0x0) goto label_1823cdb8e;
      }
    }
  }
label_1823cdcac:
  ThrowNullReferenceException();
label_1823cdb8e:
  if ((int)pSVar10->max_length <= (int)uVar12) goto label_1823cdbeb;
  if ((uint)pSVar10->max_length <= uVar12) {
label_1823cdca6:
    ThrowIndexOutOfRangeException();
  }
  if ((UnityEngine_Component_o *)pSVar10->m_Items[(int)uVar12] == (UnityEngine_Component_o *)0x0)
  goto label_1823cdcac;
  pUVar9 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pSVar10->m_Items[(int)uVar12],(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1823cdcac;
  pGVar11 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar9,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselFocus);
  if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o *)0x0) goto label_1823cdcac;
  (pGVar11->fields)._carousel = __this_00;
  Il2CppCodeGenWriteBarrier(&(pGVar11->fields)._carousel,__this_00);
  uVar12 = uVar12 + 1;
  goto label_1823cdb8e;
label_1823cdbeb:
  if ((__this_00->fields)._selectedIndex < 0) {
label_1823cdc5c:
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this_00,(MethodInfo *)0x0);
    return false;
  }
  pUVar2 = (__this_00->fields)._scroll;
  if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar8 = (pUVar2->fields).m_Content, pUVar8 != (UnityEngine_RectTransform_o *)0x0)) {
    iVar1 = (__this_00->fields)._selectedIndex;
    iVar4 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
    if (iVar4 <= iVar1) goto label_1823cdc5c;
    pUVar2 = (__this_00->fields)._scroll;
    if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar8 = (pUVar2->fields).m_Content, pUVar8 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar7 = UnityEngine_Transform__GetChild
                         ((UnityEngine_Transform_o *)pUVar8,(__this_00->fields)._selectedIndex,
                          (MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar7,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal(__this_00,pUVar8,(MethodInfo *)0x0);
        goto label_1823cdc5c;
      }
    }
  }
  goto label_1823cdcac;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x1823cdcc0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_Start_d__10_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, UnityEngine_UI_ScrollRect_o* scroll, int32_t selectedIndex, const MethodInfo* method);
// 0x1823bfd00

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,
               UnityEngine_UI_ScrollRect_o *scroll,int32_t selectedIndex,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar1;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_03;
  
  if (Il2CppMethodInitialized_184347d55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
    Il2CppMethodInitialized_184347d55 = '\x01';
  }
  (__this->fields)._scroll = scroll;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,scroll);
  (__this->fields)._selectedIndex = selectedIndex;
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    __this_00 = (scroll->fields).m_VerticalScrollbar;
    (scroll->fields).m_Horizontal = true;
    (scroll->fields).m_Vertical = false;
    (scroll->fields).m_ScrollSensitivity = 168.0;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      __this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        UnityEngine_UI_ScrollRect__set_verticalScrollbar
                  (scroll,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
        pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge
                           (__this,false,(MethodInfo *)0x0);
        (__this->fields)._leftEdge = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._leftEdge,pGVar1);
        pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge
                           (__this,true,(MethodInfo *)0x0);
        (__this->fields)._rightEdge = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rightEdge,pGVar1);
        __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(scroll->fields).m_OnValueChanged;
        __this_03 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
        UnityEngine_Events_UnityAction_Vector2____ctor
                  (__this_03,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll,
                   (MethodInfo_E5A7E0 *)0x0);
        if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (__this_01,(UnityEngine_Events_UnityAction_T0__o *)__this_03,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$CreateEdge
// il2cpp: Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, bool right, const MethodInfo* method);
// 0x1823bf3c0

Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge
          (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,bool right,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_c *pGVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar5;
  UnityEngine_Vector2_o value_01;
  System_String_o *name;
  float fVar6;
  UnityEngine_Color_Fields local_68 [4];
  
  if (Il2CppMethodInitialized_184347d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselEdge);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Carousel Left Fade");
    il2cpp_codegen_initialize_runtime_metadata(&"Carousel Right Fade");
    Il2CppMethodInitialized_184347d56 = '\x01';
  }
  name = "Carousel Left Fade";
  if (right) {
    name = "Carousel Right Fade";
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1823bf6a1:
    ThrowNullReferenceException();
  }
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar3);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar3;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar3);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,name,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._scroll;
        if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) && (__this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_2f5a7e0
                    (__this_01,(UnityEngine_Transform_o *)(pUVar1->fields).m_Viewport,false,(MethodInfo *)0x0)
          ;
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_00,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (right) {
            fVar6 = 1.0;
          }
          else {
            fVar6 = 0.0;
          }
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            value_01.fields.y = 0.0;
            value_01.fields.x = fVar6;
            UnityEngine_RectTransform__set_anchorMin(__this_02,value_01,(MethodInfo *)0x0);
            value.fields.y = 1.0;
            value.fields.x = fVar6;
            UnityEngine_RectTransform__set_anchorMax(__this_02,value,(MethodInfo *)0x0);
            value_00.fields.y = 0.5;
            value_00.fields.x = fVar6;
            UnityEngine_RectTransform__set_pivot(__this_02,value_00,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_02,(UnityEngine_Vector2_o)0x43200000,(MethodInfo *)0x0);
            pGVar5 = UnityEngine_GameObject__AddComponent_object_
                               (__this_00,
                                (MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselEdge);
            if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *)0x0) {
              pGVar2 = pGVar5->klass;
              (pGVar5->fields)._right = right;
              (*(pGVar2->vtable)._25_set_raycastTarget.methodPtr)
                        (pGVar5,false,(pGVar2->vtable)._25_set_raycastTarget.method);
              local_68[0].r = 0.0;
              local_68[0].g = 0.0;
              local_68[0].b = 0.0;
              local_68[0].a = 0.0;
              (*(pGVar5->klass->vtable)._23_set_color.methodPtr)
                        (pGVar5,(UnityEngine_Color_o *)local_68,(pGVar5->klass->vtable)._23_set_color.method);
              (*(pGVar5->klass->vtable)._28_SetVerticesDirty.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._28_SetVerticesDirty.method);
              return pGVar5;
            }
          }
        }
      }
      goto label_1823bf6a1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Start
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x1823bfe40

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start
          (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_Start_d__10);
    Il2CppMethodInitialized_184347d57 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_Start_d__10);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x1823bf800

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347d58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d58 = '\x01';
  }
  x = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x1823bf720

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *__this_00;
  bool bVar2;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_01;
  
  if (Il2CppMethodInitialized_184347d59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    Il2CppMethodInitialized_184347d59 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    __this_00 = (pUVar1->fields).m_OnValueChanged;
    __this_01 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    UnityEngine_Events_UnityAction_Vector2____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll,
               (MethodInfo_E5A7E0 *)0x0);
    if (__this_00 != (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
                 (UnityEngine_Events_UnityAction_T0__T1__T2__o *)__this_01,
                 (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Reveal
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x1823bf880

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,
               UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Bounds_o *pUVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Bounds_o local_88 [5];
  
  if (Il2CppMethodInitialized_184347d5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d5a = '\x01';
  }
  pUVar2 = (__this->fields)._scroll;
  if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar3 = (pUVar2->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    pUVar4 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                       (local_88,(UnityEngine_Transform_o *)pUVar3,(UnityEngine_Transform_o *)target,
                        (MethodInfo *)0x0);
    pUVar2 = (__this->fields)._scroll;
    if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar3 = (pUVar2->fields).m_Viewport, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      fVar9 = (pUVar4->fields).m_Center.fields.x;
      fVar7 = (pUVar4->fields).m_Extents.fields.x;
      pUVar5 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_88,pUVar3,(MethodInfo *)0x0);
      fVar8 = (pUVar5->fields).m_XMin;
      fVar1 = (pUVar5->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar8 <= fVar9 - fVar7) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fVar7 + fVar9 <= fVar1 + fVar8) {
          fVar8 = 0.0;
        }
        else {
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          fVar8 = (fVar7 + fVar9) - (fVar1 + fVar8);
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar8 = (fVar9 - fVar7) - fVar8;
      }
      if (ABS(fVar8) <= 0.01) {
        return;
      }
      pUVar2 = (__this->fields)._scroll;
      if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar3 = (pUVar2->fields).m_Content, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184347d5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
          Il2CppMethodInitialized_184347d5b = '\x01';
        }
        pUVar2 = (__this->fields)._scroll;
        if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar3 = (pUVar2->fields).m_Content, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
          pUVar5 = UnityEngine_RectTransform__get_rect
                             ((UnityEngine_Rect_o *)local_88,pUVar3,(MethodInfo *)0x0);
          fVar9 = (pUVar5->fields).m_Width;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pUVar2 = (__this->fields)._scroll;
          if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar3 = (pUVar2->fields).m_Viewport, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
            pUVar5 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_Rect_o *)local_88,pUVar3,(MethodInfo *)0x0);
            fVar9 = fVar9 - (pUVar5->fields).m_Width;
            pUVar2 = (__this->fields)._scroll;
            if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
              fVar7 = 0.0;
              if (0.0 <= fVar9) {
                fVar7 = fVar9;
              }
              (*(pUVar2->klass->vtable)._41_StopMovement.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._41_StopMovement.method);
              pUVar2 = (__this->fields)._scroll;
              if ((fVar7 <= 0.0) || (fVar7 = (-UVar6.fields.x + fVar8) / fVar7, fVar7 < 0.0)) {
                fVar7 = 0.0;
              }
              else if (1.0 < fVar7) {
                fVar7 = 1.0;
              }
              if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition(pUVar2,fVar7,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$SetOffset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__SetOffset (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, float offset, const MethodInfo* method);
// 0x1823bfba0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__SetOffset
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,float offset,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Rect_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_184347d5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d5b = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar3 = UnityEngine_RectTransform__get_rect(local_58,pUVar2,(MethodInfo *)0x0);
    fVar5 = (pUVar3->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar3 = UnityEngine_RectTransform__get_rect(local_58,pUVar2,(MethodInfo *)0x0);
      fVar5 = fVar5 - (pUVar3->fields).m_Width;
      pUVar1 = (__this->fields)._scroll;
      if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        fVar4 = 0.0;
        if (0.0 <= fVar5) {
          fVar4 = fVar5;
        }
        (*(pUVar1->klass->vtable)._41_StopMovement.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._41_StopMovement.method);
        pUVar1 = (__this->fields)._scroll;
        if ((fVar4 <= 0.0) || (fVar4 = offset / fVar4, fVar4 < 0.0)) {
          fVar4 = 0.0;
        }
        else if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition(pUVar1,fVar4,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnScroll
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnScroll (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x1823bf870

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnScroll
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,UnityEngine_Vector2_o position
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$UpdateEdges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x1823bfeb0
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c0177: movss xmm12, dword ptr [rip + 0xf98a84]
// asm:   0x1823c0180: movss xmm14, dword ptr [rip + 0xf99487]
// asm:   0x1823c0189: nop dword ptr [rax]
// asm:   0x1823c04b3: jmp 0x1823c0190
// asm:   0x1823c04b8: movaps xmm14, xmmword ptr [rsp + 0xf0]
// asm:   0x1823c04c1: movaps xmm13, xmmword ptr [rsp + 0x100]
// asm:   0x1823c04ca: movaps xmm12, xmmword ptr [rsp + 0x110]
// asm:   0x1823c04d3: movaps xmm11, xmmword ptr [rsp + 0x120]
// asm:   0x1823c04dc: movaps xmm10, xmmword ptr [rsp + 0x130]
// asm:   0x1823c04e5: movaps xmm9, xmmword ptr [rsp + 0x140]
// asm:   0x1823c04ee: movaps xmm8, xmmword ptr [rsp + 0x150]
// asm:   0x1823c04f7: movaps xmm7, xmmword ptr [rsp + 0x160]
// asm:   0x1823c04ff: movaps xmm6, xmmword ptr [rsp + 0x170]
// asm:   0x1823c0507: mov rsi, qword ptr [rsp + 0x180]
// asm:   0x1823c050f: mov rbp, qword ptr [rsp + 0x1a8]
// asm:   0x1823c0517: movaps xmm15, xmmword ptr [rsp + 0xe0]

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar8;
  UnityEngine_UI_ScrollRect_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_RectTransform_array *pUVar11;
  UnityEngine_CanvasGroup_array *pUVar12;
  UnityEngine_CanvasGroup_o *x;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  UnityEngine_Rect_o *pUVar19;
  UnityEngine_Matrix4x4_o *pUVar20;
  UnityEngine_Vector3_o *pUVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float opacity;
  UnityEngine_Rect_Fields local_168;
  UnityEngine_Vector3_o local_158;
  UnityEngine_Vector3_o local_148;
  UnityEngine_Rect_Fields local_138;
  UnityEngine_Vector3_o local_128;
  UnityEngine_Vector3_o local_118;
  UnityEngine_Rect_o local_108;
  UnityEngine_Matrix4x4_o local_f8 [3];
  
  if (Il2CppMethodInitialized_184347d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d5c = '\x01';
  }
  pGVar8 = (__this->fields)._leftEdge;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar17 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar17) {
    pGVar8 = (__this->fields)._rightEdge;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar17 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar17) {
      pUVar9 = (__this->fields)._scroll;
      if ((pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar10 = (pUVar9->fields).m_Content, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
        pUVar19 = UnityEngine_RectTransform__get_rect
                            ((UnityEngine_Rect_o *)&local_168,pUVar10,(MethodInfo *)0x0);
        fVar27 = (pUVar19->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar9 = (__this->fields)._scroll;
        if ((pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar10 = (pUVar9->fields).m_Viewport, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
          pUVar19 = UnityEngine_RectTransform__get_rect
                              ((UnityEngine_Rect_o *)&local_168,pUVar10,(MethodInfo *)0x0);
          fVar27 = fVar27 - (pUVar19->fields).m_Width;
          if (fVar27 < 0.0) {
            fVar27 = 0.0;
          }
          pUVar9 = (__this->fields)._scroll;
          if (pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            fVar23 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition(pUVar9,(MethodInfo *)0x0);
            if (fVar23 < 0.0) {
              fVar23 = 0.0;
            }
            else if (1.0 < fVar23) {
              fVar23 = 1.0;
            }
            opacity = (fVar23 * fVar27) / 40.0;
            if (opacity < 0.0) {
              opacity = 0.0;
            }
            else if (1.0 < opacity) {
              opacity = 1.0;
            }
            fVar27 = (fVar27 - fVar23 * fVar27) / 40.0;
            if (fVar27 < 0.0) {
              fVar27 = 0.0;
            }
            else if (1.0 < fVar27) {
              fVar27 = 1.0;
            }
            pGVar8 = (__this->fields)._leftEdge;
            if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__SetOpacity(pGVar8,opacity,(MethodInfo *)0x0)
              ;
              pGVar8 = (__this->fields)._rightEdge;
              if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__SetOpacity
                          (pGVar8,fVar27,(MethodInfo *)0x0);
                if ((__this->fields)._items == (UnityEngine_RectTransform_array *)0x0) {
                  return;
                }
                pUVar9 = (__this->fields)._scroll;
                if ((pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (pUVar10 = (pUVar9->fields).m_Viewport, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                  pUVar19 = UnityEngine_RectTransform__get_rect
                                      ((UnityEngine_Rect_o *)&local_168,pUVar10,(MethodInfo *)0x0);
                  pUVar9 = (__this->fields)._scroll;
                  if ((pUVar9 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                     (pUVar10 = (pUVar9->fields).m_Viewport, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                    local_138.m_XMin = (pUVar19->fields).m_XMin;
                    local_138.m_YMin = (pUVar19->fields).m_YMin;
                    local_138.m_Width = (pUVar19->fields).m_Width;
                    local_138.m_Height = (pUVar19->fields).m_Height;
                    pUVar20 = UnityEngine_Transform__get_worldToLocalMatrix
                                        (local_f8,(UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
                    uVar22 = 0;
                    fVar23 = (pUVar20->fields).m01;
                    fVar1 = (pUVar20->fields).m02;
                    fVar2 = (pUVar20->fields).m03;
                    fVar3 = (pUVar20->fields).m00;
                    pUVar11 = (__this->fields)._items;
                    while (pUVar11 != (UnityEngine_RectTransform_array *)0x0) {
                      if ((int)pUVar11->max_length <= (int)uVar22) {
                        return;
                      }
                      pUVar11 = (__this->fields)._items;
                      if (pUVar11 == (UnityEngine_RectTransform_array *)0x0) break;
                      if ((uint)pUVar11->max_length <= uVar22) goto label_1823c0530;
                      pUVar10 = pUVar11->m_Items[(int)uVar22];
                      if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0)
                      {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar17 = UnityEngine_Object__op_Equality
                                         ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (!bVar17) {
                        pUVar12 = (__this->fields)._itemFades;
                        if (pUVar12 == (UnityEngine_CanvasGroup_array *)0x0) break;
                        if ((uint)pUVar12->max_length <= uVar22) goto label_1823c0530;
                        x = pUVar12->m_Items[(int)uVar22];
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar17 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if (!bVar17) {
                          pUVar11 = (__this->fields)._items;
                          if (pUVar11 == (UnityEngine_RectTransform_array *)0x0) break;
                          if ((uint)pUVar11->max_length <= uVar22) {
label_1823c0530:
                            ThrowIndexOutOfRangeException();
                          }
                          if (pUVar11->m_Items[(int)uVar22] == (UnityEngine_RectTransform_o *)0x0) break;
                          pUVar19 = UnityEngine_RectTransform__get_rect
                                              (&local_108,pUVar11->m_Items[(int)uVar22],(MethodInfo *)0x0);
                          pUVar11 = (__this->fields)._items;
                          if (pUVar11 == (UnityEngine_RectTransform_array *)0x0) break;
                          if ((uint)pUVar11->max_length <= uVar22) goto label_1823c0530;
                          fVar25 = (pUVar19->fields).m_XMin;
                          fVar26 = (pUVar19->fields).m_YMin;
                          fVar4 = (pUVar19->fields).m_Width;
                          fVar24 = (pUVar19->fields).m_Height;
                          pUVar10 = pUVar11->m_Items[(int)uVar22];
                          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                          }
                          if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) break;
                          local_158.fields.y = fVar24 * 0.5 + fVar26;
                          local_158.fields.z = 0.0;
                          local_158.fields.x = fVar25;
                          pUVar21 = UnityEngine_Transform__TransformPoint
                                              (&local_128,(UnityEngine_Transform_o *)pUVar10,&local_158,
                                               (MethodInfo *)0x0);
                          pUVar11 = (__this->fields)._items;
                          fVar5 = (pUVar21->fields).y;
                          fVar6 = (pUVar21->fields).x;
                          fVar7 = (pUVar21->fields).z;
                          if (pUVar11 == (UnityEngine_RectTransform_array *)0x0) break;
                          if ((uint)pUVar11->max_length <= uVar22) goto label_1823c0530;
                          if (pUVar11->m_Items[(int)uVar22] == (UnityEngine_RectTransform_o *)0x0) break;
                          local_148.fields.y = fVar24 * 0.5 + fVar26;
                          local_148.fields.z = 0.0;
                          local_148.fields.x = fVar4 + fVar25;
                          pUVar21 = UnityEngine_Transform__TransformPoint
                                              (&local_118,
                                               (UnityEngine_Transform_o *)pUVar11->m_Items[(int)uVar22],
                                               &local_148,(MethodInfo *)0x0);
                          uVar15 = local_138._8_8_;
                          uVar13 = local_138._0_8_;
                          fVar25 = (pUVar21->fields).y;
                          fVar26 = (pUVar21->fields).z;
                          fVar4 = (pUVar21->fields).x;
                          local_168.m_XMin = local_138.m_XMin;
                          local_168.m_YMin = local_138.m_YMin;
                          local_168.m_Width = local_138.m_Width;
                          local_168.m_Height = local_138.m_Height;
                          fVar24 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__VisibilityAt
                                             (fVar23 * fVar5 + fVar3 * fVar6 + fVar1 * fVar7 + fVar2,
                                              (UnityEngine_Rect_o *)&local_168,opacity,fVar27,
                                              (MethodInfo *)0x0);
                          uVar16 = local_138._8_8_;
                          uVar14 = local_138._0_8_;
                          local_138.m_XMin = (float)uVar13;
                          local_138.m_YMin = SUB84(uVar13,4);
                          local_168.m_XMin = local_138.m_XMin;
                          local_168.m_YMin = local_138.m_YMin;
                          local_138.m_Width = (float)uVar15;
                          local_138.m_Height = SUB84(uVar15,4);
                          local_168.m_Width = local_138.m_Width;
                          local_168.m_Height = local_138.m_Height;
                          local_138._0_8_ = uVar14;
                          local_138._8_8_ = uVar16;
                          fVar25 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__VisibilityAt
                                             (fVar23 * fVar25 + fVar3 * fVar4 + fVar1 * fVar26 + fVar2,
                                              (UnityEngine_Rect_o *)&local_168,opacity,fVar27,
                                              (MethodInfo *)0x0);
                          pUVar12 = (__this->fields)._itemFades;
                          if (pUVar12 == (UnityEngine_CanvasGroup_array *)0x0) break;
                          if ((uint)pUVar12->max_length <= uVar22) goto label_1823c0530;
                          if (pUVar12->m_Items[(int)uVar22] == (UnityEngine_CanvasGroup_o *)0x0) break;
                          fVar26 = (fVar25 + fVar24) * 0.5;
                          fVar25 = UnityEngine_CanvasGroup__get_alpha
                                             (pUVar12->m_Items[(int)uVar22],(MethodInfo *)0x0);
                          cVar18 = il2cpp_runtime_helper_180562af0(fVar25,fVar26);
                          if (cVar18 == '\0') {
                            pUVar12 = (__this->fields)._itemFades;
                            if (pUVar12 == (UnityEngine_CanvasGroup_array *)0x0) break;
                            if ((uint)pUVar12->max_length <= uVar22) goto label_1823c0530;
                            if (pUVar12->m_Items[(int)uVar22] == (UnityEngine_CanvasGroup_o *)0x0) break;
                            UnityEngine_CanvasGroup__set_alpha
                                      (pUVar12->m_Items[(int)uVar22],fVar26,(MethodInfo *)0x0);
                          }
                          pUVar12 = (__this->fields)._itemFades;
                          if (pUVar12 == (UnityEngine_CanvasGroup_array *)0x0) break;
                          if ((uint)pUVar12->max_length <= uVar22) goto label_1823c0530;
                          if (pUVar12->m_Items[(int)uVar22] == (UnityEngine_CanvasGroup_o *)0x0) break;
                          UnityEngine_CanvasGroup__set_blocksRaycasts
                                    (pUVar12->m_Items[(int)uVar22],0.01 < fVar26,(MethodInfo *)0x0);
                        }
                      }
                      uVar22 = uVar22 + 1;
                      pUVar11 = (__this->fields)._items;
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
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$VisibilityAt
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__VisibilityAt (float position, UnityEngine_Rect_o viewport, float leftOpacity, float rightOpacity, const MethodInfo* method);
// 0x1823c0540
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c05ce: jmp 0x1823c05e8
// asm:   0x1823c062f: jmp 0x1823c0649

float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__VisibilityAt
                (float position,UnityEngine_Rect_o *viewport,float leftOpacity,float rightOpacity,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184347d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d5d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar2 = (position - (viewport->fields).m_XMin) / 160.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
label_1823c05e8:
    fVar2 = fVar2 * 0.5;
  }
  else {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    else if (fVar2 <= 0.5) goto label_1823c05e8;
    fVar2 = (fVar2 - 0.5) * 1.5 + 0.25;
  }
  if (leftOpacity < 0.0) {
    leftOpacity = 0.0;
  }
  else if (1.0 < leftOpacity) {
    leftOpacity = 1.0;
  }
  fVar1 = (((viewport->fields).m_Width + (viewport->fields).m_XMin) - position) / 160.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
label_1823c0649:
    fVar1 = fVar1 * 0.5;
  }
  else {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    else if (fVar1 <= 0.5) goto label_1823c0649;
    fVar1 = (fVar1 - 0.5) * 1.5 + 0.25;
  }
  if (rightOpacity < 0.0) {
    rightOpacity = 0.0;
  }
  else if (1.0 < rightOpacity) {
    rightOpacity = 1.0;
  }
  return ((fVar1 - 1.0) * rightOpacity + 1.0) * ((fVar2 - 1.0) * leftOpacity + 1.0);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$EdgeVisibility
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__EdgeVisibility (float distance, const MethodInfo* method);
// 0x1823bf6d0

float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__EdgeVisibility(float distance,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = distance / 160.0;
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  else if (fVar1 <= 0.5) {
    return fVar1 * 0.5;
  }
  return (fVar1 - 0.5) * 1.5 + 0.25;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


