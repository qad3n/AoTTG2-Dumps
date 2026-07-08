// Type: UI.Telemetry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/Telemetry.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/Telemetry.cs  [CHANGED since prior version]
// --------------------------------

// UI.Telemetry$$Setup
// il2cpp: void UI_Telemetry__Setup (UI_Telemetry_o* __this, UI_ElementStyle_o* _style, const MethodInfo* method);
// 0x40d9ac0

void UI_Telemetry__Setup(UI_Telemetry_o *__this,UI_ElementStyle_o *_style,MethodInfo *method)

{
  UI_MultiTextLabel_o **ppUVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_MultiTextLabel_o *pUVar5;
  System_String_o *htmlString;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_Fields local_68;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (DAT_05704766 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MultiTextLabel_GetComponent_MultiTextLabel);
    il2cpp_init_method_metadata(&"Game Time: ");
    il2cpp_init_method_metadata(&"Ping: ");
    il2cpp_init_method_metadata(&"System: ");
    il2cpp_init_method_metadata(&"FPS: ");
    DAT_05704766 = '\x01';
  }
  local_68.r = 0.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 0.0;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar4 = UI_ElementFactory__CreateMultiTextLabel(pUVar3,_style,0,3,12.0,4,0,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UI_MultiTextLabel_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_MultiTextLabel_GetComponent_MultiTextLabel);
    ppUVar1 = &(__this->fields).timePanel;
    (__this->fields).timePanel = pUVar5;
    il2cpp_runtime_glue(ppUVar1);
    pUVar5 = (__this->fields).timePanel;
    if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetValue(pUVar5,0,"Game Time: ",(MethodInfo *)0x0);
      if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetValue
                  (*ppUVar1,1,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                   (MethodInfo *)0x0);
        if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetValue(*ppUVar1,2,"System: ",(MethodInfo *)0x0);
          if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue
                      (*ppUVar1,3,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x68);
            if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              htmlString = (System_String_o *)
                           System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                                     (__this_00,3,MethodInfo_String_get_Item);
              bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                                (htmlString,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
              fVar8 = local_68.b;
              fVar9 = local_68.a;
              if ((char)bVar2 == '\0') {
                fVar6 = 1.0;
                fVar7 = 0.92156863;
                fVar8 = 0.015686275;
                fVar9 = 1.0;
              }
              else {
                fVar6 = local_68.r;
                fVar7 = local_68.g;
              }
              if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                uStack_50 = 0;
                uStack_4c = 0;
                uStack_40 = 0;
                uStack_3c = 0;
                color.fields.g = fVar7;
                color.fields.r = fVar6;
                color.fields.a = fVar9;
                color.fields.b = fVar8;
                local_58 = fVar6;
                fStack_54 = fVar7;
                local_48 = fVar8;
                fStack_44 = fVar9;
                UI_MultiTextLabel__ChangeTextColor(*ppUVar1,1,color,(MethodInfo *)0x0);
                if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                  color_00.fields.g = fStack_54;
                  color_00.fields.r = local_58;
                  color_00.fields.a = fStack_44;
                  color_00.fields.b = local_48;
                  UI_MultiTextLabel__ChangeTextColor(*ppUVar1,3,color_00,(MethodInfo *)0x0);
                  if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                    UI_MultiTextLabel__SetEnabled(*ppUVar1,0,(MethodInfo *)0x0);
                    pUVar3 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar4 = UI_ElementFactory__CreateMultiTextLabel
                                       (pUVar3,_style,0,3,12.0,4,0,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar5 = (UI_MultiTextLabel_o *)
                               UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_MultiTextLabel_GetComponent_MultiTextLabel);
                      ppUVar1 = &(__this->fields).performancePanel;
                      (__this->fields).performancePanel = pUVar5;
                      il2cpp_runtime_glue(ppUVar1);
                      pUVar5 = (__this->fields).performancePanel;
                      if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(pUVar5,0,"FPS: ",(MethodInfo *)0x0);
                        if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                          UI_MultiTextLabel__SetValue
                                    (*ppUVar1,1,
                                     (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                     (MethodInfo *)0x0);
                          if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                            UI_MultiTextLabel__SetValue(*ppUVar1,2,"Ping: ",(MethodInfo *)0x0);
                            if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                              UI_MultiTextLabel__SetValue
                                        (*ppUVar1,3,
                                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                         (MethodInfo *)0x0);
                              if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                                UI_MultiTextLabel__SetEnabled(*ppUVar1,0,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Telemetry$$Update
// il2cpp: void UI_Telemetry__Update (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x40d9e30

void UI_Telemetry__Update(UI_Telemetry_o *__this,MethodInfo *method)

{
  UI_MultiTextLabel_o *pUVar1;
  long lVar2;
  System_DateTime_o dt;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (__this->fields)._currentSyncDelay;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar4;
  (__this->fields)._currentSyncDelay = fVar5;
  if (0.0 < fVar5) {
    return;
  }
  if (DAT_05704767 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704767 = '\x01';
  }
  (__this->fields)._currentSyncDelay = 0.01;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xd0), lVar2 == 0)) ||
     (pUVar1 = (__this->fields).timePanel, pUVar1 == (UI_MultiTextLabel_o *)0x0)) goto LAB_040da014;
  if (*(char *)(lVar2 + 0x11) == '\0') {
    UI_MultiTextLabel__SetEnabled(pUVar1,0,(MethodInfo *)0x0);
  }
  else {
    pMVar3 = (MethodInfo *)0x1;
    UI_MultiTextLabel__SetEnabled(pUVar1,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_040d9f69;
LAB_040d9f3f:
      fVar5 = *(float *)(lVar2 + 0x20);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar2 != 0) goto LAB_040d9f3f;
LAB_040d9f69:
      fVar5 = 0.0;
    }
    UI_Telemetry__UpdateGameTime(__this,fVar5,pMVar3);
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    dt = System_DateTime__get_Now((MethodInfo *)0x0);
    UI_Telemetry__UpdateSystemTime(__this,dt,method_00);
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x58), lVar2 == 0)) goto LAB_040da014;
  if (*(char *)(lVar2 + 0x11) == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xb8), lVar2 == 0)) goto LAB_040da014;
    if (*(char *)(lVar2 + 0x11) == '\0') {
      pUVar1 = (__this->fields).performancePanel;
      if (pUVar1 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetEnabled(pUVar1,0,(MethodInfo *)0x0);
        return;
      }
      goto LAB_040da014;
    }
  }
  pUVar1 = (__this->fields).performancePanel;
  if (pUVar1 != (UI_MultiTextLabel_o *)0x0) {
    pMVar3 = (MethodInfo *)0x1;
    UI_MultiTextLabel__SetEnabled(pUVar1,1,(MethodInfo *)0x0);
    UI_Telemetry__UpdatePerformance(__this,pMVar3);
    return;
  }
