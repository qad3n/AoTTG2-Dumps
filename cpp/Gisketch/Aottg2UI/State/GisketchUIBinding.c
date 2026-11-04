// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIBinding.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIBinding$$Setup
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* definition, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x1818bda90

void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,
               Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *definition,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_Action_string__c *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_Delegate_o *obj;
  Il2CppObject *pIVar3;
  System_Action_string__o *pSVar4;
  System_Action_string__o *a;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184341f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
    Il2CppMethodInitialized_184341f4b = '\x01';
  }
  (__this->fields)._definition = definition;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._definition,definition);
  (__this->fields)._enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enter,enter);
  (__this->fields)._exit = exit;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._exit,exit);
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state,state);
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pGVar1 = (__this->fields)._state;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged,(MethodInfo *)0x0
              );
    if (Il2CppMethodInitialized_184341f59 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
      Il2CppMethodInitialized_184341f59 = '\x01';
    }
    a = (pGVar1->fields).Changed;
    do {
      obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_System_Action_string;
      if (obj != (System_Delegate_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
        if (pIVar3 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar2);
        }
      }
      pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_1804174a0(&(pGVar1->fields).Changed);
      bVar5 = pSVar4 != a;
      a = pSVar4;
    } while (bVar5);
  }
  Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x1818bbf90

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184341f4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
    Il2CppMethodInitialized_184341f4c = '\x01';
  }
  t = (__this->fields)._visibilityTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged,(MethodInfo *)0x0
              );
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, System_String_o* key, const MethodInfo* method);
// 0x1818bc030

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184341f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f4d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      __this_00 = (__this->fields)._state;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged,
                 (MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
                (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
    }
  }
  else if ((__this->fields)._definition != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    bVar2 = System_String__op_Equality(key,(((__this->fields)._definition)->fields).text,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (__this->fields)._definition;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
label_1818bc1a2:
        ThrowNullReferenceException();
      }
      bVar2 = System_String__op_Equality(key,(pGVar1->fields).sprite,(MethodInfo *)0x0);
      if (!bVar2) {
        pGVar1 = (__this->fields)._definition;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bc1a2;
        bVar2 = System_String__op_Equality(key,(pGVar1->fields).value,(MethodInfo *)0x0);
        if (!bVar2) {
          pGVar1 = (__this->fields)._definition;
          if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bc1a2;
          bVar2 = System_String__op_Equality(key,(pGVar1->fields).visible,(MethodInfo *)0x0);
          if (!bVar2) {
            pGVar1 = (__this->fields)._definition;
            if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bc1a2;
            bVar2 = System_String__op_Equality(key,(pGVar1->fields).enabled,(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
          }
        }
      }
    }
    Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$Refresh
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x1818bd120
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bd6b2: jmp 0x1818bd71e
// asm:   0x1818bd9ec: nop dword ptr [rax]
// asm:   0x1818bda4b: mov r14, qword ptr [rsp + 0x38]
// asm:   0x1818bda50: mov r12, qword ptr [rsp + 0x40]
// asm:   0x1818bda55: mov rdi, qword ptr [rsp + 0x48]
// asm:   0x1818bda5a: mov rsi, qword ptr [rsp + 0x68]
// asm:   0x1818bda5f: mov rbp, qword ptr [rsp + 0x60]
// asm:   0x1818bda64: mov r15, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Selectable_o *__this_00;
  bool bVar3;
  char cVar4;
  bool bVar5;
  TMPro_TextMeshProUGUI_o *text;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *root;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_Object_o *y;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_03;
  TMPro_TMP_InputField_o *__this_04;
  UnityEngine_UI_Toggle_o *__this_05;
  System_Globalization_CultureInfo_o *pSVar8;
  System_Object_array *pSVar9;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this_06;
  uint uVar10;
  float local_res18 [2];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184341f4e == '\0') {
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
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Toggle_40a8ea0);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184341f4e = '\x01';
  }
  local_res20[0] = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((__this->fields)._definition == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    return;
  }
  if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  bVar3 = System_String__IsNullOrEmpty((((__this->fields)._definition)->fields).text,(MethodInfo *)0x0);
  if (!bVar3) {
    text = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) {
      text = UnityEngine_Component__GetComponentInChildren_object__664b50
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_664B50 *)
                        MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pGVar1 = (__this->fields)._definition;
      if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
         (text == (TMPro_TextMeshProUGUI_o *)0x0)) goto label_1818bda7b;
      pSVar7 = (pGVar1->fields).text;
      pGVar2 = (__this->fields)._state;
      pSVar6 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method)
      ;
      if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_1818bda7b;
      pSVar7 = Gisketch_Aottg2UI_State_GisketchUIState__Get(pGVar2,pSVar7,pSVar6,(MethodInfo *)0x0);
      pSVar6 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method)
      ;
      bVar3 = System_String__op_Inequality(pSVar6,pSVar7,(MethodInfo *)0x0);
      if (bVar3) {
        (*(text->klass->vtable)._66_set_text.methodPtr)(text,pSVar7,(text->klass->vtable)._66_set_text.method)
        ;
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight(__this,text,(MethodInfo *)0x0)
        ;
      }
    }
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bda7b;
  bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).sprite,(MethodInfo *)0x0);
  if (!bVar3) {
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    if (__this_01 == (UnityEngine_UI_Image_o *)0x0) {
      __this_01 = UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_664AA0 *)
                             MethodInfo_UnityEngine_Component_GetComponentInChildren_Image);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pGVar1 = (__this->fields)._definition;
      if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
         (pGVar2 = (__this->fields)._state, pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0))
      goto label_1818bda7b;
      pSVar7 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (pGVar2,(pGVar1->fields).sprite,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      y = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar7,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_UI_Image_o *)0x0) goto label_1818bda7b;
      x = (UnityEngine_Object_o *)(__this_01->fields).m_Sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
      if (bVar3) {
        UnityEngine_UI_Image__set_sprite(__this_01,(UnityEngine_Sprite_o *)y,(MethodInfo *)0x0);
      }
    }
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bda7b;
  bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).value,(MethodInfo *)0x0);
  if (!bVar3) {
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_AottgSliderControl);
    if (__this_02 == (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_664AA0 *)
                             MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgSliderControl);
    }
    __this_03 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_AottgChoiceControl);
    if (__this_03 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      __this_03 = UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_664AA0 *)
                             MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgChoiceControl);
    }
    __this_04 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_InputField);
    if (__this_04 == (TMPro_TMP_InputField_o *)0x0) {
      __this_04 = UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_664AA0 *)
                             MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_InputField);
    }
    __this_05 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    if (__this_05 == (UnityEngine_UI_Toggle_o *)0x0) {
      __this_05 = UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_664AA0 *)
                             MethodInfo_UnityEngine_Component_GetComponentInChildren_Toggle_40a8ea0);
    }
    pGVar1 = (__this->fields)._definition;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bda7b;
    pGVar2 = (__this->fields)._state;
    pSVar7 = (pGVar1->fields).value;
    if (Il2CppMethodInitialized_184341f52 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&"false");
      il2cpp_codegen_initialize_runtime_metadata(&"true");
      Il2CppMethodInitialized_184341f52 = '\x01';
    }
    local_res18[0] = 0.0;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this_02 == (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
label_1818bda6f:
        ThrowNullReferenceException();
      }
      local_res18[0] = (__this_02->fields)._Value_k__BackingField;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar6 = System_Single__ToString_1b49fe0
                         (local_res18,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this_03 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_1818bda6f;
        pSVar6 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_Value(__this_03,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (__this_04 == (TMPro_TMP_InputField_o *)0x0) goto label_1818bda6f;
          pSVar6 = (__this_04->fields).m_Text;
        }
        else {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            if (__this_05 == (UnityEngine_UI_Toggle_o *)0x0) goto label_1818bda6f;
            pSVar6 = "false";
            if ((__this_05->fields).m_IsOn != false) {
              pSVar6 = "true";
            }
          }
          else {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
        }
      }
    }
    if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_1818bda7b;
    pSVar7 = Gisketch_Aottg2UI_State_GisketchUIState__Get(pGVar2,pSVar7,pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Single__TryParse_1b4a540
                        (pSVar7,0xa7,(System_IFormatProvider_o *)pSVar8,local_res20,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this_02 == (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) goto label_1818bda7b;
        Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify
                  (__this_02,local_res20[0],(MethodInfo *)0x0);
        goto label_1818bd7c1;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this_03 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_1818bda7b;
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify(__this_03,pSVar7,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this_04 == (TMPro_TMP_InputField_o *)0x0) goto label_1818bda7b;
        TMPro_TMP_InputField__SetTextWithoutNotify(__this_04,pSVar7,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = System_String__op_Equality(pSVar7,"1",(MethodInfo *)0x0);
          if (bVar3) {
            bVar3 = true;
          }
          else {
            bVar3 = System_String__Equals_196c550(pSVar7,"true",5,(MethodInfo *)0x0);
          }
          if (__this_05 == (UnityEngine_UI_Toggle_o *)0x0) goto label_1818bda7b;
          if ((__this_05->fields).m_IsOn != bVar3) {
            UnityEngine_UI_Toggle__SetIsOnWithoutNotify(__this_05,bVar3,(MethodInfo *)0x0);
            __this_06 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_05,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_GisketchToggleFeedback);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar3) {
              if (__this_06 == (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) goto label_1818bda7b;
              Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshValue
                        (__this_06,false,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
label_1818bd7c1:
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).visible,(MethodInfo *)0x0);
    if (!bVar3) {
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility(__this,(MethodInfo *)0x0);
    }
    pGVar1 = (__this->fields)._definition;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1818bda7b;
    bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).enabled,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pSVar9 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Selectable);
    if (pSVar9 == (System_Object_array *)0x0) goto label_1818bda7b;
    if (pSVar9->max_length == 0) {
      cVar4 = '\x01';
    }
    else {
      if ((int)pSVar9->max_length == 0) goto label_1818bda75;
      if (pSVar9->m_Items[0] == (Il2CppObject *)0x0) goto label_1818bda7b;
      cVar4 = *(char *)&pSVar9->m_Items[0][0xd].monitor;
    }
    pGVar1 = (__this->fields)._definition;
    if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) &&
       (pGVar2 = (__this->fields)._state, pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      bVar3 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (pGVar2,(pGVar1->fields).enabled,cVar4 != '\0',(MethodInfo *)0x0);
      uVar10 = 0;
      while( true ) {
        if ((int)pSVar9->max_length <= (int)uVar10) {
          return;
        }
        if ((uint)pSVar9->max_length <= uVar10) break;
        __this_00 = (UnityEngine_UI_Selectable_o *)pSVar9->m_Items[(int)uVar10];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818bda7b;
          if ((__this_00->fields).m_Interactable != bVar3) {
            UnityEngine_UI_Selectable__set_interactable(__this_00,bVar3,(MethodInfo *)0x0);
          }
        }
        uVar10 = uVar10 + 1;
      }
