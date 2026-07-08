// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionCancel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, const MethodInfo* method);
// 0x3b216e0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,MethodInfo *method)

{
  (__this->fields)._control = control;
  il2cpp_runtime_glue(&(__this->fields)._control);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$OnCancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b216f0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_05701579 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701579 = '\x01';
  }
  pGVar1 = (__this->fields)._control;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pGVar1 = (__this->fields)._control;
    if (pGVar1 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel(pGVar1,method_00);
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,method_00);
    if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
      (*(eventData->klass->vtable)._5_Use.methodPtr)
                (eventData,(eventData->klass->vtable)._5_Use.method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, const MethodInfo* method);
// 0x3b21790

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


