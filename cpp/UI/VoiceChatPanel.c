// Type: UI.VoiceChatPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/VoiceChatPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs
// --------------------------------

// UI.VoiceChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_VoiceChatPanel__get_ThemePanel (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x43ed8d0

System_String_o * UI_VoiceChatPanel__get_ThemePanel(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae500 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VoiceChatPanel");
    g_data_057ae500 = '\x01';
  }
  return "VoiceChatPanel";
}


// UI.VoiceChatPanel$$Setup
// il2cpp: void UI_VoiceChatPanel__Setup (UI_VoiceChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43ed900

void UI_VoiceChatPanel__Setup(UI_VoiceChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  UI_VoiceChatPanel_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_VoiceChatPanel_o *__this_03;
  Il2CppObject *pIVar7;
  UnityEngine_RectTransform_o *__this_04;
  System_String_o *pSVar8;
  MethodInfo_24E7B40 *__this_05;
  System_String_o *str1;
  UnityEngine_Object_o *obj;
  UI_ElementStyle_o *__this_06;
  UI_VoiceChatPanel_o *pUVar9;
  System_Collections_Generic_Dictionary_int__object__o *pSVar10;
  MethodInfo_24E7B40 *pMVar11;
  MethodInfo_24E7B40 *key;
  System_String_o **ppSVar12;
  long *plVar13;
  UnityEngine_Vector2_o value;
  UnityEngine_Color_o UVar14;
  
  if (g_data_057ae501 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Content/Panel");
    il2cpp_runtime_helper_023445d0(&"Content");
    g_data_057ae501 = '\x01';
  }
  pMVar11 = (MethodInfo_24E7B40 *)0x0;
  pUVar9 = __this;
  pUVar4 = (UI_VoiceChatPanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UI_VoiceChatPanel_o *)0x0) {
    pMVar11 = "Content/Panel";
    pUVar5 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar4,(System_String_o *)"Content/Panel",(MethodInfo *)0x0);
    pUVar9 = pUVar4;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      (__this->fields)._panel = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._panel);
      pMVar11 = (MethodInfo_24E7B40 *)0x0;
      pUVar9 = __this;
      pUVar4 = (UI_VoiceChatPanel_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UI_VoiceChatPanel_o *)0x0) {
        pMVar11 = "Content";
        __this_03 = (UI_VoiceChatPanel_o *)
                    UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar4,(System_String_o *)"Content",
                               (MethodInfo *)0x0);
        pUVar9 = pUVar4;
        if (__this_03 != (UI_VoiceChatPanel_o *)0x0) {
          pMVar11 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          pIVar7 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_03,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pUVar9 = __this_03;
          if (pIVar7 != (Il2CppObject *)0x0) {
            (*pIVar7->klass->vtable[0x26].methodPtr)(0x42c80000,pIVar7);
            pMVar11 = (MethodInfo_24E7B40 *)0x0;
            pUVar4 = (UI_VoiceChatPanel_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar9 = __this;
            if (pUVar4 != (UI_VoiceChatPanel_o *)0x0) {
              pMVar11 = MethodInfo_RectTransform_GetComponent_RectTransform;
              __this_04 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pUVar9 = pUVar4;
              if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) &&
                 (__this_04 != (UnityEngine_RectTransform_o *)0x0)) {
                value.fields.x = (float)*(int *)(lVar2 + 0x14);
                value.fields.y = 100.0;
                UnityEngine_RectTransform__set_sizeDelta(__this_04,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  key = pMVar11;
  ppSVar12 = (System_String_o **)pUVar9;
  if (g_data_057ae502 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar12 = &"";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae502 = '\x01';
  }
  if ((pMVar11 != (MethodInfo_24E7B40 *)0x0) &&
     (ppSVar12 = (System_String_o **)(pUVar9->fields)._playersTalking,
     (UI_VoiceChatPanel_o *)ppSVar12 != (UI_VoiceChatPanel_o *)0x0)) {
    key = (MethodInfo_24E7B40 *)(ulong)*(uint *)&pMVar11->name;
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)ppSVar12,
                       *(uint *)&pMVar11->name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x148), lVar2 != 0)) {
      iVar1 = *(int32_t *)(lVar2 + 0x14);
      pSVar8 = (System_String_o *)
               (*(((System_Collections_Generic_Dictionary_int__object__c *)pUVar9->klass)->vtable)._4_unknown.
                 methodPtr)(pUVar9,(((System_Collections_Generic_Dictionary_int__object__c *)pUVar9->klass)->
                                   vtable)._4_unknown.method);
      __this_05 = (MethodInfo_24E7B40 *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_05,iVar1,120.0,20.0,pSVar8,(MethodInfo *)0x0);
      iVar1 = *(int32_t *)&pMVar11->name;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = GameManagers_ChatManager__GetIDString(iVar1,0,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = (MethodInfo_24E7B40 *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
      str1 = PhotonExtensions__GetStringProperty
                       ((Photon_Realtime_Player_o *)pMVar11,(System_String_o *)key,"",
                        (MethodInfo *)0x0);
      pUVar6 = (pUVar9->fields)._panel;
      ppSVar12 = (System_String_o **)0x0;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3ae5ba0(pSVar8,str1,(MethodInfo *)0x0);
        pUVar6 = UI_ElementFactory__CreateWhiteLabel
                           (pUVar5,(UI_ElementStyle_o *)__this_05,pSVar8,0,3,(MethodInfo *)0x0);
        pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)(pUVar9->fields)._playersTalking;
        ppSVar12 = (System_String_o **)0x0;
        key = __this_05;
        if (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar10,*(int32_t *)&pMVar11->name,(Il2CppObject *)pUVar6,MethodInfo_Void_Add);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = key;
  plVar13 = (long *)ppSVar12;
  if (g_data_057ae503 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    plVar13 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae503 = '\x01';
  }
  if ((key != (MethodInfo_24E7B40 *)0x0) &&
     (pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
                (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._playersTalking, plVar13 = (long *)0x0,
     pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    pMVar11 = (MethodInfo_24E7B40 *)(ulong)*(uint *)&key->name;
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar10,*(uint *)&key->name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
              (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._playersTalking;
    plVar13 = (long *)0x0;
    if (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar10,*(int32_t *)&key->name,MethodInfo_GameObject_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar11 = (MethodInfo_24E7B40 *)0x0;
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
                (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._playersTalking;
      plVar13 = (long *)0x0;
      if (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar10,*(int32_t *)&key->name,MethodInfo_Boolean_Remove);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar12 = (System_String_o **)plVar13;
  if (g_data_057ae504 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    ppSVar12 = &"Default";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae504 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x148), lVar2 != 0)) {
    iVar1 = *(int32_t *)(lVar2 + 0x14);
    pSVar8 = (System_String_o *)
             (*(((System_Collections_Generic_Dictionary_int__object__c *)
                ((UI_VoiceChatPanel_o *)plVar13)->klass)->vtable)._4_unknown.methodPtr)
                       (plVar13,(((System_Collections_Generic_Dictionary_int__object__c *)
                                 ((UI_VoiceChatPanel_o *)plVar13)->klass)->vtable)._4_unknown.method);
    __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_06,iVar1,120.0,20.0,pSVar8,(MethodInfo *)0x0);
    pUVar6 = (((UI_VoiceChatPanel_o *)plVar13)->fields)._panel;
    ppSVar12 = (System_String_o **)(UI_VoiceChatPanel_o *)0x0;
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      ppSVar12 = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
      pUVar9 = (UI_VoiceChatPanel_o *)
               UI_ElementFactory__CreateWhiteLabel
                         ((UnityEngine_Transform_o *)ppSVar12,__this_06,(System_String_o *)pMVar11,0,3,
                          (MethodInfo *)0x0);
      if (pUVar9 != (UI_VoiceChatPanel_o *)0x0) {
        pIVar7 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar9,MethodInfo_Text_GetComponent_Text)
        ;
        ppSVar12 = (System_String_o **)pUVar9;
        if (__this_06 != (UI_ElementStyle_o *)0x0) {
          ppSVar12 = (System_String_o **)(__this_06->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar14 = UI_UIManager__GetThemeColor
                             ((System_String_o *)ppSVar12,"TextColor","Default","DefaultPanel",
                              (MethodInfo *)0x0);
          if (pIVar7 != (Il2CppObject *)0x0) {
            (*pIVar7->klass->vtable[0x17].methodPtr)
                      (UVar14.fields._0_8_,UVar14.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae505 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
    g_data_057ae505 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._playersTalking =
       (System_Collections_Generic_Dictionary_int__GameObject__o *)pSVar10;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar12)->fields)._playersTalking,pSVar10);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar12)->fields)._popups,__this_00);
  pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,pSVar8,0x7fffffff,(MethodInfo *)0x0);
  (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar12)->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (((UI_VoiceChatPanel_o *)ppSVar12)->fields)._categoryPanelTypes =
       (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar12)->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar12,(MethodInfo *)0x0);
  return;
}


// UI.VoiceChatPanel$$AddPlayer
// il2cpp: void UI_VoiceChatPanel__AddPlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43eda70

void UI_VoiceChatPanel__AddPlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_o *pSVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *str1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Object_o *obj;
  UI_ElementStyle_o *__this_03;
  UI_VoiceChatPanel_o *__this_04;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_int__object__o *pSVar9;
  Photon_Realtime_Player_o *key;
  System_String_o **ppSVar10;
  long *plVar11;
  UnityEngine_Color_o UVar12;
  
  key = player;
  ppSVar10 = (System_String_o **)__this;
  if (g_data_057ae502 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar10 = &"";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae502 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (ppSVar10 = (System_String_o **)(__this->fields)._playersTalking,
     (UI_VoiceChatPanel_o *)ppSVar10 != (UI_VoiceChatPanel_o *)0x0)) {
    uVar1 = (player->fields).actorNumber;
    key = (Photon_Realtime_Player_o *)(ulong)uVar1;
    bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)ppSVar10,uVar1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x148), lVar3 != 0)) {
      iVar2 = *(int32_t *)(lVar3 + 0x14);
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pPVar6 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)pPVar6,iVar2,120.0,20.0,pSVar5,(MethodInfo *)0x0);
      iVar2 = (player->fields).actorNumber;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = GameManagers_ChatManager__GetIDString(iVar2,0,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = (Photon_Realtime_Player_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
      str1 = PhotonExtensions__GetStringProperty(player,(System_String_o *)key,"",(MethodInfo *)0x0)
      ;
      pUVar7 = (__this->fields)._panel;
      ppSVar10 = (System_String_o **)0x0;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_3ae5ba0(pSVar5,str1,(MethodInfo *)0x0);
        pUVar7 = UI_ElementFactory__CreateWhiteLabel
                           (parent,(UI_ElementStyle_o *)pPVar6,pSVar5,0,3,(MethodInfo *)0x0);
        pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._playersTalking;
        ppSVar10 = (System_String_o **)0x0;
        key = pPVar6;
        if (pSVar9 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar9,(player->fields).actorNumber,(Il2CppObject *)pUVar7,MethodInfo_Void_Add);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar6 = key;
  plVar11 = (long *)ppSVar10;
  if (g_data_057ae503 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    plVar11 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae503 = '\x01';
  }
  if ((key != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
               (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._playersTalking, plVar11 = (long *)0x0,
     pSVar9 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    uVar1 = (key->fields).actorNumber;
    pPVar6 = (Photon_Realtime_Player_o *)(ulong)uVar1;
    bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar9,uVar1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      return;
    }
    pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
             (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._playersTalking;
    plVar11 = (long *)0x0;
    if (pSVar9 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar9,(key->fields).actorNumber,MethodInfo_GameObject_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar6 = (Photon_Realtime_Player_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
               (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._playersTalking;
      plVar11 = (long *)0x0;
      if (pSVar9 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar9,(key->fields).actorNumber,MethodInfo_Boolean_Remove);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar10 = (System_String_o **)plVar11;
  if (g_data_057ae504 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    ppSVar10 = &"Default";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae504 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x148), lVar3 != 0)) {
    iVar2 = *(int32_t *)(lVar3 + 0x14);
    pSVar5 = (System_String_o *)
             (*(((System_Collections_Generic_Dictionary_int__object__c *)
                ((UI_VoiceChatPanel_o *)plVar11)->klass)->vtable)._4_unknown.methodPtr)
                       (plVar11,(((System_Collections_Generic_Dictionary_int__object__c *)
                                 ((UI_VoiceChatPanel_o *)plVar11)->klass)->vtable)._4_unknown.method);
    __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_03,iVar2,120.0,20.0,pSVar5,(MethodInfo *)0x0);
    pUVar7 = (((UI_VoiceChatPanel_o *)plVar11)->fields)._panel;
    ppSVar10 = (System_String_o **)(UI_VoiceChatPanel_o *)0x0;
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      ppSVar10 = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      __this_04 = (UI_VoiceChatPanel_o *)
                  UI_ElementFactory__CreateWhiteLabel
                            ((UnityEngine_Transform_o *)ppSVar10,__this_03,(System_String_o *)pPVar6,0,3,
                             (MethodInfo *)0x0);
      if (__this_04 != (UI_VoiceChatPanel_o *)0x0) {
        pIVar8 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Text_GetComponent_Text);
        ppSVar10 = (System_String_o **)__this_04;
        if (__this_03 != (UI_ElementStyle_o *)0x0) {
          ppSVar10 = (System_String_o **)(__this_03->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar12 = UI_UIManager__GetThemeColor
                             ((System_String_o *)ppSVar10,"TextColor","Default","DefaultPanel",
                              (MethodInfo *)0x0);
          if (pIVar8 != (Il2CppObject *)0x0) {
            (*pIVar8->klass->vtable[0x17].methodPtr)
                      (UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar8,pIVar8->klass->vtable[0x17].method);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae505 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
    g_data_057ae505 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor(pSVar9,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._playersTalking =
       (System_Collections_Generic_Dictionary_int__GameObject__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar10)->fields)._playersTalking,pSVar9);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar10)->fields)._popups,__this_00);
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,pSVar5,0x7fffffff,(MethodInfo *)0x0);
  (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar10)->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (((UI_VoiceChatPanel_o *)ppSVar10)->fields)._categoryPanelTypes =
       (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)ppSVar10)->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar10,(MethodInfo *)0x0);
  return;
}


// UI.VoiceChatPanel$$RemovePlayer
// il2cpp: void UI_VoiceChatPanel__RemovePlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43edc80

void UI_VoiceChatPanel__RemovePlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint key;
  int32_t fontSize;
  long lVar1;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  Settings_StringSetting_o *__this_02;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_04;
  UI_VoiceChatPanel_o *__this_05;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  Photon_Realtime_Player_o *title;
  long *plVar6;
  System_String_o **__this_06;
  UnityEngine_Color_o UVar7;
  
  title = player;
  plVar6 = (long *)__this;
  if (g_data_057ae503 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    plVar6 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae503 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._playersTalking,
     plVar6 = (long *)0x0, pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    key = (player->fields).actorNumber;
    title = (Photon_Realtime_Player_o *)(ulong)key;
    bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar5,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._playersTalking;
    plVar6 = (long *)0x0;
    if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar5,(player->fields).actorNumber,MethodInfo_GameObject_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      title = (Photon_Realtime_Player_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._playersTalking;
      plVar6 = (long *)0x0;
      if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar5,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_06 = (System_String_o **)plVar6;
  if (g_data_057ae504 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    __this_06 = &"Default";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae504 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x148), lVar1 != 0)) {
    fontSize = *(int32_t *)(lVar1 + 0x14);
    pSVar3 = (System_String_o *)
             (*(((UI_VoiceChatPanel_o *)plVar6)->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (plVar6,(((UI_VoiceChatPanel_o *)plVar6)->klass->vtable)._4_get_ThemePanel.method);
    __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_04,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
    __this_00 = (((UI_VoiceChatPanel_o *)plVar6)->fields)._panel;
    __this_06 = (System_String_o **)(UI_VoiceChatPanel_o *)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_06 = (System_String_o **)UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_05 = (UI_VoiceChatPanel_o *)
                  UI_ElementFactory__CreateWhiteLabel
                            ((UnityEngine_Transform_o *)__this_06,__this_04,(System_String_o *)title,0,3,
                             (MethodInfo *)0x0);
      if (__this_05 != (UI_VoiceChatPanel_o *)0x0) {
        pIVar4 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_05,MethodInfo_Text_GetComponent_Text);
        __this_06 = (System_String_o **)__this_05;
        if (__this_04 != (UI_ElementStyle_o *)0x0) {
          __this_06 = (System_String_o **)(__this_04->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar7 = UI_UIManager__GetThemeColor
                            ((System_String_o *)__this_06,"TextColor","Default","DefaultPanel",
                             (MethodInfo *)0x0);
          if (pIVar4 != (Il2CppObject *)0x0) {
            (*pIVar4->klass->vtable[0x17].methodPtr)
                      (UVar7.fields._0_8_,UVar7.fields._8_8_,pIVar4,pIVar4->klass->vtable[0x17].method);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae505 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
    g_data_057ae505 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (((UI_VoiceChatPanel_o *)__this_06)->fields)._playersTalking =
       (System_Collections_Generic_Dictionary_int__GameObject__o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_06)->fields)._playersTalking,pSVar5);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UI_BasePopup);
  (((UI_VoiceChatPanel_o *)__this_06)->fields)._popups = __this_01;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_06)->fields)._popups,__this_01);
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_02 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_02,pSVar3,0x7fffffff,(MethodInfo *)0x0);
  (((UI_VoiceChatPanel_o *)__this_06)->fields)._currentCategoryPanelName = __this_02;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_06)->fields)._currentCategoryPanelName,__this_02);
  __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_System_String_System_Type);
  (((UI_VoiceChatPanel_o *)__this_06)->fields)._categoryPanelTypes =
       (System_Collections_Generic_Dictionary_string__Type__o *)__this_03;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_06)->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
  return;
}


