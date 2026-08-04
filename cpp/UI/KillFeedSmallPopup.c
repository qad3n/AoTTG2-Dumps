// Type: UI.KillFeedSmallPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/KillFeedSmallPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedSmallPopup.cs
// --------------------------------

// UI.KillFeedSmallPopup$$get_Title
// il2cpp: System_String_o* UI_KillFeedSmallPopup__get_Title (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d0860

System_String_o * UI_KillFeedSmallPopup__get_Title(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.KillFeedSmallPopup$$get_Width
// il2cpp: float UI_KillFeedSmallPopup__get_Width (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d0880

float UI_KillFeedSmallPopup__get_Width(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_Height
// il2cpp: float UI_KillFeedSmallPopup__get_Height (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d0890

float UI_KillFeedSmallPopup__get_Height(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_TopBarHeight
// il2cpp: float UI_KillFeedSmallPopup__get_TopBarHeight (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d08a0

float UI_KillFeedSmallPopup__get_TopBarHeight(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_BottomBarHeight
// il2cpp: float UI_KillFeedSmallPopup__get_BottomBarHeight (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d08b0

float UI_KillFeedSmallPopup__get_BottomBarHeight(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillFeedSmallPopup__get_PopupAnimationType (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d08c0

int32_t UI_KillFeedSmallPopup__get_PopupAnimationType(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.KillFeedSmallPopup$$get_AnimationTime
// il2cpp: float UI_KillFeedSmallPopup__get_AnimationTime (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d08d0

float UI_KillFeedSmallPopup__get_AnimationTime(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.KillFeedSmallPopup$$Setup
// il2cpp: void UI_KillFeedSmallPopup__Setup (UI_KillFeedSmallPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d08e0

void UI_KillFeedSmallPopup__Setup(UI_KillFeedSmallPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *killer;
  UnityEngine_GameObject_o *pUVar5;
  PatreonEffects_NameEffectApplier_o *pPVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  int32_t score;
  System_String_o *victim;
  System_String_o *in_R8;
  float timeLeft;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (g_data_057ae42b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectApplier_AddComponent_NameEffectApplier);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&"ScoreLabel/BackgroundLabel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/KillFeedLabelSmall");
    il2cpp_runtime_helper_023445d0(&"RightLabel");
    il2cpp_runtime_helper_023445d0(&"ScoreLabel");
    il2cpp_runtime_helper_023445d0(&"Border");
    il2cpp_runtime_helper_023445d0(&"LeftLabel");
    g_data_057ae42b = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  score = 0x55d01f0;
  killer = "Prefabs/InGame/KillFeedLabelSmall";
  pUVar2 = (UnityEngine_UI_Text_o *)
           UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)pUVar1,(System_String_o *)"Prefabs/InGame/KillFeedLabelSmall",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    killer = (UnityEngine_UI_Text_o *)0x0;
    pUVar1 = pUVar2;
    pUVar3 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      score = 0x55cbf28;
      killer = "LeftLabel";
      pUVar4 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar3,(System_String_o *)"LeftLabel",(MethodInfo *)0x0)
      ;
      pUVar1 = pUVar3;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._leftLabel = pUVar1;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._leftLabel);
        killer = (UnityEngine_UI_Text_o *)0x0;
        pUVar1 = pUVar2;
        pUVar3 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          score = 0x55d1818;
          killer = "RightLabel";
          pUVar4 = UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)pUVar3,(System_String_o *)"RightLabel",
                              (MethodInfo *)0x0);
          pUVar1 = pUVar3;
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            killer = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._rightLabel = killer;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._rightLabel);
            pUVar1 = (__this->fields)._leftLabel;
            if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
              killer = (UnityEngine_UI_Text_o *)0x0;
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                killer = (UnityEngine_UI_Text_o *)
                         UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_NameEffectApplier_AddComponent_NameEffectApplier);
                (__this->fields)._leftStyle = (PatreonEffects_NameEffectApplier_o *)killer;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._leftStyle);
                pUVar1 = (__this->fields)._rightLabel;
                if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                  killer = (UnityEngine_UI_Text_o *)0x0;
                  pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                    pPVar6 = (PatreonEffects_NameEffectApplier_o *)
                             UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_NameEffectApplier_AddComponent_NameEffectApplier);
                    (__this->fields)._rightStyle = pPVar6;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._rightStyle);
                    killer = (UnityEngine_UI_Text_o *)0x0;
                    pUVar1 = pUVar2;
                    pUVar3 = (UnityEngine_UI_Text_o *)
                             UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                      score = 0x55d1ed0;
                      killer = "ScoreLabel";
                      pUVar4 = UnityEngine_Transform__Find
                                         ((UnityEngine_Transform_o *)pUVar3,(System_String_o *)"ScoreLabel",
                                          (MethodInfo *)0x0);
                      pUVar1 = pUVar3;
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pUVar1 = (UnityEngine_UI_Text_o *)
                                 UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
                        (__this->fields)._scoreLabel = pUVar1;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._scoreLabel);
                        killer = (UnityEngine_UI_Text_o *)0x0;
                        pUVar1 = pUVar2;
                        pUVar3 = (UnityEngine_UI_Text_o *)
                                 UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
                        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                          score = 0x55d1ed8;
                          killer = "ScoreLabel/BackgroundLabel";
                          pUVar4 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)pUVar3,
                                              (System_String_o *)"ScoreLabel/BackgroundLabel",(MethodInfo *)0x0);
                          pUVar1 = pUVar3;
                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                            pUVar1 = (UnityEngine_UI_Text_o *)
                                     UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
                            (__this->fields)._backgroundLabel = pUVar1;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._backgroundLabel,pUVar1);
                            pUVar7 = (UnityEngine_UI_RawImage_o *)
                                     UnityEngine_GameObject__GetComponent_object_
                                               ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_RawImage_GetComponent_RawImage);
                            (__this->fields)._image = pUVar7;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._image);
                            killer = (UnityEngine_UI_Text_o *)0x0;
                            pUVar3 = (UnityEngine_UI_Text_o *)
                                     UnityEngine_GameObject__get_transform
                                               ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
                            pUVar1 = pUVar2;
                            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                              killer = (UnityEngine_UI_Text_o *)0x0;
                              pUVar2 = (UnityEngine_UI_Text_o *)
                                       UnityEngine_Transform__get_parent
                                                 ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
                              pUVar1 = pUVar3;
                              if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                                score = 0x55c2ac0;
                                killer = "Border";
                                pUVar3 = (UnityEngine_UI_Text_o *)
                                         UnityEngine_Transform__Find
                                                   ((UnityEngine_Transform_o *)pUVar2,
                                                    (System_String_o *)"Border",(MethodInfo *)0x0);
                                pUVar1 = pUVar2;
                                if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                                  killer = (UnityEngine_UI_Text_o *)0x0;
                                  pUVar5 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                                  pUVar1 = pUVar3;
                                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
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
  timeLeft = (float)il2cpp_runtime_helper_022b2c90();
  UI_KillFeedSmallPopup__ShowImmediate_42d0c30
            ((UI_KillFeedSmallPopup_o *)pUVar1,(System_String_o *)killer,victim,score,in_R8,timeLeft,-1,-1,
             in_stack_ffffffffffffffc8);
  return;
}


