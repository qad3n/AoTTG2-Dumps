// Type: Gisketch.Aottg2UI.Actions.GisketchButtonInputSource
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonInputSource.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$get_Source
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__get_Source (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, const MethodInfo* method);
// 0x3b27160

int32_t Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__get_Source
                  (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,MethodInfo *method)

{
  return (__this->fields)._Source_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$set_Source
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__set_Source (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, int32_t value, const MethodInfo* method);
// 0x3b27170

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__set_Source
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._Source_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b27180

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  (__this->fields)._Source_k__BackingField = 1;
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
    method = extraout_RDX;
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
      method = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,
                 *(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b27230

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  (__this->fields)._Source_k__BackingField = 2;
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
    method = extraout_RDX;
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
      method = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,
                 *(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, const MethodInfo* method);
// 0x3b272e0

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource___ctor
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


