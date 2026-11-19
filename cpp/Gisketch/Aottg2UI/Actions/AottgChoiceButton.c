// Type: Gisketch.Aottg2UI.Actions.AottgChoiceButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceButton.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, bool selectMode, const MethodInfo* method);
// 0x5394550

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,bool selectMode,MethodInfo *method)

{
  (__this->fields)._control = control;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._control);
  (__this->fields)._selectMode = selectMode;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5394580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5394639: jmp 0x53945fe

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
  }
  UnityEngine_UI_Selectable__OnPointerDown((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53946f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53947a9: jmp 0x539476e

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
  }
  UnityEngine_UI_Button__OnSubmit((UnityEngine_UI_Button_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x5394860

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  bool bVar5;
  uint uVar6;
  MethodInfo *method_00;
  int iVar7;
  
  if (Il2CppMethodInitialized_07542b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b4a = '\x01';
  }
  if ((__this->fields)._selectMode != false) {
    pGVar2 = (__this->fields)._control;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pGVar2 = (__this->fields)._control;
      if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
label_053949a8:
        ThrowNullReferenceException();
      }
      pGVar3 = (pGVar2->fields)._options;
      if (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pGVar4 = (pGVar3->fields)._items;
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_053949a8;
        iVar1 = (int)pGVar4->max_length;
        if (0 < iVar1) {
          iVar7 = 0;
          method_00 = (MethodInfo *)0x0;
          do {
            if (pGVar4->m_Items[iVar7] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
            goto label_053949a8;
            uVar6 = (int)method_00 + (uint)(pGVar4->m_Items[iVar7]->fields).enabled;
            method_00 = (MethodInfo *)(ulong)uVar6;
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
          if ((eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) && (1 < (int)uVar6)) {
            iVar1 = (eventData->fields)._moveDir_k__BackingField;
            if (iVar1 == 2) {
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next(pGVar2,2,method_00);
            }
            else {
              if (iVar1 != 0) goto label_05394950;
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous(pGVar2,2,method_00);
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
            }
            Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
            (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method)
            ;
            return;
          }
        }
      }
    }
  }
label_05394950:
  UnityEngine_UI_Selectable__OnMove((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, const MethodInfo* method);
// 0x5394a00

void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