label_1818bda75:
      ThrowIndexOutOfRangeException();
    }
  }
label_1818bda7b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibility
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x1818bcd30
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bcf3d: xor r8d, r8d
// asm:   0x1818bcf40: xor edx, edx
// asm:   0x1818bcf42: mov rcx, rax
// asm:   0x1818bcf45: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x1818bcf4a: xor edx, edx
// asm:   0x1818bcf4c: mov rcx, rsi
// asm:   0x1818bcf4f: call 0x1818bcbb0  ; Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout()
// asm:   0x1818bcf54: jmp 0x1818bcf15
// asm:   0x1818bd0e6: xor edi, edi
// asm:   0x1818bd0e8: xor r9d, r9d
// asm:   0x1818bd0eb: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1818bd0f0: mov r8b, 1
// asm:   0x1818bd0f3: mov rdx, rbp
// asm:   0x1818bd0f6: mov rcx, rbx
// asm:   0x1818bd0f9: call 0x181889130  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode()
// asm:   0x1818bd0fe: lea rcx, [rsi + 0x40]
// asm:   0x1818bd102: mov qword ptr [rsi + 0x40], rax
// asm:   0x1818bd106: mov rdx, rax
// asm:   0x1818bd109: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1818bd10e: jmp 0x1818bcf15

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *key;
  bool bVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  DG_Tweening_Tween_o *pDVar5;
  DG_Tweening_TweenCallback_o *action;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  
  if (Il2CppMethodInitialized_184341f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_RefreshVisibility_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    Il2CppMethodInitialized_184341f4f = '\x01';
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    __this_00 = (__this->fields)._state;
    key = (pGVar1->fields).visible;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0),
       __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      bVar2 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this_00,key,bVar2,(MethodInfo *)0x0);
      if ((__this->fields)._visibilityInitialized == false) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
          (__this->fields)._visibilityInitialized = true;
          (__this->fields)._targetVisible = bVar2;
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar4,(MethodInfo *)0x0)
            ;
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
            }
            bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            if (bVar3) {
              return;
            }
            pGVar6 = (__this->fields)._enter;
            if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              return;
            }
            bVar2 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0);
            if (bVar2) {
              return;
            }
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pGVar6 = (__this->fields)._enter;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            goto label_1818bd0e8;
          }
        }
      }
      else {
        if ((__this->fields)._targetVisible == bVar2) {
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_1818bd113;
          bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
          if (bVar3 == bVar2) {
            return;
          }
        }
        pDVar5 = (__this->fields)._visibilityTween;
        (__this->fields)._targetVisible = bVar2;
        if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar5,false,(MethodInfo *)0x0);
        }
        (__this->fields)._visibilityTween = (DG_Tweening_Tween_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._visibilityTween,(void *)0x0);
        if (bVar2) {
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar4,(MethodInfo *)0x0)
            ;
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
            }
            bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            pGVar6 = (__this->fields)._enter;
            if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              return;
            }
            bVar2 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0);
            if (bVar2) {
              return;
            }
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pGVar6 = (__this->fields)._enter;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
label_1818bd0e8:
            pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                               (pUVar4,pGVar6,true,false,(MethodInfo *)0x0);
            (__this->fields)._visibilityTween = pDVar5;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._visibilityTween,pDVar5);
            return;
          }
        }
        else {
          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          }
          bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (((bVar2) &&
              (pGVar6 = (__this->fields)._exit,
              pGVar6 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) &&
             (bVar2 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0), !bVar2)) {
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pGVar6 = (__this->fields)._exit;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                               (pUVar4,pGVar6,false,false,(MethodInfo *)0x0);
            (__this->fields)._visibilityTween = pDVar5;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._visibilityTween,pDVar5);
            if ((__this->fields)._visibilityTween != (DG_Tweening_Tween_o *)0x0) {
              pDVar5 = (__this->fields)._visibilityTween;
              action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_RefreshVisibility_b__14_0,
                         (MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                        ((Il2CppObject *)pDVar5,action,
                         (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween)
              ;
              return;
            }
          }
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1818bd113:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x181887a10

bool
Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, MethodInfo* method)

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
// 0x1818bcbb0

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *root;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *rect_00;
  
  if (Il2CppMethodInitialized_184341f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184341f50 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  rect = (UnityEngine_RectTransform_o *)0x0;
  rect_00 = rect;
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect_00 = (UnityEngine_RectTransform_o *)0x0, pUVar2->klass == TypeInfo_UnityEngine_RectTransform)) {
    rect_00 = pUVar2;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (rect_00 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)rect_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2->klass == TypeInfo_UnityEngine_RectTransform)) {
      rect = pUVar2;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
      }
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect_00,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshDescendantButtonWidths
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818bc7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bc83c: nop dword ptr [rax]

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar1;
  UnityEngine_GameObject_o *root_00;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184341f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Button_40c0aa0);
    Il2CppMethodInitialized_184341f51 = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (root,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Button_40c0aa0);
    if (pUVar1 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
      uVar2 = 0;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pUVar1->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        __this = (&pUVar1->m_Items[0].klass)[(int)uVar2];
        if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
        root_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root_00,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$CurrentValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIBinding__CurrentValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* slider, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* choice, TMPro_TMP_InputField_o* input, UnityEngine_UI_Toggle_o* toggle, const MethodInfo* method);
