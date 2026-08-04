// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionCancel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, const MethodInfo* method);
// 0x3b8d840

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,MethodInfo *method)

{
  (__this->fields)._control = control;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._control);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$OnCancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b8d850

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar2;
  
  if (g_data_057a9ea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ea8 = '\x01';
  }
  pGVar2 = (__this->fields)._control;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pGVar2 = (__this->fields)._control;
    if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar2,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel(pGVar2,method_00);
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
// 0x3b8d8f0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