LAB_040da014:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Telemetry$$Sync
// il2cpp: void UI_Telemetry__Sync (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x40d9e80

void UI_Telemetry__Sync(UI_Telemetry_o *__this,MethodInfo *method)

{
  UI_MultiTextLabel_o *pUVar1;
  long lVar2;
  System_DateTime_o dt;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  float currentTime;
  
  if (DAT_05704767 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704767 = '\x01';
  }
  (__this->fields)._currentSyncDelay = 0.01;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xd0), lVar2 == 0)) ||
     (pUVar1 = (__this->fields).timePanel, pUVar1 == (UI_MultiTextLabel_o *)0x0)) goto LAB_040da014;
  if (*(char *)(lVar2 + 0x11) == '\0') {
    UI_MultiTextLabel__SetEnabled(pUVar1,0,(MethodInfo *)0x0);
  }
  else {
    pMVar3 = (MethodInfo *)0x1;
    UI_MultiTextLabel__SetEnabled(pUVar1,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_040d9f69;
LAB_040d9f3f:
      currentTime = *(float *)(lVar2 + 0x20);
    }
    else {
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar2 != 0) goto LAB_040d9f3f;
LAB_040d9f69:
      currentTime = 0.0;
    }
    UI_Telemetry__UpdateGameTime(__this,currentTime,pMVar3);
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    dt = System_DateTime__get_Now((MethodInfo *)0x0);
    UI_Telemetry__UpdateSystemTime(__this,dt,method_00);
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x58), lVar2 == 0)) goto LAB_040da014;
  if (*(char *)(lVar2 + 0x11) == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xb8), lVar2 == 0)) goto LAB_040da014;
    if (*(char *)(lVar2 + 0x11) == '\0') {
      pUVar1 = (__this->fields).performancePanel;
      if (pUVar1 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetEnabled(pUVar1,0,(MethodInfo *)0x0);
        return;
      }
      goto LAB_040da014;
    }
  }
  pUVar1 = (__this->fields).performancePanel;
  if (pUVar1 != (UI_MultiTextLabel_o *)0x0) {
    pMVar3 = (MethodInfo *)0x1;
    UI_MultiTextLabel__SetEnabled(pUVar1,1,(MethodInfo *)0x0);
    UI_Telemetry__UpdatePerformance(__this,pMVar3);
    return;
  }
