// Type: UI.HoldableButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/HoldableButton.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/HoldableButton.cs  [CHANGED since prior version]
// --------------------------------

// UI.HoldableButton$$add_OnClick
// il2cpp: void UI_HoldableButton__add_OnClick (UI_HoldableButton_o* __this, System_Action_o* value, const MethodInfo* method);
// 0x4083570

void UI_HoldableButton__add_OnClick
               (UI_HoldableButton_o *__this,System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *a;
  bool bVar3;
  
  if (DAT_05704532 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704532 = '\x01';
  }
  a = (__this->fields).OnClick;
  while( true ) {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) break;
    pSVar1 = (System_Action_o *)il2cpp_glue_022c2530(&(__this->fields).OnClick,pSVar2,a);
    bVar3 = a == pSVar1;
    a = pSVar1;
    if (bVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar2);
}


// UI.HoldableButton$$remove_OnClick
// il2cpp: void UI_HoldableButton__remove_OnClick (UI_HoldableButton_o* __this, System_Action_o* value, const MethodInfo* method);
// 0x4083600

void UI_HoldableButton__remove_OnClick
               (UI_HoldableButton_o *__this,System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *source;
  bool bVar3;
  
  if (DAT_05704533 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704533 = '\x01';
  }
  source = (__this->fields).OnClick;
  while( true ) {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) break;
    pSVar1 = (System_Action_o *)il2cpp_glue_022c2530(&(__this->fields).OnClick,pSVar2,source);
    bVar3 = source == pSVar1;
    source = pSVar1;
    if (bVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar2);
}


// UI.HoldableButton$$Update
// il2cpp: void UI_HoldableButton__Update (UI_HoldableButton_o* __this, const MethodInfo* method);
// 0x4083690

void UI_HoldableButton__Update(UI_HoldableButton_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  float fVar2;
  float fVar3;
  
  if ((char)(__this->fields).isHeld != '\0') {
    fVar3 = (__this->fields).holdTime;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 + fVar3;
    (__this->fields).holdTime = fVar2;
    if ((__this->fields).HoldDelay <= fVar2) {
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if ((__this->fields).nextClickTime <= fVar3) {
        pSVar1 = (__this->fields).OnClick;
        if (pSVar1 != (System_Action_o *)0x0) {
          (*(code *)(pSVar1->fields).invoke_impl)
                    ((pSVar1->fields).method_code,(pSVar1->fields).method);
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
// 0x4083710

void UI_HoldableButton__OnPointerDown
               (UI_HoldableButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  float fVar2;
  
  *(undefined1 *)&(__this->fields).isHeld = 1;
  (__this->fields).holdTime = 0.0;
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields).nextClickTime = fVar2 + (__this->fields).HoldDelay;
  pSVar1 = (__this->fields).OnClick;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// UI.HoldableButton$$OnPointerUp
// il2cpp: void UI_HoldableButton__OnPointerUp (UI_HoldableButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4083750

void UI_HoldableButton__OnPointerUp
               (UI_HoldableButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).isHeld = 0;
  return;
}


// UI.HoldableButton$$.ctor
// il2cpp: void UI_HoldableButton___ctor (UI_HoldableButton_o* __this, const MethodInfo* method);
// 0x4083760

void UI_HoldableButton___ctor(UI_HoldableButton_o *__this,MethodInfo *method)

{
  (__this->fields).ClickSpeed = 12.0;
  (__this->fields).HoldDelay = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


