// Type: Gisketch.Aottg2UI.Actions.GisketchButtonSound
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonSound.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, System_String_o* action, const MethodInfo* method);
// 0x3b93400

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,System_String_o *action,
               MethodInfo *method)

{
  (__this->fields)._action = action;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._action);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b93410

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$PlayClick
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x3b85ff0

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  if (g_data_057a9ed0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    g_data_057a9ed0 = '\x01';
  }
  uVar1 = System_String__op_Equality((__this->fields)._action,"overlay.close",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(uVar1 & 0xff,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x3b93420

void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