LAB_040da014:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Telemetry$$UpdatePerformance
// il2cpp: void UI_Telemetry__UpdatePerformance (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x40da370

void UI_Telemetry__UpdatePerformance(UI_Telemetry_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UI_MultiTextLabel_o *pUVar4;
  System_Text_StringBuilder_o *pSVar5;
  uint in_EAX;
  int32_t iVar6;
  System_String_o *pSVar7;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_05704768 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&", ");
    DAT_05704768 = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
     (pUVar4 = (__this->fields).performancePanel, pUVar4 == (UI_MultiTextLabel_o *)0x0))
  goto LAB_040da795;
  if (*(char *)(lVar3 + 0x11) == '\0') {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,0,0,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).performancePanel;
    if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto LAB_040da795;
    UI_MultiTextLabel__SetElementEnabled(pUVar4,1,0,(MethodInfo *)0x0);
  }
  else {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,0,1,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).performancePanel;
    if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto LAB_040da795;
    UI_MultiTextLabel__SetElementEnabled(pUVar4,1,1,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._sb;
    if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_040da795;
    System_Text_StringBuilder__Clear(pSVar5,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._sb;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_057047e9 == '\0') goto LAB_040da4be;
LAB_040da46e:
      iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
    }
    else {
      if (DAT_057047e9 != '\0') goto LAB_040da46e;
LAB_040da4be:
      il2cpp_init_method_metadata(&TypeInfo_UIManager);
      DAT_057047e9 = '\x01';
      iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_040da795;
    System_Text_StringBuilder__Append
              (pSVar5,*(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68),(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb8), lVar3 == 0)) goto LAB_040da795;
    if (*(char *)(lVar3 + 0x11) == '\0') {
LAB_040da576:
      pSVar5 = (__this->fields)._sb;
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        if (DAT_05702229 == '\0') goto LAB_040da732;
LAB_040da555:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_040da565;
LAB_040da755:
        il2cpp_init_class();
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      else {
        if (DAT_05702229 != '\0') goto LAB_040da555;
LAB_040da732:
        il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
        DAT_05702229 = '\x01';
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_040da755;
LAB_040da565:
        cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
      }
      if (cVar1 != '\0') goto LAB_040da576;
      pSVar5 = (__this->fields)._sb;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_040da795;
      System_Text_StringBuilder__Append(pSVar5,", ",(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._sb;
    }
    if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_040da795;
    pUVar4 = (__this->fields).performancePanel;
    pSVar7 = (System_String_o *)
             (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
    if (pUVar4 == (UI_MultiTextLabel_o *)0x0) goto LAB_040da795;
    UI_MultiTextLabel__SetValue(pUVar4,1,pSVar7,(MethodInfo *)0x0);
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb8), lVar3 == 0)) goto LAB_040da795;
  if (*(char *)(lVar3 + 0x11) != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05702229 == '\0') goto LAB_040da65d;
