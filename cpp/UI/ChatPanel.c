// Type: UI.ChatPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ChatPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ChatPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.ChatPanel.UIAnchors$$.cctor
// il2cpp: void UI_ChatPanel_UIAnchors___cctor (const MethodInfo* method);
// 0x40a6820

void UI_ChatPanel_UIAnchors___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_057045fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIAnchors);
    DAT_057045fc = '\x01';
  }
  **(undefined8 **)(TypeInfo_UIAnchors + 0xb8) = 0x3f80000000000000;
  lVar1 = TypeInfo_UIAnchors;
  *(undefined8 *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 8) = 0x3f8000003f800000;
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
    lVar1 = TypeInfo_UIAnchors;
  }
  lVar2 = TypeInfo_Vector2;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) =
       *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
    lVar1 = TypeInfo_UIAnchors;
    lVar2 = TypeInfo_Vector2;
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20) = 0x3f800000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x28) = 0x3f8000003f800000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x30) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x38) = 0x3f8000003f000000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x40) = 0x3f0000003f800000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x48) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x50) = **(undefined8 **)(lVar2 + 0xb8);
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
    lVar1 = TypeInfo_UIAnchors;
    lVar2 = TypeInfo_Vector2;
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x58) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  return;
}


// UI.ChatPanel.ChatLineClickHandler$$Initialize
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__Initialize (UI_ChatPanel_ChatLineClickHandler_o* __this, TMPro_TextMeshProUGUI_o* textComponent, TMPro_TMP_InputField_o* chatInput, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x40a69a0

void UI_ChatPanel_ChatLineClickHandler__Initialize
               (UI_ChatPanel_ChatLineClickHandler_o *__this,TMPro_TextMeshProUGUI_o *textComponent,
               TMPro_TMP_InputField_o *chatInput,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  (__this->fields)._textComponent = textComponent;
  il2cpp_runtime_glue(&(__this->fields)._textComponent);
  (__this->fields)._chatInput = chatInput;
  il2cpp_runtime_glue(&(__this->fields)._chatInput,chatInput);
  (__this->fields)._chatPanel = chatPanel;
  il2cpp_runtime_glue(&(__this->fields)._chatPanel,chatPanel);
  return;
}


// UI.ChatPanel.ChatLineClickHandler$$OnPointerClick
// il2cpp: void UI_ChatPanel_ChatLineClickHandler__OnPointerClick (UI_ChatPanel_ChatLineClickHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x40a69f0

void UI_ChatPanel_ChatLineClickHandler__OnPointerClick
               (UI_ChatPanel_ChatLineClickHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined8 *puVar1;
  UnityEngine_Vector2_Fields UVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  long lVar4;
  UI_ChatPanel_o *__this_00;
  TMPro_TMP_LinkInfo_o __this_01;
  uint uVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Photon_Realtime_Player_o *pPVar8;
  Photon_Realtime_Room_o *pPVar9;
  UnityEngine_Vector3_o position;
  undefined8 in_stack_ffffffffffffff88;
  uint uVar10;
  int32_t suggestionIndex;
  
  if (DAT_057045fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_TMP_TextUtilities);
    il2cpp_init_method_metadata(&"suggestion_");
    DAT_057045fd = '\x01';
  }
  suggestionIndex = 0;
  uVar10 = 0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    pTVar3 = (__this->fields)._textComponent;
    UVar2 = (eventData->fields)._position_k__BackingField.fields;
    if (*(int *)(TypeInfo_TMP_TextUtilities + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position.fields.z = 0.0;
    position.fields._0_8_ = UVar2;
    uVar5 = TMPro_TMP_TextUtilities__FindIntersectingLink
                      ((TMPro_TMP_Text_o *)pTVar3,position,(UnityEngine_Camera_o *)0x0,
                       (MethodInfo *)0x0);
    if (uVar5 == 0xffffffff) {
      return;
    }
    pTVar3 = (__this->fields)._textComponent;
    if (((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
        (lVar4 = *(long *)&(pTVar3->fields).m_ignoreCulling, lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x48), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      puVar1 = (undefined8 *)(lVar4 + 0x20 + (long)(int)uVar5 * 0x28);
      __this_01.fields.hashCode = uVar10;
      __this_01.fields.textComponent = (TMPro_TMP_Text_o *)in_stack_ffffffffffffff88;
      __this_01.fields.linkIdFirstCharacterIndex = suggestionIndex;
      __this_01.fields._16_8_ = *puVar1;
      __this_01.fields._24_8_ = puVar1[1];
      __this_01.fields.linkID = *(System_Char_array **)(lVar4 + 0x30 + (long)(int)uVar5 * 0x28);
      pSVar7 = TMPro_TMP_LinkInfo__GetLinkID(__this_01,(MethodInfo *)&stack0xffffffffffffff98);
      if (pSVar7 != (System_String_o *)0x0) {
        bVar6 = System_String__StartsWith(pSVar7,"suggestion_",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          bVar6 = System_Int32__TryParse
                            (pSVar7,(int32_t *)&stack0xffffffffffffff90,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            uVar5 = uVar10;
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar8 == (Photon_Realtime_Player_o *)0x0) goto LAB_040a6c31;
            if (uVar10 != (pPVar8->fields).actorNumber) {
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar9 == (Photon_Realtime_Room_o *)0x0) goto LAB_040a6c31;
              pPVar8 = (Photon_Realtime_Player_o *)
                       (*(pPVar9->klass->vtable)._10_GetPlayer.methodPtr)
                                 (pPVar9,(ulong)uVar5,0,(pPVar9->klass->vtable)._10_GetPlayer.method
                                 );
              if (pPVar8 != (Photon_Realtime_Player_o *)0x0) {
                __this_00 = (__this->fields)._chatPanel;
                if (__this_00 == (UI_ChatPanel_o *)0x0) goto LAB_040a6c31;
                UI_ChatPanel__EnterPMMode(__this_00,pPVar8,(MethodInfo *)0x0);
              }
            }
          }
        }
        else {
          if ("suggestion_" == (System_String_o *)0x0) goto LAB_040a6c31;
          pSVar7 = System_String__Substring
                             (pSVar7,("suggestion_"->fields)._stringLength,(MethodInfo *)0x0);
          bVar6 = System_Int32__TryParse
                            (pSVar7,(int32_t *)&stack0xffffffffffffff94,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__HandleSuggestionClick(suggestionIndex,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
LAB_040a6c31:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.ChatLineClickHandler$$.ctor
// il2cpp: void UI_ChatPanel_ChatLineClickHandler___ctor (UI_ChatPanel_ChatLineClickHandler_o* __this, const MethodInfo* method);
// 0x40a6c40

void UI_ChatPanel_ChatLineClickHandler___ctor
               (UI_ChatPanel_ChatLineClickHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c$$.cctor
// il2cpp: void UI_ChatPanel___c___cctor (const MethodInfo* method);
// 0x40a6c50

void UI_ChatPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057045fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057045fe = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.ChatPanel.<>c$$.ctor
// il2cpp: void UI_ChatPanel___c___ctor (UI_ChatPanel___c_o* __this, const MethodInfo* method);
// 0x40a6cc0

void UI_ChatPanel_<>c___ctor(UI_ChatPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c$$<Setup>b__66_2
// il2cpp: uint16_t UI_ChatPanel___c___Setup_b__66_2 (UI_ChatPanel___c_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x40a6cd0

uint16_t UI_ChatPanel_<>c__<Setup>b__66_2
                   (UI_ChatPanel___c_o *__this,System_String_o *text,int32_t charIndex,
                   uint16_t addedChar,MethodInfo *method)

{
  if ((addedChar < 0x1c) && ((0x8002400UL >> ((ulong)addedChar & 0x3f) & 1) != 0)) {
    addedChar = 0;
  }
  return addedChar;
}


// UI.ChatPanel.<>c$$<OnNotificationBadgeClicked>b__71_0
// il2cpp: bool UI_ChatPanel___c___OnNotificationBadgeClicked_b__71_0 (UI_ChatPanel___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6cf0

bool_conflict
UI_ChatPanel_<>c__<OnNotificationBadgeClicked>b__71_0
          (UI_ChatPanel___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  int32_t playerID;
  bool_conflict bVar1;
  
  if (DAT_057045ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_057045ff = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    playerID = (p->fields).actorNumber;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) {
      bVar1 = GameManagers_ChatManager__HasActivePMNotification(playerID,(MethodInfo *)0x0);
      return bVar1;
    }
    il2cpp_init_class();
    bVar1 = GameManagers_ChatManager__HasActivePMNotification(playerID,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c$$<ValidatePMState>b__117_0
// il2cpp: bool UI_ChatPanel___c___ValidatePMState_b__117_0 (UI_ChatPanel___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6d50

bool_conflict
UI_ChatPanel_<>c__<ValidatePMState>b__117_0
          (UI_ChatPanel___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  uint uVar1;
  undefined8 in_RAX;
  Photon_Realtime_Room_o *pPVar2;
  
  if (DAT_05704600 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsValue);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704600 = '\x01';
  }
  if (p == (Photon_Realtime_Player_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if ((pPVar2 != (Photon_Realtime_Room_o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   &(pPVar2->fields).isOffline,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    uVar1 = System_Collections_Generic_Dictionary<int__object>__ContainsValue
                      (__this_00,(Il2CppObject *)p,MethodInfo_Boolean_ContainsValue);
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass114_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass114_0___ctor (UI_ChatPanel___c__DisplayClass114_0_o* __this, const MethodInfo* method);
// 0x40a6dd0

void UI_ChatPanel_<>c__DisplayClass114_0___ctor
               (UI_ChatPanel___c__DisplayClass114_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass114_0$$<EnterPMMode>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass114_0___EnterPMMode_b__0 (UI_ChatPanel___c__DisplayClass114_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6de0

bool_conflict
UI_ChatPanel_<>c__DisplayClass114_0__<EnterPMMode>b__0
          (UI_ChatPanel___c__DisplayClass114_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).target, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar1 >> 8),
                    (p->fields).actorNumber == (pPVar1->fields).actorNumber);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass116_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass116_0___ctor (UI_ChatPanel___c__DisplayClass116_0_o* __this, const MethodInfo* method);
// 0x40a6e00

void UI_ChatPanel_<>c__DisplayClass116_0___ctor
               (UI_ChatPanel___c__DisplayClass116_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass116_0$$<RemovePMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass116_0___RemovePMPartner_b__0 (UI_ChatPanel___c__DisplayClass116_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6e10

bool_conflict
UI_ChatPanel_<>c__DisplayClass116_0__<RemovePMPartner>b__0
          (UI_ChatPanel___c__DisplayClass116_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar1 >> 8),
                    (p->fields).actorNumber == (pPVar1->fields).actorNumber);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass121_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass121_0___ctor (UI_ChatPanel___c__DisplayClass121_0_o* __this, const MethodInfo* method);
// 0x40a6e30

void UI_ChatPanel_<>c__DisplayClass121_0___ctor
               (UI_ChatPanel___c__DisplayClass121_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass121_0$$<CycleToPMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass121_0___CycleToPMPartner_b__0 (UI_ChatPanel___c__DisplayClass121_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6e40

bool_conflict
UI_ChatPanel_<>c__DisplayClass121_0__<CycleToPMPartner>b__0
          (UI_ChatPanel___c__DisplayClass121_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (((p != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_ChatPanel_o *)0x0)) &&
     (pPVar2 = (pUVar1->fields)._currentPMTarget, pPVar2 != (Photon_Realtime_Player_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar2 >> 8),
                    (p->fields).actorNumber == (pPVar2->fields).actorNumber);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass121_0$$<CycleToPMPartner>b__1
// il2cpp: bool UI_ChatPanel___c__DisplayClass121_0___CycleToPMPartner_b__1 (UI_ChatPanel___c__DisplayClass121_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6e70

bool_conflict
UI_ChatPanel_<>c__DisplayClass121_0__<CycleToPMPartner>b__1
          (UI_ChatPanel___c__DisplayClass121_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  UI_ChatPanel_o *pUVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (((p != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_ChatPanel_o *)0x0)) &&
     (pPVar2 = (pUVar1->fields)._currentPMTarget, pPVar2 != (Photon_Realtime_Player_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar2 >> 8),
                    (p->fields).actorNumber == (pPVar2->fields).actorNumber);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass121_0$$<CycleToPMPartner>b__2
// il2cpp: bool UI_ChatPanel___c__DisplayClass121_0___CycleToPMPartner_b__2 (UI_ChatPanel___c__DisplayClass121_0_o* __this, Photon_Realtime_Player_o* p2, const MethodInfo* method);
// 0x40a6ea0

bool_conflict
UI_ChatPanel_<>c__DisplayClass121_0__<CycleToPMPartner>b__2
          (UI_ChatPanel___c__DisplayClass121_0_o *__this,Photon_Realtime_Player_o *p2,
          MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  System_Collections_Generic_List_Player__o *__this_00;
  Il2CppObject *pIVar3;
  
  if (DAT_05704601 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Item);
    DAT_05704601 = '\x01';
  }
  if (((p2 != (Photon_Realtime_Player_o *)0x0) &&
      (pUVar2 = (__this->fields).__4__this, pUVar2 != (UI_ChatPanel_o *)0x0)) &&
     (__this_00 = (pUVar2->fields)._pmPartners,
     __this_00 != (System_Collections_Generic_List_Player__o *)0x0)) {
    iVar1 = (p2->fields).actorNumber;
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).currentIndexInRecency,MethodInfo_Player_get_Item);
    if (pIVar3 != (Il2CppObject *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),iVar1 == *(int *)&pIVar3[1].monitor)
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass122_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass122_0___ctor (UI_ChatPanel___c__DisplayClass122_0_o* __this, const MethodInfo* method);
// 0x40a6f10

void UI_ChatPanel_<>c__DisplayClass122_0___ctor
               (UI_ChatPanel___c__DisplayClass122_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass122_0$$<GetPmPartnersByRecency>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass122_0___GetPmPartnersByRecency_b__0 (UI_ChatPanel___c__DisplayClass122_0_o* __this, Photon_Realtime_Player_o* r, const MethodInfo* method);
// 0x40a6f20

bool_conflict
UI_ChatPanel_<>c__DisplayClass122_0__<GetPmPartnersByRecency>b__0
          (UI_ChatPanel___c__DisplayClass122_0_o *__this,Photon_Realtime_Player_o *r,
          MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((r != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).p, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar1 >> 8),
                    (r->fields).actorNumber == (pPVar1->fields).actorNumber);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass123_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass123_0___ctor (UI_ChatPanel___c__DisplayClass123_0_o* __this, const MethodInfo* method);
// 0x40a6f40

void UI_ChatPanel_<>c__DisplayClass123_0___ctor
               (UI_ChatPanel___c__DisplayClass123_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass123_0$$<AddPMPartner>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass123_0___AddPMPartner_b__0 (UI_ChatPanel___c__DisplayClass123_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6f50

bool_conflict
UI_ChatPanel_<>c__DisplayClass123_0__<AddPMPartner>b__0
          (UI_ChatPanel___c__DisplayClass123_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((p != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar1 = (__this->fields).player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar1 >> 8),
                    (p->fields).actorNumber == (pPVar1->fields).actorNumber);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass137_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass137_0___ctor (UI_ChatPanel___c__DisplayClass137_0_o* __this, const MethodInfo* method);
// 0x40a6f70

void UI_ChatPanel_<>c__DisplayClass137_0___ctor
               (UI_ChatPanel___c__DisplayClass137_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass137_0$$<RestorePMPartners>b__0
// il2cpp: bool UI_ChatPanel___c__DisplayClass137_0___RestorePMPartners_b__0 (UI_ChatPanel___c__DisplayClass137_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x40a6f80

bool_conflict
UI_ChatPanel_<>c__DisplayClass137_0__<RestorePMPartners>b__0
          (UI_ChatPanel___c__DisplayClass137_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  int iVar1;
  
  if (p != (Photon_Realtime_Player_o *)0x0) {
    iVar1 = (p->fields).actorNumber;
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == (__this->fields).partnerID);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass64_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass64_0___ctor (UI_ChatPanel___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x40a6fa0

void UI_ChatPanel_<>c__DisplayClass64_0___ctor
               (UI_ChatPanel___c__DisplayClass64_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass64_0$$<ProcessEmojiCodes>b__0
// il2cpp: System_String_o* UI_ChatPanel___c__DisplayClass64_0___ProcessEmojiCodes_b__0 (UI_ChatPanel___c__DisplayClass64_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x40a6fb0

System_String_o *
UI_ChatPanel_<>c__DisplayClass64_0__<ProcessEmojiCodes>b__0
          (UI_ChatPanel___c__DisplayClass64_0_o *__this,
          System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  bool_conflict bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_01;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *__this_03;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  undefined8 *puVar3;
  MethodInfo *extraout_RDX;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if (DAT_05704602 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatPanel);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&"<sprite={0}>");
    il2cpp_init_method_metadata(&"s\x200b\x200b");
    il2cpp_init_method_metadata(&"\n<size=60><sprite={0}></size>");
    DAT_05704602 = '\x01';
    method = extraout_RDX;
  }
  local_24 = 0;
  local_28 = 0;
  if ((((match != (System_Text_RegularExpressions_Match_o *)0x0) &&
       (__this_01 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (*(match->klass->vtable)._5_get_Groups.methodPtr)
                              (match,(match->klass->vtable)._5_get_Groups.method,method),
       __this_01 != (System_Text_RegularExpressions_GroupCollection_o *)0x0)) &&
      (__this_02 = (System_Text_RegularExpressions_Capture_o *)
                   System_Text_RegularExpressions_GroupCollection__get_Item
                             (__this_01,1,(MethodInfo *)0x0),
      __this_02 != (System_Text_RegularExpressions_Capture_o *)0x0)) &&
     (__this_03 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0),
     pSVar2 = "s\x200b\x200b", __this_03 != (System_String_o *)0x0)) {
    bVar1 = System_String__StartsWith(__this_03,"s\x200b\x200b",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = System_String__ToLower(__this_03,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatPanel + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                   (*(long *)(TypeInfo_ChatPanel + 0xb8) + 0x10);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
      goto LAB_040a71b1;
      bVar1 = System_Collections_Generic_Dictionary<object__int>__TryGetValue
                        (__this_00,(Il2CppObject *)pSVar2,(int32_t *)&local_24,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar1 == '\0') goto LAB_040a719b;
      local_2c = local_24;
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      puVar3 = &"<sprite={0}>";
    }
    else {
      if ((char)(__this->fields).stickerFound != '\0') {
        return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      if (pSVar2 == (System_String_o *)0x0) goto LAB_040a71b1;
      pSVar2 = System_String__Substring(__this_03,(pSVar2->fields)._stringLength,(MethodInfo *)0x0);
      bVar1 = System_Int32__TryParse(pSVar2,(int32_t *)&local_28,(MethodInfo *)0x0);
      if ((0x8c < local_28) || ((char)bVar1 == '\0')) {
LAB_040a719b:
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
        return pSVar2;
      }
      *(undefined1 *)&(__this->fields).stickerFound = 1;
      local_2c = local_28;
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      puVar3 = &"\n<size=60><sprite={0}></size>";
    }
    pSVar2 = System_String__Format((System_String_o *)*puVar3,arg0,(MethodInfo *)0x0);
    return pSVar2;
  }
LAB_040a71b1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass66_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass66_0___ctor (UI_ChatPanel___c__DisplayClass66_0_o* __this, const MethodInfo* method);
// 0x40a71c0

void UI_ChatPanel_<>c__DisplayClass66_0___ctor
               (UI_ChatPanel___c__DisplayClass66_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass66_0$$<Setup>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass66_0___Setup_b__0 (UI_ChatPanel___c__DisplayClass66_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x40a71d0

void UI_ChatPanel_<>c__DisplayClass66_0__<Setup>b__0
               (UI_ChatPanel___c__DisplayClass66_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *data,MethodInfo *method)

{
  UI_ChatScrollRect_o *pUVar1;
  UnityEngine_Vector3_array *pUVar2;
  bool_conflict bVar3;
  bool bVar4;
  
  pUVar1 = (__this->fields).scrollRect;
  if (pUVar1 != (UI_ChatScrollRect_o *)0x0) {
    *(undefined1 *)&(pUVar1->fields).m_VerticalScrollbarRect = 1;
    if (DAT_0570460b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_0570460b = '\x01';
    }
    pUVar2 = (pUVar1->fields).m_Corners;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar2 = (pUVar1->fields).m_Corners;
    bVar4 = true;
    if (*(char *)&(pUVar1->fields).m_VerticalScrollbarRect == '\0') {
      bVar4 = *(char *)((long)&(pUVar1->fields).m_VerticalScrollbarRect + 1) != '\0';
    }
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar2,(uint)bVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass66_0$$<Setup>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass66_0___Setup_b__1 (UI_ChatPanel___c__DisplayClass66_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x40a7320

void UI_ChatPanel_<>c__DisplayClass66_0__<Setup>b__1
               (UI_ChatPanel___c__DisplayClass66_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *data,MethodInfo *method)

{
  UI_ChatScrollRect_o *pUVar1;
  UnityEngine_Vector3_array *pUVar2;
  bool_conflict bVar3;
  
  pUVar1 = (__this->fields).scrollRect;
  if (pUVar1 != (UI_ChatScrollRect_o *)0x0) {
    if (DAT_0570460a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_0570460a = '\x01';
    }
    *(undefined1 *)&(pUVar1->fields).m_VerticalScrollbarRect = 0;
    pUVar2 = (pUVar1->fields).m_Corners;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar3 == '\0') ||
       (*(char *)((long)&(pUVar1->fields).m_VerticalScrollbarRect + 1) != '\0')) {
      return;
    }
    pUVar2 = (pUVar1->fields).m_Corners;
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___ctor (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40a7450

void UI_ChatPanel_<>c__DisplayClass75_0___ctor
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__0 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40a7460

void UI_ChatPanel_<>c__DisplayClass75_0__<CreateEmojiPanel>b__0
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__SetPanelMode(__this_00,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__1 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40a7480

void UI_ChatPanel_<>c__DisplayClass75_0__<CreateEmojiPanel>b__1
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__SetPanelMode(__this_00,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__2 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40a74a0

void UI_ChatPanel_<>c__DisplayClass75_0__<CreateEmojiPanel>b__2
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__ChangeEmojiPage(__this_00,-1,(__this->fields).tooltipText,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass75_0$$<CreateEmojiPanel>b__3
// il2cpp: void UI_ChatPanel___c__DisplayClass75_0___CreateEmojiPanel_b__3 (UI_ChatPanel___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x40a74d0

void UI_ChatPanel_<>c__DisplayClass75_0__<CreateEmojiPanel>b__3
               (UI_ChatPanel___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__ChangeEmojiPage(__this_00,1,(__this->fields).tooltipText,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$.ctor
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___ctor (UI_ChatPanel___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x40a7500

void UI_ChatPanel_<>c__DisplayClass77_0___ctor
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__0
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__0 (UI_ChatPanel___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x40a7510

void UI_ChatPanel_<>c__DisplayClass77_0__<CreateSpriteButton>b__0
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__InsertSticker(__this_00,(__this->fields).spriteIndex,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__1
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__1 (UI_ChatPanel___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x40a7530

void UI_ChatPanel_<>c__DisplayClass77_0__<CreateSpriteButton>b__1
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__InsertEmoji(__this_00,(__this->fields).spriteIndex,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__2
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__2 (UI_ChatPanel___c__DisplayClass77_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x40a7550

void UI_ChatPanel_<>c__DisplayClass77_0__<CreateSpriteButton>b__2
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *data,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  undefined1 auStack_14 [4];
  
  if (DAT_05704603 == '\0') {
    il2cpp_init_method_metadata(&":{0}:");
    DAT_05704603 = '\x01';
    method = extraout_RDX;
  }
  pTVar1 = (__this->fields).tooltipText;
  arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14,method);
  pSVar2 = System_String__Format(":{0}:",arg0,(MethodInfo *)0x0);
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable)._66_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<>c__DisplayClass77_0$$<CreateSpriteButton>b__3
// il2cpp: void UI_ChatPanel___c__DisplayClass77_0___CreateSpriteButton_b__3 (UI_ChatPanel___c__DisplayClass77_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x40a75d0

void UI_ChatPanel_<>c__DisplayClass77_0__<CreateSpriteButton>b__3
               (UI_ChatPanel___c__DisplayClass77_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *data,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_05704604 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704604 = '\x01';
  }
  pTVar1 = (__this->fields).tooltipText;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    vtable_dispatch = (pTVar1->klass->vtable)._66_set_text.methodPtr;
    (*vtable_dispatch)
              (pTVar1,"",(pTVar1->klass->vtable)._66_set_text.method,vtable_dispatch
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel.<ResetPMToggleActive>d__119$$.ctor
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__119___ctor (UI_ChatPanel__ResetPMToggleActive_d__119_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40a7620

void UI_ChatPanel_<ResetPMToggleActive>d__119___ctor
               (UI_ChatPanel__ResetPMToggleActive_d__119_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__119$$System.IDisposable.Dispose
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__119__System_IDisposable_Dispose (UI_ChatPanel__ResetPMToggleActive_d__119_o* __this, const MethodInfo* method);
// 0x40a7640

void UI_ChatPanel_<ResetPMToggleActive>d__119__System_IDisposable_Dispose
               (UI_ChatPanel__ResetPMToggleActive_d__119_o *__this,MethodInfo *method)

{
  return;
}


// UI.ChatPanel.<ResetPMToggleActive>d__119$$MoveNext
// il2cpp: bool UI_ChatPanel__ResetPMToggleActive_d__119__MoveNext (UI_ChatPanel__ResetPMToggleActive_d__119_o* __this, const MethodInfo* method);
// 0x40a7650

bool_conflict
UI_ChatPanel_<ResetPMToggleActive>d__119__MoveNext
          (UI_ChatPanel__ResetPMToggleActive_d__119_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  undefined8 uVar3;
  
  if (DAT_05704605 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704605 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pUVar2 == (UI_ChatPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)&(pUVar2->fields)._pmToggleActive = 0;
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.2,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  return 0;
}


// UI.ChatPanel.<ResetPMToggleActive>d__119$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ResetPMToggleActive_d__119__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ChatPanel__ResetPMToggleActive_d__119_o* __this, const MethodInfo* method);
// 0x40a7700

Il2CppObject *
UI_ChatPanel_<ResetPMToggleActive>d__119__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_ChatPanel__ResetPMToggleActive_d__119_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ResetPMToggleActive>d__119$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ChatPanel__ResetPMToggleActive_d__119__System_Collections_IEnumerator_Reset (UI_ChatPanel__ResetPMToggleActive_d__119_o* __this, const MethodInfo* method);
// 0x40a7710

void UI_ChatPanel_<ResetPMToggleActive>d__119__System_Collections_IEnumerator_Reset
               (UI_ChatPanel__ResetPMToggleActive_d__119_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.ChatPanel.<ResetPMToggleActive>d__119$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ResetPMToggleActive_d__119__System_Collections_IEnumerator_get_Current (UI_ChatPanel__ResetPMToggleActive_d__119_o* __this, const MethodInfo* method);
// 0x40a7750

Il2CppObject *
UI_ChatPanel_<ResetPMToggleActive>d__119__System_Collections_IEnumerator_get_Current
          (UI_ChatPanel__ResetPMToggleActive_d__119_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$.ctor
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__78___ctor (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40a7760

void UI_ChatPanel_<ShowTemporaryTooltip>d__78___ctor
               (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.IDisposable.Dispose
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__78__System_IDisposable_Dispose (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x40a7780

void UI_ChatPanel_<ShowTemporaryTooltip>d__78__System_IDisposable_Dispose
               (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  return;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$MoveNext
// il2cpp: bool UI_ChatPanel__ShowTemporaryTooltip_d__78__MoveNext (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x40a7790

bool_conflict
UI_ChatPanel_<ShowTemporaryTooltip>d__78__MoveNext
          (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  float fVar5;
  
  if (DAT_05704606 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSecondsRealtime);
    DAT_05704606 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pTVar2 = (__this->fields).tooltip;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pTVar2 = (__this->fields).tooltip;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                  (pTVar2,(__this->fields)._prev_5__2,(pTVar2->klass->vtable)._66_set_text.method);
        pTVar2 = (__this->fields).tooltip;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_fontSize
                    ((TMPro_TMP_Text_o *)pTVar2,(__this->fields)._prevSize_5__3,(MethodInfo *)0x0);
          return 0;
        }
      }
LAB_040a7952:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pTVar2 = (__this->fields).tooltip;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      pTVar2 = (__this->fields).tooltip;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar4 = (System_String_o *)
                 (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                           (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
        (__this->fields)._prev_5__2 = pSVar4;
        il2cpp_runtime_glue(&(__this->fields)._prev_5__2,pSVar4);
        pTVar2 = (__this->fields).tooltip;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (__this->fields)._prevSize_5__3 = *(float *)&(pTVar2->fields).m_spriteColor.fields.r;
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,(__this->fields).message,(pTVar2->klass->vtable)._66_set_text.method);
          pTVar2 = (__this->fields).tooltip;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            fVar5 = (__this->fields)._prevSize_5__3;
            if (10.0 <= fVar5) {
              fVar5 = 10.0;
            }
            TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar2,fVar5,(MethodInfo *)0x0);
            fVar5 = (__this->fields).duration;
            __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_glue(TypeInfo_WaitForSecondsRealtime);
            UnityEngine_WaitForSecondsRealtime___ctor(__this_00,fVar5,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_00;
            il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
          }
        }
      }
      goto LAB_040a7952;
    }
  }
  return 0;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x40a7960

Il2CppObject *
UI_ChatPanel_<ShowTemporaryTooltip>d__78__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_IEnumerator_Reset (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x40a7970

void UI_ChatPanel_<ShowTemporaryTooltip>d__78__System_Collections_IEnumerator_Reset
               (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.ChatPanel.<ShowTemporaryTooltip>d__78$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ChatPanel__ShowTemporaryTooltip_d__78__System_Collections_IEnumerator_get_Current (UI_ChatPanel__ShowTemporaryTooltip_d__78_o* __this, const MethodInfo* method);
// 0x40a79b0

Il2CppObject *
UI_ChatPanel_<ShowTemporaryTooltip>d__78__System_Collections_IEnumerator_get_Current
          (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ChatPanel$$get_POOL_SIZE
// il2cpp: int32_t UI_ChatPanel__get_POOL_SIZE (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40986f0

int32_t UI_ChatPanel__get_POOL_SIZE(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (DAT_057045bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_057045bb = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 != 0) {
    iVar2 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_init_class();
  iVar2 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
  return iVar2;
}


// UI.ChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ChatPanel__get_ThemePanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x4098750

System_String_o * UI_ChatPanel__get_ThemePanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  if (DAT_057045bc == '\0') {
    il2cpp_init_method_metadata(&"ChatPanel");
    DAT_057045bc = '\x01';
  }
  return "ChatPanel";
}


// UI.ChatPanel$$.cctor
// il2cpp: void UI_ChatPanel___cctor (const MethodInfo* method);
// 0x4098780

void UI_ChatPanel___cctor(MethodInfo *method)

{
  long lVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  System_String_o *key;
  int local_24;
  
  if (DAT_057045bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatPanel);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&":([^:\\s]+):");
    il2cpp_init_method_metadata(&"<[^>]+>|</[^>]+>");
    DAT_057045bd = '\x01';
  }
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"<[^>]+>|</[^>]+>",8,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ChatPanel + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ChatPanel + 0xb8),pSVar2);
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,":([^:\\s]+):",8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatPanel + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_Int32);
  lVar1 = *(long *)(TypeInfo_ChatPanel + 0xb8);
  *(System_Collections_Generic_Dictionary_object__int__o **)(lVar1 + 0x10) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x10);
  local_24 = 0;
  do {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__int__o **)
              (*(long *)(TypeInfo_ChatPanel + 0xb8) + 0x10);
    key = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__int>__set_Item
              (pSVar3,(Il2CppObject *)key,local_24,MethodInfo_Void_set_Item);
    local_24 = local_24 + 1;
  } while (local_24 < 0x8d);
  return;
}


// UI.ChatPanel$$ProcessEmojiCodes
// il2cpp: System_String_o* UI_ChatPanel__ProcessEmojiCodes (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x4098930

System_String_o *
UI_ChatPanel__ProcessEmojiCodes(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  UI_ChatPanel___c__DisplayClass64_0_o *__this_01;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar1;
  
  if (DAT_057045be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatPanel);
    il2cpp_init_method_metadata(&TypeInfo_MatchEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_String__ProcessEmojiCodes_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass64_0);
    DAT_057045be = '\x01';
  }
  __this_01 = (UI_ChatPanel___c__DisplayClass64_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass64_0);
  UI_ChatPanel_<>c__DisplayClass64_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass64_0_o *)0x0) {
    *(undefined1 *)&(__this_01->fields).stickerFound = 0;
    if (*(int *)(TypeInfo_ChatPanel + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_ChatPanel + 0xb8) + 8);
    evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_glue(TypeInfo_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar1 = System_Text_RegularExpressions_Regex__Replace
                         (__this_00,text,evaluator,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$Setup
// il2cpp: void UI_ChatPanel__Setup (UI_ChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4098a20

void UI_ChatPanel__Setup(UI_ChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  TMPro_TMP_InputField_o **ppTVar1;
  UnityEngine_GameObject_o **ppUVar2;
  int32_t *piVar3;
  TMPro_TextMeshProUGUI_o **ppTVar4;
  byte bVar5;
  uint uVar6;
  System_Delegate_o *a;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_T0__o *__this_01;
  System_Collections_Generic_List_TMP_InputField__o *pSVar7;
  TMPro_TMP_InputField_array *pTVar8;
  Utility_Color255_o *__this_02;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *pUVar9;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar10;
  UnityEngine_Vector2_o UVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  System_RuntimeTypeHandle_o SVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  UI_ChatPanel___c__DisplayClass66_0_o *__this_05;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Component_o *__this_06;
  System_Type_array *pSVar18;
  System_Type_o *pSVar19;
  long lVar20;
  UnityEngine_GameObject_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  UnityEngine_RectTransform_o *pUVar23;
  UnityEngine_RectTransform_o *pUVar24;
  TMPro_TMP_InputField_o *pTVar25;
  UnityEngine_GameObject_o *pUVar26;
  System_Collections_Generic_List_Enumerator_T__c *__this_07;
  UnityEngine_GameObject_o *pUVar27;
  TMPro_TMP_Text_o *pTVar28;
  TMPro_TextMeshProUGUI_o *pTVar29;
  System_Delegate_o *b;
  TMPro_TMP_InputField_OnValidateInput_o *value_01;
  UnityEngine_Events_UnityAction_T0__o *pUVar30;
  UnityEngine_Object_o *pUVar31;
  System_String_o *pSVar32;
  UI_ElementStyle_o *__this_08;
  Il2CppObject *pIVar33;
  UI_ChatScrollRect_o *pUVar34;
  MethodInfo *method_00;
  Photon_Realtime_Room_o *pPVar35;
  Photon_Realtime_Player_o *target;
  Photon_Realtime_Player_o *pPVar36;
  TMPro_TMP_FontAsset_o *value_02;
  UnityEngine_UI_Scrollbar_o *__this_09;
  UnityEngine_Transform_o *pUVar37;
  UnityEngine_UI_Graphic_o *value_03;
  UnityEngine_EventSystems_EventTrigger_o *__this_10;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar38;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar39;
  undefined8 uVar40;
  MethodInfo *pMVar41;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int iVar42;
  UI_ChatPanel___c__DisplayClass66_0_Fields *pUVar43;
  UnityEngine_Color_o UVar44;
  System_ValueTuple_string__int__int__o SVar45;
  System_ValueTuple_string__int__o SVar46;
  System_Collections_Generic_List_T__o *pSVar47;
  Il2CppRGCTXData *pIVar48;
  _union_247328 _Var49;
  undefined1 auStack_148 [48];
  undefined1 auStack_118 [16];
  _union_247328 _Stack_108;
  float fStack_100;
  float fStack_fc;
  UnityEngine_Color_Fields UStack_f8;
  UnityEngine_Color_Fields UStack_e8;
  UnityEngine_Color_Fields aUStack_d8 [2];
  UnityEngine_Component_o *pUStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  System_Collections_Generic_List_T__o *pSStack_88;
  Il2CppRGCTXData *pIStack_80;
  _union_247328 _Stack_78;
  undefined8 uStack_70;
  UnityEngine_Color_Fields UStack_68;
  UnityEngine_Color_Fields UStack_58;
  UnityEngine_Color_Fields UStack_48;
  undefined8 uStack_38;
  
  if (DAT_057045bf == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasGroup);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnEndEdit);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnValueChanged);
    il2cpp_init_method_metadata(&MethodInfo_ChatScrollRect_GetComponentInChildren_ChatScroll);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_Entry);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_ChatScrollRect_AddComponent_ChatScrollRect);
    il2cpp_init_method_metadata(&MethodInfo_EventTrigger_AddComponent_EventTrigger);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_Scrollbar_AddComponent_Scrollbar);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_OnValidateInput);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeRef_TMP_InputField);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Char__Setup_b__66_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass66_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIAnchors);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_BaseEventData);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Handle");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Placeholder");
    il2cpp_init_method_metadata(&"PUBLIC");
    il2cpp_init_method_metadata(&"Input");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"Content/Panel");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"InputTextColor");
    il2cpp_init_method_metadata(&"Press Tab to cycle channels");
    il2cpp_init_method_metadata(&"Content");
    il2cpp_init_method_metadata(&"TMPInputField");
    il2cpp_init_method_metadata(&"Content/Scrollbar");
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    il2cpp_init_method_metadata(&"Text Area");
    il2cpp_init_method_metadata(&"InputSelectionColor");
    il2cpp_init_method_metadata(&"Scrollbar");
    il2cpp_init_method_metadata(&"Sliding Area");
    DAT_057045bf = '\x01';
  }
  UStack_48.r = 0.0;
  UStack_48.g = 0.0;
  UStack_48.b = 0.0;
  UStack_48.a = 0.0;
  UStack_58.r = 0.0;
  UStack_58.g = 0.0;
  UStack_58.b = 0.0;
  UStack_58.a = 0.0;
  UStack_68.r = 0.0;
  UStack_68.g = 0.0;
  UStack_68.b = 0.0;
  UStack_68.a = 0.0;
  _Stack_78.genericMethod = (UnityEngine_Object_o *)0x0;
  uStack_70._0_4_ = 0.0;
  uStack_70._4_4_ = 0.0;
  pSStack_88 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_80 = (Il2CppRGCTXData *)0x0;
  uStack_38._0_4_ = 0.0;
  uStack_38._4_4_ = 0.0;
  auStack_148._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_148._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_148._16_8_ = (UnityEngine_Object_o *)0x0;
  __this_05 = (UI_ChatPanel___c__DisplayClass66_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass66_0);
  UI_ChatPanel_<>c__DisplayClass66_0___ctor(__this_05,(MethodInfo *)0x0);
  pUVar17 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar17 = UnityEngine_Transform__Find(pUVar17,"InputField",(MethodInfo *)0x0),
     pUVar17 == (UnityEngine_Transform_o *)0x0)) goto LAB_0409b160;
  __this_06 = (UnityEngine_Component_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar17,MethodInfo_InputField_GetComponent_InputField);
  pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  SVar14 = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar19 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if (pSVar18 == (System_Type_array *)0x0) goto LAB_0409b160;
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
  pSVar18->m_Items[0] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_TMP_InputField,(MethodInfo *)0x0);
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((uint)pSVar18->max_length < 2) goto LAB_0409b16a;
  pSVar18->m_Items[1] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items + 1,pSVar19);
  pUVar21 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar21,"TMPInputField",pSVar18,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
  pUVar22 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
     (UnityEngine_Transform__SetParent(pUVar17,pUVar22,0,(MethodInfo *)0x0),
     __this_06 == (UnityEngine_Component_o *)0x0)) goto LAB_0409b160;
  pUStack_b8 = __this_06;
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__GetComponent<object>(__this_06,MethodInfo_RectTransform_GetComponent_RectTransform);
  pUVar24 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
  if ((pUVar23 == (UnityEngine_RectTransform_o *)0x0) ||
     (UVar11 = UnityEngine_RectTransform__get_anchorMin(pUVar23,(MethodInfo *)0x0),
     pUVar24 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0409b160;
  UnityEngine_RectTransform__set_anchorMin(pUVar24,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_anchorMax(pUVar23,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax(pUVar24,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_pivot(pUVar23,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(pUVar24,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar23,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta(pUVar24,UVar11,(MethodInfo *)0x0);
  UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar23,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar24,UVar11,(MethodInfo *)0x0);
  pTVar25 = (TMPro_TMP_InputField_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar21,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
  ppTVar1 = &(__this->fields)._inputField;
  (__this->fields)._inputField = pTVar25;
  il2cpp_runtime_glue(ppTVar1,pTVar25);
  pTVar25 = (__this->fields)._inputField;
  if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_characterLimit(pTVar25,500,(MethodInfo *)0x0);
  pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar18 == (System_Type_array *)0x0) goto LAB_0409b160;
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
  pSVar18->m_Items[0] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items,pSVar19);
  pUVar26 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar26,"Text Area",pSVar18,(MethodInfo *)0x0);
  if (pUVar26 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar26,(MethodInfo *)0x0);
  pUVar22 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  UnityEngine_Transform__SetParent(pUVar17,pUVar22,0,(MethodInfo *)0x0);
  __this_07 = (System_Collections_Generic_List_Enumerator_T__c *)
              UnityEngine_GameObject__GetComponent<object>(pUVar26,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_07 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) goto LAB_0409b160;
  UnityEngine_RectTransform__set_anchorMin
            ((UnityEngine_RectTransform_o *)__this_07,
             (UnityEngine_Vector2_o)
             *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            ((UnityEngine_RectTransform_o *)__this_07,
             (UnityEngine_Vector2_o)
             *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
             (MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  auStack_148._32_8_ = __this_07;
  UnityEngine_RectTransform__set_sizeDelta
            ((UnityEngine_RectTransform_o *)__this_07,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
             (MethodInfo *)0x0);
  UnityEngine_GameObject__AddComponent<object>(pUVar26,MethodInfo_RectMask2D_AddComponent_RectMask2D);
  pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar18 == (System_Type_array *)0x0) goto LAB_0409b160;
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  auStack_148._40_8_ = __this_05;
  if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
  pSVar18->m_Items[0] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((uint)pSVar18->max_length < 2) goto LAB_0409b16a;
  pSVar18->m_Items[1] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items + 1,pSVar19);
  pUVar27 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar27,"Text",pSVar18,(MethodInfo *)0x0);
  if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar27,(MethodInfo *)0x0);
  pUVar22 = UnityEngine_GameObject__get_transform(pUVar26,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  UnityEngine_Transform__SetParent(pUVar17,pUVar22,0,(MethodInfo *)0x0);
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar27,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409b160;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar23,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar23,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
             (MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar23,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
             (MethodInfo *)0x0);
  pTVar28 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent<object>(pUVar27,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pTVar28 == (TMPro_TMP_Text_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_Text__set_enableWordWrapping(pTVar28,0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_richText(pTVar28,0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_overflowMode(pTVar28,4,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_horizontalAlignment(pTVar28,1,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_verticalAlignment(pTVar28,0x200,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_fontSize(pTVar28,20.0,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_textViewport
            (*ppTVar1,(UnityEngine_RectTransform_o *)auStack_148._32_8_,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_textComponent(*ppTVar1,pTVar28,(MethodInfo *)0x0);
  pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar18 == (System_Type_array *)0x0) goto LAB_0409b160;
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
  pSVar18->m_Items[0] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((uint)pSVar18->max_length < 2) goto LAB_0409b16a;
  pSVar18->m_Items[1] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items + 1);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_CanvasGroup,(MethodInfo *)0x0);
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((uint)pSVar18->max_length < 3) goto LAB_0409b16a;
  pSVar18->m_Items[2] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items + 2,pSVar19);
  pUVar27 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar27,"Placeholder",pSVar18,(MethodInfo *)0x0);
  if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar27,(MethodInfo *)0x0);
  pUVar22 = UnityEngine_GameObject__get_transform(pUVar26,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  UnityEngine_Transform__SetParent(pUVar17,pUVar22,0,(MethodInfo *)0x0);
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar27,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409b160;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar23,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar23,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMin
            (pUVar23,(UnityEngine_Vector2_o)0xc000000000000000,(MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (pUVar23,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
             (MethodInfo *)0x0);
  pTVar29 = (TMPro_TextMeshProUGUI_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar27,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  ppTVar4 = &(__this->fields)._chatModeLabel;
  (__this->fields)._chatModeLabel = pTVar29;
  il2cpp_runtime_glue(ppTVar4,pTVar29);
  pTVar29 = (__this->fields)._chatModeLabel;
  if (pTVar29 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  (*(pTVar29->klass->vtable)._66_set_text.methodPtr)
            (pTVar29,"Press Tab to cycle channels",(pTVar29->klass->vtable)._66_set_text.method);
  if (*ppTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)*ppTVar4,18.0,(MethodInfo *)0x0);
  if (*ppTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*ppTVar4,0,(MethodInfo *)0x0);
  if (*ppTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_Text__set_horizontalAlignment((TMPro_TMP_Text_o *)*ppTVar4,1,(MethodInfo *)0x0);
  if (*ppTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_Text__set_verticalAlignment((TMPro_TMP_Text_o *)*ppTVar4,0x200,(MethodInfo *)0x0);
  pTVar29 = *ppTVar4;
  if (pTVar29 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  (*(pTVar29->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,pTVar29,(pTVar29->klass->vtable)._23_set_color.method);
  pTVar29 = (TMPro_TextMeshProUGUI_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar27,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
  ppTVar4 = &(__this->fields)._placeholderText;
  (__this->fields)._placeholderText = pTVar29;
  il2cpp_runtime_glue(ppTVar4);
  pTVar29 = (__this->fields)._placeholderText;
  if (pTVar29 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)pTVar29,0.0,(MethodInfo *)0x0);
  pTVar29 = *ppTVar4;
  if (pTVar29 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409b160;
  UnityEngine_CanvasGroup__set_blocksRaycasts
            ((UnityEngine_CanvasGroup_o *)pTVar29,0,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_lineType(*ppTVar1,0,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_richText(*ppTVar1,0,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_inputType(*ppTVar1,0,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_scrollSensitivity(*ppTVar1,60.0,(MethodInfo *)0x0);
  pTVar25 = *ppTVar1;
  if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  a = (System_Delegate_o *)(pTVar25->fields).m_OnTouchScreenKeyboardStatusChanged;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    b = *(System_Delegate_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    b = *(System_Delegate_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (b == (System_Delegate_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor();
    lVar20 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Delegate_o **)(lVar20 + 8) = b;
    il2cpp_runtime_glue(lVar20 + 8,b);
  }
  value_01 = (TMPro_TMP_InputField_OnValidateInput_o *)
             System_Delegate__Combine(a,b,(MethodInfo *)0x0);
  if ((value_01 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
     (value_01->klass != TypeInfo_OnValidateInput)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value_01);
  }
  TMPro_TMP_InputField__set_onValidateInput(pTVar25,value_01,(MethodInfo *)0x0);
  pTVar25 = *ppTVar1;
  if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  *(undefined1 *)&(pTVar25->fields).m_IsTextComponentUpdateRequired = 0;
  uStack_b0 = 0;
  lVar20 = *(long *)&(pTVar25->fields).m_Navigation.fields.m_WrapAround;
  uVar40 = *(undefined8 *)((long)&(pTVar25->fields).m_Navigation.fields.m_SelectOnUp + 4);
  uVar12 = *(undefined8 *)((long)&(pTVar25->fields).m_Navigation.fields.m_SelectOnDown + 4);
  uVar13 = *(undefined8 *)((long)&(pTVar25->fields).m_Navigation.fields.m_SelectOnLeft + 4);
  uStack_ac = (undefined4)lVar20;
  uStack_a8 = (undefined4)((ulong)lVar20 >> 0x20);
  uStack_a4 = (undefined4)uVar40;
  uStack_a0 = (undefined4)((ulong)uVar40 >> 0x20);
  uStack_9c = (undefined4)uVar12;
  uStack_98 = (undefined4)((ulong)uVar12 >> 0x20);
  uStack_94 = (undefined4)uVar13;
  uStack_90 = (undefined4)((ulong)uVar13 >> 0x20);
  uStack_8c = *(undefined4 *)((long)&(pTVar25->fields).m_Navigation.fields.m_SelectOnRight + 4);
  value.fields.m_SelectOnRight._4_4_ = uStack_8c;
  value.fields.m_SelectOnRight._0_4_ = uStack_90;
  value.fields.m_SelectOnUp._4_4_ = uStack_a4;
  value.fields.m_SelectOnUp._0_4_ = uStack_a8;
  value.fields.m_SelectOnDown._4_4_ = uStack_9c;
  value.fields.m_SelectOnDown._0_4_ = uStack_a0;
  value.fields.m_SelectOnLeft._4_4_ = uStack_94;
  value.fields.m_SelectOnLeft._0_4_ = uStack_98;
  value.fields.m_Mode = (int)(lVar20 << 0x20);
  value.fields.m_WrapAround = (int)((ulong)(lVar20 << 0x20) >> 0x20);
  UnityEngine_UI_Selectable__set_navigation
            ((UnityEngine_UI_Selectable_o *)pTVar25,value,(MethodInfo *)0x0);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  __this_00 = ((*ppTVar1)->fields).m_OnEndTextSelection;
  pUVar30 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
  UnityEngine_Events_UnityAction<object>___ctor();
  if (__this_00 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto LAB_0409b160;
  UnityEngine_Events_UnityEvent<object>__AddListener
            ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar30,MethodInfo_Void_AddListener);
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  __this_01 = *(UnityEngine_Events_UnityEvent_T0__o **)&((*ppTVar1)->fields).m_GlobalPointSize;
  pUVar30 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
  UnityEngine_Events_UnityAction<object>___ctor();
  if (__this_01 == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto LAB_0409b160;
  UnityEngine_Events_UnityEvent<object>__AddListener(__this_01,pUVar30,MethodInfo_Void_AddListener);
  if ((*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
     (pUVar23 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)*ppTVar1,MethodInfo_RectTransform_GetComponent_RectTransform),
     pUVar23 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0409b160;
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar23,(UnityEngine_Vector2_o)0x41f0000000000000,(MethodInfo *)0x0);
  pUVar31 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar26,MethodInfo_RectMask2D_GetComponent_RectMask2D);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar15 = UnityEngine_Object__op_Equality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    UnityEngine_GameObject__AddComponent<object>(pUVar26,MethodInfo_RectMask2D_AddComponent_RectMask2D);
  }
  uVar40 = auStack_148._32_8_;
  UnityEngine_RectTransform__set_offsetMin
            ((UnityEngine_RectTransform_o *)auStack_148._32_8_,
             (UnityEngine_Vector2_o)0x4000000040a00000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMax
            ((UnityEngine_RectTransform_o *)uVar40,(UnityEngine_Vector2_o)0xc0000000c2200000,
             (MethodInfo *)0x0);
  pSVar32 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_08 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_08,0x14,120.0,20.0,pSVar32,(MethodInfo *)0x0);
  if (__this_08 == (UI_ElementStyle_o *)0x0) goto LAB_0409b160;
  pSVar32 = (__this_08->fields).ThemePanel;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_UIManager__GetThemeColorBlock
            ((UnityEngine_UI_ColorBlock_o *)auStack_118,pSVar32,"InputField","Input",
             "DefaultPanel",(MethodInfo *)0x0);
  uStack_38._0_4_ = aUStack_d8[1].r;
  uStack_38._4_4_ = aUStack_d8[1].g;
  UStack_48.r = aUStack_d8[0].r;
  UStack_48.g = aUStack_d8[0].g;
  UStack_48.b = aUStack_d8[0].b;
  UStack_48.a = aUStack_d8[0].a;
  UStack_58.r = UStack_e8.r;
  UStack_58.g = UStack_e8.g;
  UStack_58.b = UStack_e8.b;
  UStack_58.a = UStack_e8.a;
  UStack_68.r = UStack_f8.r;
  UStack_68.g = UStack_f8.g;
  UStack_68.b = UStack_f8.b;
  UStack_68.a = UStack_f8.a;
  _Stack_78.genericMethod = _Stack_108.genericMethod;
  uStack_70._0_4_ = fStack_100;
  uStack_70._4_4_ = fStack_fc;
  pSStack_88 = (System_Collections_Generic_List_T__o *)auStack_118._0_8_;
  pIStack_80 = (Il2CppRGCTXData *)auStack_118._8_8_;
  if (*ppTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  value_00.fields.m_NormalColor.fields.b = (float)auStack_118._8_4_;
  value_00.fields.m_NormalColor.fields.a = (float)auStack_118._12_4_;
  value_00.fields.m_NormalColor.fields.r = (float)auStack_118._0_4_;
  value_00.fields.m_NormalColor.fields.g = (float)auStack_118._4_4_;
  value_00.fields.m_HighlightedColor.fields._0_8_ = _Stack_108.genericMethod;
  value_00.fields.m_HighlightedColor.fields.b = fStack_100;
  value_00.fields.m_HighlightedColor.fields.a = fStack_fc;
  value_00.fields.m_PressedColor.fields.r = UStack_f8.r;
  value_00.fields.m_PressedColor.fields.g = UStack_f8.g;
  value_00.fields.m_PressedColor.fields.b = UStack_f8.b;
  value_00.fields.m_PressedColor.fields.a = UStack_f8.a;
  value_00.fields.m_SelectedColor.fields.r = UStack_e8.r;
  value_00.fields.m_SelectedColor.fields.g = UStack_e8.g;
  value_00.fields.m_SelectedColor.fields.b = UStack_e8.b;
  value_00.fields.m_SelectedColor.fields.a = UStack_e8.a;
  value_00.fields.m_DisabledColor.fields.r = aUStack_d8[0].r;
  value_00.fields.m_DisabledColor.fields.g = aUStack_d8[0].g;
  value_00.fields.m_DisabledColor.fields.b = aUStack_d8[0].b;
  value_00.fields.m_DisabledColor.fields.a = aUStack_d8[0].a;
  value_00.fields.m_ColorMultiplier = aUStack_d8[1].r;
  value_00.fields.m_FadeDuration = aUStack_d8[1].g;
  pSVar47 = (System_Collections_Generic_List_T__o *)auStack_118._0_8_;
  pIVar48 = (Il2CppRGCTXData *)auStack_118._8_8_;
  _Var49 = _Stack_108;
  UnityEngine_UI_Selectable__set_colors
            ((UnityEngine_UI_Selectable_o *)*ppTVar1,value_00,(MethodInfo *)0x0);
  UVar44 = UI_UIManager__GetThemeColor
                     ((__this_08->fields).ThemePanel,"InputField","InputTextColor","DefaultPanel",
                      (MethodInfo *)0x0);
  (*(pTVar28->klass->vtable)._23_set_color.methodPtr)
            (UVar44.fields.r,UVar44.fields.b,pTVar28,(pTVar28->klass->vtable)._23_set_color.method);
  pTVar25 = *ppTVar1;
  UVar44 = UI_UIManager__GetThemeColor
                     ((__this_08->fields).ThemePanel,"InputField","InputSelectionColor","DefaultPanel",
                      (MethodInfo *)0x0);
  if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  TMPro_TMP_InputField__set_selectionColor(pTVar25,UVar44,(MethodInfo *)0x0);
  pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  SVar14 = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar19 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if (pSVar18 == (System_Type_array *)0x0) goto LAB_0409b160;
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
  pSVar18->m_Items[0] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items);
  pSVar19 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if ((pSVar19 != (System_Type_o *)0x0) &&
     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).element_class), lVar20 == 0))
  goto LAB_0409b16f;
  if ((uint)pSVar18->max_length < 2) goto LAB_0409b16a;
  pSVar18->m_Items[1] = pSVar19;
  il2cpp_runtime_glue(pSVar18->m_Items + 1,pSVar19);
  pUVar26 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar26,"Background",pSVar18,(MethodInfo *)0x0);
  if (pUVar26 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar26,(MethodInfo *)0x0);
  pUVar22 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  UnityEngine_Transform__SetParent(pUVar17,pUVar22,0,(MethodInfo *)0x0);
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar26,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  UnityEngine_Transform__SetAsFirstSibling(pUVar17,(MethodInfo *)0x0);
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar26,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409b160;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar23,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar23,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
             (MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar23,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
             (MethodInfo *)0x0);
  pIVar33 = UnityEngine_GameObject__GetComponent<object>(pUVar26,MethodInfo_Image_GetComponent_Image);
  if (pIVar33 == (Il2CppObject *)0x0) goto LAB_0409b160;
  (*pIVar33->klass->vtable[0x17].methodPtr)(0x3dcccccd,0x3dcccccd,pIVar33);
  pUVar31 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject(pUStack_b8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Object__Destroy(pUVar31,(MethodInfo *)0x0);
  pUVar17 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar17 = UnityEngine_Transform__Find(pUVar17,"Content/Panel",(MethodInfo *)0x0),
     pUVar17 == (UnityEngine_Transform_o *)0x0)) goto LAB_0409b160;
  pUVar21 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields)._panel;
  (__this->fields)._panel = pUVar21;
  il2cpp_runtime_glue(ppUVar2,pUVar21);
  pUVar21 = (__this->fields)._panel;
  if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._chatPanelRect = pUVar23;
  il2cpp_runtime_glue(&(__this->fields)._chatPanelRect,pUVar23);
  pTVar25 = (__this->fields)._inputField;
  if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pTVar25,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._inputFieldRect = pUVar23;
  il2cpp_runtime_glue(&(__this->fields)._inputFieldRect);
  pUVar17 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar17 = UnityEngine_Transform__Find(pUVar17,"Content",(MethodInfo *)0x0),
     pUVar17 == (UnityEngine_Transform_o *)0x0)) goto LAB_0409b160;
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar17,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._contentRect = pUVar23;
  il2cpp_runtime_glue(&(__this->fields)._contentRect);
  pUVar17 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  pUVar23 = (UnityEngine_RectTransform_o *)0x0;
  pUVar17 = UnityEngine_Transform__Find(pUVar17,"Content/Scrollbar",(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
    pUVar23 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar17,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  (__this->fields)._scrollbarRect = pUVar23;
  il2cpp_runtime_glue(&(__this->fields)._scrollbarRect,pUVar23);
  pUVar34 = (UI_ChatScrollRect_o *)
            UnityEngine_Component__GetComponentInChildren<object>
                      ((UnityEngine_Component_o *)__this,MethodInfo_ChatScrollRect_GetComponentInChildren_ChatScroll);
  (__this->fields)._scrollRect = pUVar34;
  il2cpp_runtime_glue(&(__this->fields)._scrollRect);
  pUVar17 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar17 = UnityEngine_Transform__Find(pUVar17,"Content",(MethodInfo *)0x0),
     pUVar17 == (UnityEngine_Transform_o *)0x0)) goto LAB_0409b160;
  pIVar33 = UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar17,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar20 == 0) ||
     ((lVar20 = *(long *)(lVar20 + 0x140), lVar20 == 0 || (pIVar33 == (Il2CppObject *)0x0))))
  goto LAB_0409b160;
  (*pIVar33->klass->vtable[0x26].methodPtr)((float)*(int *)(lVar20 + 0x14),pIVar33);
  pUVar17 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_0409b160;
  pUVar23 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar17,MethodInfo_RectTransform_GetComponent_RectTransform);
  lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar20 == 0) || (pMVar41 = *(MethodInfo **)(lVar20 + 0x138), pMVar41 == (MethodInfo *)0x0))
     || (pUVar23 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0409b160;
  UVar11.fields.y = 0.0;
  UVar11.fields.x = (float)*(int *)((long)&pMVar41->invoker_method + 4);
  UnityEngine_RectTransform__set_sizeDelta(pUVar23,UVar11,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar45 = GameManagers_ChatManager__GetPreservedInputWithCaret((MethodInfo *)0x0);
  SVar46 = GameManagers_ChatManager__GetConversation("PUBLIC",(MethodInfo *)0x0);
  iVar16 = SVar46.fields.Item2;
  bVar15 = System_String__IsNullOrEmpty(SVar46.fields.Item1,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    pTVar25 = *ppTVar1;
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)MiscExtensions__StripRichText(SVar46.fields.Item1,(MethodInfo *)0x0);
    if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
    TMPro_TMP_InputField__set_text(pTVar25,(System_String_o *)method_00,(MethodInfo *)0x0);
LAB_0409a2d8:
    *(int32_t *)&(__this->fields)._cachedRectTransforms = iVar16;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar15 = System_String__IsNullOrEmpty(SVar45.fields.Item1,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      pTVar25 = *ppTVar1;
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = (MethodInfo *)MiscExtensions__StripRichText(SVar45.fields.Item1,(MethodInfo *)0x0)
      ;
      if (pTVar25 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409b160;
      TMPro_TMP_InputField__set_text(pTVar25,(System_String_o *)method_00,(MethodInfo *)0x0);
      iVar16 = SVar45.fields.Item2;
      goto LAB_0409a2d8;
    }
  }
  UI_ChatPanel__SetupChatModeLabel(__this,method_00);
  UI_ChatPanel__SetupNotificationBadge(__this,method_00);
  UI_ChatPanel__SetupEmojiButton(__this,method_00);
  lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x180), lVar20 == 0)) goto LAB_0409b160;
  UI_ChatPanel__SetChatHiddenState(__this,(uint)*(byte *)(lVar20 + 0x11),0,pMVar41);
  if (0 < SVar45.fields.Item3) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar35 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    }
    else {
      pPVar35 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    }
    if (pPVar35 != (Photon_Realtime_Room_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar35 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar35 == (Photon_Realtime_Room_o *)0x0) goto LAB_0409b160;
      target = (Photon_Realtime_Player_o *)
               (*(pPVar35->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar35,SVar45.fields._8_8_ >> 0x20,0);
      if (target != (Photon_Realtime_Player_o *)0x0) {
        iVar42 = (target->fields).actorNumber;
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pPVar36 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if (pPVar36 == (Photon_Realtime_Player_o *)0x0) goto LAB_0409b160;
        if (iVar42 != (pPVar36->fields).actorNumber) {
          UI_ChatPanel__EnterPMMode(__this,target,method_01);
        }
      }
    }
  }
  value_02 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load<object>("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset)
  ;
  uVar40 = auStack_148._40_8_;
  pSVar7 = (__this->fields)._linesPool;
  if (pSVar7 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_118,
               (System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    auStack_148._16_8_ = _Stack_108;
    auStack_148._0_8_ = auStack_118._0_8_;
    auStack_148._8_8_ = auStack_118._8_8_;
    while (__this_03.fields._8_8_ = pIVar48, __this_03.fields._list = pSVar47,
          __this_03.fields._current = _Var49.genericMethod,
          bVar15 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this_03,(MethodInfo_3185E20 *)auStack_148),
          uVar12 = auStack_148._16_8_, (char)bVar15 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar15 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)uVar12,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if ((UnityEngine_Object_o *)uVar12 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar31 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)uVar12,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar15 = UnityEngine_Object__op_Inequality
                           (pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          pUVar31 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)uVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__Destroy(pUVar31,(MethodInfo *)0x0);
        }
      }
    }
    __this_04.fields._8_8_ = pIVar48;
    __this_04.fields._list = pSVar47;
    __this_04.fields._current = _Var49.genericMethod;
    pTVar25 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185E10 *)auStack_148);
    pSVar7 = (__this->fields)._linesPool;
    if (pSVar7 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
      piVar3 = &(pSVar7->fields)._version;
      *piVar3 = *piVar3 + 1;
      iVar16 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      if (0 < iVar16) {
        pTVar25 = (TMPro_TMP_InputField_o *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar16,(MethodInfo *)0x0);
      }
      iVar42 = 0;
      if (DAT_057045bb != '\0') goto LAB_0409a723;
LAB_0409a6df:
      il2cpp_init_method_metadata(&TypeInfo_ChatManager);
      DAT_057045bb = '\x01';
      if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_0409a733;
      while( true ) {
        il2cpp_init_class();
        iVar16 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
        pMVar41 = extraout_RDX;
        if (iVar16 <= iVar42) break;
        while( true ) {
          pTVar25 = UI_ChatPanel__CreateLine
                              (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               pMVar41);
          if ((pTVar25 == (TMPro_TMP_InputField_o *)0x0) ||
             (pTVar28 = *(TMPro_TMP_Text_o **)&(pTVar25->fields).m_CachedViewportRect.fields.m_Width
             , pTVar28 == (TMPro_TMP_Text_o *)0x0)) goto LAB_0409b160;
          bVar5 = (TypeInfo_TextMeshProUGUI->_2).naturalAligment;
          if (((pTVar28->klass->_2).naturalAligment < bVar5) ||
             ((pTVar28->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_TextMeshProUGUI))
          goto LAB_0409b160;
          bVar5 = (TypeInfo_TextMeshProUGUI->_2).naturalAligment;
          if (((pTVar28->klass->_2).naturalAligment < bVar5) ||
             ((pTVar28->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_TextMeshProUGUI)) {
            pTVar28 = (TMPro_TMP_Text_o *)0x0;
          }
          TMPro_TMP_Text__set_font(pTVar28,value_02,(MethodInfo *)0x0);
          TMPro_TMP_InputField__set_fontAsset(pTVar25,value_02,(MethodInfo *)0x0);
          pUVar21 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pTVar25,(MethodInfo *)0x0);
          if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
          UnityEngine_GameObject__SetActive(pUVar21,0,(MethodInfo *)0x0);
          lVar20 = MethodInfo_Void_Add;
          pSVar7 = (__this->fields)._linesPool;
          if (pSVar7 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_0409b160;
          piVar3 = &(pSVar7->fields)._version;
          *piVar3 = *piVar3 + 1;
          pTVar8 = (pSVar7->fields)._items;
          if (pTVar8 == (TMPro_TMP_InputField_array *)0x0) goto LAB_0409b160;
          uVar6 = (pSVar7->fields)._size;
          if (uVar6 < (uint)pTVar8->max_length) {
            (pSVar7->fields)._size = uVar6 + 1;
            pTVar8->m_Items[(int)uVar6] = pTVar25;
            il2cpp_runtime_glue(pTVar8->m_Items + (int)uVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pTVar25,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          iVar42 = iVar42 + 1;
          if (DAT_057045bb == '\0') goto LAB_0409a6df;
LAB_0409a723:
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) break;
LAB_0409a733:
          iVar16 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
          pMVar41 = extraout_RDX_00;
          if (iVar16 <= iVar42) goto LAB_0409a742;
        }
      }
LAB_0409a742:
      pSVar7 = (__this->fields)._linesPool;
      if (pSVar7 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
        *(int32_t *)((long)&(__this->fields)._notificationBadge + 4) = (pSVar7->fields)._size;
        UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)pTVar25);
        UI_ChatPanel__ValidatePMState(__this,(MethodInfo *)pTVar25);
        UI_ChatPanel__RestorePMPartners(__this,(MethodInfo *)pTVar25);
        UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)pTVar25);
        pUVar17 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((pUVar17 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar17 = UnityEngine_Transform__Find(pUVar17,"Content",(MethodInfo *)0x0),
           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
          pUVar23 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar17,MethodInfo_RectTransform_GetComponent_RectTransform);
          pIVar33 = UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar17,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar20 != 0) &&
             ((lVar20 = *(long *)(lVar20 + 0x140), lVar20 != 0 && (pIVar33 != (Il2CppObject *)0x0)))
             ) {
            (*pIVar33->klass->vtable[0x26].methodPtr)
                      ((float)*(int *)(lVar20 + 0x14),pIVar33,pIVar33->klass->vtable[0x26].method);
            if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar31 = (UnityEngine_Object_o *)
                        UnityEngine_GameObject__GetComponent<object>(*ppUVar2,MethodInfo_Image_GetComponent_Image);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar15 = UnityEngine_Object__op_Equality
                                 (pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar15 != '\0') {
                if (*ppUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409b160;
                pUVar31 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__AddComponent<object>(*ppUVar2,MethodInfo_Image_AddComponent_Image);
              }
              lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x188), lVar20 != 0)) &&
                 (__this_02 = *(Utility_Color255_o **)(lVar20 + 0x18),
                 __this_02 != (Utility_Color255_o *)0x0)) {
                UVar44 = Utility_Color255__ToColor(__this_02,(MethodInfo *)0x0);
                if (pUVar31 != (UnityEngine_Object_o *)0x0) {
                  (**(code **)&pUVar31->klass[1]._2.naturalAligment)
                            (UVar44.fields.r,UVar44.fields.b,pUVar31,
                             pUVar31->klass[1].vtable._0_Equals.methodPtr);
                  pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                  SVar14 = TypeRef_RectTransform;
                  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar19 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
                  if (pSVar18 != (System_Type_array *)0x0) {
                    if ((pSVar19 != (System_Type_o *)0x0) &&
                       (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).
                                                            element_class), lVar20 == 0))
                    goto LAB_0409b16f;
                    if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
                    pSVar18->m_Items[0] = pSVar19;
                    il2cpp_runtime_glue(pSVar18->m_Items,pSVar19);
                    pUVar21 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                    UnityEngine_GameObject___ctor(pUVar21,"Scrollbar",pSVar18,(MethodInfo *)0x0);
                    if ((pUVar21 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar22 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0),
                       pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__SetParent(pUVar22,pUVar17,0,(MethodInfo *)0x0);
                      UnityEngine_GameObject__SetActive(pUVar21,1,(MethodInfo *)0x0);
                      pUVar24 = (UnityEngine_RectTransform_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
                      if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMin
                                  (pUVar24,(UnityEngine_Vector2_o)
                                           *(UnityEngine_Vector2_Fields *)
                                            (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x20),
                                   (MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_anchorMax
                                  (pUVar24,(UnityEngine_Vector2_o)
                                           *(UnityEngine_Vector2_Fields *)
                                            (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x28),
                                   (MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_pivot
                                  (pUVar24,(UnityEngine_Vector2_o)
                                           *(UnityEngine_Vector2_Fields *)
                                            (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x40),
                                   (MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_sizeDelta
                                  (pUVar24,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                        __this_09 = (UnityEngine_UI_Scrollbar_o *)
                                    UnityEngine_GameObject__AddComponent<object>
                                              (pUVar21,MethodInfo_Scrollbar_AddComponent_Scrollbar);
                        pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                        pSVar19 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar18 != (System_Type_array *)0x0) {
                          if ((pSVar19 != (System_Type_o *)0x0) &&
                             (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->_1).
                                                                  element_class), lVar20 == 0))
                          goto LAB_0409b16f;
                          if ((int)pSVar18->max_length == 0) goto LAB_0409b16a;
                          pSVar18->m_Items[0] = pSVar19;
                          il2cpp_runtime_glue(pSVar18->m_Items,pSVar19);
                          pUVar26 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                          UnityEngine_GameObject___ctor
                                    (pUVar26,"Sliding Area",pSVar18,(MethodInfo *)0x0);
                          if (pUVar26 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar22 = UnityEngine_GameObject__get_transform
                                                (pUVar26,(MethodInfo *)0x0);
                            pUVar37 = UnityEngine_GameObject__get_transform
                                                (pUVar21,(MethodInfo *)0x0);
                            if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                              UnityEngine_Transform__SetParent(pUVar22,pUVar37,0,(MethodInfo *)0x0);
                              pUVar24 = (UnityEngine_RectTransform_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (pUVar26,MethodInfo_RectTransform_GetComponent_RectTransform);
                              if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (pUVar24,(UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
                                           (MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar24,(UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
                                           (MethodInfo *)0x0);
                                if (DAT_056fe093 == '\0') {
                                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                  DAT_056fe093 = '\x01';
                                }
                                UnityEngine_RectTransform__set_sizeDelta
                                          (pUVar24,(UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)
                                                     (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                pSVar18 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                                pSVar19 = System_Type__GetTypeFromHandle
                                                    (TypeRef_RectTransform,(MethodInfo *)0x0);
                                if (pSVar18 != (System_Type_array *)0x0) {
                                  if ((pSVar19 != (System_Type_o *)0x0) &&
                                     (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)->
                                                                          _1).element_class),
                                     lVar20 == 0)) {
LAB_0409b16f:
                                    uVar40 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                                    il2cpp_glue_02274a00(uVar40,0);
                                  }
                                  if ((int)pSVar18->max_length != 0) {
                                    pSVar18->m_Items[0] = pSVar19;
                                    il2cpp_runtime_glue(pSVar18->m_Items);
                                    pSVar19 = System_Type__GetTypeFromHandle
                                                        (TypeRef_Image,(MethodInfo *)0x0);
                                    if ((pSVar19 != (System_Type_o *)0x0) &&
                                       (lVar20 = il2cpp_runtime_glue(pSVar19,(((pSVar18->obj).klass)
                                                                            ->_1).element_class),
                                       lVar20 == 0)) goto LAB_0409b16f;
                                    if (1 < (uint)pSVar18->max_length) {
                                      pSVar18->m_Items[1] = pSVar19;
                                      il2cpp_runtime_glue(pSVar18->m_Items + 1,pSVar19);
                                      pUVar21 = (UnityEngine_GameObject_o *)
                                                il2cpp_runtime_glue(TypeInfo_GameObject);
                                      UnityEngine_GameObject___ctor
                                                (pUVar21,"Handle",pSVar18,(MethodInfo *)0x0);
                                      if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar22 = UnityEngine_GameObject__get_transform
                                                            (pUVar21,(MethodInfo *)0x0);
                                        pUVar37 = UnityEngine_GameObject__get_transform
                                                            (pUVar26,(MethodInfo *)0x0);
                                        if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                                          UnityEngine_Transform__SetParent
                                                    (pUVar22,pUVar37,0,(MethodInfo *)0x0);
                                          pUVar24 = (UnityEngine_RectTransform_o *)
                                                    UnityEngine_GameObject__GetComponent<object>
                                                              (pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
                                          uVar12 = auStack_148._40_8_;
                                          if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_anchorMin
                                                      (pUVar24,(UnityEngine_Vector2_o)
                                                               *(UnityEngine_Vector2_Fields *)
                                                                (*(long *)(TypeInfo_UIAnchors + 0xb8) +
                                                                0x18),(MethodInfo *)0x0);
                                            UnityEngine_RectTransform__set_anchorMax
                                                      (pUVar24,(UnityEngine_Vector2_o)
                                                               *(UnityEngine_Vector2_Fields *)
                                                                (*(long *)(TypeInfo_UIAnchors + 0xb8) +
                                                                0x10),(MethodInfo *)0x0);
                                            if (DAT_056fe093 == '\0') {
                                              il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                              DAT_056fe093 = '\x01';
                                            }
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (pUVar24,(UnityEngine_Vector2_o)
                                                               **(UnityEngine_Vector2_Fields **)
                                                                 (TypeInfo_Vector2 + 0xb8),
                                                       (MethodInfo *)0x0);
                                            value_03 = (UnityEngine_UI_Graphic_o *)
                                                       UnityEngine_GameObject__GetComponent<object>
                                                                 (pUVar21,MethodInfo_Image_GetComponent_Image);
                                            if ((value_03 != (UnityEngine_UI_Graphic_o *)0x0) &&
                                               ((*(value_03->klass->vtable)._23_set_color.methodPtr)
                                                          (0x3f4ccccd,0x3f4ccccd,value_03,
                                                           (value_03->klass->vtable)._23_set_color.
                                                           method),
                                               __this_09 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
                                              UnityEngine_UI_Scrollbar__set_handleRect
                                                        (__this_09,pUVar24,(MethodInfo *)0x0);
                                              UnityEngine_UI_Selectable__set_targetGraphic
                                                        ((UnityEngine_UI_Selectable_o *)__this_09,
                                                         value_03,(MethodInfo *)0x0);
                                              UnityEngine_UI_Scrollbar__set_direction
                                                        (__this_09,2,(MethodInfo *)0x0);
                                              pUVar21 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)
                                                                   pUVar17,(MethodInfo *)0x0);
                                              if ((pUVar21 != (UnityEngine_GameObject_o *)0x0) &&
                                                 (pUVar34 = (UI_ChatScrollRect_o *)
                                                                                                                        
                                                  UnityEngine_GameObject__AddComponent<object>
                                                            (pUVar21,MethodInfo_ChatScrollRect_AddComponent_ChatScrollRect),
                                                 (UI_ChatPanel___c__DisplayClass66_0_o *)uVar12 !=
                                                 (UI_ChatPanel___c__DisplayClass66_0_o *)0x0)) {
                                                pUVar43 = (UI_ChatPanel___c__DisplayClass66_0_Fields
                                                           *)(uVar12 + 0x10);
                                                ((UI_ChatPanel___c__DisplayClass66_0_Fields *)
                                                (uVar40 + 0x10))->scrollRect = pUVar34;
                                                il2cpp_runtime_glue(pUVar43,pUVar34);
                                                pUVar34 = ((
                                                  UI_ChatPanel___c__DisplayClass66_0_Fields *)
                                                  (uVar40 + 0x10))->scrollRect;
                                                if (pUVar34 != (UI_ChatScrollRect_o *)0x0) {
                                                  *(undefined2 *)&(pUVar34->fields).m_Horizontal =
                                                       0x100;
                                                  UnityEngine_UI_ScrollRect__set_viewport
                                                            ((UnityEngine_UI_ScrollRect_o *)pUVar34,
                                                             pUVar23,(MethodInfo *)0x0);
                                                  if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar34 = pUVar43->scrollRect;
                                                    pUVar23 = (UnityEngine_RectTransform_o *)
                                                                                                                            
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
                                                  if (pUVar34 != (UI_ChatScrollRect_o *)0x0) {
                                                    (pUVar34->fields).m_Content = pUVar23;
                                                    il2cpp_runtime_glue(&(pUVar34->fields).m_Content,
                                                                       pUVar23);
                                                    if (pUVar43->scrollRect !=
                                                        (UI_ChatScrollRect_o *)0x0) {
                                                                                                            
                                                  UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                            ((UnityEngine_UI_ScrollRect_o *)
                                                             pUVar43->scrollRect,__this_09,
                                                             (MethodInfo *)0x0);
                                                  if (pUVar43->scrollRect !=
                                                      (UI_ChatScrollRect_o *)0x0) {
                                                                                                        
                                                  UnityEngine_UI_ScrollRect__set_verticalScrollbarSpacing
                                                            ((UnityEngine_UI_ScrollRect_o *)
                                                             pUVar43->scrollRect,-3.0,
                                                             (MethodInfo *)0x0);
                                                  lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8)
                                                                    + 0x28);
                                                  if (((lVar20 != 0) &&
                                                      (lVar20 = *(long *)(lVar20 + 0x158),
                                                      lVar20 != 0)) &&
                                                     (pUVar43->scrollRect !=
                                                      (UI_ChatScrollRect_o *)0x0)) {
                                                    (pUVar43->scrollRect->fields).m_DecelerationRate
                                                         = (float)*(int *)(lVar20 + 0x14);
                                                    pUVar21 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)
                                                                         pUVar17,(MethodInfo *)0x0);
                                                    if (pUVar21 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      __this_10 = (
                                                  UnityEngine_EventSystems_EventTrigger_o *)
                                                  UnityEngine_GameObject__AddComponent<object>
                                                            (pUVar21,MethodInfo_EventTrigger_AddComponent_EventTrigger);
                                                  pUVar38 = (
                                                  UnityEngine_EventSystems_EventTrigger_Entry_o *)
                                                  il2cpp_runtime_glue(TypeInfo_Entry);
                                                  UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                            (pUVar38,(MethodInfo *)0x0);
                                                  if (pUVar38 !=
                                                      (UnityEngine_EventSystems_EventTrigger_Entry_o
                                                       *)0x0) {
                                                    (pUVar38->fields).eventID = 0;
                                                    pUVar9 = (pUVar38->fields).callback;
                                                    pUVar30 = (UnityEngine_Events_UnityAction_T0__o
                                                               *)il2cpp_runtime_glue(TypeInfo_UnityAction_BaseEventData);
                                                    UnityEngine_Events_UnityAction<object>___ctor();
                                                    if (((pUVar9 != (
                                                  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o
                                                  *)0x0) && (
                                                  UnityEngine_Events_UnityEvent<object>__AddListener
                                                            ((UnityEngine_Events_UnityEvent_T0__o *)
                                                             pUVar9,pUVar30,MethodInfo_Void_AddListener),
                                                  __this_10 !=
                                                  (UnityEngine_EventSystems_EventTrigger_o *)0x0))
                                                  && (pSVar39 = 
                                                  UnityEngine_EventSystems_EventTrigger__get_triggers
                                                            (__this_10,(MethodInfo *)0x0),
                                                  lVar20 = MethodInfo_Void_Add,
                                                  pSVar39 !=
                                                  (
                                                  System_Collections_Generic_List_EventTrigger_Entry__o
                                                  *)0x0)) {
                                                    piVar3 = &(pSVar39->fields)._version;
                                                    *piVar3 = *piVar3 + 1;
                                                    pUVar10 = (pSVar39->fields)._items;
                                                    if (pUVar10 !=
                                                        (
                                                  UnityEngine_EventSystems_EventTrigger_Entry_array
                                                  *)0x0) {
                                                    uVar6 = (pSVar39->fields)._size;
                                                    if (uVar6 < (uint)pUVar10->max_length) {
                                                      (pSVar39->fields)._size = uVar6 + 1;
                                                      pUVar10->m_Items[(int)uVar6] = pUVar38;
                                                      il2cpp_runtime_glue(pUVar10->m_Items +
                                                                         (int)uVar6);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  pSVar39,(Il2CppObject *)pUVar38,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  pUVar38 = (
                                                  UnityEngine_EventSystems_EventTrigger_Entry_o *)
                                                  il2cpp_runtime_glue(TypeInfo_Entry);
                                                  UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                            (pUVar38,(MethodInfo *)0x0);
                                                  if (pUVar38 !=
                                                      (UnityEngine_EventSystems_EventTrigger_Entry_o
                                                       *)0x0) {
                                                    (pUVar38->fields).eventID = 1;
                                                    pUVar9 = (pUVar38->fields).callback;
                                                    pUVar30 = (UnityEngine_Events_UnityAction_T0__o
                                                               *)il2cpp_runtime_glue(TypeInfo_UnityAction_BaseEventData);
                                                    UnityEngine_Events_UnityAction<object>___ctor();
                                                    if (pUVar9 != (
                                                  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o
                                                  *)0x0) {
                                                                                                        
                                                  UnityEngine_Events_UnityEvent<object>__AddListener
                                                            ((UnityEngine_Events_UnityEvent_T0__o *)
                                                             pUVar9,pUVar30,MethodInfo_Void_AddListener);
                                                  pSVar39 = 
                                                  UnityEngine_EventSystems_EventTrigger__get_triggers
                                                            (__this_10,(MethodInfo *)0x0);
                                                  lVar20 = MethodInfo_Void_Add;
                                                  if (pSVar39 !=
                                                      (
                                                  System_Collections_Generic_List_EventTrigger_Entry__o
                                                  *)0x0) {
                                                    piVar3 = &(pSVar39->fields)._version;
                                                    *piVar3 = *piVar3 + 1;
                                                    pUVar10 = (pSVar39->fields)._items;
                                                    if (pUVar10 !=
                                                        (
                                                  UnityEngine_EventSystems_EventTrigger_Entry_array
                                                  *)0x0) {
                                                    uVar6 = (pSVar39->fields)._size;
                                                    if (uVar6 < (uint)pUVar10->max_length) {
                                                      (pSVar39->fields)._size = uVar6 + 1;
                                                      pUVar10->m_Items[(int)uVar6] = pUVar38;
                                                      il2cpp_runtime_glue(pUVar10->m_Items +
                                                                         (int)uVar6,pUVar38);
                                                      pUVar21 = *ppUVar2;
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  pSVar39,(Il2CppObject *)pUVar38,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) +
                                                   0x70));
                                                  pUVar21 = *ppUVar2;
                                                  }
                                                  if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__GetComponent<object>
                                                              (pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
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
                                          }
                                        }
                                      }
                                      goto LAB_0409b160;
                                    }
                                  }
LAB_0409b16a:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_raise_exception();
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
LAB_0409b160:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$SetupChatModeLabel
// il2cpp: void UI_ChatPanel__SetupChatModeLabel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409b260

void UI_ChatPanel__SetupChatModeLabel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Component_o *__this_01;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Coroutine_o *pUVar7;
  undefined8 uVar8;
  MethodInfo *method_00;
  
  if (DAT_057045c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"ChatModeLabel");
    DAT_057045c0 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_0409b5e4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar3 != (System_Type_o *)0x0) {
    lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class);
    if (lVar4 == 0) goto LAB_0409b5ee;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar3;
    il2cpp_runtime_glue(components->m_Items);
    pSVar3 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class);
      if (lVar4 == 0) {
LAB_0409b5ee:
        uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar8,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar3;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar3);
      pUVar5 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(pUVar5,"ChatModeLabel",components,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_02,parent,0,(MethodInfo *)0x0);
            pUVar6 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar6,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar6,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (pUVar6,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar6,(UnityEngine_Vector2_o)0x41d0000042200000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar6,(UnityEngine_Vector2_o)0xc0800000,(MethodInfo *)0x0);
              pUVar7 = (UnityEngine_Coroutine_o *)
                       UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              ppUVar1 = &(__this->fields)._tooltipCoroutine;
              (__this->fields)._tooltipCoroutine = pUVar7;
              il2cpp_runtime_glue(ppUVar1);
              __this_00 = (TMPro_TMP_Text_o *)(__this->fields)._tooltipCoroutine;
              if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                TMPro_TMP_Text__set_fontSize(__this_00,18.0,(MethodInfo *)0x0);
                if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                  TMPro_TMP_Text__set_alignment
                            ((TMPro_TMP_Text_o *)*ppUVar1,0x202,(MethodInfo *)0x0);
                  if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                    TMPro_TMP_Text__set_verticalAlignment
                              ((TMPro_TMP_Text_o *)*ppUVar1,0x200,(MethodInfo *)0x0);
                    if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                      TMPro_TMP_Text__set_horizontalAlignment
                                ((TMPro_TMP_Text_o *)*ppUVar1,2,(MethodInfo *)0x0);
                      if (*ppUVar1 != (UnityEngine_Coroutine_o *)0x0) {
                        (**(code **)&(*ppUVar1)->klass[1]._2.naturalAligment)(0x3f800000,0x3f800000)
                        ;
                        pUVar7 = *ppUVar1;
                        if (pUVar7 != (UnityEngine_Coroutine_o *)0x0) {
                          method_00 = (MethodInfo *)0x0;
                          (*(code *)pUVar7->klass[1].vtable._1_Finalize.method)
                                    (pUVar7,0,pUVar7->klass[1].vtable._2_GetHashCode.methodPtr);
                          UI_ChatPanel__UpdateChatModeLabel(__this,method_00);
                          __this_01 = (UnityEngine_Component_o *)(__this->fields)._tooltipCoroutine;
                          if (__this_01 != (UnityEngine_Component_o *)0x0) {
                            pUVar5 = UnityEngine_Component__get_gameObject
                                               (__this_01,(MethodInfo *)0x0);
                            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
                              pTVar2 = (__this->fields)._inputField;
                              if ((pTVar2 != (TMPro_TMP_InputField_o *)0x0) &&
                                 (pUVar6 = (pTVar2->fields).m_RectTransform,
                                 pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
                                pUVar5 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar6,
                                                    (MethodInfo *)0x0);
                                if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar6 = (UnityEngine_RectTransform_o *)
                                           UnityEngine_GameObject__GetComponent<object>
                                                     (pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform);
                                  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_offsetMin
                                              (pUVar6,(UnityEngine_Vector2_o)0x4080000040a00000,
                                               (MethodInfo *)0x0);
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
      goto LAB_0409b5e4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$UpdateChatModeElements
// il2cpp: void UI_ChatPanel__UpdateChatModeElements (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409d200

void UI_ChatPanel__UpdateChatModeElements(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_CanvasGroup_o *pUVar5;
  UnityEngine_Coroutine_o *pUVar6;
  TMPro_TMP_InputField_o *pTVar7;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar8;
  uint uVar9;
  bool_conflict bVar10;
  uint uVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_RectTransform_o *pUVar13;
  float fVar14;
  float fVar15;
  
  if (DAT_057045c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045c1 = '\x01';
  }
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_0409d58d;
  iVar1 = (pSVar2->fields)._size;
  if (iVar1 < 1) {
    uVar9 = 0;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar9 = GameManagers_ChatManager__HasAnyActivePMNotification((MethodInfo *)0x0);
    uVar9 = uVar9 & 0xff;
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltipCoroutine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    pUVar4 = (UnityEngine_Component_o *)(__this->fields)._tooltipCoroutine;
    if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0409d58d;
    UnityEngine_GameObject__SetActive(pUVar12,(uint)(0 < iVar1),(MethodInfo *)0x0);
  }
  pUVar5 = (__this->fields)._placeholderCanvasGroup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    pUVar5 = (__this->fields)._placeholderCanvasGroup;
    if (pUVar5 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_0409d58d;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar5,uVar9,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltipCoroutine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar15 = 40.0;
  fVar14 = -4.0;
  if ((0 < iVar1) && ((char)bVar10 != '\0')) {
    pUVar6 = (__this->fields)._tooltipCoroutine;
    if (pUVar6 == (UnityEngine_Coroutine_o *)0x0) goto LAB_0409d58d;
    (*pUVar6->klass[5]._1.fields)(pUVar6,0,0,pUVar6->klass[5]._1.events);
    pUVar6 = (__this->fields)._tooltipCoroutine;
    if (pUVar6 == (UnityEngine_Coroutine_o *)0x0) goto LAB_0409d58d;
    fVar15 = (float)(*pUVar6->klass[4]._1.methods)(pUVar6,pUVar6->klass[4]._1.nestedTypes);
    fVar15 = fVar15 + 8.0;
    if ((char)(__this->fields)._inPMMode == '\0') {
      if (40.0 <= fVar15) {
        fVar15 = 40.0;
      }
      pUVar4 = (UnityEngine_Component_o *)(__this->fields)._tooltipCoroutine;
    }
    else {
      if (62.0 <= fVar15) {
        fVar15 = 62.0;
      }
      pUVar4 = (UnityEngine_Component_o *)(__this->fields)._tooltipCoroutine;
    }
    if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
       (pUVar13 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent<object>(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform),
       pUVar13 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0409d58d;
    UVar8.fields.y = 26.0;
    UVar8.fields.x = fVar15;
    UnityEngine_RectTransform__set_sizeDelta(pUVar13,UVar8,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar13,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    fVar14 = 0.0;
  }
  pUVar5 = (__this->fields)._placeholderCanvasGroup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((uVar9 & uVar11 & 0xff) != 0) {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltipCoroutine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar10 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar10 != '\0') {
      pUVar5 = (__this->fields)._placeholderCanvasGroup;
      if ((pUVar5 == (UnityEngine_CanvasGroup_o *)0x0) ||
         (pUVar13 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform),
         pUVar13 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0409d58d;
      value.fields.y = 10.0;
      value.fields.x = fVar14 + -10.0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar13,value,(MethodInfo *)0x0);
    }
  }
  pTVar7 = (__this->fields)._inputField;
  if ((((pTVar7 != (TMPro_TMP_InputField_o *)0x0) &&
       (pUVar13 = (pTVar7->fields).m_RectTransform, pUVar13 != (UnityEngine_RectTransform_o *)0x0))
      && (pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
         pUVar12 != (UnityEngine_GameObject_o *)0x0)) &&
     (pUVar13 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_RectTransform_GetComponent_RectTransform),
     pUVar13 != (UnityEngine_RectTransform_o *)0x0)) {
    if (iVar1 < 1) {
      fVar14 = 5.0;
    }
    else {
      fVar14 = fVar14 + fVar15;
    }
    UVar8 = UnityEngine_RectTransform__get_offsetMin(pUVar13,(MethodInfo *)0x0);
    value_00.fields.y = UVar8.fields.y;
    value_00.fields.x = fVar14;
    UnityEngine_RectTransform__set_offsetMin(pUVar13,value_00,(MethodInfo *)0x0);
    return;
  }
LAB_0409d58d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$UpdateChatModeLabel
// il2cpp: void UI_ChatPanel__UpdateChatModeLabel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409d040

void UI_ChatPanel__UpdateChatModeLabel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Photon_Realtime_Player_o *player;
  UnityEngine_Coroutine_o *pUVar1;
  undefined8 uVar2;
  UnityEngine_Coroutine_c *pUVar3;
  code *vtable_dispatch_00;
  undefined8 uVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  
  if (DAT_057045c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"..");
    il2cpp_init_method_metadata(&"All:");
    il2cpp_init_method_metadata(&":");
    il2cpp_init_method_metadata(&"");
    DAT_057045c2 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tooltipCoroutine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (((char)(__this->fields)._inPMMode == '\0') ||
     (player = (__this->fields)._currentPMTarget, player == (Photon_Realtime_Player_o *)0x0)) {
    pUVar1 = (__this->fields)._tooltipCoroutine;
    if (pUVar1 != (UnityEngine_Coroutine_o *)0x0) {
      pUVar3 = pUVar1->klass;
      vtable_dispatch_00 = pUVar3[3]._2.genericContainerHandle;
      uVar2._0_4_ = pUVar3[3]._2.instance_size;
      uVar2._4_4_ = pUVar3[3]._2.actualSize;
      (*vtable_dispatch_00)(pUVar1,"All:",uVar2,vtable_dispatch_00);
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = PhotonExtensions__GetStringProperty
                       (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = MiscExtensions__StripRichText(pSVar6,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      pUVar1 = (__this->fields)._tooltipCoroutine;
      if ((pSVar6->fields)._stringLength < 5) {
        puVar7 = &":";
      }
      else {
        pSVar6 = System_String__Substring(pSVar6,0,4,(MethodInfo *)0x0);
        puVar7 = &"..";
      }
      pSVar6 = System_String__Concat(pSVar6,(System_String_o *)*puVar7,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Coroutine_o *)0x0) {
        pUVar3 = pUVar1->klass;
        vtable_dispatch_00 = pUVar3[3]._2.genericContainerHandle;
        uVar4._0_4_ = pUVar3[3]._2.instance_size;
        uVar4._4_4_ = pUVar3[3]._2.actualSize;
        (*vtable_dispatch_00)(pUVar1,pSVar6,uVar4,pUVar3,vtable_dispatch_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$SetupNotificationBadge
// il2cpp: void UI_ChatPanel__SetupNotificationBadge (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409b600

void UI_ChatPanel__SetupNotificationBadge(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_CanvasGroup_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  TMPro_TMP_Text_o *__this_03;
  UnityEngine_UI_Selectable_o *__this_04;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar10;
  MethodInfo *method_00;
  
  if (DAT_057045c3 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnNotificationBadgeClicked);
    il2cpp_init_method_metadata(&TypeInfo_ChatPanel);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"!");
    il2cpp_init_method_metadata(&"NotificationBadge");
    il2cpp_init_method_metadata(&"BadgeCircle");
    il2cpp_init_method_metadata(&"BadgeText");
    DAT_057045c3 = '\x01';
  }
  pSVar1 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto LAB_0409be7b;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0409be85;
  }
  if ((int)pSVar1->max_length == 0) goto LAB_0409be80;
  pSVar1->m_Items[0] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0409be85;
  }
  if ((uint)pSVar1->max_length < 2) goto LAB_0409be80;
  pSVar1->m_Items[1] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items + 1);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0409be85;
  }
  if ((uint)pSVar1->max_length < 3) goto LAB_0409be80;
  pSVar1->m_Items[2] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items + 2,pSVar2);
  pUVar4 = (UnityEngine_CanvasGroup_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor
            ((UnityEngine_GameObject_o *)pUVar4,"NotificationBadge",pSVar1,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_0409be7b;
  pUVar5 = UnityEngine_GameObject__get_transform
                     ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._inputField;
  if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409be7b;
  pUVar6 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0409be7b;
  UnityEngine_Transform__SetParent(pUVar5,pUVar6,0,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__GetComponent<object>
                     ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409be7b;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar7,(UnityEngine_Vector2_o)0x41c0000041900000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  pIVar8 = UnityEngine_GameObject__GetComponent<object>
                     ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Image_GetComponent_Image);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0409be7b;
  (*pIVar8->klass->vtable[0x17].methodPtr)(0,0,pIVar8,pIVar8->klass->vtable[0x17].method);
  pSVar1 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto LAB_0409be7b;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0409be85;
  }
  if ((int)pSVar1->max_length == 0) goto LAB_0409be80;
  pSVar1->m_Items[0] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0409be85;
  }
  if ((uint)pSVar1->max_length < 2) goto LAB_0409be80;
  pSVar1->m_Items[1] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items + 1,pSVar2);
  pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar9,"BadgeCircle",pSVar1,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0409be7b;
    UnityEngine_Transform__SetParent(pUVar5,pUVar6,0,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409be7b;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar7,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar7,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    __this_02 = (UnityEngine_UI_Image_o *)
                UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Image_GetComponent_Image);
    method_00 = TypeInfo_ChatPanel;
    if (*(int *)((long)&TypeInfo_ChatPanel[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    value = UI_ChatPanel__GetCircleSprite(method_00);
    if (__this_02 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0409be7b;
    UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_type(__this_02,0,(MethodInfo *)0x0);
    (*(__this_02->klass->vtable)._23_set_color.methodPtr)
              (0x3e19999a3f4ccccd,0x3e19999a,__this_02,
               (__this_02->klass->vtable)._23_set_color.method);
    (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
              (__this_02,0,(__this_02->klass->vtable)._25_set_raycastTarget.method);
    pSVar1 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
    if (pSVar1 == (System_Type_array *)0x0) goto LAB_0409be7b;
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0409be85;
    }
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = pSVar2;
      il2cpp_runtime_glue(pSVar1->m_Items);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_0409be85:
          uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar10,0);
        }
      }
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = pSVar2;
        il2cpp_runtime_glue(pSVar1->m_Items + 1,pSVar2);
        pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar9,"BadgeText",pSVar1,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar5,pUVar6,0,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (DAT_056fe093 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector2);
              DAT_056fe093 = '\x01';
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar7,(UnityEngine_Vector2_o)
                                **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (DAT_0570136e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_0570136e = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar7,(UnityEngine_Vector2_o)
                                *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                         (MethodInfo *)0x0);
              if (DAT_056fe093 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_056fe093 = '\x01';
              }
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar7,(UnityEngine_Vector2_o)
                                **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              __this_03 = (TMPro_TMP_Text_o *)
                          UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
                (*(__this_03->klass->vtable)._66_set_text.methodPtr)
                          (__this_03,"!",(__this_03->klass->vtable)._66_set_text.method);
                TMPro_TMP_Text__set_fontSize(__this_03,16.0,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_alignment(__this_03,0x202,(MethodInfo *)0x0);
                (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                          (0x3f4ccccd3f800000,0x3e4ccccd,__this_03,
                           (__this_03->klass->vtable)._23_set_color.method);
                (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (__this_03,0,(__this_03->klass->vtable)._25_set_raycastTarget.method);
                __this_04 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Button_GetComponent_Button);
                if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                  UnityEngine_UI_Selectable__set_transition(__this_04,0,(MethodInfo *)0x0);
                  __this_01 = (UnityEngine_Events_UnityEvent_o *)
                              (__this_04->fields).m_CanvasGroupCache;
                  call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                    (__this->fields)._placeholderCanvasGroup = pUVar4;
                    il2cpp_runtime_glue(&(__this->fields)._placeholderCanvasGroup);
                    pUVar4 = (__this->fields)._placeholderCanvasGroup;
                    if (pUVar4 != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)pUVar4,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0409be7b;
      }
    }
LAB_0409be80:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0409be7b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$OnNotificationBadgeClicked
// il2cpp: void UI_ChatPanel__OnNotificationBadgeClicked (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409d7d0

void UI_ChatPanel__OnNotificationBadgeClicked(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *__this_00;
  long lVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool_conflict bVar3;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057045c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Player_Find);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__OnNotificationBadgeClicked_b__71_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057045c4 = '\x01';
  }
  __this_00 = (__this->fields)._pmPartners;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
    System_Predicate<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar1 + 0x10) = match;
    il2cpp_runtime_glue(lVar1 + 0x10,match);
  }
  if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) {
LAB_0409d97b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = (MethodInfo *)
              System_Collections_Generic_List<object>__Find
                        ((System_Collections_Generic_List_object__o *)__this_00,match,MethodInfo_Player_Find);
  if (method_00 == (MethodInfo *)0x0) {
    return;
  }
  UI_ChatPanel__EnterPMMode(__this,(Photon_Realtime_Player_o *)method_00,method_01);
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409d97b;
      if (*(char *)&(pTVar2->fields).m_Mesh != '\0') {
        return;
      }
    }
  }
  UI_ChatPanel__Activate(__this,method_00);
  return;
}


// UI.ChatPanel$$GetCircleSprite
// il2cpp: UnityEngine_Sprite_o* UI_ChatPanel__GetCircleSprite (const MethodInfo* method);
// 0x409d5a0

UnityEngine_Sprite_o * UI_ChatPanel__GetCircleSprite(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  UnityEngine_Sprite_o *pUVar2;
  long lVar3;
  int32_t iVar4;
  long lVar5;
  long lVar6;
  UnityEngine_Color32_o *pUVar7;
  float fVar8;
  float fVar9;
  
  if (DAT_057045c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatPanel);
    il2cpp_init_method_metadata(&TypeInfo_Color32);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057045c5 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatPanel + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_ChatPanel + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_ChatPanel + 0xe4) == 0) {
      il2cpp_init_class();
    }
LAB_0409d7aa:
    return *(UnityEngine_Sprite_o **)(*(long *)(TypeInfo_ChatPanel + 0xb8) + 0x18);
  }
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor(__this,0x40,0x40,4,0,(MethodInfo *)0x0);
  colors = (UnityEngine_Color32_array *)il2cpp_glue_02274930(TypeInfo_Color32,0x1000);
  if (colors != (UnityEngine_Color32_array *)0x0) {
    pUVar7 = colors->m_Items;
    lVar3 = 0;
    lVar6 = 0;
    do {
      fVar8 = (float)(int)lVar6 + -32.0 + 0.5;
      lVar5 = 0;
      do {
        fVar9 = (float)(int)lVar5 + -32.0 + 0.5;
        if (fVar9 * fVar9 + fVar8 * fVar8 <= 1024.0) {
          iVar4 = -1;
        }
        else {
          iVar4 = 0;
        }
        if ((ulong)(uint)colors->max_length <= (ulong)(lVar3 + lVar5)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (&(pUVar7->fields).rgba)[lVar5] = iVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x40);
      lVar6 = lVar6 + 1;
      pUVar7 = pUVar7 + 0x20;
      lVar3 = lVar3 + 0x40;
    } while (lVar6 != 0x40);
    if (__this != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32(__this,colors,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply(__this,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Sprite__Create
                         (__this,(UnityEngine_Rect_o)(ZEXT816(0x4280000042800000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatPanel + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(TypeInfo_ChatPanel + 0xb8);
      *(UnityEngine_Sprite_o **)(lVar3 + 0x18) = pUVar2;
      il2cpp_runtime_glue(lVar3 + 0x18,pUVar2);
      goto LAB_0409d7aa;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$SetupEmojiButton
// il2cpp: void UI_ChatPanel__SetupEmojiButton (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409bea0

void UI_ChatPanel__SetupEmojiButton(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar5;
  TMPro_TMP_Text_o *__this_02;
  UnityEngine_UI_Button_o *pUVar6;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar7;
  
  if (DAT_057045c6 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void_ToggleEmojiPanel);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UIAnchors);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"EmojiButton");
    il2cpp_init_method_metadata(&"\x263a");
    DAT_057045c6 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_0409c31b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0409c325;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0409c325;
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 1);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_0409c325:
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        il2cpp_runtime_glue(components->m_Items + 2,pSVar2);
        pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar4,"EmojiButton",components,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar5,(UnityEngine_Vector2_o)
                                  *(UnityEngine_Vector2_Fields *)
                                   (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x40),(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar5,(UnityEngine_Vector2_o)
                                  *(UnityEngine_Vector2_Fields *)
                                   (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x40),(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_pivot
                          (pUVar5,(UnityEngine_Vector2_o)
                                  *(UnityEngine_Vector2_Fields *)
                                   (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x40),(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_sizeDelta
                          (pUVar5,(UnityEngine_Vector2_o)0x41d0000041f00000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar5,(UnityEngine_Vector2_o)0xc0000000,(MethodInfo *)0x0);
                __this_02 = (TMPro_TMP_Text_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
                  (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                            (__this_02,"\x263a",(__this_02->klass->vtable)._66_set_text.method);
                  TMPro_TMP_Text__set_fontSize(__this_02,24.0,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_alignment(__this_02,0x202,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_verticalAlignment(__this_02,0x200,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_horizontalAlignment(__this_02,2,(MethodInfo *)0x0);
                  (*(__this_02->klass->vtable)._74_set_margin.methodPtr)
                            (0,0,__this_02,(__this_02->klass->vtable)._74_set_margin.method);
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (0x3f8000003f800000,0x3f800000,__this_02,
                             (__this_02->klass->vtable)._23_set_color.method);
                  pUVar6 = (UnityEngine_UI_Button_o *)
                           UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Button_GetComponent_Button);
                  (__this->fields)._emojiButton = pUVar6;
                  il2cpp_runtime_glue(&(__this->fields)._emojiButton,pUVar6);
                  pUVar6 = (__this->fields)._emojiButton;
                  if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                    __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                (pUVar6->fields).m_CanvasGroupCache;
                    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
                      pTVar1 = (__this->fields)._inputField;
                      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
                         (pUVar5 = (pTVar1->fields).m_RectTransform,
                         pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                        pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar5 = (UnityEngine_RectTransform_o *)
                                   UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform)
                          ;
                          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_offsetMax
                                      (pUVar5,(UnityEngine_Vector2_o)0xc0000000c2040000,
                                       (MethodInfo *)0x0);
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
        goto LAB_0409c31b;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$ToggleEmojiPanel
// il2cpp: void UI_ChatPanel__ToggleEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409dbc0

void UI_ChatPanel__ToggleEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar2;
  TMPro_TMP_InputField_o *__this_00;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_Transform_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_057045c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057045c7 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    UI_ChatPanel__CreateEmojiPanel(__this,method_00);
  }
  bVar1 = (byte)(__this->fields)._emojiPanelActive;
  *(byte *)&(__this->fields)._emojiPanelActive = bVar1 ^ 1;
  pUVar2 = (__this->fields)._emojiPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,(uint)(bVar1 == 0),(MethodInfo *)0x0);
    if ((char)(__this->fields)._emojiPanelActive == '\0') {
      return;
    }
    __this_00 = (__this->fields)._inputField;
    if (__this_00 != (TMPro_TMP_InputField_o *)0x0) {
      __this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,4);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__GetWorldCorners(__this_01,fourCornersArray,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._emojiPanel;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
          if (fourCornersArray != (UnityEngine_Vector3_array *)0x0) {
            if ((uint)fourCornersArray->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              value.fields.y = fourCornersArray->m_Items[0].fields.y;
              value.fields.x = fourCornersArray->m_Items[2].fields.x;
              value.fields.z = fourCornersArray->m_Items[2].fields.z;
              UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._emojiPanel;
              if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
                  return;
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


// UI.ChatPanel$$CreateEmojiPanel
// il2cpp: void UI_ChatPanel__CreateEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409dd40

void UI_ChatPanel__CreateEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_UI_Button_o **ppUVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  System_RuntimeTypeHandle_o handle;
  UI_ChatPanel___c__DisplayClass75_0_o *__this_01;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Il2CppObject *pIVar11;
  TMPro_TextMeshProUGUI_o *pTVar12;
  TMPro_TMP_Text_o *pTVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  UnityEngine_UI_Button_o *pUVar15;
  UnityEngine_UI_GridLayoutGroup_o *__this_02;
  UnityEngine_GameObject_o *pUVar16;
  undefined8 uVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o **ppTVar18;
  
  if (DAT_057045c8 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_GridLayoutGroup_GetComponent_GridLayoutGroup);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_GridLayoutGroup);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEmojiPanel_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEmojiPanel_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEmojiPanel_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEmojiPanel_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass75_0);
    il2cpp_init_method_metadata(&TypeInfo_UIAnchors);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"EmojiModeButton");
    il2cpp_init_method_metadata(&"Sticker");
    il2cpp_init_method_metadata(&"NavPanel");
    il2cpp_init_method_metadata(&"PageText");
    il2cpp_init_method_metadata(&"EmojiGrid");
    il2cpp_init_method_metadata(&"<");
    il2cpp_init_method_metadata(&"Emoji");
    il2cpp_init_method_metadata(&"BackButton");
    il2cpp_init_method_metadata(&"NextButton");
    il2cpp_init_method_metadata(&"StickerModeButton");
    il2cpp_init_method_metadata(&"EmojiPanel");
    il2cpp_init_method_metadata(&"TooltipArea");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&">");
    DAT_057045c8 = '\x01';
  }
  __this_01 = (UI_ChatPanel___c__DisplayClass75_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass75_0);
  UI_ChatPanel_<>c__DisplayClass75_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UI_ChatPanel___c__DisplayClass75_0_o *)0x0) goto LAB_0409f508;
  (__this_01->fields).__4__this = __this;
  il2cpp_runtime_glue(&__this_01->fields,__this);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"EmojiPanel",pSVar4,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._emojiPanel;
  (__this->fields)._emojiPanel = pUVar7;
  il2cpp_runtime_glue(ppUVar1);
  pUVar7 = (__this->fields)._emojiPanel;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_0409f508;
  pUVar9 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar10,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x50),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x50),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar10,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x50),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)0x43630000434d0000,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pIVar11 = UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Image_GetComponent_Image);
  if (pIVar11 == (Il2CppObject *)0x0) goto LAB_0409f508;
  (*pIVar11->klass->vtable[0x17].methodPtr)
            (0x3df1a9fc3df1a9fc,0x3df1a9fc,pIVar11,pIVar11->klass->vtable[0x17].method);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"TooltipArea",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)0x40e0000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar10,(UnityEngine_Vector2_o)0xc0e0000000000000,(MethodInfo *)0x0);
  pTVar12 = (TMPro_TextMeshProUGUI_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  ppTVar18 = &(__this_01->fields).tooltipText;
  (__this_01->fields).tooltipText = pTVar12;
  il2cpp_runtime_glue(ppTVar18);
  pTVar12 = (__this_01->fields).tooltipText;
  if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409f508;
  TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar12,14.0,(MethodInfo *)0x0);
  pTVar12 = *ppTVar18;
  if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409f508;
  (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
            (0x3f8000003f800000,0x3f800000,pTVar12,(pTVar12->klass->vtable)._23_set_color.method);
  if (*ppTVar18 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409f508;
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*ppTVar18,0x202,(MethodInfo *)0x0);
  pTVar12 = *ppTVar18;
  if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409f508;
  (*(pTVar12->klass->vtable)._66_set_text.methodPtr)
            (pTVar12,"",(pTVar12->klass->vtable)._66_set_text.method);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 3) goto LAB_0409f50d;
  pSVar4->m_Items[2] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 2,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"EmojiModeButton",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)0x4170000042a00000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar10,(UnityEngine_Vector2_o)0xc0e00000c1f00000,(MethodInfo *)0x0);
  pTVar13 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pTVar13 == (TMPro_TMP_Text_o *)0x0) goto LAB_0409f508;
  (*(pTVar13->klass->vtable)._66_set_text.methodPtr)
            (pTVar13,"Emoji",(pTVar13->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_fontSize(pTVar13,14.0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_alignment(pTVar13,0x202,(MethodInfo *)0x0);
  (*(pTVar13->klass->vtable)._23_set_color.methodPtr)
            (0x3f8000003f800000,0x3f800000,pTVar13,(pTVar13->klass->vtable)._23_set_color.method);
  pTVar12 = (TMPro_TextMeshProUGUI_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Button_GetComponent_Button);
  (__this->fields)._emojiPageText = pTVar12;
  il2cpp_runtime_glue(&(__this->fields)._emojiPageText,pTVar12);
  pTVar12 = (__this->fields)._emojiPageText;
  if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_0409f508;
  pUVar3 = *(UnityEngine_Events_UnityEvent_o **)&(pTVar12->fields).m_isRightToLeft;
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar3 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0409f508;
  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar14,(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 3) goto LAB_0409f50d;
  pSVar4->m_Items[2] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 2,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"StickerModeButton",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)0x4170000042a00000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar10,(UnityEngine_Vector2_o)0xc0e0000041f00000,(MethodInfo *)0x0);
  pTVar13 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pTVar13 == (TMPro_TMP_Text_o *)0x0) goto LAB_0409f508;
  (*(pTVar13->klass->vtable)._66_set_text.methodPtr)
            (pTVar13,"Sticker",(pTVar13->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_fontSize(pTVar13,14.0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_alignment(pTVar13,0x202,(MethodInfo *)0x0);
  (*(pTVar13->klass->vtable)._23_set_color.methodPtr)
            (0x3f8000003f800000,0x3f800000,pTVar13,(pTVar13->klass->vtable)._23_set_color.method);
  pUVar15 = (UnityEngine_UI_Button_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Button_GetComponent_Button);
  (__this->fields)._emojiModeButton = pUVar15;
  il2cpp_runtime_glue(&(__this->fields)._emojiModeButton,pUVar15);
  pUVar15 = (__this->fields)._emojiModeButton;
  if (pUVar15 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0409f508;
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pUVar15->fields).m_CanvasGroupCache;
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar3 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0409f508;
  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar14,(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_GridLayoutGroup,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"EmojiGrid",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar10,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)
                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
             (MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMin
            (pUVar10,(UnityEngine_Vector2_o)0x41f0000041700000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_offsetMax
            (pUVar10,(UnityEngine_Vector2_o)0xc1b00000c1700000,(MethodInfo *)0x0);
  __this_02 = (UnityEngine_UI_GridLayoutGroup_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_GridLayoutGroup_GetComponent_GridLayoutGroup);
  if (__this_02 == (UnityEngine_UI_GridLayoutGroup_o *)0x0) goto LAB_0409f508;
  UnityEngine_UI_GridLayoutGroup__set_cellSize
            (__this_02,(UnityEngine_Vector2_o)0x4220000042200000,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_spacing
            (__this_02,(UnityEngine_Vector2_o)0x40a0000040a00000,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_constraint(__this_02,1,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_constraintCount(__this_02,4,(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"NavPanel",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin(pUVar10,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(pUVar10,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)0x4170000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar10,(UnityEngine_Vector2_o)0x40f0000000000000,(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 3) goto LAB_0409f50d;
  pSVar4->m_Items[2] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 2,pSVar5);
  pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar16,"BackButton",pSVar4,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409f508;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
  pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
  UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
  UnityEngine_RectTransform__set_anchorMin(pUVar10,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot
            (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_sizeDelta
            (pUVar10,(UnityEngine_Vector2_o)0x4170000042700000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar10,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
  pTVar13 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pTVar13 == (TMPro_TMP_Text_o *)0x0) goto LAB_0409f508;
  (*(pTVar13->klass->vtable)._66_set_text.methodPtr)
            (pTVar13,"<",(pTVar13->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_fontSize(pTVar13,14.0,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_alignment(pTVar13,0x202,(MethodInfo *)0x0);
  (*(pTVar13->klass->vtable)._23_set_color.methodPtr)
            (0x3f8000003f800000,0x3f800000,pTVar13,(pTVar13->klass->vtable)._23_set_color.method);
  pUVar15 = (UnityEngine_UI_Button_o *)
            UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_Button_GetComponent_Button);
  (__this->fields)._emojiNextButton = pUVar15;
  il2cpp_runtime_glue(&(__this->fields)._emojiNextButton,pUVar15);
  pUVar15 = (__this->fields)._emojiNextButton;
  if (pUVar15 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0409f508;
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pUVar15->fields).m_CanvasGroupCache;
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar3 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0409f508;
  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar14,(MethodInfo *)0x0);
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_0409f512;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_0409f50d;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,pSVar5);
  pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar16,"PageText",pSVar4,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0409f508;
    UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0409f508;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar10,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (pUVar10,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar10,(UnityEngine_Vector2_o)0x4170000042700000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar10,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    pUVar15 = (UnityEngine_UI_Button_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    ppUVar2 = &(__this->fields)._emojiBackButton;
    (__this->fields)._emojiBackButton = pUVar15;
    il2cpp_runtime_glue(ppUVar2);
    pTVar13 = (TMPro_TMP_Text_o *)(__this->fields)._emojiBackButton;
    if (pTVar13 == (TMPro_TMP_Text_o *)0x0) goto LAB_0409f508;
    TMPro_TMP_Text__set_fontSize(pTVar13,14.0,(MethodInfo *)0x0);
    if ((TMPro_TMP_Text_o *)*ppUVar2 == (TMPro_TMP_Text_o *)0x0) goto LAB_0409f508;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*ppUVar2,0x202,(MethodInfo *)0x0);
    pUVar15 = *ppUVar2;
    if (pUVar15 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0409f508;
    (*(pUVar15->klass->vtable)._23_unknown.methodPtr)
              (0x3f8000003f800000,0x3f800000,pUVar15,(pUVar15->klass->vtable)._23_unknown.method);
    pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
    if (pSVar4 == (System_Type_array *)0x0) goto LAB_0409f508;
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_0409f512;
    }
    if ((int)pSVar4->max_length == 0) goto LAB_0409f50d;
    pSVar4->m_Items[0] = pSVar5;
    il2cpp_runtime_glue(pSVar4->m_Items);
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_0409f512;
    }
    if (1 < (uint)pSVar4->max_length) {
      pSVar4->m_Items[1] = pSVar5;
      il2cpp_runtime_glue(pSVar4->m_Items + 1);
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_o *)0x0) {
        lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
LAB_0409f512:
          uVar17 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar17,0);
        }
      }
      if (2 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[2] = pSVar5;
        il2cpp_runtime_glue(pSVar4->m_Items + 2,pSVar5);
        pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar16,"NextButton",pSVar4,(MethodInfo *)0x0);
        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar8,pUVar9,0,(MethodInfo *)0x0);
            pUVar10 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar10,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (pUVar10,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar10,(UnityEngine_Vector2_o)0x4170000042700000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar10,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
              pTVar13 = (TMPro_TMP_Text_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
                (*(pTVar13->klass->vtable)._66_set_text.methodPtr)
                          (pTVar13,">",(pTVar13->klass->vtable)._66_set_text.method);
                TMPro_TMP_Text__set_fontSize(pTVar13,14.0,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_alignment(pTVar13,0x202,(MethodInfo *)0x0);
                (*(pTVar13->klass->vtable)._23_set_color.methodPtr)
                          (0x3f8000003f800000,0x3f800000,pTVar13,
                           (pTVar13->klass->vtable)._23_set_color.method);
                pIVar11 = UnityEngine_GameObject__GetComponent<object>(pUVar16,MethodInfo_Button_GetComponent_Button);
                *(Il2CppObject **)&(__this->fields)._desiredCaretPosition = pIVar11;
                il2cpp_runtime_glue(&(__this->fields)._desiredCaretPosition,pIVar11);
                lVar6 = *(long *)&(__this->fields)._desiredCaretPosition;
                if (lVar6 != 0) {
                  pUVar3 = *(UnityEngine_Events_UnityEvent_o **)(lVar6 + 0x100);
                  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar14,(MethodInfo *)0x0);
                    UI_ChatPanel__AddEmojiButtons(__this,*ppTVar18,method_00);
                    UI_ChatPanel__SetPanelMode(__this,0,method_01);
                    pUVar7 = (__this->fields)._emojiPanel;
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0409f508;
      }
    }
LAB_0409f50d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0409f508:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$AddEmojiButtons
// il2cpp: void UI_ChatPanel__AddEmojiButtons (UI_ChatPanel_o* __this, TMPro_TextMeshProUGUI_o* tooltipText, const MethodInfo* method);
// 0x409f530

/* WARNING: Removing unreachable block (ram,0x0409fa82) */

void UI_ChatPanel__AddEmojiButtons
               (UI_ChatPanel_o *__this,TMPro_TextMeshProUGUI_o *tooltipText,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_UI_Selectable_o *__this_01;
  TMPro_TextMeshProUGUI_o *tooltipText_00;
  char cVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_GridLayoutGroup_o *pUVar11;
  System_Collections_IEnumerator_o *pSVar12;
  VirtualInvokeData *pVVar13;
  UnityEngine_Component_o *__this_02;
  UnityEngine_Object_o *obj;
  long *plVar14;
  undefined8 *puVar15;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar16;
  int spriteIndex;
  int iVar17;
  long lVar18;
  long lVar19;
  MethodInfo *in_R9;
  undefined4 local_48;
  int local_44;
  UnityEngine_UI_GridLayoutGroup_o *local_40;
  TMPro_TextMeshProUGUI_o *local_38;
  
  if (DAT_057045c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GridLayoutGroup_GetComponent_GridLayoutGroup);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    il2cpp_init_method_metadata(&"EmojiGrid");
    il2cpp_init_method_metadata(&"{0}/{1}");
    DAT_057045c9 = '\x01';
  }
  __this_00 = (__this->fields)._emojiPanel;
  if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar10 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar10 = UnityEngine_Transform__Find(pUVar10,"EmojiGrid",(MethodInfo *)0x0),
      pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
     ((pUVar11 = (UnityEngine_UI_GridLayoutGroup_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar10,MethodInfo_GridLayoutGroup_GetComponent_GridLayoutGroup),
      pUVar11 != (UnityEngine_UI_GridLayoutGroup_o *)0x0 &&
      (pUVar10 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
      pUVar10 != (UnityEngine_Transform_o *)0x0)))) {
    local_40 = pUVar11;
    local_38 = tooltipText;
    pSVar12 = UnityEngine_Transform__GetEnumerator(pUVar10,(MethodInfo *)0x0);
    if (pSVar12 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar5 = pSVar12->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar18) == TypeInfo_IEnumerator) {
            pVVar13 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar18);
            goto LAB_0409f6c3;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar18);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar12,TypeInfo_IEnumerator,0);
LAB_0409f6c3:
      cVar8 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (cVar8 == '\0') {
        plVar14 = (long *)il2cpp_runtime_glue(pSVar12,TypeInfo_IDisposable);
        tooltipText_00 = local_38;
        pUVar11 = local_40;
        if (plVar14 == (long *)0x0) goto LAB_0409f886;
        lVar18 = *plVar14;
        if ((ulong)*(ushort *)(lVar18 + 0x12e) == 0) goto LAB_0409f85f;
        lVar19 = 0;
        goto LAB_0409f850;
      }
      pSVar5 = pSVar12->klass;
      uVar4._0_1_ = (pSVar5->_2).rank;
      uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar18) == TypeInfo_IEnumerator) {
            pVVar13 = pSVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar18) + 1);
            goto LAB_0409f748;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar18);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar12,TypeInfo_IEnumerator,1);
LAB_0409f748:
      __this_02 = (UnityEngine_Component_o *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (__this_02 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = (TypeInfo_Transform->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar2) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_02);
      }
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_0409fa7d;
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19) {
LAB_0409f850:
    if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
      puVar15 = (undefined8 *)
                (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto LAB_0409f87d;
    }
  }
LAB_0409f85f:
  puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IDisposable,0);
LAB_0409f87d:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_0409f886:
  spriteIndex = *(int *)((long)&(__this->fields)._cachedRectTransforms + 4) * 0x10;
  iVar1 = spriteIndex + 0x10;
  iVar17 = 0x8d;
  if (iVar1 < 0x8e) {
    iVar17 = iVar1;
  }
  for (; spriteIndex < iVar17; spriteIndex = spriteIndex + 1) {
    UI_ChatPanel__CreateSpriteButton
              (__this,pUVar11,tooltipText_00,spriteIndex,
               (uint)(*(int *)&(__this->fields)._stickerModeButton == 1),in_R9);
  }
  pUVar7 = (__this->fields)._emojiNextButton;
  if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar7,
               (uint)(0 < *(int *)((long)&(__this->fields)._cachedRectTransforms + 4)),
               (MethodInfo *)0x0);
    __this_01 = *(UnityEngine_UI_Selectable_o **)&(__this->fields)._desiredCaretPosition;
    if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable(__this_01,(uint)(iVar1 < 0x8d),(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._emojiBackButton;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pUVar7 = (__this->fields)._emojiBackButton;
        local_44 = *(int *)((long)&(__this->fields)._cachedRectTransforms + 4) + 1;
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
        local_48 = 9;
        arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
        pSVar16 = System_String__Format("{0}/{1}",arg0,arg1,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0409fa7d;
        (*(code *)pUVar7->klass[1].vtable._3_ToString.method)
                  (pUVar7,pSVar16,pUVar7->klass[1].vtable._4_Awake.methodPtr);
      }
      return;
    }
  }
LAB_0409fa7d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$CreateSpriteButton
// il2cpp: void UI_ChatPanel__CreateSpriteButton (UI_ChatPanel_o* __this, UnityEngine_UI_GridLayoutGroup_o* emojiGrid, TMPro_TextMeshProUGUI_o* tooltipText, int32_t spriteIndex, bool isSticker, const MethodInfo* method);
// 0x409fc80

void UI_ChatPanel__CreateSpriteButton
               (UI_ChatPanel_o *__this,UnityEngine_UI_GridLayoutGroup_o *emojiGrid,
               TMPro_TextMeshProUGUI_o *tooltipText,int32_t spriteIndex,bool_conflict isSticker,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *pUVar3;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar4;
  System_RuntimeTypeHandle_o SVar5;
  UI_ChatPanel___c__DisplayClass77_0_o *__this_01;
  undefined8 *puVar6;
  Il2CppObject *arg1;
  System_String_o *pSVar7;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  TMPro_TMP_Text_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_EventSystems_EventTrigger_o *__this_06;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar14;
  UnityEngine_Events_UnityAction_T0__o *pUVar15;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar16;
  undefined8 uVar17;
  char local_3c;
  int32_t local_38;
  int32_t local_34;
  
  if (DAT_057045ca == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&TypeInfo_Entry);
    il2cpp_init_method_metadata(&MethodInfo_EventTrigger_AddComponent_EventTrigger);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateSpriteButton_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateSpriteButton_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateSpriteButton_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateSpriteButton_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass77_0);
    il2cpp_init_method_metadata(&TypeInfo_UIAnchors);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_BaseEventData);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"EmojiButton_");
    il2cpp_init_method_metadata(&"{0}{1}");
    il2cpp_init_method_metadata(&"<sprite={0}>");
    il2cpp_init_method_metadata(&"StickerButton_");
    il2cpp_init_method_metadata(&"EmojiText");
    il2cpp_init_method_metadata(&"StickerText");
    DAT_057045ca = '\x01';
  }
  __this_01 = (UI_ChatPanel___c__DisplayClass77_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass77_0);
  UI_ChatPanel_<>c__DisplayClass77_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass77_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_01->fields,__this);
    (__this_01->fields).spriteIndex = spriteIndex;
    (__this_01->fields).tooltipText = tooltipText;
    il2cpp_runtime_glue(&(__this_01->fields).tooltipText,tooltipText);
    pSVar7 = "{0}{1}";
    local_3c = (char)isSticker;
    if (local_3c == '\0') {
      puVar6 = &"EmojiButton_";
    }
    else {
      puVar6 = &"StickerButton_";
    }
    pIVar13 = (Il2CppObject *)*puVar6;
    local_34 = (__this_01->fields).spriteIndex;
    arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    pSVar7 = System_String__Format(pSVar7,pIVar13,arg1,(MethodInfo *)0x0);
    pSVar8 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    SVar5 = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    if (pSVar8 != (System_Type_array *)0x0) {
      if ((pSVar9 != (System_Type_o *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0
         )) {
LAB_040a05ad:
        uVar17 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar17,0);
      }
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pSVar9;
        il2cpp_runtime_glue(pSVar8->m_Items);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) &&
           (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
           lVar10 == 0)) goto LAB_040a05ad;
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = pSVar9;
          il2cpp_runtime_glue(pSVar8->m_Items + 1);
          pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar9 != (System_Type_o *)0x0) &&
             (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
             lVar10 == 0)) goto LAB_040a05ad;
          if (2 < (uint)pSVar8->max_length) {
            pSVar8->m_Items[2] = pSVar9;
            il2cpp_runtime_glue(pSVar8->m_Items + 2,pSVar9);
            __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor(__this_02,pSVar7,pSVar8,(MethodInfo *)0x0);
            if (((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
                (pUVar11 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
                emojiGrid != (UnityEngine_UI_GridLayoutGroup_o *)0x0)) &&
               (pUVar12 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)emojiGrid,(MethodInfo *)0x0),
               pUVar11 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar11,pUVar12,0,(MethodInfo *)0x0);
              pIVar13 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Image_GetComponent_Image);
              if (pIVar13 != (Il2CppObject *)0x0) {
                (*pIVar13->klass->vtable[0x17].methodPtr)
                          (0x3e99999a3e99999a,0x3e99999a,pIVar13,pIVar13->klass->vtable[0x17].method
                          );
                if (local_3c == '\0') {
                  puVar6 = &"EmojiText";
                }
                else {
                  puVar6 = &"StickerText";
                }
                pSVar7 = (System_String_o *)*puVar6;
                pSVar8 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                SVar5 = TypeRef_RectTransform;
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar9 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
                if (pSVar8 != (System_Type_array *)0x0) {
                  if ((pSVar9 != (System_Type_o *)0x0) &&
                     (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
                     lVar10 == 0)) goto LAB_040a05ad;
                  if ((int)pSVar8->max_length != 0) {
                    pSVar8->m_Items[0] = pSVar9;
                    il2cpp_runtime_glue(pSVar8->m_Items);
                    pSVar9 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                    if ((pSVar9 != (System_Type_o *)0x0) &&
                       (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class
                                                   ), lVar10 == 0)) goto LAB_040a05ad;
                    if (1 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[1] = pSVar9;
                      il2cpp_runtime_glue(pSVar8->m_Items + 1,pSVar9);
                      __this_03 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                      UnityEngine_GameObject___ctor(__this_03,pSVar7,pSVar8,(MethodInfo *)0x0);
                      if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar11 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0)
                        ;
                        pUVar12 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0)
                        ;
                        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent(pUVar11,pUVar12,0,(MethodInfo *)0x0);
                          __this_04 = (UnityEngine_RectTransform_o *)
                                      UnityEngine_GameObject__GetComponent<object>
                                                (__this_03,MethodInfo_RectTransform_GetComponent_RectTransform);
                          if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          if (__this_04 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchorMin
                                      (__this_04,
                                       (UnityEngine_Vector2_o)
                                       *(UnityEngine_Vector2_Fields *)
                                        (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x30),(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (__this_04,
                                       (UnityEngine_Vector2_o)
                                       *(UnityEngine_Vector2_Fields *)
                                        (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x30),(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (__this_04,
                                       (UnityEngine_Vector2_o)
                                       *(UnityEngine_Vector2_Fields *)
                                        (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x30),(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_sizeDelta
                                      (__this_04,(UnityEngine_Vector2_o)0x4218000042180000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (__this_04,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                            __this_05 = (TMPro_TMP_Text_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (__this_03,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                            local_38 = (__this_01->fields).spriteIndex;
                            pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
                            pSVar7 = System_String__Format("<sprite={0}>",pIVar13,(MethodInfo *)0x0);
                            if (__this_05 != (TMPro_TMP_Text_o *)0x0) {
                              (*(__this_05->klass->vtable)._66_set_text.methodPtr)
                                        (__this_05,pSVar7,
                                         (__this_05->klass->vtable)._66_set_text.method);
                              TMPro_TMP_Text__set_fontSize(__this_05,30.0,(MethodInfo *)0x0);
                              TMPro_TMP_Text__set_alignment(__this_05,0x202,(MethodInfo *)0x0);
                              TMPro_TMP_Text__set_verticalAlignment
                                        (__this_05,0x200,(MethodInfo *)0x0);
                              TMPro_TMP_Text__set_enableAutoSizing(__this_05,0,(MethodInfo *)0x0);
                              (*(__this_05->klass->vtable)._23_set_color.methodPtr)
                                        (0x3f8000003f800000,0x3f800000,__this_05,
                                         (__this_05->klass->vtable)._23_set_color.method);
                              pIVar13 = UnityEngine_GameObject__GetComponent<object>
                                                  (__this_02,MethodInfo_Button_GetComponent_Button);
                              if (pIVar13 != (Il2CppObject *)0x0) {
                                __this_00 = pIVar13[0x10].klass;
                                call = (UnityEngine_Events_UnityAction_o *)
                                       il2cpp_runtime_glue(TypeInfo_UnityAction);
                                if (local_3c == '\0') {
                                  UnityEngine_Events_UnityAction___ctor();
                                  if (__this_00 != (Il2CppClass *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              ((UnityEngine_Events_UnityEvent_o *)__this_00,call,
                                               (MethodInfo *)0x0);
                                    __this_06 = (UnityEngine_EventSystems_EventTrigger_o *)
                                                UnityEngine_GameObject__AddComponent<object>
                                                          (__this_02,MethodInfo_EventTrigger_AddComponent_EventTrigger);
                                    pUVar14 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
                                              il2cpp_runtime_glue(TypeInfo_Entry);
                                    UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                              (pUVar14,(MethodInfo *)0x0);
                                    if (pUVar14 !=
                                        (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                                      (pUVar14->fields).eventID = 0;
                                      pUVar3 = (pUVar14->fields).callback;
                                      pUVar15 = (UnityEngine_Events_UnityAction_T0__o *)
                                                il2cpp_runtime_glue(TypeInfo_UnityAction_BaseEventData);
                                      UnityEngine_Events_UnityAction<object>___ctor();
                                      if (((pUVar3 != (
                                                  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o
                                                  *)0x0) &&
                                          (UnityEngine_Events_UnityEvent<object>__AddListener
                                                     ((UnityEngine_Events_UnityEvent_T0__o *)pUVar3,
                                                      pUVar15,MethodInfo_Void_AddListener),
                                          __this_06 !=
                                          (UnityEngine_EventSystems_EventTrigger_o *)0x0)) &&
                                         (pSVar16 = 
                                                  UnityEngine_EventSystems_EventTrigger__get_triggers
                                                            (__this_06,(MethodInfo *)0x0),
                                         lVar10 = MethodInfo_Void_Add,
                                         pSVar16 !=
                                         (System_Collections_Generic_List_EventTrigger_Entry__o *)
                                         0x0)) {
                                        piVar1 = &(pSVar16->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar4 = (pSVar16->fields)._items;
                                        if (pUVar4 != (
                                                  UnityEngine_EventSystems_EventTrigger_Entry_array
                                                  *)0x0) {
                                          uVar2 = (pSVar16->fields)._size;
                                          if (uVar2 < (uint)pUVar4->max_length) {
                                            (pSVar16->fields)._size = uVar2 + 1;
                                            pUVar4->m_Items[(int)uVar2] = pUVar14;
                                            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                          }
                                          else {
                                            System_Collections_Generic_List<object>__AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)
                                                       pSVar16,(Il2CppObject *)pUVar14,
                                                       *(MethodInfo_35A7350 **)
                                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                        + 0x70));
                                          }
                                          pUVar14 = (UnityEngine_EventSystems_EventTrigger_Entry_o *
                                                    )il2cpp_runtime_glue(TypeInfo_Entry);
                                          UnityEngine_EventSystems_EventTrigger_Entry___ctor
                                                    (pUVar14,(MethodInfo *)0x0);
                                          if (pUVar14 !=
                                              (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0)
                                          {
                                            (pUVar14->fields).eventID = 1;
                                            pUVar3 = (pUVar14->fields).callback;
                                            pUVar15 = (UnityEngine_Events_UnityAction_T0__o *)
                                                      il2cpp_runtime_glue(TypeInfo_UnityAction_BaseEventData);
                                            UnityEngine_Events_UnityAction<object>___ctor();
                                            if (pUVar3 != (
                                                  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o
                                                  *)0x0) {
                                              UnityEngine_Events_UnityEvent<object>__AddListener
                                                        ((UnityEngine_Events_UnityEvent_T0__o *)
                                                         pUVar3,pUVar15,MethodInfo_Void_AddListener);
                                              pSVar16 = 
                                                  UnityEngine_EventSystems_EventTrigger__get_triggers
                                                            (__this_06,(MethodInfo *)0x0);
                                              lVar10 = MethodInfo_Void_Add;
                                              if (pSVar16 !=
                                                  (
                                                  System_Collections_Generic_List_EventTrigger_Entry__o
                                                  *)0x0) {
                                                piVar1 = &(pSVar16->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar4 = (pSVar16->fields)._items;
                                                if (pUVar4 != (
                                                  UnityEngine_EventSystems_EventTrigger_Entry_array
                                                  *)0x0) {
                                                  uVar2 = (pSVar16->fields)._size;
                                                  if (uVar2 < (uint)pUVar4->max_length) {
                                                    (pSVar16->fields)._size = uVar2 + 1;
                                                    pUVar4->m_Items[(int)uVar2] = pUVar14;
                                                    il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,
                                                                       pUVar14);
                                                    return;
                                                  }
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  pSVar16,(Il2CppObject *)pUVar14,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                   0x70));
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
                                else {
                                  UnityEngine_Events_UnityAction___ctor();
                                  if (__this_00 != (Il2CppClass *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              ((UnityEngine_Events_UnityEvent_o *)__this_00,call,
                                               (MethodInfo *)0x0);
                                    UnityEngine_GameObject__AddComponent<object>
                                              (__this_02,MethodInfo_EventTrigger_AddComponent_EventTrigger);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_040a05a3;
                    }
                  }
                  goto LAB_040a05a8;
                }
              }
            }
            goto LAB_040a05a3;
          }
        }
      }
LAB_040a05a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_040a05a3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$ShowTemporaryTooltip
// il2cpp: System_Collections_IEnumerator_o* UI_ChatPanel__ShowTemporaryTooltip (UI_ChatPanel_o* __this, TMPro_TextMeshProUGUI_o* tooltip, System_String_o* message, float duration, const MethodInfo* method);
// 0x40a05c0

System_Collections_IEnumerator_o *
UI_ChatPanel__ShowTemporaryTooltip
          (UI_ChatPanel_o *__this,TMPro_TextMeshProUGUI_o *tooltip,System_String_o *message,
          float duration,MethodInfo *method)

{
  UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this_00;
  
  if (DAT_057045cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShowTemporaryTooltip_d__78);
    DAT_057045cb = '\x01';
  }
  __this_00 = (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *)il2cpp_runtime_glue(TypeInfo_ShowTemporaryTooltip_d__78);
  UI_ChatPanel_<ShowTemporaryTooltip>d__78___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *)0x0) {
    (__this_00->fields).tooltip = tooltip;
    il2cpp_runtime_glue(&(__this_00->fields).tooltip,tooltip);
    (__this_00->fields).message = message;
    il2cpp_runtime_glue(&(__this_00->fields).message,message);
    (__this_00->fields).duration = duration;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$ChangeEmojiPage
// il2cpp: void UI_ChatPanel__ChangeEmojiPage (UI_ChatPanel_o* __this, int32_t delta, TMPro_TextMeshProUGUI_o* tooltipText, const MethodInfo* method);
// 0x40a0660

void UI_ChatPanel__ChangeEmojiPage
               (UI_ChatPanel_o *__this,int32_t delta,TMPro_TextMeshProUGUI_o *tooltipText,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar2 = delta + *(int *)((long)&(__this->fields)._cachedRectTransforms + 4);
  iVar1 = 8;
  if (iVar2 < 9) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)((long)&(__this->fields)._cachedRectTransforms + 4) = iVar2;
  UI_ChatPanel__AddEmojiButtons(__this,tooltipText,(MethodInfo *)tooltipText);
  return;
}


// UI.ChatPanel$$SetPanelMode
// il2cpp: void UI_ChatPanel__SetPanelMode (UI_ChatPanel_o* __this, int32_t mode, const MethodInfo* method);
// 0x409faa0

void UI_ChatPanel__SetPanelMode(UI_ChatPanel_o *__this,int32_t mode,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  undefined8 uVar2;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  MethodInfo *method_00;
  
  if (DAT_057045cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"TooltipArea");
    DAT_057045cc = '\x01';
  }
  *(int32_t *)&(__this->fields)._stickerModeButton = mode;
  pTVar6 = (__this->fields)._emojiPageText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar6 = (__this->fields)._emojiPageText;
    if ((pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) ||
       (pIVar4 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pTVar6,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI),
       pIVar4 == (Il2CppObject *)0x0)) goto LAB_0409fc71;
    (*pIVar4->klass->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,pIVar4);
  }
  pUVar1 = (__this->fields)._emojiModeButton;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._emojiModeButton;
    if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
       (pIVar4 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI),
       pIVar4 == (Il2CppObject *)0x0)) goto LAB_0409fc71;
    (*pIVar4->klass->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,pIVar4);
  }
  if (mode == 0) {
    *(undefined1 *)((long)&(__this->fields)._stickerModeButton + 4) = 0;
    uVar2 = **(undefined8 **)(DAT_057110b0 + 0xb8);
    (__this->fields)._panelMode = (int)uVar2;
    (__this->fields)._stickerInserted = (int)((ulong)uVar2 >> 0x20);
    il2cpp_runtime_glue(&(__this->fields)._panelMode);
  }
  __this_00 = (__this->fields)._emojiPanel;
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"TooltipArea",(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    pTVar6 = (TMPro_TextMeshProUGUI_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar5,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    UI_ChatPanel__AddEmojiButtons(__this,pTVar6,method_00);
    return;
  }
LAB_0409fc71:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$InsertSticker
// il2cpp: void UI_ChatPanel__InsertSticker (UI_ChatPanel_o* __this, int32_t spriteIndex, const MethodInfo* method);
// 0x40a0690

void UI_ChatPanel__InsertSticker(UI_ChatPanel_o *__this,int32_t spriteIndex,MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *pUVar1;
  TMPro_TMP_InputField_o *pTVar2;
  long *plVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  TMPro_TextMeshProUGUI_o *x;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  UI_ChatPanel__ShowTemporaryTooltip_d__78_o *__this_00;
  UnityEngine_Coroutine_o *pUVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  int32_t local_30;
  float local_2c;
  
  if (DAT_057045cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&":s{0}{1}:");
    il2cpp_init_method_metadata(&"Sticker cooldown: {0}s");
    il2cpp_init_method_metadata(&"TooltipArea");
    il2cpp_init_method_metadata();
    DAT_057045cd = '\x01';
  }
  fVar9 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if (15.0 <= fVar9 - *(float *)&(__this->fields)._stickerTag) {
    local_30 = spriteIndex;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    pSVar7 = System_String__Format(":s{0}{1}:","\x200b\x200b",pIVar6,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._stickerModeButton + 4) = 1;
    *(System_String_o **)&(__this->fields)._panelMode = pSVar7;
    il2cpp_runtime_glue(&(__this->fields)._panelMode);
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a0a48;
      TMPro_TMP_InputField__set_text(pTVar2,pSVar7,(MethodInfo *)0x0);
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pTVar2 = (__this->fields)._inputField, pTVar2 == (TMPro_TMP_InputField_o *)0x0))
      goto LAB_040a0a48;
      value = (pSVar7->fields)._stringLength;
      TMPro_TMP_InputField__set_caretPosition(pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a0a48;
      TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a0a48;
      TMPro_TMP_InputField__set_selectionFocusPosition(pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._inputField;
      if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
         (plVar3 = *(long **)&(pTVar2->fields).m_CachedViewportRect.fields.m_Width,
         plVar3 == (long *)0x0)) goto LAB_040a0a48;
      (**(code **)(*plVar3 + 0x7d8))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x7e0));
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a0a48;
      method_00 = (MethodInfo *)0x0;
      TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    }
    UI_ChatPanel__SubmitProcessedInput(__this,method_00);
    fVar9 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    *(float *)&(__this->fields)._stickerTag = fVar9;
    if ((char)(__this->fields)._emojiPanelActive != '\0') {
      *(undefined1 *)&(__this->fields)._emojiPanelActive = 0;
      pUVar1 = (__this->fields)._emojiPanel;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a0a48;
      UnityEngine_GameObject__SetActive(pUVar1,0,(MethodInfo *)0x0);
    }
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
LAB_040a0a48:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    TMPro_TMP_InputField__DeactivateInputField(pTVar2,0,(MethodInfo *)0x0);
  }
  else {
    x = (TMPro_TextMeshProUGUI_o *)0x0;
    fVar10 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    fVar9 = *(float *)&(__this->fields)._stickerTag;
    pUVar1 = (__this->fields)._emojiPanel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040a0a48;
      x = (TMPro_TextMeshProUGUI_o *)0x0;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"TooltipArea",(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        x = (TMPro_TextMeshProUGUI_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar5,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar8 = *(UnityEngine_Coroutine_o **)&(__this->fields)._lastStickerSentTime;
      if (pUVar8 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar8,(MethodInfo *)0x0);
      }
      local_2c = ceilf((fVar9 - fVar10) + 15.0);
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_2c);
      pSVar7 = System_String__Format("Sticker cooldown: {0}s",pIVar6,(MethodInfo *)0x0);
      if (DAT_057045cb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_ShowTemporaryTooltip_d__78);
        DAT_057045cb = '\x01';
      }
      __this_00 = (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *)il2cpp_runtime_glue(TypeInfo_ShowTemporaryTooltip_d__78);
      UI_ChatPanel_<ShowTemporaryTooltip>d__78___ctor(__this_00,0,(MethodInfo *)0x0);
      if (__this_00 == (UI_ChatPanel__ShowTemporaryTooltip_d__78_o *)0x0) goto LAB_040a0a48;
      (__this_00->fields).tooltip = x;
      il2cpp_runtime_glue(&(__this_00->fields).tooltip,x);
      (__this_00->fields).message = pSVar7;
      il2cpp_runtime_glue(&(__this_00->fields).message,pSVar7);
      (__this_00->fields).duration = 1.5;
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      *(UnityEngine_Coroutine_o **)&(__this->fields)._lastStickerSentTime = pUVar8;
      il2cpp_runtime_glue(&(__this->fields)._lastStickerSentTime,pUVar8);
    }
  }
  return;
}


// UI.ChatPanel$$InsertEmoji
// il2cpp: void UI_ChatPanel__InsertEmoji (UI_ChatPanel_o* __this, int32_t spriteIndex, const MethodInfo* method);
// 0x40a0cc0

void UI_ChatPanel__InsertEmoji(UI_ChatPanel_o *__this,int32_t spriteIndex,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  int32_t startIndex;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *value;
  System_String_o *pSVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_057045ce == '\0') {
    il2cpp_init_method_metadata(&":{0}:");
    DAT_057045ce = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      (*(pTVar1->klass->vtable)._38_Select.methodPtr)
                (pTVar1,(pTVar1->klass->vtable)._38_Select.method);
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        pSVar2 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
        uStack_28 = CONCAT44(spriteIndex,(undefined4)uStack_28);
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_28 + 4);
        value = System_String__Format(":{0}:",arg0,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
           (startIndex = TMPro_TMP_InputField__get_caretPosition(pTVar1,(MethodInfo *)0x0),
           pSVar2 != (System_String_o *)0x0)) {
          pSVar2 = System_String__Insert(pSVar2,startIndex,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) && (pSVar2 != (System_String_o *)0x0)) {
            iVar4 = *(int *)((long)&(pTVar1->fields).m_RegexValue + 4);
            iVar3 = 0x7fffffff;
            if (0 < iVar4) {
              iVar3 = iVar4;
            }
            if (iVar3 < (pSVar2->fields)._stringLength) {
              return;
            }
            TMPro_TMP_InputField__set_text(pTVar1,pSVar2,(MethodInfo *)0x0);
            if ((value != (System_String_o *)0x0) &&
               (pTVar1 = (__this->fields)._inputField, pTVar1 != (TMPro_TMP_InputField_o *)0x0)) {
              iVar4 = startIndex + (value->fields)._stringLength;
              TMPro_TMP_InputField__set_caretPosition(pTVar1,iVar4,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,iVar4,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,iVar4,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._inputField;
                  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                    TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$Sync
// il2cpp: void UI_ChatPanel__Sync (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409d010

void UI_ChatPanel__Sync(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UI_ChatPanel__RefreshPoolSize(__this,method);
  UI_ChatPanel__ValidatePMState(__this,method);
  UI_ChatPanel__RestorePMPartners(__this,method);
  UI_ChatPanel__RefreshDisplayedMessages(__this,method);
  return;
}


// UI.ChatPanel$$RefreshDisplayedMessages
// il2cpp: void UI_ChatPanel__RefreshDisplayedMessages (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a1a10

void UI_ChatPanel__RefreshDisplayedMessages(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_DateTime__o *pSVar3;
  System_Collections_Generic_List_bool__o *pSVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  Photon_Realtime_Player_o *pPVar6;
  UI_ChatScrollRect_o *pUVar7;
  UnityEngine_UI_Scrollbar_o *pUVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar9;
  uint uVar10;
  int32_t iVar11;
  uint uVar12;
  System_Collections_Generic_List_object__o *__this_02;
  System_String_o *pSVar13;
  System_String_o *str1;
  System_DateTime_o SVar14;
  long lVar15;
  TMPro_TMP_InputField_o *__this_03;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  long lVar18;
  System_Object_array *pSVar19;
  MethodInfo_35A7350 *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar20;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  int iVar21;
  System_Collections_Generic_List_object__o *pSVar22;
  System_Collections_Generic_List_TMP_InputField__o *pSVar23;
  int iVar24;
  float fVar25;
  float value;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  Il2CppObject *in_stack_ffffffffffffff88;
  ulong uVar26;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  System_Collections_Generic_List_object__o *local_58;
  System_Collections_Generic_List_object__o *local_50;
  undefined1 local_48 [8];
  Il2CppType *pIStack_40;
  System_Collections_Generic_List_object__o *local_38;
  
  if (DAT_057045cf == '\0') {
    pIStack_40 = (Il2CppType *)0x40a1a37;
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    pIStack_40 = (Il2CppType *)0x40a1a43;
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    pIStack_40 = (Il2CppType *)0x40a1a4f;
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    pIStack_40 = (Il2CppType *)0x40a1a5b;
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    pIStack_40 = (Il2CppType *)0x40a1a67;
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    pIStack_40 = (Il2CppType *)0x40a1a73;
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    pIStack_40 = (Il2CppType *)0x40a1a7f;
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    pIStack_40 = (Il2CppType *)0x40a1a8b;
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    pIStack_40 = (Il2CppType *)0x40a1a97;
    il2cpp_init_method_metadata(&MethodInfo_DateTime_get_Item);
    pIStack_40 = (Il2CppType *)0x40a1aa3;
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    pIStack_40 = (Il2CppType *)0x40a1aaf;
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    pIStack_40 = (Il2CppType *)0x40a1abb;
    il2cpp_init_method_metadata(&"Private chat with ");
    DAT_057045cf = '\x01';
  }
  pIStack_40 = (Il2CppType *)0x40a1ad1;
  local_38 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  pIStack_40 = (Il2CppType *)0x40a1ae8;
  System_Collections_Generic_List<object>___ctor(local_38,MethodInfo_List_1_System_String);
  pIStack_40 = (Il2CppType *)0x40a1af0;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  pIStack_40 = (Il2CppType *)0x40a1aff;
  System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_System_String);
  if (((char)(__this->fields)._inPMMode != '\0') &&
     ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0)) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      pIStack_40 = (Il2CppType *)0x40a1b33;
      il2cpp_init_class();
    }
    pIStack_40 = (Il2CppType *)0x40a1b4b;
    pSVar13 = GameManagers_ChatManager__GetColorString("Private chat with ",3,0,(MethodInfo *)0x0);
    pIStack_40 = (Il2CppType *)0x40a1b5c;
    str1 = GameManagers_ChatManager__GetPlayerIdentifier
                     ((__this->fields)._currentPMTarget,(MethodInfo *)0x0);
    pIStack_40 = (Il2CppType *)0x40a1b69;
    pSVar13 = System_String__Concat(pSVar13,str1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      pIStack_40 = (Il2CppType *)0x40a1b84;
      il2cpp_init_class();
    }
    pIStack_40 = (Il2CppType *)0x40a1b8b;
    SVar14 = System_DateTime__get_Now((MethodInfo *)0x0);
    pIStack_40 = (Il2CppType *)0x40a1b9d;
    pSVar13 = GameManagers_ChatManager__GetFormattedMessage(pSVar13,SVar14,1,(MethodInfo *)0x0);
    lVar15 = MethodInfo_Void_Add;
    if (local_38 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040a2248;
    piVar1 = &(local_38->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar19 = (local_38->fields)._items;
    if (pSVar19 == (System_Object_array *)0x0) goto LAB_040a2248;
    uVar10 = (local_38->fields)._size;
    if (uVar10 < (uint)pSVar19->max_length) {
      (local_38->fields)._size = uVar10 + 1;
      pSVar19->m_Items[(int)uVar10] = (Il2CppObject *)pSVar13;
      pIStack_40 = (Il2CppType *)0x40a1be9;
      il2cpp_runtime_glue(pSVar19->m_Items + (int)uVar10,pSVar13);
    }
    else {
      pIStack_40 = (Il2CppType *)0x40a1c02;
      System_Collections_Generic_List<object>__AddWithResize
                (local_38,(Il2CppObject *)pSVar13,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  }
  iVar24 = 0;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_040a1c4e;
LAB_040a20c2:
  pIStack_40 = (Il2CppType *)0x40a20c7;
  il2cpp_init_class();
  lVar15 = *(long *)(TypeInfo_ChatManager + 0xb8);
  lVar18 = *(long *)(lVar15 + 0x28);
  if (lVar18 != 0) {
    do {
      pSVar22 = local_38;
      if (*(int *)(lVar18 + 0x18) <= iVar24) {
        if (local_38 == (System_Collections_Generic_List_object__o *)0x0) break;
        pIStack_40 = (Il2CppType *)0x40a2232;
        System_Collections_Generic_List<object>__AddRange
                  (local_38,(System_Collections_Generic_IEnumerable_T__o *)__this_02,MethodInfo_Void_AddRange);
        if (DAT_057045d1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
          il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
          il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Current);
          il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
          il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
          il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
          il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Item);
          il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
          il2cpp_init_method_metadata(&TypeInfo_Object);
          DAT_057045d1 = '\x01';
        }
        local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        pIStack_60 = (Il2CppType *)0x0;
        local_58 = (System_Collections_Generic_List_object__o *)0x0;
        if (DAT_057045d0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
          DAT_057045d0 = '\x01';
        }
        pSVar23 = (__this->fields)._linesPool;
        if ((pSVar23 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) ||
           (pSVar22 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_040a27b4;
        iVar24 = (pSVar22->fields)._size;
        if (iVar24 == 0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_List_object__o *)pSVar23,MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
          local_58 = local_38;
          local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48;
          pIStack_60 = pIStack_40;
          while (__this_00.fields._index = in_stack_ffffffffffffff80,
                __this_00.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
                __this_00.fields._version = in_stack_ffffffffffffff84,
                __this_00.fields._current = in_stack_ffffffffffffff88,
                bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185E20 *)&local_68), (char)bVar9 != '\0')
          {
            if (local_58 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)local_58,(MethodInfo *)0x0);
            if (pUVar16 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
          }
          __this_01.fields._index = in_stack_ffffffffffffff80;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78
          ;
          __this_01.fields._version = in_stack_ffffffffffffff84;
          __this_01.fields._current = in_stack_ffffffffffffff88;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_01,(MethodInfo_3185E10 *)&local_68);
          pUVar7 = (__this->fields)._scrollRect;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
          pMVar20 = extraout_RDX_03;
          if ((char)bVar9 == '\0') {
LAB_040a25b5:
            UI_ChatPanel__UpdateBackgroundVisibility(__this,0,pMVar20);
            return;
          }
          pUVar7 = (__this->fields)._scrollRect;
          if (pUVar7 != (UI_ChatScrollRect_o *)0x0) {
            pUVar8 = (pUVar7->fields).m_HorizontalScrollbar;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar9 = UnityEngine_Object__op_Implicit
                              ((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
            pMVar20 = extraout_RDX_04;
            if ((char)bVar9 != '\0') {
              pUVar7 = (__this->fields)._scrollRect;
              if ((pUVar7 == (UI_ChatScrollRect_o *)0x0) ||
                 (pUVar8 = (pUVar7->fields).m_HorizontalScrollbar,
                 pUVar8 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
              UnityEngine_UI_Scrollbar__set_size(pUVar8,1.0,(MethodInfo *)0x0);
              pMVar20 = extraout_RDX_05;
            }
            goto LAB_040a25b5;
          }
          goto LAB_040a27b4;
        }
        iVar2 = (pSVar23->fields)._size;
        pUVar7 = (__this->fields)._scrollRect;
        if (pUVar7 == (UI_ChatScrollRect_o *)0x0) {
          fVar25 = 0.0;
          iVar21 = *(int *)(TypeInfo_Object + 0xe4);
          pUVar7 = (UI_ChatScrollRect_o *)0x0;
        }
        else {
          fVar25 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                             ((UnityEngine_UI_ScrollRect_o *)pUVar7,(MethodInfo *)0x0);
          iVar24 = (pSVar22->fields)._size;
          pUVar7 = (__this->fields)._scrollRect;
          iVar21 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar21 == 0) {
          il2cpp_init_class();
        }
        uVar26 = 0;
        bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
        pMVar20 = extraout_RDX;
        if ((char)bVar9 != '\0') {
          pUVar7 = (__this->fields)._scrollRect;
          if (pUVar7 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
          pUVar8 = (pUVar7->fields).m_HorizontalScrollbar;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
          pMVar20 = extraout_RDX_00;
          if ((char)bVar9 != '\0') {
            pUVar7 = (__this->fields)._scrollRect;
            if ((pUVar7 == (UI_ChatScrollRect_o *)0x0) ||
               (pUVar8 = (pUVar7->fields).m_HorizontalScrollbar,
               pUVar8 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
            value = 1.0;
            if ((float)iVar2 / (float)iVar24 <= 1.0) {
              value = (float)iVar2 / (float)iVar24;
            }
            UnityEngine_UI_Scrollbar__set_size(pUVar8,value,(MethodInfo *)0x0);
            pMVar20 = extraout_RDX_01;
          }
        }
        uVar10 = iVar24 - iVar2;
        local_50 = pSVar22;
        if (uVar10 != 0 && iVar2 <= iVar24) {
          uVar12 = uVar10;
          if (0.0 < fVar25) {
            fVar25 = 1.0 - fVar25;
            if (DAT_056fdee5 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fdee5 = '\x01';
            }
            fVar25 = fVar25 * (float)(int)uVar10;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_init_class();
            }
            fVar25 = floorf(fVar25);
            uVar12 = (uint)fVar25;
            pMVar20 = extraout_RDX_02;
            if ((int)uVar12 < 0) goto LAB_040a25f0;
            if ((int)uVar10 <= (int)uVar12) {
              uVar12 = uVar10;
            }
          }
          uVar26 = (ulong)uVar12;
        }
LAB_040a25f0:
        pSVar23 = (__this->fields)._linesPool;
        if (pSVar23 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a27b4;
        uVar10 = 0;
        iVar24 = 0;
        if ((pSVar23->fields)._size < 1) goto LAB_040a2789;
        goto LAB_040a2652;
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        pIStack_40 = (Il2CppType *)0x40a1c7a;
        il2cpp_init_class();
        lVar15 = *(long *)(TypeInfo_ChatManager + 0xb8);
      }
      if (*(System_Collections_Generic_List_bool__o **)(lVar15 + 0x50) ==
          (System_Collections_Generic_List_bool__o *)0x0) break;
      pIStack_40 = (Il2CppType *)0x40a1ca3;
      bVar9 = System_Collections_Generic_List<bool>__get_Item
                        (*(System_Collections_Generic_List_bool__o **)(lVar15 + 0x50),iVar24,
                         MethodInfo_Boolean_get_Item);
      if ((char)bVar9 == '\0') {
        if (((char)(__this->fields)._inPMMode == '\0') ||
           ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0)) {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            pIStack_40 = (Il2CppType *)0x40a1f91;
            il2cpp_init_class();
          }
          pSVar4 = *(System_Collections_Generic_List_bool__o **)
                    (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x58);
          if (pSVar4 == (System_Collections_Generic_List_bool__o *)0x0) break;
          pIStack_40 = (Il2CppType *)0x40a1fba;
          bVar9 = System_Collections_Generic_List<bool>__get_Item(pSVar4,iVar24,MethodInfo_Boolean_get_Item);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            pIStack_40 = (Il2CppType *)0x40a2115;
            il2cpp_init_class();
            lVar15 = *(long *)(TypeInfo_ChatManager + 0xb8);
            if ((char)bVar9 == '\0') goto LAB_040a2127;
LAB_040a1fdb:
            if (*(System_Collections_Generic_List_object__o **)(lVar15 + 0x28) !=
                (System_Collections_Generic_List_object__o *)0x0) {
              pIStack_40 = (Il2CppType *)0x40a1ffa;
              pSVar13 = (System_String_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (*(System_Collections_Generic_List_object__o **)(lVar15 + 0x28),
                                   iVar24,MethodInfo_String_get_Item);
              pSVar3 = *(System_Collections_Generic_List_DateTime__o **)
                        (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x48);
              if (pSVar3 != (System_Collections_Generic_List_DateTime__o *)0x0) {
                pIStack_40 = (Il2CppType *)0x40a2026;
                SVar14 = System_Collections_Generic_List<DateTime>__get_Item
                                   (pSVar3,iVar24,MethodInfo_DateTime_get_Item);
                pSVar4 = *(System_Collections_Generic_List_bool__o **)
                          (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x58);
                if (pSVar4 != (System_Collections_Generic_List_bool__o *)0x0) {
                  pIStack_40 = (Il2CppType *)0x40a2052;
                  uVar10 = System_Collections_Generic_List<bool>__get_Item
                                     (pSVar4,iVar24,MethodInfo_Boolean_get_Item);
                  pIStack_40 = (Il2CppType *)0x40a2062;
                  pSVar13 = GameManagers_ChatManager__GetFormattedMessage
                                      (pSVar13,SVar14,uVar10 & 0xff,(MethodInfo *)0x0);
                  lVar15 = MethodInfo_Void_Add;
                  if (local_38 != (System_Collections_Generic_List_object__o *)0x0) {
                    piVar1 = &(local_38->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar19 = (local_38->fields)._items;
                    if (pSVar19 != (System_Object_array *)0x0) {
                      uVar10 = (local_38->fields)._size;
                      if (uVar10 < (uint)pSVar19->max_length) goto LAB_040a2093;
                      goto LAB_040a20f0;
                    }
                  }
                }
              }
            }
            break;
          }
          lVar15 = *(long *)(TypeInfo_ChatManager + 0xb8);
          if ((char)bVar9 != '\0') goto LAB_040a1fdb;
LAB_040a2127:
          if (*(System_Collections_Generic_List_bool__o **)(lVar15 + 0xb0) ==
              (System_Collections_Generic_List_bool__o *)0x0) break;
          pIStack_40 = (Il2CppType *)0x40a2149;
          bVar9 = System_Collections_Generic_List<bool>__get_Item
                            (*(System_Collections_Generic_List_bool__o **)(lVar15 + 0xb0),iVar24,
                             MethodInfo_Boolean_get_Item);
          if ((char)bVar9 != '\0') {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              pIStack_40 = (Il2CppType *)0x40a215e;
              il2cpp_init_class();
            }
            pSVar4 = *(System_Collections_Generic_List_bool__o **)
                      (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x40);
            if (pSVar4 == (System_Collections_Generic_List_bool__o *)0x0) break;
            pIStack_40 = (Il2CppType *)0x40a2187;
            bVar9 = System_Collections_Generic_List<bool>__get_Item(pSVar4,iVar24,MethodInfo_Boolean_get_Item);
            if ((char)bVar9 == '\0') goto LAB_040a1c3a;
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            pIStack_40 = (Il2CppType *)0x40a21a0;
            il2cpp_init_class();
          }
          pSVar4 = *(System_Collections_Generic_List_bool__o **)
                    (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x50);
          if (pSVar4 == (System_Collections_Generic_List_bool__o *)0x0) break;
          pIStack_40 = (Il2CppType *)0x40a21c9;
          bVar9 = System_Collections_Generic_List<bool>__get_Item(pSVar4,iVar24,MethodInfo_Boolean_get_Item);
          if ((char)bVar9 == '\0') {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              pIStack_40 = (Il2CppType *)0x40a21e2;
              il2cpp_init_class();
            }
            pSVar4 = *(System_Collections_Generic_List_bool__o **)
                      (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x58);
            if (pSVar4 == (System_Collections_Generic_List_bool__o *)0x0) break;
            pIStack_40 = (Il2CppType *)0x40a2207;
            bVar9 = System_Collections_Generic_List<bool>__get_Item(pSVar4,iVar24,MethodInfo_Boolean_get_Item);
            if ((char)bVar9 == '\0') goto LAB_040a1e96;
          }
        }
        else {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            pIStack_40 = (Il2CppType *)0x40a1dbd;
            il2cpp_init_class();
          }
          pSVar4 = *(System_Collections_Generic_List_bool__o **)
                    (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb0);
          if (pSVar4 == (System_Collections_Generic_List_bool__o *)0x0) break;
          pIStack_40 = (Il2CppType *)0x40a1de9;
          bVar9 = System_Collections_Generic_List<bool>__get_Item(pSVar4,iVar24,MethodInfo_Boolean_get_Item);
          if ((char)bVar9 != '\0') {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              pIStack_40 = (Il2CppType *)0x40a1e02;
              il2cpp_init_class();
            }
            pSVar5 = *(System_Collections_Generic_List_int__o **)
                      (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb8);
            if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
              pIStack_40 = (Il2CppType *)0x40a1e2e;
              iVar11 = System_Collections_Generic_List<int>__get_Item(pSVar5,iVar24,MethodInfo_Int32_get_Item);
              pPVar6 = (__this->fields)._currentPMTarget;
              if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
                if (iVar11 != (pPVar6->fields).actorNumber) {
                  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                    pIStack_40 = (Il2CppType *)0x40a1e54;
                    il2cpp_init_class();
                  }
                  pSVar5 = *(System_Collections_Generic_List_int__o **)
                            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x30);
                  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
                  pIStack_40 = (Il2CppType *)0x40a1e7d;
                  iVar11 = System_Collections_Generic_List<int>__get_Item
                                     (pSVar5,iVar24,MethodInfo_Int32_get_Item);
                  pPVar6 = (__this->fields)._currentPMTarget;
                  if (pPVar6 == (Photon_Realtime_Player_o *)0x0) break;
                  if (iVar11 != (pPVar6->fields).actorNumber) goto LAB_040a1c3a;
                }
LAB_040a1e96:
                if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                  pIStack_40 = (Il2CppType *)0x40a1ea7;
                  il2cpp_init_class();
                }
                pSVar22 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x28);
                if (pSVar22 != (System_Collections_Generic_List_object__o *)0x0) {
                  pIStack_40 = (Il2CppType *)0x40a1ed3;
                  pSVar13 = (System_String_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      (pSVar22,iVar24,MethodInfo_String_get_Item);
                  pSVar3 = *(System_Collections_Generic_List_DateTime__o **)
                            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x48);
                  if (pSVar3 != (System_Collections_Generic_List_DateTime__o *)0x0) {
                    pIStack_40 = (Il2CppType *)0x40a1eff;
                    SVar14 = System_Collections_Generic_List<DateTime>__get_Item
                                       (pSVar3,iVar24,MethodInfo_DateTime_get_Item);
                    pSVar4 = *(System_Collections_Generic_List_bool__o **)
                              (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x50);
                    if (pSVar4 != (System_Collections_Generic_List_bool__o *)0x0) {
                      pIStack_40 = (Il2CppType *)0x40a1f2b;
                      uVar10 = System_Collections_Generic_List<bool>__get_Item
                                         (pSVar4,iVar24,MethodInfo_Boolean_get_Item);
                      pIStack_40 = (Il2CppType *)0x40a1f3b;
                      pSVar13 = GameManagers_ChatManager__GetFormattedMessage
                                          (pSVar13,SVar14,uVar10 & 0xff,(MethodInfo *)0x0);
                      lVar15 = MethodInfo_Void_Add;
                      if (local_38 != (System_Collections_Generic_List_object__o *)0x0) {
                        piVar1 = &(local_38->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar19 = (local_38->fields)._items;
                        if (pSVar19 != (System_Object_array *)0x0) {
                          uVar10 = (local_38->fields)._size;
                          if (uVar10 < (uint)pSVar19->max_length) {
LAB_040a2093:
                            (local_38->fields)._size = uVar10 + 1;
                            goto LAB_040a2099;
                          }
LAB_040a20f0:
                          method_00 = *(MethodInfo_35A7350 **)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                          pSVar22 = local_38;
                          goto LAB_040a1c32;
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
LAB_040a1c3a:
        iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      else {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          pIStack_40 = (Il2CppType *)0x40a1cbc;
          il2cpp_init_class();
        }
        pSVar22 = *(System_Collections_Generic_List_object__o **)
                   (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x28);
        if (pSVar22 == (System_Collections_Generic_List_object__o *)0x0) break;
        pIStack_40 = (Il2CppType *)0x40a1ce5;
        pSVar13 = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item(pSVar22,iVar24,MethodInfo_String_get_Item);
        pSVar3 = *(System_Collections_Generic_List_DateTime__o **)
                  (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x48);
        if (pSVar3 == (System_Collections_Generic_List_DateTime__o *)0x0) break;
        pIStack_40 = (Il2CppType *)0x40a1d11;
        SVar14 = System_Collections_Generic_List<DateTime>__get_Item(pSVar3,iVar24,MethodInfo_DateTime_get_Item);
        pSVar4 = *(System_Collections_Generic_List_bool__o **)
                  (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x50);
        if (pSVar4 == (System_Collections_Generic_List_bool__o *)0x0) break;
        pIStack_40 = (Il2CppType *)0x40a1d3d;
        uVar10 = System_Collections_Generic_List<bool>__get_Item(pSVar4,iVar24,MethodInfo_Boolean_get_Item);
        pIStack_40 = (Il2CppType *)0x40a1d4d;
        pSVar13 = GameManagers_ChatManager__GetFormattedMessage
                            (pSVar13,SVar14,uVar10 & 0xff,(MethodInfo *)0x0);
        lVar15 = MethodInfo_Void_Add;
        if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar19 = (__this_02->fields)._items;
        if (pSVar19 == (System_Object_array *)0x0) break;
        uVar10 = (__this_02->fields)._size;
        if ((uint)pSVar19->max_length <= uVar10) {
          method_00 = *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
          pSVar22 = __this_02;
LAB_040a1c32:
          pIStack_40 = (Il2CppType *)0x40a1c3a;
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar22,(Il2CppObject *)pSVar13,method_00);
          goto LAB_040a1c3a;
        }
        (__this_02->fields)._size = uVar10 + 1;
LAB_040a2099:
        pSVar19->m_Items[(int)uVar10] = (Il2CppObject *)pSVar13;
        pIStack_40 = (Il2CppType *)0x40a20ae;
        il2cpp_runtime_glue(pSVar19->m_Items + (int)uVar10,pSVar13);
        iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      iVar24 = iVar24 + 1;
      if (iVar2 == 0) goto LAB_040a20c2;
LAB_040a1c4e:
      lVar15 = *(long *)(TypeInfo_ChatManager + 0xb8);
      lVar18 = *(long *)(lVar15 + 0x28);
      if (lVar18 == 0) break;
    } while( true );
  }
LAB_040a2248:
                    /* WARNING: Subroutine does not return */
  pIStack_40 = (Il2CppType *)&UNK_040a224d;
  il2cpp_raise_exception();
LAB_040a2652:
  __this_03 = (TMPro_TMP_InputField_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar23,iVar24,MethodInfo_TMP_InputField_get_Item);
  if (__this_03 == (TMPro_TMP_InputField_o *)0x0) {
LAB_040a27b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = (local_50->fields)._size;
  pUVar16 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
  iVar21 = (int)uVar26 + iVar24;
  bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
  if (iVar21 < iVar2) {
    pSVar13 = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item(local_50,iVar21,MethodInfo_String_get_Item);
    if ((char)bVar9 == '\0') {
      pUVar16 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
      UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
      uVar10 = 1;
    }
    bVar9 = System_String__op_Inequality
                      (*(System_String_o **)&(__this_03->fields).m_SelectionColor.fields.a,pSVar13,
                       (MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      TMPro_TMP_InputField__set_text(__this_03,pSVar13,(MethodInfo *)0x0);
      uVar10 = 1;
    }
    pUVar17 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
    iVar11 = UnityEngine_Transform__GetSiblingIndex(pUVar17,(MethodInfo *)0x0);
    pMVar20 = extraout_RDX_08;
    if (iVar24 != iVar11) {
      pUVar17 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
      UnityEngine_Transform__SetSiblingIndex(pUVar17,iVar24,(MethodInfo *)0x0);
      pMVar20 = extraout_RDX_06;
LAB_040a262d:
      uVar10 = 1;
    }
  }
  else {
    pMVar20 = extraout_RDX_07;
    if ((char)bVar9 != '\0') {
      pUVar16 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
        pMVar20 = extraout_RDX_09;
        goto LAB_040a262d;
      }
      goto LAB_040a27b4;
    }
  }
  iVar24 = iVar24 + 1;
  pSVar23 = (__this->fields)._linesPool;
  if (pSVar23 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a27b4;
  if ((pSVar23->fields)._size <= iVar24) {
LAB_040a2789:
    UI_ChatPanel__UpdateBackgroundVisibility(__this,1,pMVar20);
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)&(__this->fields)._requestCanvasUpdate = 1;
    }
    return;
  }
  goto LAB_040a2652;
}


// UI.ChatPanel$$UpdateVisibleMessages
// il2cpp: void UI_ChatPanel__UpdateVisibleMessages (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a2860

void UI_ChatPanel__UpdateVisibleMessages(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatScrollRect_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar5;
  uint uVar6;
  int32_t iVar7;
  TMPro_TMP_InputField_o *__this_02;
  UnityEngine_GameObject_o *pUVar8;
  System_String_o *b;
  UnityEngine_Transform_o *pUVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  uint uVar11;
  int iVar12;
  System_Collections_Generic_List_TMP_InputField__o *pSVar13;
  int iVar14;
  float fVar15;
  float value;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  ulong uVar16;
  Il2CppObject *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Component_o *pUStack_58;
  System_Collections_Generic_List_string__o *pSStack_50;
  undefined1 auStack_48 [16];
  UnityEngine_Component_o *pUStack_38;
  
  pSVar4 = (__this->fields)._allMessages;
  if (DAT_057045d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d1 = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Component_o *)0x0;
  if (DAT_057045d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057045d0 = '\x01';
  }
  pSVar13 = (__this->fields)._linesPool;
  if ((pSVar13 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) ||
     (pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_040a27b4;
  iVar14 = (pSVar4->fields)._size;
  if (iVar14 == 0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)pSVar13,MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    pUStack_58 = pUStack_38;
    pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIStack_60 = (Il2CppType *)auStack_48._8_8_;
    while (__this_00.fields._index = in_stack_ffffffffffffff80,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78
          , __this_00.fields._version = in_stack_ffffffffffffff84,
          __this_00.fields._current = in_stack_ffffffffffffff88,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&pSStack_68), (char)bVar5 != '\0') {
      if (pUStack_58 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar8 = UnityEngine_Component__get_gameObject(pUStack_58,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
    }
    __this_01.fields._index = in_stack_ffffffffffffff80;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_01.fields._version = in_stack_ffffffffffffff84;
    __this_01.fields._current = in_stack_ffffffffffffff88;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&pSStack_68);
    pUVar2 = (__this->fields)._scrollRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_03;
    if ((char)bVar5 != '\0') {
      pUVar2 = (__this->fields)._scrollRect;
      if (pUVar2 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
      pUVar3 = (pUVar2->fields).m_HorizontalScrollbar;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
      pMVar10 = extraout_RDX_04;
      if ((char)bVar5 != '\0') {
        pUVar2 = (__this->fields)._scrollRect;
        if ((pUVar2 == (UI_ChatScrollRect_o *)0x0) ||
           (pUVar3 = (pUVar2->fields).m_HorizontalScrollbar,
           pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
        UnityEngine_UI_Scrollbar__set_size(pUVar3,1.0,(MethodInfo *)0x0);
        pMVar10 = extraout_RDX_05;
      }
    }
    UI_ChatPanel__UpdateBackgroundVisibility(__this,0,pMVar10);
    return;
  }
  iVar1 = (pSVar13->fields)._size;
  pUVar2 = (__this->fields)._scrollRect;
  if (pUVar2 == (UI_ChatScrollRect_o *)0x0) {
    fVar15 = 0.0;
    iVar12 = *(int *)(TypeInfo_Object + 0xe4);
    pUVar2 = (UI_ChatScrollRect_o *)0x0;
  }
  else {
    fVar15 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                       ((UnityEngine_UI_ScrollRect_o *)pUVar2,(MethodInfo *)0x0);
    iVar14 = (pSVar4->fields)._size;
    pUVar2 = (__this->fields)._scrollRect;
    iVar12 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar12 == 0) {
    il2cpp_init_class();
  }
  uVar16 = 0;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar2 = (__this->fields)._scrollRect;
    if (pUVar2 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
    pUVar3 = (pUVar2->fields).m_HorizontalScrollbar;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_00;
    if ((char)bVar5 != '\0') {
      pUVar2 = (__this->fields)._scrollRect;
      if ((pUVar2 == (UI_ChatScrollRect_o *)0x0) ||
         (pUVar3 = (pUVar2->fields).m_HorizontalScrollbar,
         pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
      value = 1.0;
      if ((float)iVar1 / (float)iVar14 <= 1.0) {
        value = (float)iVar1 / (float)iVar14;
      }
      UnityEngine_UI_Scrollbar__set_size(pUVar3,value,(MethodInfo *)0x0);
      pMVar10 = extraout_RDX_01;
    }
  }
  uVar11 = iVar14 - iVar1;
  pSStack_50 = pSVar4;
  if (uVar11 != 0 && iVar1 <= iVar14) {
    uVar6 = uVar11;
    if (0.0 < fVar15) {
      fVar15 = 1.0 - fVar15;
      if (DAT_056fdee5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee5 = '\x01';
      }
      fVar15 = fVar15 * (float)(int)uVar11;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar15 = floorf(fVar15);
      uVar6 = (uint)fVar15;
      pMVar10 = extraout_RDX_02;
      if ((int)uVar6 < 0) goto LAB_040a25f0;
      if ((int)uVar11 <= (int)uVar6) {
        uVar6 = uVar11;
      }
    }
    uVar16 = (ulong)uVar6;
  }
LAB_040a25f0:
  pSVar13 = (__this->fields)._linesPool;
  if (pSVar13 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
    uVar11 = 0;
    iVar14 = 0;
    if (0 < (pSVar13->fields)._size) {
      do {
        __this_02 = (TMPro_TMP_InputField_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar13,iVar14,
                               MethodInfo_TMP_InputField_get_Item);
        if (__this_02 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a27b4;
        iVar1 = (pSStack_50->fields)._size;
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
        iVar12 = (int)uVar16 + iVar14;
        bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
        if (iVar12 < iVar1) {
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSStack_50,iVar12,MethodInfo_String_get_Item
                        );
          if ((char)bVar5 == '\0') {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
            UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
            uVar11 = 1;
          }
          bVar5 = System_String__op_Inequality
                            (*(System_String_o **)&(__this_02->fields).m_SelectionColor.fields.a,b,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            TMPro_TMP_InputField__set_text(__this_02,b,(MethodInfo *)0x0);
            uVar11 = 1;
          }
          pUVar9 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
          iVar7 = UnityEngine_Transform__GetSiblingIndex(pUVar9,(MethodInfo *)0x0);
          pMVar10 = extraout_RDX_08;
          if (iVar14 != iVar7) {
            pUVar9 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
            UnityEngine_Transform__SetSiblingIndex(pUVar9,iVar14,(MethodInfo *)0x0);
            pMVar10 = extraout_RDX_06;
LAB_040a262d:
            uVar11 = 1;
          }
        }
        else {
          pMVar10 = extraout_RDX_07;
          if ((char)bVar5 != '\0') {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
              pMVar10 = extraout_RDX_09;
              goto LAB_040a262d;
            }
            goto LAB_040a27b4;
          }
        }
        iVar14 = iVar14 + 1;
        pSVar13 = (__this->fields)._linesPool;
        if (pSVar13 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a27b4;
      } while (iVar14 < (pSVar13->fields)._size);
    }
    UI_ChatPanel__UpdateBackgroundVisibility(__this,1,pMVar10);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)&(__this->fields)._requestCanvasUpdate = 1;
    }
    return;
  }
LAB_040a27b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$GetEffectivePoolSize
// il2cpp: int32_t UI_ChatPanel__GetEffectivePoolSize (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a2870

int32_t UI_ChatPanel__GetEffectivePoolSize(UI_ChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TMP_InputField__o *pSVar1;
  
  if (DAT_057045d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057045d0 = '\x01';
  }
  pSVar1 = (__this->fields)._linesPool;
  if (pSVar1 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$UpdateVisibleMessages
// il2cpp: void UI_ChatPanel__UpdateVisibleMessages (UI_ChatPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x40a2250

void UI_ChatPanel__UpdateVisibleMessages
               (UI_ChatPanel_o *__this,System_Collections_Generic_List_string__o *lines,
               MethodInfo *method)

{
  int iVar1;
  UI_ChatScrollRect_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar4;
  uint uVar5;
  int32_t iVar6;
  TMPro_TMP_InputField_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  System_String_o *b;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  uint uVar10;
  int iVar11;
  System_Collections_Generic_List_TMP_InputField__o *pSVar12;
  int iVar13;
  float fVar14;
  float value;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  Il2CppObject *in_stack_ffffffffffffff88;
  ulong uVar15;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Component_o *pUStack_58;
  System_Collections_Generic_List_string__o *pSStack_50;
  undefined1 auStack_48 [16];
  UnityEngine_Component_o *pUStack_38;
  
  if (DAT_057045d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d1 = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Component_o *)0x0;
  if (DAT_057045d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057045d0 = '\x01';
  }
  pSVar12 = (__this->fields)._linesPool;
  if ((pSVar12 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) ||
     (lines == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_040a27b4;
  iVar13 = (lines->fields)._size;
  if (iVar13 == 0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)pSVar12,MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    pUStack_58 = pUStack_38;
    pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIStack_60 = (Il2CppType *)auStack_48._8_8_;
    while (__this_00.fields._index = in_stack_ffffffffffffff80,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78
          , __this_00.fields._version = in_stack_ffffffffffffff84,
          __this_00.fields._current = in_stack_ffffffffffffff88,
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&pSStack_68), (char)bVar4 != '\0') {
      if (pUStack_58 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = UnityEngine_Component__get_gameObject(pUStack_58,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
    }
    __this_01.fields._index = in_stack_ffffffffffffff80;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_01.fields._version = in_stack_ffffffffffffff84;
    __this_01.fields._current = in_stack_ffffffffffffff88;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&pSStack_68);
    pUVar2 = (__this->fields)._scrollRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    pMVar9 = extraout_RDX_03;
    if ((char)bVar4 != '\0') {
      pUVar2 = (__this->fields)._scrollRect;
      if (pUVar2 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
      pUVar3 = (pUVar2->fields).m_HorizontalScrollbar;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
      pMVar9 = extraout_RDX_04;
      if ((char)bVar4 != '\0') {
        pUVar2 = (__this->fields)._scrollRect;
        if ((pUVar2 == (UI_ChatScrollRect_o *)0x0) ||
           (pUVar3 = (pUVar2->fields).m_HorizontalScrollbar,
           pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
        UnityEngine_UI_Scrollbar__set_size(pUVar3,1.0,(MethodInfo *)0x0);
        pMVar9 = extraout_RDX_05;
      }
    }
    UI_ChatPanel__UpdateBackgroundVisibility(__this,0,pMVar9);
    return;
  }
  iVar1 = (pSVar12->fields)._size;
  pUVar2 = (__this->fields)._scrollRect;
  if (pUVar2 == (UI_ChatScrollRect_o *)0x0) {
    fVar14 = 0.0;
    iVar11 = *(int *)(TypeInfo_Object + 0xe4);
    pUVar2 = (UI_ChatScrollRect_o *)0x0;
  }
  else {
    fVar14 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                       ((UnityEngine_UI_ScrollRect_o *)pUVar2,(MethodInfo *)0x0);
    iVar13 = (lines->fields)._size;
    pUVar2 = (__this->fields)._scrollRect;
    iVar11 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar11 == 0) {
    il2cpp_init_class();
  }
  uVar15 = 0;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  pMVar9 = extraout_RDX;
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields)._scrollRect;
    if (pUVar2 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
    pUVar3 = (pUVar2->fields).m_HorizontalScrollbar;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    pMVar9 = extraout_RDX_00;
    if ((char)bVar4 != '\0') {
      pUVar2 = (__this->fields)._scrollRect;
      if ((pUVar2 == (UI_ChatScrollRect_o *)0x0) ||
         (pUVar3 = (pUVar2->fields).m_HorizontalScrollbar,
         pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
      value = 1.0;
      if ((float)iVar1 / (float)iVar13 <= 1.0) {
        value = (float)iVar1 / (float)iVar13;
      }
      UnityEngine_UI_Scrollbar__set_size(pUVar3,value,(MethodInfo *)0x0);
      pMVar9 = extraout_RDX_01;
    }
  }
  uVar10 = iVar13 - iVar1;
  pSStack_50 = lines;
  if (uVar10 != 0 && iVar1 <= iVar13) {
    uVar5 = uVar10;
    if (0.0 < fVar14) {
      fVar14 = 1.0 - fVar14;
      if (DAT_056fdee5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee5 = '\x01';
      }
      fVar14 = fVar14 * (float)(int)uVar10;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar14 = floorf(fVar14);
      uVar5 = (uint)fVar14;
      pMVar9 = extraout_RDX_02;
      if ((int)uVar5 < 0) goto LAB_040a25f0;
      if ((int)uVar10 <= (int)uVar5) {
        uVar5 = uVar10;
      }
    }
    uVar15 = (ulong)uVar5;
  }
LAB_040a25f0:
  pSVar12 = (__this->fields)._linesPool;
  if (pSVar12 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
    uVar10 = 0;
    iVar13 = 0;
    if (0 < (pSVar12->fields)._size) {
      do {
        __this_02 = (TMPro_TMP_InputField_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar12,iVar13,
                               MethodInfo_TMP_InputField_get_Item);
        if (__this_02 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a27b4;
        iVar1 = (pSStack_50->fields)._size;
        pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
        iVar11 = (int)uVar15 + iVar13;
        bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
        if (iVar11 < iVar1) {
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSStack_50,iVar11,MethodInfo_String_get_Item
                        );
          if ((char)bVar4 == '\0') {
            pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
            UnityEngine_GameObject__SetActive(pUVar7,1,(MethodInfo *)0x0);
            uVar10 = 1;
          }
          bVar4 = System_String__op_Inequality
                            (*(System_String_o **)&(__this_02->fields).m_SelectionColor.fields.a,b,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            TMPro_TMP_InputField__set_text(__this_02,b,(MethodInfo *)0x0);
            uVar10 = 1;
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
          iVar6 = UnityEngine_Transform__GetSiblingIndex(pUVar8,(MethodInfo *)0x0);
          pMVar9 = extraout_RDX_08;
          if (iVar13 != iVar6) {
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
            UnityEngine_Transform__SetSiblingIndex(pUVar8,iVar13,(MethodInfo *)0x0);
            pMVar9 = extraout_RDX_06;
LAB_040a262d:
            uVar10 = 1;
          }
        }
        else {
          pMVar9 = extraout_RDX_07;
          if ((char)bVar4 != '\0') {
            pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
              pMVar9 = extraout_RDX_09;
              goto LAB_040a262d;
            }
            goto LAB_040a27b4;
          }
        }
        iVar13 = iVar13 + 1;
        pSVar12 = (__this->fields)._linesPool;
        if (pSVar12 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a27b4;
      } while (iVar13 < (pSVar12->fields)._size);
    }
    UI_ChatPanel__UpdateBackgroundVisibility(__this,1,pMVar9);
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)&(__this->fields)._requestCanvasUpdate = 1;
    }
    return;
  }
LAB_040a27b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$UpdateBackgroundVisibility
// il2cpp: void UI_ChatPanel__UpdateBackgroundVisibility (UI_ChatPanel_o* __this, bool hasMessages, const MethodInfo* method);
// 0x40a28b0

void UI_ChatPanel__UpdateBackgroundVisibility
               (UI_ChatPanel_o *__this,bool_conflict hasMessages,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  long lVar1;
  Utility_Color255_o *__this_01;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  code *vtable_dispatch;
  Il2CppMethodPointer pIVar3;
  UnityEngine_Color_Fields UVar4;
  
  if (DAT_057045d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_057045d2 = '\x01';
  }
  __this_00 = (__this->fields)._panel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((char)hasMessages == '\0') {
      if (x != (UnityEngine_Object_o *)0x0) {
        vtable_dispatch = *(code **)&x->klass[1]._2.naturalAligment;
        pIVar3 = x->klass[1].vtable._0_Equals.methodPtr;
        UVar4 = (UnityEngine_Color_Fields)ZEXT816(0);
LAB_040a29b5:
        (*vtable_dispatch)(UVar4._0_8_,UVar4._8_8_,x,pIVar3);
        return;
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x188), lVar1 != 0)) &&
         (__this_01 = *(Utility_Color255_o **)(lVar1 + 0x18), __this_01 != (Utility_Color255_o *)0x0
         )) {
        UVar4 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
        if (x != (UnityEngine_Object_o *)0x0) {
          vtable_dispatch = *(code **)&x->klass[1]._2.naturalAligment;
          pIVar3 = x->klass[1].vtable._0_Equals.methodPtr;
          goto LAB_040a29b5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$Activate
// il2cpp: void UI_ChatPanel__Activate (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409da00

void UI_ChatPanel__Activate(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  long lVar3;
  bool_conflict bVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int value;
  
  if (DAT_057045d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d3 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      if ((char)(__this->fields)._chatHidden != '\0') {
        UI_ChatPanel__SetChatHiddenState(__this,0,1,in_RCX);
      }
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        (*(pTVar2->klass->vtable)._38_Select.methodPtr)();
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__ActivateInputField(pTVar2,(MethodInfo *)0x0);
          UI_ChatPanel__UpdatePlaceholderVisibility(__this,1,method_00);
          if (0 < *(int *)&(__this->fields)._cachedRectTransforms) {
            pTVar2 = (__this->fields)._inputField;
            if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409dbb8;
            bVar4 = System_String__IsNullOrEmpty
                              (*(System_String_o **)&(pTVar2->fields).m_SelectionColor.fields.a,
                               (MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              pTVar2 = (__this->fields)._inputField;
              if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
                 (lVar3 = *(long *)&(pTVar2->fields).m_SelectionColor.fields.a, lVar3 == 0))
              goto LAB_0409dbb8;
              iVar1 = *(int *)&(__this->fields)._cachedRectTransforms;
              value = *(int *)(lVar3 + 0x10);
              if (iVar1 <= value) {
                value = iVar1;
              }
              if (iVar1 < 0) {
                value = 0;
              }
              TMPro_TMP_InputField__set_caretPosition(pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (__this->fields)._inputField;
              if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409dbb8;
              TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (__this->fields)._inputField;
              if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_0409dbb8;
              TMPro_TMP_InputField__set_selectionFocusPosition(pTVar2,value,(MethodInfo *)0x0);
              *(undefined4 *)&(__this->fields)._cachedRectTransforms = 0;
            }
          }
          pTVar2 = (__this->fields)._inputField;
          if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
            bVar4 = System_String__IsNullOrEmpty
                              (*(System_String_o **)&(pTVar2->fields).m_SelectionColor.fields.a,
                               (MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return;
            }
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__ForceSuggestionRefresh((MethodInfo *)0x0);
            pTVar2 = (__this->fields)._inputField;
            if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
              GameManagers_ChatManager__HandleTyping
                        (*(System_String_o **)&(pTVar2->fields).m_SelectionColor.fields.a,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
LAB_0409dbb8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.ChatPanel$$IsInputActive
// il2cpp: bool UI_ChatPanel__IsInputActive (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x409d980

bool_conflict UI_ChatPanel__IsInputActive(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar3 = (uint)(*(char *)&(pTVar1->fields).m_Mesh != '\0');
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// UI.ChatPanel$$OnEndEdit
// il2cpp: void UI_ChatPanel__OnEndEdit (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x40a2ae0

void UI_ChatPanel__OnEndEdit(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_GameObject_o *__this_00;
  long lVar1;
  Settings_KeybindSetting_o *__this_01;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Vector3_o UVar3;
  
  if (DAT_057045d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_057045d5 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) != '\0') {
    return;
  }
  x = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  UI_ChatPanel__UpdatePlaceholderVisibility(__this,0,method_00);
  method_02 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
LAB_040a2b96:
    UI_ChatPanel__SubmitProcessedInput(__this,method_02);
    return;
  }
  method_02 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') goto LAB_040a2b96;
  UVar3 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  bVar2 = UI_ChatPanel__IsMouseOverAnyChatElement
                    (__this,(UnityEngine_Vector2_o)UVar3.fields._0_8_,method_02);
  if ((char)bVar2 == '\0') {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      __this_00 = (__this->fields)._emojiPanel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a2ca2;
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        rect = UI_ChatPanel__GetCachedRectTransform(__this,(__this->fields)._emojiPanel,method_01);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                          (rect,(UnityEngine_Vector2_o)UVar3.fields._0_8_,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') goto LAB_040a2c60;
      }
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
  }
LAB_040a2c60:
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) &&
     (__this_01 = *(Settings_KeybindSetting_o **)(lVar1 + 0x88),
     __this_01 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__ContainsEnter(__this_01,(MethodInfo *)0x0);
    *(char *)&(__this->fields).IgnoreNextActivation = (char)bVar2;
    return;
  }
LAB_040a2ca2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$SubmitProcessedInput
// il2cpp: void UI_ChatPanel__SubmitProcessedInput (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a0a50

void UI_ChatPanel__SubmitProcessedInput(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Photon_Realtime_Player_o *pPVar2;
  long lVar3;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Il2CppObject *arg0;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UI_ChatPanel_o *__this_01;
  int32_t local_2c;
  
  __this_01 = __this;
  if (DAT_057045d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"PUBLIC");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"PM_{0}");
    __this_01 = (UI_ChatPanel_o *)&"";
    il2cpp_init_method_metadata();
    DAT_057045d6 = '\x01';
    in_RDX = extraout_RDX;
  }
  pTVar1 = (__this->fields)._inputField;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    pSVar5 = UI_ChatPanel__ProcessEmojiCodes
                       (__this_01,*(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a,
                        in_RDX);
    bVar4 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
    }
    else {
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
    }
    if ((char)bVar4 == '\0') {
      if (pSVar5 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar5,"/",(MethodInfo *)0x0);
        if ((((char)bVar4 == '\0') && ((char)(__this->fields)._inPMMode != '\0')) &&
           (pPVar2 = (__this->fields)._currentPMTarget, pPVar2 != (Photon_Realtime_Player_o *)0x0))
        {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__SendPrivateMessage(pPVar2,pSVar5,(MethodInfo *)0x0);
          pPVar2 = (__this->fields)._currentPMTarget;
          if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto LAB_040a0cbb;
          local_2c = (pPVar2->fields).actorNumber;
          arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
          pSVar5 = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__HandleInput(pSVar5,(MethodInfo *)0x0);
          pSVar5 = "PUBLIC";
        }
        GameManagers_ChatManager__ClearConversation(pSVar5,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__set_text(pTVar1,"",(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            TMPro_TMP_InputField__DeactivateInputField(pTVar1,0,(MethodInfo *)0x0);
            UI_ChatPanel__RefreshPoolSize(__this,method_00);
            UI_ChatPanel__ValidatePMState(__this,method_00);
            UI_ChatPanel__RestorePMPartners(__this,method_00);
            UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
            if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
               (__this_00 = *(Settings_KeybindSetting_o **)(lVar3 + 0x88),
               __this_00 != (Settings_KeybindSetting_o *)0x0)) {
              bVar4 = Settings_KeybindSetting__ContainsEnter(__this_00,(MethodInfo *)0x0);
              *(char *)&(__this->fields).IgnoreNextActivation = (char)bVar4;
              return;
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)&(__this->fields).IgnoreNextActivation = 1;
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_text(pTVar1,"",(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__DeactivateInputField(pTVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_040a0cbb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$AddLine
// il2cpp: void UI_ChatPanel__AddLine (UI_ChatPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x40a31c0

void UI_ChatPanel__AddLine(UI_ChatPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  long lVar4;
  
  if (DAT_057045d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057045d7 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._allMessages;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = line;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)line,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      UI_ChatPanel__RefreshDisplayedMessages(__this,(MethodInfo *)line);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$ReplaceLastLine
// il2cpp: void UI_ChatPanel__ReplaceLastLine (UI_ChatPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x40a3260

void UI_ChatPanel__ReplaceLastLine(UI_ChatPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_TMP_InputField__o *__this_00;
  bool_conflict bVar2;
  TMPro_TMP_InputField_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  
  if (DAT_057045d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Item);
    DAT_057045d8 = '\x01';
  }
  __this_00 = (__this->fields)._linesPool;
  if (__this_00 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
    iVar1 = *(int *)((long)&(__this->fields)._notificationBadge + 4);
    __this_01 = (TMPro_TMP_InputField_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (iVar1 + (__this->fields)._currentLineIndex + -1) % iVar1,MethodInfo_TMP_InputField_get_Item);
    if (__this_01 != (TMPro_TMP_InputField_o *)0x0) {
      __this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        bVar2 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          TMPro_TMP_InputField__set_text(__this_01,line,(MethodInfo *)0x0);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          return;
        }
        UI_ChatPanel__AddLine(__this,line,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$AddLines
// il2cpp: void UI_ChatPanel__AddLines (UI_ChatPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x40a3320

void UI_ChatPanel__AddLines
               (UI_ChatPanel_o *__this,System_Collections_Generic_List_string__o *lines,
               MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  System_String_o *line;
  
  if (DAT_057045d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    DAT_057045d9 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  line = (System_String_o *)0x0;
  if (lines != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)lines,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    while( true ) {
      __this_00.fields._8_8_ = pIVar3;
      __this_00.fields._list = pSVar2;
      __this_00.fields._current = (Il2CppObject *)line;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') break;
      UI_ChatPanel__AddLine(__this,line,method_00);
    }
    __this_01.fields._8_8_ = pIVar3;
    __this_01.fields._list = pSVar2;
    __this_01.fields._current = (Il2CppObject *)line;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$InitializeCaret
// il2cpp: void UI_ChatPanel__InitializeCaret (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a3470

void UI_ChatPanel__InitializeCaret(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *local_28;
  
  if (DAT_057045da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_Graphic);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&" Input Caret");
    DAT_057045da = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  pTVar2 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') || ((char)(__this->fields)._caretInitialized != '\0')) {
    return;
  }
  pTVar2 = (__this->fields)._inputField;
  if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._inputField;
    if ((pTVar2 != (TMPro_TMP_InputField_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(pSVar5," Input Caret",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__Find(pUVar4,pSVar5,(MethodInfo *)0x0);
        ppUVar1 = &(__this->fields)._caret;
        (__this->fields)._caret = pUVar4;
        il2cpp_runtime_glue(ppUVar1);
        pUVar4 = (__this->fields)._caret;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        if (*ppUVar1 != (UnityEngine_Transform_o *)0x0) {
          bVar3 = UnityEngine_Component__TryGetComponent<object>
                            ((UnityEngine_Component_o *)*ppUVar1,&local_28,MethodInfo_Boolean_TryGetComponent_Graphic);
          if ((char)bVar3 == '\0') {
            if ((*ppUVar1 == (UnityEngine_Transform_o *)0x0) ||
               (__this_01 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0),
               __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040a3602;
            UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_Image_AddComponent_Image);
          }
          *(undefined1 *)&(__this->fields)._caretInitialized = 1;
          return;
        }
      }
    }
  }
LAB_040a3602:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$OnGUI
// il2cpp: void UI_ChatPanel__OnGUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a3610

void UI_ChatPanel__OnGUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *__this_00;
  System_Collections_Generic_List_Player__o *__this_01;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_Event_o *__this_02;
  UI_ChatPanel___c__DisplayClass121_0_o *__this_03;
  System_Collections_Generic_List_Player__o *pSVar5;
  UI_ChatPanel_o *match;
  Il2CppObject *pIVar6;
  Photon_Realtime_Player_o *target;
  int index;
  MethodInfo *method_00;
  byte bVar7;
  char cVar8;
  
  if (DAT_057045db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"/");
    DAT_057045db = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) != '\0') {
    return;
  }
  pTVar2 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_02 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_Event_o *)0x0) goto LAB_040a3a3b;
  iVar4 = UnityEngine_Event__get_type(__this_02,(MethodInfo *)0x0);
  if (iVar4 != 4) {
    return;
  }
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') goto LAB_040a372d;
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a3a3b;
    bVar7 = 1;
    if (*(char *)&(pTVar2->fields).m_Mesh == '\0') goto LAB_040a372d;
  }
  else {
LAB_040a372d:
    bVar7 = *(byte *)((long)&(__this->fields)._chatHidden + 2);
  }
  iVar4 = UnityEngine_Event__get_keyCode(__this_02,(MethodInfo *)0x0);
  if ((bVar7 & iVar4 == 9) == 0) {
    iVar4 = UnityEngine_Event__get_keyCode(__this_02,(MethodInfo *)0x0);
    if ((bVar7 & iVar4 == 0x1b) == 0) {
      return;
    }
    UnityEngine_Event__Use(__this_02,(MethodInfo *)0x0);
    if (DAT_057045d4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057045d4 = '\x01';
    }
    if (*(char *)((long)&(__this->fields)._notificationBadge + 1) != '\0') {
      return;
    }
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(pTVar2->fields).m_Mesh == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      return;
    }
    goto LAB_040a3a3b;
  }
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a3a3b;
      if (*(char *)&(pTVar2->fields).m_Mesh != '\0') {
        __this_00 = *(System_String_o **)&(pTVar2->fields).m_SelectionColor.fields.a;
        if (__this_00 == (System_String_o *)0x0) goto LAB_040a3a3b;
        bVar3 = System_String__StartsWith(__this_00,"/",(MethodInfo *)0x0);
        cVar8 = (char)bVar3;
        goto joined_r0x040a38c3;
      }
    }
    cVar8 = '\0';
  }
  else {
    cVar8 = '\0';
  }
joined_r0x040a38c3:
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a3a3b;
      if (*(char *)&(pTVar2->fields).m_Mesh != '\0') {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = GameManagers_ChatManager__HasActiveSuggestions((MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          UnityEngine_Event__Use(__this_02,(MethodInfo *)0x0);
          iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
          goto joined_r0x040a3a1a;
        }
      }
    }
  }
  if (cVar8 == '\0') {
    pSVar5 = (__this->fields)._pmPartners;
    if (pSVar5 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_040a3a3b;
    if (0 < (pSVar5->fields)._size) {
      UnityEngine_Event__Use(__this_02,(MethodInfo *)0x0);
      if (DAT_057045ed == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_ChatManager);
        il2cpp_init_method_metadata(&MethodInfo_Int32_FindIndex);
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
        il2cpp_init_method_metadata(&MethodInfo_Player_get_Item);
        il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
        il2cpp_init_method_metadata(&MethodInfo_Boolean__CycleToPMPartner_b__0);
        il2cpp_init_method_metadata(&MethodInfo_Boolean__CycleToPMPartner_b__1);
        il2cpp_init_method_metadata(&MethodInfo_Boolean__CycleToPMPartner_b__2);
        il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass121_0);
        DAT_057045ed = '\x01';
      }
      __this_03 = (UI_ChatPanel___c__DisplayClass121_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass121_0);
      UI_ChatPanel_<>c__DisplayClass121_0___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_03 != (UI_ChatPanel___c__DisplayClass121_0_o *)0x0) {
        (__this_03->fields).__4__this = __this;
        match = __this;
        il2cpp_runtime_glue(&__this_03->fields);
        pSVar5 = (__this->fields)._pmPartners;
        if (pSVar5 != (System_Collections_Generic_List_Player__o *)0x0) {
          if ((pSVar5->fields)._size == 0) {
            return;
          }
          pSVar5 = UI_ChatPanel__GetPmPartnersByRecency(__this,(MethodInfo *)match);
          if (pSVar5 != (System_Collections_Generic_List_Player__o *)0x0) {
            iVar1 = (pSVar5->fields)._size;
            if ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0) {
              (__this_03->fields).currentIndexInRecency = iVar1;
            }
            else {
              match = (UI_ChatPanel_o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
              System_Predicate<object>___ctor();
              iVar4 = System_Collections_Generic_List<object>__FindIndex
                                ((System_Collections_Generic_List_object__o *)pSVar5,
                                 (System_Predicate_T__o *)match,MethodInfo_Int32_FindIndex);
              (__this_03->fields).currentIndexInRecency = iVar4;
              if (iVar4 == -1) {
                __this_01 = (__this->fields)._pmPartners;
                match = (UI_ChatPanel_o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
                System_Predicate<object>___ctor();
                if (__this_01 == (System_Collections_Generic_List_Player__o *)0x0)
                goto LAB_040a3d42;
                iVar4 = System_Collections_Generic_List<object>__FindIndex
                                  ((System_Collections_Generic_List_object__o *)__this_01,
                                   (System_Predicate_T__o *)match,MethodInfo_Int32_FindIndex);
                (__this_03->fields).currentIndexInRecency = iVar4;
                if (iVar4 == -1) {
                  (__this_03->fields).currentIndexInRecency = iVar1;
                }
                else {
                  match = (UI_ChatPanel_o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
                  System_Predicate<object>___ctor();
                  iVar4 = System_Collections_Generic_List<object>__FindIndex
                                    ((System_Collections_Generic_List_object__o *)pSVar5,
                                     (System_Predicate_T__o *)match,MethodInfo_Int32_FindIndex);
                  if (iVar4 != -1) {
                    (__this_03->fields).currentIndexInRecency = iVar4;
                  }
                }
              }
            }
            if (0 < iVar1) {
              index = 0;
              do {
                pIVar6 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                    MethodInfo_Player_get_Item);
                if (pIVar6 == (Il2CppObject *)0x0) goto LAB_040a3d42;
                iVar4 = *(int32_t *)&pIVar6[1].monitor;
                if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                match = (UI_ChatPanel_o *)0x0;
                bVar3 = GameManagers_ChatManager__HasActivePMNotification(iVar4,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  if ((__this_03->fields).currentIndexInRecency != index) goto LAB_040a3ccf;
                  break;
                }
                index = index + 1;
              } while (iVar1 != index);
            }
            index = ((__this_03->fields).currentIndexInRecency + 1) % (iVar1 + 1);
LAB_040a3ccf:
            if (index != iVar1) {
              target = (Photon_Realtime_Player_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                  MethodInfo_Player_get_Item);
              UI_ChatPanel__EnterPMMode(__this,target,method_00);
              return;
            }
            UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)match);
            UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)match);
            return;
          }
        }
      }
LAB_040a3d42:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
LAB_040a3a3b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(char *)&(pTVar2->fields).m_Mesh != '\0') {
        UnityEngine_Event__Use(__this_02,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
joined_r0x040a3a1a:
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__HandleTabComplete((MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// UI.ChatPanel$$Update
// il2cpp: void UI_ChatPanel__Update (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a3d50

void UI_ChatPanel__Update(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  long lVar2;
  Settings_KeybindSetting_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  System_String_o *input;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *__this_02;
  MethodInfo *in_RCX;
  MethodInfo *pMVar5;
  UnityEngine_Object_o *x;
  bool bVar6;
  float fVar7;
  
  if (DAT_057045dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_057045dc = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
         (__this_00 = *(Settings_KeybindSetting_o **)(lVar2 + 0xa8),
         __this_00 != (Settings_KeybindSetting_o *)0x0)) {
        pMVar5 = (MethodInfo *)0x0;
        bVar4 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
        if (((char)bVar4 != '\0') &&
           (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0')) {
          bVar6 = (char)(__this->fields)._chatHidden == '\0';
          pMVar5 = (MethodInfo *)(ulong)bVar6;
          UI_ChatPanel__SetChatHiddenState(__this,(uint)bVar6,1,in_RCX);
        }
        if ((char)(__this->fields)._caretInitialized == '\0') {
          UI_ChatPanel__InitializeCaret(__this,pMVar5);
          return;
        }
        if (DAT_057045d4 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Object);
          DAT_057045d4 = '\x01';
        }
        if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
          pTVar1 = (__this->fields)._inputField;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (((char)bVar4 != '\0') &&
             ((__this->fields)._inputField == (TMPro_TMP_InputField_o *)0x0)) goto LAB_040a40f7;
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_02 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        x = (UnityEngine_Object_o *)0x0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (__this_02 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_040a40f7;
          x = (UnityEngine_Object_o *)(__this_02->fields).m_CurrentSelected;
        }
        if ((char)(__this->fields)._emojiPanelActive != '\0') {
          if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (**(int **)(TypeInfo_CursorManager + 0xb8) != 0) {
            if (DAT_057045f1 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Object);
              DAT_057045f1 = '\x01';
            }
            pUVar3 = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              *(undefined1 *)&(__this->fields)._emojiPanelActive = 0;
              __this_01 = (__this->fields)._emojiPanel;
              if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a40f7;
              UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
            }
          }
        }
        pUVar3 = (UnityEngine_Object_o *)(__this->fields)._currentSelectedObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,pUVar3,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          (__this->fields)._currentSelectedObject = (UnityEngine_GameObject_o *)x;
          il2cpp_runtime_glue();
        }
        fVar7 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
        if (0.2 <= fVar7 - (__this->fields)._lastTypeTime) {
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a40f7;
          input = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__HandleTyping(input,(MethodInfo *)0x0);
        }
        if ((char)(__this->fields)._requestCanvasUpdate != '\0') {
          *(undefined1 *)&(__this->fields)._requestCanvasUpdate = 0;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        }
        pMVar5 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
        if (((char)bVar4 != '\0') && (*(char *)((long)&(__this->fields)._chatHidden + 1) == '\0')) {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar5 = (MethodInfo *)0x0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (__this_02 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_040a40f7;
            pMVar5 = (MethodInfo *)0x0;
            bVar4 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject
                              (__this_02,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              *(undefined1 *)((long)&(__this->fields)._chatHidden + 2) = 0;
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
            }
          }
        }
        UI_ChatPanel__UpdateChatInteractionState(__this,pMVar5);
        return;
      }
LAB_040a40f7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.ChatPanel$$ToggleChatVisibility
// il2cpp: void UI_ChatPanel__ToggleChatVisibility (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a4100

void UI_ChatPanel__ToggleChatVisibility(UI_ChatPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) != '\0') {
    return;
  }
  UI_ChatPanel__SetChatHiddenState
            (__this,(uint)((char)(__this->fields)._chatHidden == '\0'),1,in_RCX);
  return;
}


// UI.ChatPanel$$SetChatHiddenState
// il2cpp: void UI_ChatPanel__SetChatHiddenState (UI_ChatPanel_o* __this, bool hidden, bool saveSetting, const MethodInfo* method);
// 0x409c340

void UI_ChatPanel__SetChatHiddenState
               (UI_ChatPanel_o *__this,bool_conflict hidden,bool_conflict saveSetting,
               MethodInfo *method)

{
  long lVar1;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_Object_o *x;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  long *plVar3;
  bool_conflict bVar4;
  uint uVar5;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *method_00;
  bool bVar7;
  
  if (DAT_057045dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057045dd = '\x01';
  }
  *(char *)&(__this->fields)._chatHidden = (char)hidden;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) &&
     (__this_00 = *(Settings_TypedSetting_bool__o **)(lVar1 + 0x180),
     __this_00 != (Settings_TypedSetting_bool__o *)0x0)) {
    Settings_TypedSetting<bool>__set_Value(__this_00,hidden & 0xff,MethodInfo_Void_set_Value);
    if ((char)(__this->fields)._chatHidden != '\0') {
      if (DAT_057045f1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_057045f1 = '\x01';
      }
      x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        *(undefined1 *)&(__this->fields)._emojiPanelActive = 0;
        pUVar6 = (__this->fields)._emojiPanel;
        if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409c5c4;
        UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
      }
    }
    pUVar6 = (__this->fields)._panel;
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive
                (pUVar6,(uint)((char)(__this->fields)._chatHidden == '\0'),(MethodInfo *)0x0);
    }
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0409c5c4;
      bVar7 = (char)(__this->fields)._chatHidden == '\0';
      method_00 = (MethodInfo *)(ulong)bVar7;
      UnityEngine_GameObject__SetActive(pUVar6,(uint)bVar7,(MethodInfo *)0x0);
      if ((char)(__this->fields)._chatHidden != '\0') {
        pTVar2 = (__this->fields)._inputField;
        if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method_00 = (MethodInfo *)0x0;
        TMPro_TMP_InputField__DeactivateInputField(pTVar2,0,(MethodInfo *)0x0);
        if ((char)(__this->fields)._chatHidden != '\0') {
          *(undefined1 *)&(__this->fields).IgnoreNextActivation = 0;
        }
      }
    }
    __this_01 = (__this->fields)._emojiButton;
    if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409c5c4;
      bVar7 = (char)(__this->fields)._chatHidden == '\0';
      method_00 = (MethodInfo *)(ulong)bVar7;
      UnityEngine_GameObject__SetActive(pUVar6,(uint)bVar7,(MethodInfo *)0x0);
    }
    __this_02 = (__this->fields)._placeholderCanvasGroup;
    if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
      if ((char)(__this->fields)._chatHidden == '\0') {
        uVar5 = UnityEngine_GameObject__get_activeSelf
                          ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
      }
      else {
        uVar5 = 0;
      }
      method_00 = (MethodInfo *)(ulong)(uVar5 & 0xff);
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)__this_02,uVar5 & 0xff,(MethodInfo *)0x0);
    }
    if ((char)(__this->fields)._chatHidden == '\0') {
      UI_ChatPanel__RefreshPoolSize(__this,method_00);
      UI_ChatPanel__ValidatePMState(__this,method_00);
      UI_ChatPanel__RestorePMPartners(__this,method_00);
      UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
      UI_ChatPanel__UpdateChatModeElements(__this,method_00);
    }
    if ((char)saveSetting == '\0') {
      return;
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      return;
    }
  }
LAB_0409c5c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$LateUpdate
// il2cpp: void UI_ChatPanel__LateUpdate (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a42b0

void UI_ChatPanel__LateUpdate(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  undefined1 uVar3;
  bool_conflict bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool bVar6;
  uint uVar5;
  
  if (DAT_057045de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045de = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) != '\0') {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  method_00 = extraout_RDX;
  if (DAT_057045d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_RDX_01;
    if ((char)bVar4 == '\0') goto LAB_040a438b;
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a4408;
    bVar6 = true;
    if (*(char *)&(pTVar1->fields).m_Mesh == '\0') goto LAB_040a438b;
  }
  else {
LAB_040a438b:
    bVar6 = *(char *)((long)&(__this->fields)._chatHidden + 2) != '\0';
  }
  method_01 = (MethodInfo *)(ulong)bVar6;
  UI_ChatPanel__UpdatePlaceholderVisibility(__this,(uint)bVar6,method_00);
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) {
LAB_040a4408:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pSVar2->fields)._size < 1) {
    uVar3 = 0;
    if (*(char *)&(__this->fields)._notificationBadge != '\0') goto LAB_040a43f5;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar5 = GameManagers_ChatManager__HasAnyActivePMNotification((MethodInfo *)0x0);
    uVar3 = (undefined1)uVar5;
    if ((uVar5 & 0xff) != (uint)*(byte *)&(__this->fields)._notificationBadge) {
LAB_040a43f5:
      *(undefined1 *)&(__this->fields)._notificationBadge = uVar3;
      UI_ChatPanel__UpdateChatModeElements(__this,method_01);
      return;
    }
  }
  return;
}


// UI.ChatPanel$$UpdatePlaceholderVisibility
// il2cpp: void UI_ChatPanel__UpdatePlaceholderVisibility (UI_ChatPanel_o* __this, bool isChatActive, const MethodInfo* method);
// 0x40a29d0

void UI_ChatPanel__UpdatePlaceholderVisibility
               (UI_ChatPanel_o *__this,bool_conflict isChatActive,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Collections_Generic_List_Player__o *pSVar2;
  bool_conflict bVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  float value;
  
  if (DAT_057045df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045df = '\x01';
  }
  pTVar4 = (__this->fields)._placeholderText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 != '\0') || (*(char *)((long)&(__this->fields)._notificationBadge + 1) != '\0'))
  {
    return;
  }
  pTVar1 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if ((char)isChatActive == '\0') {
LAB_040a2ab5:
    pTVar4 = (__this->fields)._placeholderText;
  }
  else {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a2ad5;
    bVar3 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a,
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto LAB_040a2ab5;
    pSVar2 = (__this->fields)._pmPartners;
    if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_040a2ad5;
    pTVar4 = (__this->fields)._placeholderText;
    if (0 < (pSVar2->fields)._size) {
      value = 1.0;
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040a2ad5;
      goto LAB_040a2ac4;
    }
  }
  value = 0.0;
  if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
LAB_040a2ac4:
    UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)pTVar4,value,(MethodInfo *)0x0);
    return;
  }
LAB_040a2ad5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$IsPointerOverChatUI
// il2cpp: bool UI_ChatPanel__IsPointerOverChatUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a4410

bool_conflict UI_ChatPanel__IsPointerOverChatUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  char cVar5;
  ulong uVar6;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar7;
  
  if (DAT_057045e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057045e0 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return 0;
  }
  UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class(UVar7.fields.x,UVar7.fields.z);
  }
  pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
LAB_040a4641:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar6 = 0;
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(pUVar4,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    bVar2 = UI_ChatPanel__IsMouseOverAnyChatElement
                      (__this,(UnityEngine_Vector2_o)UVar7.fields._0_8_,method_01);
    uVar6 = 1;
    if ((char)bVar2 == '\0') {
      x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar6 = 0;
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_00 = (__this->fields)._emojiPanel;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a4641;
        uVar6 = 0;
        bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          rect = UI_ChatPanel__GetCachedRectTransform(__this,(__this->fields)._emojiPanel,method_00)
          ;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect,(UnityEngine_Vector2_o)UVar7.fields._0_8_,(MethodInfo *)0x0);
          uVar6 = (ulong)uVar3;
        }
      }
    }
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
  bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  cVar5 = (char)uVar6;
  if ((char)bVar2 != '\0') {
    if (iVar1 != 0) {
      *(undefined1 *)((long)&(__this->fields)._chatHidden + 1) = 0;
      goto LAB_040a4625;
    }
    *(char *)((long)&(__this->fields)._chatHidden + 1) = cVar5;
    if (cVar5 == '\0') {
      *(undefined1 *)((long)&(__this->fields)._chatHidden + 2) = 0;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields).IgnoreNextActivation = 0;
      goto LAB_040a4625;
    }
  }
  if ((cVar5 != '\0') && (iVar1 == 0)) {
    *(undefined1 *)((long)&(__this->fields)._chatHidden + 2) = 1;
  }
LAB_040a4625:
  return (bool_conflict)
         CONCAT71((int7)(uVar6 >> 8),*(char *)((long)&(__this->fields)._chatHidden + 2) != '\0');
}


// UI.ChatPanel$$IsMouseOverAnyChatElement
// il2cpp: bool UI_ChatPanel__IsMouseOverAnyChatElement (UI_ChatPanel_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x40a2cb0

bool_conflict
UI_ChatPanel__IsMouseOverAnyChatElement
          (UI_ChatPanel_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  System_Collections_Generic_List_TMP_InputField__o *__this_00;
  UnityEngine_UI_Button_o *pUVar1;
  undefined1 auVar2 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool_conflict bVar6;
  undefined8 unaff_R14;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  auVar2._8_4_ = in_XMM0_Dc;
  auVar2._0_8_ = mousePosition.fields;
  auVar2._12_4_ = in_XMM0_Dd;
  uVar7 = auVar2._8_8_;
  if (DAT_057045e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057045e1 = '\x01';
  }
  pUVar5 = (__this->fields)._chatPanelRect;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                    (pUVar5,mousePosition,(MethodInfo *)0x0);
  bVar6 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if ((char)bVar3 == '\0') {
    pUVar5 = (__this->fields)._inputFieldRect;
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                      (pUVar5,mousePosition,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pUVar5 = (__this->fields)._contentRect;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                        (pUVar5,mousePosition,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pUVar5 = (__this->fields)._scrollbarRect;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pUVar5 = (__this->fields)._scrollbarRect;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (pUVar5,mousePosition,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return bVar6;
          }
        }
        __this_00 = (__this->fields)._linesPool;
        if (__this_00 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
LAB_040a2faf:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
        pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        do {
          do {
            __this_01.fields._index = (int)uVar7;
            __this_01.fields._version = (int)((ulong)uVar7 >> 0x20);
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)mousePosition.fields;
            __this_01.fields._current = (Il2CppObject *)pSVar8;
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
            if ((char)bVar3 == '\0') {
              __this_03.fields._index = (int)uVar7;
              __this_03.fields._version = (int)((ulong)uVar7 >> 0x20);
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)mousePosition.fields;
              __this_03.fields._current = (Il2CppObject *)pSVar8;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
              pUVar1 = (__this->fields)._emojiButton;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar3 != '\0') {
                pUVar1 = (__this->fields)._emojiButton;
                if (pUVar1 == (UnityEngine_UI_Button_o *)0x0) goto LAB_040a2faf;
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                pUVar5 = UI_ChatPanel__GetCachedRectTransform(__this,pUVar4,method_01);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                                  (pUVar5,mousePosition,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  return bVar6;
                }
              }
              return 0;
            }
            if ((UnityEngine_Component_o *)local_48.fields._current ==
                (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)local_48.fields._current,
                                (MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0)
          ;
          pUVar5 = UI_ChatPanel__GetCachedRectTransform(__this,pUVar4,method_00);
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (pUVar5,mousePosition,(MethodInfo *)0x0);
        } while ((char)bVar3 == '\0');
        __this_02.fields._index = (int)uVar7;
        __this_02.fields._version = (int)((ulong)uVar7 >> 0x20);
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)mousePosition.fields;
        __this_02.fields._current = (Il2CppObject *)pSVar8;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      }
    }
  }
  return bVar6;
}


// UI.ChatPanel$$UpdateChatInteractionState
// il2cpp: void UI_ChatPanel__UpdateChatInteractionState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a41c0

void UI_ChatPanel__UpdateChatInteractionState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_InputField_o *pTVar2;
  undefined1 uVar3;
  bool_conflict bVar4;
  
  if (DAT_057045e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_057045e2 = '\x01';
    if (DAT_057045d4 != '\0') goto LAB_040a41d9;
LAB_040a4200:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
    cVar1 = *(char *)((long)&(__this->fields)._notificationBadge + 1);
  }
  else {
    if (DAT_057045d4 == '\0') goto LAB_040a4200;
LAB_040a41d9:
    cVar1 = *(char *)((long)&(__this->fields)._notificationBadge + 1);
  }
  if (cVar1 == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar3 = 1;
      if (*(char *)&(pTVar2->fields).m_Mesh != '\0') goto LAB_040a4290;
    }
  }
  uVar3 = 1;
  if ((char)(__this->fields)._emojiPanelActive == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (**(int **)(TypeInfo_CursorManager + 0xb8) == 0) {
      return;
    }
    uVar3 = 0;
  }
LAB_040a4290:
  *(undefined1 *)((long)&(__this->fields)._chatHidden + 2) = uVar3;
  return;
}


// UI.ChatPanel$$CreateLine
// il2cpp: TMPro_TMP_InputField_o* UI_ChatPanel__CreateLine (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x409c960

TMPro_TMP_InputField_o *
UI_ChatPanel__CreateLine(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  System_RuntimeTypeHandle_o handle;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  System_Type_array *pSVar2;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  TMPro_TMP_InputField_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  TMPro_TextMeshProUGUI_o *textComponent;
  UnityEngine_RectTransform_o *pUVar8;
  UI_ChatPanel_ChatLineClickHandler_o *__this_03;
  undefined8 uVar9;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar10;
  
  if (DAT_057045e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_ChatPanel_ChatLineClickHandler_AddComponent_Chat);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_AddComponent_TMP_InputField);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIAnchors);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"ChatLine");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Text Area");
    DAT_057045e3 = '\x01';
    method = extraout_RDX;
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x148), lVar4 != 0)) {
    fontSize = *(int32_t *)(lVar4 + 0x14);
    pSVar1 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
    pSVar2 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pSVar2 == (System_Type_array *)0x0) goto LAB_0409cfe9;
    if (pSVar3 != (System_Type_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar4 == 0) goto LAB_0409cff3;
    }
    if ((int)pSVar2->max_length == 0) {
LAB_0409cfee:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2->m_Items[0] = pSVar3;
    il2cpp_runtime_glue(pSVar2->m_Items,pSVar3);
    __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_01,"ChatLine",pSVar2,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._panel;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar5,pUVar6,0,(MethodInfo *)0x0);
          __this_02 = (TMPro_TMP_InputField_o *)
                      UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_TMP_InputField_AddComponent_TMP_InputField);
          pSVar2 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
          pSVar3 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar2 != (System_Type_array *)0x0) {
            if (pSVar3 != (System_Type_o *)0x0) {
              lVar4 = il2cpp_runtime_glue(pSVar3,(((pSVar2->obj).klass)->_1).element_class);
              if (lVar4 == 0) {
LAB_0409cff3:
                uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar9,0);
              }
            }
            if ((int)pSVar2->max_length == 0) goto LAB_0409cfee;
            pSVar2->m_Items[0] = pSVar3;
            il2cpp_runtime_glue(pSVar2->m_Items,pSVar3);
            pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor(pUVar7,"Text Area",pSVar2,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent(pUVar5,pUVar6,0,(MethodInfo *)0x0);
                textComponent =
                     (TMPro_TextMeshProUGUI_o *)
                     UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                if (__this_02 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__set_textComponent
                            (__this_02,(TMPro_TMP_Text_o *)textComponent,(MethodInfo *)0x0);
                  pUVar8 = (UnityEngine_RectTransform_o *)
                           UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                  TMPro_TMP_InputField__set_textViewport(__this_02,pUVar8,(MethodInfo *)0x0);
                  *(undefined1 *)&(__this_02->fields).m_CaretBlinkRate = 1;
                  TMPro_TMP_InputField__set_richText(__this_02,1,(MethodInfo *)0x0);
                  *(undefined1 *)&(__this_02->fields).m_IsTextComponentUpdateRequired = 0;
                  *(undefined1 *)((long)&(__this_02->fields).m_IsTextComponentUpdateRequired + 2) =
                       0;
                  *(undefined1 *)&(__this_02->fields).m_DoubleClickDelay = 0;
                  TMPro_TMP_InputField__set_selectionStringAnchorPosition
                            (__this_02,0,(MethodInfo *)0x0);
                  TMPro_TMP_InputField__set_selectionStringFocusPosition
                            (__this_02,0,(MethodInfo *)0x0);
                  TMPro_TMP_InputField__set_shouldHideMobileInput(__this_02,1,(MethodInfo *)0x0);
                  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x148), lVar4 != 0)) &&
                     (textComponent != (TMPro_TextMeshProUGUI_o *)0x0)) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)textComponent,(float)*(int *)(lVar4 + 0x14),
                               (MethodInfo *)0x0);
                    if (__this_00 != (UI_ElementStyle_o *)0x0) {
                      pSVar1 = (__this_00->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UVar10 = UI_UIManager__GetThemeColor
                                         (pSVar1,"TextColor","Default","DefaultPanel",
                                          (MethodInfo *)0x0);
                      (*(textComponent->klass->vtable)._23_set_color.methodPtr)
                                (UVar10.fields._0_8_,UVar10.fields._8_8_,textComponent,
                                 (textComponent->klass->vtable)._23_set_color.method);
                      TMPro_TMP_Text__set_alignment
                                ((TMPro_TMP_Text_o *)textComponent,0x201,(MethodInfo *)0x0);
                      TMPro_TMP_Text__set_enableWordWrapping
                                ((TMPro_TMP_Text_o *)textComponent,1,(MethodInfo *)0x0);
                      TMPro_TMP_Text__set_richText
                                ((TMPro_TMP_Text_o *)textComponent,1,(MethodInfo *)0x0);
                      TMPro_TMP_Text__set_enableKerning
                                ((TMPro_TMP_Text_o *)textComponent,1,(MethodInfo *)0x0);
                      TMPro_TMP_Text__set_isTextObjectScaleStatic
                                ((TMPro_TMP_Text_o *)textComponent,0,(MethodInfo *)0x0);
                      __this_03 = (UI_ChatPanel_ChatLineClickHandler_o *)
                                  UnityEngine_GameObject__AddComponent<object>
                                            (__this_01,MethodInfo_ChatPanel_ChatLineClickHandler_AddComponent_Chat);
                      if (__this_03 != (UI_ChatPanel_ChatLineClickHandler_o *)0x0) {
                        UI_ChatPanel_ChatLineClickHandler__Initialize
                                  (__this_03,textComponent,(__this->fields)._inputField,__this,
                                   (MethodInfo *)0x0);
                        pUVar8 = (UnityEngine_RectTransform_o *)
                                 UnityEngine_GameObject__GetComponent<object>
                                           (__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
                        if (*(int *)(TypeInfo_UIAnchors + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchorMin
                                    (pUVar8,(UnityEngine_Vector2_o)
                                            **(UnityEngine_Vector2_Fields **)(TypeInfo_UIAnchors + 0xb8),
                                     (MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMax
                                    (pUVar8,(UnityEngine_Vector2_o)
                                            *(UnityEngine_Vector2_Fields *)
                                             (*(long *)(TypeInfo_UIAnchors + 0xb8) + 8),(MethodInfo *)0x0)
                          ;
                          UnityEngine_RectTransform__set_pivot
                                    (pUVar8,(UnityEngine_Vector2_o)
                                            *(UnityEngine_Vector2_Fields *)
                                             (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x38),
                                     (MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_sizeDelta
                                    (pUVar8,(UnityEngine_Vector2_o)0x41f0000000000000,
                                     (MethodInfo *)0x0);
                          pUVar8 = (UnityEngine_RectTransform_o *)
                                   UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform)
                          ;
                          if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar8,(UnityEngine_Vector2_o)
                                              *(UnityEngine_Vector2_Fields *)
                                               (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x18),
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar8,(UnityEngine_Vector2_o)
                                              *(UnityEngine_Vector2_Fields *)
                                               (*(long *)(TypeInfo_UIAnchors + 0xb8) + 0x10),
                                       (MethodInfo *)0x0);
                            if (DAT_056fe093 == '\0') {
                              il2cpp_init_method_metadata(&TypeInfo_Vector2);
                              DAT_056fe093 = '\x01';
                            }
                            UnityEngine_RectTransform__set_sizeDelta
                                      (pUVar8,(UnityEngine_Vector2_o)
                                              **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                                       ,(MethodInfo *)0x0);
                            if (DAT_056fe093 == '\0') {
                              il2cpp_init_method_metadata(&TypeInfo_Vector2);
                              DAT_056fe093 = '\x01';
                            }
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar8,(UnityEngine_Vector2_o)
                                              **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                                       ,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_offsetMax
                                      (pUVar8,(UnityEngine_Vector2_o)0xc1000000,(MethodInfo *)0x0);
                            TMPro_TMP_InputField__set_text(__this_02,text,(MethodInfo *)0x0);
                            return __this_02;
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
LAB_0409cfe9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$OnScroll
// il2cpp: void UI_ChatPanel__OnScroll (UI_ChatPanel_o* __this, UnityEngine_Vector2_o scrollPosition, const MethodInfo* method);
// 0x40a4650

void UI_ChatPanel__OnScroll
               (UI_ChatPanel_o *__this,UnityEngine_Vector2_o scrollPosition,MethodInfo *method)

{
  int iVar1;
  UI_ChatScrollRect_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar5;
  uint uVar6;
  int32_t iVar7;
  TMPro_TMP_InputField_o *__this_02;
  UnityEngine_GameObject_o *pUVar8;
  System_String_o *b;
  UnityEngine_Transform_o *pUVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  uint uVar11;
  int iVar12;
  System_Collections_Generic_List_TMP_InputField__o *pSVar13;
  int iVar14;
  float fVar15;
  float value;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  ulong uVar16;
  Il2CppObject *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Component_o *pUStack_58;
  System_Collections_Generic_List_string__o *pSStack_50;
  undefined1 auStack_48 [16];
  UnityEngine_Component_o *pUStack_38;
  
  pSVar4 = (__this->fields)._allMessages;
  if (DAT_057045d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d1 = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Component_o *)0x0;
  if (DAT_057045d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057045d0 = '\x01';
  }
  pSVar13 = (__this->fields)._linesPool;
  if ((pSVar13 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) ||
     (pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_040a27b4;
  iVar14 = (pSVar4->fields)._size;
  if (iVar14 == 0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)pSVar13,MethodInfo_List_1_T__Enumerator_TMPro_TMP_InputField__GetEn);
    pUStack_58 = pUStack_38;
    pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIStack_60 = (Il2CppType *)auStack_48._8_8_;
    while (__this_00.fields._index = in_stack_ffffffffffffff80,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78
          , __this_00.fields._version = in_stack_ffffffffffffff84,
          __this_00.fields._current = in_stack_ffffffffffffff88,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&pSStack_68), (char)bVar5 != '\0') {
      if (pUStack_58 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar8 = UnityEngine_Component__get_gameObject(pUStack_58,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
    }
    __this_01.fields._index = in_stack_ffffffffffffff80;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_01.fields._version = in_stack_ffffffffffffff84;
    __this_01.fields._current = in_stack_ffffffffffffff88;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&pSStack_68);
    pUVar2 = (__this->fields)._scrollRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_03;
    if ((char)bVar5 != '\0') {
      pUVar2 = (__this->fields)._scrollRect;
      if (pUVar2 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
      pUVar3 = (pUVar2->fields).m_HorizontalScrollbar;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
      pMVar10 = extraout_RDX_04;
      if ((char)bVar5 != '\0') {
        pUVar2 = (__this->fields)._scrollRect;
        if ((pUVar2 == (UI_ChatScrollRect_o *)0x0) ||
           (pUVar3 = (pUVar2->fields).m_HorizontalScrollbar,
           pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
        UnityEngine_UI_Scrollbar__set_size(pUVar3,1.0,(MethodInfo *)0x0);
        pMVar10 = extraout_RDX_05;
      }
    }
    UI_ChatPanel__UpdateBackgroundVisibility(__this,0,pMVar10);
    return;
  }
  iVar1 = (pSVar13->fields)._size;
  pUVar2 = (__this->fields)._scrollRect;
  if (pUVar2 == (UI_ChatScrollRect_o *)0x0) {
    fVar15 = 0.0;
    iVar12 = *(int *)(TypeInfo_Object + 0xe4);
    pUVar2 = (UI_ChatScrollRect_o *)0x0;
  }
  else {
    fVar15 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                       ((UnityEngine_UI_ScrollRect_o *)pUVar2,(MethodInfo *)0x0);
    iVar14 = (pSVar4->fields)._size;
    pUVar2 = (__this->fields)._scrollRect;
    iVar12 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar12 == 0) {
    il2cpp_init_class();
  }
  uVar16 = 0;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar2 = (__this->fields)._scrollRect;
    if (pUVar2 == (UI_ChatScrollRect_o *)0x0) goto LAB_040a27b4;
    pUVar3 = (pUVar2->fields).m_HorizontalScrollbar;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_00;
    if ((char)bVar5 != '\0') {
      pUVar2 = (__this->fields)._scrollRect;
      if ((pUVar2 == (UI_ChatScrollRect_o *)0x0) ||
         (pUVar3 = (pUVar2->fields).m_HorizontalScrollbar,
         pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0)) goto LAB_040a27b4;
      value = 1.0;
      if ((float)iVar1 / (float)iVar14 <= 1.0) {
        value = (float)iVar1 / (float)iVar14;
      }
      UnityEngine_UI_Scrollbar__set_size(pUVar3,value,(MethodInfo *)0x0);
      pMVar10 = extraout_RDX_01;
    }
  }
  uVar11 = iVar14 - iVar1;
  pSStack_50 = pSVar4;
  if (uVar11 != 0 && iVar1 <= iVar14) {
    uVar6 = uVar11;
    if (0.0 < fVar15) {
      fVar15 = 1.0 - fVar15;
      if (DAT_056fdee5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee5 = '\x01';
      }
      fVar15 = fVar15 * (float)(int)uVar11;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar15 = floorf(fVar15);
      uVar6 = (uint)fVar15;
      pMVar10 = extraout_RDX_02;
      if ((int)uVar6 < 0) goto LAB_040a25f0;
      if ((int)uVar11 <= (int)uVar6) {
        uVar6 = uVar11;
      }
    }
    uVar16 = (ulong)uVar6;
  }
LAB_040a25f0:
  pSVar13 = (__this->fields)._linesPool;
  if (pSVar13 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
    uVar11 = 0;
    iVar14 = 0;
    if (0 < (pSVar13->fields)._size) {
      do {
        __this_02 = (TMPro_TMP_InputField_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar13,iVar14,
                               MethodInfo_TMP_InputField_get_Item);
        if (__this_02 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a27b4;
        iVar1 = (pSStack_50->fields)._size;
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
        iVar12 = (int)uVar16 + iVar14;
        bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
        if (iVar12 < iVar1) {
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSStack_50,iVar12,MethodInfo_String_get_Item
                        );
          if ((char)bVar5 == '\0') {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a27b4;
            UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
            uVar11 = 1;
          }
          bVar5 = System_String__op_Inequality
                            (*(System_String_o **)&(__this_02->fields).m_SelectionColor.fields.a,b,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            TMPro_TMP_InputField__set_text(__this_02,b,(MethodInfo *)0x0);
            uVar11 = 1;
          }
          pUVar9 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
          iVar7 = UnityEngine_Transform__GetSiblingIndex(pUVar9,(MethodInfo *)0x0);
          pMVar10 = extraout_RDX_08;
          if (iVar14 != iVar7) {
            pUVar9 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_040a27b4;
            UnityEngine_Transform__SetSiblingIndex(pUVar9,iVar14,(MethodInfo *)0x0);
            pMVar10 = extraout_RDX_06;
LAB_040a262d:
            uVar11 = 1;
          }
        }
        else {
          pMVar10 = extraout_RDX_07;
          if ((char)bVar5 != '\0') {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
              pMVar10 = extraout_RDX_09;
              goto LAB_040a262d;
            }
            goto LAB_040a27b4;
          }
        }
        iVar14 = iVar14 + 1;
        pSVar13 = (__this->fields)._linesPool;
        if (pSVar13 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a27b4;
      } while (iVar14 < (pSVar13->fields)._size);
    }
    UI_ChatPanel__UpdateBackgroundVisibility(__this,1,pMVar10);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)&(__this->fields)._requestCanvasUpdate = 1;
    }
    return;
  }
LAB_040a27b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$GetCachedInputField
// il2cpp: TMPro_TMP_InputField_o* UI_ChatPanel__GetCachedInputField (UI_ChatPanel_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x40a4660

TMPro_TMP_InputField_o *
UI_ChatPanel__GetCachedInputField
          (UI_ChatPanel_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  TMPro_TMP_InputField_o *pTVar3;
  TMPro_TMP_InputField_o *local_30;
  
  if (DAT_057045e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045e4 = '\x01';
  }
  local_30 = (TMPro_TMP_InputField_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pTVar3 = (TMPro_TMP_InputField_o *)0x0;
  if ((char)bVar2 == '\0') {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._cachedInputFields;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_040a4790:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (pSVar1,(Il2CppObject *)obj,(Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    pTVar3 = local_30;
    if ((char)bVar2 == '\0') {
      if (obj == (UnityEngine_GameObject_o *)0x0) goto LAB_040a4790;
      pTVar3 = (TMPro_TMP_InputField_o *)
               UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
      local_30 = pTVar3;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      pTVar3 = local_30;
      if ((char)bVar2 != '\0') {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._cachedInputFields;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_040a4790;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)local_30,MethodInfo_Void_set_Item);
        pTVar3 = local_30;
      }
    }
  }
  return pTVar3;
}


// UI.ChatPanel$$OnDestroy
// il2cpp: void UI_ChatPanel__OnDestroy (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a47a0

void UI_ChatPanel__OnDestroy(UI_ChatPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  TMPro_TMP_InputField_o *pTVar3;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_T0__o *__this_01;
  System_String_o *text;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_Events_UnityAction_T0__o *pUVar8;
  MethodInfo *method_00;
  
  if (DAT_057045e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnEndEdit);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnValueChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveListener);
    DAT_057045e5 = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields)._notificationBadge + 1) = 1;
  pTVar3 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pTVar3 = (__this->fields)._inputField;
    if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a4a86;
    __this_00 = (pTVar3->fields).m_OnEndTextSelection;
    pUVar8 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto LAB_040a4a86;
    UnityEngine_Events_UnityEvent<object>__RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar8,MethodInfo_Void_RemoveListener);
    pTVar3 = (__this->fields)._inputField;
    if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a4a86;
    __this_01 = *(UnityEngine_Events_UnityEvent_T0__o **)&(pTVar3->fields).m_GlobalPointSize;
    pUVar8 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_01 == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto LAB_040a4a86;
    UnityEngine_Events_UnityEvent<object>__RemoveListener(__this_01,pUVar8,MethodInfo_Void_RemoveListener);
    pTVar3 = (__this->fields)._inputField;
    if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (MethodInfo *)0x0;
    TMPro_TMP_InputField__DeactivateInputField(pTVar3,0,(MethodInfo *)0x0);
    if ((char)(__this->fields)._inPMMode != '\0') {
      UI_ChatPanel__SaveCurrentConversation(__this,method_00);
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      cVar1 = *(char *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd0);
    }
    else {
      cVar1 = *(char *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd0);
    }
    if (cVar1 == '\0') goto LAB_040a49e4;
    pTVar3 = (__this->fields)._inputField;
    if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a4a86;
    text = *(System_String_o **)&(pTVar3->fields).m_SelectionColor.fields.a;
    iVar7 = TMPro_TMP_InputField__get_caretPosition(pTVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__PreserveInputText(text,iVar7,(MethodInfo *)0x0);
    iVar7 = -1;
    if (((char)(__this->fields)._inPMMode != '\0') &&
       (pPVar4 = (__this->fields)._currentPMTarget, pPVar4 != (Photon_Realtime_Player_o *)0x0)) {
      iVar7 = (pPVar4->fields).actorNumber;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_057045fb != '\0') goto LAB_040a49c7;
LAB_040a4a56:
      il2cpp_init_method_metadata(&TypeInfo_ChatManager);
      DAT_057045fb = '\x01';
      iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
    }
    else {
      if (DAT_057045fb == '\0') goto LAB_040a4a56;
LAB_040a49c7:
      iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    *(int32_t *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xcc) = iVar7;
  }
LAB_040a49e4:
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._cachedInputFields;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar5,MethodInfo_Void_Clear);
    pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(__this->fields)._isInteractingWithChatUI;
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar5,MethodInfo_Void_Clear);
      return;
    }
  }
LAB_040a4a86:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$OnValueChanged
// il2cpp: void UI_ChatPanel__OnValueChanged (UI_ChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x40a4ca0

void UI_ChatPanel__OnValueChanged(UI_ChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  bool bVar4;
  float fVar5;
  
  if (DAT_057045e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045e6 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar2 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      (__this->fields)._lastTypeTime = fVar5;
      if (text == (System_String_o *)0x0) {
        text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__HandleTyping(text,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (DAT_057045d4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_057045d4 = '\x01';
        method_00 = extraout_RDX_00;
      }
      if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
        pTVar2 = (__this->fields)._inputField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = false;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        method_00 = extraout_RDX_01;
        if ((char)bVar3 != '\0') {
          pTVar2 = (__this->fields)._inputField;
          if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar4 = *(char *)&(pTVar2->fields).m_Mesh != '\0';
        }
      }
      else {
        bVar4 = false;
      }
      UI_ChatPanel__UpdatePlaceholderVisibility(__this,(uint)bVar4,method_00);
      return;
    }
  }
  return;
}


// UI.ChatPanel$$GetInputText
// il2cpp: System_String_o* UI_ChatPanel__GetInputText (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a4e00

System_String_o * UI_ChatPanel__GetInputText(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  float *pfVar3;
  
  if (DAT_057045e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045e7 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pfVar3 = &(pTVar1->fields).m_SelectionColor.fields.a;
      goto LAB_040a4e6d;
    }
  }
  pfVar3 = *(float **)(DAT_057110b0 + 0xb8);
LAB_040a4e6d:
  return *(System_String_o **)pfVar3;
}


// UI.ChatPanel$$SetInputText
// il2cpp: void UI_ChatPanel__SetInputText (UI_ChatPanel_o* __this, System_String_o* newText, const MethodInfo* method);
// 0x40a4e90

void UI_ChatPanel__SetInputText(UI_ChatPanel_o *__this,System_String_o *newText,MethodInfo *method)

{
  UI_ChatPanel__SetTextAndPositionCaret(__this,newText,method);
  return;
}


// UI.ChatPanel$$EnterPMMode
// il2cpp: void UI_ChatPanel__EnterPMMode (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x409c650

void UI_ChatPanel__EnterPMMode
               (UI_ChatPanel_o *__this,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *__this_00;
  int32_t iVar2;
  UI_ChatPanel___c__DisplayClass114_0_o *__this_01;
  Photon_Realtime_Player_o *pPVar3;
  UI_ChatPanel__ResetPMToggleActive_d__119_o *__this_02;
  UnityEngine_Coroutine_o *pUVar4;
  System_Predicate_T__o *match;
  Il2CppObject *arg0;
  System_String_o *key;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_ChatPanel___c__DisplayClass114_0_Fields *pUVar6;
  System_ValueTuple_string__int__o SVar7;
  undefined1 local_34 [4];
  
  if (DAT_057045e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_FindIndex);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__EnterPMMode_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass114_0);
    il2cpp_init_method_metadata(&"PM_{0}");
    DAT_057045e8 = '\x01';
  }
  __this_01 = (UI_ChatPanel___c__DisplayClass114_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass114_0);
  UI_ChatPanel_<>c__DisplayClass114_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass114_0_o *)0x0) {
    pUVar6 = &__this_01->fields;
    (__this_01->fields).target = target;
    il2cpp_runtime_glue(pUVar6);
    pPVar3 = (__this_01->fields).target;
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    iVar1 = (pPVar3->fields).actorNumber;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if (iVar1 == (pPVar3->fields).actorNumber) {
        return;
      }
      if (((char)(__this->fields)._inPMMode != '\0') &&
         (pPVar3 = (__this->fields)._currentPMTarget, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
        if (pUVar6->target == (Photon_Realtime_Player_o *)0x0) goto LAB_0409c94d;
        if ((pPVar3->fields).actorNumber == (pUVar6->target->fields).actorNumber) {
          return;
        }
      }
      UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)target);
      (__this->fields)._currentPMTarget = pUVar6->target;
      il2cpp_runtime_glue(&(__this->fields)._currentPMTarget);
      *(undefined1 *)&(__this->fields)._inPMMode = 1;
      *(undefined1 *)&(__this->fields)._pmToggleActive = 1;
      pUVar4 = (__this->fields)._pmToggleCoroutine;
      if (pUVar4 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar4,(MethodInfo *)0x0);
      }
      if (DAT_057045ec == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_ResetPMToggleActive_d__119);
        DAT_057045ec = '\x01';
      }
      __this_02 = (UI_ChatPanel__ResetPMToggleActive_d__119_o *)il2cpp_runtime_glue(TypeInfo_ResetPMToggleActive_d__119);
      UI_ChatPanel_<ResetPMToggleActive>d__119___ctor(__this_02,0,(MethodInfo *)0x0);
      if (__this_02 != (UI_ChatPanel__ResetPMToggleActive_d__119_o *)0x0) {
        (__this_02->fields).__4__this = __this;
        il2cpp_runtime_glue(&(__this_02->fields).__4__this,__this);
        pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                           ((UnityEngine_MonoBehaviour_o *)__this,
                            (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
        (__this->fields)._pmToggleCoroutine = pUVar4;
        il2cpp_runtime_glue(&(__this->fields)._pmToggleCoroutine,pUVar4);
        UI_ChatPanel__AddPMPartner(__this,(__this_01->fields).target,method_01);
        __this_00 = (__this->fields)._pmPartners;
        match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
        System_Predicate<object>___ctor();
        if (__this_00 != (System_Collections_Generic_List_Player__o *)0x0) {
          iVar2 = System_Collections_Generic_List<object>__FindIndex
                            ((System_Collections_Generic_List_object__o *)__this_00,match,
                             MethodInfo_Int32_FindIndex);
          (__this->fields)._currentPMIndex = iVar2;
          if (pUVar6->target != (Photon_Realtime_Player_o *)0x0) {
            iVar2 = (pUVar6->target->fields).actorNumber;
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pMVar5 = (MethodInfo *)0x0;
            GameManagers_ChatManager__ClearPMNotification(iVar2,(MethodInfo *)0x0);
            UI_ChatPanel__UpdateChatModeLabel(__this,pMVar5);
            UI_ChatPanel__UpdateChatModeElements(__this,pMVar5);
            if (pUVar6->target != (Photon_Realtime_Player_o *)0x0) {
              arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_34);
              method_00 = (MethodInfo *)&"PM_{0}";
              key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
              SVar7 = GameManagers_ChatManager__GetConversation(key,(MethodInfo *)0x0);
              pMVar5 = (MethodInfo *)SVar7.fields.Item1;
              UI_ChatPanel__SetTextAndCaretPosition
                        (__this,(System_String_o *)pMVar5,SVar7.fields.Item2,method_00);
              UI_ChatPanel__RefreshPoolSize(__this,pMVar5);
              UI_ChatPanel__ValidatePMState(__this,pMVar5);
              UI_ChatPanel__RestorePMPartners(__this,pMVar5);
              UI_ChatPanel__RefreshDisplayedMessages(__this,pMVar5);
              return;
            }
          }
        }
      }
    }
  }
LAB_0409c94d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$ExitPMMode
// il2cpp: void UI_ChatPanel__ExitPMMode (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a5530

void UI_ChatPanel__ExitPMMode(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  UI_ChatPanel__ResetPMToggleActive_d__119_o *__this_00;
  MethodInfo *pMVar1;
  MethodInfo *in_RCX;
  System_ValueTuple_string__int__o SVar2;
  
  if (DAT_057045e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"PUBLIC");
    DAT_057045e9 = '\x01';
  }
  UI_ChatPanel__SaveCurrentConversation(__this,method);
  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._currentPMTarget,0);
  *(undefined1 *)&(__this->fields)._inPMMode = 0;
  (__this->fields)._currentPMIndex = -1;
  *(undefined1 *)&(__this->fields)._pmToggleActive = 1;
  routine = (__this->fields)._pmToggleCoroutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  if (DAT_057045ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResetPMToggleActive_d__119);
    DAT_057045ec = '\x01';
  }
  __this_00 = (UI_ChatPanel__ResetPMToggleActive_d__119_o *)il2cpp_runtime_glue(TypeInfo_ResetPMToggleActive_d__119);
  UI_ChatPanel_<ResetPMToggleActive>d__119___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel__ResetPMToggleActive_d__119_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    pMVar1 = (MethodInfo *)
             UnityEngine_MonoBehaviour__StartCoroutine
                       ((UnityEngine_MonoBehaviour_o *)__this,
                        (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields)._pmToggleCoroutine = (UnityEngine_Coroutine_o *)pMVar1;
    il2cpp_runtime_glue(&(__this->fields)._pmToggleCoroutine);
    UI_ChatPanel__UpdateChatModeLabel(__this,pMVar1);
    UI_ChatPanel__UpdateChatModeElements(__this,pMVar1);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    SVar2 = GameManagers_ChatManager__GetConversation("PUBLIC",(MethodInfo *)0x0);
    pMVar1 = (MethodInfo *)SVar2.fields.Item1;
    UI_ChatPanel__SetTextAndCaretPosition
              (__this,(System_String_o *)pMVar1,SVar2.fields.Item2,in_RCX);
    UI_ChatPanel__RefreshPoolSize(__this,pMVar1);
    UI_ChatPanel__ValidatePMState(__this,pMVar1);
    UI_ChatPanel__RestorePMPartners(__this,pMVar1);
    UI_ChatPanel__RefreshDisplayedMessages(__this,pMVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$RemovePMPartner
// il2cpp: void UI_ChatPanel__RemovePMPartner (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40a56a0

void UI_ChatPanel__RemovePMPartner
               (UI_ChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  uint index;
  int32_t iVar5;
  UI_ChatPanel___c__DisplayClass116_0_o *__this_00;
  System_Predicate_T__o *match;
  Photon_Realtime_Player_o *pPVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057045ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_FindIndex);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RemovePMPartner_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass116_0);
    DAT_057045ea = '\x01';
  }
  __this_00 = (UI_ChatPanel___c__DisplayClass116_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass116_0);
  UI_ChatPanel_<>c__DisplayClass116_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel___c__DisplayClass116_0_o *)0x0) {
    (__this_00->fields).player = player;
    il2cpp_runtime_glue(&__this_00->fields,player);
    if ((__this_00->fields).player == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    pSVar3 = (__this->fields)._pmPartners;
    match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
      index = System_Collections_Generic_List<object>__FindIndex
                        ((System_Collections_Generic_List_object__o *)pSVar3,match,MethodInfo_Int32_FindIndex);
      if (index == 0xffffffff) {
        return;
      }
      pSVar3 = (__this->fields)._pmPartners;
      if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
        method_01 = (MethodInfo *)(ulong)index;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
        UI_ChatPanel__UpdateChatModeElements(__this,method_01);
        pSVar3 = (__this->fields)._pmPartners;
        if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 == 0) {
LAB_040a584e:
            UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)(ulong)uVar1);
            return;
          }
          pPVar6 = (__this->fields)._currentPMTarget;
          if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
            pPVar4 = (__this_00->fields).player;
            if (pPVar4 == (Photon_Realtime_Player_o *)0x0) goto LAB_040a589f;
            if ((pPVar6->fields).actorNumber == (pPVar4->fields).actorNumber) {
              if (0 < (int)uVar1) {
                (__this->fields)._currentPMIndex = uVar1 - 1;
                pPVar6 = (Photon_Realtime_Player_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,uVar1 - 1,
                                    MethodInfo_Player_get_Item);
                UI_ChatPanel__EnterPMMode(__this,pPVar6,method_00);
                return;
              }
              goto LAB_040a584e;
            }
          }
          iVar2 = (__this->fields)._currentPMIndex;
          if (iVar2 < (int)index) {
            return;
          }
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_init_class();
          }
          iVar5 = System_Math__Max(0,iVar2 + -1,(MethodInfo *)0x0);
          (__this->fields)._currentPMIndex = iVar5;
          return;
        }
      }
    }
  }
LAB_040a589f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$ValidatePMState
// il2cpp: void UI_ChatPanel__ValidatePMState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a1230

void UI_ChatPanel__ValidatePMState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o **ppPVar1;
  int iVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  long lVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool_conflict bVar5;
  int32_t iVar6;
  System_Predicate_T__o *match;
  Photon_Realtime_Room_o *pPVar7;
  uint val2;
  MethodInfo *method_00;
  
  if (DAT_057045eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsValue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveAll);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__ValidatePMState_b__117_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057045eb = '\x01';
  }
  pSVar3 = (__this->fields)._pmPartners;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
    System_Predicate<object>___ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar4 + 0x18) = match;
    il2cpp_runtime_glue(lVar4 + 0x18,match);
  }
  if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
    System_Collections_Generic_List<object>__RemoveAll
              ((System_Collections_Generic_List_object__o *)pSVar3,match,MethodInfo_Int32_RemoveAll);
    ppPVar1 = &(__this->fields)._currentPMTarget;
    if ((__this->fields)._currentPMTarget != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if ((pPVar7 == (Photon_Realtime_Room_o *)0x0) ||
         (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       &(pPVar7->fields).isOffline,
         __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
      goto LAB_040a1453;
      match = (System_Predicate_T__o *)*ppPVar1;
      bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsValue
                        (__this_00,(Il2CppObject *)match,MethodInfo_Boolean_ContainsValue);
      if ((char)bVar5 == '\0') {
        *ppPVar1 = (Photon_Realtime_Player_o *)0x0;
        match = (System_Predicate_T__o *)0x0;
        il2cpp_runtime_glue(ppPVar1);
      }
    }
    if (((char)(__this->fields)._inPMMode != '\0') && (*ppPVar1 == (Photon_Realtime_Player_o *)0x0))
    {
      UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)match);
    }
    pSVar3 = (__this->fields)._pmPartners;
    if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
      iVar6 = (__this->fields)._currentPMIndex;
      iVar2 = (pSVar3->fields)._size;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      val2 = iVar2 - 1;
      method_00 = (MethodInfo *)(ulong)val2;
      iVar6 = System_Math__Min(iVar6,val2,(MethodInfo *)0x0);
      (__this->fields)._currentPMIndex = iVar6;
      UI_ChatPanel__UpdateChatModeElements(__this,method_00);
      return;
    }
  }
LAB_040a1453:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$IsTogglingPM
// il2cpp: bool UI_ChatPanel__IsTogglingPM (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a58b0

bool_conflict UI_ChatPanel__IsTogglingPM(UI_ChatPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._pmToggleActive);
}


// UI.ChatPanel$$ResetPMToggleActive
// il2cpp: System_Collections_IEnumerator_o* UI_ChatPanel__ResetPMToggleActive (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a4fc0

System_Collections_IEnumerator_o *
UI_ChatPanel__ResetPMToggleActive(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UI_ChatPanel__ResetPMToggleActive_d__119_o *__this_00;
  
  if (DAT_057045ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResetPMToggleActive_d__119);
    DAT_057045ec = '\x01';
  }
  __this_00 = (UI_ChatPanel__ResetPMToggleActive_d__119_o *)il2cpp_runtime_glue(TypeInfo_ResetPMToggleActive_d__119);
  UI_ChatPanel_<ResetPMToggleActive>d__119___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_ChatPanel__ResetPMToggleActive_d__119_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$IsInPMMode
// il2cpp: bool UI_ChatPanel__IsInPMMode (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a58c0

bool_conflict UI_ChatPanel__IsInPMMode(UI_ChatPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._inPMMode);
}


// UI.ChatPanel$$CycleToPMPartner
// il2cpp: void UI_ChatPanel__CycleToPMPartner (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a3a40

void UI_ChatPanel__CycleToPMPartner(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Player__o *__this_00;
  int32_t iVar2;
  bool_conflict bVar3;
  UI_ChatPanel___c__DisplayClass121_0_o *__this_01;
  System_Collections_Generic_List_Player__o *pSVar4;
  UI_ChatPanel_o *match;
  Il2CppObject *pIVar5;
  Photon_Realtime_Player_o *target;
  int index;
  MethodInfo *method_00;
  
  if (DAT_057045ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_FindIndex);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__CycleToPMPartner_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__CycleToPMPartner_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__CycleToPMPartner_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass121_0);
    DAT_057045ed = '\x01';
  }
  __this_01 = (UI_ChatPanel___c__DisplayClass121_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass121_0);
  UI_ChatPanel_<>c__DisplayClass121_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ChatPanel___c__DisplayClass121_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    match = __this;
    il2cpp_runtime_glue(&__this_01->fields);
    pSVar4 = (__this->fields)._pmPartners;
    if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
      if ((pSVar4->fields)._size == 0) {
        return;
      }
      pSVar4 = UI_ChatPanel__GetPmPartnersByRecency(__this,(MethodInfo *)match);
      if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
        iVar1 = (pSVar4->fields)._size;
        if ((__this->fields)._currentPMTarget == (Photon_Realtime_Player_o *)0x0) {
          (__this_01->fields).currentIndexInRecency = iVar1;
        }
        else {
          match = (UI_ChatPanel_o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
          System_Predicate<object>___ctor();
          iVar2 = System_Collections_Generic_List<object>__FindIndex
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (System_Predicate_T__o *)match,MethodInfo_Int32_FindIndex);
          (__this_01->fields).currentIndexInRecency = iVar2;
          if (iVar2 == -1) {
            __this_00 = (__this->fields)._pmPartners;
            match = (UI_ChatPanel_o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
            System_Predicate<object>___ctor();
            if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_040a3d42;
            iVar2 = System_Collections_Generic_List<object>__FindIndex
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (System_Predicate_T__o *)match,MethodInfo_Int32_FindIndex);
            (__this_01->fields).currentIndexInRecency = iVar2;
            if (iVar2 == -1) {
              (__this_01->fields).currentIndexInRecency = iVar1;
            }
            else {
              match = (UI_ChatPanel_o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
              System_Predicate<object>___ctor();
              iVar2 = System_Collections_Generic_List<object>__FindIndex
                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                 (System_Predicate_T__o *)match,MethodInfo_Int32_FindIndex);
              if (iVar2 != -1) {
                (__this_01->fields).currentIndexInRecency = iVar2;
              }
            }
          }
        }
        if (0 < iVar1) {
          index = 0;
          do {
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                MethodInfo_Player_get_Item);
            if (pIVar5 == (Il2CppObject *)0x0) goto LAB_040a3d42;
            iVar2 = *(int32_t *)&pIVar5[1].monitor;
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            match = (UI_ChatPanel_o *)0x0;
            bVar3 = GameManagers_ChatManager__HasActivePMNotification(iVar2,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              if ((__this_01->fields).currentIndexInRecency != index) goto LAB_040a3ccf;
              break;
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        index = ((__this_01->fields).currentIndexInRecency + 1) % (iVar1 + 1);
LAB_040a3ccf:
        if (index == iVar1) {
          UI_ChatPanel__SaveCurrentConversation(__this,(MethodInfo *)match);
          UI_ChatPanel__ExitPMMode(__this,(MethodInfo *)match);
          return;
        }
        target = (Photon_Realtime_Player_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,MethodInfo_Player_get_Item);
        UI_ChatPanel__EnterPMMode(__this,target,method_00);
        return;
      }
    }
  }
