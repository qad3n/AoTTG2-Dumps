// Type: UI.ModerationBatchBanPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ModerationBatchBanPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModerationBatchBanPopup$$get_DialogId
// il2cpp: System_String_o* UI_ModerationBatchBanPopup__get_DialogId (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x18225db00

System_String_o *
UI_ModerationBatchBanPopup__get_DialogId(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-batch-ban");
    Il2CppMethodInitialized_1843472e1 = '\x01';
  }
  return "ingame-moderation-batch-ban";
}


// UI.ModerationBatchBanPopup$$Setup
// il2cpp: void UI_ModerationBatchBanPopup__Setup (UI_ModerationBatchBanPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18225d880

void UI_ModerationBatchBanPopup__Setup
               (UI_ModerationBatchBanPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  TMPro_TMP_InputField_o *value;
  
  if (Il2CppMethodInitialized_1843472e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-batch-ban-targets");
    Il2CppMethodInitialized_1843472e2 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._Dialog_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    __this_01 = Gisketch_Aottg2UI_Building_GisketchView__Find
                          (__this_00,"ingame-moderation-batch-ban-targets",(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__GetComponent_object_
                        (__this_01,
                         (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      (__this->fields)._targets = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._targets,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ModerationBatchBanPopup$$Submit
// il2cpp: void UI_ModerationBatchBanPopup__Submit (UI_ModerationBatchBanPopup_o* __this, System_String_o* action, const MethodInfo* method);
// 0x18225d920

void UI_ModerationBatchBanPopup__Submit
               (UI_ModerationBatchBanPopup_o *__this,System_String_o *action,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843472e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.ip-ban");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.session-unban");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.ip-unban");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.session-ban");
    Il2CppMethodInitialized_1843472e3 = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    bVar3 = System_String__op_Equality(action,"ingame.moderation.batch.session-ban",(MethodInfo *)0x0);
    if (bVar3) {
      pTVar1 = (__this->fields)._targets;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18225dadf;
      pSVar2 = (pTVar1->fields).m_Text;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__BatchSessionBan(pSVar2,(MethodInfo *)0x0);
    }
    else {
      bVar3 = System_String__op_Equality(action,"ingame.moderation.batch.ip-ban",(MethodInfo *)0x0);
      if (bVar3) {
        pTVar1 = (__this->fields)._targets;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18225dadf;
        pSVar2 = (pTVar1->fields).m_Text;
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        Anticheat_ModeratorManager__BatchIPBan(pSVar2,(MethodInfo *)0x0);
      }
      else {
        bVar3 = System_String__op_Equality(action,"ingame.moderation.batch.session-unban",(MethodInfo *)0x0);
        if (bVar3) {
          pTVar1 = (__this->fields)._targets;
          if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_18225dadf:
            ThrowNullReferenceException();
          }
          pSVar2 = (pTVar1->fields).m_Text;
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          Anticheat_ModeratorManager__BatchSessionUnban(pSVar2,(MethodInfo *)0x0);
        }
        else {
          bVar3 = System_String__op_Equality(action,"ingame.moderation.batch.ip-unban",(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          pTVar1 = (__this->fields)._targets;
          if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_18225dadf;
          pSVar2 = (pTVar1->fields).m_Text;
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          Anticheat_ModeratorManager__BatchIPUnban(pSVar2,(MethodInfo *)0x0);
        }
      }
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.ModerationBatchBanPopup$$.ctor
// il2cpp: void UI_ModerationBatchBanPopup___ctor (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x18225daf0

void
UI_ModerationBatchBanPopup___ctor(UI_ModerationBatchBanPopup_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor((UI_MapEditorVersionConversionPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


