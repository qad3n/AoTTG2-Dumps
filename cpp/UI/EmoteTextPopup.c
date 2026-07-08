// Type: UI.EmoteTextPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EmoteTextPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/EmoteTextPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.EmoteTextPopup$$get_AnimationTime
// il2cpp: float UI_EmoteTextPopup__get_AnimationTime (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x40ad240

float UI_EmoteTextPopup__get_AnimationTime(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 0.25;
}


// UI.EmoteTextPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_EmoteTextPopup__get_PopupAnimationType (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x40ad250

int32_t UI_EmoteTextPopup__get_PopupAnimationType(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.EmoteTextPopup$$Setup
// il2cpp: void UI_EmoteTextPopup__Setup (UI_EmoteTextPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ad260

void UI_EmoteTextPopup__Setup(UI_EmoteTextPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (DAT_05704637 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Panel/Text/Label");
    DAT_05704637 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Text/Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._text = pUVar2;
      il2cpp_runtime_glue(&(__this->fields)._text);
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      il2cpp_runtime_glue(&(__this->fields)._transform,pUVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteTextPopup$$Load
// il2cpp: void UI_EmoteTextPopup__Load (UI_EmoteTextPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x40ad310

void UI_EmoteTextPopup__Load
               (UI_EmoteTextPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o offset,MethodInfo *method
               )

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields)._text;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,text,(pUVar1->klass->vtable)._75_set_text.method);
    (__this->fields).ShowTimeLeft = showTime;
    (__this->fields).Character = character;
    il2cpp_runtime_glue(&(__this->fields).Character,character);
    (__this->fields).Offset.fields.x = (float)(int)offset.fields._0_8_;
    (__this->fields).Offset.fields.y = (float)(int)((ulong)offset.fields._0_8_ >> 0x20);
    (__this->fields).Offset.fields.z = offset.fields.z;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteTextPopup$$.ctor
// il2cpp: void UI_EmoteTextPopup___ctor (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x40aa6a0

void UI_EmoteTextPopup___ctor(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


