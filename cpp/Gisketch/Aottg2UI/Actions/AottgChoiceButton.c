// Type: Gisketch.Aottg2UI.Actions.AottgChoiceButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceButton.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, bool selectMode, const MethodInfo* method);
// 0x1818f4370

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,bool selectMode,MethodInfo *method)

{
  (__this->fields)._control = control;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._control,control);
  (__this->fields)._selectMode = selectMode;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f42f0

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__OnPointerDown((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818f4330

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
  UnityEngine_UI_Button__OnSubmit((UnityEngine_UI_Button_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x1818f4150

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_1843421cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421cb = '\x01';
  }
  if ((__this->fields)._selectMode != false) {
    pGVar1 = (__this->fields)._control;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pGVar1 = (__this->fields)._control;
      if (pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        if ((pGVar1->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)
        goto label_1818f42c6;
        pGVar2 = (((pGVar1->fields)._options)->fields)._items;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          iVar5 = 0;
          for (uVar4 = 0; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
            if ((uint)pGVar2->max_length <= uVar4) {
              ThrowIndexOutOfRangeException();
            }
            if (pGVar2->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
            goto label_1818f42e4;
            iVar5 = (iVar5 + 1) - (uint)((pGVar2->m_Items[(int)uVar4]->fields).enabled == false);
          }
          if ((iVar5 < 2) || (eventData == (UnityEngine_EventSystems_AxisEventData_o *)0x0))
          goto label_1818f42c6;
          if ((eventData->fields)._moveDir_k__BackingField == 0) {
            pGVar1 = (__this->fields)._control;
            if (pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous(pGVar1,2,(MethodInfo *)0x0);
label_1818f428a:
              if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
              }
              Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
              (*(eventData->klass->vtable)._5_Use.methodPtr)
                        (eventData,(eventData->klass->vtable)._5_Use.method);
              return;
            }
          }
          else {
            if ((eventData->fields)._moveDir_k__BackingField != 2) goto label_1818f42c6;
            pGVar1 = (__this->fields)._control;
            if (pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next(pGVar1,2,(MethodInfo *)0x0);
              goto label_1818f428a;
            }
          }
        }
      }
label_1818f42e4:
      ThrowNullReferenceException();
    }
  }
label_1818f42c6:
  UnityEngine_UI_Selectable__OnMove((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, const MethodInfo* method);
// 0x1818f43b0

void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


