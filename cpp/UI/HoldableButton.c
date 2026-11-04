// Type: UI.HoldableButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HoldableButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/HoldableButton.cs
// --------------------------------

// UI.HoldableButton$$add_OnClick
// il2cpp: void UI_HoldableButton__add_OnClick (UI_HoldableButton_o* __this, System_Action_o* value, const MethodInfo* method);
// 0x1822117a0

void UI_HoldableButton__add_OnClick(UI_HoldableButton_o *__this,System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434711d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_18434711d = '\x01';
  }
  a = (__this->fields).OnClick;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).OnClick);
    bVar4 = pSVar2 == a;
    a = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// UI.HoldableButton$$remove_OnClick
// il2cpp: void UI_HoldableButton__remove_OnClick (UI_HoldableButton_o* __this, System_Action_o* value, const MethodInfo* method);
// 0x182211840

void UI_HoldableButton__remove_OnClick(UI_HoldableButton_o *__this,System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434711e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_18434711e = '\x01';
  }
  source = (__this->fields).OnClick;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).OnClick);
    bVar4 = pSVar2 == source;
    source = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// UI.HoldableButton$$Update
// il2cpp: void UI_HoldableButton__Update (UI_HoldableButton_o* __this, const MethodInfo* method);
// 0x182211700

void UI_HoldableButton__Update(UI_HoldableButton_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  float fVar2;
  float fVar3;
  
  if ((__this->fields).isHeld != false) {
    fVar3 = (__this->fields).holdTime;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 + fVar3;
    (__this->fields).holdTime = fVar2;
    if ((__this->fields).HoldDelay <= fVar2) {
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if ((__this->fields).nextClickTime <= fVar3) {
        pSVar1 = (__this->fields).OnClick;
        if (pSVar1 != (System_Action_o *)0x0) {
          (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
        }
        fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields).nextClickTime = 1.0 / (__this->fields).ClickSpeed + fVar3;
      }
    }
  }
  return;
}


// UI.HoldableButton$$OnPointerDown
// il2cpp: void UI_HoldableButton__OnPointerDown (UI_HoldableButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822116b0

void UI_HoldableButton__OnPointerDown
               (UI_HoldableButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  float fVar2;
  
  (__this->fields).isHeld = true;
  (__this->fields).holdTime = 0.0;
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  pSVar1 = (__this->fields).OnClick;
  (__this->fields).nextClickTime = fVar2 + (__this->fields).HoldDelay;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// UI.HoldableButton$$OnPointerUp
// il2cpp: void UI_HoldableButton__OnPointerUp (UI_HoldableButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x180acca60

void
UI_HoldableButton__OnPointerUp(UI_HoldableButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  (__this->fields).isHeld = false;
  return;
}


// UI.HoldableButton$$.ctor
// il2cpp: void UI_HoldableButton___ctor (UI_HoldableButton_o* __this, const MethodInfo* method);
// 0x182211780

void UI_HoldableButton___ctor(UI_HoldableButton_o *__this,MethodInfo *method)

{
  (__this->fields).ClickSpeed = 12.0;
  (__this->fields).HoldDelay = 0.5;
  UnityEngine_EventSystems_EventTrigger___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


