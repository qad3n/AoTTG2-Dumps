// Type: UI.VoiceChatPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/VoiceChatPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs
// --------------------------------

// UI.VoiceChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_VoiceChatPanel__get_ThemePanel (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x5d538d0

System_String_o * UI_VoiceChatPanel__get_ThemePanel(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatPanel");
    Il2CppMethodInitialized_07547f10 = '\x01';
  }
  return "VoiceChatPanel";
}


// UI.VoiceChatPanel$$Setup
// il2cpp: void UI_VoiceChatPanel__Setup (UI_VoiceChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d53900

void UI_VoiceChatPanel__Setup(UI_VoiceChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    Il2CppMethodInitialized_07547f11 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      (__this->fields)._panel = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panel);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar5,100.0,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
            pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar3,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
                  (pSVar2 = (pSVar1->fields).ChatWidth, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
                 (__this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                value.fields.y = 100.0;
                value.fields.x = (float)(pSVar2->fields)._value;
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$AddPlayer
// il2cpp: void UI_VoiceChatPanel__AddPlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d53a70

void UI_VoiceChatPanel__AddPlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  bool bVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  UI_ElementStyle_o *__this_00;
  UnityEngine_UI_Text_o *pUVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar12;
  UnityEngine_UI_Text_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_Text_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Text_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f12 = '\x01';
  }
  pUStack_38 = (UnityEngine_UI_Text_o *)0x0;
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._labels,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (pSVar2,(player->fields).actorNumber,(Il2CppObject **)&pUStack_38,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Text_TryGetValue);
    if (bVar5) {
      if ((pUStack_38 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUStack_38,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto label_05d53d83;
      bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
      if (bVar6) {
        return;
      }
    }
    iVar1 = (player->fields).actorNumber;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar8 = GameManagers_ChatManager__GetIDString(iVar1,false,false,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar9 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar9,(MethodInfo *)0x0);
    pUVar11 = pUStack_38;
    if (bVar5) {
      pMVar12 = extraout_RDX;
      if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
        pMVar12 = extraout_RDX_00;
      }
      UI_LanguageFonts__SetText(pUVar11,pSVar8,pMVar12);
      if ((((pUStack_38 != (UnityEngine_UI_Text_o *)0x0) &&
           (pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUStack_38,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
          (UnityEngine_Transform__SetAsLastSibling(pUVar10,(MethodInfo *)0x0),
          pUStack_38 != (UnityEngine_UI_Text_o *)0x0)) &&
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUStack_38,(MethodInfo *)0x0),
         pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).ChatFontSize, pSVar4 != (Settings_IntSetting_o *)0x0)) {
        iVar1 = (pSVar4->fields)._value;
        pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(__this_00,iVar1,120.0,20.0,pSVar9,(MethodInfo *)0x0);
        pUVar7 = (__this->fields)._panel;
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          pUVar7 = UI_ElementFactory__CreateWhiteLabel(pUVar10,__this_00,pSVar8,0,3,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar7,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_Text);
            pMVar12 = extraout_RDX_01;
            if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
              pMVar12 = extraout_RDX_02;
            }
            UI_LanguageFonts__SetText(pUVar11,pSVar8,pMVar12);
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._labels;
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary_int__object___Add
                        (pSVar2,(player->fields).actorNumber,(Il2CppObject *)pUVar11,
                         (MethodInfo_4A0F740 *)MethodInfo_System_Collections_Generic_Dictionary_int_Text_Add);
              return;
            }
          }
        }
      }
    }
  }
label_05d53d83:
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$RemovePlayer
// il2cpp: void UI_VoiceChatPanel__RemovePlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d53f40

void UI_VoiceChatPanel__RemovePlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Component_o *pUStack_18;
  
  if (Il2CppMethodInitialized_07547f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Text_TryGetValue);
    Il2CppMethodInitialized_07547f13 = '\x01';
  }
  pUStack_18 = (UnityEngine_Component_o *)0x0;
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._labels,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this_00,(player->fields).actorNumber,(Il2CppObject **)&pUStack_18,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Text_TryGetValue);
    if (!bVar1) {
      return;
    }
    if ((pUStack_18 != (UnityEngine_Component_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject(pUStack_18,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if ((pUStack_18 != (UnityEngine_Component_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject(pUStack_18,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$ClearPlayer
// il2cpp: void UI_VoiceChatPanel__ClearPlayer (UI_VoiceChatPanel_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x5d53ff0

void UI_VoiceChatPanel__ClearPlayer(UI_VoiceChatPanel_o *__this,int32_t actorNumber,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Component_o *pUStack_20;
  
  if (Il2CppMethodInitialized_07547f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Text_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Text_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547f14 = '\x01';
  }
  pUStack_20 = (UnityEngine_Component_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._labels;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (pSVar1,actorNumber,(Il2CppObject **)&pUStack_20,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Text_TryGetValue);
    if (!bVar2) {
      return;
    }
    if (pUStack_20 != (UnityEngine_Component_o *)0x0) {
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUStack_20,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._labels;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar1,actorNumber,
                   (MethodInfo_4A10DC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_Text_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$.ctor
// il2cpp: void UI_VoiceChatPanel___ctor (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x5d540c0

void UI_VoiceChatPanel___ctor(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__Text__o *__this_00;
  
  if (Il2CppMethodInitialized_07547f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Text_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_Text);
    Il2CppMethodInitialized_07547f15 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_Text);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_Text_ctor);
  (__this->fields)._labels = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labels);
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


