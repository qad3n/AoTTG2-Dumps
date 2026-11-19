// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e8b5c0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x5e8c660

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__MoveNext (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x5e8c670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8c8f5: jmp 0x5e8ca71

bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,
               MethodInfo *method)

{
  UnityEngine_RectTransform_array **targetAddress;
  int iVar1;
  MethodInfo *__this_00;
  Il2CppClass *pIVar2;
  UnityEngine_Component_o *pUVar3;
  bool bVar4;
  uint32_t uVar5;
  int32_t iVar6;
  UnityEngine_RectTransform_array *pUVar7;
  UnityEngine_CanvasGroup_array *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_CanvasGroup_o *x;
  UnityEngine_GameObject_o *pUVar11;
  System_Object_array *pSVar12;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o *pGVar13;
  MethodInfo *method_00;
  uint uVar14;
  long lVar15;
  MethodInfo *method_01;
  uint uVar16;
  
  if (Il2CppMethodInitialized_07548891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CanvasGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselFocus);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform_array);
    Il2CppMethodInitialized_07548891 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (MethodInfo *)(__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((__this_00 != (MethodInfo *)0x0) && (__this_00->klass != (Il2CppClass *)0x0)) &&
       (pUVar10 = (__this_00->klass->_1).byval_arg.data, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
      uVar5 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_RectTransform_array *)SZArrayNew(TypeInfo_UnityEngine_RectTransform_array,uVar5);
      targetAddress = (UnityEngine_RectTransform_array **)&__this_00->return_type;
      __this_00->return_type = (Il2CppType *)pUVar7;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if ((UnityEngine_RectTransform_array *)__this_00->return_type != (UnityEngine_RectTransform_array *)0x0)
      {
        pUVar8 = (UnityEngine_CanvasGroup_array *)
                 SZArrayNew(TypeInfo_UnityEngine_CanvasGroup_array,
                            (uint32_t)((UnityEngine_RectTransform_array *)__this_00->return_type)->max_length)
        ;
        __this_00->parameters = (Il2CppType **)pUVar8;
        Il2CppCodeGenWriteBarrier(&__this_00->parameters);
        pUVar7 = (UnityEngine_RectTransform_array *)__this_00->return_type;
        if (pUVar7 != (UnityEngine_RectTransform_array *)0x0) {
          uVar16 = 0;
          lVar15 = 0x20;
          while (pIVar2 = __this_00->klass, (int)uVar16 < (int)pUVar7->max_length) {
            if (((pIVar2 == (Il2CppClass *)0x0) ||
                (pUVar10 = (pIVar2->_1).byval_arg.data, pUVar10 == (UnityEngine_RectTransform_o *)0x0)) ||
               (pUVar9 = UnityEngine_Transform__GetChild
                                   ((UnityEngine_Transform_o *)pUVar10,uVar16,(MethodInfo *)0x0),
               pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_05e8ca71;
            pUVar10 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar9,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            if ((uint)pUVar7->max_length <= uVar16) goto label_05e8ca76;
            *(UnityEngine_RectTransform_o **)((long)pUVar7->m_Items + lVar15 + -0x20) = pUVar10;
            Il2CppCodeGenWriteBarrier((void **)((long)pUVar7->m_Items + lVar15 + -0x20));
            pUVar7 = *targetAddress;
            if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) goto label_05e8ca71;
            if ((uint)pUVar7->max_length <= uVar16) goto label_05e8ca76;
            pUVar3 = *(UnityEngine_Component_o **)((long)pUVar7->m_Items + lVar15 + -0x20);
            if (pUVar3 == (UnityEngine_Component_o *)0x0) goto label_05e8ca71;
            x = UnityEngine_Component__GetComponent_object_
                          (pUVar3,(MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar4) {
              pUVar7 = *targetAddress;
              if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) goto label_05e8ca71;
              if ((uint)pUVar7->max_length <= uVar16) goto label_05e8ca76;
              pUVar3 = *(UnityEngine_Component_o **)((long)pUVar7->m_Items + lVar15 + -0x20);
              if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
                 (pUVar11 = UnityEngine_Component__get_gameObject(pUVar3,(MethodInfo *)0x0),
                 pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05e8ca71;
              x = UnityEngine_GameObject__AddComponent_object_
                            (pUVar11,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
            }
            pUVar8 = (UnityEngine_CanvasGroup_array *)__this_00->parameters;
            if (pUVar8 == (UnityEngine_CanvasGroup_array *)0x0) goto label_05e8ca71;
            if ((uint)pUVar8->max_length <= uVar16) goto label_05e8ca76;
            *(UnityEngine_CanvasGroup_o **)((long)pUVar8->m_Items + lVar15 + -0x20) = x;
            Il2CppCodeGenWriteBarrier((void **)((long)pUVar8->m_Items + lVar15 + -0x20));
            uVar16 = uVar16 + 1;
            pUVar7 = *targetAddress;
            lVar15 = lVar15 + 8;
            if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) goto label_05e8ca71;
          }
          if ((pIVar2 != (Il2CppClass *)0x0) &&
             (pUVar10 = (pIVar2->_1).byval_arg.data, pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
            method_01 = (MethodInfo *)0x1;
            pSVar12 = UnityEngine_Component__GetComponentsInChildren_object_
                                ((UnityEngine_Component_o *)pUVar10,true,
                                 (MethodInfo_34B1260 *)
                                 MethodInfo_UnityEngine_Component_GetComponentsInChildren_Button);
            if (pSVar12 != (System_Object_array *)0x0) {
              uVar16 = (uint)pSVar12->max_length;
              if ((int)uVar16 < 1) goto label_05e8c9c9;
              uVar14 = 0;
              goto label_05e8c970;
            }
          }
        }
      }
    }
    goto label_05e8ca71;
  }
  goto label_05e8ca5d;
  while( true ) {
    (pGVar13->fields)._carousel = (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)__this_00;
    method_01 = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._carousel);
    uVar14 = uVar14 + 1;
    uVar16 = (uint)pSVar12->max_length;
    if ((int)uVar16 <= (int)uVar14) break;
label_05e8c970:
    if (uVar16 <= uVar14) {
label_05e8ca76:
      ThrowIndexOutOfRangeException();
    }
    if ((((UnityEngine_Component_o *)pSVar12->m_Items[(int)uVar14] == (UnityEngine_Component_o *)0x0) ||
        (pUVar11 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar12->m_Items[(int)uVar14],(MethodInfo *)0x0),
        pUVar11 == (UnityEngine_GameObject_o *)0x0)) ||
       (pGVar13 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar11,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselFocus
                            ), pGVar13 == (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o *)0x0))
    goto label_05e8ca71;
  }
