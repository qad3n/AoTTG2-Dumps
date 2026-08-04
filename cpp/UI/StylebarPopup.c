// Type: UI.StylebarPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/StylebarPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarPopup.cs
// --------------------------------

// UI.StylebarPopup$$get_Title
// il2cpp: System_String_o* UI_StylebarPopup__get_Title (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebc50

System_String_o * UI_StylebarPopup__get_Title(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.StylebarPopup$$get_Width
// il2cpp: float UI_StylebarPopup__get_Width (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebc70

float UI_StylebarPopup__get_Width(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_Height
// il2cpp: float UI_StylebarPopup__get_Height (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebc80

float UI_StylebarPopup__get_Height(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_TopBarHeight
// il2cpp: float UI_StylebarPopup__get_TopBarHeight (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebc90

float UI_StylebarPopup__get_TopBarHeight(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_BottomBarHeight
// il2cpp: float UI_StylebarPopup__get_BottomBarHeight (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebca0

float UI_StylebarPopup__get_BottomBarHeight(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.StylebarPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_StylebarPopup__get_PopupAnimationType (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebcb0

int32_t UI_StylebarPopup__get_PopupAnimationType(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.StylebarPopup$$get_AnimationTime
// il2cpp: float UI_StylebarPopup__get_AnimationTime (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ebcc0

float UI_StylebarPopup__get_AnimationTime(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.StylebarPopup$$Setup
// il2cpp: void UI_StylebarPopup__Setup (UI_StylebarPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43ebcd0

void UI_StylebarPopup__Setup(UI_StylebarPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Sprite_array *pUVar5;
  undefined8 extraout_RDX;
  UI_TooltipPopup_o *__this_01;
  
  if (g_data_057ae4f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_LoadAll_Sprite);
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/HUD/StyleMeterBarSpriteSheet");
    il2cpp_runtime_helper_023445d0(&"SentenceLabel");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/HUD/StyleMeterSpriteSheet");
    il2cpp_runtime_helper_023445d0(&"ScoreLabel");
    il2cpp_runtime_helper_023445d0(&"BottomLabel");
    il2cpp_runtime_helper_023445d0(&"BladeFill");
    il2cpp_runtime_helper_023445d0(&"LetterLabel");
    il2cpp_runtime_helper_023445d0(&"BladeBackground");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/StylebarLabel");
    g_data_057ae4f1 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_UI_Image_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_UI_Image_o *)
           UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)pUVar1,"Prefabs/InGame/StylebarLabel",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
    __this_00 = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
    pUVar1 = pUVar2;
    if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar1 = __this_00;
      pUVar3 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)__this_00,"LetterLabel",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._letterLabel = pUVar4;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._letterLabel,pUVar4);
        pUVar1 = __this_00;
        pUVar3 = UnityEngine_Transform__Find
                           ((UnityEngine_Transform_o *)__this_00,"SentenceLabel",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = (UnityEngine_UI_Text_o *)
                   UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text)
          ;
          (__this->fields)._sentenceLabel = pUVar4;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._sentenceLabel,pUVar4);
          pUVar1 = __this_00;
          pUVar3 = UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)__this_00,"ScoreLabel",(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._scoreLabel = pUVar4;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._scoreLabel,pUVar4);
            pUVar1 = __this_00;
            pUVar3 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)__this_00,"BottomLabel",(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = (UnityEngine_UI_Text_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._bottomLabel = pUVar4;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._bottomLabel,pUVar4);
              pUVar3 = UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)__this_00,"BladeFill",(MethodInfo *)0x0);
              pUVar1 = __this_00;
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = (UnityEngine_UI_Image_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar3,MethodInfo_Image_GetComponent_Image);
                (__this->fields)._bladeFill = pUVar1;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._bladeFill);
                pUVar1 = (__this->fields)._bladeFill;
                if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                  pUVar2 = (UnityEngine_UI_Image_o *)
                           UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    pUVar3 = UnityEngine_Transform__Find
                                       ((UnityEngine_Transform_o *)pUVar2,"BladeBackground",(MethodInfo *)0x0);
                    pUVar1 = pUVar2;
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = (UnityEngine_UI_Image_o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar3,MethodInfo_Image_GetComponent_Image);
                      (__this->fields)._bladeBackground = pUVar1;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._bladeBackground,pUVar1);
                      pUVar5 = (UnityEngine_Sprite_array *)
                               UnityEngine_Resources__LoadAll_object_("UI/Sprites/HUD/StyleMeterBarSpriteSheet",MethodInfo_Sprite_LoadAll_Sprite);
                      (__this->fields)._fillSprites = pUVar5;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._fillSprites,pUVar5);
                      pUVar5 = (UnityEngine_Sprite_array *)
                               UnityEngine_Resources__LoadAll_object_("UI/Sprites/HUD/StyleMeterSpriteSheet",MethodInfo_Sprite_LoadAll_Sprite);
                      (__this->fields)._backgroundSprites = pUVar5;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._backgroundSprites,pUVar5);
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
  il2cpp_runtime_helper_022b2c90();
  __this_01 = *(UI_TooltipPopup_o **)&(pUVar1->fields)._useLegacyMeshGeneration_k__BackingField;
  if (__this_01 != (UI_TooltipPopup_o *)0x0) {
    vtableDispatch = (__this_01->klass->vtable)._23_SyncSettingElements.methodPtr;
    (*vtableDispatch)
              (__this_01,(__this_01->klass->vtable)._23_SyncSettingElements.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.StylebarPopup$$SetText
// il2cpp: void UI_StylebarPopup__SetText (UI_StylebarPopup_o* __this, System_String_o* letter, System_String_o* sentence, const MethodInfo* method);
// 0x43eacf0

void UI_StylebarPopup__SetText
               (UI_StylebarPopup_o *__this,System_String_o *letter,System_String_o *sentence,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  pUVar1 = (__this->fields)._letterLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,letter,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._sentenceLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
      (*vtableDispatch)
                (pUVar1,sentence,(pUVar1->klass->vtable)._75_set_text.method,vtableDispatch);
      return;
    }
  }
  lVar5 = 0;
  uVar4 = (uint)letter;
  il2cpp_runtime_helper_022b2c90();
  uVar3 = 0;
  if (-1 < (int)uVar4) {
    uVar3 = uVar4;
  }
  uVar4 = 9;
  if ((int)uVar3 < 10) {
    uVar4 = uVar3;
  }
  if (uVar4 == *(uint *)(lVar5 + 0xe8)) {
    return;
  }
  *(uint *)(lVar5 + 0xe8) = uVar4;
  lVar2 = *(long *)(lVar5 + 0xd8);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto label_043eadd7;
    if (*(UnityEngine_UI_Image_o **)(lVar5 + 200) != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                (*(UnityEngine_UI_Image_o **)(lVar5 + 200),
                 *(UnityEngine_Sprite_o **)(lVar2 + 0x20 + (ulong)uVar4 * 8),(MethodInfo *)0x0);
      lVar2 = *(long *)(lVar5 + 0xe0);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= *(uint *)(lVar5 + 0xe8)) goto label_043eadd7;
        if (*(UnityEngine_UI_Image_o **)(lVar5 + 0xd0) != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite
                    (*(UnityEngine_UI_Image_o **)(lVar5 + 0xd0),
                     *(UnityEngine_Sprite_o **)(lVar2 + 0x20 + (long)(int)*(uint *)(lVar5 + 0xe8) * 8),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043eadd7:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// UI.StylebarPopup$$SetColor
// il2cpp: void UI_StylebarPopup__SetColor (UI_StylebarPopup_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x43ebfd0

void UI_StylebarPopup__SetColor(UI_StylebarPopup_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  UnityEngine_UI_Text_o *__this_00;
  
  __this_00 = (__this->fields)._letterLabel;
  if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
    vtableDispatch = (__this_00->klass->vtable)._23_set_color.methodPtr;
    (*vtableDispatch)
              (__this_00,(__this_00->klass->vtable)._23_set_color.method,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90(color.fields._0_8_,color.fields._8_8_);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.StylebarPopup$$SetScore
// il2cpp: void UI_StylebarPopup__SetScore (UI_StylebarPopup_o* __this, System_String_o* score, System_String_o* bottom, const MethodInfo* method);
// 0x43eac90

void UI_StylebarPopup__SetScore
               (UI_StylebarPopup_o *__this,System_String_o *score,System_String_o *bottom,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long *plVar2;
  code *vtableDispatch;
  long lVar3;
  uint uVar4;
  undefined8 extraout_RDX;
  uint uVar5;
  long lVar6;
  
  pUVar1 = (__this->fields)._scoreLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,score,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._bottomLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (pUVar1->klass->vtable)._75_set_text.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar1,bottom,(pUVar1->klass->vtable)._75_set_text.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar6 = 0;
  uVar5 = (uint)score;
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar6 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0xa8) + 0x5e8))();
    plVar2 = *(long **)(lVar6 + 0xb0);
    if (plVar2 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar2 + 0x5e8);
      (*vtableDispatch)(plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),vtableDispatch);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = 9;
  if ((int)uVar4 < 10) {
    uVar5 = uVar4;
  }
  if (uVar5 == *(uint *)(lVar6 + 0xe8)) {
    return;
  }
  *(uint *)(lVar6 + 0xe8) = uVar5;
  lVar3 = *(long *)(lVar6 + 0xd8);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto label_043eadd7;
    if (*(UnityEngine_UI_Image_o **)(lVar6 + 200) != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                (*(UnityEngine_UI_Image_o **)(lVar6 + 200),
                 *(UnityEngine_Sprite_o **)(lVar3 + 0x20 + (ulong)uVar5 * 8),(MethodInfo *)0x0);
      lVar3 = *(long *)(lVar6 + 0xe0);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar6 + 0xe8)) goto label_043eadd7;
        if (*(UnityEngine_UI_Image_o **)(lVar6 + 0xd0) != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite
                    (*(UnityEngine_UI_Image_o **)(lVar6 + 0xd0),
                     *(UnityEngine_Sprite_o **)(lVar3 + 0x20 + (long)(int)*(uint *)(lVar6 + 0xe8) * 8),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043eadd7:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// UI.StylebarPopup$$SetFill
// il2cpp: void UI_StylebarPopup__SetFill (UI_StylebarPopup_o* __this, float fill, const MethodInfo* method);
// 0x43eac70

void UI_StylebarPopup__SetFill(UI_StylebarPopup_o *__this,float fill,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  uint uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar5;
  UnityEngine_UI_Image_o *__this_00;
  long lVar6;
  
  uVar5 = (uint)method;
  __this_00 = (__this->fields)._bladeFill;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_fillAmount(__this_00,fill,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this_00->fields).m_ParentMask;
  if (pUVar1 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    (*pUVar1->klass[2].static_fields)();
    plVar2 = *(long **)&(__this_00->fields).m_Maskable;
    if (plVar2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x5e8);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar6 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0xa8) + 0x5e8))();
    plVar2 = *(long **)(lVar6 + 0xb0);
    if (plVar2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x5e8);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar2,extraout_RDX_00,*(undefined8 *)(*plVar2 + 0x5f0),UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = 9;
  if ((int)uVar4 < 10) {
    uVar5 = uVar4;
  }
  if (uVar5 == *(uint *)(lVar6 + 0xe8)) {
    return;
  }
  *(uint *)(lVar6 + 0xe8) = uVar5;
  lVar3 = *(long *)(lVar6 + 0xd8);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto label_043eadd7;
    if (*(UnityEngine_UI_Image_o **)(lVar6 + 200) != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                (*(UnityEngine_UI_Image_o **)(lVar6 + 200),
                 *(UnityEngine_Sprite_o **)(lVar3 + 0x20 + (ulong)uVar5 * 8),(MethodInfo *)0x0);
      lVar3 = *(long *)(lVar6 + 0xe0);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar6 + 0xe8)) goto label_043eadd7;
        if (*(UnityEngine_UI_Image_o **)(lVar6 + 0xd0) != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite
                    (*(UnityEngine_UI_Image_o **)(lVar6 + 0xd0),
                     *(UnityEngine_Sprite_o **)(lVar3 + 0x20 + (long)(int)*(uint *)(lVar6 + 0xe8) * 8),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043eadd7:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// UI.StylebarPopup$$SetRank
// il2cpp: void UI_StylebarPopup__SetRank (UI_StylebarPopup_o* __this, int32_t rank, const MethodInfo* method);
// 0x43ead50

void UI_StylebarPopup__SetRank(UI_StylebarPopup_o *__this,int32_t rank,MethodInfo *method)

{
  UnityEngine_Sprite_array *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (-1 < rank) {
    uVar4 = rank;
  }
  uVar3 = 9;
  if ((int)uVar4 < 10) {
    uVar3 = uVar4;
  }
  if (uVar3 == (__this->fields)._rank) {
    return;
  }
  (__this->fields)._rank = uVar3;
  pUVar1 = (__this->fields)._fillSprites;
  if (pUVar1 != (UnityEngine_Sprite_array *)0x0) {
    if ((uint)pUVar1->max_length <= uVar3) goto label_043eadd7;
    pUVar2 = (__this->fields)._bladeFill;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite(pUVar2,pUVar1->m_Items[uVar3],(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._backgroundSprites;
      if (pUVar1 != (UnityEngine_Sprite_array *)0x0) {
        uVar4 = (__this->fields)._rank;
        if ((uint)pUVar1->max_length <= uVar4) goto label_043eadd7;
        pUVar2 = (__this->fields)._bladeBackground;
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(pUVar2,pUVar1->m_Items[(int)uVar4],(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043eadd7:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// UI.StylebarPopup$$.ctor
// il2cpp: void UI_StylebarPopup___ctor (UI_StylebarPopup_o* __this, const MethodInfo* method);
// 0x43ec000

void UI_StylebarPopup___ctor(UI_StylebarPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