LAB_040da5fb:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_040da607;
LAB_040da67c:
      il2cpp_init_class();
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    else {
      if (DAT_05702229 != '\0') goto LAB_040da5fb;
LAB_040da65d:
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      DAT_05702229 = '\x01';
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_040da67c;
LAB_040da607:
      cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
    }
    if (cVar1 == '\0') {
      pUVar4 = (__this->fields).performancePanel;
      if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetElementEnabled(pUVar4,2,1,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).performancePanel;
        if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetElementEnabled(pUVar4,3,1,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).performancePanel;
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          iVar6 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          uStack_28 = CONCAT44(iVar6,(uint)uStack_28);
          pSVar7 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
          if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(pUVar4,3,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_040da795;
    }
  }
  pUVar4 = (__this->fields).performancePanel;
  if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
    UI_MultiTextLabel__SetElementEnabled(pUVar4,2,0,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).performancePanel;
    if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetElementEnabled(pUVar4,3,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040da795:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Telemetry$$UpdateGameTime
// il2cpp: void UI_Telemetry__UpdateGameTime (UI_Telemetry_o* __this, float currentTime, const MethodInfo* method);
// 0x40da020

void UI_Telemetry__UpdateGameTime(UI_Telemetry_o *__this,float currentTime,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UI_MultiTextLabel_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *value;
  undefined1 local_14 [4];
  
  if (DAT_05704769 == '\0') {
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"{0:0}");
    DAT_05704769 = '\x01';
  }
  pSVar1 = (__this->fields)._sb;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sb;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,local_14);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendFormat(pSVar1,"{0:0}",arg0,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._sb;
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar1,", ",(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._sb;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          __this_00 = (__this->fields).timePanel;
          value = (System_String_o *)
                  (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
          if (__this_00 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(__this_00,1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Telemetry$$UpdateSystemTime
// il2cpp: void UI_Telemetry__UpdateSystemTime (UI_Telemetry_o* __this, System_DateTime_o dt, const MethodInfo* method);
// 0x40da110

void UI_Telemetry__UpdateSystemTime(UI_Telemetry_o *__this,System_DateTime_o dt,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UI_MultiTextLabel_o *__this_00;
  int32_t iVar2;
  System_String_o *value;
  System_DateTime_Fields local_18;
  
  local_18 = dt.fields._dateData;
  if (DAT_0570476a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    DAT_0570476a = '\x01';
  }
  pSVar1 = (__this->fields)._sb;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sb;
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar2 = System_DateTime__get_Hour((System_DateTime_o)&local_18,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append
                (pSVar1,((short)(uint)((ulong)((long)iVar2 * 0x66666667) >> 0x22) -
                        (short)(iVar2 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._sb;
      iVar2 = System_DateTime__get_Hour((System_DateTime_o)&local_18,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append
                  (pSVar1,(short)iVar2 + (short)(iVar2 / 10) * -10 + 0x30,(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._sb;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append(pSVar1,0x3a,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._sb;
          iVar2 = System_DateTime__get_Minute((System_DateTime_o)&local_18,(MethodInfo *)0x0);
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append
                      (pSVar1,((short)(uint)((ulong)((long)iVar2 * 0x66666667) >> 0x22) -
                              (short)(iVar2 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._sb;
            iVar2 = System_DateTime__get_Minute((System_DateTime_o)&local_18,(MethodInfo *)0x0);
            if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append
                        (pSVar1,(short)iVar2 + (short)(iVar2 / 10) * -10 + 0x30,(MethodInfo *)0x0);
              pSVar1 = (__this->fields)._sb;
              if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append(pSVar1,0x3a,(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._sb;
                iVar2 = System_DateTime__get_Second((System_DateTime_o)&local_18,(MethodInfo *)0x0);
                if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append
                            (pSVar1,((short)(uint)((ulong)((long)iVar2 * 0x66666667) >> 0x22) -
                                    (short)(iVar2 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                  pSVar1 = (__this->fields)._sb;
                  iVar2 = System_DateTime__get_Second
                                    ((System_DateTime_o)&local_18,(MethodInfo *)0x0);
                  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append
                              (pSVar1,(short)iVar2 + (short)(iVar2 / 10) * -10 + 0x30,
                               (MethodInfo *)0x0);
                    pSVar1 = (__this->fields)._sb;
                    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                      __this_00 = (__this->fields).timePanel;
                      value = (System_String_o *)
                              (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                                        (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
                      if (__this_00 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(__this_00,3,value,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Telemetry$$.ctor
// il2cpp: void UI_Telemetry___ctor (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x40da7a0

void UI_Telemetry___ctor(UI_Telemetry_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (DAT_0570476b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_0570476b = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._sb = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