label_05e8c9c9:
  uVar5 = __this_00->token;
  if (-1 < (int)uVar5) {
    if ((__this_00->klass == (Il2CppClass *)0x0) ||
       (pUVar10 = (__this_00->klass->_1).byval_arg.data, pUVar10 == (UnityEngine_RectTransform_o *)0x0)) {
label_05e8ca71:
      ThrowNullReferenceException();
    }
    method_01 = (MethodInfo *)0x0;
    iVar6 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
    if ((int)uVar5 < iVar6) {
      if (((__this_00->klass == (Il2CppClass *)0x0) ||
          (pUVar10 = (__this_00->klass->_1).byval_arg.data, pUVar10 == (UnityEngine_RectTransform_o *)0x0)) ||
         (pUVar9 = UnityEngine_Transform__GetChild
                             ((UnityEngine_Transform_o *)pUVar10,__this_00->token,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_05e8ca71;
      method_01 = (MethodInfo *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar9,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                            );
      Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal
                ((Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)__this_00,
                 (UnityEngine_RectTransform_o *)method_01,method_00);
    }
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges
            ((Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)__this_00,method_01);
label_05e8ca5d:
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x5e8ca80

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o* __this, const MethodInfo* method);
// 0x5e8ca90

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
// 0x5e8cad0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, UnityEngine_UI_ScrollRect_o* scroll, int32_t selectedIndex, const MethodInfo* method);
// 0x5e8b0e0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,
               UnityEngine_UI_ScrollRect_o *scroll,int32_t selectedIndex,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07548888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
    Il2CppMethodInitialized_07548888 = '\x01';
  }
  (__this->fields)._scroll = scroll;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll);
  (__this->fields)._selectedIndex = selectedIndex;
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    (scroll->fields).m_Horizontal = true;
    (scroll->fields).m_Vertical = false;
    (scroll->fields).m_ScrollSensitivity = 168.0;
    __this_00 = (scroll->fields).m_VerticalScrollbar;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      __this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        UnityEngine_UI_ScrollRect__set_verticalScrollbar
                  (scroll,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
        pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge(__this,false,method_00);
        (__this->fields)._leftEdge = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._leftEdge);
        pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge(__this,true,method_01);
        (__this->fields)._rightEdge = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rightEdge);
        __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(scroll->fields).m_OnValueChanged;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
        UnityEngine_Events_UnityAction_Vector2____ctor
                  ((UnityEngine_Events_UnityAction_Vector2__o *)call,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll,
                   (MethodInfo_4311CC0 *)0x0);
        if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (__this_01,call,
                     (MethodInfo_4319A50 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$CreateEdge
// il2cpp: Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, bool right, const MethodInfo* method);
// 0x5e8b210

Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge
          (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,bool right,MethodInfo *method)

{
  System_String_o *name;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  Il2CppType *handle;
  System_String_o **ppSVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  float fVar6;
  
  if (Il2CppMethodInitialized_07548889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselEdge);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Carousel Left Fade");
    il2cpp_codegen_initialize_runtime_metadata(&"Carousel Right Fade");
    Il2CppMethodInitialized_07548889 = '\x01';
  }
  if (right) {
    ppSVar2 = &"Carousel Right Fade";
  }
  else {
    ppSVar2 = &"Carousel Left Fade";
  }
  name = *ppSVar2;
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05e8b4db:
    ThrowNullReferenceException();
  }
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05e8b4e5;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
label_05e8b4e5:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar3;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._scroll;
        if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) && (__this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_692d510
                    (__this_01,(UnityEngine_Transform_o *)(pUVar1->fields).m_Viewport,false,(MethodInfo *)0x0)
          ;
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_00,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            if (right) {
              fVar6 = 1.0;
            }
            else {
              fVar6 = 0.0;
            }
            value.fields.y = 0.0;
            value.fields.x = fVar6;
            UnityEngine_RectTransform__set_anchorMin(__this_02,value,(MethodInfo *)0x0);
            value_00.fields.y = 1.0;
            value_00.fields.x = fVar6;
            UnityEngine_RectTransform__set_anchorMax(__this_02,value_00,(MethodInfo *)0x0);
            value_01.fields.y = 0.5;
            value_01.fields.x = fVar6;
            UnityEngine_RectTransform__set_pivot(__this_02,value_01,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_02,(UnityEngine_Vector2_o)0x43200000,(MethodInfo *)0x0);
            pGVar5 = UnityEngine_GameObject__AddComponent_object_
                               (__this_00,
                                (MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselEdge);
            if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *)0x0) {
              (pGVar5->fields)._right = right;
              (*(pGVar5->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pGVar5,false,(pGVar5->klass->vtable)._25_set_raycastTarget.method);
              (*(pGVar5->klass->vtable)._23_set_color.methodPtr)
                        (pGVar5,(UnityEngine_Color_o)ZEXT816(0),(pGVar5->klass->vtable)._23_set_color.method);
              (*(pGVar5->klass->vtable)._28_SetVerticesDirty.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._28_SetVerticesDirty.method);
              return pGVar5;
            }
          }
        }
      }
      goto label_05e8b4db;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Start
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x5e8b550

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start
          (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Start_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_0754888a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_Start_d__10);
    Il2CppMethodInitialized_0754888a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_Start_d__10);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x5e8b5e0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *x;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754888b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754888b = '\x01';
  }
  x = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x5e8bf90

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *call;
  
  if (Il2CppMethodInitialized_0754888c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    Il2CppMethodInitialized_0754888c = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar1->fields).m_OnValueChanged;
      call = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
      UnityEngine_Events_UnityAction_Vector2____ctor
                ((UnityEngine_Events_UnityAction_Vector2__o *)call,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll,
                 (MethodInfo_4311CC0 *)0x0);
      if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
        UnityEngine_Events_UnityEvent_Vector2___RemoveListener
                  (__this_00,call,
                   (MethodInfo_4319B00 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Reveal
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x5e8c070
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8c182: jmp 0x5e8c28f
// asm:   0x5e8c1c7: addss xmm1, xmm0
// asm:   0x5e8c1cb: xorps xmm2, xmm2
// asm:   0x5e8c1ce: ucomiss xmm3, xmm1
// asm:   0x5e8c1d1: ja 0x5e8c21c

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,
               UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Bounds_o local_30;
  
  if (Il2CppMethodInitialized_0754888d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754888d = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05e8c299;
  pUVar2 = (pUVar1->fields).m_Viewport;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (&local_30,(UnityEngine_Transform_o *)pUVar2,(UnityEngine_Transform_o *)target,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._scroll;
  if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
     (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 == (UnityEngine_RectTransform_o *)0x0)) goto label_05e8c299;
  UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  fVar4 = UVar6.fields.m_XMin;
  fVar5 = local_30.fields.m_Center.fields.x - local_30.fields.m_Extents.fields.x;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    if (fVar5 < fVar4) goto label_05e8c142;
label_05e8c1b5:
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (local_30.fields.m_Center.fields.x + local_30.fields.m_Extents.fields.x <= UVar6.fields.m_Width + fVar4
       ) {
      return;
    }
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar5 = (local_30.fields.m_Center.fields.x + local_30.fields.m_Extents.fields.x) -
            (UVar6.fields.m_Width + fVar4);
  }
  else {
    if (fVar4 <= fVar5) goto label_05e8c1b5;
label_05e8c142:
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar5 = fVar5 - fVar4;
  }
  if (0.01 < ABS(fVar5)) {
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0)) {
label_05e8c299:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__SetOffset(__this,fVar5 - UVar3.fields.x,method_00);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$SetOffset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__SetOffset (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, float offset, const MethodInfo* method);
// 0x5e8c2a0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__SetOffset
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,float offset,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  float local_28;
  
  if (Il2CppMethodInitialized_0754888e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754888e = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._scroll;
      if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        local_28 = UVar5.fields.m_Width;
        local_28 = local_28 - UVar6.fields.m_Width;
        fVar4 = 0.0;
        if (0.0 <= local_28) {
          fVar4 = local_28;
        }
        (*(pUVar1->klass->vtable)._41_StopMovement.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._41_StopMovement.method);
        fVar3 = 0.0;
        pUVar1 = (__this->fields)._scroll;
        if (0.0 < fVar4) {
          fVar4 = offset / fVar4;
          fVar3 = 1.0;
          if (fVar4 <= 1.0) {
            fVar3 = fVar4;
          }
          fVar3 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar3);
        }
        if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition(pUVar1,fVar3,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
            Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,method_00);
            return;
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnScroll
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnScroll (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x5e8c3e0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__OnScroll
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,UnityEngine_Vector2_o position
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$UpdateEdges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x5e8b650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8bcd0: jmp 0x5e8bd1b

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__UpdateEdges
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_CanvasGroup_array *pUVar4;
  UnityEngine_CanvasGroup_o *x;
  bool bVar5;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 uVar6;
  UnityEngine_RectTransform_array *pUVar7;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 in_ECX;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar20;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  float fVar29;
  UnityEngine_Rect_o UVar30;
  UnityEngine_Rect_o UVar31;
  UnityEngine_Color_o UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  float local_108;
  float local_f0;
  float local_ec;
  float local_d8;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_88;
  UnityEngine_Matrix4x4_o local_70;
  
  if (Il2CppMethodInitialized_0754888f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754888f = '\x01';
  }
  pGVar1 = (__this->fields)._leftEdge;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pGVar1 = (__this->fields)._rightEdge;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pUVar2 = (__this->fields)._scroll;
      if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar3 = (pUVar2->fields).m_Content, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar30 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar2 = (__this->fields)._scroll;
        if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar3 = (pUVar2->fields).m_Viewport, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar31 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._scroll;
          if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            fVar14 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition(pUVar2,(MethodInfo *)0x0);
            pGVar1 = (__this->fields)._leftEdge;
            if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *)0x0) {
              local_108 = UVar30.fields.m_Width;
              local_d8 = UVar31.fields.m_Width;
              auVar21 = ZEXT812(0x3f800000);
              if (fVar14 <= auVar21._0_4_) {
                auVar21._4_8_ = auVar21._4_8_;
                auVar21._0_4_ = fVar14;
              }
              fVar27 = 0.0;
              if (0.0 <= local_108 - local_d8) {
                fVar27 = local_108 - local_d8;
              }
              fVar14 = (float)(-(uint)(0.0 <= fVar14) & auVar21._0_4_) * fVar27;
              auVar22._0_4_ = fVar27 - fVar14;
              auVar22._4_4_ = fVar14;
              auVar22._8_8_ = 0;
              auVar26 = divps(auVar22,_DAT_01005920);
              auVar22 = minps(_DAT_01005870,auVar26);
              fVar14 = (float)(-(uint)(0.0 <= auVar26._0_4_) & auVar22._0_4_);
              fVar27 = (float)(-(uint)(0.0 <= auVar26._4_4_) & auVar22._4_4_);
              UVar32 = (*(pGVar1->klass->vtable)._22_get_color.methodPtr)
                                 (pGVar1,(pGVar1->klass->vtable)._22_get_color.method);
              if (Il2CppMethodInitialized_0753e7b4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                Il2CppMethodInitialized_0753e7b4 = '\x01';
              }
              fVar29 = ABS(UVar32.fields.a);
              if (fVar29 <= ABS(fVar27)) {
                fVar29 = ABS(fVar27);
              }
              fVar20 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
              fVar15 = fVar29 * 1e-06;
              if (fVar29 * 1e-06 <= fVar20) {
                fVar15 = fVar20;
              }
              if (fVar15 <= ABS(fVar27 - UVar32.fields.a)) {
                (*(pGVar1->klass->vtable)._23_set_color.methodPtr)
                          (pGVar1,(UnityEngine_Color_o)(ZEXT416((uint)fVar27) << 0x60),
                           (pGVar1->klass->vtable)._23_set_color.method);
              }
              pGVar1 = (__this->fields)._rightEdge;
              if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *)0x0) {
                UVar32 = (*(pGVar1->klass->vtable)._22_get_color.methodPtr)
                                   (pGVar1,(pGVar1->klass->vtable)._22_get_color.method);
                if (Il2CppMethodInitialized_0753e7b4 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                  Il2CppMethodInitialized_0753e7b4 = '\x01';
                }
                fVar29 = ABS(UVar32.fields.a);
                if (fVar29 <= ABS(fVar14)) {
                  fVar29 = ABS(fVar14);
                }
                fVar20 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
                auVar26 = ZEXT416((uint)fVar20);
                fVar15 = fVar29 * 1e-06;
                if (fVar29 * 1e-06 <= fVar20) {
                  fVar15 = fVar20;
                }
                if (fVar15 <= ABS(fVar14 - UVar32.fields.a)) {
                  (*(pGVar1->klass->vtable)._23_set_color.methodPtr)
                            (pGVar1,(UnityEngine_Color_o)(ZEXT416((uint)fVar14) << 0x60),
                             (pGVar1->klass->vtable)._23_set_color.method);
                  auVar26._8_8_ = extraout_XMM1_Qb;
                  auVar26._0_8_ = extraout_XMM1_Qa;
                }
                if ((__this->fields)._items == (UnityEngine_RectTransform_array *)0x0) {
                  return;
                }
                pUVar2 = (__this->fields)._scroll;
                if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (pUVar3 = (pUVar2->fields).m_Viewport, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
                  UVar30 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._scroll;
                  if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                     (pUVar3 = (pUVar2->fields).m_Viewport, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
                    UnityEngine_Transform__get_worldToLocalMatrix
                              (&local_70,(UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
                    pUVar7 = (__this->fields)._items;
                    if (pUVar7 != (UnityEngine_RectTransform_array *)0x0) {
                      iVar12 = -(uint)(fVar14 < 0.0);
                      iVar13 = -(uint)(fVar27 < 0.0);
                      auVar24._4_4_ = iVar13;
                      auVar24._0_4_ = iVar12;
                      auVar24._8_4_ = iVar13;
                      auVar24._12_4_ = iVar13;
                      auVar23._8_8_ = auVar24._8_8_;
                      auVar23._4_4_ = iVar12;
                      auVar23._0_4_ = iVar12;
                      uVar10 = movmskpd(in_ECX,auVar23);
                      local_ec = 0.0;
                      local_f0 = 0.0;
                      if ((uVar10 & 2) == 0) {
                        local_f0 = fVar27;
                      }
                      if ((uVar10 & 1) == 0) {
                        local_ec = fVar14;
                      }
                      local_b8 = UVar30.fields.m_XMin;
                      fStack_b0 = (float)extraout_XMM0_Qb;
                      fStack_ac = (float)((ulong)extraout_XMM0_Qb >> 0x20);
                      local_a8 = UVar30.fields.m_Width;
                      fStack_a0 = auVar26._8_4_;
                      fStack_9c = auVar26._12_4_;
                      uVar11 = 0;
                      do {
                        uVar10 = (uint)pUVar7->max_length;
                        if ((long)(int)uVar10 <= (long)uVar11) {
                          return;
                        }
                        if (uVar10 <= uVar11) goto label_05e8bf83;
                        pUVar3 = pUVar7->m_Items[uVar11];
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar5 = UnityEngine_Object__op_Equality
                                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if (!bVar5) {
                          pUVar4 = (__this->fields)._itemFades;
                          if (pUVar4 == (UnityEngine_CanvasGroup_array *)0x0) break;
                          if ((uint)pUVar4->max_length <= uVar11) goto label_05e8bf83;
                          x = pUVar4->m_Items[uVar11];
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar5 = UnityEngine_Object__op_Equality
                                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (bVar5) goto label_05e8ba40;
                          pUVar7 = (__this->fields)._items;
                          if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) break;
                          if ((uint)pUVar7->max_length <= uVar11) goto label_05e8bf83;
                          if (pUVar7->m_Items[uVar11] == (UnityEngine_RectTransform_o *)0x0) break;
                          UVar30 = UnityEngine_RectTransform__get_rect
                                             (pUVar7->m_Items[uVar11],(MethodInfo *)0x0);
                          pUVar7 = (__this->fields)._items;
                          if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) break;
                          if ((uint)pUVar7->max_length <= uVar11) goto label_05e8bf83;
                          pUVar3 = pUVar7->m_Items[uVar11];
                          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                          }
                          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) break;
                          fVar14 = UVar30.fields.m_YMin + UVar30.fields.m_Height * 0.5;
                          UVar33.fields.y = fVar14;
                          UVar33.fields.x = UVar30.fields.m_XMin;
                          UVar33.fields.z = 0.0;
                          UVar33 = UnityEngine_Transform__TransformPoint
                                             ((UnityEngine_Transform_o *)pUVar3,UVar33,(MethodInfo *)0x0);
                          pUVar7 = (__this->fields)._items;
                          if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) break;
                          uVar10 = (uint)pUVar7->max_length;
                          if (uVar10 <= uVar11) goto label_05e8bf83;
                          local_108 = UVar30.fields.m_Width;
                          if (pUVar7->m_Items[uVar11] == (UnityEngine_RectTransform_o *)0x0) break;
                          UVar34.fields.x = local_108 + UVar30.fields.m_XMin;
                          UVar34.fields.y = fVar14;
                          UVar34.fields.z = 0.0;
                          UVar34 = UnityEngine_Transform__TransformPoint
                                             ((UnityEngine_Transform_o *)pUVar7->m_Items[uVar11],UVar34,
                                              (MethodInfo *)0x0);
                          uVar8 = extraout_RAX;
                          if (Il2CppMethodInitialized_07548890 == 0) {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                            Il2CppMethodInitialized_07548890 = 1;
                            uVar8 = extraout_RAX_00;
                          }
                          uVar9 = CONCAT71((int7)((ulong)uVar8 >> 8),1);
                          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                            uVar9 = (ulong)Il2CppMethodInitialized_07548890;
                          }
                          uVar6 = (undefined4)uVar9;
                          local_98 = UVar33.fields.x;
                          fStack_94 = UVar33.fields.y;
                          fVar14 = UVar33.fields.z * local_70.fields.m02 +
                                   fStack_94 * local_70.fields.m01 + local_70.fields.m00 * local_98 +
                                   local_70.fields.m03;
                          auVar28._0_4_ = (local_a8 + local_b8) - fVar14;
                          auVar28._4_4_ = fVar14 - local_b8;
                          auVar28._8_4_ = (fStack_a0 + fStack_b0) - local_b8;
                          auVar28._12_4_ = (fStack_9c + fStack_ac) - local_b8;
                          auVar26 = divps(auVar28,_DAT_01009340);
                          auVar22 = minps(_DAT_01005870,auVar26);
                          fVar14 = (float)(-(uint)(0.0 <= auVar26._0_4_) & auVar22._0_4_);
                          local_88 = (float)(-(uint)(0.0 <= auVar26._4_4_) & auVar22._4_4_);
                          iVar12 = -(uint)(0.5 < fVar14);
                          iVar13 = -(uint)(0.5 < local_88);
                          auVar17._4_4_ = iVar13;
                          auVar17._0_4_ = iVar12;
                          auVar17._8_4_ = iVar13;
                          auVar17._12_4_ = iVar13;
                          auVar16._8_8_ = auVar17._8_8_;
                          auVar16._4_4_ = iVar12;
                          auVar16._0_4_ = iVar12;
                          uVar10 = movmskpd(uVar10,auVar16);
                          if ((uVar10 & 2) == 0) {
                            local_88 = local_88 * 0.5;
                            if ((uVar10 & 1) == 0) goto label_05e8bcf7;
label_05e8bcaf:
                            fVar14 = (fVar14 + -0.5) * 1.5 + 0.25;
                          }
                          else {
                            local_88 = (local_88 + -0.5) * 1.5 + 0.25;
                            if ((uVar10 & 1) != 0) goto label_05e8bcaf;
label_05e8bcf7:
                            fVar14 = fVar14 * 0.5;
                          }
                          if ((uVar9 & 1) == 0) {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                            Il2CppMethodInitialized_07548890 = 1;
                            uVar6 = extraout_EAX;
                          }
                          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                            uVar6 = extraout_EAX_00;
                          }
                          local_c8 = UVar34.fields.x;
                          fStack_c4 = UVar34.fields.y;
                          fVar27 = UVar34.fields.z * local_70.fields.m02 +
                                   fStack_c4 * local_70.fields.m01 + local_70.fields.m00 * local_c8 +
                                   local_70.fields.m03;
                          auVar25._0_4_ = (local_a8 + local_b8) - fVar27;
                          auVar25._4_4_ = fVar27 - local_b8;
                          auVar25._8_4_ = (fStack_a0 + fStack_b0) - local_b8;
                          auVar25._12_4_ = (fStack_9c + fStack_ac) - local_b8;
                          auVar26 = divps(auVar25,_DAT_01009340);
                          auVar22 = minps(_DAT_01005870,auVar26);
                          fVar27 = (float)(-(uint)(0.0 <= auVar26._0_4_) & auVar22._0_4_);
                          fVar29 = (float)(-(uint)(0.0 <= auVar26._4_4_) & auVar22._4_4_);
                          iVar12 = -(uint)(0.5 < fVar27);
                          iVar13 = -(uint)(0.5 < fVar29);
                          auVar19._4_4_ = iVar13;
                          auVar19._0_4_ = iVar12;
                          auVar19._8_4_ = iVar13;
                          auVar19._12_4_ = iVar13;
                          auVar18._8_8_ = auVar19._8_8_;
                          auVar18._4_4_ = iVar12;
                          auVar18._0_4_ = iVar12;
                          uVar10 = movmskpd(uVar6,auVar18);
                          if ((uVar10 & 2) == 0) {
                            fVar29 = fVar29 * 0.5;
                            if ((uVar10 & 1) == 0) goto label_05e8bdee;
label_05e8bdb8:
                            fVar27 = (fVar27 + -0.5) * 1.5 + 0.25;
                          }
                          else {
                            fVar29 = (fVar29 + -0.5) * 1.5 + 0.25;
                            if ((uVar10 & 1) != 0) goto label_05e8bdb8;
label_05e8bdee:
                            fVar27 = fVar27 * 0.5;
                          }
                          pUVar4 = (__this->fields)._itemFades;
                          if (pUVar4 == (UnityEngine_CanvasGroup_array *)0x0) break;
                          if ((uint)pUVar4->max_length <= uVar11) {
label_05e8bf83:
                            ThrowIndexOutOfRangeException();
                          }
                          if (pUVar4->m_Items[uVar11] == (UnityEngine_CanvasGroup_o *)0x0) break;
                          fVar15 = UnityEngine_CanvasGroup__get_alpha
                                             (pUVar4->m_Items[uVar11],(MethodInfo *)0x0);
                          if (Il2CppMethodInitialized_0753e7b4 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                            Il2CppMethodInitialized_0753e7b4 = '\x01';
                          }
                          fVar27 = (((fVar27 + -1.0) * local_ec + 1.0) * ((fVar29 + -1.0) * local_f0 + 1.0) +
                                   ((fVar14 + -1.0) * local_ec + 1.0) * ((local_88 + -1.0) * local_f0 + 1.0))
                                   * 0.5;
                          fVar14 = ABS(fVar15);
                          if (ABS(fVar15) <= ABS(fVar27)) {
                            fVar14 = ABS(fVar27);
                          }
                          fVar20 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
                          fVar29 = fVar14 * 1e-06;
                          if (fVar14 * 1e-06 <= fVar20) {
                            fVar29 = fVar20;
                          }
                          if (fVar29 <= ABS(fVar27 - fVar15)) {
                            pUVar4 = (__this->fields)._itemFades;
                            if (pUVar4 == (UnityEngine_CanvasGroup_array *)0x0) break;
                            if ((uint)pUVar4->max_length <= uVar11) goto label_05e8bf83;
                            if (pUVar4->m_Items[uVar11] == (UnityEngine_CanvasGroup_o *)0x0) break;
                            UnityEngine_CanvasGroup__set_alpha
                                      (pUVar4->m_Items[uVar11],fVar27,(MethodInfo *)0x0);
                          }
                          pUVar4 = (__this->fields)._itemFades;
                          if (pUVar4 == (UnityEngine_CanvasGroup_array *)0x0) break;
                          if ((uint)pUVar4->max_length <= uVar11) goto label_05e8bf83;
                          if (pUVar4->m_Items[uVar11] == (UnityEngine_CanvasGroup_o *)0x0) break;
                          UnityEngine_CanvasGroup__set_blocksRaycasts
                                    (pUVar4->m_Items[uVar11],0.01 < fVar27,(MethodInfo *)0x0);
                        }
