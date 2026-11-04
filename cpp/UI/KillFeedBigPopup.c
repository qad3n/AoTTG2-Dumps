// Type: UI.KillFeedBigPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/KillFeedBigPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedBigPopup.cs
// --------------------------------

// UI.KillFeedBigPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_KillFeedBigPopup__get_EscapeBehavior (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_KillFeedBigPopup__get_EscapeBehavior(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.KillFeedBigPopup$$get_Title
// il2cpp: System_String_o* UI_KillFeedBigPopup__get_Title (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_KillFeedBigPopup__get_Title(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.KillFeedBigPopup$$get_Width
// il2cpp: float UI_KillFeedBigPopup__get_Width (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillFeedBigPopup__get_Width(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillFeedBigPopup$$get_Height
// il2cpp: float UI_KillFeedBigPopup__get_Height (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillFeedBigPopup__get_Height(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillFeedBigPopup$$get_TopBarHeight
// il2cpp: float UI_KillFeedBigPopup__get_TopBarHeight (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillFeedBigPopup__get_TopBarHeight(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillFeedBigPopup$$get_BottomBarHeight
// il2cpp: float UI_KillFeedBigPopup__get_BottomBarHeight (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillFeedBigPopup__get_BottomBarHeight(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillFeedBigPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillFeedBigPopup__get_PopupAnimationType (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_KillFeedBigPopup__get_PopupAnimationType(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.KillFeedBigPopup$$get_AnimationTime
// il2cpp: float UI_KillFeedBigPopup__get_AnimationTime (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x182245d40

float
UI_KillFeedBigPopup__get_AnimationTime(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  return 0.2;
}


// UI.KillFeedBigPopup$$Setup
// il2cpp: void UI_KillFeedBigPopup__Setup (UI_KillFeedBigPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822576b0

void UI_KillFeedBigPopup__Setup(UI_KillFeedBigPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  PatreonEffects_NameEffectApplier_o *pPVar5;
  UnityEngine_UI_RawImage_o *value;
  
  if (Il2CppMethodInitialized_1843472c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectApplier);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreLabel/BackgroundLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"RightLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/KillFeedLabelBig");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftLabel");
    Il2CppMethodInitialized_1843472c0 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/KillFeedLabelBig",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LeftLabel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        (__this->fields)._leftLabel = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._leftLabel,pUVar3);
        pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"RightLabel",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            (__this->fields)._rightLabel = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._rightLabel,pUVar3);
            pUVar3 = (__this->fields)._leftLabel;
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pPVar5 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar4,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectApplier);
                (__this->fields)._leftStyle = pPVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._leftStyle,pPVar5);
                pUVar3 = (__this->fields)._rightLabel;
                if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    pPVar5 = UnityEngine_GameObject__AddComponent_object_
                                       (pUVar4,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectApplier
                                       );
                    (__this->fields)._rightStyle = pPVar5;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._rightStyle,pPVar5);
                    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Text);
                        (__this->fields)._scoreLabel = pUVar3;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreLabel,pUVar3);
                        pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                          pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel/BackgroundLabel",(MethodInfo *)0x0)
                          ;
                          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                            pUVar3 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar1,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            (__this->fields)._backgroundLabel = pUVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundLabel,pUVar3);
                            value = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar2,(MethodInfo_6F5650 *)
                                                      MethodInfo_UnityEngine_GameObject_GetComponent_RawImage)
                            ;
                            (__this->fields)._image = value;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._image,value);
                            pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                              pUVar1 = UnityEngine_Transform__GetParent(pUVar1,(MethodInfo *)0x0);
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


// UI.KillFeedBigPopup$$Show
// il2cpp: void UI_KillFeedBigPopup__Show (UI_KillFeedBigPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x1822579d0

void UI_KillFeedBigPopup__Show
               (UI_KillFeedBigPopup_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,MethodInfo *method)

{
  UI_KillFeedBigPopup__Show_2257a10(__this,killer,victim,score,weapon,-1,-1,(MethodInfo *)0x0);
  return;
}


// UI.KillFeedBigPopup$$Show
// il2cpp: void UI_KillFeedBigPopup__Show (UI_KillFeedBigPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, const MethodInfo* method);
// 0x182257a10
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182257c33: jmp 0x182257c57
// asm:   0x182257c35: mov rdi, qword ptr [rip + 0x1e47cb4]  ; "Icons/Game/TitanIcon"
// asm:   0x182257c3c: jmp 0x182257c57
// asm:   0x182257c3e: mov rdi, qword ptr [rip + 0x1e47bcb]  ; "Icons/Game/ThunderspearIcon"
// asm:   0x182257c45: jmp 0x182257c57
// asm:   0x182257c47: mov rdi, qword ptr [rip + 0x1e474c2]  ; "Icons/Game/APGIcon"
// asm:   0x182257c4e: jmp 0x182257c57
// asm:   0x182257c50: mov rdi, qword ptr [rip + 0x1e473d9]  ; "Icons/Game/AHSSIcon"

