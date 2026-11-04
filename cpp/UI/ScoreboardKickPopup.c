// Type: UI.ScoreboardKickPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardKickPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ScoreboardKickPopup$$get_DialogId
// il2cpp: System_String_o* UI_ScoreboardKickPopup__get_DialogId (UI_ScoreboardKickPopup_o* __this, const MethodInfo* method);
// 0x182262f60

System_String_o * UI_ScoreboardKickPopup__get_DialogId(UI_ScoreboardKickPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434730b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-kick");
    Il2CppMethodInitialized_18434730b = '\x01';
  }
  return "ingame-scoreboard-kick";
}


// UI.ScoreboardKickPopup$$Show
// il2cpp: void UI_ScoreboardKickPopup__Show (UI_ScoreboardKickPopup_o* __this, System_String_o* message, UnityEngine_Events_UnityAction_o* onConfirm, const MethodInfo* method);
// 0x182262e90

void UI_ScoreboardKickPopup__Show
               (UI_ScoreboardKickPopup_o *__this,System_String_o *message,
               UnityEngine_Events_UnityAction_o *onConfirm,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  TMPro_TMP_Text_o *pTVar1;
  
  if (Il2CppMethodInitialized_18434730c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-kick-message");
    Il2CppMethodInitialized_18434730c = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    return;
  }
  (__this->fields)._onConfirm = onConfirm;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onConfirm,onConfirm);
  __this_00 = (__this->fields)._Dialog_k__BackingField;
  if (((__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
      (__this_01 = Gisketch_Aottg2UI_Building_GisketchView__Find
                             (__this_00,"ingame-scoreboard-kick-message",(MethodInfo *)0x0),
      __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
     (pTVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text),
     pTVar1 != (TMPro_TMP_Text_o *)0x0)) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,message,(pTVar1->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
              ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardKickPopup$$Confirm
// il2cpp: void UI_ScoreboardKickPopup__Confirm (UI_ScoreboardKickPopup_o* __this, const MethodInfo* method);
// 0x182262e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182262e7a: mov rdi, qword ptr [rsp + 0x30]

void UI_ScoreboardKickPopup__Confirm(UI_ScoreboardKickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if ((__this->fields).IsActive != false) {
    pUVar1 = (__this->fields)._onConfirm;
    (__this->fields)._onConfirm = (UnityEngine_Events_UnityAction_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onConfirm,(void *)0x0);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    }
  }
  return;
}


// UI.ScoreboardKickPopup$$.ctor
// il2cpp: void UI_ScoreboardKickPopup___ctor (UI_ScoreboardKickPopup_o* __this, const MethodInfo* method);
// 0x18225daf0

void
UI_ScoreboardKickPopup___ctor(UI_ScoreboardKickPopup_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor((UI_MapEditorVersionConversionPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


