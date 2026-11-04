// Type: Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastBehaviour.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$get_Delay
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__get_Delay (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x1818b56e0

float
Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__get_Delay(Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, MethodInfo* method)

{
  return 5.0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Setup (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, System_Action_o* close, const MethodInfo* method);
// 0x1818b5610

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,System_Action_o *close,
               MethodInfo *method)

{
  (__this->fields)._close = close;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._close,close);
  (__this->fields)._remaining = 5.0;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnPointerDown (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818b55e0

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnPointerDown
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar1 = (eventData->fields)._position_k__BackingField.fields.y;
    (__this->fields)._start.fields.x = (eventData->fields)._position_k__BackingField.fields.x;
    (__this->fields)._start.fields.y = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnDrag (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818b5590

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnDrag
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((48.0 < (__this->fields)._start.fields.y - (eventData->fields)._position_k__BackingField.fields.y) &&
     (pSVar1 = (__this->fields)._close, pSVar1 != (System_Action_o *)0x0)) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$SetPaused
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__SetPaused (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, bool paused, const MethodInfo* method);
// 0x180ab9f80

void
Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__SetPaused(Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, bool paused, MethodInfo* method)

{
  (__this->fields)._paused = value;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Update
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Update (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x1818b5640

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Update
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184341fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184341fee = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._paused == false)) {
    fVar4 = (__this->fields)._remaining;
    fVar3 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 - fVar3;
    (__this->fields)._remaining = fVar4;
    if ((fVar4 <= 0.0) && (pSVar1 = (__this->fields)._close, pSVar1 != (System_Action_o *)0x0)) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x1818b56d0

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  (__this->fields)._remaining = 5.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