// UI.KillFeedSmallPopup$$ShowImmediate
// il2cpp: void UI_KillFeedSmallPopup__ShowImmediate (UI_KillFeedSmallPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, const MethodInfo* method);
// 0x43d0c10

void UI_KillFeedSmallPopup__ShowImmediate
               (UI_KillFeedSmallPopup_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  UI_KillFeedSmallPopup__ShowImmediate_42d0c30
            (__this,killer,victim,score,weapon,timeLeft,-1,-1,in_stack_fffffffffffffff0);
  return;
}


// UI.KillFeedSmallPopup$$ShowImmediate
// il2cpp: void UI_KillFeedSmallPopup__ShowImmediate (UI_KillFeedSmallPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, int32_t killerActorNumber, int32_t victimActorNumber, const MethodInfo* method);
// 0x43d0c30

void UI_KillFeedSmallPopup__ShowImmediate_42d0c30
               (UI_KillFeedSmallPopup_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,int32_t killerActorNumber,int32_t victimActorNumber,
               MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  PatreonEffects_NameEffectApplier_o *pPVar2;
  bool_conflict bVar3;
  System_String_c *pSVar4;
  System_String_c *pSVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *pSVar7;
  UnityEngine_UI_Text_c *pUVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined4 uVar9;
  int32_t local_48;
  float local_44;
  System_String_c *local_40;
  System_String_o *local_38;
  
  local_48 = score;
  local_44 = timeLeft;
  local_40 = (System_String_c *)killer;
  if (g_data_057ae42c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae42c = '\x01';
  }
  (__this->fields).Killer = (System_String_o *)local_40;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Killer);
  (__this->fields).Victim = victim;
  local_38 = victim;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Victim,victim);
  (__this->fields).KillerActorNumber = killerActorNumber;
  (__this->fields).VictimActorNumber = victimActorNumber;
  (__this->fields).Score = score;
  (__this->fields).Weapon = weapon;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Weapon,weapon);
  __this_00 = (__this->fields)._image;
  method_00 = extraout_RDX;
  if (*(int *)((long)&(TypeInfo_ResourcePaths->fields).Killer + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  pUVar8 = ((TypeInfo_ResourcePaths->fields)._scoreLabel)->klass;
  pSVar4 = (System_String_c *)UI_KillFeedSmallPopup__GetWeaponIcon(TypeInfo_ResourcePaths,weapon,method_00);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (System_String_c *)
           ApplicationManagers_ResourceManager__LoadAsset
                     ((System_String_o *)pUVar8,(System_String_o *)pSVar4,1,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((pSVar5 != (System_String_c *)0x0) && (pSVar4 = TypeInfo_Texture2D, (pSVar5->_1).image != TypeInfo_Texture2D))
    goto label_043d0f33;
    UnityEngine_UI_RawImage__set_texture(__this_00,(UnityEngine_Texture_o *)pSVar5,(MethodInfo *)0x0);
    pSVar7 = local_38;
    pUVar1 = (__this->fields)._leftLabel;
    pSVar4 = pSVar5;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pSVar4 = local_40;
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,local_40,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar1 = (__this->fields)._rightLabel;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,pSVar7,(pUVar1->klass->vtable)._75_set_text.method);
        pPVar2 = (__this->fields)._leftStyle;
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_String_c *)0x0;
        pPVar6 = Utility_Util__FindPlayerById(killerActorNumber,(MethodInfo *)0x0);
        if (pPVar2 != (PatreonEffects_NameEffectApplier_o *)0x0) {
          PatreonEffects_NameEffectApplier__ApplyForPlayer(pPVar2,pPVar6,(MethodInfo *)0x0);
          pPVar2 = (__this->fields)._rightStyle;
          pSVar4 = (System_String_c *)0x0;
          pPVar6 = Utility_Util__FindPlayerById(victimActorNumber,(MethodInfo *)0x0);
          if (pPVar2 != (PatreonEffects_NameEffectApplier_o *)0x0) {
            PatreonEffects_NameEffectApplier__ApplyForPlayer(pPVar2,pPVar6,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._scoreLabel;
            pSVar4 = (System_String_c *)0x0;
            pSVar7 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                        (pUVar1,pSVar7,(pUVar1->klass->vtable)._75_set_text.method);
              pUVar1 = (__this->fields)._backgroundLabel;
              pSVar4 = (System_String_c *)0x0;
              pSVar5 = (System_String_c *)System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                          (pUVar1,pSVar5,(pUVar1->klass->vtable)._75_set_text.method);
                pUVar1 = (__this->fields)._backgroundLabel;
                pSVar4 = pSVar5;
                if (local_48 < 1000) {
                  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    pUVar8 = pUVar1->klass;
                    uVar9 = 0x3f800000;
                    goto label_043d0efa;
                  }
                }
                else if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                  pUVar8 = pUVar1->klass;
                  uVar9 = 0;
label_043d0efa:
                  (*(pUVar8->vtable)._23_set_color.methodPtr)(0x3f800000,uVar9);
                  *(undefined1 *)&(__this->fields).IsActive = 0;
                  (__this->fields).TimeLeft = local_44;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  pSVar5 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
label_043d0f33:
  il2cpp_runtime_helper_022b2fd0(pSVar5);
  if (g_data_057ae42d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderspearIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/KillFeedIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/TitanIcon");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ae42d = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar4,"AHSS",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar4,"APG",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pSVar5 = pSVar4;
  bVar3 = System_String__op_Equality((System_String_o *)pSVar4,"Thunderspear",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (pSVar4 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UI_BasePopup___ctor((UI_TooltipPopup_o *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    bVar3 = System_String__StartsWith((System_String_o *)pSVar4,"Titan",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__StartsWith((System_String_o *)pSVar4,"Shifter",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      return;
    }
    return;
  }
  return;
}


// UI.KillFeedSmallPopup$$GetWeaponIcon
// il2cpp: System_String_o* UI_KillFeedSmallPopup__GetWeaponIcon (UI_KillFeedSmallPopup_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x43d0f40

System_String_o *
UI_KillFeedSmallPopup__GetWeaponIcon
          (UI_KillFeedSmallPopup_o *__this,System_String_o *weapon,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *extraout_RAX;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae42d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderspearIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/KillFeedIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/TitanIcon");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ae42d = '\x01';
  }
  bVar1 = System_String__op_Equality(weapon,"AHSS",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/AHSSIcon";
  }
  bVar1 = System_String__op_Equality(weapon,"APG",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/APGIcon";
  }
  __this_00 = (UI_TooltipPopup_o *)weapon;
  bVar1 = System_String__op_Equality(weapon,"Thunderspear",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/ThunderspearIcon";
  }
  if (weapon == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  bVar1 = System_String__StartsWith(weapon,"Titan",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/TitanIcon";
  }
  bVar1 = System_String__StartsWith(weapon,"Shifter",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/ShifterIcon";
  }
  return "Icons/Game/KillFeedIcon";
}


// UI.KillFeedSmallPopup$$.ctor
// il2cpp: void UI_KillFeedSmallPopup___ctor (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x43d10b0

void UI_KillFeedSmallPopup___ctor(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


