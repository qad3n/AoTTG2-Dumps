// Type: Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastBehaviour.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$get_Delay
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__get_Delay (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x3ae92e0

float Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__get_Delay
                (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Setup (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, System_Action_o* close, const MethodInfo* method);
// 0x3ae92f0

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,System_Action_o *close,
               MethodInfo *method)

{
  (__this->fields)._close = close;
  il2cpp_runtime_glue(&(__this->fields)._close);
  (__this->fields)._remaining = 5.0;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnPointerDown (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ae9310

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnPointerDown
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (__this->fields)._start.fields = (eventData->fields)._position_k__BackingField.fields;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnDrag (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ae9330

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__OnDrag
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtable_dispatch;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((48.0 < (__this->fields)._start.fields.y -
              (eventData->fields)._position_k__BackingField.fields.y) &&
     (pSVar1 = (__this->fields)._close, pSVar1 != (System_Action_o *)0x0)) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,(pSVar1->fields).method,method,vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$SetPaused
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__SetPaused (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, bool paused, const MethodInfo* method);
// 0x3ae9380

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__SetPaused
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,bool_conflict paused,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._paused = (char)paused;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Update
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Update (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x3ae9390

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour__Update
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_o *pSVar2;
  code *vtable_dispatch;
  char cVar3;
  bool_conflict bVar4;
  undefined8 extraout_RDX;
  float fVar5;
  float fVar6;
  
  if (DAT_057013de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_057013de = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if ((cVar3 != '\0') && ((char)(__this->fields)._paused == '\0')) {
    fVar6 = (__this->fields)._remaining;
    fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar6 = fVar6 - fVar5;
    (__this->fields)._remaining = fVar6;
    if ((fVar6 <= 0.0) && (pSVar2 = (__this->fields)._close, pSVar2 != (System_Action_o *)0x0)) {
      vtable_dispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtable_dispatch)
                ((pSVar2->fields).method_code,(pSVar2->fields).method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o* __this, const MethodInfo* method);
// 0x3ae9460

void Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastBehaviour_o *__this,MethodInfo *method)

{
  (__this->fields)._remaining = 5.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


