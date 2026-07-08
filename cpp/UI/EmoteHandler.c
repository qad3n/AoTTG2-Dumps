// Type: UI.EmoteHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EmoteHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/EmoteHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.EmoteHandler$$Awake
// il2cpp: void UI_EmoteHandler__Awake (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40aa6b0

void UI_EmoteHandler__Awake(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar4;
  UI_EmoteTextPopup_array *pUVar5;
  GameManagers_InGameManager_o *pGVar6;
  Il2CppClass *pIVar7;
  long lVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_EmoteTextPopup_o *pUVar11;
  UI_BasePopup_o *pUVar12;
  int iVar13;
  
  if (DAT_05704627 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteEmojiPo);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteTextPop);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_init_method_metadata(&MethodInfo_EmoteEmojiPopup_GetComponent_EmoteEmojiPopup);
    il2cpp_init_method_metadata(&MethodInfo_EmoteTextPopup_GetComponent_EmoteTextPopup);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&"Prefabs/InGame/EmoteTextPopup");
    il2cpp_init_method_metadata(&"Prefabs/InGame/EmoteEmojiPopup");
    il2cpp_init_method_metadata(&"Prefabs/InGame/WheelMenu");
    DAT_05704627 = '\x01';
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  iVar13 = 5;
  do {
    pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                        (pUVar9,"Prefabs/InGame/EmoteTextPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteTextPop);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_040aa9ac;
    pUVar11 = (UI_EmoteTextPopup_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_EmoteTextPopup_GetComponent_EmoteTextPopup);
    lVar8 = MethodInfo_Void_Add;
    pSVar4 = (__this->fields)._emoteTextPopups;
    if (pSVar4 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto LAB_040aa9ac;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_EmoteTextPopup_array *)0x0) goto LAB_040aa9ac;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3] = pUVar11;
      il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                        (pUVar9,"Prefabs/InGame/EmoteEmojiPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteEmojiPo);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_040aa9ac;
    pUVar11 = (UI_EmoteTextPopup_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_EmoteEmojiPopup_GetComponent_EmoteEmojiPopup);
    lVar8 = MethodInfo_Void_Add;
    pSVar4 = (__this->fields)._emoteEmojiPopups;
    if (pSVar4 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto LAB_040aa9ac;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_EmoteTextPopup_array *)0x0) goto LAB_040aa9ac;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3] = pUVar11;
      il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel<object>(pUVar9,"Prefabs/InGame/WheelMenu",0,MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
LAB_040aa9ac:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar12 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
  (__this->fields)._emoteWheelPopup = pUVar12;
  il2cpp_runtime_glue(&(__this->fields)._emoteWheelPopup,pUVar12);
  pIVar7 = TypeInfo_InGameManager;
  pGVar6 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar6 != (GameManagers_InGameManager_o *)0x0) {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (pGVar6->klass->_2).naturalAligment) &&
       ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._inGameManager = pGVar6;
      if ((bVar2 <= (pGVar6->klass->_2).naturalAligment) &&
         ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar7)) goto LAB_040aa992;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pGVar6,pIVar7);
  }
  (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
LAB_040aa992:
  il2cpp_runtime_glue(&(__this->fields)._inGameManager);
  return;
}


// UI.EmoteHandler$$OnEmoteTextRPC
// il2cpp: void UI_EmoteHandler__OnEmoteTextRPC (int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x40aa9c0

void UI_EmoteHandler__OnEmoteTextRPC
               (int32_t viewId,System_String_o *text,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  UnityEngine_Component_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  Characters_BaseCharacter_o *character;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  UI_EmoteTextPopup_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Vector3_o UVar6;
  
  if (DAT_05704628 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704628 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0xc0), lVar1 == 0)) {
LAB_040aac76:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)(lVar1 + 0x11) != '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
         (__this = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
         __this == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_040aac76;
      bVar2 = System_Collections_Generic_HashSet<int>__Contains
                        (__this,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_Contains);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character == (Characters_BaseCharacter_o *)0x0) ||
            (lVar1 = *(long *)&(character->fields).Dead, lVar1 == 0)) ||
           (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_040aac76;
        if (info.fields.Sender == *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_040aac76;
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            method_02 = (MethodInfo *)0x0;
            bVar2 = UnityEngine_Object__op_Inequality
                              (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              pSVar4 = UI_EmoteHandler__SanitizeText(text,method_02);
              if (pUVar3 != (UnityEngine_Object_o *)0x0) {
                pUVar5 = UI_EmoteHandler__GetAvailablePopup
                                   ((UI_EmoteHandler_o *)text,pUVar3[1].monitor,method_00);
                UVar6 = UI_EmoteHandler__GetOffset((UI_EmoteHandler_o *)text,character,method_01);
                if (pUVar5 != (UI_EmoteTextPopup_o *)0x0) {
                  vtable_dispatch = (pUVar5->klass->vtable)._59_Load.methodPtr;
                  (*vtable_dispatch)
                            (0x40400000,UVar6.fields.x,UVar6.fields.z,pUVar5,pSVar4,character,
                             (pUVar5->klass->vtable)._59_Load.method,vtable_dispatch);
                  return;
                }
              }
              goto LAB_040aac76;
            }
          }
        }
      }
    }
  }
  return;
}


// UI.EmoteHandler$$OnEmoteEmojiRPC
// il2cpp: void UI_EmoteHandler__OnEmoteEmojiRPC (int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x40aad50