LAB_040a3d42:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$GetPmPartnersByRecency
// il2cpp: System_Collections_Generic_List_Player__o* UI_ChatPanel__GetPmPartnersByRecency (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a58d0

System_Collections_Generic_List_Player__o *
UI_ChatPanel__GetPmPartnersByRecency(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_Player__o *pSVar4;
  long lVar5;
  System_Collections_Generic_List_int__o *__this_00;
  Photon_Realtime_Player_array *pPVar6;
  Photon_Realtime_Player_o *item;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  Il2CppObject *value;
  bool_conflict bVar7;
  int32_t item_00;
  System_Collections_Generic_List_Player__o *__this_07;
  System_Collections_Generic_Dictionary_int__object__o *__this_08;
  System_Collections_Generic_HashSet_int__o *__this_09;
  System_Collections_Generic_List_bool__o *__this_10;
  UI_ChatPanel___c__DisplayClass122_0_o *pUVar8;
  System_Func_TSource__bool__o *pSVar9;
  UI_ChatPanel___c__DisplayClass122_0_Fields *pUVar10;
  int iVar11;
  undefined8 in_stack_ffffffffffffff78;
  System_Collections_Generic_List_T__o *pSVar12;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  UI_ChatPanel_o *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_057045ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_Photon_Realtime_Player);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_Player);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_Player__bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_Player);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetPmPartnersByRecency_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass122_0);
    DAT_057045ee = '\x01';
  }
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  __this_07 = (System_Collections_Generic_List_Player__o *)il2cpp_runtime_glue(TypeInfo_List_Player);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_07,MethodInfo_List_1_Photon_Realtime_Player);
  pSVar4 = (__this->fields)._pmPartners;
  if ((pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) || ((pSVar4->fields)._size == 0))
  {
    return __this_07;
  }
  __this_08 = (System_Collections_Generic_Dictionary_int__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_int__Player);
  System_Collections_Generic_Dictionary<int__object>___ctor(__this_08,MethodInfo_Dictionary_2_System_Int32_Photon_Realtime_Player);
  pSVar4 = (__this->fields)._pmPartners;
  if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
    local_50 = __this;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
    value = local_48.fields._current;
    pSVar12 = local_48.fields._list;
    if (__this_08 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      while (__this_02.fields._8_8_ = __this_07,
            __this_02.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
            __this_02.fields._current = (Il2CppObject *)pSVar12,
            bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
            (char)bVar7 != '\0') {
        if ((Photon_Realtime_Player_o *)value != (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_01.fields._8_8_ = __this_07,
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
            __this_01.fields._current = (Il2CppObject *)pSVar12,
            bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
            (char)bVar7 != '\0') {
        if (((Photon_Realtime_Player_o *)value != (Photon_Realtime_Player_o *)0x0) &&
           (bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                              (__this_08,*(int32_t *)((long)value + 0x18),MethodInfo_Boolean_ContainsKey),
           (char)bVar7 == '\0')) {
          System_Collections_Generic_Dictionary<int__object>__set_Item
                    (__this_08,*(int32_t *)((long)value + 0x18),value,MethodInfo_Void_set_Item);
        }
      }
    }
    __this_03.fields._8_8_ = __this_07;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
    __this_09 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
    System_Collections_Generic_HashSet<int>___ctor(__this_09,MethodInfo_HashSet_1_System_Int32);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb8);
    if (lVar5 != 0) {
      iVar11 = *(int *)(lVar5 + 0x18);
      if (-1 < iVar11 + -1) {
        iVar11 = iVar11 + -2;
        iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
        while( true ) {
          if (iVar2 == 0) {
            il2cpp_init_class();
          }
          __this_10 = *(System_Collections_Generic_List_bool__o **)
                       (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb0);
          if (__this_10 == (System_Collections_Generic_List_bool__o *)0x0) goto LAB_040a5fef;
          iVar2 = iVar11 + 1;
          if (iVar2 < (__this_10->fields)._size) {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
              __this_10 = *(System_Collections_Generic_List_bool__o **)
                           (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb0);
              if (__this_10 == (System_Collections_Generic_List_bool__o *)0x0) goto LAB_040a5fef;
            }
            bVar7 = System_Collections_Generic_List<bool>__get_Item(__this_10,iVar2,MethodInfo_Boolean_get_Item);
            if ((char)bVar7 != '\0') {
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              __this_00 = *(System_Collections_Generic_List_int__o **)
                           (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb8);
              if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040a5fef;
              item_00 = System_Collections_Generic_List<int>__get_Item(__this_00,iVar2,MethodInfo_Int32_get_Item)
              ;
              if (0 < item_00) {
                if (__this_09 == (System_Collections_Generic_HashSet_int__o *)0x0)
                goto LAB_040a5fef;
                bVar7 = System_Collections_Generic_HashSet<int>__Contains
                                  (__this_09,item_00,MethodInfo_Boolean_Contains);
                if ((char)bVar7 == '\0') {
                  System_Collections_Generic_HashSet<int>__Add(__this_09,item_00,MethodInfo_Boolean_Add);
                  if (__this_08 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
                  goto LAB_040a5fef;
                  bVar7 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                                    (__this_08,item_00,(Il2CppObject **)&local_58,MethodInfo_Boolean_TryGetValue);
                  lVar5 = MethodInfo_Void_Add;
                  if ((char)bVar7 != '\0') {
                    if (__this_07 == (System_Collections_Generic_List_Player__o *)0x0)
                    goto LAB_040a5fef;
                    piVar1 = &(__this_07->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pPVar6 = (__this_07->fields)._items;
                    if (pPVar6 == (Photon_Realtime_Player_array *)0x0) goto LAB_040a5fef;
                    uVar3 = (__this_07->fields)._size;
                    if (uVar3 < (uint)pPVar6->max_length) {
                      (__this_07->fields)._size = uVar3 + 1;
                      pPVar6->m_Items[(int)uVar3] = (Photon_Realtime_Player_o *)local_58;
                      il2cpp_runtime_glue(pPVar6->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_07,
                                 (Il2CppObject *)local_58,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
              }
            }
          }
          if (iVar11 < 0) break;
          iVar11 = iVar11 + -1;
          iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
        }
      }
      pSVar4 = (local_50->fields)._pmPartners;
      if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
        pSVar12 = local_48.fields._list;
        if (__this_07 == (System_Collections_Generic_List_Player__o *)0x0) {
          while (__this_05.fields._8_8_ = __this_07,
                __this_05.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
                __this_05.fields._current = (Il2CppObject *)pSVar12,
                bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                (char)bVar7 != '\0') {
            pUVar8 = (UI_ChatPanel___c__DisplayClass122_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass122_0);
            UI_ChatPanel_<>c__DisplayClass122_0___ctor(pUVar8,(MethodInfo *)0x0);
            if (pUVar8 == (UI_ChatPanel___c__DisplayClass122_0_o *)0x0) goto LAB_040a5ff4;
            (pUVar8->fields).p = (Photon_Realtime_Player_o *)local_48.fields._current;
            il2cpp_runtime_glue(&pUVar8->fields);
            if ((pUVar8->fields).p != (Photon_Realtime_Player_o *)0x0) {
              pSVar9 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__bool);
              System_Func<object__bool>___ctor();
              bVar7 = System_Linq_Enumerable__Any<object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)0x0,pSVar9,
                                 MethodInfo_Boolean_Any_Player);
              if ((char)bVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
        }
        else {
          while (__this_04.fields._8_8_ = __this_07,
                __this_04.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
                __this_04.fields._current = (Il2CppObject *)pSVar12,
                bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                (char)bVar7 != '\0') {
            pUVar8 = (UI_ChatPanel___c__DisplayClass122_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass122_0);
            UI_ChatPanel_<>c__DisplayClass122_0___ctor(pUVar8,(MethodInfo *)0x0);
            if (pUVar8 == (UI_ChatPanel___c__DisplayClass122_0_o *)0x0) {
LAB_040a5ff4:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar10 = &pUVar8->fields;
            (pUVar8->fields).p = (Photon_Realtime_Player_o *)local_48.fields._current;
            il2cpp_runtime_glue(pUVar10);
            if (pUVar10->p != (Photon_Realtime_Player_o *)0x0) {
              pSVar9 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__bool);
              System_Func<object__bool>___ctor();
              bVar7 = System_Linq_Enumerable__Any<object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)__this_07,
                                 pSVar9,MethodInfo_Boolean_Any_Player);
              lVar5 = MethodInfo_Void_Add;
              if ((char)bVar7 == '\0') {
                item = pUVar10->p;
                piVar1 = &(__this_07->fields)._version;
                *piVar1 = *piVar1 + 1;
                pPVar6 = (__this_07->fields)._items;
                if (pPVar6 == (Photon_Realtime_Player_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar3 = (__this_07->fields)._size;
                if (uVar3 < (uint)pPVar6->max_length) {
                  (__this_07->fields)._size = uVar3 + 1;
                  pPVar6->m_Items[(int)uVar3] = item;
                  il2cpp_runtime_glue(pPVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_07,
                             (Il2CppObject *)item,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
        __this_06.fields._8_8_ = __this_07;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
        __this_06.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
        return __this_07;
      }
    }
  }
LAB_040a5fef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$AddPMPartner
// il2cpp: void UI_ChatPanel__AddPMPartner (UI_ChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40a5030

void UI_ChatPanel__AddPMPartner
               (UI_ChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_Player__o *pSVar4;
  Photon_Realtime_Player_array *pPVar5;
  long lVar6;
  int32_t index;
  UI_ChatPanel___c__DisplayClass123_0_o *__this_00;
  Photon_Realtime_Player_o *pPVar7;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar8;
  Il2CppObject *arg0;
  System_String_o *key;
  MethodInfo *method_00;
  undefined4 local_2c;
  
  if (DAT_057045ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_FindIndex);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__AddPMPartner_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass123_0);
    il2cpp_init_method_metadata(&"PM_{0}");
    DAT_057045ef = '\x01';
  }
  __this_00 = (UI_ChatPanel___c__DisplayClass123_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass123_0);
  UI_ChatPanel_<>c__DisplayClass123_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_ChatPanel___c__DisplayClass123_0_o *)0x0) goto LAB_040a53dc;
  (__this_00->fields).player = player;
  il2cpp_runtime_glue(&__this_00->fields,player);
  pPVar7 = (__this_00->fields).player;
  if (pPVar7 == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  iVar2 = (pPVar7->fields).actorNumber;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar7 == (Photon_Realtime_Player_o *)0x0) goto LAB_040a53dc;
  if (iVar2 == (pPVar7->fields).actorNumber) {
    return;
  }
  pSVar4 = (__this->fields)._pmPartners;
  match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
  System_Predicate<object>___ctor();
  if (pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_040a53dc;
  index = System_Collections_Generic_List<object>__FindIndex
                    ((System_Collections_Generic_List_object__o *)pSVar4,match,MethodInfo_Int32_FindIndex);
  pSVar4 = (__this->fields)._pmPartners;
  if (pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_040a53dc;
  if (index != -1) {
    pPVar7 = (Photon_Realtime_Player_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,index,MethodInfo_Player_get_Item);
    pSVar4 = (__this->fields)._pmPartners;
    if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar4,index,MethodInfo_Void_RemoveAt);
      lVar6 = MethodInfo_Void_Add;
      pSVar4 = (__this->fields)._pmPartners;
      if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar5 = (pSVar4->fields)._items;
        if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
          uVar3 = (pSVar4->fields)._size;
          if (uVar3 < (uint)pPVar5->max_length) {
            (pSVar4->fields)._size = uVar3 + 1;
            pPVar5->m_Items[(int)uVar3] = pPVar7;
            il2cpp_runtime_glue(pPVar5->m_Items + (int)uVar3,pPVar7);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pPVar7,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
    goto LAB_040a53dc;
  }
  if (9 < (pSVar4->fields)._size) {
    pIVar8 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,0,MethodInfo_Player_get_Item);
    if (pIVar8 != (Il2CppObject *)0x0) {
      local_2c = *(undefined4 *)&pIVar8[1].monitor;
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__ClearConversation(key,(MethodInfo *)0x0);
      GameManagers_ChatManager__ClearPMNotification
                (*(int32_t *)&pIVar8[1].monitor,(MethodInfo *)0x0);
      GameManagers_ChatManager__ResetNotifiedForPM(*(int32_t *)&pIVar8[1].monitor,(MethodInfo *)0x0)
      ;
    }
    pSVar4 = (__this->fields)._pmPartners;
    if (pSVar4 == (System_Collections_Generic_List_Player__o *)0x0) goto LAB_040a53dc;
    System_Collections_Generic_List<object>__RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar4,0,MethodInfo_Void_RemoveAt);
    pPVar7 = (__this->fields)._currentPMTarget;
    if (pPVar7 != (Photon_Realtime_Player_o *)0x0) {
      iVar2 = (pPVar7->fields).actorNumber;
      if (pIVar8 == (Il2CppObject *)0x0) {
        if (iVar2 == -1) goto LAB_040a5349;
      }
      else if (iVar2 == *(int *)&pIVar8[1].monitor) {
LAB_040a5349:
        (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
        il2cpp_runtime_glue(&(__this->fields)._currentPMTarget,0);
        *(undefined1 *)&(__this->fields)._inPMMode = 0;
      }
    }
  }
  lVar6 = MethodInfo_Void_Add;
  pSVar4 = (__this->fields)._pmPartners;
  if (pSVar4 != (System_Collections_Generic_List_Player__o *)0x0) {
    method_00 = (MethodInfo *)(__this_00->fields).player;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pPVar5 = (pSVar4->fields)._items;
    if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pPVar5->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pPVar5->m_Items[(int)uVar3] = (Photon_Realtime_Player_o *)method_00;
        il2cpp_runtime_glue(pPVar5->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)method_00,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      UI_ChatPanel__UpdateChatModeElements(__this,method_00);
      return;
    }
  }
LAB_040a53dc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$GetCurrentPMTarget
// il2cpp: Photon_Realtime_Player_o* UI_ChatPanel__GetCurrentPMTarget (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a61e0

Photon_Realtime_Player_o *
UI_ChatPanel__GetCurrentPMTarget(UI_ChatPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentPMTarget;
}


// UI.ChatPanel$$ResetPMState
// il2cpp: void UI_ChatPanel__ResetPMState (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a61f0

void UI_ChatPanel__ResetPMState(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Player__o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_057045f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057045f0 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._inPMMode = 0;
  (__this->fields)._currentPMTarget = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._currentPMTarget);
  pSVar2 = (__this->fields)._pmPartners;
  if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    (__this->fields)._currentPMIndex = -1;
    *(undefined1 *)&(__this->fields)._pmToggleActive = 0;
    method_00 = (MethodInfo *)(__this->fields)._pmToggleCoroutine;
    if (method_00 != (MethodInfo *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(UnityEngine_Coroutine_o *)method_00,
                 (MethodInfo *)0x0);
    }
    UI_ChatPanel__UpdateChatModeElements(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$CloseEmojiPanel
// il2cpp: void UI_ChatPanel__CloseEmojiPanel (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a4130

void UI_ChatPanel__CloseEmojiPanel(UI_ChatPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057045f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045f1 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)&(__this->fields)._emojiPanelActive = 0;
    __this_00 = (__this->fields)._emojiPanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.ChatPanel$$HandleCursorStateChange
// il2cpp: void UI_ChatPanel__HandleCursorStateChange (UI_ChatPanel_o* __this, int32_t newState, const MethodInfo* method);
// 0x40a6290

void UI_ChatPanel__HandleCursorStateChange
               (UI_ChatPanel_o *__this,int32_t newState,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if ((newState != 0) && ((char)(__this->fields)._emojiPanelActive != '\0')) {
    if (DAT_057045f1 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057045f1 = '\x01';
    }
    x = (UnityEngine_Object_o *)(__this->fields)._emojiPanel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      *(undefined1 *)&(__this->fields)._emojiPanelActive = 0;
      __this_00 = (__this->fields)._emojiPanel;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.ChatPanel$$MoveCaretToEnd
// il2cpp: void UI_ChatPanel__MoveCaretToEnd (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a6320

void UI_ChatPanel__MoveCaretToEnd(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  long lVar2;
  long *plVar3;
  bool_conflict bVar4;
  
  if (DAT_057045f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045f2 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar1 = (__this->fields)._inputField;
    if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
       (lVar2 = *(long *)&(pTVar1->fields).m_SelectionColor.fields.a, lVar2 != 0)) {
      value = *(int32_t *)(lVar2 + 0x10);
      TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
             (plVar3 = *(long **)&(pTVar1->fields).m_CachedViewportRect.fields.m_Width,
             plVar3 != (long *)0x0)) {
            (**(code **)(*plVar3 + 0x7d8))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x7e0));
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
                UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.ChatPanel$$ShouldBlockGameInput
// il2cpp: bool UI_ChatPanel__ShouldBlockGameInput (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a6430

bool_conflict UI_ChatPanel__ShouldBlockGameInput(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  uint uVar2;
  ulong in_RAX;
  undefined7 uVar3;
  
  if (DAT_057045d4 == '\0') {
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    in_RAX = (ulong)uVar2;
    if ((char)uVar2 != '\0') {
      pTVar1 = (__this->fields)._inputField;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      in_RAX = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      if (*(char *)&(pTVar1->fields).m_Mesh != '\0') {
        return (bool_conflict)in_RAX;
      }
    }
  }
  uVar3 = (undefined7)(in_RAX >> 8);
  if ((char)(__this->fields)._emojiPanelActive != '\0') {
    return (bool_conflict)CONCAT71(uVar3,1);
  }
  return (bool_conflict)CONCAT71(uVar3,*(char *)((long)&(__this->fields)._chatHidden + 2) != '\0');
}


// UI.ChatPanel$$ShouldBlockKeybind
// il2cpp: bool UI_ChatPanel__ShouldBlockKeybind (UI_ChatPanel_o* __this, int32_t keyCode, const MethodInfo* method);
// 0x40a64d0

bool_conflict
UI_ChatPanel__ShouldBlockKeybind(UI_ChatPanel_o *__this,int32_t keyCode,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  uint uVar1;
  TMPro_TMP_InputField_o *in_RAX;
  
  if (DAT_057045d4 == '\0') {
    in_RAX = (TMPro_TMP_InputField_o *)il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045d4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
    x = (__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    in_RAX = (TMPro_TMP_InputField_o *)(ulong)uVar1;
    if ((char)uVar1 != '\0') {
      in_RAX = (__this->fields)._inputField;
      if (in_RAX == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(char *)&(in_RAX->fields).m_Mesh != '\0') goto LAB_040a654e;
    }
  }
  if (((char)(__this->fields)._emojiPanelActive == '\0') &&
     (*(char *)((long)&(__this->fields)._chatHidden + 2) == '\0')) {
    return 0;
  }
LAB_040a654e:
  if (((keyCode != 0xd) && (keyCode != 0x1b)) && (keyCode != 0x10f)) {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),keyCode != 9);
  }
  return 0;
}


// UI.ChatPanel$$RefreshPoolSize
// il2cpp: void UI_ChatPanel__RefreshPoolSize (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a0e30

void UI_ChatPanel__RefreshPoolSize(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_TMP_InputField__o *pSVar4;
  TMPro_TMP_InputField_array *pTVar5;
  long lVar6;
  int iVar7;
  bool_conflict bVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Component_o *pUVar10;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  uint uVar11;
  TMPro_TMP_Text_o *__this_01;
  
  if (DAT_057045f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&TypeInfo_TextMeshProUGUI);
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    DAT_057045f3 = '\x01';
  }
  pSVar4 = (__this->fields)._linesPool;
  if (pSVar4 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a121c;
  iVar3 = (pSVar4->fields)._size;
  if (DAT_057045bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_057045bb = '\x01';
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto LAB_040a0f37;
LAB_040a0edd:
    iVar7 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_040a0edd;
LAB_040a0f37:
    il2cpp_init_class();
    iVar7 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
  }
  if (iVar3 == iVar7) {
    pSVar4 = (__this->fields)._linesPool;
    if (pSVar4 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
      *(int32_t *)((long)&(__this->fields)._notificationBadge + 4) = (pSVar4->fields)._size;
      return;
    }
  }
  else {
    if (iVar7 < iVar3) {
      uVar11 = iVar3 - 1;
      do {
        pSVar4 = (__this->fields)._linesPool;
        if (pSVar4 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a121c;
        pUVar9 = (UnityEngine_Object_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,uVar11,MethodInfo_TMP_InputField_get_Item)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pSVar4 = (__this->fields)._linesPool;
          if ((pSVar4 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) ||
             (pUVar10 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar4,uVar11,
                                   MethodInfo_TMP_InputField_get_Item), pUVar10 == (UnityEngine_Component_o *)0x0))
          goto LAB_040a121c;
          pUVar9 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pSVar4 = (__this->fields)._linesPool;
            if ((pSVar4 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) ||
               (pUVar10 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,uVar11,
                                     MethodInfo_TMP_InputField_get_Item), pUVar10 == (UnityEngine_Component_o *)0x0))
            goto LAB_040a121c;
            pUVar9 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__Destroy(pUVar9,(MethodInfo *)0x0);
          }
        }
        pSVar4 = (__this->fields)._linesPool;
        if (pSVar4 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a121c;
        method = (MethodInfo *)(ulong)uVar11;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar4,uVar11,MethodInfo_Void_RemoveAt);
        uVar11 = uVar11 - 1;
      } while (iVar7 <= (int)uVar11);
    }
    else if (iVar3 < iVar7) {
      value = (TMPro_TMP_FontAsset_o *)
              UnityEngine_Resources__Load<object>("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      iVar7 = iVar7 - iVar3;
      method_00 = extraout_RDX;
      do {
        while( true ) {
          method = (MethodInfo *)
                   UI_ChatPanel__CreateLine
                             (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                              method_00);
          if (((TMPro_TMP_InputField_o *)method == (TMPro_TMP_InputField_o *)0x0) ||
             (__this_01 = *(TMPro_TMP_Text_o **)
                           &(((TMPro_TMP_InputField_o *)method)->fields).m_CachedViewportRect.fields
                            .m_Width, __this_01 == (TMPro_TMP_Text_o *)0x0)) goto LAB_040a121c;
          bVar2 = (TypeInfo_TextMeshProUGUI->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar2) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextMeshProUGUI))
          goto LAB_040a121c;
          bVar2 = (TypeInfo_TextMeshProUGUI->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar2) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextMeshProUGUI)) {
            __this_01 = (TMPro_TMP_Text_o *)0x0;
          }
          TMPro_TMP_Text__set_font(__this_01,value,(MethodInfo *)0x0);
          TMPro_TMP_InputField__set_fontAsset
                    ((TMPro_TMP_InputField_o *)method,value,(MethodInfo *)0x0);
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_040a121c;
          UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          pSVar4 = (__this->fields)._linesPool;
          if (pSVar4 == (System_Collections_Generic_List_TMP_InputField__o *)0x0) goto LAB_040a121c;
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pTVar5 = (pSVar4->fields)._items;
          if (pTVar5 == (TMPro_TMP_InputField_array *)0x0) goto LAB_040a121c;
          uVar11 = (pSVar4->fields)._size;
          if ((uint)pTVar5->max_length <= uVar11) break;
          (pSVar4->fields)._size = uVar11 + 1;
          pTVar5->m_Items[(int)uVar11] = (TMPro_TMP_InputField_o *)method;
          il2cpp_runtime_glue(pTVar5->m_Items + (int)uVar11);
          iVar7 = iVar7 + -1;
          method_00 = extraout_RDX_01;
          if (iVar7 == 0) goto LAB_040a11f0;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)method,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        iVar7 = iVar7 + -1;
        method_00 = extraout_RDX_00;
      } while (iVar7 != 0);
    }
LAB_040a11f0:
    pSVar4 = (__this->fields)._linesPool;
    if (pSVar4 != (System_Collections_Generic_List_TMP_InputField__o *)0x0) {
      *(int32_t *)((long)&(__this->fields)._notificationBadge + 4) = (pSVar4->fields)._size;
      UI_ChatPanel__RefreshDisplayedMessages(__this,method);
      return;
    }
  }
LAB_040a121c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$IsInteractingWithChatUI
// il2cpp: bool UI_ChatPanel__IsInteractingWithChatUI (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a6580

bool_conflict UI_ChatPanel__IsInteractingWithChatUI(UI_ChatPanel_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulong)unaff_RBP >> 8);
  bVar3 = (bool_conflict)CONCAT71(uVar4,1);
  if (*(char *)((long)&(__this->fields)._chatHidden + 2) == '\0') {
    if (DAT_057045d4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057045d4 = '\x01';
    }
    if (*(char *)((long)&(__this->fields)._notificationBadge + 1) == '\0') {
      pTVar1 = (__this->fields)._inputField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pTVar1 = (__this->fields)._inputField;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)&(pTVar1->fields).m_Mesh != '\0') {
          return bVar3;
        }
      }
    }
    bVar3 = (bool_conflict)CONCAT71(uVar4,(char)(__this->fields)._emojiPanelActive != '\0');
  }
  return bVar3;
}


