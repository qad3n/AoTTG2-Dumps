// Type: Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastBehaviour.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$get_Delay
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__get_Delay (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x5359040

float Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__get_Delay
                (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Setup (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, System_Action_o* close, const MethodInfo* method);
// 0x5359050

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,System_Action_o *close,
               MethodInfo *method)

{
  (__this->fields)._close = close;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._close);
  (__this->fields)._remaining = 5.0;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnPointerDown (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5359070

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnPointerDown
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._start.fields = (eventData->fields)._position_k__BackingField.fields;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnDrag (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5359090

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnDrag
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((48.0 < (__this->fields)._start.fields.y - (eventData->fields)._position_k__BackingField.fields.y) &&
     (pSVar1 = (__this->fields)._close, pSVar1 != (System_Action_o *)0x0)) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,(pSVar1->fields).method,method,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$SetPaused
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__SetPaused (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, bool paused, const MethodInfo* method);
// 0x53590d0

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__SetPaused
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,bool paused,MethodInfo *method)

{
  (__this->fields)._paused = paused;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Update
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Update (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x53590e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535910f: jmp 0x5359195

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Update
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  bool bVar3;
  undefined8 extraout_RDX;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754296b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_0754296b = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if ((bVar3) && ((__this->fields)._paused == false)) {
    fVar5 = (__this->fields)._remaining;
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar4;
    (__this->fields)._remaining = fVar5;
    if ((fVar5 <= 0.0) && (pSVar2 = (__this->fields)._close, pSVar2 != (System_Action_o *)0x0)) {
      vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar2->fields).method_code,(pSVar2->fields).method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x53591a0

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  (__this->fields)._remaining = 5.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


