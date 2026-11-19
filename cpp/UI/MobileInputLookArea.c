// Type: UI.MobileInputLookArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputLookArea.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputLookArea$$Awake
// il2cpp: void UI_MobileInputLookArea__Awake (UI_MobileInputLookArea_o* __this, const MethodInfo* method);
// 0x5c70050

void UI_MobileInputLookArea__Awake(UI_MobileInputLookArea_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if (Il2CppMethodInitialized_075478f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_075478f3 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._rectTransform = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rectTransform);
  return;
}


// UI.MobileInputLookArea$$OnEnable
// il2cpp: void UI_MobileInputLookArea__OnEnable (UI_MobileInputLookArea_o* __this, const MethodInfo* method);
// 0x5c700a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c700d2: jmp 0x5c701d0

void UI_MobileInputLookArea__OnEnable(UI_MobileInputLookArea_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_List_MobileInputLookArea__o *pSVar4;
  UI_MobileInputLookArea_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_075478f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    Il2CppMethodInitialized_075478f4 = '\x01';
    uVar2 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    pSVar4 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
  }
  else {
    pSVar4 = *(System_Collections_Generic_List_MobileInputLookArea__o **)
              ((Il2CppClass *)TypeInfo_UI_MobileInputLookArea)->static_fields;
  }
  if (pSVar4 != (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) {
    bVar7 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this,
                       (MethodInfo_395D6D0 *)
                       MethodInfo_System_Collections_Generic_List_MobileInputLookArea_Contains);
    if (bVar7) {
      return;
    }
    if ((TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    }
    pMVar6 = MethodInfo_System_Collections_Generic_List_MobileInputLookArea_Add;
    pSVar4 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
    if (pSVar4 != (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar4->fields)._items;
      if (pUVar5 != (UI_MobileInputLookArea_array *)0x0) {
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pUVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pUVar5->m_Items[(int)uVar3] = __this;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLookArea$$Setup
// il2cpp: void UI_MobileInputLookArea__Setup (UI_MobileInputLookArea_o* __this, float sensitivity, const MethodInfo* method);
// 0x5c701e0

void UI_MobileInputLookArea__Setup(UI_MobileInputLookArea_o *__this,float sensitivity,MethodInfo *method)

{
  (__this->fields)._sensitivity = sensitivity;
  return;
}


// UI.MobileInputLookArea$$OnDisable
// il2cpp: void UI_MobileInputLookArea__OnDisable (UI_MobileInputLookArea_o* __this, const MethodInfo* method);
// 0x5c701f0

void UI_MobileInputLookArea__OnDisable(UI_MobileInputLookArea_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_MobileInputLookArea__o *__this_00;
  UnityEngine_Vector2_c *pUVar2;
  
  if (Il2CppMethodInitialized_075478f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    Il2CppMethodInitialized_075478f5 = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    __this_00 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_MobileInputLookArea__o **)
                 ((Il2CppClass *)TypeInfo_UI_MobileInputLookArea)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_MobileInputLookArea_Remove);
  (__this->fields)._pointerId = -0x80000000;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector2;
  (__this->fields)._lastScreenPosition.fields =
       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  (__this->fields)._lookVelocity.fields = (pUVar2->static_fields->zeroVector).fields;
  (__this->fields)._pressed = false;
  return;
}


// UI.MobileInputLookArea$$Update
// il2cpp: void UI_MobileInputLookArea__Update (UI_MobileInputLookArea_o* __this, const MethodInfo* method);
// 0x5c70350

void UI_MobileInputLookArea__Update(UI_MobileInputLookArea_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields local_10;
  
  local_10.x = 0.0;
  local_10.y = 0.0;
  if ((__this->fields)._pressed != false) {
    method_00 = (MethodInfo *)&local_10;
    bVar2 = Utility_MobilePlatformUtility__TryGetHeldPointerPosition
                      ((__this->fields)._pointerId,(UnityEngine_Vector2_o *)method_00,(MethodInfo *)0x0);
    if (!bVar2) {
      (__this->fields)._pointerId = -0x80000000;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      pUVar1 = TypeInfo_UnityEngine_Vector2;
      (__this->fields)._lastScreenPosition.fields =
           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      (__this->fields)._lookVelocity.fields = (pUVar1->static_fields->zeroVector).fields;
      (__this->fields)._pressed = false;
      return;
    }
    UI_MobileInputLookArea__SetInputFromScreenPosition(__this,(UnityEngine_Vector2_o)local_10,method_00);
  }
  return;
}


// UI.MobileInputLookArea$$OnInitializePotentialDrag
// il2cpp: void UI_MobileInputLookArea__OnInitializePotentialDrag (UI_MobileInputLookArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70530

void UI_MobileInputLookArea__OnInitializePotentialDrag
               (UI_MobileInputLookArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (eventData->fields)._useDragThreshold_k__BackingField = false;
  return;
}


// UI.MobileInputLookArea$$OnPointerDown
// il2cpp: void UI_MobileInputLookArea__OnPointerDown (UI_MobileInputLookArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70550

void UI_MobileInputLookArea__OnPointerDown
               (UI_MobileInputLookArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._pressed != false) {
    return;
  }
  UVar1 = (eventData->fields)._position_k__BackingField.fields;
  (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
  (__this->fields)._lastScreenPosition.fields = UVar1;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  (__this->fields)._lookVelocity.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  (__this->fields)._pressed = true;
  return;
}


// UI.MobileInputLookArea$$OnDrag
// il2cpp: void UI_MobileInputLookArea__OnDrag (UI_MobileInputLookArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70610

void UI_MobileInputLookArea__OnDrag
               (UI_MobileInputLookArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  return;
}


// UI.MobileInputLookArea$$OnPointerUp
// il2cpp: void UI_MobileInputLookArea__OnPointerUp (UI_MobileInputLookArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70620

void UI_MobileInputLookArea__OnPointerUp
               (UI_MobileInputLookArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((eventData->fields)._pointerId_k__BackingField == (__this->fields)._pointerId) {
    (__this->fields)._pointerId = -0x80000000;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector2;
    (__this->fields)._lastScreenPosition.fields =
         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    (__this->fields)._lookVelocity.fields = (pUVar1->static_fields->zeroVector).fields;
    (__this->fields)._pressed = false;
  }
  return;
}


// UI.MobileInputLookArea$$ForwardPointerDown
// il2cpp: void UI_MobileInputLookArea__ForwardPointerDown (UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70690

void UI_MobileInputLookArea__ForwardPointerDown
               (UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  UnityEngine_Camera_o *eventCamera;
  UI_MobileInputLookArea_o *x;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f6 = '\x01';
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_05c707a0:
    ThrowNullReferenceException();
  }
  UVar1 = (eventData->fields)._position_k__BackingField.fields;
  method_00 = (MethodInfo *)0x0;
  eventCamera = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
  }
  x = UI_MobileInputLookArea__GetLookAreaAt((UnityEngine_Vector2_o)UVar1,eventCamera,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (UI_MobileInputLookArea_o *)0x0) goto label_05c707a0;
    if ((x->fields)._pressed == false) {
      UVar1 = (eventData->fields)._position_k__BackingField.fields;
      (x->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
      (x->fields)._lastScreenPosition.fields = UVar1;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      (x->fields)._lookVelocity.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      (x->fields)._pressed = true;
      return;
    }
  }
  return;
}


// UI.MobileInputLookArea$$ForwardPointerUp
// il2cpp: void UI_MobileInputLookArea__ForwardPointerUp (UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70910

void UI_MobileInputLookArea__ForwardPointerUp
               (UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t pointerId;
  UnityEngine_Vector2_c *pUVar1;
  bool bVar2;
  UI_MobileInputLookArea_o *x;
  
  if (Il2CppMethodInitialized_075478f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f7 = '\x01';
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_05c709ed:
    ThrowNullReferenceException();
  }
  pointerId = (eventData->fields)._pointerId_k__BackingField;
  if ((TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
  }
  x = UI_MobileInputLookArea__GetLookAreaForPointer(pointerId,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (UI_MobileInputLookArea_o *)0x0) goto label_05c709ed;
    (x->fields)._pointerId = -0x80000000;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector2;
    (x->fields)._lastScreenPosition.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    (x->fields)._lookVelocity.fields = (pUVar1->static_fields->zeroVector).fields;
    (x->fields)._pressed = false;
  }
  return;
}


// UI.MobileInputLookArea$$GetLookAreaAt
// il2cpp: UI_MobileInputLookArea_o* UI_MobileInputLookArea__GetLookAreaAt (UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
// 0x5c707b0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c707f0: jmp 0x5c70905
// asm:   0x5c70865: lea r12, [rip + 0x1625274]  ; MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Item
// asm:   0x5c7086c: lea r13, [rip + 0x160ab7d]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c70873: jmp 0x5c70884
// asm:   0x5c70880: dec ebp
// asm:   0x5c70882: js 0x5c708f1
// asm:   0x5c708ef: jmp 0x5c708f3

UI_MobileInputLookArea_o *
UI_MobileInputLookArea__GetLookAreaAt
          (UnityEngine_Vector2_o screenPosition,UnityEngine_Camera_o *eventCamera,MethodInfo *method)

{
  uint32_t uVar1;
  int index;
  System_Collections_Generic_List_MobileInputLookArea__o *pSVar2;
  bool bVar3;
  UI_MobileInputLookArea_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f8 = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    pSVar2 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_MobileInputLookArea__o **)
              ((Il2CppClass *)TypeInfo_UI_MobileInputLookArea)->static_fields;
  }
  if (pSVar2 != (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) {
    index = (pSVar2->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return (UI_MobileInputLookArea_o *)0x0;
      }
      if ((((Il2CppClass *)TypeInfo_UI_MobileInputLookArea)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
      }
      pSVar2 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
      if (pSVar2 == (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) break;
      __this = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this == (UI_MobileInputLookArea_o *)0x0) break;
        bVar3 = UI_MobileInputLookArea__IsScreenPointInside(__this,screenPosition,eventCamera,method_00);
        if (bVar3) {
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLookArea$$GetLookAreaForPointer
// il2cpp: UI_MobileInputLookArea_o* UI_MobileInputLookArea__GetLookAreaForPointer (int32_t pointerId, const MethodInfo* method);
// 0x5c70a00
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c70a39: jmp 0x5c70b3e
// asm:   0x5c70aae: lea r12, [rip + 0x162502b]  ; MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Item
// asm:   0x5c70ab5: lea r13, [rip + 0x160a934]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c70abc: jmp 0x5c70ac4
// asm:   0x5c70ac0: dec ebp
// asm:   0x5c70ac2: js 0x5c70b2a
// asm:   0x5c70b28: jmp 0x5c70b2c

UI_MobileInputLookArea_o * UI_MobileInputLookArea__GetLookAreaForPointer(int32_t pointerId,MethodInfo *method)

{
  uint32_t uVar1;
  int index;
  System_Collections_Generic_List_MobileInputLookArea__o *pSVar2;
  bool bVar3;
  UI_MobileInputLookArea_o *x;
  
  if (Il2CppMethodInitialized_075478f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f9 = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    pSVar2 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_MobileInputLookArea__o **)
              ((Il2CppClass *)TypeInfo_UI_MobileInputLookArea)->static_fields;
  }
  if (pSVar2 != (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) {
    index = (pSVar2->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return (UI_MobileInputLookArea_o *)0x0;
      }
      if ((((Il2CppClass *)TypeInfo_UI_MobileInputLookArea)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
      }
      pSVar2 = TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas;
      if (pSVar2 == (System_Collections_Generic_List_MobileInputLookArea__o *)0x0) break;
      x = System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar2,index,
                     (MethodInfo_395CF20 *)
                     MethodInfo_System_Collections_Generic_List_MobileInputLookArea_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (UI_MobileInputLookArea_o *)0x0) break;
        if (((x->fields)._pressed != false) && ((x->fields)._pointerId == pointerId)) {
          return x;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLookArea$$IsScreenPointInside
// il2cpp: bool UI_MobileInputLookArea__IsScreenPointInside (UI_MobileInputLookArea_o* __this, UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
// 0x5c70b50

bool UI_MobileInputLookArea__IsScreenPointInside
               (UI_MobileInputLookArea_o *__this,UnityEngine_Vector2_o screenPosition,
               UnityEngine_Camera_o *eventCamera,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_075478fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_075478fa = '\x01';
  }
  pUVar1 = (__this->fields)._rectTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._rectTransform;
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_6ccb790
                        (pUVar1,screenPosition,eventCamera,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// UI.MobileInputLookArea$$BeginLook
// il2cpp: void UI_MobileInputLookArea__BeginLook (UI_MobileInputLookArea_o* __this, int32_t pointerId, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c705c0

void UI_MobileInputLookArea__BeginLook
               (UI_MobileInputLookArea_o *__this,int32_t pointerId,UnityEngine_Vector2_o screenPosition,
               MethodInfo *method)

{
  if ((__this->fields)._pressed != false) {
    return;
  }
  (__this->fields)._pointerId = pointerId;
  (__this->fields)._lastScreenPosition.fields = screenPosition.fields;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  (__this->fields)._lookVelocity.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  (__this->fields)._pressed = true;
  return;
}


// UI.MobileInputLookArea$$SetInputFromScreenPosition
// il2cpp: void UI_MobileInputLookArea__SetInputFromScreenPosition (UI_MobileInputLookArea_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c703f0

void UI_MobileInputLookArea__SetInputFromScreenPosition
               (UI_MobileInputLookArea_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UnityEngine_Vector2_o delta;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  
  if (Il2CppMethodInitialized_075478fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075478fb = '\x01';
  }
  UVar1 = (__this->fields)._lastScreenPosition.fields;
  if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  fVar4 = Utility_MobileFullscreenUtility__GetResolutionInputScale((MethodInfo *)0x0);
  local_18 = screenPosition.fields.x;
  fStack_14 = screenPosition.fields.y;
  (__this->fields)._lastScreenPosition.fields.x = local_18;
  (__this->fields)._lastScreenPosition.fields.y = fStack_14;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar2 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).MobileLookStabilization, pSVar3 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_28 = UVar1.x;
  fStack_24 = UVar1.y;
  UVar1 = (__this->fields)._lookVelocity.fields;
  fVar5 = 1.0 - (pSVar3->fields)._value;
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
  fVar5 = UVar1.x;
  fVar7 = UVar1.y;
  fVar5 = fVar6 * (fVar4 * (local_18 - local_28) - fVar5) + fVar5;
  fVar7 = fVar6 * (fVar4 * (fStack_14 - fStack_24) - fVar7) + fVar7;
  UVar1.y = fVar7;
  UVar1.x = fVar5;
  (__this->fields)._lookVelocity.fields = UVar1;
  fVar4 = (__this->fields)._sensitivity;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  delta.fields.y = fVar4 * fVar7;
  delta.fields.x = fVar4 * fVar5;
  Settings_MobileInputBridge__AddLookDelta(delta,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLookArea$$ResetLook
// il2cpp: void UI_MobileInputLookArea__ResetLook (UI_MobileInputLookArea_o* __this, const MethodInfo* method);
// 0x5c702f0

void UI_MobileInputLookArea__ResetLook(UI_MobileInputLookArea_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  
  (__this->fields)._pointerId = -0x80000000;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector2;
  (__this->fields)._lastScreenPosition.fields =
       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  (__this->fields)._lookVelocity.fields = (pUVar1->static_fields->zeroVector).fields;
  (__this->fields)._pressed = false;
  return;
}


// UI.MobileInputLookArea$$.ctor
// il2cpp: void UI_MobileInputLookArea___ctor (UI_MobileInputLookArea_o* __this, const MethodInfo* method);
// 0x5c70c20

void UI_MobileInputLookArea___ctor(UI_MobileInputLookArea_o *__this,MethodInfo *method)

{
  (__this->fields)._sensitivity = 1.0;
  (__this->fields)._pointerId = -0x80000000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputLookArea$$.cctor
// il2cpp: void UI_MobileInputLookArea___cctor (const MethodInfo* method);
// 0x5c70c40

void UI_MobileInputLookArea___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_MobileInputLookArea__o *__this;
  
  if (Il2CppMethodInitialized_075478fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLookArea_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MobileInputLookArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    Il2CppMethodInitialized_075478fc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputLookArea);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputLookArea_ctor);
  TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputLookArea->static_fields->ActiveLookAreas);
  return;
}