// UI.VoiceChatPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_VoiceChatPanel__CreateLine (UI_VoiceChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x43edd70

UnityEngine_GameObject_o *
UI_VoiceChatPanel__CreateLine(UI_VoiceChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  long lVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  Settings_StringSetting_o *__this_02;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  UnityEngine_GameObject_o *extraout_RAX;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_04;
  UI_VoiceChatPanel_o *__this_05;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_06;
  MethodInfo *extraout_RDX;
  System_String_o **__this_07;
  UnityEngine_Color_o UVar4;
  
  __this_07 = (System_String_o **)__this;
  if (g_data_057ae504 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    __this_07 = &"Default";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae504 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x148), lVar1 != 0)) {
    fontSize = *(int32_t *)(lVar1 + 0x14);
    pSVar2 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
    __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_04,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._panel;
    __this_07 = (System_String_o **)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_07 = (System_String_o **)UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_05 = (UI_VoiceChatPanel_o *)
                  UI_ElementFactory__CreateWhiteLabel
                            ((UnityEngine_Transform_o *)__this_07,__this_04,text,0,3,(MethodInfo *)0x0);
      if (__this_05 != (UI_VoiceChatPanel_o *)0x0) {
        __this_07 = (System_String_o **)__this_05;
        pIVar3 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_05,MethodInfo_Text_GetComponent_Text);
        if (__this_04 != (UI_ElementStyle_o *)0x0) {
          __this_07 = (System_String_o **)(__this_04->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar4 = UI_UIManager__GetThemeColor
                            ((System_String_o *)__this_07,"TextColor","Default","DefaultPanel",
                             (MethodInfo *)0x0);
          if (pIVar3 != (Il2CppObject *)0x0) {
            (*pIVar3->klass->vtable[0x17].methodPtr)
                      (UVar4.fields._0_8_,UVar4.fields._8_8_,pIVar3,pIVar3->klass->vtable[0x17].method);
            return (UnityEngine_GameObject_o *)__this_05;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae505 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
    g_data_057ae505 = '\x01';
  }
  __this_06 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor(__this_06,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (((UI_VoiceChatPanel_o *)__this_07)->fields)._playersTalking =
       (System_Collections_Generic_Dictionary_int__GameObject__o *)__this_06;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_07)->fields)._playersTalking,__this_06);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UI_BasePopup);
  (((UI_VoiceChatPanel_o *)__this_07)->fields)._popups = __this_01;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_07)->fields)._popups,__this_01);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_02 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_02,pSVar2,0x7fffffff,(MethodInfo *)0x0);
  (((UI_VoiceChatPanel_o *)__this_07)->fields)._currentCategoryPanelName = __this_02;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_07)->fields)._currentCategoryPanelName,__this_02);
  __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_System_String_System_Type);
  (((UI_VoiceChatPanel_o *)__this_07)->fields)._categoryPanelTypes =
       (System_Collections_Generic_Dictionary_string__Type__o *)__this_03;
  il2cpp_runtime_helper_022b4080(&(((UI_VoiceChatPanel_o *)__this_07)->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_07,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.VoiceChatPanel$$.ctor
// il2cpp: void UI_VoiceChatPanel___ctor (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x43edf30

void UI_VoiceChatPanel___ctor(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  
  if (g_data_057ae505 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
    g_data_057ae505 = '\x01';
  }
  __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor(__this_03,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (__this->fields)._playersTalking = (System_Collections_Generic_Dictionary_int__GameObject__o *)__this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._playersTalking,__this_03);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


