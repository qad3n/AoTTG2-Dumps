// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIBinding.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIBinding$$Setup
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* definition, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x5343c90

void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,
               Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *definition,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_Action_string__c *pSVar2;
  System_Action_string__o *__this_00;
  System_Action_string__o *pSVar3;
  System_Delegate_o *obj;
  System_Action_string__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075428c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
    Il2CppMethodInitialized_075428c6 = '\x01';
  }
  (__this->fields)._definition = definition;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._definition);
  (__this->fields)._enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enter);
  (__this->fields)._exit = exit;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._exit);
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  pGVar1 = (__this->fields)._state;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    if (Il2CppMethodInitialized_075428d4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
      Il2CppMethodInitialized_075428d4 = '\x01';
    }
    a = (pGVar1->fields).Changed;
    do {
      obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_System_Action_string;
      state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      if (obj != (System_Delegate_o *)0x0) {
        state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)
                il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
        if ((MethodInfo *)state == (MethodInfo *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar2);
        }
      }
      pSVar3 = il2cpp_codegen_interlocked_compare_exchange_ref(&(pGVar1->fields).Changed,state,a);
      bVar4 = pSVar3 != a;
      a = pSVar3;
    } while (bVar4);
  }
  Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,(MethodInfo *)state);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x5344700

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_Action_string__c *pSVar2;
  System_Action_string__o *__this_00;
  System_Action_string__o *pSVar3;
  System_Delegate_o *obj;
  Il2CppObject *value;
  System_Action_string__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075428c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
    Il2CppMethodInitialized_075428c7 = '\x01';
  }
  t = (__this->fields)._visibilityTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields)._state;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    if (Il2CppMethodInitialized_075428d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
      Il2CppMethodInitialized_075428d5 = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      obj = System_Delegate__Remove
                      ((System_Delegate_o *)source,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_System_Action_string;
      value = (Il2CppObject *)0x0;
      if (obj != (System_Delegate_o *)0x0) {
        value = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
        if (value == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar2);
        }
      }
      pSVar3 = il2cpp_codegen_interlocked_compare_exchange_ref(&(pGVar1->fields).Changed,value,source);
      bVar4 = pSVar3 != source;
      source = pSVar3;
    } while (bVar4);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, System_String_o* key, const MethodInfo* method);
// 0x53448b0

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  System_Action_string__c *pSVar3;
  bool bVar4;
  System_Action_string__o *__this_00;
  System_Action_string__o *pSVar5;
  System_Delegate_o *obj;
  Il2CppObject *value;
  System_Action_string__o *source;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075428c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075428c8 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar1 = (__this->fields)._state;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged,
                 (MethodInfo_4A81BE0 *)0x0);
      if (Il2CppMethodInitialized_075428d5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
        Il2CppMethodInitialized_075428d5 = '\x01';
      }
      source = (pGVar1->fields).Changed;
      do {
        obj = System_Delegate__Remove
                        ((System_Delegate_o *)source,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
        pSVar3 = TypeInfo_System_Action_string;
        value = (Il2CppObject *)0x0;
        if ((obj != (System_Delegate_o *)0x0) &&
           (value = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string),
           value == (Il2CppObject *)0x0)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar3);
        }
        pSVar5 = il2cpp_codegen_interlocked_compare_exchange_ref(&(pGVar1->fields).Changed,value,source);
        bVar4 = pSVar5 != source;
        source = pSVar5;
      } while (bVar4);
    }
  }
  else {
    pGVar2 = (__this->fields)._definition;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      method_00 = (MethodInfo *)(pGVar2->fields).text;
      bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
      if (!bVar4) {
        pGVar2 = (__this->fields)._definition;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
label_05344a87:
          ThrowNullReferenceException();
        }
        method_00 = (MethodInfo *)(pGVar2->fields).sprite;
        bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
        if (!bVar4) {
          pGVar2 = (__this->fields)._definition;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05344a87;
          method_00 = (MethodInfo *)(pGVar2->fields).value;
          bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
          if (!bVar4) {
            pGVar2 = (__this->fields)._definition;
            if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05344a87;
            method_00 = (MethodInfo *)(pGVar2->fields).visible;
            bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
            if (!bVar4) {
              pGVar2 = (__this->fields)._definition;
              if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05344a87;
              method_00 = (MethodInfo *)(pGVar2->fields).enabled;
              bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
              if (!bVar4) {
                return;
              }
            }
          }
        }
      }
      Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$Refresh
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x5343e80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53440a0: jmp 0x53446ef
// asm:   0x5344633: jmp 0x53446ef

