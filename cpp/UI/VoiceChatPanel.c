// Type: UI.VoiceChatPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/VoiceChatPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.VoiceChatPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_VoiceChatPanel__get_ThemePanel (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x40daeb0

System_String_o * UI_VoiceChatPanel__get_ThemePanel(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  if (DAT_0570476f == '\0') {
    il2cpp_init_method_metadata(&"VoiceChatPanel");
    DAT_0570476f = '\x01';
  }
  return "VoiceChatPanel";
}


// UI.VoiceChatPanel$$Setup
// il2cpp: void UI_VoiceChatPanel__Setup (UI_VoiceChatPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40daee0

void UI_VoiceChatPanel__Setup(UI_VoiceChatPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *__this_00;
  
  if (DAT_05704770 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Content/Panel");
    il2cpp_init_method_metadata(&"Content");
    DAT_05704770 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      (__this->fields)._panel = pUVar3;
      il2cpp_runtime_glue(&(__this->fields)._panel);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar2,"Content",(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pIVar4 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar4 != (Il2CppObject *)0x0) {
            (*pIVar4->klass->vtable[0x26].methodPtr)(0x42c80000,pIVar4);
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
              lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x138), lVar1 != 0)) &&
                 (__this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                value.fields.y = 100.0;
                value.fields.x = (float)*(int *)(lVar1 + 0x14);
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
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


// UI.VoiceChatPanel$$AddPlayer
// il2cpp: void UI_VoiceChatPanel__AddPlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40db050

void UI_VoiceChatPanel__AddPlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  System_String_o *str1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar6;
  
  if (DAT_05704771 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"");
    DAT_05704771 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields)._playersTalking,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x148), lVar3 != 0)) {
      iVar1 = *(int32_t *)(lVar3 + 0x14);
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_00,iVar1,120.0,20.0,pSVar5,(MethodInfo *)0x0);
      iVar1 = (player->fields).actorNumber;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = GameManagers_ChatManager__GetIDString(iVar1,0,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      str1 = PhotonExtensions__GetStringProperty
                       (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._panel;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,str1,(MethodInfo *)0x0);
        pUVar6 = UI_ElementFactory__CreateWhiteLabel(parent,__this_00,pSVar5,0,3,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields)._playersTalking;
        if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary<int__object>__Add
                    (pSVar2,(player->fields).actorNumber,(Il2CppObject *)pUVar6,MethodInfo_Void_Add);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.VoiceChatPanel$$RemovePlayer
// il2cpp: void UI_VoiceChatPanel__RemovePlayer (UI_VoiceChatPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40db260

void UI_VoiceChatPanel__RemovePlayer
               (UI_VoiceChatPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  
  if (DAT_05704772 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704772 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields)._playersTalking,
     pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields)._playersTalking;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary<int__object>__get_Item
                      (pSVar1,(player->fields).actorNumber,MethodInfo_GameObject_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields)._playersTalking;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int__object>__Remove
                  (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.VoiceChatPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_VoiceChatPanel__CreateLine (UI_VoiceChatPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x40db350

UnityEngine_GameObject_o *
UI_VoiceChatPanel__CreateLine(UI_VoiceChatPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  long lVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar5;
  
  if (DAT_05704773 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Default");
    DAT_05704773 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x148), lVar1 != 0)) {
    fontSize = *(int32_t *)(lVar1 + 0x14);
    pSVar2 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._panel;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateWhiteLabel(parent,__this_00,text,0,3,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pIVar4 = UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
        if (__this_00 != (UI_ElementStyle_o *)0x0) {
          pSVar2 = (__this_00->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UVar5 = UI_UIManager__GetThemeColor
                            (pSVar2,"TextColor","Default","DefaultPanel",(MethodInfo *)0x0);
          if (pIVar4 != (Il2CppObject *)0x0) {
            (*pIVar4->klass->vtable[0x17].methodPtr)
                      (UVar5.fields._0_8_,UVar5.fields._8_8_,pIVar4,
                       pIVar4->klass->vtable[0x17].method);
            return pUVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.VoiceChatPanel$$.ctor
// il2cpp: void UI_VoiceChatPanel___ctor (UI_VoiceChatPanel_o* __this, const MethodInfo* method);
// 0x40db510

void UI_VoiceChatPanel___ctor(UI_VoiceChatPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if (DAT_05704774 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__GameObject);
    DAT_05704774 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_int__GameObject);
  System_Collections_Generic_Dictionary<int__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (__this->fields)._playersTalking =
       (System_Collections_Generic_Dictionary_int__GameObject__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._playersTalking);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


