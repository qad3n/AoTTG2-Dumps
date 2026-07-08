// Type: Gisketch.Aottg2UI.Actions.AottgChoiceButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceButton.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, bool selectMode, const MethodInfo* method);
// 0x3b1db40

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,bool_conflict selectMode,
               MethodInfo *method)

{
  (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)control;
  il2cpp_runtime_glue(&(__this->fields).m_OnClick);
  *(char *)&(__this->fields)._control = (char)selectMode;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b1db70

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
  }
  UnityEngine_UI_Selectable__OnPointerDown
            ((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b1dce0

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
  }
  UnityEngine_UI_Button__OnSubmit((UnityEngine_UI_Button_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x3b1de50

void Gisketch_Aottg2UI_Actions_AottgChoiceButton__OnMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *x;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  bool_conflict bVar4;
  uint uVar5;
  MethodInfo *method_00;
  int iVar6;
  MethodInfo *method_01;
  
  if (DAT_05701567 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701567 = '\x01';
  }
  if (*(char *)&(__this->fields)._control != '\0') {
    x = (__this->fields).m_OnClick;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(__this->fields).m_OnClick;
      if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
LAB_03b1df6b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pGVar2 = (__this_00->fields)._options;
      if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pGVar3 = (pGVar2->fields)._items;
        if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
        goto LAB_03b1df6b;
        iVar1 = (int)pGVar3->max_length;
        if (0 < iVar1) {
          iVar6 = 0;
          method_00 = (MethodInfo *)0x0;
          do {
            if (pGVar3->m_Items[iVar6] ==
                (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1df6b;
            uVar5 = (int)method_00 + (uint)(byte)(pGVar3->m_Items[iVar6]->fields).enabled;
            method_00 = (MethodInfo *)(ulong)uVar5;
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
          if ((eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) && (1 < (int)uVar5)) {
            iVar1 = (eventData->fields)._moveDir_k__BackingField;
            if (iVar1 == 2) {
              method_01 = (MethodInfo *)0x2;
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next(__this_00,2,method_00);
            }
            else {
              if (iVar1 != 0) goto LAB_03b1df2d;
              method_01 = (MethodInfo *)0x2;
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous(__this_00,2,method_00);
            }
            Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,method_01);
            (*(eventData->klass->vtable)._5_Use.methodPtr)
                      (eventData,(eventData->klass->vtable)._5_Use.method);
            return;
          }
        }
      }
    }
  }
LAB_03b1df2d:
  UnityEngine_UI_Selectable__OnMove
            ((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* __this, const MethodInfo* method);
// 0x3b1e050

void Gisketch_Aottg2UI_Actions_AottgChoiceButton___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


