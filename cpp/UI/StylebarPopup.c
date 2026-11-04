// Type: UI.StylebarPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/StylebarPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarPopup.cs
// --------------------------------

// UI.StylebarPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_StylebarPopup__get_EscapeBehavior (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_StylebarPopup__get_EscapeBehavior(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.StylebarPopup$$get_Title
// il2cpp: System_String_o* UI_StylebarPopup__get_Title (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_StylebarPopup__get_Title(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.StylebarPopup$$get_Width
// il2cpp: float UI_StylebarPopup__get_Width (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_StylebarPopup__get_Width(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_Height
// il2cpp: float UI_StylebarPopup__get_Height (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_StylebarPopup__get_Height(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_TopBarHeight
// il2cpp: float UI_StylebarPopup__get_TopBarHeight (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_StylebarPopup__get_TopBarHeight(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_BottomBarHeight
// il2cpp: float UI_StylebarPopup__get_BottomBarHeight (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_StylebarPopup__get_BottomBarHeight(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_StylebarPopup__get_PopupAnimationType (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_StylebarPopup__get_PopupAnimationType(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.StylebarPopup$$get_AnimationTime
// il2cpp: float UI_StylebarPopup__get_AnimationTime (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x182245d40

float
UI_StylebarPopup__get_AnimationTime(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  return 0.2;
}


// UI.StylebarPopup$$Setup
// il2cpp: void UI_StylebarPopup__Setup (UI_StylebarPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182281190

void UI_StylebarPopup__Setup(UI_StylebarPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Sprite_array *pUVar5;
  
  if (Il2CppMethodInitialized_184347388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_LoadAll_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/HUD/StyleMeterBarSpriteSheet");
    il2cpp_codegen_initialize_runtime_metadata(&"SentenceLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/HUD/StyleMeterSpriteSheet");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeFill");
    il2cpp_codegen_initialize_runtime_metadata(&"LetterLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/StylebarLabel");
    Il2CppMethodInitialized_184347388 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/StylebarLabel",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar1,"LetterLabel",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        (__this->fields)._letterLabel = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._letterLabel,pUVar3);
        pUVar2 = UnityEngine_Transform__Find(pUVar1,"SentenceLabel",(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          (__this->fields)._sentenceLabel = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._sentenceLabel,pUVar3);
          pUVar2 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            (__this->fields)._scoreLabel = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreLabel,pUVar3);
            pUVar2 = UnityEngine_Transform__Find(pUVar1,"BottomLabel",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar2,
                                  (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
              (__this->fields)._bottomLabel = pUVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomLabel,pUVar3);
              pUVar1 = UnityEngine_Transform__Find(pUVar1,"BladeFill",(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar1,
                                    (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
                (__this->fields)._bladeFill = pUVar4;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeFill,pUVar4);
                pUVar4 = (__this->fields)._bladeFill;
                if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                  pUVar1 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar1 = UnityEngine_Transform__Find(pUVar1,"BladeBackground",(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar4 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar1,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Image);
                      (__this->fields)._bladeBackground = pUVar4;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeBackground,pUVar4);
                      pUVar5 = (UnityEngine_Sprite_array *)
                               UnityEngine_Resources__LoadAll_object_
                                         ("UI/Sprites/HUD/StyleMeterBarSpriteSheet",
                                          (MethodInfo_7964F0 *)MethodInfo_UnityEngine_Resources_LoadAll_Sprite
                                         );
                      (__this->fields)._fillSprites = pUVar5;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._fillSprites,pUVar5);
                      pUVar5 = (UnityEngine_Sprite_array *)
                               UnityEngine_Resources__LoadAll_object_
                                         ("UI/Sprites/HUD/StyleMeterSpriteSheet",
                                          (MethodInfo_7964F0 *)MethodInfo_UnityEngine_Resources_LoadAll_Sprite
                                         );
                      (__this->fields)._backgroundSprites = pUVar5;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundSprites,pUVar5);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.StylebarPopup$$SetText
// il2cpp: void UI_StylebarPopup__SetText (UI_StylebarPopup_o* __this, System_String_o* letter, System_String_o* sentence, const MethodInfo* method);
// 0x182281130

void UI_StylebarPopup__SetText
               (UI_StylebarPopup_o *__this,System_String_o *letter,System_String_o *sentence,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields)._letterLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,letter,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._sentenceLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,sentence,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.StylebarPopup$$SetColor
// il2cpp: void UI_StylebarPopup__SetColor (UI_StylebarPopup_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x182280fc0

void UI_StylebarPopup__SetColor(UI_StylebarPopup_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_Color_o local_18;
  
  pUVar1 = (__this->fields)._letterLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    local_18.fields.r = (color->fields).r;
    local_18.fields.g = (color->fields).g;
    local_18.fields.b = (color->fields).b;
    local_18.fields.a = (color->fields).a;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,&local_18,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.StylebarPopup$$SetScore
// il2cpp: void UI_StylebarPopup__SetScore (UI_StylebarPopup_o* __this, System_String_o* score, System_String_o* bottom, const MethodInfo* method);
// 0x1822810d0

void UI_StylebarPopup__SetScore
               (UI_StylebarPopup_o *__this,System_String_o *score,System_String_o *bottom,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields)._scoreLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,score,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._bottomLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,bottom,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.StylebarPopup$$SetFill
// il2cpp: void UI_StylebarPopup__SetFill (UI_StylebarPopup_o* __this, float fill, const MethodInfo* method);
// 0x182281000

void UI_StylebarPopup__SetFill(UI_StylebarPopup_o *__this,float fill,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  
  __this_00 = (__this->fields)._bladeFill;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_fillAmount(__this_00,fill,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.StylebarPopup$$SetRank
// il2cpp: void UI_StylebarPopup__SetRank (UI_StylebarPopup_o* __this, int32_t rank, const MethodInfo* method);
// 0x182281030

void UI_StylebarPopup__SetRank(UI_StylebarPopup_o *__this,int32_t rank,MethodInfo *method)

{
  UnityEngine_Sprite_array *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (-1 < rank) {
    uVar3 = rank;
  }
  if (9 < (int)uVar3) {
    uVar3 = 9;
  }
  if (uVar3 == (__this->fields)._rank) {
    return;
  }
  pUVar1 = (__this->fields)._fillSprites;
  (__this->fields)._rank = uVar3;
  if (pUVar1 != (UnityEngine_Sprite_array *)0x0) {
    if ((uint)pUVar1->max_length <= uVar3) {
label_1822810c8:
      ThrowIndexOutOfRangeException();
    }
    pUVar2 = (__this->fields)._bladeFill;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite(pUVar2,pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._backgroundSprites;
      if (pUVar1 != (UnityEngine_Sprite_array *)0x0) {
        uVar3 = (__this->fields)._rank;
        if ((uint)pUVar1->max_length <= uVar3) goto label_1822810c8;
        pUVar2 = (__this->fields)._bladeBackground;
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(pUVar2,pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.StylebarPopup$$.ctor
// il2cpp: void UI_StylebarPopup___ctor (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_StylebarPopup___ctor(UI_StylebarPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


