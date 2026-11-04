// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionCancel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__Setup(Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, MethodInfo* method)

{
  (__this->fields)._control = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._control,value);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$OnCancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818f6ed0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel__OnCancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  UnityEngine_EventSystems_EventSystem_o *pUVar6;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_1843421de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421de = '\x01';
  }
  pGVar2 = (__this->fields)._control;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  if (Il2CppMethodInitialized_18434224a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  if (Il2CppMethodInitialized_184342249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_184342249 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken != 0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  iVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame;
  iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 == iVar4) {
    return;
  }
  pGVar2 = (__this->fields)._control;
  if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    if (Il2CppMethodInitialized_1843421ce == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843421ce = '\x01';
    }
    if (Il2CppMethodInitialized_1843421cc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
      Il2CppMethodInitialized_1843421cc = '\x01';
    }
    __this_00 = (pGVar2->fields)._OverlayManager_k__BackingField;
    if ((__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) ||
       ((pGVar5 = UnityEngine_Component__GetComponentInParent_object__664f20
                            ((UnityEngine_Component_o *)pGVar2,
                             (MethodInfo_664F20 *)
                             MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot),
        pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0 &&
        (__this_00 = (pGVar5->fields)._Overlays_k__BackingField,
        __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)))) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      x = (UnityEngine_Object_o *)(pGVar2->fields)._opener;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818f71d7;
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                  (pUVar6,(pGVar2->fields)._opener,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    if (Il2CppMethodInitialized_18434224b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      Il2CppMethodInitialized_18434224b = '\x01';
    }
    iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar4;
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
    if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
      (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
    }
    return;
  }
label_1818f71d7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel___ctor(Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


