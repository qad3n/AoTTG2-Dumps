// Type: Gisketch.Aottg2UI.Actions.GisketchButtonSound
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonSound.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, System_String_o* action, const MethodInfo* method);
// 0x3b272f0

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,System_String_o *action,
               MethodInfo *method)

{
  (__this->fields)._action = action;
  il2cpp_runtime_glue(&(__this->fields)._action);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b27300

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$PlayClick
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x3b198b0

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_057015a1 == '\0') {
    il2cpp_init_method_metadata(&"overlay.close");
    DAT_057015a1 = '\x01';
  }
  method_00 = "overlay.close";
  uVar1 = System_String__op_Equality
                    ((__this->fields)._action,(System_String_o *)"overlay.close",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(uVar1 & 0xff,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x3b27310

void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


