// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionCancel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, const MethodInfo* method);
// 0x5398070

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,MethodInfo *method)

{
  (__this->fields)._control = control;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._control);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$OnCancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5398080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539810f: jmp 0x53981d9

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchInputCapture_c *method_01;
  
  if (Il2CppMethodInitialized_07542b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b5d = '\x01';
  }
  pGVar1 = (__this->fields)._control;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      method_01 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      bVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)method_01);
      if (bVar2) {
        return;
      }
    }
    else {
      bVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput
                        ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      if (bVar2) {
        return;
      }
    }
    pGVar1 = (__this->fields)._control;
    if (pGVar1 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel(pGVar1,method_00);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    if (Il2CppMethodInitialized_07542bca == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      Il2CppMethodInitialized_07542bca = '\x01';
    }
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar3;
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
    if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
      (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, const MethodInfo* method);
// 0x5398330

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


