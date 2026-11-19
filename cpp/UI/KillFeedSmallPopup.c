// Type: UI.KillFeedSmallPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/KillFeedSmallPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedSmallPopup.cs
// --------------------------------

// UI.KillFeedSmallPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_KillFeedSmallPopup__get_EscapeBehavior (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34510

int32_t UI_KillFeedSmallPopup__get_EscapeBehavior(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.KillFeedSmallPopup$$get_Title
// il2cpp: System_String_o* UI_KillFeedSmallPopup__get_Title (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34520

System_String_o * UI_KillFeedSmallPopup__get_Title(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.KillFeedSmallPopup$$get_Width
// il2cpp: float UI_KillFeedSmallPopup__get_Width (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34540

float UI_KillFeedSmallPopup__get_Width(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_Height
// il2cpp: float UI_KillFeedSmallPopup__get_Height (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34550

float UI_KillFeedSmallPopup__get_Height(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_TopBarHeight
// il2cpp: float UI_KillFeedSmallPopup__get_TopBarHeight (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34560

float UI_KillFeedSmallPopup__get_TopBarHeight(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_BottomBarHeight
// il2cpp: float UI_KillFeedSmallPopup__get_BottomBarHeight (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34570

float UI_KillFeedSmallPopup__get_BottomBarHeight(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillFeedSmallPopup__get_PopupAnimationType (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34580

int32_t UI_KillFeedSmallPopup__get_PopupAnimationType(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.KillFeedSmallPopup$$get_AnimationTime
// il2cpp: float UI_KillFeedSmallPopup__get_AnimationTime (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34590

float UI_KillFeedSmallPopup__get_AnimationTime(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.KillFeedSmallPopup$$Setup
// il2cpp: void UI_KillFeedSmallPopup__Setup (UI_KillFeedSmallPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d345a0

void UI_KillFeedSmallPopup__Setup(UI_KillFeedSmallPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  PatreonEffects_NameEffectApplier_o *pPVar5;
  UnityEngine_UI_RawImage_o *pUVar6;
  
  if (Il2CppMethodInitialized_07547e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectApplier);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreLabel/BackgroundLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/KillFeedLabelSmall");
    il2cpp_codegen_initialize_runtime_metadata(&"RightLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftLabel");
    Il2CppMethodInitialized_07547e41 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/KillFeedLabelSmall",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LeftLabel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        (__this->fields)._leftLabel = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._leftLabel);
        pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"RightLabel",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            (__this->fields)._rightLabel = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._rightLabel);
            pUVar3 = (__this->fields)._leftLabel;
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pPVar5 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar4,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectApplier);
                (__this->fields)._leftStyle = pPVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._leftStyle);
                pUVar3 = (__this->fields)._rightLabel;
                if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    pPVar5 = UnityEngine_GameObject__AddComponent_object_
                                       (pUVar4,(MethodInfo_353B6A0 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectApplier
                                       );
                    (__this->fields)._rightStyle = pPVar5;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._rightStyle);
                    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Text);
                        (__this->fields)._scoreLabel = pUVar3;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreLabel);
                        pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                          pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel/BackgroundLabel",(MethodInfo *)0x0)
                          ;
                          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                            pUVar3 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar1,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            (__this->fields)._backgroundLabel = pUVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundLabel);
                            pUVar3 = (__this->fields)._scoreLabel;
                            if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
                            }
                            UI_LanguageFonts__KeepDesignedFont(pUVar3,(MethodInfo *)0x0);
                            UI_LanguageFonts__KeepDesignedFont
                                      ((__this->fields)._backgroundLabel,(MethodInfo *)0x0);
                            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                               (pUVar2,(MethodInfo_353B730 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                                               );
                            (__this->fields)._image = pUVar6;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
                            pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                              pUVar1 = UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
                              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                                pUVar1 = UnityEngine_Transform__Find
                                                   (pUVar1,"Border",(MethodInfo *)0x0);
                                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar2 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
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
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KillFeedSmallPopup$$ShowImmediate
// il2cpp: void UI_KillFeedSmallPopup__ShowImmediate (UI_KillFeedSmallPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, const MethodInfo* method);
// 0x5d34910

void UI_KillFeedSmallPopup__ShowImmediate
               (UI_KillFeedSmallPopup_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  UI_KillFeedSmallPopup__ShowImmediate_5c34930
            (__this,killer,victim,score,weapon,timeLeft,-1,-1,in_stack_fffffffffffffff0);
  return;
}


// UI.KillFeedSmallPopup$$ShowImmediate
// il2cpp: void UI_KillFeedSmallPopup__ShowImmediate (UI_KillFeedSmallPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, int32_t killerActorNumber, int32_t victimActorNumber, const MethodInfo* method);
// 0x5d34930

void UI_KillFeedSmallPopup__ShowImmediate_5c34930
               (UI_KillFeedSmallPopup_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,int32_t killerActorNumber,int32_t victimActorNumber,
               MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  PatreonEffects_NameEffectApplier_o *pPVar2;
  UnityEngine_Texture_o *value;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  UnityEngine_UI_Text_c *pUVar5;
  MethodInfo *pMVar6;
  undefined8 uVar7;
  UnityEngine_Color_o UVar8;
  int32_t local_3c;
  int32_t local_38;
  float local_34;
  
  local_3c = score;
  local_38 = killerActorNumber;
  local_34 = timeLeft;
  if (Il2CppMethodInitialized_07547e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547e42 = '\x01';
  }
  (__this->fields).Killer = killer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Killer);
  (__this->fields).Victim = victim;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Victim);
  (__this->fields).KillerActorNumber = local_38;
  (__this->fields).VictimActorNumber = victimActorNumber;
  (__this->fields).Score = score;
  (__this->fields).Weapon = weapon;
  pMVar6 = (MethodInfo *)weapon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weapon);
  __this_00 = (__this->fields)._image;
  value = (UnityEngine_Texture_o *)UI_KillFeedBigPopup__LoadWeaponIcon(weapon,pMVar6);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._leftLabel;
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__SetText(pUVar1,killer,(MethodInfo *)0x0);
    UI_LanguageFonts__SetText((__this->fields)._rightLabel,victim,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._leftStyle;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pPVar3 = Utility_Util__FindPlayerById(local_38,(MethodInfo *)0x0);
    if (pPVar2 != (PatreonEffects_NameEffectApplier_o *)0x0) {
      PatreonEffects_NameEffectApplier__ApplyForPlayer(pPVar2,pPVar3,(MethodInfo *)0x0);
      pPVar2 = (__this->fields)._rightStyle;
      pPVar3 = Utility_Util__FindPlayerById(victimActorNumber,(MethodInfo *)0x0);
      if (pPVar2 != (PatreonEffects_NameEffectApplier_o *)0x0) {
        PatreonEffects_NameEffectApplier__ApplyForPlayer(pPVar2,pPVar3,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._scoreLabel;
        pSVar4 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,pSVar4,(pUVar1->klass->vtable)._75_set_text.method);
          pUVar1 = (__this->fields)._backgroundLabel;
          pSVar4 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                      (pUVar1,pSVar4,(pUVar1->klass->vtable)._75_set_text.method);
            pUVar1 = (__this->fields)._backgroundLabel;
            if (local_3c < 1000) {
              if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05d34b8f;
              pUVar5 = pUVar1->klass;
              pMVar6 = (pUVar5->vtable)._23_set_color.method;
              uVar7 = 0x3f8000003f800000;
              UVar8.fields._8_8_ = uVar7;
            }
            else {
              if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05d34b8f;
              pUVar5 = pUVar1->klass;
              pMVar6 = (pUVar5->vtable)._23_set_color.method;
              uVar7 = 0x3f800000;
              UVar8.fields._8_8_ = 0x3f80000000000000;
            }
            UVar8.fields.b = (float)(int)UVar8.fields._8_8_;
            UVar8.fields.a = (float)(int)((ulong)UVar8.fields._8_8_ >> 0x20);
            UVar8.fields.r = (float)(int)uVar7;
            UVar8.fields.g = (float)(int)((ulong)uVar7 >> 0x20);
            (*(pUVar5->vtable)._23_set_color.methodPtr)(pUVar1,UVar8,pMVar6);
            (__this->fields).IsActive = false;
            (__this->fields).TimeLeft = local_34;
            UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05d34b8f:
  ThrowNullReferenceException();
}


// UI.KillFeedSmallPopup$$.ctor
// il2cpp: void UI_KillFeedSmallPopup___ctor (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x5d34ba0

void UI_KillFeedSmallPopup___ctor(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


