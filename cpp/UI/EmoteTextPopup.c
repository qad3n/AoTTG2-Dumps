// Type: UI.EmoteTextPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EmoteTextPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteTextPopup.cs
// --------------------------------

// UI.EmoteTextPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_EmoteTextPopup__get_EscapeBehavior (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x5d211a0

int32_t UI_EmoteTextPopup__get_EscapeBehavior(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.EmoteTextPopup$$get_AnimationTime
// il2cpp: float UI_EmoteTextPopup__get_AnimationTime (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x5d211b0

float UI_EmoteTextPopup__get_AnimationTime(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 0.25;
}


// UI.EmoteTextPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_EmoteTextPopup__get_PopupAnimationType (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x5d211c0

int32_t UI_EmoteTextPopup__get_PopupAnimationType(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.EmoteTextPopup$$Setup
// il2cpp: void UI_EmoteTextPopup__Setup (UI_EmoteTextPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d211d0

void UI_EmoteTextPopup__Setup(UI_EmoteTextPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547dcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Text/Label");
    Il2CppMethodInitialized_07547dcb = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Text/Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._text = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteTextPopup$$Load
// il2cpp: void UI_EmoteTextPopup__Load (UI_EmoteTextPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x5d21280

void UI_EmoteTextPopup__Load
               (UI_EmoteTextPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o offset,MethodInfo *method)

{
  UnityEngine_UI_Text_o *text_00;
  
  if (Il2CppMethodInitialized_07547dcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547dcc = '\x01';
  }
  text_00 = (__this->fields)._text;
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__SetText(text_00,text,(MethodInfo *)0x0);
  (__this->fields).ShowTimeLeft = showTime;
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Character);
  (__this->fields).Offset.fields.x = offset.fields.x;
  (__this->fields).Offset.fields.y = offset.fields.y;
  (__this->fields).Offset.fields.z = offset.fields.z;
  return;
}


// UI.EmoteTextPopup$$.ctor
// il2cpp: void UI_EmoteTextPopup___ctor (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x5d1e370

void UI_EmoteTextPopup___ctor(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