void UI_EmoteHandler__OnEmoteEmojiRPC
               (int32_t viewId,System_String_o *emoji,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *__this;
  UnityEngine_Component_o *__this_00;
  UI_EmoteTextPopup_c *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  Characters_BaseCharacter_o *character;
  UI_EmoteHandler_o *x_00;
  UI_EmoteTextPopup_o *pUVar5;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  MethodInfo *method_01;
  Il2CppClass **__this_01;
  UnityEngine_Vector3_o UVar6;
  
  if (DAT_05704629 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704629 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xc0), lVar2 == 0)) {
LAB_040aafb7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)(lVar2 + 0x11) != '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
         (__this = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
         __this == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_040aafb7;
      bVar4 = System_Collections_Generic_HashSet<int>__Contains
                        (__this,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_Contains);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character == (Characters_BaseCharacter_o *)0x0) ||
            (lVar2 = *(long *)&(character->fields).Dead, lVar2 == 0)) ||
           (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto LAB_040aafb7;
        if (info.fields.Sender == *(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_040aafb7;
          x_00 = (UI_EmoteHandler_o *)
                 UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (x_00 != (UI_EmoteHandler_o *)0x0) {
                method_00 = character;
                __this_01 = (Il2CppClass **)x_00;
                if (DAT_0570462a == '\0') {
                  __this_01 = &TypeInfo_EmoteEmojiPopup;
                  il2cpp_init_method_metadata();
                  DAT_0570462a = '\x01';
                  method_00 = extraout_RDX;
                }
                pUVar5 = UI_EmoteHandler__GetAvailablePopup
                                   ((UI_EmoteHandler_o *)__this_01,(x_00->fields)._emoteEmojiPopups,
                                    (MethodInfo *)method_00);
                UVar6 = UI_EmoteHandler__GetOffset
                                  ((UI_EmoteHandler_o *)__this_01,character,method_01);
                if (pUVar5 != (UI_EmoteTextPopup_o *)0x0) {
                  bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
                  if ((bVar1 <= (pUVar5->klass->_2).naturalAligment) &&
                     ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
                    pUVar3 = pUVar5->klass;
                    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
                    if ((bVar1 <= (pUVar3->_2).naturalAligment) &&
                       ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
                      vtable_dispatch = (pUVar3->vtable)._59_Load.methodPtr;
                      (*vtable_dispatch)
                                (0x40400000,UVar6.fields.x,UVar6.fields.z,pUVar5,emoji,character,
                                 (pUVar3->vtable)._59_Load.method,vtable_dispatch);
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pUVar5);
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              goto LAB_040aafb7;
            }
          }
        }
      }
    }
  }
  return;
}


// UI.EmoteHandler$$ShowEmoteText
// il2cpp: void UI_EmoteHandler__ShowEmoteText (UI_EmoteHandler_o* __this, System_String_o* text, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x40aacf0

