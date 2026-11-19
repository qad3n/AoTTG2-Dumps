// Type: UI.ModerationReasonPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ModerationReasonPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModerationReasonPopup$$get_DialogId
// il2cpp: System_String_o* UI_ModerationReasonPopup__get_DialogId (UI_ModerationReasonPopup_o* __this, const MethodInfo* method);
// 0x5d39ec0

System_String_o *
UI_ModerationReasonPopup__get_DialogId(UI_ModerationReasonPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason");
    Il2CppMethodInitialized_07547e61 = '\x01';
  }
  return "ingame-moderation-reason";
}


// UI.ModerationReasonPopup$$Setup
// il2cpp: void UI_ModerationReasonPopup__Setup (UI_ModerationReasonPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d39ef0

void UI_ModerationReasonPopup__Setup
               (UI_ModerationReasonPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  TMPro_TMP_InputField_o *pTVar1;
  
  if (Il2CppMethodInitialized_07547e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason-reason");
    Il2CppMethodInitialized_07547e62 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._Dialog_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    __this_01 = Gisketch_Aottg2UI_Building_GisketchView__Find
                          (__this_00,"ingame-moderation-reason-reason",(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pTVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
      ;
      (__this->fields)._reason = pTVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._reason);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ModerationReasonPopup$$Show
// il2cpp: void UI_ModerationReasonPopup__Show (UI_ModerationReasonPopup_o* __this, System_String_o* actionTitle, System_Action_string__o* onConfirm, const MethodInfo* method);
// 0x5d39f90

void UI_ModerationReasonPopup__Show
               (UI_ModerationReasonPopup_o *__this,System_String_o *actionTitle,
               System_Action_string__o *onConfirm,MethodInfo *method)

{
  TMPro_TMP_InputField_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason-title");
    Il2CppMethodInitialized_07547e63 = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    return;
  }
  (__this->fields)._onConfirm = onConfirm;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onConfirm);
  __this_00 = (__this->fields)._reason;
  if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify
              (__this_00,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    __this_01 = (__this->fields)._View_k__BackingField;
    if (__this_01 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgInGameView__SetState
                (__this_01,"ingame-moderation-reason-title",actionTitle,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
                ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ModerationReasonPopup$$Confirm
// il2cpp: void UI_ModerationReasonPopup__Confirm (UI_ModerationReasonPopup_o* __this, const MethodInfo* method);
// 0x5d3a040

void UI_ModerationReasonPopup__Confirm(UI_ModerationReasonPopup_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsActive != false) {
    pSVar1 = (__this->fields)._onConfirm;
    (__this->fields)._onConfirm = (System_Action_string__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onConfirm);
    pTVar2 = (__this->fields)._reason;
    if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
       (pSVar3 = (pTVar2->fields).m_Text, pSVar3 == (System_String_o *)0x0)) {
      ThrowNullReferenceException();
    }
    pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
      return;
    }
  }
  return;
}


// UI.ModerationReasonPopup$$.ctor
// il2cpp: void UI_ModerationReasonPopup___ctor (UI_ModerationReasonPopup_o* __this, const MethodInfo* method);
// 0x5d3a0d0

void UI_ModerationReasonPopup___ctor(UI_ModerationReasonPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