void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_UI_Selectable_o *__this_01;
  TMPro_TMP_InputField_o *__this_02;
  bool bVar4;
  bool bVar5;
  TMPro_TextMeshProUGUI_o *text;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *root;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Object_o *y;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *slider;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar8;
  UnityEngine_UI_Toggle_o *pUVar9;
  System_Globalization_CultureInfo_o *provider;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this_04;
  System_Object_array *pSVar10;
  ulong uVar11;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  ulong uVar12;
  MethodInfo *pMVar13;
  MethodInfo *in_R8;
  float local_54;
  TMPro_TMP_InputField_o *local_50;
  UnityEngine_UI_Toggle_o *local_48;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075428c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgSliderControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Image)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Toggle_71a4df8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgSliderControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchToggleFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_075428c9 = '\x01';
  }
  local_54 = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pGVar2 = (__this->fields)._definition;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    return;
  }
  if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  bVar4 = System_String__IsNullOrEmpty((pGVar2->fields).text,(MethodInfo *)0x0);
  if (!bVar4) {
    text = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) {
      text = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B09D0 *)
                        MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pGVar2 = (__this->fields)._definition;
      if ((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
         (pGVar3 = (__this->fields)._state, pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0))
      goto label_053446ef;
      pSVar6 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (pGVar3,(pGVar2->fields).text,(System_String_o *)0x0,in_RCX);
      if (pSVar6 == (System_String_o *)0x0) {
        if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053446ef;
        pSVar6 = (*(text->klass->vtable)._65_get_text.methodPtr)
                           (text,(text->klass->vtable)._65_get_text.method);
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
        pSVar6 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar6,false,(MethodInfo *)0x0);
        if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053446ef;
      }
      pSVar7 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method)
      ;
      bVar4 = System_String__op_Inequality(pSVar7,pSVar6,(MethodInfo *)0x0);
      if (bVar4) {
        (*(text->klass->vtable)._66_set_text.methodPtr)(text,pSVar6,(text->klass->vtable)._66_set_text.method)
        ;
        pMVar13 = (MethodInfo *)0x0;
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root,pMVar13);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight(__this,text,method_00);
      }
    }
  }
  pGVar2 = (__this->fields)._definition;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_053446ef;
  bVar4 = System_String__IsNullOrEmpty((pGVar2->fields).sprite,(MethodInfo *)0x0);
  if (!bVar4) {
    __this_03 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    if (__this_03 == (UnityEngine_UI_Image_o *)0x0) {
      __this_03 = UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_34B0B60 *)
                             MethodInfo_UnityEngine_Component_GetComponentInChildren_Image);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pGVar2 = (__this->fields)._definition;
      if ((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
         (pGVar3 = (__this->fields)._state, pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0))
      goto label_053446ef;
      pSVar6 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (pGVar3,(pGVar2->fields).sprite,
                          (System_String_o *)(*(MethodInfo **)(g_data_07556758 + 0xb8))->methodPointer,
                          *(MethodInfo **)(g_data_07556758 + 0xb8));
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      y = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar6,(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_UI_Image_o *)0x0) goto label_053446ef;
      x = (UnityEngine_Object_o *)(__this_03->fields).m_Sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
      if (bVar4) {
        UnityEngine_UI_Image__set_sprite(__this_03,(UnityEngine_Sprite_o *)y,(MethodInfo *)0x0);
      }
    }
  }
  pGVar2 = (__this->fields)._definition;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_053446ef;
  bVar4 = System_String__IsNullOrEmpty((pGVar2->fields).value,(MethodInfo *)0x0);
  if (!bVar4) {
    slider = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AottgSliderControl
                       );
    if (slider == (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
      slider = UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)__this,true,
                          (MethodInfo_34B0B60 *)
                          MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgSliderControl);
    }
    pGVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AottgChoiceControl
                       );
    if (pGVar8 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      pGVar8 = UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)__this,true,
                          (MethodInfo_34B0B60 *)
                          MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgChoiceControl);
    }
    local_50 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_InputField);
    if (local_50 == (TMPro_TMP_InputField_o *)0x0) {
      local_50 = UnityEngine_Component__GetComponentInChildren_object_
                           ((UnityEngine_Component_o *)__this,true,
                            (MethodInfo_34B0B60 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_InputField);
    }
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    if (pUVar9 == (UnityEngine_UI_Toggle_o *)0x0) {
      pUVar9 = UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)__this,true,
                          (MethodInfo_34B0B60 *)
                          MethodInfo_UnityEngine_Component_GetComponentInChildren_Toggle_71a4df8);
    }
    pGVar2 = (__this->fields)._definition;
    local_40 = pGVar8;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_053446ef;
    pGVar3 = (__this->fields)._state;
    pSVar6 = (pGVar2->fields).value;
    local_48 = pUVar9;
    pSVar7 = Gisketch_Aottg2UI_State_GisketchUIBinding__CurrentValue(slider,pGVar8,local_50,pUVar9,in_R8);
    if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_053446ef;
    if (Il2CppMethodInitialized_075428d9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      Il2CppMethodInitialized_075428d9 = '\x01';
    }
    local_38 = (System_String_o *)0x0;
    bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (!bVar4) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar3->fields)._values;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053446ef;
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)pSVar6,(Il2CppObject **)&local_38,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      if (bVar4) {
        pSVar7 = local_38;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)slider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar4 = System_Single__TryParse_54d11a0
                        (pSVar7,0xa7,(System_IFormatProvider_o *)provider,&local_54,(MethodInfo *)0x0);
      if (bVar4) {
        if (slider == (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) goto label_053446ef;
        Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify(slider,local_54,(MethodInfo *)0x0)
        ;
        goto label_0534459b;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pGVar8 = local_40;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)local_40,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (pGVar8 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_053446ef;
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify(pGVar8,pSVar7,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      __this_02 = local_50;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)local_50,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (__this_02 == (TMPro_TMP_InputField_o *)0x0) goto label_053446ef;
        TMPro_TMP_InputField__SetTextWithoutNotify(__this_02,pSVar7,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)local_48,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          bVar4 = System_String__op_Equality(pSVar7,"1",(MethodInfo *)0x0);
          bVar5 = true;
          if (!bVar4) {
            bVar5 = System_String__Equals_52ffe30(pSVar7,"true",5,(MethodInfo *)0x0);
          }
          pUVar9 = local_48;
          if (local_48 == (UnityEngine_UI_Toggle_o *)0x0) goto label_053446ef;
          if (bVar5 != (local_48->fields).m_IsOn) {
            UnityEngine_UI_Toggle__SetIsOnWithoutNotify(local_48,bVar5,(MethodInfo *)0x0);
            __this_04 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar9,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_GisketchToggleFeedback);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar4) {
              if (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) goto label_053446ef;
              Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshValue
                        (__this_04,false,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
label_0534459b:
  pGVar2 = (__this->fields)._definition;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    bVar4 = System_String__IsNullOrEmpty((pGVar2->fields).visible,(MethodInfo *)0x0);
    if (!bVar4) {
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility(__this,pMVar13);
    }
    pGVar2 = (__this->fields)._definition;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_053446ef;
    bVar4 = System_String__IsNullOrEmpty((pGVar2->fields).enabled,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)__this,true,
                         (MethodInfo_34B1260 *)
                         MethodInfo_UnityEngine_Component_GetComponentsInChildren_Selectable);
    if (pSVar10 == (System_Object_array *)0x0) goto label_053446ef;
    if (pSVar10->max_length == 0) {
      bVar4 = true;
      pMVar13 = (MethodInfo *)(__this->fields)._definition;
    }
    else {
      if ((int)pSVar10->max_length == 0) goto label_053446f4;
      if (pSVar10->m_Items[0] == (Il2CppObject *)0x0) goto label_053446ef;
      bVar4 = *(char *)&pSVar10->m_Items[0][0xd].monitor != '\0';
      pMVar13 = (MethodInfo *)(__this->fields)._definition;
    }
    if ((pMVar13 != (MethodInfo *)0x0) &&
       (pGVar3 = (__this->fields)._state, pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      bVar4 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (pGVar3,(System_String_o *)pMVar13->parameters,bVar4,pMVar13);
      if ((int)pSVar10->max_length < 1) {
        return;
      }
      uVar11 = pSVar10->max_length & 0xffffffff;
      uVar12 = 0;
      while (uVar12 < uVar11) {
        __this_01 = (UnityEngine_UI_Selectable_o *)pSVar10->m_Items[uVar12];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          if (__this_01 == (UnityEngine_UI_Selectable_o *)0x0) goto label_053446ef;
          if (bVar4 != ((__this_01->fields).m_Interactable != false)) {
            UnityEngine_UI_Selectable__set_interactable(__this_01,bVar4,(MethodInfo *)0x0);
          }
        }
        uVar12 = uVar12 + 1;
        uVar1 = (uint)pSVar10->max_length;
        uVar11 = (ulong)uVar1;
        if ((long)(int)uVar1 <= (long)uVar12) {
          return;
        }
      }
label_053446f4:
      ThrowIndexOutOfRangeException();
    }
  }
label_053446ef:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibility
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x5345720
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534588c: jmp 0x53459e9
// asm:   0x53459b8: jmp 0x5345ac1

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *key;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  bool bVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  DG_Tweening_TweenCallback_o *__this_01;
  DG_Tweening_Tween_o *pDVar6;
  MethodInfo *in_RCX;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_075428ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_RefreshVisibility_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    Il2CppMethodInitialized_075428ca = '\x01';
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05345b44;
  __this_00 = (__this->fields)._state;
  key = (pGVar1->fields).visible;
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
     (bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0),
     __this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) goto label_05345b44;
  bVar3 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this_00,key,bVar3,in_RCX);
  if ((__this->fields)._visibilityInitialized == false) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      (__this->fields)._visibilityInitialized = true;
      (__this->fields)._targetVisible = bVar3;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar5,bVar3,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pMVar7 = (MethodInfo *)0x0;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar5,pMVar7);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar7);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        if (bVar4) {
          return;
        }
        pGVar2 = (__this->fields)._enter;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
          return;
        }
        bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).preset,(MethodInfo *)0x0);
        if (bVar3) {
          return;
        }
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pGVar2 = (__this->fields)._enter;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                           (pUVar5,pGVar2,true,false,(MethodInfo *)0x0);
        (__this->fields)._visibilityTween = pDVar6;
        goto label_05345b32;
      }
    }
    goto label_05345b44;
  }
  if ((__this->fields)._targetVisible == bVar3) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05345b44;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if (bVar3 == bVar4) {
      return;
    }
  }
  (__this->fields)._targetVisible = bVar3;
  targetAddress = &(__this->fields)._visibilityTween;
  pDVar6 = (__this->fields)._visibilityTween;
  if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar6,false,(MethodInfo *)0x0);
  }
  *targetAddress = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (bVar3) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      pMVar7 = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar5,pMVar7);
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar7);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      else {
        bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      if (((!bVar3) ||
          (pGVar2 = (__this->fields)._enter,
          pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) ||
         (bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).preset,(MethodInfo *)0x0), bVar3)) {
        return;
      }
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._enter;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode(pUVar5,pGVar2,true,false,(MethodInfo *)0x0)
      ;
      *targetAddress = pDVar6;