void UI_EmoteHandler__ShowEmoteText
               (UI_EmoteHandler_o *__this,System_String_o *text,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  UI_EmoteTextPopup_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar2;
  
  pUVar1 = UI_EmoteHandler__GetAvailablePopup
                     (__this,(__this->fields)._emoteTextPopups,(MethodInfo *)character);
  UVar2 = UI_EmoteHandler__GetOffset(__this,character,method_00);
  if (pUVar1 != (UI_EmoteTextPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._59_Load.methodPtr;
    (*vtable_dispatch)
              (0x40400000,UVar2.fields.x,UVar2.fields.z,pUVar1,text,character,
               (pUVar1->klass->vtable)._59_Load.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$ShowEmoteEmoji
// il2cpp: void UI_EmoteHandler__ShowEmoteEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x40aafc0

void UI_EmoteHandler__ShowEmoteEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  UI_EmoteTextPopup_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  UI_EmoteTextPopup_o *pUVar3;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  MethodInfo *method_01;
  Il2CppClass **__this_00;
  UnityEngine_Vector3_o UVar4;
  
  method_00 = character;
  __this_00 = (Il2CppClass **)__this;
  if (DAT_0570462a == '\0') {
    __this_00 = &TypeInfo_EmoteEmojiPopup;
    il2cpp_init_method_metadata();
    DAT_0570462a = '\x01';
    method_00 = extraout_RDX;
  }
  pUVar3 = UI_EmoteHandler__GetAvailablePopup
                     ((UI_EmoteHandler_o *)__this_00,(__this->fields)._emoteEmojiPopups,
                      (MethodInfo *)method_00);
  UVar4 = UI_EmoteHandler__GetOffset((UI_EmoteHandler_o *)__this_00,character,method_01);
  if (pUVar3 != (UI_EmoteTextPopup_o *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar3->klass->_2).naturalAligment) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pUVar2 = pUVar3->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar2->_2).naturalAligment) &&
         ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        vtable_dispatch = (pUVar2->vtable)._59_Load.methodPtr;
        (*vtable_dispatch)
                  (0x40400000,UVar4.fields.x,UVar4.fields.z,pUVar3,emoji,character,
                   (pUVar2->vtable)._59_Load.method,vtable_dispatch);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar3);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$ShowVoiceEmoji
// il2cpp: void UI_EmoteHandler__ShowVoiceEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x40ab4d0

void UI_EmoteHandler__ShowVoiceEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  Il2CppMethodPointer vtable_dispatch;
  UI_EmoteTextPopup_o *pUVar4;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  Il2CppClass **__this_00;
  float fVar5;
  float fVar6;
  
  method_00 = character;
  __this_00 = (Il2CppClass **)__this;
  if (DAT_0570462b == '\0') {
    __this_00 = &TypeInfo_EmoteEmojiPopup;
    il2cpp_init_method_metadata();
    DAT_0570462b = '\x01';
    method_00 = extraout_RDX;
  }
  pUVar4 = UI_EmoteHandler__GetAvailablePopup
                     ((UI_EmoteHandler_o *)__this_00,(__this->fields)._emoteEmojiPopups,
                      (MethodInfo *)method_00);
  if (pUVar4 != (UI_EmoteTextPopup_o *)0x0) {
    bVar3 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar3 <= (pUVar4->klass->_2).naturalAligment) &&
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_EmoteEmojiPopup)) {
      *(undefined1 *)&(pUVar4->fields).infinitePopup = 1;
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar5 = (float)uVar2;
      fVar6 = (float)((ulong)uVar2 >> 0x20);
      vtable_dispatch = (pUVar4->klass->vtable)._59_Load.methodPtr;
      (*vtable_dispatch)
                (0x3dcccccd,CONCAT44(fVar6 + fVar6,fVar5 + fVar5),fVar1 + fVar1,pUVar4,emoji,
                 character,(pUVar4->klass->vtable)._59_Load.method,vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$StopInfinitePopup
// il2cpp: void UI_EmoteHandler__StopInfinitePopup (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ab5c0

void UI_EmoteHandler__StopInfinitePopup(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EmoteTextPopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_0570462c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
    DAT_0570462c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._emoteEmojiPopups;
  if (__this_00 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      *(undefined1 *)((long)&pIVar4[0xd].monitor + 4) = 0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$GetOffset
// il2cpp: UnityEngine_Vector3_o UI_EmoteHandler__GetOffset (UI_EmoteHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x40ab280

UnityEngine_Vector3_o
UI_EmoteHandler__GetOffset
          (UI_EmoteHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int32_t iVar3;
  Characters_BaseCharacter_c *pCVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  if (DAT_0570462d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_0570462d = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar4 = character->klass;
    bVar5 = (pCVar4->_2).naturalAligment;
    bVar6 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar6 <= bVar5) && ((pCVar4->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_Human)) {
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      UVar10.fields.x = (float)uVar2 * 4.0;
      UVar10.fields.y = (float)((ulong)uVar2 >> 0x20) * 4.0;
      UVar10.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 4.0;
      return (UnityEngine_Vector3_o)UVar10.fields;
    }
    bVar6 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar5 < bVar6) || ((pCVar4->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_BasicTitan)) {
      bVar6 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar5 < bVar6) || ((pCVar4->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_BaseShifter))
      goto LAB_040ab346;
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
        pCVar4 = character->klass;
        bVar5 = (pCVar4->_2).naturalAligment;
        bVar6 = (TypeInfo_BaseShifter->_2).naturalAligment;
      }
      if ((bVar5 < bVar6) || ((pCVar4->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_BaseShifter)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(character);
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar8 = (float)uVar2 * 70.0;
      fVar9 = (float)((ulong)uVar2 >> 0x20) * 70.0;
      fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 70.0;
    }
    else {
      iVar3 = character[2].fields.CustomDamage;
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar8 = (float)uVar2;
      fVar9 = (float)((ulong)uVar2 >> 0x20);
      if ((char)iVar3 == '\0') {
        fVar8 = fVar8 * 25.0;
        fVar9 = fVar9 * 25.0;
        fVar7 = fVar7 * 25.0;
      }
      else {
        fVar8 = fVar8 * 15.0;
        fVar9 = fVar9 * 15.0;
        fVar7 = fVar7 * 15.0;
      }
    }
    fVar1 = *(float *)((long)&character[1].fields.m_CachedPtr + 4);
    UVar11.fields.z = fVar7 * fVar1;
    UVar11.fields.x = fVar1 * fVar8;
    UVar11.fields.y = fVar1 * fVar9;
    return (UnityEngine_Vector3_o)UVar11.fields;
  }
LAB_040ab346:
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// UI.EmoteHandler$$ToggleEmoteWheel
// il2cpp: void UI_EmoteHandler__ToggleEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ab700

void UI_EmoteHandler__ToggleEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_EmoteHandler__SetEmoteWheel(__this,(uint)((char)(__this->fields).IsActive == '\0'),in_RDX);
  return;
}


// UI.EmoteHandler$$SetEmoteWheel
// il2cpp: void UI_EmoteHandler__SetEmoteWheel (UI_EmoteHandler_o* __this, bool enable, const MethodInfo* method);
// 0x40ab710

void UI_EmoteHandler__SetEmoteWheel
               (UI_EmoteHandler_o *__this,bool_conflict enable,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  UI_WheelPopup_o *__this_00;
  UI_BasePopup_o *pUVar4;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *callback;
  MethodInfo *extraout_RDX;
  Il2CppClass **method_00;
  undefined1 auVar7 [16];
  
  method_00 = (Il2CppClass **)__this;
  if (DAT_0570462e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__SetEmoteWheel_b__25_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    method_00 = &TypeInfo_WheelPopup;
    il2cpp_init_method_metadata();
    DAT_0570462e = '\x01';
    method = extraout_RDX;
  }
  if ((char)enable == '\0') {
    pUVar4 = (__this->fields)._emoteWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)
                (pUVar4,(pUVar4->klass->vtable)._22_Hide.method,method);
      uVar5 = 0;
LAB_040ab85e:
      *(undefined1 *)&(__this->fields).IsActive = uVar5;
      return;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_00);
    if ((char)bVar6 != '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0x40), plVar3 != (long *)0x0)) {
      __this_00 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
      auVar7 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      options = UI_EmoteHandler__GetEmoteWheelOptions
                          (__this,(__this->fields)._currentEmoteWheelState,auVar7._8_8_);
      callback = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_00);
        }
        UI_WheelPopup__Show(__this_00,auVar7._0_8_,options,callback,(MethodInfo *)0x0);
        uVar5 = 1;
        goto LAB_040ab85e;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$NextEmoteWheel
// il2cpp: void UI_EmoteHandler__NextEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40abfe0

void UI_EmoteHandler__NextEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BasePopup_o *__this_00;
  long lVar2;
  long *plVar3;
  UI_WheelPopup_o *__this_01;
  bool_conflict bVar4;
  int iVar5;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *callback;
  int iVar6;
  undefined1 auVar7 [16];
  
  if (DAT_0570462f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__NextEmoteWheel_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
    DAT_0570462f = '\x01';
  }
  __this_00 = (__this->fields)._emoteWheelPopup;
  if (__this_00 != (UI_BasePopup_o *)0x0) {
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (((char)bVar4 == '\0') || ((char)(__this->fields).IsActive == '\0')) {
        return;
      }
      iVar5 = (__this->fields)._currentEmoteWheelState + 1;
      iVar6 = 0;
      if (iVar5 < 3) {
        iVar6 = iVar5;
      }
      (__this->fields)._currentEmoteWheelState = iVar6;
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) &&
         (plVar3 = *(long **)(lVar2 + 0x40), plVar3 != (long *)0x0)) {
        __this_01 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
        auVar7 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        options = UI_EmoteHandler__GetEmoteWheelOptions
                            (__this,(__this->fields)._currentEmoteWheelState,auVar7._8_8_);
        callback = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_WheelPopup_o *)0x0) {
          bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
          if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WheelPopup)) {
            UI_WheelPopup__Show(__this_01,auVar7._0_8_,options,callback,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_01);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$OnEmoteWheelSelect
// il2cpp: void UI_EmoteHandler__OnEmoteWheelSelect (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ac160

void UI_EmoteHandler__OnEmoteWheelSelect(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  int iVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Settings_ListSetting_T__o *pSVar5;
  long *plVar6;
  bool_conflict bVar7;
  Settings_BaseSetting_o *pSVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  long lVar10;
  undefined8 *puVar11;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar12;
  undefined8 uVar13;
  Photon_Pun_PhotonView_o *__this_01;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_05704630 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
    il2cpp_init_method_metadata(&"EmoteEmojiRPC");
    il2cpp_init_method_metadata(&"EmoteTextRPC");
    DAT_05704630 = '\x01';
  }
  if ((__this->fields)._currentEmoteWheelState != 2) {
    if ((__this->fields)._currentEmoteCooldown <= 0.0) {
      (__this->fields)._currentEmoteCooldown = 3.0;
      goto LAB_040ac249;
    }
    goto LAB_040ac672;
  }
LAB_040ac249:
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar4 = (__this->fields)._emoteWheelPopup, pUVar4 == (UI_BasePopup_o *)0x0))
  goto LAB_040ac6f8;
  bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
  if (((pUVar4->klass->_2).naturalAligment < bVar1) ||
     ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) goto LAB_040ac6fd;
  x = (pGVar3->fields).CurrentCharacter;
  index = (int32_t)pUVar4[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
LAB_040ac672:
    pUVar4 = (__this->fields)._emoteWheelPopup;
  }
  else {
    iVar2 = (__this->fields)._currentEmoteWheelState;
    if (iVar2 == 2) {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar10 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)
                             (x,(x->klass->vtable)._59_get_EmoteActions.method), lVar10 == 0))
      goto LAB_040ac6f8;
      if (index < *(int *)(lVar10 + 0x18)) {
        __this_00 = (System_Collections_Generic_List_object__o *)
                    (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)
                              (x,(x->klass->vtable)._59_get_EmoteActions.method);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040ac6f8;
        pIVar12 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_String_get_Item);
        (*(x->klass->vtable)._70_Emote.methodPtr)(x,pIVar12,(x->klass->vtable)._70_Emote.method);
      }
      goto LAB_040ac672;
    }
    if (iVar2 == 1) {
      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (((lVar10 == 0) ||
          (pSVar5 = *(Settings_ListSetting_T__o **)(lVar10 + 0x28),
          pSVar5 == (Settings_ListSetting_T__o *)0x0)) ||
         (pSVar8 = Settings_ListSetting<object>__GetItemAt(pSVar5,index,MethodInfo_BaseSetting_GetItemAt),
         pSVar8 == (Settings_BaseSetting_o *)0x0)) goto LAB_040ac6f8;
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
LAB_040ac702:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar8);
      }
      pIVar12 = pSVar8[1].monitor;
      __this_01 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         ((lVar10 = *(long *)&(x->fields).Dead, lVar10 == 0 ||
          (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)))) goto LAB_040ac6f8;
      local_30 = *(undefined4 *)(lVar10 + 0x94);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
      if (parameters == (System_Object_array *)0x0) goto LAB_040ac6f8;
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pIVar9,(((parameters->obj).klass)->_1).element_class),
         lVar10 == 0)) {
LAB_040ac70f:
        uVar13 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar13,0);
      }
      if ((int)parameters->max_length == 0) {
LAB_040ac70a:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameters->m_Items[0] = pIVar9;
      il2cpp_runtime_glue(parameters->m_Items,pIVar9);
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pIVar12,(((parameters->obj).klass)->_1).element_class),
         lVar10 == 0)) goto LAB_040ac70f;
      if ((uint)parameters->max_length < 2) goto LAB_040ac70a;
      parameters->m_Items[1] = pIVar12;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar12);
      if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_040ac6f8;
      puVar11 = &"EmoteEmojiRPC";
    }
    else {
      if (iVar2 != 0) goto LAB_040ac672;
      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (((lVar10 == 0) ||
          (pSVar5 = *(Settings_ListSetting_T__o **)(lVar10 + 0x20),
          pSVar5 == (Settings_ListSetting_T__o *)0x0)) ||
         (pSVar8 = Settings_ListSetting<object>__GetItemAt(pSVar5,index,MethodInfo_BaseSetting_GetItemAt),
         pSVar8 == (Settings_BaseSetting_o *)0x0)) goto LAB_040ac6f8;
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto LAB_040ac702;
      pIVar12 = pSVar8[1].monitor;
      __this_01 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          (lVar10 = *(long *)&(x->fields).Dead, lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) goto LAB_040ac6f8;
      local_2c = *(undefined4 *)(lVar10 + 0x94);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      if (parameters == (System_Object_array *)0x0) goto LAB_040ac6f8;
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pIVar9,(((parameters->obj).klass)->_1).element_class),
         lVar10 == 0)) goto LAB_040ac70f;
      if ((int)parameters->max_length == 0) goto LAB_040ac70a;
      parameters->m_Items[0] = pIVar9;
      il2cpp_runtime_glue(parameters->m_Items,pIVar9);
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pIVar12,(((parameters->obj).klass)->_1).element_class),
         lVar10 == 0)) goto LAB_040ac70f;
      if ((uint)parameters->max_length < 2) goto LAB_040ac70a;
      parameters->m_Items[1] = pIVar12;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar12);
      if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_040ac6f8;
      puVar11 = &"EmoteTextRPC";
    }
    Photon_Pun_PhotonView__RPC(__this_01,(System_String_o *)*puVar11,0,parameters,(MethodInfo *)0x0)
    ;
    pUVar4 = (__this->fields)._emoteWheelPopup;
  }
  if (pUVar4 != (UI_BasePopup_o *)0x0) {
    (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
    *(undefined1 *)&(__this->fields).IsActive = 0;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar6 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        *(undefined1 *)(plVar6 + 0x2e) = 1;
        return;
      }
LAB_040ac6fd:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
LAB_040ac6f8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$GetEmoteWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_EmoteHandler__GetEmoteWheelOptions (UI_EmoteHandler_o* __this, int32_t state, const MethodInfo* method);
// 0x40aba90

System_Collections_Generic_List_string__o *
UI_EmoteHandler__GetEmoteWheelOptions(UI_EmoteHandler_o *__this,int32_t state,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_String_array *pSVar5;
  GameManagers_InGameManager_o *pGVar6;
  Characters_BaseCharacter_o *pCVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (DAT_05704631 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    DAT_05704631 = '\x01';
  }
  if (state == 1) {
    pSVar9 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar4,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
      pIVar13 = (Il2CppType *)local_38._8_8_;
      pIVar14 = local_28;
      if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
        __this_03.fields._index = local_38._8_4_;
        __this_03.fields._version = local_38._12_4_;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
        __this_03.fields._current = local_28;
        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
        if ((char)bVar8 != '\0') {
          if (local_28 != (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_040abe9f:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar13,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
              __this_01.fields._current = pIVar14,
              bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
              lVar3 = MethodInfo_Void_Add, local_38._0_8_ = pSVar12, local_38._8_8_ = pIVar13,
              local_28 = pIVar14, (char)bVar8 != '\0') {
          if (pIVar14 == (Il2CppObject *)0x0) goto LAB_040abe9f;
          pSVar10 = pIVar14[1].monitor;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar9->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar10;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar10,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
LAB_040abe68:
      __this_04.fields._8_8_ = local_38._8_8_;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
      __this_04.fields._current = local_28;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
      return pSVar9;
    }
  }
  else if (state == 0) {
    pSVar9 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar4,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
      pIVar13 = (Il2CppType *)local_38._8_8_;
      pIVar14 = local_28;
      if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
        __this_02.fields._index = local_38._8_4_;
        __this_02.fields._version = local_38._12_4_;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
        __this_02.fields._current = local_28;
        pMVar11 = MethodInfo_Boolean_MoveNext;
        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
        if ((char)bVar8 != '\0') {
          if (local_28 != (Il2CppObject *)0x0) {
            UI_EmoteHandler__SanitizeText(local_28[1].monitor,pMVar11);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_040abe4d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_00.fields._8_8_ = pIVar13,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
              __this_00.fields._current = pIVar14, pMVar11 = MethodInfo_Boolean_MoveNext,
              bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
              local_38._0_8_ = pSVar12, local_38._8_8_ = pIVar13, local_28 = pIVar14,
              (char)bVar8 != '\0') {
          if (pIVar14 == (Il2CppObject *)0x0) goto LAB_040abe4d;
          pSVar10 = UI_EmoteHandler__SanitizeText(pIVar14[1].monitor,pMVar11);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar9->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar10;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar10);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar10,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      goto LAB_040abe68;
    }
  }
  else {
    pGVar6 = (__this->fields)._inGameManager;
    if (pGVar6 != (GameManagers_InGameManager_o *)0x0) {
      pCVar7 = (pGVar6->fields).CurrentCharacter;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pSVar9 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
        return pSVar9;
      }
      pGVar6 = (__this->fields)._inGameManager;
      if ((pGVar6 != (GameManagers_InGameManager_o *)0x0) &&
         (pCVar7 = (pGVar6->fields).CurrentCharacter, pCVar7 != (Characters_BaseCharacter_o *)0x0))
      {
        pSVar9 = (System_Collections_Generic_List_string__o *)
                 (*(pCVar7->klass->vtable)._59_get_EmoteActions.methodPtr)
                           (pCVar7,(pCVar7->klass->vtable)._59_get_EmoteActions.method);
        return pSVar9;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$GetAvailablePopup
// il2cpp: UI_EmoteTextPopup_o* UI_EmoteHandler__GetAvailablePopup (UI_EmoteHandler_o* __this, System_Collections_Generic_List_EmoteTextPopup__o* popups, const MethodInfo* method);
// 0x40ab0a0

UI_EmoteTextPopup_o *
UI_EmoteHandler__GetAvailablePopup
          (UI_EmoteHandler_o *__this,System_Collections_Generic_List_EmoteTextPopup__o *popups,
          MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_03;
  UI_EmoteTextPopup_o *pUVar2;
  System_Collections_Generic_List_Enumerator_T__c *pSVar3;
  Il2CppType *pIVar4;
  UI_EmoteTextPopup_o *pUVar5;
  undefined1 local_38 [16];
  UI_EmoteTextPopup_o *local_28;
  
  if (DAT_05704632 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
    il2cpp_init_method_metadata(&MethodInfo_EmoteTextPopup_get_Item);
    DAT_05704632 = '\x01';
  }
  if (popups == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
             (System_Collections_Generic_List_object__o *)popups,MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
  pSVar3 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar4 = (Il2CppType *)local_38._8_8_;
  do {
    pUVar2 = local_28;
    __this_00.fields._8_8_ = pIVar4;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar3;
    __this_00.fields._current = (Il2CppObject *)pUVar2;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 == '\0') {
      __this_02.fields._8_8_ = pIVar4;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar3;
      __this_02.fields._current = (Il2CppObject *)pUVar2;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
      pUVar2 = (UI_EmoteTextPopup_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)popups,0,MethodInfo_EmoteTextPopup_get_Item);
      return pUVar2;
    }
    if (pUVar2 == (UI_EmoteTextPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar5 = pUVar2;
    __this_03 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_03,(MethodInfo *)0x0);
    local_28 = pUVar5;
  } while ((char)bVar1 != '\0');
  __this_01.fields._8_8_ = pIVar4;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar3;
  __this_01.fields._current = (Il2CppObject *)pUVar5;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return pUVar2;
}


// UI.EmoteHandler$$UpdatePopup
// il2cpp: void UI_EmoteHandler__UpdatePopup (UI_EmoteHandler_o* __this, UI_EmoteTextPopup_o* popup, bool inMenu, const MethodInfo* method);
// 0x40ac720

void UI_EmoteHandler__UpdatePopup
               (UI_EmoteHandler_o *__this,UI_EmoteTextPopup_o *popup,bool_conflict inMenu,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  long lVar4;
  Characters_BaseCharacter_o *pCVar5;
  long lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool_conflict bVar9;
  int32_t layerMask;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar10;
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo *pMVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar16;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 extraout_XMM1_Qa;
  float fVar21;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  
  if (DAT_05704633 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata();
    DAT_05704633 = '\x01';
  }
  if (popup == (UI_EmoteTextPopup_o *)0x0) goto LAB_040acdf9;
  lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar18 = (popup->fields).ShowTimeLeft;
  if ((char)(popup->fields).infinitePopup == '\0') {
    fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar18 = fVar18 - fVar21;
    (popup->fields).ShowTimeLeft = fVar18;
  }
  if ((0.0 < fVar18) && (auVar20 = ZEXT416(0), (char)inMenu == '\0')) {
    pCVar5 = (popup->fields).Character;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
      auVar20._8_8_ = extraout_XMM1_Qb;
      auVar20._0_8_ = extraout_XMM1_Qa;
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar9 == '\0') {
      pCVar5 = (popup->fields).Character;
      if (((pCVar5 == (Characters_BaseCharacter_o *)0x0) ||
          (lVar6 = *(long *)&(pCVar5->fields).Dead, lVar6 == 0)) ||
         (pUVar10 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_040acdf9;
      UVar24 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) ||
         (pUVar10 = *(UnityEngine_Transform_o **)(*(long *)(lVar4 + 0x28) + 0x10),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_040acdf9;
      uVar1 = (popup->fields).Offset.fields.x;
      uVar3 = (popup->fields).Offset.fields.y;
      position.fields.x = UVar24.fields.x + (float)uVar1;
      position.fields.y = UVar24.fields.y + (float)uVar3;
      position.fields.z = UVar24.fields.z + (popup->fields).Offset.fields.z;
      UVar24 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      fVar22 = UVar24.fields.y - position.fields.y;
      fVar18 = UVar24.fields.z - position.fields.z;
      fVar21 = UVar24.fields.x - position.fields.x;
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      fVar18 = fVar21 * fVar21 + fVar22 * fVar22 + fVar18 * fVar18;
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      if (500.0 < fVar18) {
        (*(popup->klass->vtable)._22_Hide.methodPtr)(popup);
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          bVar9 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar10 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
          if ((*(UnityEngine_Camera_o **)(lVar4 + 0x20) != (UnityEngine_Camera_o *)0x0) &&
             (UVar24 = UnityEngine_Camera__WorldToScreenPoint
                                 (*(UnityEngine_Camera_o **)(lVar4 + 0x20),position,
                                  (MethodInfo *)0x0), pUVar10 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__set_position(pUVar10,UVar24,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_040acdf9;
      }
      if ((*(long *)(lVar4 + 0x28) == 0) ||
         (pUVar10 = *(UnityEngine_Transform_o **)(*(long *)(lVar4 + 0x28) + 0x10),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_040acdf9;
      UVar24 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
      }
      local_b8._0_4_ = position.fields.x - UVar24.fields.x;
      local_b8._4_4_ = position.fields.y - UVar24.fields.y;
      fVar21 = position.fields.z - UVar24.fields.z;
      fStack_b0 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
      fStack_ac = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      uVar16 = auVar20._8_4_;
      uVar17 = auVar20._12_4_;
      fVar22 = fVar21 * fVar21 +
               (float)local_b8._4_4_ * (float)local_b8._4_4_ +
               (float)local_b8._0_4_ * (float)local_b8._0_4_;
      if (fVar22 < 0.0) {
        fVar22 = sqrtf(fVar22);
        uVar16 = extraout_XMM0_Dc_01;
        uVar17 = extraout_XMM0_Dd_01;
        if (1e-05 < fVar22) goto LAB_040acaff;
LAB_040ac9d6:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar22 = (float)uVar2;
        fVar14 = (float)((ulong)uVar2 >> 0x20);
        fVar21 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        lVar6 = *(long *)(lVar4 + 0x28);
      }
      else {
        fVar22 = SQRT(fVar22);
        if (fVar22 <= 1e-05) goto LAB_040ac9d6;
LAB_040acaff:
        fVar21 = fVar21 / fVar22;
        auVar7._4_4_ = fVar22;
        auVar7._0_4_ = fVar22;
        auVar7._8_4_ = uVar16;
        auVar7._12_4_ = uVar17;
        auVar20 = divps(_local_b8,auVar7);
        fVar22 = auVar20._0_4_;
        fVar14 = auVar20._4_4_;
        lVar6 = *(long *)(lVar4 + 0x28);
      }
      if (lVar6 == 0) goto LAB_040acdf9;
      if (*(UnityEngine_Transform_o **)(lVar6 + 0x10) == (UnityEngine_Transform_o *)0x0)
      goto LAB_040acdf9;
      UVar24 = UnityEngine_Transform__get_forward
                         (*(UnityEngine_Transform_o **)(lVar6 + 0x10),(MethodInfo *)0x0);
      fVar19 = UVar24.fields.z;
      fVar12 = UVar24.fields.x;
      fVar15 = UVar24.fields.y;
      if (DAT_0570266a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_0570266a = '\x01';
      }
      fVar23 = fVar19 * fVar19 + fVar15 * fVar15 + fVar12 * fVar12;
      fVar13 = fVar21 * fVar21 + fVar14 * fVar14 + fVar22 * fVar22;
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        il2cpp_init_class();
        if (fVar13 * fVar23 < 0.0) goto LAB_040acc35;
LAB_040acbe3:
        fVar13 = SQRT(fVar13 * fVar23);
        pMVar11 = TypeInfo_Math;
      }
      else {
        if (0.0 <= fVar13 * fVar23) goto LAB_040acbe3;
LAB_040acc35:
        fVar13 = sqrtf(fVar13 * fVar23);
        pMVar11 = TypeInfo_Math;
      }
      TypeInfo_Math = pMVar11;
      if (1e-15 <= fVar13) {
        fVar13 = (fVar19 * fVar21 + fVar14 * fVar15 + fVar22 * fVar12) / fVar13;
        fVar12 = 1.0;
        if (fVar13 <= 1.0) {
          fVar12 = fVar13;
        }
        if (*(int *)((long)&pMVar11[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        dVar8 = acos((double)(float)(~-(uint)(-1.0 <= fVar13) & 0xbf800000 |
                                    (uint)fVar12 & -(uint)(-1.0 <= fVar13)),pMVar11);
        if (90.0 < (float)dVar8 * 57.29578) goto LAB_040acd7a;
      }
      pCVar5 = (popup->fields).Character;
      if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto LAB_040acdf9;
      bVar9 = Characters_BaseCharacter__IsMainCharacter(pCVar5,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if ((*(long *)(lVar4 + 0x28) == 0) ||
           (pUVar10 = *(UnityEngine_Transform_o **)(*(long *)(lVar4 + 0x28) + 0x10),
           pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_040acdf9;
        UVar24 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
        layerMask = UnityEngine_LayerMask__op_Implicit
                              ((UnityEngine_LayerMask_o)(__this->fields).CullMask.fields.m_Mask,
                               (MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        direction.fields.z = fVar21;
        direction.fields.x = fVar22;
        direction.fields.y = fVar14;
        bVar9 = UnityEngine_Physics__Raycast(UVar24,direction,fVar18,layerMask,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') goto LAB_040acd7a;
      }
      if (*(UnityEngine_Camera_o **)(lVar4 + 0x20) == (UnityEngine_Camera_o *)0x0) {
LAB_040acdf9:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar24.fields.y = position.fields.y;
      UVar24.fields.x = position.fields.x;
      UVar24.fields.z = position.fields.z;
      UVar24 = UnityEngine_Camera__WorldToScreenPoint
                         (*(UnityEngine_Camera_o **)(lVar4 + 0x20),UVar24,(MethodInfo *)0x0);
      pUVar10 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto LAB_040acdf9;
      UnityEngine_Transform__set_position(pUVar10,UVar24,(MethodInfo *)0x0);
      vtable_dispatch = (popup->klass->vtable)._21_Show.methodPtr;
      pMVar11 = (popup->klass->vtable)._21_Show.method;
      goto LAB_040acd8b;
    }
  }
LAB_040acd7a:
  vtable_dispatch = (popup->klass->vtable)._55_HideImmediate.methodPtr;
  pMVar11 = (popup->klass->vtable)._55_HideImmediate.method;
LAB_040acd8b:
  (*vtable_dispatch)(popup,pMVar11);
  return;
}


// UI.EmoteHandler$$LateUpdate
// il2cpp: void UI_EmoteHandler__LateUpdate (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ace00

void UI_EmoteHandler__LateUpdate(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  long *plVar2;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  MethodInfo *in_RCX;
  uint inMenu;
  MethodInfo *method_00;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  UI_EmoteTextPopup_o *popup;
  undefined1 auStack_48 [16];
  UI_EmoteTextPopup_o *pUStack_38;
  
  if (DAT_05704634 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
    il2cpp_init_method_metadata();
    DAT_05704634 = '\x01';
  }
  fVar1 = (__this->fields)._currentEmoteCooldown;
  method_00 = (MethodInfo *)0x0;
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentEmoteCooldown = fVar1 - fVar5;
  bVar4 = UI_InGameMenu__InMenu(method_00);
  inMenu = 1;
  if ((char)bVar4 == '\0') {
    plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar2 == (long *)0x0) goto LAB_040acff2;
    in_RCX = (MethodInfo *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    inMenu = (uint)((int)plVar2[0xd] == 0);
  }
  pSVar3 = (__this->fields)._emoteTextPopups;
  if (pSVar3 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar7 = (Il2CppType *)auStack_48._8_8_;
    popup = pUStack_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar7;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_00.fields._current = (Il2CppObject *)popup;
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') break;
      UI_EmoteHandler__UpdatePopup(__this,popup,inMenu,in_RCX);
    }
    __this_01.fields._8_8_ = pIVar7;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_01.fields._current = (Il2CppObject *)popup;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar3 = (__this->fields)._emoteEmojiPopups;
    if (pSVar3 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UI_EmoteTextPopup__GetEnume);
      while( true ) {
        __this_02.fields._8_8_ = auStack_48._8_8_;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
        __this_02.fields._current = (Il2CppObject *)pUStack_38;
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar4 == '\0') break;
        UI_EmoteHandler__UpdatePopup(__this,pUStack_38,inMenu,in_RCX);
      }
      __this_03.fields._8_8_ = auStack_48._8_8_;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_03.fields._current = (Il2CppObject *)pUStack_38;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
  }
LAB_040acff2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$SanitizeText
// il2cpp: System_String_o* UI_EmoteHandler__SanitizeText (System_String_o* value, const MethodInfo* method);
// 0x40aac80

System_String_o * UI_EmoteHandler__SanitizeText(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704635 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    DAT_05704635 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  pSVar1 = Anticheat_ChatFilter__FilterSizeTag(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    if (0x14 < (pSVar1->fields)._stringLength) {
      pSVar1 = System_String__Substring(pSVar1,0,0x14,(MethodInfo *)0x0);
      return pSVar1;
    }
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$.ctor
// il2cpp: void UI_EmoteHandler___ctor (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ad0e0

void UI_EmoteHandler___ctor(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar4;
  System_Int32_array *layers;
  
  if (DAT_05704636 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_EmoteTextPopup);
    il2cpp_init_method_metadata(&TypeInfo_List_EmoteTextPopup);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05704636 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_EmoteTextPopup__o *)il2cpp_runtime_glue(TypeInfo_List_EmoteTextPopup);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_UI_EmoteTextPopup);
  (__this->fields)._emoteTextPopups = pSVar4;
  il2cpp_runtime_glue(&(__this->fields)._emoteTextPopups,pSVar4);
  pSVar4 = (System_Collections_Generic_List_EmoteTextPopup__o *)il2cpp_runtime_glue(TypeInfo_List_EmoteTextPopup);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_UI_EmoteTextPopup);
  (__this->fields)._emoteEmojiPopups = pSVar4;
  il2cpp_runtime_glue(&(__this->fields)._emoteEmojiPopups,pSVar4);
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x3c);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x38);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x10);
          UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteHandler$$<SetEmoteWheel>b__25_0
// il2cpp: void UI_EmoteHandler___SetEmoteWheel_b__25_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ad220

void UI_EmoteHandler__<SetEmoteWheel>b__25_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteWheelSelect(__this,method);
  return;
}


// UI.EmoteHandler$$<NextEmoteWheel>b__26_0
// il2cpp: void UI_EmoteHandler___NextEmoteWheel_b__26_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x40ad230

void UI_EmoteHandler__<NextEmoteWheel>b__26_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteWheelSelect(__this,method);
  return;
}


