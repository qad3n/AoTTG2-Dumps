// Type: UI.KillFeedSmallPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/KillFeedSmallPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/KillFeedSmallPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.KillFeedSmallPopup$$get_Title
// il2cpp: System_String_o* UI_KillFeedSmallPopup__get_Title (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be4c0

System_String_o *
UI_KillFeedSmallPopup__get_Title(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.KillFeedSmallPopup$$get_Width
// il2cpp: float UI_KillFeedSmallPopup__get_Width (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be4e0

float UI_KillFeedSmallPopup__get_Width(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_Height
// il2cpp: float UI_KillFeedSmallPopup__get_Height (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be4f0

float UI_KillFeedSmallPopup__get_Height(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_TopBarHeight
// il2cpp: float UI_KillFeedSmallPopup__get_TopBarHeight (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be500

float UI_KillFeedSmallPopup__get_TopBarHeight(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_BottomBarHeight
// il2cpp: float UI_KillFeedSmallPopup__get_BottomBarHeight (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be510

float UI_KillFeedSmallPopup__get_BottomBarHeight(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillFeedSmallPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillFeedSmallPopup__get_PopupAnimationType (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be520

int32_t UI_KillFeedSmallPopup__get_PopupAnimationType
                  (UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.KillFeedSmallPopup$$get_AnimationTime
// il2cpp: float UI_KillFeedSmallPopup__get_AnimationTime (UI_KillFeedSmallPopup_o* __this, const MethodInfo* method);
// 0x40be530

float UI_KillFeedSmallPopup__get_AnimationTime(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.KillFeedSmallPopup$$Setup
// il2cpp: void UI_KillFeedSmallPopup__Setup (UI_KillFeedSmallPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40be540

void UI_KillFeedSmallPopup__Setup
               (UI_KillFeedSmallPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_RawImage_o *pUVar4;
  
  if (DAT_0570469a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&"ScoreLabel/BackgroundLabel");
    il2cpp_init_method_metadata(&"Prefabs/InGame/KillFeedLabelSmall");
    il2cpp_init_method_metadata(&"RightLabel");
    il2cpp_init_method_metadata(&"ScoreLabel");
    il2cpp_init_method_metadata(&"Border");
    il2cpp_init_method_metadata(&"LeftLabel");
    DAT_0570469a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/KillFeedLabelSmall",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LeftLabel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._leftLabel = pUVar3;
        il2cpp_runtime_glue(&(__this->fields)._leftLabel);
        pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"RightLabel",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._rightLabel = pUVar3;
            il2cpp_runtime_glue(&(__this->fields)._rightLabel);
            pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel",(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar3 = (UnityEngine_UI_Text_o *)
                         UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
                (__this->fields)._scoreLabel = pUVar3;
                il2cpp_runtime_glue(&(__this->fields)._scoreLabel);
                pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScoreLabel/BackgroundLabel",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = (UnityEngine_UI_Text_o *)
                             UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
                    (__this->fields)._backgroundLabel = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._backgroundLabel,pUVar3);
                    pUVar4 = (UnityEngine_UI_RawImage_o *)
                             UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_RawImage_GetComponent_RawImage);
                    (__this->fields)._image = pUVar4;
                    il2cpp_runtime_glue(&(__this->fields)._image);
                    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Border",(MethodInfo *)0x0);
                        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                          pUVar2 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KillFeedSmallPopup$$ShowImmediate
// il2cpp: void UI_KillFeedSmallPopup__ShowImmediate (UI_KillFeedSmallPopup_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, const MethodInfo* method);
// 0x40be7d0

void UI_KillFeedSmallPopup__ShowImmediate
               (UI_KillFeedSmallPopup_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,float timeLeft,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_Text_c *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined4 uVar4;
  int32_t local_40;
  float local_3c;
  System_String_o *local_38;
  
  local_40 = score;
  local_3c = timeLeft;
  if (DAT_0570469b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_0570469b = '\x01';
  }
  (__this->fields).Killer = killer;
  il2cpp_runtime_glue(&(__this->fields).Killer,killer);
  (__this->fields).Victim = victim;
  local_38 = victim;
  il2cpp_runtime_glue(&(__this->fields).Victim,victim);
  (__this->fields).Score = score;
  (__this->fields).Weapon = weapon;
  il2cpp_runtime_glue(&(__this->fields).Weapon,weapon);
  __this_00 = (__this->fields)._image;
  method_00 = extraout_RDX;
  if (*(int *)&(TypeInfo_ResourcePaths->fields).field_0xd4 == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pUVar3 = ((TypeInfo_ResourcePaths->fields)._scoreLabel)->klass;
  pSVar2 = UI_KillFeedSmallPopup__GetWeaponIcon(TypeInfo_ResourcePaths,weapon,method_00);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset
                    ((System_String_o *)pUVar3,pSVar2,1,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._leftLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,killer,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar1 = (__this->fields)._rightLabel;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,local_38,(pUVar1->klass->vtable)._75_set_text.method);
        pUVar1 = (__this->fields)._scoreLabel;
        pSVar2 = System_Int32__ToString((int32_t)&local_40,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
          pUVar1 = (__this->fields)._backgroundLabel;
          pSVar2 = System_Int32__ToString((int32_t)&local_40,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                      (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
            pUVar1 = (__this->fields)._backgroundLabel;
            if (local_40 < 1000) {
              if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040bea36;
              pUVar3 = pUVar1->klass;
              uVar4 = 0x3f800000;
            }
            else {
              if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040bea36;
              pUVar3 = pUVar1->klass;
              uVar4 = 0;
            }
            (*(pUVar3->vtable)._23_set_color.methodPtr)(0x3f800000,uVar4);
            *(undefined1 *)&(__this->fields).IsActive = 0;
            (__this->fields).TimeLeft = local_3c;
            UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_040bea36:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KillFeedSmallPopup$$GetWeaponIcon
// il2cpp: System_String_o* UI_KillFeedSmallPopup__GetWeaponIcon (UI_KillFeedSmallPopup_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x40bea50

System_String_o *
UI_KillFeedSmallPopup__GetWeaponIcon
          (UI_KillFeedSmallPopup_o *__this,System_String_o *weapon,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570469c == '\0') {
    il2cpp_init_method_metadata(&"Icons/Game/ThunderspearIcon");
    il2cpp_init_method_metadata(&"Icons/Game/KillFeedIcon");
    il2cpp_init_method_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"Shifter");
    il2cpp_init_method_metadata(&"Icons/Game/APGIcon");
    il2cpp_init_method_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Icons/Game/TitanIcon");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_0570469c = '\x01';
  }
  bVar1 = System_String__op_Equality(weapon,"AHSS",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/AHSSIcon";
  }
  bVar1 = System_String__op_Equality(weapon,"APG",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/APGIcon";
  }
  bVar1 = System_String__op_Equality(weapon,"Thunderspear",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Icons/Game/ThunderspearIcon";
  }
  if (weapon == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
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
// 0x40bebc0

void UI_KillFeedSmallPopup___ctor(UI_KillFeedSmallPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


