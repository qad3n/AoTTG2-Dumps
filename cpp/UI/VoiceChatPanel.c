// Type: UI.VoiceChatPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/VoiceChatPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs
// --------------------------------

// UI.VoiceChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_VoiceChatPanel__get_ThemePanel (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x1822842e0

System_String_o * UI_VoiceChatPanel__get_ThemePanel(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatPanel");
    Il2CppMethodInitialized_184347397 = '\x01';
  }
  return "VoiceChatPanel";
}


// UI.VoiceChatPanel$$Setup
// il2cpp: void UI_VoiceChatPanel__Setup (UI_VoiceChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822840d0

void UI_VoiceChatPanel__Setup(UI_VoiceChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *value;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  
  if (Il2CppMethodInitialized_184347398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    Il2CppMethodInitialized_184347398 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      (__this->fields)._panel = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panel,value);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                             );
          if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar4,100.0,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
            pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar3,
                                     (MethodInfo_6651A0 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
                  (pSVar2 = (pSVar1->fields).ChatWidth, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
                 (value_00.fields.x = (float)(pSVar2->fields)._value,
                 __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                value_00.fields.y = 100.0;
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value_00,(MethodInfo *)0x0);
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
// 0x182283bb0

void UI_VoiceChatPanel__AddPlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  bool bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_02;
  System_String_o *str1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar6;
  
  if (Il2CppMethodInitialized_184347399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347399 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._playersTalking,
     __this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    if (bVar4) {
      return;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).ChatFontSize, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      iVar1 = (pSVar3->fields)._value;
      pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_02,iVar1,120.0,20.0,pSVar5,(MethodInfo *)0x0);
      iVar1 = (player->fields).actorNumber;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar5 = GameManagers_ChatManager__GetIDString(iVar1,false,false,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      str1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._panel;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969e50(pSVar5,str1,(MethodInfo *)0x0);
        pUVar6 = UI_ElementFactory__CreateWhiteLabel(parent,__this_02,pSVar5,0,3,(MethodInfo *)0x0);
        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._playersTalking;
        if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___Add
                    (__this_01,(player->fields).actorNumber,(Il2CppObject *)pUVar6,
                     (MethodInfo_1415BA0 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Add
                    );
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$RemovePlayer
// il2cpp: void UI_VoiceChatPanel__RemovePlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x182283fe0

void UI_VoiceChatPanel__RemovePlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_18434739a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434739a = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._playersTalking,
     pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._playersTalking;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._playersTalking;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Remove
                  (__this_00,(player->fields).actorNumber,
                   (MethodInfo_1419B90 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Remove);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_VoiceChatPanel__CreateLine (UI_VoiceChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x182283de0

UnityEngine_GameObject_o *
UI_VoiceChatPanel__CreateLine(UI_VoiceChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434739b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_18434739b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ChatFontSize, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    fontSize = (pSVar2->fields)._value;
    pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._panel;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      pUVar4 = UI_ElementFactory__CreateWhiteLabel(parent,__this_00,text,0,3,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        if (__this_00 != (UI_ElementStyle_o *)0x0) {
          pSVar3 = (__this_00->fields).ThemePanel;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar6 = UI_UIManager__GetThemeColor
                             (&local_18,pSVar3,"TextColor","Default",
                              "DefaultPanel",(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            local_18.fields.r = (pUVar6->fields).r;
            local_18.fields.g = (pUVar6->fields).g;
            local_18.fields.b = (pUVar6->fields).b;
            local_18.fields.a = (pUVar6->fields).a;
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (pUVar5,&local_18,(pUVar5->klass->vtable)._23_set_color.method);
            return pUVar4;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.VoiceChatPanel$$.ctor
// il2cpp: void UI_VoiceChatPanel___ctor (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x182284260

void UI_VoiceChatPanel___ctor(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_18434739c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_GameObject)
    ;
    Il2CppMethodInitialized_18434739c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ctor);
  (__this->fields)._playersTalking = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._playersTalking,__this_00);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