label_05345b32:
      Il2CppCodeGenWriteBarrier(&(__this->fields)._visibilityTween);
      return;
    }
    goto label_05345b44;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar3) goto label_05345a08;
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar3) {
label_05345a08:
      pGVar2 = (__this->fields)._exit;
      if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
         (bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).preset,(MethodInfo *)0x0), !bVar3)) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pGVar2 = (__this->fields)._exit;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                           (pUVar5,pGVar2,false,false,(MethodInfo *)0x0);
        *targetAddress = pDVar6;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pDVar6 = *targetAddress;
        if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
          DG_Tweening_TweenCallback___ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_RefreshVisibility_b__14_0,
                     (MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                    ((Il2CppObject *)pDVar6,__this_01,
                     (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
          return;
        }
      }
    }
  }
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar7);
    return;
  }
label_05345b44:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x5345e60

bool Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  bool bVar1;
  
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibilityLayout
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x5345cf0

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *root;
  UnityEngine_RectTransform_o *rect;
  
  if (Il2CppMethodInitialized_075428cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_075428cb = '\x01';
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
    rect = pUVar3;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar4 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar3 = (UnityEngine_RectTransform_o *)0x0, pUVar4->klass == TypeInfo_UnityEngine_RectTransform)) {
      pUVar3 = pUVar4;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor;
    if (bVar2) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
      }
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
      return;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(pUVar3,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshDescendantButtonWidths
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5345c60

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_GameObject_o *root_00;
  uint uVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075428cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Button);
    Il2CppMethodInitialized_075428cc = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar2 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,true,
                        (MethodInfo_353C0B0 *)MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Button
                       );
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Component_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Component_o *)0x0)
          goto label_05345ce7;
          method_00 = (MethodInfo *)0x0;
          root_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root_00,method_00);
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
label_05345ce7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$CurrentValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIBinding__CurrentValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* slider, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* choice, TMPro_TMP_InputField_o* input, UnityEngine_UI_Toggle_o* toggle, const MethodInfo* method);
// 0x5345570

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIBinding__CurrentValue
          (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *slider,
          Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *choice,TMPro_TMP_InputField_o *input,
          UnityEngine_UI_Toggle_o *toggle,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  float local_2c;
  
  if (Il2CppMethodInitialized_075428cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075428cd = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)slider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (slider != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
      local_2c = (slider->fields)._Value_k__BackingField;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar2 = System_Single__ToString_54d09f0
                         (&local_2c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)choice,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (choice != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        pSVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_Value(choice,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)toggle,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (toggle == (UnityEngine_UI_Toggle_o *)0x0) goto label_05345717;
          if ((toggle->fields).m_IsOn == false) {
            ppSVar3 = &"false";
          }
          else {
            ppSVar3 = &"true";
          }
        }
        else {
          ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
        }
        return *ppSVar3;
      }
      if (input != (TMPro_TMP_InputField_o *)0x0) {
        return (input->fields).m_Text;
      }
    }
  }
