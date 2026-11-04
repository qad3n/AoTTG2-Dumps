// Type: UI.EmoteTextPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/EmoteTextPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteTextPopup.cs
// --------------------------------

// UI.EmoteTextPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_EmoteTextPopup__get_EscapeBehavior (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_EmoteTextPopup__get_EscapeBehavior(UI_EmoteTextPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.EmoteTextPopup$$get_AnimationTime
// il2cpp: float UI_EmoteTextPopup__get_AnimationTime (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x1822258b0

float UI_EmoteTextPopup__get_AnimationTime(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 0.25;
}


// UI.EmoteTextPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_EmoteTextPopup__get_PopupAnimationType (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_EmoteTextPopup__get_PopupAnimationType(UI_EmoteTextPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.EmoteTextPopup$$Setup
// il2cpp: void UI_EmoteTextPopup__Setup (UI_EmoteTextPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182244c50

void UI_EmoteTextPopup__Setup(UI_EmoteTextPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *value;
  
  if (Il2CppMethodInitialized_184347257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Text/Label");
    Il2CppMethodInitialized_184347257 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Text/Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._text = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._text,value);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,pUVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteTextPopup$$Load
// il2cpp: void UI_EmoteTextPopup__Load (UI_EmoteTextPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x182244bc0

void UI_EmoteTextPopup__Load
               (UI_EmoteTextPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o *offset,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UI_Text_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields)._text;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)(pUVar2,text,(pUVar2->klass->vtable)._75_set_text.method)
    ;
    (__this->fields).ShowTimeLeft = showTime;
    (__this->fields).Character = character;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Character,character);
    fVar3 = (offset->fields).y;
    fVar1 = (offset->fields).z;
    (__this->fields).Offset.fields.x = (offset->fields).x;
    (__this->fields).Offset.fields.y = fVar3;
    (__this->fields).Offset.fields.z = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// UI.EmoteTextPopup$$.ctor
// il2cpp: void UI_EmoteTextPopup___ctor (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_EmoteTextPopup___ctor(UI_EmoteTextPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