label_05e8ba40:
                        uVar11 = uVar11 + 1;
                        pUVar7 = (__this->fields)._items;
                      } while (pUVar7 != (UnityEngine_RectTransform_array *)0x0);
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
// 0x5e8c4c0

float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__VisibilityAt
                (float position,UnityEngine_Rect_o viewport,float leftOpacity,float rightOpacity,
                MethodInfo *method)

{
  float in_XMM0_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined4 in_XMM3_Db;
  undefined4 in_XMM4_Db;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  
  if (Il2CppMethodInitialized_07548890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07548890 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  auVar3._0_4_ = position - viewport.fields.m_XMin;
  auVar3._4_4_ = (viewport.fields.m_Width + viewport.fields.m_XMin) - position;
  auVar3._8_4_ = in_XMM0_Db - in_XMM1_Dc;
  auVar3._12_4_ = (viewport.fields.m_Height + viewport.fields.m_YMin) - in_XMM1_Dd;
  auVar3 = divps(auVar3,_DAT_01009340);
  auVar1 = minps(_DAT_01005870,auVar3);
  fVar2 = (float)(-(uint)(0.0 <= auVar3._0_4_) & auVar1._0_4_);
  fVar4 = (float)(-(uint)(0.0 <= auVar3._4_4_) & auVar1._4_4_);
  auVar1._4_4_ = rightOpacity;
  auVar1._0_4_ = leftOpacity;
  auVar1._8_4_ = in_XMM3_Db;
  auVar1._12_4_ = in_XMM4_Db;
  auVar1 = minps(_DAT_01005870,auVar1);
  return (((float)(~-(uint)(0.5 < fVar4) & (uint)(fVar4 * 0.5) |
                  (uint)((fVar4 + -0.5) * 1.5 + 0.25) & -(uint)(0.5 < fVar4)) + -1.0) *
          (float)(auVar1._4_4_ & -(uint)(0.0 <= rightOpacity)) + g_data_01005870._4_4_) *
         (((float)(~-(uint)(0.5 < fVar2) & (uint)(fVar2 * 0.5) |
                  (uint)((fVar2 + -0.5) * 1.5 + 0.25) & -(uint)(0.5 < fVar2)) + -1.0) *
          (float)(auVar1._0_4_ & -(uint)(0.0 <= leftOpacity)) + (float)g_data_01005870);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$EdgeVisibility
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__EdgeVisibility (float distance, const MethodInfo* method);
// 0x5e8c5f0

float Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__EdgeVisibility(float distance,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = distance / 160.0;
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  fVar2 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
  return (float)(-(uint)(0.5 < fVar2) & (uint)((fVar2 + -0.5) * 1.5 + 0.25) |
                ~-(uint)(0.5 < fVar2) & (uint)(fVar2 * 0.5));
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* __this, const MethodInfo* method);
// 0x5e8c650

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


