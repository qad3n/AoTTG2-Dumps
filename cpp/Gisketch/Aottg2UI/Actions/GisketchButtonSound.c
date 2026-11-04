// Type: Gisketch.Aottg2UI.Actions.GisketchButtonSound
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonSound.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, System_String_o* action, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup(Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, System_String_o* action, MethodInfo* method)

{
  (__this->fields)._action = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._action,value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fcdd0

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434220e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_18434220e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$PlayClick
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x1818fce20

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434220f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    Il2CppMethodInitialized_18434220f = '\x01';
  }
  bVar1 = System_String__op_Equality((__this->fields)._action,"overlay.close",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor(Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