// 0x1818bbdd0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIBinding__CurrentValue
          (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *slider,
          Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *choice,TMPro_TMP_InputField_o *input,
          UnityEngine_UI_Toggle_o *toggle,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Globalization_CultureInfo_o *provider;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_184341f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184341f52 = '\x01';
  }
  local_res8[0] = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)slider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (slider != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
      local_res8[0] = (slider->fields)._Value_k__BackingField;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar2 = System_Single__ToString_1b49fe0
                         (local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
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
      if (bVar1) {
        if (input != (TMPro_TMP_InputField_o *)0x0) {
          return (input->fields).m_Text;
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)toggle,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if (toggle != (UnityEngine_UI_Toggle_o *)0x0) {
          pSVar2 = "false";
          if ((toggle->fields).m_IsOn != false) {
            pSVar2 = "true";
          }
          return pSVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshButtonWidth
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818bc1b0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bc47c: xor esi, esi
// asm:   0x1818bc47e: movaps xmm3, xmm6
// asm:   0x1818bc481: jmp 0x1818bc75a
// asm:   0x1818bc59d: nop dword ptr [rax]
// asm:   0x1818bc6e7: movaps xmm0, xmm6
// asm:   0x1818bc6ea: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1818bc6f2: movaps xmm6, xmm0
// asm:   0x1818bc6f5: mov rbp, qword ptr [rsp + 0x98]
// asm:   0x1818bc757: movaps xmm3, xmm0

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  UnityEngine_RectOffset_o *__this;
  bool bVar1;
  char cVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_UI_LayoutElement_o *rootLayout;
  Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *x;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  UnityEngine_UI_RectMask2D_o *x_01;
  TMPro_TextMeshProUGUI_o *pTVar5;
  System_String_o *pSVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar9;
  int32_t index;
  UnityEngine_RectTransform_o *rect;
  float fVar10;
  float fVar11;
  float local_res18;
  
  if (Il2CppMethodInitialized_184341f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_40bec00);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184341f53 = '\x01';
  }
  if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818bc7e0;
  rootLayout = UnityEngine_GameObject__GetComponent_object_
                         (root,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  x = UnityEngine_GameObject__GetComponent_object_
                (root,(MethodInfo_6F5650 *)
                      MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
  x_00 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                   (root,true,
                    (MethodInfo_6F5110 *)
                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_HorizontalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rootLayout,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  flex = UnityEngine_GameObject__GetComponent_object_
                   (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  x_01 = UnityEngine_GameObject__GetComponent_object_
                   (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1818bc7e0;
      if (((flex->fields)._maxWidth.fields.Unit == 1) &&
         (local_res18 = (flex->fields)._maxWidth.fields.Value, 0.0 < local_res18)) {
        if (rootLayout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1818bc7e0;
        fVar10 = (*(rootLayout->klass->vtable)._35_get_preferredWidth.methodPtr)
                           (rootLayout,(rootLayout->klass->vtable)._35_get_preferredWidth.method);
        cVar2 = il2cpp_runtime_helper_180562af0(fVar10,local_res18,0);
        fVar10 = local_res18;
        if (cVar2 != '\0') {
          fVar11 = (*(rootLayout->klass->vtable)._31_get_minWidth.methodPtr)
                             (rootLayout,(rootLayout->klass->vtable)._31_get_minWidth.method);
          cVar2 = il2cpp_runtime_helper_180562af0(fVar11,local_res18,0);
          if (((cVar2 != '\0') && ((flex->fields)._width.fields.Unit == 1)) &&
             (((flex->fields)._minWidth.fields.Unit == 1 &&
              ((cVar2 = il2cpp_runtime_helper_180562af0(), cVar2 != '\0' && (cVar2 = il2cpp_runtime_helper_180562af0(), cVar2 != '\0')))))) {
            return;
          }
        }
        goto label_1818bc75a;
      }
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  index = 0;
  if (bVar1) {
    if ((x_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
       (__this = (x_00->fields).m_Padding, __this != (UnityEngine_RectOffset_o *)0x0)) {
      iVar3 = UnityEngine_RectOffset__get_horizontal(__this,(MethodInfo *)0x0);
      fVar10 = (float)iVar3;
      iVar3 = index;
      while (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0),
            pUVar8 != (UnityEngine_Transform_o *)0x0) {
        iVar4 = UnityEngine_Transform__get_childCount(pUVar8,(MethodInfo *)0x0);
        if (iVar4 <= index) {
          if (1 < iVar3) {
            fVar10 = (float)(iVar3 + -1) * (x_00->fields).m_Spacing + fVar10;
          }
          goto label_1818bc6fd;
        }
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
        if (((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
            (pUVar8 = UnityEngine_Transform__GetChild(pUVar8,index,(MethodInfo *)0x0),
            pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
        bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
        if (bVar1) {
          iVar3 = iVar3 + 1;
          pTVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar8,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
              (*(pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                        (pTVar5,false,false,(pTVar5->klass->vtable)._106_ForceMeshUpdate.method);
              pSVar6 = (*(pTVar5->klass->vtable)._65_get_text.methodPtr)
                                 (pTVar5,(pTVar5->klass->vtable)._65_get_text.method);
              UVar7 = TMPro_TMP_Text__GetPreferredValues_2d12570
                                ((TMPro_TMP_Text_o *)pTVar5,pSVar6,(MethodInfo *)0x0);
              fVar10 = fVar10 + UVar7.fields.x;
              goto label_1818bc6c1;
            }
            break;
          }
          pUVar9 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar8,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                             );
          fVar11 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(pUVar9,(MethodInfo *)0x0);
          index = index + 1;
          fVar10 = fVar10 + fVar11;
        }
        else {
label_1818bc6c1:
          index = index + 1;
        }
      }
    }
  }
  else {
    pTVar5 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                       (root,true,
                        (MethodInfo_6F5110 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_40bec00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                (pTVar5,false,false,(pTVar5->klass->vtable)._106_ForceMeshUpdate.method);
      pSVar6 = (*(pTVar5->klass->vtable)._65_get_text.methodPtr)
                         (pTVar5,(pTVar5->klass->vtable)._65_get_text.method);
      UVar7 = TMPro_TMP_Text__GetPreferredValues_2d12570((TMPro_TMP_Text_o *)pTVar5,pSVar6,(MethodInfo *)0x0);
      if (x != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) {
        fVar10 = UVar7.fields.x + (x->fields)._HorizontalPadding_k__BackingField;
label_1818bc6fd:
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (x == (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) goto label_1818bc7e0;
          local_res18 = (x->fields)._MinWidthFloor_k__BackingField;
        }
        else {
          if (rootLayout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1818bc7e0;
          local_res18 = (*(rootLayout->klass->vtable)._31_get_minWidth.methodPtr)
                                  (rootLayout,(rootLayout->klass->vtable)._31_get_minWidth.method);
        }
        if (local_res18 <= fVar10) {
          local_res18 = fVar10;
        }
label_1818bc75a:
        bVar1 = Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth
                          (rootLayout,flex,fVar10,local_res18,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar9 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
          }
          rect = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar9->klass == TypeInfo_UnityEngine_RectTransform)) {
            rect = pUVar9;
          }
          UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_1818bc7e0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$ApplyWidth
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth (UnityEngine_UI_LayoutElement_o* rootLayout, Gilzoide_FlexUi_FlexLayout_o* flex, float preferredWidth, float minWidth, const MethodInfo* method);
// 0x1818bbbc0

bool Gisketch_Aottg2UI_State_GisketchUIBinding__ApplyWidth
               (UnityEngine_UI_LayoutElement_o *rootLayout,Gilzoide_FlexUi_FlexLayout_o *flex,
               float preferredWidth,float minWidth,MethodInfo *method)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar4;
  bool bVar5;
  float fVar6;
  float local_res8;
  
  if (Il2CppMethodInitialized_184341f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341f54 = '\x01';
  }
  if (rootLayout != (UnityEngine_UI_LayoutElement_o *)0x0) {
    fVar6 = (*(rootLayout->klass->vtable)._35_get_preferredWidth.methodPtr)
                      (rootLayout,(rootLayout->klass->vtable)._35_get_preferredWidth.method);
    cVar1 = il2cpp_runtime_helper_180562af0(fVar6,preferredWidth);
    if (cVar1 == '\0') {
      (*(rootLayout->klass->vtable)._36_set_preferredWidth.methodPtr)
                (rootLayout,preferredWidth,(rootLayout->klass->vtable)._36_set_preferredWidth.method);
    }
    fVar6 = (*(rootLayout->klass->vtable)._31_get_minWidth.methodPtr)
                      (rootLayout,(rootLayout->klass->vtable)._31_get_minWidth.method);
    cVar2 = il2cpp_runtime_helper_180562af0(fVar6,minWidth);
    if (cVar2 == '\0') {
      (*(rootLayout->klass->vtable)._32_set_minWidth.methodPtr)
                (rootLayout,minWidth,(rootLayout->klass->vtable)._32_set_minWidth.method);
    }
    bVar5 = cVar2 == '\0' || cVar1 == '\0';
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1818bbdc3;
      if ((flex->fields)._width.fields.Unit != 2) {
        local_res8 = (flex->fields)._width.fields.Value;
        cVar1 = il2cpp_runtime_helper_180562af0(local_res8,preferredWidth);
        if (cVar1 == '\0') {
          if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
          }
          GVar4 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(preferredWidth,(MethodInfo *)0x0);
          Gilzoide_FlexUi_FlexLayout__set_Width(flex,GVar4,(MethodInfo *)0x0);
          bVar5 = true;
        }
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1818bbdc3;
      if ((flex->fields)._minWidth.fields.Unit != 2) {
        local_res8 = (flex->fields)._minWidth.fields.Value;
        cVar1 = il2cpp_runtime_helper_180562af0(local_res8,minWidth);
        if (cVar1 == '\0') {
          if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
          }
          GVar4 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(minWidth,(MethodInfo *)0x0);
          Gilzoide_FlexUi_FlexLayout__set_MinWidth(flex,GVar4,(MethodInfo *)0x0);
          bVar5 = true;
        }
      }
    }
    return bVar5;
  }
label_1818bbdc3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshProfileHoverBioHeight
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, TMPro_TextMeshProUGUI_o* text, const MethodInfo* method);
// 0x1818bc890

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,TMPro_TextMeshProUGUI_o *text,
               MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_RectTransform_o *__this_02;
  float fVar7;
  float fVar8;
  float local_res20;
  float fStackX_24;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184341f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-bio");
    Il2CppMethodInitialized_184341f55 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) {
label_1818bcba4:
    ThrowNullReferenceException();
  }
  pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(pSVar3,"public-profile-hover-bio",(MethodInfo *)0x0);
  if (!bVar1) {
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818bcba4;
    TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)text,5,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    pUVar4 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)text,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_1818bcba4;
      pUVar5 = UnityEngine_RectTransform__get_rect(local_48,pUVar4,(MethodInfo *)0x0);
      fVar8 = (pUVar5->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
    }
    else {
      fVar8 = 0.0;
    }
    if (fVar8 <= 1.0) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_1818bcba4;
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          __this_02 = (UnityEngine_RectTransform_o *)0x0;
          if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
            __this_02 = pUVar4;
          }
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar5 = UnityEngine_RectTransform__get_rect(local_48,__this_02,(MethodInfo *)0x0);
            fVar8 = (pUVar5->fields).m_Width;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
          }
        }
      }
    }
    if (fVar8 <= 1.0) {
      fStackX_24 = 24.0;
    }
    else {
      pSVar3 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method)
      ;
      UVar6 = TMPro_TMP_Text__GetPreferredValues_2d12740
                        ((TMPro_TMP_Text_o *)text,pSVar3,fVar8,0.0,(MethodInfo *)0x0);
      fStackX_24 = UVar6.fields.y;
    }
    fVar7 = (float)il2cpp_runtime_helper_1804f4070(fStackX_24);
    fVar8 = 24.0;
    if ((24.0 <= fVar7) && (fVar8 = 120.0, fVar7 <= 120.0)) {
      fVar8 = fVar7;
    }
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1818bcba4;
      if ((__this_01->fields)._height.fields.Unit == 1) {
        local_res20 = (__this_01->fields)._height.fields.Value;
        cVar2 = il2cpp_runtime_helper_180562af0(local_res20,fVar8);
        if (cVar2 != '\0') {
          return;
        }
      }
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar8,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_Height(__this_01,value,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_State_GisketchUIBinding___ctor(Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$<RefreshVisibility>b__14_0
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0 (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x1818bdc00

void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields)._targetVisible != false) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


