// Type: Gisketch.Aottg2UI.Actions.GisketchButtonInputSource
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonInputSource.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$get_Source
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__get_Source (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, const MethodInfo* method);
// 0x180a4c170

int32_t
Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__get_Source(Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, MethodInfo* method)

{
  return (__this->fields)._Source_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$set_Source
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__set_Source (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, int32_t value, const MethodInfo* method);
// 0x180e4c6e0

void
Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__set_Source(Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._Source_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fcda0

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._Source_k__BackingField = 1;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fcdb0

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._Source_k__BackingField = 2;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchButtonInputSource___ctor(Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