void UI_KillFeedBigPopup__Show_2257a10
               (UI_KillFeedBigPopup_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  PatreonEffects_NameEffectApplier_o *pPVar2;
  UI_KillFeedBigPopup_c *pUVar3;
  bool bVar4;
  UnityEngine_Texture_o *pUVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *value;
  System_String_o *name;
  float fVar8;
  int32_t local_res20 [2];
  UnityEngine_Color_Fields local_58;
  
  local_res20[0] = score;
  if (Il2CppMethodInitialized_1843472c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843472c1 = '\x01';
  }
  (__this->fields).Killer = killer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Killer,killer);
  (__this->fields).Victim = victim;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Victim,victim);
  (__this->fields).KillerActorNumber = killerActorNumber;
  (__this->fields).VictimActorNumber = victimActorNumber;
  (__this->fields).Score = local_res20[0];
  (__this->fields).Weapon = weapon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weapon,weapon);
  __this_00 = (__this->fields)._image;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if (Il2CppMethodInitialized_1843472c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ThunderspearIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/KillFeedIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/APGIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/TitanIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_1843472c2 = '\x01';
  }
  bVar4 = System_String__op_Equality(weapon,"AHSS",(MethodInfo *)0x0);
  name = "Icons/Game/AHSSIcon";
  if (((!bVar4) &&
      (bVar4 = System_String__op_Equality(weapon,"APG",(MethodInfo *)0x0),
      name = "Icons/Game/APGIcon", !bVar4)) &&
     (bVar4 = System_String__op_Equality(weapon,"Thunderspear",(MethodInfo *)0x0),
     name = "Icons/Game/ThunderspearIcon", !bVar4)) {
    if (weapon == (System_String_o *)0x0) goto label_182257e50;
    bVar4 = System_String__StartsWith(weapon,"Titan",(MethodInfo *)0x0);
    name = "Icons/Game/TitanIcon";
    if ((!bVar4) &&
       (bVar4 = System_String__StartsWith(weapon,"Shifter",(MethodInfo *)0x0),
       name = "Icons/Game/ShifterIcon", !bVar4)) {
      name = "Icons/Game/KillFeedIcon";
    }
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar7,name,true,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar5;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_Texture2D);
      }
    }
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._leftLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,killer,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar1 = (__this->fields)._rightLabel;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,victim,(pUVar1->klass->vtable)._75_set_text.method);
        pPVar2 = (__this->fields)._leftStyle;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pPVar6 = Utility_Util__FindPlayerById(killerActorNumber,(MethodInfo *)0x0);
        if (pPVar2 != (PatreonEffects_NameEffectApplier_o *)0x0) {
          PatreonEffects_NameEffectApplier__ApplyForPlayer(pPVar2,pPVar6,(MethodInfo *)0x0);
          pPVar2 = (__this->fields)._rightStyle;
          pPVar6 = Utility_Util__FindPlayerById(victimActorNumber,(MethodInfo *)0x0);
          if (pPVar2 != (PatreonEffects_NameEffectApplier_o *)0x0) {
            PatreonEffects_NameEffectApplier__ApplyForPlayer(pPVar2,pPVar6,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._scoreLabel;
            pSVar7 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                        (pUVar1,pSVar7,(pUVar1->klass->vtable)._75_set_text.method);
              pUVar1 = (__this->fields)._backgroundLabel;
              pSVar7 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                          (pUVar1,pSVar7,(pUVar1->klass->vtable)._75_set_text.method);
                pUVar1 = (__this->fields)._backgroundLabel;
                if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                  if (local_res20[0] < 1000) {
                    local_58.r = 1.0;
                    local_58.g = 1.0;
                    local_58.b = 1.0;
                    local_58.a = 1.0;
                  }
                  else {
                    local_58.r = 1.0;
                    local_58.g = 0.0;
                    local_58.b = 0.0;
                    local_58.a = 1.0;
                  }
                  (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                            (pUVar1,(UnityEngine_Color_o *)&local_58,
                             (pUVar1->klass->vtable)._23_set_color.method);
                  pUVar3 = __this->klass;
                  (__this->fields).IsActive = false;
                  fVar8 = (*(pUVar3->vtable)._51_get_AnimationTime.methodPtr)
                                    (__this,(pUVar3->vtable)._51_get_AnimationTime.method);
                  (__this->fields).TimeLeft = fVar8 + 8.0;
                  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_182257e50:
  ThrowNullReferenceException();
}


// UI.KillFeedBigPopup$$GetWeaponIcon
// il2cpp: System_String_o* UI_KillFeedBigPopup__GetWeaponIcon (UI_KillFeedBigPopup_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x182257540

System_String_o *
UI_KillFeedBigPopup__GetWeaponIcon(UI_KillFeedBigPopup_o *__this,System_String_o *weapon,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843472c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ThunderspearIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/KillFeedIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/APGIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/TitanIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_1843472c2 = '\x01';
  }
  bVar1 = System_String__op_Equality(weapon,"AHSS",(MethodInfo *)0x0);
  if (bVar1) {
    return "Icons/Game/AHSSIcon";
  }
  bVar1 = System_String__op_Equality(weapon,"APG",(MethodInfo *)0x0);
  if (bVar1) {
    return "Icons/Game/APGIcon";
  }
  bVar1 = System_String__op_Equality(weapon,"Thunderspear",(MethodInfo *)0x0);
  if (!bVar1) {
    if (weapon == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__StartsWith(weapon,"Titan",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__StartsWith(weapon,"Shifter",(MethodInfo *)0x0);
      pSVar2 = "Icons/Game/ShifterIcon";
      if (!bVar1) {
        pSVar2 = "Icons/Game/KillFeedIcon";
      }
      return pSVar2;
    }
    return "Icons/Game/TitanIcon";
  }
  return "Icons/Game/ThunderspearIcon";
}


// UI.KillFeedBigPopup$$.ctor
// il2cpp: void UI_KillFeedBigPopup___ctor (UI_KillFeedBigPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_KillFeedBigPopup___ctor(UI_KillFeedBigPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


