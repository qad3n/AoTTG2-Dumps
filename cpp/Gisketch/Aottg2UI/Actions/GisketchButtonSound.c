// Type: Gisketch.Aottg2UI.Actions.GisketchButtonSound
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonSound.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, System_String_o* action, const MethodInfo* method);
// 0x539e880

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__Setup
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,System_String_o *action,
               MethodInfo *method)

{
  (__this->fields)._action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._action);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539e890

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07542b8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542b8d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$PlayClick
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x538f4f0

void Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542b8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    Il2CppMethodInitialized_07542b8e = '\x01';
  }
  bVar1 = System_String__op_Equality((__this->fields)._action,"overlay.close",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar1,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonSound$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o* __this, const MethodInfo* method);
// 0x539e900

void Gisketch_Aottg2UI_Actions_GisketchButtonSound___ctor
               (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