// UI.ChatPanel$$SetTextAndPositionCaret
// il2cpp: void UI_ChatPanel__SetTextAndPositionCaret (UI_ChatPanel_o* __this, System_String_o* newText, const MethodInfo* method);
// 0x40a4ea0

void UI_ChatPanel__SetTextAndPositionCaret
               (UI_ChatPanel_o *__this,System_String_o *newText,MethodInfo *method)

{
  int32_t value;
  TMPro_TMP_InputField_o *pTVar1;
  long *plVar2;
  bool_conflict bVar3;
  
  if (DAT_057045f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045f4 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (plVar2 = *(long **)&(pTVar1->fields).m_CachedViewportRect.fields.m_Width,
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x7d8))(plVar2,0,0,*(undefined8 *)(*plVar2 + 0x7e0));
        if ((newText != (System_String_o *)0x0) &&
           (pTVar1 = (__this->fields)._inputField, pTVar1 != (TMPro_TMP_InputField_o *)0x0)) {
          value = (newText->fields)._stringLength;
          TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
                  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                  return;
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
  return;
}


// UI.ChatPanel$$SetTextAndCaretPosition
// il2cpp: void UI_ChatPanel__SetTextAndCaretPosition (UI_ChatPanel_o* __this, System_String_o* newText, int32_t caretPosition, const MethodInfo* method);
// 0x40a53f0

void UI_ChatPanel__SetTextAndCaretPosition
               (UI_ChatPanel_o *__this,System_String_o *newText,int32_t caretPosition,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  long *plVar2;
  bool_conflict bVar3;
  int value;
  
  if (DAT_057045f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045f5 = '\x01';
  }
  pTVar1 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar1 = (__this->fields)._inputField;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_text(pTVar1,newText,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._inputField;
      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (plVar2 = *(long **)&(pTVar1->fields).m_CachedViewportRect.fields.m_Width,
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x7d8))(plVar2,0,0,*(undefined8 *)(*plVar2 + 0x7e0));
        if (newText != (System_String_o *)0x0) {
          value = (newText->fields)._stringLength;
          if (caretPosition < value) {
            value = caretPosition;
          }
          if (caretPosition < 0) {
            value = 0;
          }
          pTVar1 = (__this->fields)._inputField;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            TMPro_TMP_InputField__set_caretPosition(pTVar1,value,(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._inputField;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__set_selectionAnchorPosition(pTVar1,value,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._inputField;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                TMPro_TMP_InputField__set_selectionFocusPosition(pTVar1,value,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._inputField;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields)._inputField;
                  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                    TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
                    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                    return;
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
  return;
}


// UI.ChatPanel$$GetCachedRectTransform
// il2cpp: UnityEngine_RectTransform_o* UI_ChatPanel__GetCachedRectTransform (UI_ChatPanel_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x40a3080

UnityEngine_RectTransform_o *
UI_ChatPanel__GetCachedRectTransform
          (UI_ChatPanel_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *local_30;
  
  if (DAT_057045f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045f6 = '\x01';
  }
  local_30 = (UnityEngine_RectTransform_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_RectTransform_o *)0x0;
  if ((char)bVar2 == '\0') {
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              &(__this->fields)._isInteractingWithChatUI;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_040a31b0:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (pSVar1,(Il2CppObject *)obj,(Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    pUVar3 = local_30;
    if ((char)bVar2 == '\0') {
      if (obj == (UnityEngine_GameObject_o *)0x0) goto LAB_040a31b0;
      pUVar3 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_RectTransform_GetComponent_RectTransform);
      local_30 = pUVar3;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      pUVar3 = local_30;
      if ((char)bVar2 != '\0') {
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  &(__this->fields)._isInteractingWithChatUI;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_040a31b0;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)local_30,MethodInfo_Void_set_Item);
        pUVar3 = local_30;
      }
    }
  }
  return pUVar3;
}


// UI.ChatPanel$$SaveCurrentConversation
// il2cpp: void UI_ChatPanel__SaveCurrentConversation (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a4b20

void UI_ChatPanel__SaveCurrentConversation(UI_ChatPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_InputField_o *pTVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *text;
  bool_conflict bVar4;
  int32_t caretPos;
  Il2CppObject *arg0;
  System_String_o *key;
  int32_t local_1c;
  
  if (DAT_057045f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PUBLIC");
    il2cpp_init_method_metadata(&"PM_{0}");
    DAT_057045f7 = '\x01';
  }
  pTVar2 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    cVar1 = (char)(__this->fields)._inPMMode;
    key = "PUBLIC";
    if ((cVar1 != '\0') &&
       (pPVar3 = (__this->fields)._currentPMTarget, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
      local_1c = (pPVar3->fields).actorNumber;
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
      key = System_String__Format("PM_{0}",arg0,(MethodInfo *)0x0);
      cVar1 = (char)(__this->fields)._inPMMode;
    }
    if (cVar1 == '\0') {
      pTVar2 = (__this->fields)._inputField;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto LAB_040a4c91;
      bVar4 = System_String__IsNullOrEmpty
                        (*(System_String_o **)&(pTVar2->fields).m_SelectionColor.fields.a,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__ClearConversation("PUBLIC",(MethodInfo *)0x0);
        return;
      }
    }
    pTVar2 = (__this->fields)._inputField;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) {
LAB_040a4c91:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    text = *(System_String_o **)&(pTVar2->fields).m_SelectionColor.fields.a;
    caretPos = TMPro_TMP_InputField__get_caretPosition(pTVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__SaveConversation(key,text,caretPos,(MethodInfo *)0x0);
  }
  return;
}


// UI.ChatPanel$$RestorePMPartners
// il2cpp: void UI_ChatPanel__RestorePMPartners (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a1460

void UI_ChatPanel__RestorePMPartners(UI_ChatPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_Player__o *pSVar5;
  Photon_Realtime_Player_array *pPVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar7;
  int32_t item;
  int32_t item_00;
  System_Collections_Generic_HashSet_int__o *__this_02;
  long lVar8;
  Photon_Realtime_Player_o *pPVar9;
  UI_ChatPanel___c__DisplayClass137_0_o *__this_03;
  Photon_Realtime_Room_o *pPVar10;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  int index;
  undefined8 in_stack_ffffffffffffff88;
  UI_ChatPanel_o *pUVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (DAT_057045f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Exists);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Player);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RestorePMPartners_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass137_0);
    DAT_057045f8 = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(__this_02,MethodInfo_HashSet_1_System_Int32);
  index = 0;
  iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(TypeInfo_ChatManager + 0xb8);
    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_040a1926;
    if (*(int *)(*(long *)(lVar8 + 0x28) + 0x18) <= index) break;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(TypeInfo_ChatManager + 0xb8);
    }
    if (*(System_Collections_Generic_List_bool__o **)(lVar8 + 0xb0) ==
        (System_Collections_Generic_List_bool__o *)0x0) goto LAB_040a1926;
    bVar7 = System_Collections_Generic_List<bool>__get_Item
                      (*(System_Collections_Generic_List_bool__o **)(lVar8 + 0xb0),index,
                       MethodInfo_Boolean_get_Item);
    if ((char)bVar7 != '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = *(System_Collections_Generic_List_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x30);
      if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040a1926;
      item = System_Collections_Generic_List<int>__get_Item(pSVar4,index,MethodInfo_Int32_get_Item);
      pSVar4 = *(System_Collections_Generic_List_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xb8);
      if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040a1926;
      item_00 = System_Collections_Generic_List<int>__get_Item(pSVar4,index,MethodInfo_Int32_get_Item);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar9 == (Photon_Realtime_Player_o *)0x0) goto LAB_040a1926;
      if (item != (pPVar9->fields).actorNumber) {
        if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_040a1926;
        System_Collections_Generic_HashSet<int>__Add(__this_02,item,MethodInfo_Boolean_Add);
      }
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar9 == (Photon_Realtime_Player_o *)0x0) goto LAB_040a1926;
      if (item_00 != (pPVar9->fields).actorNumber) {
        if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_040a1926;
        System_Collections_Generic_HashSet<int>__Add(__this_02,item_00,MethodInfo_Boolean_Add);
      }
    }
    index = index + 1;
    iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (__this_02 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet<int>__GetEnumerator(&local_48,__this_02,MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    pUVar11 = __this;
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
    while (__this_00.fields._8_8_ = pUVar11,
          __this_00.fields._set =
               (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88,
          __this_00.fields._current = (Il2CppObject *)pSVar12,
          bVar7 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                            (__this_00,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98),
          (char)bVar7 != '\0') {
      __this_03 = (UI_ChatPanel___c__DisplayClass137_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass137_0);
      UI_ChatPanel_<>c__DisplayClass137_0___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_03 == (UI_ChatPanel___c__DisplayClass137_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (__this_03->fields).partnerID = (int32_t)local_48.fields._current;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar10 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pPVar9 = (Photon_Realtime_Player_o *)
               (*(pPVar10->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar10,(ulong)(uint)(__this_03->fields).partnerID,0,
                          (pPVar10->klass->vtable)._10_GetPlayer.method);
      if (pPVar9 != (Photon_Realtime_Player_o *)0x0) {
        pSVar5 = (__this->fields)._pmPartners;
        match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Player);
        System_Predicate<object>___ctor();
        if (pSVar5 == (System_Collections_Generic_List_Player__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this = pUVar11;
        bVar7 = System_Collections_Generic_List<object>__Exists
                          ((System_Collections_Generic_List_object__o *)pSVar5,match,MethodInfo_Boolean_Exists);
        lVar8 = MethodInfo_Void_Add;
        pUVar11 = __this;
        if ((char)bVar7 == '\0') {
          pSVar5 = (__this->fields)._pmPartners;
          if (pSVar5 == (System_Collections_Generic_List_Player__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar6 = (pSVar5->fields)._items;
          if (pPVar6 == (Photon_Realtime_Player_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar3 = (pSVar5->fields)._size;
          if (uVar3 < (uint)pPVar6->max_length) {
            (pSVar5->fields)._size = uVar3 + 1;
            pPVar6->m_Items[(int)uVar3] = pPVar9;
            il2cpp_runtime_glue(pPVar6->m_Items + (int)uVar3,pPVar9);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pPVar9,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_01.fields._8_8_ = pUVar11;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
    __this_01.fields._current = (Il2CppObject *)pSVar12;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_HashSet_Enumerator<int>__Dispose
              (__this_01,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
    pSVar5 = (__this->fields)._pmPartners;
    if (pSVar5 != (System_Collections_Generic_List_Player__o *)0x0) {
      iVar2 = (pSVar5->fields)._size;
      if (0 < iVar2) {
        (__this->fields)._currentPMIndex = iVar2 + -1;
      }
      UI_ChatPanel__UpdateChatModeElements(__this,method_00);
      return;
    }
  }
LAB_040a1926:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ChatPanel$$.ctor
// il2cpp: void UI_ChatPanel___ctor (UI_ChatPanel_o* __this, const MethodInfo* method);
// 0x40a6610

void UI_ChatPanel___ctor(UI_ChatPanel_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_TMP_InputField__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_Player__o *__this_02;
  
  if (DAT_057045f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_GameObject_UnityEngine);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_GameObject_TMPro_TMP_In);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_GameObject__TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_GameObject__RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_Player);
    il2cpp_init_method_metadata(&MethodInfo_List_1_TMPro_TMP_InputField);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_List_Player);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057045f9 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_TMP_InputField__o *)il2cpp_runtime_glue(TypeInfo_List_TMP_InputField);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_TMPro_TMP_InputField);
  (__this->fields)._linesPool = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._linesPool,__this_00);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_GameObject__TMP_InputField);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_UnityEngine_GameObject_TMPro_TMP_In);
  (__this->fields)._cachedInputFields =
       (System_Collections_Generic_Dictionary_GameObject__TMP_InputField__o *)pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._cachedInputFields,pSVar2);
  __this_01 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  (__this->fields)._allMessages = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._allMessages,__this_01);
  __this_02 = (System_Collections_Generic_List_Player__o *)il2cpp_runtime_glue(TypeInfo_List_Player);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_Photon_Realtime_Player);
  (__this->fields)._pmPartners = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._pmPartners,__this_02);
  (__this->fields)._currentPMIndex = -1;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_GameObject__RectTransform);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_UnityEngine_GameObject_UnityEngine);
  *(System_Collections_Generic_Dictionary_object__object__o **)
   &(__this->fields)._isInteractingWithChatUI = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._isInteractingWithChatUI,pSVar2);
  uVar1 = **(undefined8 **)(DAT_057110b0 + 0xb8);
  (__this->fields)._panelMode = (int)uVar1;
  (__this->fields)._stickerInserted = (int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_glue(&(__this->fields)._panelMode);
  *(undefined4 *)&(__this->fields)._stickerTag = 0xff800000;
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