label_05345717:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshButtonWidth
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5344b10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53450d8: jmp 0x5345123
// asm:   0x534519f: test rbx, rbx
// asm:   0x53451a2: je 0x53451d2
// asm:   0x53451b7: jmp 0x53451d4

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar2;
  UnityEngine_RectOffset_o *__this;
  bool bVar3;
  char cVar4;
  int32_t iVar5;
  UnityEngine_UI_LayoutElement_o *rootLayout;
  Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *x;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  UnityEngine_UI_RectMask2D_o *x_01;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar8;
  System_String_o *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  int index;
  UnityEngine_RectTransform_o *rect;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o UVar15;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 local_78 [16];
  
  if (Il2CppMethodInitialized_075428ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_71ab0b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_075428ce = '\x01';
  }
  if (root == (UnityEngine_GameObject_o *)0x0) goto label_053451e9;
  rootLayout = UnityEngine_GameObject__GetComponent_object_
                         (root,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  x = UnityEngine_GameObject__GetComponent_object_
                (root,(MethodInfo_353B730 *)
                      MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
  x_00 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                   (root,true,
                    (MethodInfo_353B9A0 *)
                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_HorizontalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rootLayout,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    flex = UnityEngine_GameObject__GetComponent_object_
                     (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    x_01 = UnityEngine_GameObject__GetComponent_object_
                     (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053451e9;
        GVar2 = (flex->fields)._maxWidth.fields;
        if ((GVar2.Unit == 1) && (fVar14 = GVar2.Value, 0.0 < fVar14)) {
          if (rootLayout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_053451e9;
          fVar12 = (*(rootLayout->klass->vtable)._35_get_preferredWidth.methodPtr)
                             (rootLayout,(rootLayout->klass->vtable)._35_get_preferredWidth.method);
          pMVar10 = extraout_RDX;
          if (Il2CppMethodInitialized_0753e7b4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
            Il2CppMethodInitialized_0753e7b4 = '\x01';
            pMVar10 = extraout_RDX_00;
          }
          auVar16._0_4_ = ABS(fVar12);
          auVar16._4_4_ = 0;
          auVar16._8_4_ = extraout_XMM0_Dc & 0x7fffffff;
          auVar16._12_4_ = extraout_XMM0_Dd & 0x7fffffff;
          if (auVar16._0_4_ <= ABS(fVar14)) {
            auVar16._0_4_ = ABS(fVar14);
          }
          fVar13 = auVar16._0_4_ * 1e-06;
          fVar17 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
          if (fVar13 <= fVar17) {
            fVar13 = fVar17;
          }
          if (ABS(fVar14 - fVar12) < fVar13) {
            (*(rootLayout->klass->vtable)._31_get_minWidth.methodPtr)
                      (rootLayout,(rootLayout->klass->vtable)._31_get_minWidth.method);
            cVar4 = il2cpp_runtime_helper_03296c30(0);
            pMVar10 = extraout_RDX_01;
            if (cVar4 != '\0') {
              GVar2 = (flex->fields)._width.fields;
              pMVar10 = (MethodInfo *)0x100000000;
              if ((((((ulong)GVar2 & 0xffffffff00000000) == 0x100000000) &&
                   (((ulong)(flex->fields)._minWidth.fields & 0xffffffff00000000) == 0x100000000)) &&
                  (cVar4 = il2cpp_runtime_helper_03296c30((ulong)(uint)GVar2.Value,0), pMVar10 = extraout_RDX_02, cVar4 != '\0')
                  ) && (cVar4 = il2cpp_runtime_helper_03296c30(0), pMVar10 = extraout_RDX_03, cVar4 != '\0')) {
                return;
              }
            }
          }
          bVar3 = Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth(rootLayout,flex,fVar14,fVar14,pMVar10)
          ;
          if (!bVar3) {
            return;
          }
          pUVar6 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
          }
          goto joined_r0x053451d0;
        }
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((x_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
         (__this = (x_00->fields).m_Padding, __this != (UnityEngine_RectOffset_o *)0x0)) {
        iVar11 = 0;
        iVar5 = UnityEngine_RectOffset__get_horizontal(__this,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          local_78 = ZEXT416((uint)(float)iVar5);
          index = 0;
          do {
            iVar5 = UnityEngine_Transform__get_childCount(pUVar7,(MethodInfo *)0x0);
            if (iVar5 <= index) {
              if (1 < iVar11) {
                local_78._4_4_ = 0;
                local_78._0_4_ = (float)local_78._0_4_ + (float)(iVar11 + -1) * (x_00->fields).m_Spacing;
              }
              uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
              goto joined_r0x05345121;
            }
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
            if (((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar7 = UnityEngine_Transform__GetChild(pUVar7,index,(MethodInfo *)0x0),
                pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
               __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
            bVar3 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
            if (bVar3) {
              pTVar8 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar7,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              iVar11 = iVar11 + 1;
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar3) {
                if (pTVar8 == (TMPro_TextMeshProUGUI_o *)0x0) break;
                (*(pTVar8->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                          (pTVar8,false,false,(pTVar8->klass->vtable)._106_ForceMeshUpdate.method);
                pSVar9 = (*(pTVar8->klass->vtable)._65_get_text.methodPtr)
                                   (pTVar8,(pTVar8->klass->vtable)._65_get_text.method);
                UVar15 = TMPro_TMP_Text__GetPreferredValues_670eff0
                                   ((TMPro_TMP_Text_o *)pTVar8,pSVar9,(MethodInfo *)0x0);
                fVar14 = UVar15.fields.x;
              }
              else {
                pUVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar7,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                fVar14 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(pUVar6,(MethodInfo *)0x0);
              }
              local_78._4_4_ = 0;
              local_78._0_4_ = (float)local_78._0_4_ + fVar14;
            }
            index = index + 1;
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
          } while (pUVar7 != (UnityEngine_Transform_o *)0x0);
        }
      }
      goto label_053451e9;
    }
    pTVar8 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                       (root,true,
                        (MethodInfo_353B9A0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_71ab0b0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar8->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar8,false,false,(pTVar8->klass->vtable)._106_ForceMeshUpdate.method);
          pSVar9 = (*(pTVar8->klass->vtable)._65_get_text.methodPtr)
                             (pTVar8,(pTVar8->klass->vtable)._65_get_text.method);
          UVar15 = TMPro_TMP_Text__GetPreferredValues_670eff0
                             ((TMPro_TMP_Text_o *)pTVar8,pSVar9,(MethodInfo *)0x0);
          if (x != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) {
            local_78._0_4_ = UVar15.fields.x + (x->fields)._HorizontalPadding_k__BackingField;
            uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
joined_r0x05345121:
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              if (x == (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) goto label_053451e9;
              fVar14 = (x->fields)._MinWidthFloor_k__BackingField;
              pMVar10 = extraout_RDX_04;
            }
            else {
              if (rootLayout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_053451e9;
              fVar14 = (*(rootLayout->klass->vtable)._31_get_minWidth.methodPtr)
                                 (rootLayout,(rootLayout->klass->vtable)._31_get_minWidth.method);
              pMVar10 = extraout_RDX_05;
            }
            if (fVar14 <= (float)local_78._0_4_) {
              fVar14 = (float)local_78._0_4_;
            }
            bVar3 = Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth
                              (rootLayout,flex,(float)local_78._0_4_,fVar14,pMVar10);
            if (!bVar3) {
              return;
            }
            pUVar6 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
            }
joined_r0x053451d0:
            if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
              rect = (UnityEngine_RectTransform_o *)0x0;
            }
            else {
              rect = (UnityEngine_RectTransform_o *)0x0;
              if (pUVar6->klass == TypeInfo_UnityEngine_RectTransform) {
                rect = pUVar6;
              }
            }
            UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
            return;
          }
        }
label_053451e9:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$ApplyWidth
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth (UnityEngine_UI_LayoutElement_o* rootLayout, Gilzoide_FlexUi_FlexLayout_o* flex, float preferredWidth, float minWidth, const MethodInfo* method);
// 0x5345e80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5345f5c: xor r14d, r14d
// asm:   0x5345f5f: jmp 0x5345f78

bool Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth
               (UnityEngine_UI_LayoutElement_o *rootLayout,Gilzoide_FlexUi_FlexLayout_o *flex,
               float preferredWidth,float minWidth,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  bool bVar2;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_075428cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_075428cf = '\x01';
  }
  if (rootLayout == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_05346201:
    ThrowNullReferenceException();
  }
  fVar5 = (*(rootLayout->klass->vtable)._35_get_preferredWidth.methodPtr)
                    (rootLayout,(rootLayout->klass->vtable)._35_get_preferredWidth.method);
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar6 = ABS(preferredWidth);
  fVar10 = ABS(fVar5);
  if (ABS(fVar5) <= fVar6) {
    fVar10 = fVar6;
  }
  fVar7 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar8 = fVar10 * 1e-06;
  if (fVar10 * 1e-06 <= fVar7) {
    fVar8 = fVar7;
  }
  bVar4 = fVar8 <= ABS(preferredWidth - fVar5);
  if (bVar4) {
    (*(rootLayout->klass->vtable)._36_set_preferredWidth.methodPtr)
              (rootLayout,preferredWidth,(rootLayout->klass->vtable)._36_set_preferredWidth.method);
  }
  fVar5 = (*(rootLayout->klass->vtable)._31_get_minWidth.methodPtr)
                    (rootLayout,(rootLayout->klass->vtable)._31_get_minWidth.method);
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar8 = ABS(minWidth);
  fVar10 = ABS(fVar5);
  if (ABS(fVar5) <= fVar8) {
    fVar10 = fVar8;
  }
  fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar7 = fVar10 * 1e-06;
  if (fVar10 * 1e-06 <= fVar9) {
    fVar7 = fVar9;
  }
  if (fVar7 <= ABS(minWidth - fVar5)) {
    (*(rootLayout->klass->vtable)._32_set_minWidth.methodPtr)
              (rootLayout,minWidth,(rootLayout->klass->vtable)._32_set_minWidth.method);
  }
  bVar4 = fVar7 <= ABS(minWidth - fVar5) || bVar4;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05346201;
    GVar1 = (flex->fields)._width.fields;
    if (GVar1.Unit != 2) {
      fVar5 = GVar1.Value;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      fVar10 = ABS(fVar5);
      if (fVar10 <= fVar6) {
        fVar10 = fVar6;
      }
      fVar7 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar6 = fVar10 * 1e-06;
      if (fVar10 * 1e-06 <= fVar7) {
        fVar6 = fVar7;
      }
      if (fVar6 <= ABS(preferredWidth - fVar5)) {
        if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        }
        GVar3 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(preferredWidth,(MethodInfo *)0x0);
        Gilzoide_FlexUi_FlexLayout__set_Width(flex,GVar3,(MethodInfo *)0x0);
        bVar4 = true;
      }
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05346201;
    GVar1 = (flex->fields)._minWidth.fields;
    if (GVar1.Unit != 2) {
      fVar5 = GVar1.Value;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      fVar10 = ABS(fVar5);
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
      fVar8 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar6 = fVar10 * 1e-06;
      if (fVar10 * 1e-06 <= fVar8) {
        fVar6 = fVar8;
      }
      if (fVar6 <= ABS(minWidth - fVar5)) {
        if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        }
        GVar3 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(minWidth,(MethodInfo *)0x0);
        Gilzoide_FlexUi_FlexLayout__set_MinWidth(flex,GVar3,(MethodInfo *)0x0);
        bVar4 = true;
      }
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshProfileHoverBioHeight
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, TMPro_TextMeshProUGUI_o* text, const MethodInfo* method);
// 0x53451f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5345318: movss xmm0, dword ptr [rip - 0x4383abc]
// asm:   0x5345320: ucomiss xmm0, xmm1
// asm:   0x5345323: jae 0x5345344
// asm:   0x5345325: jmp 0x53453bf
// asm:   0x53453bb: movaps xmm1, xmmword ptr [rsp]

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,TMPro_TextMeshProUGUI_o *text,
               MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_RectTransform_o *pUVar6;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  float width;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  float local_48;
  
  if (Il2CppMethodInitialized_075428d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-bio");
    Il2CppMethodInitialized_075428d0 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_0534555c;
  pSVar5 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  bVar3 = System_String__op_Inequality(pSVar5,"public-profile-hover-bio",(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0534555c;
  TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)text,5,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
  pUVar6 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)text,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  width = 0.0;
  if (bVar3) {
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_0534555c;
    UVar11 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
    width = UVar11.fields.m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (width <= 1.0) goto label_05345344;
  }
  else {
label_05345344:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_0534555c;
      pUVar6 = (UnityEngine_RectTransform_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
      if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
         (pUVar6->klass == TypeInfo_UnityEngine_RectTransform)) {
        UVar11 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
        width = UVar11.fields.m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
      }
    }
  }
  fVar7 = 24.0;
  if (1.0 < width) {
    pSVar5 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method);
    UVar8 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                      ((TMPro_TMP_Text_o *)text,pSVar5,width,0.0,(MethodInfo *)0x0);
    fVar7 = UVar8.fields.y;
  }
  fVar7 = ceilf(fVar7);
  __this_01 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (__this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    fVar4 = 120.0;
    if (fVar7 <= 120.0) {
      fVar4 = fVar7;
    }
    fVar7 = (float)(~-(uint)(24.0 <= fVar7) & 0x41c00000 | (uint)fVar4 & -(uint)(24.0 <= fVar7));
    GVar1 = (__this_01->fields)._height.fields;
    if (GVar1.Unit == 1) {
      fVar4 = GVar1.Value;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      fVar10 = ABS(fVar4);
      if (fVar10 <= ABS(fVar7)) {
        fVar10 = ABS(fVar7);
      }
      fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar2 = fVar10 * 1e-06;
      if (fVar10 * 1e-06 <= fVar9) {
        fVar2 = fVar9;
      }
      if (ABS(fVar7 - fVar4) < fVar2) {
        return;
      }
    }
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar7,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height(__this_01,value,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)value.fields);
    return;
  }
label_0534555c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x5346210

void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$<RefreshVisibility>b__14_0
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0 (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x5346220

void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if ((__this->fields)._targetVisible != false) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,method_00);
  return;
}


