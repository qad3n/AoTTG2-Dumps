// Type: UI.InGameMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/InGameMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/InGameMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.InGameMenu.<>c$$.cctor
// il2cpp: void UI_InGameMenu___c___cctor (const MethodInfo* method);
// 0x40bb0f0

void UI_InGameMenu_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570467b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570467b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.InGameMenu.<>c$$.ctor
// il2cpp: void UI_InGameMenu___c___ctor (UI_InGameMenu___c_o* __this, const MethodInfo* method);
// 0x40bb160

void UI_InGameMenu_<>c___ctor(UI_InGameMenu___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__108_0
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__108_0 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x40bb170

bool_conflict
UI_InGameMenu_<>c__<GetPlayerListTeams>b__108_0
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (DAT_0570467c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"");
    DAT_0570467c = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = PhotonExtensions__GetStringProperty
                (e,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                 (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                     (MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__108_1
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__108_1 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x40bb220

bool_conflict
UI_InGameMenu_<>c__<GetPlayerListTeams>b__108_1
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (DAT_0570467d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"");
    DAT_0570467d = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = PhotonExtensions__GetStringProperty
                (e,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                 (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Inequality
                    (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                     (MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__108_2
// il2cpp: System_String_o* UI_InGameMenu___c___GetPlayerListTeams_b__108_2 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x40bb2d0

System_String_o *
UI_InGameMenu_<>c__<GetPlayerListTeams>b__108_2
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570467e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_0570467e = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (e,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.InGameMenu.<WaitAndShowBlood>d__102$$.ctor
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__102___ctor (UI_InGameMenu__WaitAndShowBlood_d__102_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40b6b60

void UI_InGameMenu_<WaitAndShowBlood>d__102___ctor
               (UI_InGameMenu__WaitAndShowBlood_d__102_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__102$$System.IDisposable.Dispose
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__102__System_IDisposable_Dispose (UI_InGameMenu__WaitAndShowBlood_d__102_o* __this, const MethodInfo* method);
// 0x40bb340

void UI_InGameMenu_<WaitAndShowBlood>d__102__System_IDisposable_Dispose
               (UI_InGameMenu__WaitAndShowBlood_d__102_o *__this,MethodInfo *method)

{
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__102$$MoveNext
// il2cpp: bool UI_InGameMenu__WaitAndShowBlood_d__102__MoveNext (UI_InGameMenu__WaitAndShowBlood_d__102_o* __this, const MethodInfo* method);
// 0x40bb350

bool_conflict
UI_InGameMenu_<WaitAndShowBlood>d__102__MoveNext
          (UI_InGameMenu__WaitAndShowBlood_d__102_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_InGameMenu_o *pUVar2;
  UI_InGameBackgroundMenu_o *pUVar3;
  UI_BloodBackgroundPanel_o *pUVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  undefined8 uVar5;
  
  if (DAT_0570467f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570467f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_InGameMenu_o *)0x0) &&
        (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar3 != (UI_InGameBackgroundMenu_o *)0x0)) &&
       (pUVar4 = (pUVar3->fields)._bloodBackgroundPanel, pUVar4 != (UI_BloodBackgroundPanel_o *)0x0)
       ) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      *(undefined1 *)&(pUVar2->fields)._showingBlood = 0;
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_InGameMenu_o *)0x0) &&
        (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar3 != (UI_InGameBackgroundMenu_o *)0x0)) &&
       (pUVar4 = (pUVar3->fields)._bloodBackgroundPanel, pUVar4 != (UI_BloodBackgroundPanel_o *)0x0)
       ) {
      (*(pUVar4->klass->vtable)._21_Show.methodPtr)();
      __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_00,5.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu.<WaitAndShowBlood>d__102$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_InGameMenu__WaitAndShowBlood_d__102_o* __this, const MethodInfo* method);
// 0x40bb460

Il2CppObject *
UI_InGameMenu_<WaitAndShowBlood>d__102__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_InGameMenu__WaitAndShowBlood_d__102_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu.<WaitAndShowBlood>d__102$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__102__System_Collections_IEnumerator_Reset (UI_InGameMenu__WaitAndShowBlood_d__102_o* __this, const MethodInfo* method);
// 0x40bb470

void UI_InGameMenu_<WaitAndShowBlood>d__102__System_Collections_IEnumerator_Reset
               (UI_InGameMenu__WaitAndShowBlood_d__102_o *__this,MethodInfo *method)

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


// UI.InGameMenu.<WaitAndShowBlood>d__102$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__102__System_Collections_IEnumerator_get_Current (UI_InGameMenu__WaitAndShowBlood_d__102_o* __this, const MethodInfo* method);
// 0x40bb4b0

Il2CppObject *
UI_InGameMenu_<WaitAndShowBlood>d__102__System_Collections_IEnumerator_get_Current
          (UI_InGameMenu__WaitAndShowBlood_d__102_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu$$get_RootVisualElement
// il2cpp: UnityEngine_UIElements_VisualElement_o* UI_InGameMenu__get_RootVisualElement (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b3d00

UnityEngine_UIElements_VisualElement_o *
UI_InGameMenu__get_RootVisualElement(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_UIDocument_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  
  __this_00 = (__this->fields)._uiDocument;
  if (__this_00 != (UnityEngine_UIElements_UIDocument_o *)0x0) {
    pUVar1 = UnityEngine_UIElements_UIDocument__get_rootVisualElement(__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$Setup
// il2cpp: void UI_InGameMenu__Setup (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b3d20

void UI_InGameMenu__Setup(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_EmoteHandler_o *pUVar2;
  UI_ItemHandler_o *pUVar3;
  UI_HUDBottomHandler_o *pUVar4;
  UI_CharacterInfoHandler_o *pUVar5;
  UI_StylebarHandler_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_BasePopup_o *method_00;
  UnityEngine_UIElements_UIDocument_o *pUVar8;
  MethodInfo *pMVar9;
  
  if (DAT_05704656 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UIDocument_GetComponent_UIDocument);
    il2cpp_init_method_metadata(&MethodInfo_SongPopup_CreateDefaultPopup_SongPopup);
    il2cpp_init_method_metadata(&MethodInfo_CharacterInfoHandler_AddComponent_CharacterInfoH);
    il2cpp_init_method_metadata(&MethodInfo_CrosshairHandler_AddComponent_CrosshairHandler);
    il2cpp_init_method_metadata(&MethodInfo_EmoteHandler_AddComponent_EmoteHandler);
    il2cpp_init_method_metadata(&MethodInfo_HUDBottomHandler_AddComponent_HUDBottomHandler);
    il2cpp_init_method_metadata(&MethodInfo_ItemHandler_AddComponent_ItemHandler);
    il2cpp_init_method_metadata(&MethodInfo_StylebarHandler_AddComponent_StylebarHandler);
    il2cpp_init_method_metadata(&"Prefabs/InGame/NapeLockImage");
    DAT_05704656 = '\x01';
  }
  pMVar9 = (MethodInfo *)0x0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  UI_InGameMenu__SetupLoading(__this,pMVar9);
  UI_InGameMenu__SetupTopLeftHud(__this,pMVar9);
  UI_InGameMenu__SetupLabels(__this,pMVar9);
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UI_EmoteHandler_o *)UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_EmoteHandler_AddComponent_EmoteHandler);
    (__this->fields).EmoteHandler = pUVar2;
    il2cpp_runtime_glue(&(__this->fields).EmoteHandler);
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = (UI_ItemHandler_o *)UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_ItemHandler_AddComponent_ItemHandler)
      ;
      (__this->fields).ItemHandler = pUVar3;
      il2cpp_runtime_glue(&(__this->fields).ItemHandler);
      pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = (UI_HUDBottomHandler_o *)
                 UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_HUDBottomHandler_AddComponent_HUDBottomHandler);
        (__this->fields).HUDBottomHandler = pUVar4;
        il2cpp_runtime_glue(&(__this->fields).HUDBottomHandler);
        pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = (UI_CharacterInfoHandler_o *)
                   UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_CharacterInfoHandler_AddComponent_CharacterInfoH);
          (__this->fields).CharacterInfoHandler = pUVar5;
          il2cpp_runtime_glue(&(__this->fields).CharacterInfoHandler);
          pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = (UI_StylebarHandler_o *)
                     UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_StylebarHandler_AddComponent_StylebarHandler);
            (__this->fields).StylebarHandler = pUVar6;
            il2cpp_runtime_glue(&(__this->fields).StylebarHandler);
            pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_CrosshairHandler_AddComponent_CrosshairHandler);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar1 = UI_ElementFactory__InstantiateAndBind(pUVar7,"Prefabs/InGame/NapeLockImage",(MethodInfo *)0x0);
              (__this->fields).NapeLock = pUVar1;
              il2cpp_runtime_glue(&(__this->fields).NapeLock);
              pUVar1 = (__this->fields).NapeLock;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pMVar9 = (MethodInfo *)0x0;
                UnityEngine_GameObject__SetActive(pUVar1,0,(MethodInfo *)0x0);
                UI_InGameMenu__SetupChat(__this,pMVar9);
                UI_InGameMenu__SetupMinimap(__this,pMVar9);
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                method_00 = (UI_BasePopup_o *)
                            UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_SongPopup_CreateDefaultPopup_SongPopup);
                (__this->fields)._songPopup = method_00;
                il2cpp_runtime_glue(&(__this->fields)._songPopup);
                UI_InGameMenu__SetupSnapshot(__this,(MethodInfo *)method_00);
                UI_InGameMenu__HideAllMenus(__this,(MethodInfo *)method_00);
                pUVar8 = (UnityEngine_UIElements_UIDocument_o *)
                         UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)__this,MethodInfo_UIDocument_GetComponent_UIDocument);
                (__this->fields)._uiDocument = pUVar8;
                il2cpp_runtime_glue(&(__this->fields)._uiDocument,pUVar8);
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


// UI.InGameMenu$$ApplyUISettings
// il2cpp: void UI_InGameMenu__ApplyUISettings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b4fb0

void UI_InGameMenu__ApplyUISettings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UI_TopLeftHUD_o *__this_01;
  
  if (DAT_05704657 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    DAT_05704657 = '\x01';
  }
  __this_00 = (__this->fields).TopLeftHud;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (UI_TopLeftHUD_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    if (__this_01 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupTopLeftHud
// il2cpp: void UI_InGameMenu__SetupTopLeftHud (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b40d0

void UI_InGameMenu__SetupTopLeftHud(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *obj;
  Il2CppObject *pIVar1;
  
  if (DAT_05704658 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_init_method_metadata(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    il2cpp_init_method_metadata(&"Prefabs/InGame/TopLeftHUD");
    DAT_05704658 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  obj = UI_ElementFactory__InstantiateAndSetupPanel<object>(parent,"Prefabs/InGame/TopLeftHUD",0,MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor(obj,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  (__this->fields).TopLeftHud = obj;
  il2cpp_runtime_glue(&(__this->fields).TopLeftHud,obj);
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    if (pIVar1 != (Il2CppObject *)0x0) {
      (__this->fields).KDRReference = (UnityEngine_GameObject_o *)pIVar1[8].klass;
      il2cpp_runtime_glue(&(__this->fields).KDRReference);
      UnityEngine_GameObject__SetActive(obj,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ToggleUI
// il2cpp: void UI_InGameMenu__ToggleUI (UI_InGameMenu_o* __this, bool toggle, const MethodInfo* method);
// 0x40b5000

void UI_InGameMenu__ToggleUI(UI_InGameMenu_o *__this,bool_conflict toggle,MethodInfo *method)

{
  UnityEngine_Behaviour_o *__this_00;
  
  if (DAT_05704659 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    DAT_05704659 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_00,toggle & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$IsActive
// il2cpp: bool UI_InGameMenu__IsActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5060

bool_conflict UI_InGameMenu__IsActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Behaviour_o *__this_00;
  
  if (DAT_0570465a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    DAT_0570465a = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = UnityEngine_Behaviour__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$CreateCustomPopup
// il2cpp: void UI_InGameMenu__CreateCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x40b50b0

void UI_InGameMenu__CreateCustomPopup
               (UI_InGameMenu_o *__this,System_String_o *name,System_String_o *title,float width,
               float height,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_02;
  UI_BasePopup_o *item;
  
  if (DAT_0570465b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570465b = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_02 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        (parent,title,width,height,0,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    item = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar4 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UI_BasePopup_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields)._customPopups;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields)._customPopups;
        }
        if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (__this_01,(Il2CppObject *)name,(Il2CppObject *)item,MethodInfo_Void_set_Item);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetCustomPopup
// il2cpp: UI_CustomPopup_o* UI_InGameMenu__GetCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40b51f0

UI_CustomPopup_o *
UI_InGameMenu__GetCustomPopup(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_CustomPopup_o *pUVar2;
  
  if (DAT_0570465c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomPopup);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Item);
    DAT_0570465c = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._customPopups;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar2 = (UI_CustomPopup_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,(Il2CppObject *)name,MethodInfo_BasePopup_get_Item);
    if (pUVar2 != (UI_CustomPopup_o *)0x0) {
      bVar1 = (TypeInfo_CustomPopup->_2).naturalAligment;
      if (((pUVar2->klass->_2).naturalAligment < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomPopup)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar2);
      }
    }
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$IsCustomPopupActive
// il2cpp: bool UI_InGameMenu__IsCustomPopupActive (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40b5290

bool_conflict
UI_InGameMenu__IsCustomPopupActive(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_0570465d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Item);
    DAT_0570465d = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups
  ;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return 0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._customPopups;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)name,MethodInfo_BasePopup_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),*(char *)&pIVar3[9].klass != '\0')
        ;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetAllCustomPopups
// il2cpp: System_Collections_Generic_List_string__o* UI_InGameMenu__GetAllCustomPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5330

System_Collections_Generic_List_string__o *
UI_InGameMenu__GetAllCustomPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (DAT_0570465e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    DAT_0570465e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._customPopups;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary<object__object>__get_Keys(__this_00,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S)
    ;
    pSVar1 = (System_Collections_Generic_List_string__o *)
             System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String__ToList_String);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupMinimap
// il2cpp: void UI_InGameMenu__SetupMinimap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b4ce0

void UI_InGameMenu__SetupMinimap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar2;
  
  if (DAT_0570465f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_init_method_metadata(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_init_method_metadata(&"Minimap/Prefabs/MinimapPanel");
    DAT_0570465f = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = UI_ElementFactory__InstantiateAndBind(parent,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._minimapPanel;
  (__this->fields)._minimapPanel = pUVar2;
  il2cpp_runtime_glue(ppUVar1,pUVar2);
  UI_ElementFactory__SetAnchor
            ((__this->fields)._minimapPanel,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,
             (MethodInfo *)0x0);
  pUVar2 = (__this->fields)._minimapPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pUVar2 = *ppUVar1;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupSnapshot
// il2cpp: void UI_InGameMenu__SetupSnapshot (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b4dd0

void UI_InGameMenu__SetupSnapshot(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_SnapshotPopup_o *pUVar2;
  
  if (DAT_05704660 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopu);
    il2cpp_init_method_metadata(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_init_method_metadata(&"Prefabs/Snapshot/SnapshotPopup");
    DAT_05704660 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                        (pUVar1,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopu);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UI_SnapshotPopup_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    (__this->fields)._snapshotPopup = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._snapshotPopup);
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar1,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                (__this_00,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupChat
// il2cpp: void UI_InGameMenu__SetupChat (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b49f0

void UI_InGameMenu__SetupChat(UI_InGameMenu_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UI_FeedPanel_o *pUVar4;
  long lVar5;
  UI_VoiceChatPanel_o *pUVar6;
  UI_ChatPanel_o *pUVar7;
  
  if (DAT_05704661 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPan);
    il2cpp_init_method_metadata(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_init_method_metadata(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_init_method_metadata(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_init_method_metadata(&"Prefabs/InGame/ChatPanel");
    il2cpp_init_method_metadata(&"Prefabs/InGame/FeedPanel");
    DAT_05704661 = '\x01';
  }
  lVar5 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar1 = *(long *)(lVar5 + 0x28);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x30) == 0)) goto LAB_040b4cd1;
  if (*(char *)(*(long *)(lVar1 + 0x30) + 0x11) != '\0') {
    if (*(long *)(lVar1 + 0x28) == 0) goto LAB_040b4cd1;
    if (*(char *)(*(long *)(lVar1 + 0x28) + 0x11) != '\0') {
      __this_00 = (__this->fields)._bottomRightLabel;
      if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b4cd1;
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                         (pUVar2,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040b4cd1;
      pUVar4 = (UI_FeedPanel_o *)UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_FeedPanel_GetComponent_FeedPanel);
      (__this->fields).FeedPanel = pUVar4;
      il2cpp_runtime_glue(&(__this->fields).FeedPanel);
      pUVar4 = (__this->fields).FeedPanel;
      if (pUVar4 == (UI_FeedPanel_o *)0x0) goto LAB_040b4cd1;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                (pUVar3,2,2,(UnityEngine_Vector2_o)0xc248000000000000,(MethodInfo *)0x0);
      lVar5 = *(long *)(TypeInfo_SettingsManager + 0xb8);
    }
  }
  if ((*(long *)(lVar5 + 0x80) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar5 + 0x80) + 0xb0), lVar5 == 0)) goto LAB_040b4cd1;
  if (*(int *)(lVar5 + 0x14) != 2) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__InstantiateAndSetupPanel<object>(pUVar2,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPan)
    ;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040b4cd1;
    pUVar6 = (UI_VoiceChatPanel_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    (__this->fields).VoiceChatPanel = pUVar6;
    il2cpp_runtime_glue(&(__this->fields).VoiceChatPanel);
    pUVar6 = (__this->fields).VoiceChatPanel;
    if (pUVar6 == (UI_VoiceChatPanel_o *)0x0) goto LAB_040b4cd1;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor
              (pUVar3,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = UI_ElementFactory__InstantiateAndSetupPanel<object>(pUVar2,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UI_ChatPanel_o *)UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_ChatPanel_GetComponent_ChatPanel);
    (__this->fields).ChatPanel = pUVar7;
    il2cpp_runtime_glue(&(__this->fields).ChatPanel);
    pUVar7 = (__this->fields).ChatPanel;
    if (pUVar7 != (UI_ChatPanel_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                (pUVar3,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040b4cd1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupLabels
// il2cpp: void UI_InGameMenu__SetupLabels (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b41c0

void UI_InGameMenu__SetupLabels(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_KillScorePopup_o **ppUVar2;
  UI_KillFeedBigPopup_o **ppUVar3;
  uint uVar4;
  long lVar5;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_KillFeedSmallPopup_array *pUVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UI_KillScorePopup_o *pUVar10;
  UI_KillFeedBigPopup_o *pUVar11;
  UI_KillFeedSmallPopup_o *__this_02;
  int iVar12;
  int iVar13;
  
  if (DAT_05704662 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigP);
    il2cpp_init_method_metadata(&MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSm);
    il2cpp_init_method_metadata(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_init_method_metadata(&MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"");
    DAT_05704662 = '\x01';
  }
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar8 = UI_ElementFactory__CreateHUDLabel(pUVar7,__this_01,"",0,4,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._topCenterLabel = pUVar9;
    il2cpp_runtime_glue(&(__this->fields)._topCenterLabel);
    pUVar9 = (__this->fields)._topCenterLabel;
    if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                (pUVar8,1,1,(UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
      pUVar8 = (__this->fields).KDRReference;
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        pUVar8 = UI_ElementFactory__CreateHUDLabel
                           (pUVar7,__this_01,"",0,3,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = (UnityEngine_UI_Text_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
          (__this->fields)._topLeftLabel = pUVar9;
          il2cpp_runtime_glue(&(__this->fields)._topLeftLabel);
          pUVar9 = (__this->fields)._topLeftLabel;
          if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar8,0,0,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateHUDLabel
                               (pUVar7,__this_01,"",0,5,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pUVar9 = (UnityEngine_UI_Text_o *)
                       UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._topRightLabel = pUVar9;
              il2cpp_runtime_glue(&(__this->fields)._topRightLabel);
              pUVar9 = (__this->fields)._topRightLabel;
              if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar8,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar8 = UI_ElementFactory__CreateHUDLabel
                                   (pUVar7,__this_01,"",0,4,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar9 = (UnityEngine_UI_Text_o *)
                           UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
                  (__this->fields)._middleCenterLabel = pUVar9;
                  il2cpp_runtime_glue(&(__this->fields)._middleCenterLabel);
                  pUVar9 = (__this->fields)._middleCenterLabel;
                  if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                    pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar8,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,
                               (MethodInfo *)0x0);
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar8 = UI_ElementFactory__CreateHUDLabel
                                       (pUVar7,__this_01,"",0,4,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = (UnityEngine_UI_Text_o *)
                               UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
                      (__this->fields)._middleRightLabel = pUVar9;
                      il2cpp_runtime_glue(&(__this->fields)._middleRightLabel);
                      pUVar9 = (__this->fields)._middleRightLabel;
                      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                        pUVar8 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar8,5,5,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar8 = UI_ElementFactory__CreateHUDLabel
                                           (pUVar7,__this_01,"",0,4,(MethodInfo *)0x0);
                        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar9 = (UnityEngine_UI_Text_o *)
                                   UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text)
                          ;
                          (__this->fields)._middleLeftLabel = pUVar9;
                          il2cpp_runtime_glue(&(__this->fields)._middleLeftLabel);
                          pUVar9 = (__this->fields)._middleLeftLabel;
                          if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar8 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0)
                            ;
                            UI_ElementFactory__SetAnchor
                                      (pUVar8,3,3,(UnityEngine_Vector2_o)0x41200000,
                                       (MethodInfo *)0x0);
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
                            ;
                            pUVar8 = UI_ElementFactory__CreateHUDLabel
                                               (pUVar7,__this_01,"",0,4,(MethodInfo *)0x0)
                            ;
                            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar9 = (UnityEngine_UI_Text_o *)
                                       UnityEngine_GameObject__GetComponent<object>
                                                 (pUVar8,MethodInfo_Text_GetComponent_Text);
                              (__this->fields)._bottomCenterLabel = pUVar9;
                              il2cpp_runtime_glue(&(__this->fields)._bottomCenterLabel);
                              pUVar9 = (__this->fields)._bottomCenterLabel;
                              if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                                pUVar8 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar9,
                                                    (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar8,7,7,(UnityEngine_Vector2_o)0x4120000000000000,
                                           (MethodInfo *)0x0);
                                pUVar7 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)__this,
                                                    (MethodInfo *)0x0);
                                pUVar8 = UI_ElementFactory__CreateHUDLabel
                                                   (pUVar7,__this_01,"",0,3,
                                                    (MethodInfo *)0x0);
                                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar9 = (UnityEngine_UI_Text_o *)
                                           UnityEngine_GameObject__GetComponent<object>
                                                     (pUVar8,MethodInfo_Text_GetComponent_Text);
                                  (__this->fields)._bottomLeftLabel = pUVar9;
                                  il2cpp_runtime_glue(&(__this->fields)._bottomLeftLabel);
                                  pUVar9 = (__this->fields)._bottomLeftLabel;
                                  if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                                    pUVar8 = UnityEngine_Component__get_gameObject
                                                       ((UnityEngine_Component_o *)pUVar9,
                                                        (MethodInfo *)0x0);
                                    UI_ElementFactory__SetAnchor
                                              (pUVar8,6,6,(UnityEngine_Vector2_o)0x4120000041200000,
                                               (MethodInfo *)0x0);
                                    pUVar7 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)__this,
                                                        (MethodInfo *)0x0);
                                    pUVar8 = UI_ElementFactory__CreateHUDLabel
                                                       (pUVar7,__this_01,"",0,5,
                                                        (MethodInfo *)0x0);
                                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar9 = (UnityEngine_UI_Text_o *)
                                               UnityEngine_GameObject__GetComponent<object>
                                                         (pUVar8,MethodInfo_Text_GetComponent_Text);
                                      (__this->fields)._bottomRightLabel = pUVar9;
                                      il2cpp_runtime_glue(&(__this->fields)._bottomRightLabel);
                                      pUVar9 = (__this->fields)._bottomRightLabel;
                                      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                                        pUVar8 = UnityEngine_Component__get_gameObject
                                                           ((UnityEngine_Component_o *)pUVar9,
                                                            (MethodInfo *)0x0);
                                        UI_ElementFactory__SetAnchor
                                                  (pUVar8,8,8,
                                                   (UnityEngine_Vector2_o)0x41200000c1200000,
                                                   (MethodInfo *)0x0);
                                        pUVar7 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this,
                                                            (MethodInfo *)0x0);
                                        pUVar10 = (UI_KillScorePopup_o *)
                                                  UI_ElementFactory__CreateDefaultPopup<object>
                                                            (pUVar7,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                                        ppUVar2 = &(__this->fields)._killScorePopup;
                                        (__this->fields)._killScorePopup = pUVar10;
                                        il2cpp_runtime_glue(ppUVar2);
                                        pUVar10 = (__this->fields)._killScorePopup;
                                        if ((pUVar10 != (UI_KillScorePopup_o *)0x0) &&
                                           (pUVar8 = UnityEngine_Component__get_gameObject
                                                               ((UnityEngine_Component_o *)pUVar10,
                                                                (MethodInfo *)0x0),
                                           pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__AddComponent<object>
                                                    (pUVar8,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
                                          pUVar10 = *ppUVar2;
                                          if (pUVar10 != (UI_KillScorePopup_o *)0x0) {
                                            pUVar8 = UnityEngine_Component__get_gameObject
                                                               ((UnityEngine_Component_o *)pUVar10,
                                                                (MethodInfo *)0x0);
                                            UI_ElementFactory__SetAnchor
                                                      (pUVar8,4,4,
                                                       (UnityEngine_Vector2_o)0x42c8000000000000,
                                                       (MethodInfo *)0x0);
                                            pUVar7 = UnityEngine_Component__get_transform
                                                               ((UnityEngine_Component_o *)__this,
                                                                (MethodInfo *)0x0);
                                            pUVar11 = (UI_KillFeedBigPopup_o *)
                                                      UI_ElementFactory__CreateDefaultPopup<object>
                                                                (pUVar7,0,MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigP);
                                            ppUVar3 = &(__this->fields)._killFeedBigPopup;
                                            (__this->fields)._killFeedBigPopup = pUVar11;
                                            il2cpp_runtime_glue(ppUVar3);
                                            pUVar11 = (__this->fields)._killFeedBigPopup;
                                            if ((pUVar11 != (UI_KillFeedBigPopup_o *)0x0) &&
                                               (pUVar8 = UnityEngine_Component__get_gameObject
                                                                   ((UnityEngine_Component_o *)
                                                                    pUVar11,(MethodInfo *)0x0),
                                               pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__AddComponent<object>
                                                        (pUVar8,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                              pUVar11 = *ppUVar3;
                                              if (pUVar11 != (UI_KillFeedBigPopup_o *)0x0) {
                                                pUVar8 = UnityEngine_Component__get_gameObject
                                                                   ((UnityEngine_Component_o *)
                                                                    pUVar11,(MethodInfo *)0x0);
                                                UI_ElementFactory__SetAnchor
                                                          (pUVar8,1,4,
                                                           (UnityEngine_Vector2_o)0xc2f0000000000000
                                                           ,(MethodInfo *)0x0);
                                                lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                 0x28);
                                                if ((lVar5 != 0) &&
                                                   (lVar5 = *(long *)(lVar5 + 0x160), lVar5 != 0)) {
                                                  iVar13 = *(int *)(lVar5 + 0x14) + -1;
                                                  if (0 < iVar13) {
                                                    iVar12 = 0;
                                                    do {
                                                      while( true ) {
                                                        pUVar7 = 
                                                  UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)__this,
                                                             (MethodInfo *)0x0);
                                                  __this_02 = (UI_KillFeedSmallPopup_o *)
                                                                                                                            
                                                  UI_ElementFactory__CreateDefaultPopup<object>
                                                            (pUVar7,0,MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSm);
                                                  if ((__this_02 == (UI_KillFeedSmallPopup_o *)0x0)
                                                     || (pUVar8 = 
                                                  UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)__this_02,
                                                             (MethodInfo *)0x0),
                                                  pUVar8 == (UnityEngine_GameObject_o *)0x0))
                                                  goto LAB_040b49e6;
                                                  UnityEngine_GameObject__AddComponent<object>
                                                            (pUVar8,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                                  pUVar8 = UnityEngine_Component__get_gameObject
                                                                     ((UnityEngine_Component_o *)
                                                                      __this_02,(MethodInfo *)0x0);
                                                  UI_ElementFactory__SetAnchor
                                                            (pUVar8,1,4,
                                                             (UnityEngine_Vector2_o)
                                                             ((ulong)(uint)((float)iVar12 * -35.0 +
                                                                           -162.0) << 0x20),
                                                             (MethodInfo *)0x0);
                                                  lVar5 = MethodInfo_Void_Add;
                                                  __this_00 = (__this->fields)._killFeedSmallPopups;
                                                  if (__this_00 ==
                                                      (
                                                  System_Collections_Generic_List_KillFeedSmallPopup__o
                                                  *)0x0) goto LAB_040b49e6;
                                                  piVar1 = &(__this_00->fields)._version;
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar6 = (__this_00->fields)._items;
                                                  if (pUVar6 == (UI_KillFeedSmallPopup_array *)0x0)
                                                  goto LAB_040b49e6;
                                                  uVar4 = (__this_00->fields)._size;
                                                  if ((uint)pUVar6->max_length <= uVar4) break;
                                                  (__this_00->fields)._size = uVar4 + 1;
                                                  pUVar6->m_Items[(int)uVar4] = __this_02;
                                                  il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4);
                                                  iVar12 = iVar12 + 1;
                                                  if (iVar13 == iVar12) {
                                                    return;
                                                  }
                                                  }
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)__this_02,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  iVar12 = iVar12 + 1;
                                                  } while (iVar13 != iVar12);
                                                  }
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
        }
      }
    }
  }
LAB_040b49e6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupLoading
// il2cpp: void UI_InGameMenu__SetupLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b3fe0

void UI_InGameMenu__SetupLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameBackgroundMenu_o **ppUVar1;
  UI_InGameBackgroundMenu_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_GlobalPauseGamePopup_o *pUVar4;
  
  if (DAT_05704663 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPa);
    il2cpp_init_method_metadata(&MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackground);
    il2cpp_init_method_metadata(&"Prefabs/Panels/BackgroundMenu");
    DAT_05704663 = '\x01';
  }
  pUVar2 = (UI_InGameBackgroundMenu_o *)
           UI_ElementFactory__CreateMenu<object>("Prefabs/Panels/BackgroundMenu",MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackground);
  ppUVar1 = &(__this->fields)._backgroundMenu;
  (__this->fields)._backgroundMenu = pUVar2;
  il2cpp_runtime_glue(ppUVar1,pUVar2);
  pUVar2 = (__this->fields)._backgroundMenu;
  if (pUVar2 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar2->klass->vtable)._4_Setup.methodPtr)();
    pUVar2 = *ppUVar1;
    if (pUVar2 != (UI_InGameBackgroundMenu_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(pUVar3,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar4 = (UI_GlobalPauseGamePopup_o *)
                 UI_ElementFactory__CreateDefaultPopup<object>(pUVar3,0,MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPa);
        (__this->fields)._globalPauseGamePopup = pUVar4;
        il2cpp_runtime_glue(&(__this->fields)._globalPauseGamePopup,pUVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$OnFinishLoading
// il2cpp: void UI_InGameMenu__OnFinishLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5390

void UI_InGameMenu__OnFinishLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  UI_BasePopup_array *pUVar5;
  GameManagers_InGameManager_o *pGVar6;
  long lVar7;
  Il2CppClass *pIVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  UI_BasePopup_o *pUVar11;
  UI_CutsceneDialoguePanel_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_00;
  
  if (DAT_05704664 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_init_method_metadata(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_Cutscen);
    il2cpp_init_method_metadata(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_init_method_metadata(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPop);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704664 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup<object>(pUVar10,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (__this->fields)._characterPopup = pUVar11;
  il2cpp_runtime_glue(&(__this->fields)._characterPopup);
  pUVar10 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup<object>(pUVar10,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPop);
  (__this->fields)._scoreboardPopup = pUVar11;
  il2cpp_runtime_glue(&(__this->fields)._scoreboardPopup);
  pUVar10 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup<object>(pUVar10,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (__this->fields)._mapPopup = pUVar11;
  il2cpp_runtime_glue(&(__this->fields)._mapPopup);
  pUVar10 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar12 = (UI_CutsceneDialoguePanel_o *)
            UI_ElementFactory__CreateDefaultPopup<object>(pUVar10,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_Cutscen);
  (__this->fields)._cutsceneDialoguePanel = pUVar12;
  il2cpp_runtime_glue(&(__this->fields)._cutsceneDialoguePanel);
  pUVar12 = (__this->fields)._cutsceneDialoguePanel;
  if (pUVar12 != (UI_CutsceneDialoguePanel_o *)0x0) {
    pUVar13 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor
              (pUVar13,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar7 = MethodInfo_Void_Add;
    pSVar4 = (__this->fields)._popups;
    if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar11 = (__this->fields)._characterPopup;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar4->fields)._items;
      if (pUVar5 != (UI_BasePopup_array *)0x0) {
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pUVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pUVar5->m_Items[(int)uVar3] = pUVar11;
          il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
          pSVar4 = (__this->fields)._popups;
          lVar7 = MethodInfo_Void_Add;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          pSVar4 = (__this->fields)._popups;
          lVar7 = MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = lVar7;
        if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
          pUVar11 = (__this->fields)._scoreboardPopup;
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (pSVar4->fields)._items;
          if (pUVar5 != (UI_BasePopup_array *)0x0) {
            uVar3 = (pSVar4->fields)._size;
            if (uVar3 < (uint)pUVar5->max_length) {
              (pSVar4->fields)._size = uVar3 + 1;
              pUVar5->m_Items[(int)uVar3] = pUVar11;
              il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
              pSVar4 = (__this->fields)._popups;
              lVar7 = MethodInfo_Void_Add;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11
                         ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                        );
              pSVar4 = (__this->fields)._popups;
              lVar7 = MethodInfo_Void_Add;
            }
            MethodInfo_Void_Add = lVar7;
            if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
              pUVar11 = (__this->fields)._mapPopup;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar4->fields)._items;
              if (pUVar5 != (UI_BasePopup_array *)0x0) {
                uVar3 = (pSVar4->fields)._size;
                if (uVar3 < (uint)pUVar5->max_length) {
                  (pSVar4->fields)._size = uVar3 + 1;
                  pUVar5->m_Items[(int)uVar3] = pUVar11;
                  il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (Il2CppObject *)pUVar11,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                pIVar8 = TypeInfo_InGameManager;
                pGVar6 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                if (pGVar6 == (GameManagers_InGameManager_o *)0x0) {
                  (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
                }
                else {
                  bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
                  if (((pGVar6->klass->_2).naturalAligment < bVar2) ||
                     ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameManager)) {
LAB_040b577e:
                    /* WARNING: Subroutine does not return */
                    il2cpp_unwind_resume(pGVar6,pIVar8);
                  }
                  (__this->fields)._gameManager = pGVar6;
                  if (((pGVar6->klass->_2).naturalAligment < bVar2) ||
                     ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar8))
                  goto LAB_040b577e;
                }
                il2cpp_runtime_glue(&(__this->fields)._gameManager);
                __this_00 = (UI_InGameMenu_o *)(__this->fields)._minimapPanel;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                method_00 = (MethodInfo *)0x0;
                bVar9 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar9 == '\0') {
                  return;
                }
                lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
                if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x70), lVar7 != 0)) {
                  if (*(char *)(lVar7 + 0x11) == '\0') {
                    return;
                  }
                  bVar9 = UI_InGameMenu__AllowMap(__this_00,method_00);
                  if ((char)bVar9 == '\0') {
                    return;
                  }
                  pUVar13 = (__this->fields)._minimapPanel;
                  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
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


// UI.InGameMenu$$AllowMap
// il2cpp: bool UI_InGameMenu__AllowMap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5790

bool_conflict UI_InGameMenu__AllowMap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704665 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704665 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar1 + 0xc0) + 0x11) != '\0') {
      return 0;
    }
    lVar1 = *(long *)(lVar1 + 200);
    if (lVar1 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(char *)(lVar1 + 0x11) == '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$InMenu
// il2cpp: bool UI_InGameMenu__InMenu (const MethodInfo* method);
// 0x40ab880

bool_conflict UI_InGameMenu__InMenu(MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppObject *pIVar6;
  
  if (DAT_05704666 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704666 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar1);
    }
    if ((System_Collections_Generic_List_object__o *)plVar1[4] !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)plVar1[4],MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
      while (__this.fields._8_8_ = pIVar5, __this.fields._list = pSVar4,
            __this.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
            (char)bVar3 != '\0') {
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)&pIVar6[9].klass != '\0') {
          __this_00.fields._8_8_ = pIVar5;
          __this_00.fields._list = pSVar4;
          __this_00.fields._current = pIVar6;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
          return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
        }
      }
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = pSVar4;
      __this_01.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
      if (plVar1[0x13] != 0) {
        if (*(char *)(plVar1[0x13] + 0x40) != '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),1);
        }
        lVar2 = plVar1[0x14];
        if (lVar2 != 0) {
          return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(char *)(lVar2 + 0x28) != '\0');
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetPauseMenu
// il2cpp: void UI_InGameMenu__SetPauseMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x40b5810

void UI_InGameMenu__SetPauseMenu(UI_InGameMenu_o *__this,bool_conflict enabled,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Behaviour_o *__this_00;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if ((char)enabled == '\0') {
    UI_InGameMenu__HideAllMenus(__this,method_00);
    *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
  }
  else {
    bVar2 = UI_InGameMenu__IsPauseMenuActive(__this,method_00);
    if ((char)bVar2 == '\0') {
      UI_InGameMenu__HideAllMenus(__this,method_00);
      pUVar1 = (__this->fields)._pausePopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b58a0;
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    }
  }
  if (DAT_05704659 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    DAT_05704659 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
    return;
  }
LAB_040b58a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ToggleScoreboardMenu
// il2cpp: void UI_InGameMenu__ToggleScoreboardMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5a60

void UI_InGameMenu__ToggleScoreboardMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  UnityEngine_Behaviour_o *__this_00;
  MethodInfo *method_01;
  
  pUVar1 = (__this->fields)._scoreboardPopup;
  if ((pUVar1 != (UI_BasePopup_o *)0x0) &&
     (method_00 = (MethodInfo *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     method_00 != (MethodInfo *)0x0)) {
    method_01 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf
                      ((UnityEngine_GameObject_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = UI_InGameMenu__InMenu(method_00);
      if ((char)bVar2 == '\0') {
        UI_InGameMenu__HideAllMenus(__this,method_01);
        pUVar1 = (__this->fields)._scoreboardPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5b2d;
        (*(pUVar1->klass->vtable)._21_Show.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      }
    }
    else {
      pUVar1 = (__this->fields)._scoreboardPopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5b2d;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
    if (DAT_05704659 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
      DAT_05704659 = '\x01';
    }
    __this_00 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
    if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040b5b2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetScoreboardMenu
// il2cpp: void UI_InGameMenu__SetScoreboardMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x40b5b40

void UI_InGameMenu__SetScoreboardMenu
               (UI_InGameMenu_o *__this,bool_conflict enabled,bool_conflict fromClick,
               MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool_conflict bVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if ((char)enabled == '\0') {
    pUVar1 = (__this->fields)._scoreboardPopup;
    if (pUVar1 != (UI_BasePopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      if ((char)fromClick == '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)__this);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_InGameMenu__HideAllMenus(__this,method_00);
    pUVar1 = (__this->fields)._scoreboardPopup;
    if (pUVar1 != (UI_BasePopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ToggleMapMenu
// il2cpp: void UI_InGameMenu__ToggleMapMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5bc0

void UI_InGameMenu__ToggleMapMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool_conflict bVar2;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields)._mapPopup;
  if ((pUVar1 != (UI_BasePopup_o *)0x0) &&
     (__this_00 = (UI_InGameMenu_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     __this_00 != (UI_InGameMenu_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf
                      ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = UI_InGameMenu__InMenu((MethodInfo *)__this_00);
      if (((char)bVar2 == '\0') &&
         (bVar2 = UI_InGameMenu__AllowMap(__this_00,method_00), (char)bVar2 != '\0')) {
        UI_InGameMenu__HideAllMenus(__this,method_00);
        pUVar1 = (__this->fields)._mapPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5c96;
        (*(pUVar1->klass->vtable)._21_Show.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      }
    }
    else {
      pUVar1 = (__this->fields)._mapPopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5c96;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
    if (DAT_05704659 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
      DAT_05704659 = '\x01';
    }
    __this_01 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
    if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040b5c96:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetMapMenu
// il2cpp: void UI_InGameMenu__SetMapMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x40b5ca0

void UI_InGameMenu__SetMapMenu
               (UI_InGameMenu_o *__this,bool_conflict enabled,bool_conflict fromClick,
               MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool_conflict bVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if ((char)enabled == '\0') {
    pUVar1 = (__this->fields)._mapPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) {
LAB_040b5d1b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    if ((char)fromClick != '\0') {
      *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
    }
  }
  else {
    __this_00 = __this;
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)__this);
    if ((char)bVar2 == '\0') {
      bVar2 = UI_InGameMenu__AllowMap(__this_00,method_00);
      if ((char)bVar2 != '\0') {
        UI_InGameMenu__HideAllMenus(__this,method_00);
        pUVar1 = (__this->fields)._mapPopup;
        if (pUVar1 != (UI_BasePopup_o *)0x0) {
          (*(pUVar1->klass->vtable)._21_Show.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._21_Show.method);
          return;
        }
        goto LAB_040b5d1b;
      }
    }
  }
  return;
}


// UI.InGameMenu$$SetCharacterMenu
// il2cpp: void UI_InGameMenu__SetCharacterMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x40b5d20

void UI_InGameMenu__SetCharacterMenu
               (UI_InGameMenu_o *__this,bool_conflict enabled,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Behaviour_o *__this_00;
  MethodInfo *extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  long *method_01;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  method_01 = (long *)__this;
  if (DAT_05704667 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    method_01 = &TypeInfo_Object;
    il2cpp_init_method_metadata();
    DAT_05704667 = '\x01';
    method = extraout_RDX;
  }
  if ((char)enabled == '\0') {
    pUVar1 = (__this->fields)._characterPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5e6a;
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._22_Hide.method,method);
    pUVar1 = (__this->fields)._characterChangePopup;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields)._characterChangePopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5e6a;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
  }
  else {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)method_01);
    if ((char)bVar2 == '\0') {
      UI_InGameMenu__HideAllMenus(__this,method_00);
      pUVar1 = (__this->fields)._characterPopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto LAB_040b5e6a;
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
  }
  if (DAT_05704659 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    DAT_05704659 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
    return;
  }
LAB_040b5e6a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ShowCharacterChangeMenu
// il2cpp: void UI_InGameMenu__ShowCharacterChangeMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5e70

void UI_InGameMenu__ShowCharacterChangeMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *pUVar7;
  long *method_00;
  
  method_00 = (long *)__this;
  if (DAT_05704668 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_Characte);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    method_00 = &TypeInfo_Object;
    il2cpp_init_method_metadata();
    DAT_05704668 = '\x01';
  }
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_00);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(__this,method);
  pUVar7 = (__this->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields)._characterChangePopup;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup<object>(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_Characte);
    (__this->fields)._characterChangePopup = pUVar7;
    il2cpp_runtime_glue(ppUVar2,pUVar7);
    lVar5 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto LAB_040b5fb3;
    pUVar7 = (__this->fields)._characterChangePopup;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto LAB_040b5fb3;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = pUVar7;
      il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar3);
      pUVar7 = *ppUVar2;
      if (pUVar7 == (UI_BasePopup_o *)0x0) goto LAB_040b5fb3;
      goto LAB_040b5f9b;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar7,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
  }
  pUVar7 = *ppUVar2;
  if (pUVar7 != (UI_BasePopup_o *)0x0) {
LAB_040b5f9b:
    (*(pUVar7->klass->vtable)._21_Show.methodPtr)(pUVar7,(pUVar7->klass->vtable)._21_Show.method);
    return;
  }
LAB_040b5fb3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ShowCutsceneMenu
// il2cpp: void UI_InGameMenu__ShowCutsceneMenu (UI_InGameMenu_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x40b5fc0

void UI_InGameMenu__ShowCutsceneMenu
               (UI_InGameMenu_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,bool_conflict full,MethodInfo *method)

{
  UI_CutsceneDialoguePanel_o *__this_00;
  
  __this_00 = (__this->fields)._cutsceneDialoguePanel;
  if (__this_00 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show(__this_00,icon,title,content,full & 0xff,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$HideCutsceneMenu
// il2cpp: void UI_InGameMenu__HideCutsceneMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b5fe0

void UI_InGameMenu__HideCutsceneMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_CutsceneDialoguePanel_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._cutsceneDialoguePanel;
  if (pUVar1 != (UI_CutsceneDialoguePanel_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$IsPauseMenuActive
// il2cpp: bool UI_InGameMenu__IsPauseMenuActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b58b0

bool_conflict UI_InGameMenu__IsPauseMenuActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_03;
  undefined8 extraout_RAX;
  int iVar2;
  byte bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Component_o *__this_04;
  
  if (DAT_05704669 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    DAT_05704669 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  __this_04 = (UnityEngine_Component_o *)0x0;
  __this_00 = (__this->fields)._allPausePopups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)__this_04;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
    if ((char)bVar1 == '\0') {
      iVar2 = 5;
      bVar3 = 0;
      goto LAB_040b5984;
    }
    if (__this_04 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = UnityEngine_Component__get_gameObject(__this_04,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_03,(MethodInfo *)0x0);
  } while ((char)bVar1 == '\0');
  bVar3 = 1;
  iVar2 = 4;
LAB_040b5984:
  __this_02.fields._8_8_ = pIVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = (Il2CppObject *)__this_04;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar2 == 4 & bVar3);
}


// UI.InGameMenu$$ShowBlood
// il2cpp: void UI_InGameMenu__ShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b6010

void UI_InGameMenu__ShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((char)(__this->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields)._showingBlood = 1;
  if (DAT_05704672 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndShowBlood_d__102);
    DAT_05704672 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndShowBlood_d__102);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ShowSnapshot
// il2cpp: void UI_InGameMenu__ShowSnapshot (UI_InGameMenu_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x40b6110

void UI_InGameMenu__ShowSnapshot
               (UI_InGameMenu_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UI_SnapshotPopup_o *pUVar1;
  
  pUVar1 = (__this->fields)._snapshotPopup;
  if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._59_Load.methodPtr)
              (pUVar1,texture,(pUVar1->klass->vtable)._59_Load.method);
    pUVar1 = (__this->fields)._snapshotPopup;
    if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      (__this->fields)._snapshotTimeLeft = 2.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x40b6160

void UI_InGameMenu__ShowKillFeed
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,MethodInfo *method)

{
  float timeLeft;
  long lVar1;
  UI_KillFeedBigPopup_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_0570466a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570466a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x160), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) < 1) {
      return;
    }
    __this_00 = (__this->fields)._killFeedBigPopup;
    if (__this_00 != (UI_KillFeedBigPopup_o *)0x0) {
      timeLeft = (__this_00->fields).TimeLeft;
      if (0.0 < timeLeft) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this,(__this_00->fields).Killer,(__this_00->fields).Victim,
                   (__this_00->fields).Score,(__this_00->fields).Weapon,timeLeft,0,
                   in_stack_ffffffffffffffc8);
        __this_00 = (__this->fields)._killFeedBigPopup;
        if (__this_00 == (UI_KillFeedBigPopup_o *)0x0) goto LAB_040b6252;
      }
      UI_KillFeedBigPopup__Show(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040b6252:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ShowKillFeedPushSmall
// il2cpp: void UI_InGameMenu__ShowKillFeedPushSmall (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, int32_t index, const MethodInfo* method);
// 0x40b6260

void UI_InGameMenu__ShowKillFeedPushSmall
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,float timeLeft,int32_t index,MethodInfo *method
               )

{
  float timeLeft_00;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_KillFeedSmallPopup_o *__this_01;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_0570466b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KillFeedSmallPopup_get_Item);
    DAT_0570466b = '\x01';
  }
  __this_00 = (__this->fields)._killFeedSmallPopups;
  if (__this_00 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
    if ((__this_00->fields)._size <= index) {
      return;
    }
    __this_01 = (UI_KillFeedSmallPopup_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_KillFeedSmallPopup_get_Item
                          );
    if (__this_01 != (UI_KillFeedSmallPopup_o *)0x0) {
      timeLeft_00 = (__this_01->fields).TimeLeft;
      if (0.0 < timeLeft_00) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this,(__this_01->fields).Killer,(__this_01->fields).Victim,
                   (__this_01->fields).Score,(__this_01->fields).Weapon,timeLeft_00,index + 1,
                   in_stack_ffffffffffffffb8);
      }
      UI_KillFeedSmallPopup__ShowImmediate
                (__this_01,killer,victim,score,weapon,timeLeft,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$ShowKillScore
// il2cpp: void UI_InGameMenu__ShowKillScore (UI_InGameMenu_o* __this, int32_t score, bool force, const MethodInfo* method);
// 0x40b6360

void UI_InGameMenu__ShowKillScore
               (UI_InGameMenu_o *__this,int32_t score,bool_conflict force,MethodInfo *method)

{
  long lVar1;
  UI_KillScorePopup_o *__this_00;
  UI_StylebarHandler_o *__this_01;
  
  if (DAT_0570466c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570466c = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar1 == 0) goto LAB_040b6402;
    if (*(char *)(lVar1 + 0x80) == '\0') {
      return;
    }
  }
  __this_00 = (__this->fields)._killScorePopup;
  if (__this_00 != (UI_KillScorePopup_o *)0x0) {
    UI_KillScorePopup__Show(__this_00,score,(MethodInfo *)0x0);
    (__this->fields)._killScoreTimeLeft = 3.0;
    __this_01 = (__this->fields).StylebarHandler;
    if (__this_01 != (UI_StylebarHandler_o *)0x0) {
      UI_StylebarHandler__OnHit(__this_01,score,(MethodInfo *)0x0);
      return;
    }
  }
LAB_040b6402:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetStylebarRank
// il2cpp: int32_t UI_InGameMenu__GetStylebarRank (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b6410

int32_t UI_InGameMenu__GetStylebarRank(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_StylebarHandler_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_0570466d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570466d = '\x01';
  }
  pUVar1 = (__this->fields).StylebarHandler;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).StylebarHandler;
    if (pUVar1 == (UI_StylebarHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (pUVar1->fields)._rank;
  }
  return iVar3;
}


// UI.InGameMenu$$SetLabelActive
// il2cpp: void UI_InGameMenu__SetLabelActive (UI_InGameMenu_o* __this, System_String_o* label, bool active, const MethodInfo* method);
// 0x40b6490

void UI_InGameMenu__SetLabelActive
               (UI_InGameMenu_o *__this,System_String_o *label,bool_conflict active,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_01;
  
  if (DAT_0570466e == '\0') {
    il2cpp_init_method_metadata(&"TopRight");
    il2cpp_init_method_metadata(&"MiddleRight");
    il2cpp_init_method_metadata(&"MiddleCenter");
    il2cpp_init_method_metadata(&"BottomCenter");
    il2cpp_init_method_metadata(&"MiddleLeft");
    il2cpp_init_method_metadata(&"TopLeft");
    il2cpp_init_method_metadata(&"TopCenter");
    il2cpp_init_method_metadata(&"BottomLeft");
    il2cpp_init_method_metadata(&"BottomRight");
    DAT_0570466e = '\x01';
  }
  bVar1 = System_String__op_Equality(label,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(label,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(label,"TopRight",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(label,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(label,"MiddleLeft",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__op_Equality(label,"MiddleRight",(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality(label,"BottomLeft",(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                bVar1 = System_String__op_Equality(label,"BottomRight",(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  bVar1 = System_String__op_Equality(label,"BottomCenter",(MethodInfo *)0x0);
                  if ((char)bVar1 == '\0') {
                    return;
                  }
                  __this_00 = (__this->fields)._bottomCenterLabel;
                }
                else {
                  __this_00 = (__this->fields)._bottomRightLabel;
                }
              }
              else {
                __this_00 = (__this->fields)._bottomLeftLabel;
              }
            }
            else {
              __this_00 = (__this->fields)._middleRightLabel;
            }
          }
          else {
            __this_00 = (__this->fields)._middleLeftLabel;
          }
        }
        else {
          __this_00 = (__this->fields)._middleCenterLabel;
        }
      }
      else {
        __this_00 = (__this->fields)._topRightLabel;
      }
    }
    else {
      __this_00 = (__this->fields)._topLeftLabel;
    }
  }
  else {
    __this_00 = (__this->fields)._topCenterLabel;
  }
  if ((__this_00 != (UnityEngine_UI_Text_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetKDRPanelActive
// il2cpp: void UI_InGameMenu__SetKDRPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x40b66c0

void UI_InGameMenu__SetKDRPanelActive
               (UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields).TopLeftHud;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetMinimapActive
// il2cpp: void UI_InGameMenu__SetMinimapActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x40b66e0

void UI_InGameMenu__SetMinimapActive
               (UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  undefined4 in_register_00000034;
  
  bVar1 = UI_InGameMenu__AllowMap(__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  if ((char)bVar1 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._minimapPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetChatPanelActive
// il2cpp: void UI_InGameMenu__SetChatPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x40b6720

void UI_InGameMenu__SetChatPanelActive
               (UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).ChatPanel;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,active & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetFeedPanelActive
// il2cpp: void UI_InGameMenu__SetFeedPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x40b6750

void UI_InGameMenu__SetFeedPanelActive
               (UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  long lVar1;
  UI_FeedPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (DAT_0570466f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570466f = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) == '\0') {
      return;
    }
    __this_00 = (__this->fields).FeedPanel;
    if (__this_00 != (UI_FeedPanel_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,active & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetBottomHUDActive
// il2cpp: void UI_InGameMenu__SetBottomHUDActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x40b67f0

void UI_InGameMenu__SetBottomHUDActive
               (UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  
  pUVar1 = (__this->fields).HUDBottomHandler;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (DAT_05704646 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05704646 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = (pUVar1->fields)._hudBottom;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetLabel
// il2cpp: void UI_InGameMenu__SetLabel (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x40b6880

void UI_InGameMenu__SetLabel
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,float time,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (DAT_05704670 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05704670 = '\x01';
  }
  UI_InGameMenu__SetLabelText(__this,label,message,method);
  __this_00 = (__this->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    System_Collections_Generic_Dictionary<object__bool>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)label,-(uint)(time != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_01 = (__this->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (Il2CppObject *)label,time,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetLabelText
// il2cpp: void UI_InGameMenu__SetLabelText (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x40b6930

void UI_InGameMenu__SetLabelText
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  System_String_o **ppSVar3;
  
  if (DAT_05704671 == '\0') {
    il2cpp_init_method_metadata(&"TopRight");
    il2cpp_init_method_metadata(&"MiddleRight");
    il2cpp_init_method_metadata(&"MiddleCenter");
    il2cpp_init_method_metadata(&"BottomCenter");
    il2cpp_init_method_metadata(&"MiddleLeft");
    il2cpp_init_method_metadata(&"TopLeft");
    il2cpp_init_method_metadata(&"TopCenter");
    il2cpp_init_method_metadata(&"BottomLeft");
    il2cpp_init_method_metadata(&"BottomRight");
    DAT_05704671 = '\x01';
  }
  bVar2 = System_String__op_Equality(label,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(label,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      (__this->fields)._topLeftText = message;
      ppSVar3 = &(__this->fields)._topLeftText;
LAB_040b6a1f:
      il2cpp_runtime_glue(ppSVar3,message);
      return;
    }
    bVar2 = System_String__op_Equality(label,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(label,"MiddleCenter",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        (__this->fields)._middleCenterText = message;
        ppSVar3 = &(__this->fields)._middleCenterText;
        goto LAB_040b6a1f;
      }
      bVar2 = System_String__op_Equality(label,"MiddleLeft",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(label,"MiddleRight",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(label,"BottomLeft",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(label,"BottomRight",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__op_Equality(label,"BottomCenter",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                return;
              }
              (__this->fields)._bottomCenterText = message;
              ppSVar3 = &(__this->fields)._bottomCenterText;
            }
            else {
              (__this->fields)._bottomRightText = message;
              ppSVar3 = &(__this->fields)._bottomRightText;
            }
            goto LAB_040b6a1f;
          }
          pUVar1 = (__this->fields)._bottomLeftLabel;
        }
        else {
          pUVar1 = (__this->fields)._middleRightLabel;
        }
      }
      else {
        pUVar1 = (__this->fields)._middleLeftLabel;
      }
    }
    else {
      pUVar1 = (__this->fields)._topRightLabel;
    }
  }
  else {
    pUVar1 = (__this->fields)._topCenterLabel;
  }
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$WaitAndShowBlood
// il2cpp: System_Collections_IEnumerator_o* UI_InGameMenu__WaitAndShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b60a0

System_Collections_IEnumerator_o *
UI_InGameMenu__WaitAndShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704672 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndShowBlood_d__102);
    DAT_05704672 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndShowBlood_d__102);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$Update
// il2cpp: void UI_InGameMenu__Update (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b6b80

void UI_InGameMenu__Update(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  GameManagers_InGameManager_o *pGVar5;
  UI_GlobalPauseGamePopup_o *pUVar6;
  UI_GlobalPauseGamePopup_c *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_Collections_Generic_Dictionary_string__bool__o *pSVar10;
  System_Collections_Generic_Dictionary_string__float__o *pSVar11;
  long *plVar12;
  UnityEngine_Object_o *pUVar13;
  long lVar14;
  Photon_Realtime_Player_o *player;
  Characters_BaseCharacter_o *pCVar15;
  long lVar16;
  long *plVar17;
  UI_KillFeedBigPopup_o *pUVar18;
  UI_KillScorePopup_o *pUVar19;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_SnapshotPopup_o *pUVar20;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_06;
  undefined8 uVar21;
  bool_conflict bVar22;
  int32_t iVar23;
  System_String_o *pSVar24;
  System_String_o *pSVar25;
  Photon_Realtime_Player_array *pPVar26;
  Il2CppObject *pIVar27;
  System_String_o *pSVar28;
  System_String_array *pSVar29;
  MethodInfo *pMVar30;
  char extraout_DL;
  int iVar31;
  float fVar32;
  float fVar33;
  float in_stack_ffffffffffffff28;
  uint uVar34;
  UI_InGameMenu_o *pUVar35;
  Il2CppMethodPointer pIVar36;
  Il2CppObject *pIVar37;
  Il2CppMethodPointer pIVar38;
  InvokerMethod pIVar39;
  undefined1 auStack_a8 [40];
  Il2CppType *pIStack_80;
  Il2CppObject *pIStack_78;
  Il2CppRGCTXData *pIStack_70;
  _union_247328 _Stack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  Il2CppRGCTXData *pIStack_40;
  _union_247328 _Stack_38;
  
  if (DAT_05704673 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_SpecateMode_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KillFeedSmallPopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_Boolean__get);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_KillFeedSmallPopup__GetE);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SpecateMode);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"Paused by master client.");
    il2cpp_init_method_metadata(&"{0}: ");
    il2cpp_init_method_metadata(&"\nRestarting in ");
    il2cpp_init_method_metadata(&"). ");
    il2cpp_init_method_metadata(&"Prev: ");
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"Spectating. ");
    il2cpp_init_method_metadata(&"Next: ");
    il2cpp_init_method_metadata(&"Join: ");
    il2cpp_init_method_metadata(&"Spectating ");
    il2cpp_init_method_metadata(&" (");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Unpausing in: ");
    DAT_05704673 = '\x01';
  }
  pIStack_78 = (Il2CppObject *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  auStack_a8._32_8_ = (void *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  _Stack_68.genericMethod = (void *)0x0;
  pIVar36 = (Il2CppMethodPointer)0x0;
  pIVar38 = (Il2CppMethodPointer)0x0;
  pIVar39 = (InvokerMethod)0x0;
  uVar34 = 0;
  auStack_a8._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_a8._8_8_ = (Il2CppType *)0x0;
  auStack_a8._16_8_ = (Il2CppType **)0x0;
  pGVar5 = (__this->fields)._gameManager;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return;
  }
  pGVar5 = (__this->fields)._gameManager;
  if ((pGVar5 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar6 = (__this->fields)._globalPauseGamePopup, pUVar6 == (UI_GlobalPauseGamePopup_o *)0x0))
  goto LAB_040b7b37;
  pUVar7 = pUVar6->klass;
  if (*(char *)((long)&(pGVar5->fields)._gameSettingsLoaded + 2) == '\0') {
    (*(pUVar7->vtable)._22_Hide.methodPtr)();
    pSVar9 = (__this->fields).labelsToDeactivate;
  }
  else {
    (*(pUVar7->vtable)._21_Show.methodPtr)();
    pGVar5 = (__this->fields)._gameManager;
    if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_040b7b37;
    fVar32 = (float)(pGVar5->fields).HasSpawned;
    pUVar6 = (__this->fields)._globalPauseGamePopup;
    if (fVar32 < 0.0) {
      if ((pUVar6 == (UI_GlobalPauseGamePopup_o *)0x0) ||
         (pUVar8 = (pUVar6->fields)._label, pUVar8 == (UnityEngine_UI_Text_o *)0x0))
      goto LAB_040b7b37;
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,"Paused by master client.",(pUVar8->klass->vtable)._75_set_text.method);
      pSVar9 = (__this->fields).labelsToDeactivate;
    }
    else {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
        in_stack_ffffffffffffff28 = fVar32;
      }
      pSVar24 = Utility_Util__FormatFloat(fVar32,1,(MethodInfo *)0x0);
      pSVar24 = System_String__Concat("Unpausing in: ",pSVar24,(MethodInfo *)0x0);
      if ((pUVar6 == (UI_GlobalPauseGamePopup_o *)0x0) ||
         (pUVar8 = (pUVar6->fields)._label, pUVar8 == (UnityEngine_UI_Text_o *)0x0))
      goto LAB_040b7b37;
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
      pSVar9 = (__this->fields).labelsToDeactivate;
    }
  }
  if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040b7b37;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar23 = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < iVar23) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar23,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._labelHasTimeLeft;
  if (pSVar10 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) goto LAB_040b7b37;
  System_Collections_Generic_Dictionary<object__bool>__GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
  _Stack_68 = _Stack_38;
  auStack_a8._36_4_ = auStack_58._4_4_;
  auStack_a8._32_4_ = auStack_58._0_4_;
  pIStack_78 = pIStack_48;
  pIStack_70 = pIStack_40;
  pIStack_80 = (Il2CppType *)auStack_58._8_8_;
  while (__this_05.fields._dictionary._4_4_ = uVar34,
        __this_05.fields._dictionary._0_4_ = in_stack_ffffffffffffff28,
        __this_05.fields._8_8_ = __this,
        __this_05.fields._current.fields.key = (Il2CppObject *)pIVar36,
        __this_05.fields._current.fields.value = (Il2CppObject *)pIVar38,
        __this_05.fields._32_8_ = pIVar39,
        bVar22 = System_Collections_Generic_Dictionary_Enumerator<object__bool>__MoveNext
                           (__this_05,(MethodInfo_31CBE60 *)(auStack_a8 + 0x20)),
        (char)bVar22 != '\0') {
    pSVar24 = (System_String_o *)
              il2cpp_glue_040bdca0((MethodInfo_31CBE60 *)(auStack_a8 + 0x20),MethodInfo_KeyValuePair_2_System_String_System_Boolean__get);
    if (extraout_DL != '\0') {
      pSVar11 = (__this->fields)._labelTimeLeft;
      if (pSVar11 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      in_stack_ffffffffffffff28 =
           System_Collections_Generic_Dictionary<object__float>__get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                      (Il2CppObject *)pSVar24,MethodInfo_Single_get_Item);
      fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                 (Il2CppObject *)pSVar24,in_stack_ffffffffffffff28 - fVar32,MethodInfo_Void_set_Item);
      pSVar11 = (__this->fields)._labelTimeLeft;
      if (pSVar11 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      fVar32 = System_Collections_Generic_Dictionary<object__float>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                          (Il2CppObject *)pSVar24,MethodInfo_Single_get_Item);
      pMVar30 = MethodInfo_Void_Add;
      if (fVar32 <= 0.0) {
        pSVar9 = (__this->fields).labelsToDeactivate;
        if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar29 = (pSVar9->fields)._items;
        if (pSVar29 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pSVar29->max_length) {
          pMVar30 = (MethodInfo *)(ulong)(uVar2 + 1);
          (pSVar9->fields)._size = uVar2 + 1;
          pSVar29->m_Items[(int)uVar2] = pSVar24;
          il2cpp_runtime_glue(pSVar29->m_Items + (int)uVar2,pSVar24);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar24,
                     (MethodInfo_35A7350 *)pMVar30->klass->rgctx_data[0xe].method);
        }
        UI_InGameMenu__SetLabelText(__this,pSVar24,"",pMVar30);
      }
    }
  }
  __this_06.fields._dictionary._4_4_ = uVar34;
  __this_06.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
  __this_06.fields._8_8_ = __this;
  __this_06.fields._current.fields.key = (Il2CppObject *)pIVar36;
  __this_06.fields._current.fields.value = (Il2CppObject *)pIVar38;
  __this_06.fields._32_8_ = pIVar39;
  System_Collections_Generic_Dictionary_Enumerator<object__bool>__Dispose
            (__this_06,(MethodInfo_31CBF70 *)(auStack_a8 + 0x20));
  pSVar9 = (__this->fields).labelsToDeactivate;
  if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040b7b37;
  pUVar35 = __this;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
             (System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pIVar37 = (Il2CppObject *)CONCAT44(auStack_58._4_4_,auStack_58._0_4_);
  pIVar27 = pIStack_48;
  while (__this_01.fields._list._4_4_ = uVar34,
        __this_01.fields._list._0_4_ = in_stack_ffffffffffffff28, __this_01.fields._8_8_ = pUVar35,
        __this_01.fields._current = pIVar37,
        bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff38),
        (char)bVar22 != '\0') {
    pSVar10 = (__this->fields)._labelHasTimeLeft;
    if (pSVar10 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__bool>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,pIVar27,0,
               MethodInfo_Void_set_Item);
  }
  __this_02.fields._list._4_4_ = uVar34;
  __this_02.fields._list._0_4_ = in_stack_ffffffffffffff28;
  __this_02.fields._8_8_ = pUVar35;
  __this_02.fields._current = pIVar37;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff38);
  pGVar5 = (__this->fields)._gameManager;
  if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_040b7b37;
  pUVar8 = (__this->fields)._middleCenterLabel;
  pSVar24 = (__this->fields)._middleCenterText;
  if ((char)(pGVar5->fields).IsEnding == '\0') {
    if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b7b37;
    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
              (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
  }
  else {
    uVar34 = (uint)(pGVar5->fields).EndTimeLeft;
    pSVar25 = System_Int32__ToString((int32_t)&stack0xffffffffffffff2c,(MethodInfo *)0x0);
    pSVar24 = System_String__Concat(pSVar24,"\nRestarting in ",pSVar25,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b7b37;
    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
              (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
  }
  plVar12 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar12 != (long *)0x0) {
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar12 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar12);
    }
  }
  fVar32 = (__this->fields)._spectateUpdateTimeLeft;
  fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._spectateUpdateTimeLeft = fVar32 - fVar33;
  if (fVar32 - fVar33 <= 0.0) {
    (__this->fields)._spectateUpdateTimeLeft = 1.0;
    if (plVar12 == (long *)0x0) goto LAB_040b7b37;
    pUVar13 = (UnityEngine_Object_o *)plVar12[7];
    __this = pUVar35;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
      __this = pUVar35;
    }
    iVar31 = 0;
    bVar22 = UnityEngine_Object__op_Inequality
                       (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar22 != '\0') {
      if ((((plVar12[7] == 0) || (lVar14 = *(long *)(plVar12[7] + 0x70), lVar14 == 0)) ||
          (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) ||
         (lVar14 = *(long *)(lVar14 + 0x80), lVar14 == 0)) goto LAB_040b7b37;
      iVar3 = *(int *)(lVar14 + 0x18);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar31 = 0;
      pPVar26 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      uVar34 = 0;
      if (pPVar26 == (Photon_Realtime_Player_array *)0x0) goto LAB_040b7b37;
      iVar4 = (int)pPVar26->max_length;
      if (0 < iVar4) {
        iVar31 = 0;
        if (iVar4 != 0) {
          do {
            player = pPVar26->m_Items[(int)uVar34];
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_init_class();
            }
            iVar23 = PhotonExtensions__GetIntProperty
                               (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),
                                -1,(MethodInfo *)0x0);
            iVar31 = iVar31 + (uint)(iVar23 == iVar3);
            uVar34 = uVar34 + 1;
            uVar2 = (uint)pPVar26->max_length;
            if ((int)uVar2 <= (int)uVar34) goto LAB_040b7441;
          } while (uVar34 < uVar2);
        }
        goto LAB_040b7b50;
      }
    }
LAB_040b7441:
    (__this->fields)._spectateCount = iVar31;
    pUVar35 = __this;
  }
  lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_040b7b37;
  if (*(int *)(*(long *)(lVar14 + 0x20) + 0x14) == 1) {
LAB_040b74e5:
    lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if ((lVar16 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_040b7b37;
    if (*(int *)(*(long *)(lVar14 + 0x20) + 0x14) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_040b7b37;
      pUVar13 = (UnityEngine_Object_o *)plVar12[7];
      iVar31 = *(int *)(TypeInfo_Object + 0xe4);
      pSVar24 = "";
    }
    else {
      lVar14 = *(long *)(lVar16 + 0x20);
      if ((lVar14 == 0) || (plVar17 = *(long **)(lVar14 + 0xb0), plVar17 == (long *)0x0))
      goto LAB_040b7b37;
      pSVar24 = (System_String_o *)
                (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar24 = GameManagers_ChatManager__GetColorString(pSVar24,3,0,(MethodInfo *)0x0);
      pSVar24 = System_String__Concat("Prev: ",pSVar24,", ",(MethodInfo *)0x0);
      plVar17 = *(long **)(lVar14 + 0xb8);
      if (plVar17 == (long *)0x0) goto LAB_040b7b37;
      pSVar25 = (System_String_o *)
                (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
      pSVar25 = GameManagers_ChatManager__GetColorString(pSVar25,3,0,(MethodInfo *)0x0);
      pSVar24 = System_String__Concat(pSVar24,"Next: ",pSVar25,", ",(MethodInfo *)0x0);
      plVar17 = *(long **)(lVar14 + 0x68);
      if (plVar17 == (long *)0x0) goto LAB_040b7b37;
      pSVar25 = (System_String_o *)
                (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
      pSVar25 = GameManagers_ChatManager__GetColorString(pSVar25,3,0,(MethodInfo *)0x0);
      pSVar24 = System_String__Concat(pSVar24,"Join: ",pSVar25,", ",(MethodInfo *)0x0);
      if ((plVar12 == (long *)0x0) ||
         ((Utility_Cycle_T__o *)plVar12[8] == (Utility_Cycle_T__o *)0x0)) goto LAB_040b7b37;
      auStack_58._0_4_ =
           Utility_Cycle<Int32Enum>__Current((Utility_Cycle_T__o *)plVar12[8],MethodInfo_InGameCamera_SpecateMode_Current);
      pIVar27 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SpecateMode,auStack_58);
      pSVar25 = System_String__Format("{0}: ",pIVar27,(MethodInfo *)0x0);
      plVar17 = *(long **)(lVar14 + 0x98);
      if (plVar17 == (long *)0x0) goto LAB_040b7b37;
      pSVar28 = (System_String_o *)
                (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
      pSVar28 = GameManagers_ChatManager__GetColorString(pSVar28,3,0,(MethodInfo *)0x0);
      pSVar24 = System_String__Concat(pSVar24,pSVar25,pSVar28,(MethodInfo *)0x0);
      pUVar13 = (UnityEngine_Object_o *)plVar12[7];
      iVar31 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar31 == 0) {
      il2cpp_init_class();
    }
    bVar22 = UnityEngine_Object__op_Inequality
                       (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar22 == '\0') {
LAB_040b7833:
      pSVar24 = System_String__Concat("Spectating. ",pSVar24,(MethodInfo *)0x0);
    }
    else {
      pGVar5 = (__this->fields)._gameManager;
      if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_040b7b37;
      pUVar13 = (UnityEngine_Object_o *)plVar12[7];
      pCVar15 = (pGVar5->fields).CurrentCharacter;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar22 = UnityEngine_Object__op_Inequality
                         (pUVar13,(UnityEngine_Object_o *)pCVar15,(MethodInfo *)0x0);
      if ((char)bVar22 == '\0') goto LAB_040b7833;
      pSVar29 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
      if (pSVar29 == (System_String_array *)0x0) goto LAB_040b7b37;
      if ((int)pSVar29->max_length == 0) goto LAB_040b7b50;
      pSVar29->m_Items[0] = "Spectating ";
      il2cpp_runtime_glue(pSVar29->m_Items);
      if (plVar12[7] == 0) goto LAB_040b7b37;
      if ((uint)pSVar29->max_length < 2) {
LAB_040b7b50:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar29->m_Items[1] = *(System_String_o **)(plVar12[7] + 0x38);
      il2cpp_runtime_glue(pSVar29->m_Items + 1);
      if ((uint)pSVar29->max_length < 3) goto LAB_040b7b50;
      pSVar29->m_Items[2] = " (";
      il2cpp_runtime_glue(pSVar29->m_Items + 2);
      pSVar25 = System_Int32__ToString((int)__this + 0x23c,(MethodInfo *)0x0);
      if ((uint)pSVar29->max_length < 4) goto LAB_040b7b50;
      pSVar29->m_Items[3] = pSVar25;
      il2cpp_runtime_glue(pSVar29->m_Items + 3,pSVar25);
      if ((uint)pSVar29->max_length < 5) goto LAB_040b7b50;
      pSVar29->m_Items[4] = "). ";
      il2cpp_runtime_glue(pSVar29->m_Items + 4);
      if ((uint)pSVar29->max_length < 6) goto LAB_040b7b50;
      pSVar29->m_Items[5] = pSVar24;
      il2cpp_runtime_glue(pSVar29->m_Items + 5);
      pSVar24 = System_String__Concat(pSVar29,(MethodInfo *)0x0);
    }
    pUVar8 = (__this->fields)._bottomCenterLabel;
    pMVar30 = (MethodInfo *)
              System_String__Concat
                        ((__this->fields)._bottomCenterText,"\n",pSVar24,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b7b37;
    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
              (pUVar8,pMVar30,(pUVar8->klass->vtable)._75_set_text.method);
  }
  else {
    pGVar5 = (__this->fields)._gameManager;
    if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_040b7b37;
    pCVar15 = (pGVar5->fields).CurrentCharacter;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar22 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar22 != '\0') goto LAB_040b74e5;
    pGVar5 = (__this->fields)._gameManager;
    if ((pGVar5 == (GameManagers_InGameManager_o *)0x0) ||
       (pCVar15 = (pGVar5->fields).CurrentCharacter, pCVar15 == (Characters_BaseCharacter_o *)0x0))
    goto LAB_040b7b37;
    if (*(char *)&(pCVar15->fields).FeedVictimName != '\0') goto LAB_040b74e5;
    pUVar8 = (__this->fields)._bottomCenterLabel;
    if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b7b37;
    pMVar30 = (MethodInfo *)(__this->fields)._bottomCenterText;
    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
              (pUVar8,pMVar30,(pUVar8->klass->vtable)._75_set_text.method);
  }
  pUVar8 = (__this->fields)._bottomRightLabel;
  pSVar24 = (__this->fields)._bottomRightText;
  pSVar25 = UI_InGameMenu__GetKeybindStrings(__this,pMVar30);
  pSVar24 = System_String__Concat(pSVar24,"\n",pSVar25,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
              (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
    pUVar8 = (__this->fields)._topLeftLabel;
    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,(__this->fields)._topLeftText,(pUVar8->klass->vtable)._75_set_text.method);
      pUVar18 = (__this->fields)._killFeedBigPopup;
      if (pUVar18 != (UI_KillFeedBigPopup_o *)0x0) {
        fVar32 = (pUVar18->fields).TimeLeft;
        fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (pUVar18->fields).TimeLeft = fVar32 - fVar33;
        pUVar18 = (__this->fields)._killFeedBigPopup;
        if (pUVar18 != (UI_KillFeedBigPopup_o *)0x0) {
          if (((char)(pUVar18->fields).IsActive != '\0') && ((pUVar18->fields).TimeLeft <= 0.0)) {
            (*(pUVar18->klass->vtable)._22_Hide.methodPtr)
                      (pUVar18,(pUVar18->klass->vtable)._22_Hide.method);
          }
          fVar32 = (__this->fields)._killScoreTimeLeft;
          fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._killScoreTimeLeft = fVar32 - fVar33;
          if (fVar32 - fVar33 <= 0.0) {
            pUVar19 = (__this->fields)._killScorePopup;
            if (pUVar19 == (UI_KillScorePopup_o *)0x0) goto LAB_040b7b37;
            (*(pUVar19->klass->vtable)._22_Hide.methodPtr)
                      (pUVar19,(pUVar19->klass->vtable)._22_Hide.method);
          }
          __this_00 = (__this->fields)._killFeedSmallPopups;
          if (__this_00 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
                       (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_KillFeedSmallPopup__GetE);
            while (__this_03.fields._list._4_4_ = uVar34, __this_03.fields._list._0_4_ = fVar32,
                  __this_03.fields._8_8_ = pUVar35, __this_03.fields._current = pIVar37,
                  bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (__this_03,(MethodInfo_3185E20 *)auStack_a8),
                  uVar21 = auStack_a8._16_8_, (char)bVar22 != '\0') {
              if ((Il2CppType **)auStack_a8._16_8_ == (Il2CppType **)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              fVar32 = *(float *)(auStack_a8._16_8_ + 200);
              fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              *(float *)(uVar21 + 200) = fVar32 - fVar33;
              if ((fVar32 - fVar33 <= 0.0) && (*(char *)(uVar21 + 0x90) != '\0')) {
                (**(code **)&(*(Il2CppType **)uVar21)[0x29].bits)
                          (uVar21,(*(Il2CppType **)uVar21)[0x2a].data);
              }
            }
            __this_04.fields._list._4_4_ = uVar34;
            __this_04.fields._list._0_4_ = fVar32;
            __this_04.fields._8_8_ = pUVar35;
            __this_04.fields._current = pIVar37;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_04,(MethodInfo_3185E10 *)auStack_a8);
            fVar32 = (__this->fields)._snapshotTimeLeft;
            fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._snapshotTimeLeft = fVar32 - fVar33;
            pUVar20 = (__this->fields)._snapshotPopup;
            if (pUVar20 != (UI_SnapshotPopup_o *)0x0) {
              if ((fVar32 - fVar33 <= 0.0) && ((char)(pUVar20->fields).IsActive != '\0')) {
                (*(pUVar20->klass->vtable)._22_Hide.methodPtr)
                          (pUVar20,(pUVar20->klass->vtable)._22_Hide.method);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_040b7b37:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetKeybindStrings
// il2cpp: System_String_o* UI_InGameMenu__GetKeybindStrings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b7d80

System_String_o * UI_InGameMenu__GetKeybindStrings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  long lVar8;
  System_String_array *values;
  System_String_o *pSVar9;
  System_String_Fields SVar10;
  float fVar11;
  undefined1 local_50 [8];
  System_String_o local_48;
  
  local_48.fields = (System_String_Fields)__this;
  if (DAT_05704674 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"F0");
    il2cpp_init_method_metadata(&"Position: ");
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"Spectating: ");
    il2cpp_init_method_metadata(&"Interpolation: ");
    il2cpp_init_method_metadata(&"Pause: ");
    il2cpp_init_method_metadata(&", Change Char: ");
    il2cpp_init_method_metadata(&", Scoreboard: ");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ON");
    il2cpp_init_method_metadata(&"OFF");
    DAT_05704674 = '\x01';
  }
  pSVar9 = "";
  _local_50 = (UnityEngine_Vector3_Fields)ZEXT812(0);
  SVar10 = *(System_String_Fields *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (SVar10 != (System_String_Fields)0x0) {
    if ((*(byte *)(*(long *)SVar10 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*(long *)SVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8
                 ) != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(SVar10);
    }
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
    if (*(char *)(lVar8 + 0x11) != '\0') {
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (plVar1 == (long *)0x0) goto LAB_040b84fc;
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar1);
      }
      pUVar2 = (UnityEngine_Object_o *)plVar1[0xe];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar4 != '\0') && (plVar1 = (long *)plVar1[0xe], plVar1 != (long *)0x0)) {
        if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Human + 0x130) * 8) ==
            TypeInfo_Human)) {
          if ((plVar1[0xe] == 0) ||
             (__this_00 = *(UnityEngine_Rigidbody_o **)(plVar1[0xe] + 0x18),
             __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_040b84fc;
          iVar5 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (iVar5 == 1) {
            puVar6 = &"ON";
          }
          else {
            puVar6 = &"OFF";
          }
          pSVar9 = GameManagers_ChatManager__GetColorString
                             ((System_String_o *)*puVar6,3,0,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat("Interpolation: ",pSVar9,(MethodInfo *)0x0);
        }
      }
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 200) != 0)) {
      if (*(char *)(*(long *)(lVar8 + 200) + 0x11) != '\0') {
        lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
        bVar4 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar9 = System_String__Concat(pSVar9,", ",(MethodInfo *)0x0);
        }
        if (((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) ||
           (plVar1 = *(long **)(*(long *)(lVar8 + 0x20) + 0x60), plVar1 == (long *)0x0))
        goto LAB_040b84fc;
        pSVar7 = (System_String_o *)
                 (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = GameManagers_ChatManager__GetColorString(pSVar7,3,0,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat(pSVar9,"Pause: ",pSVar7,(MethodInfo *)0x0);
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           (plVar1 = *(long **)(*(long *)(lVar8 + 0x20) + 0x78), plVar1 == (long *)0x0))
        goto LAB_040b84fc;
        pSVar7 = (System_String_o *)
                 (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        pSVar7 = GameManagers_ChatManager__GetColorString(pSVar7,3,0,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat(pSVar9,", Scoreboard: ",pSVar7,(MethodInfo *)0x0);
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           (plVar1 = *(long **)(*(long *)(lVar8 + 0x20) + 0x68), plVar1 == (long *)0x0))
        goto LAB_040b84fc;
        pSVar7 = (System_String_o *)
                 (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        pSVar7 = GameManagers_ChatManager__GetColorString(pSVar7,3,0,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat(pSVar9,", Change Char: ",pSVar7,(MethodInfo *)0x0);
        lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if (lVar8 == 0) goto LAB_040b84fc;
      }
      if (*(long *)(lVar8 + 0x170) != 0) {
        if (*(int *)(*(long *)(lVar8 + 0x170) + 0x14) == 2) {
          if (((SVar10 == (System_String_Fields)0x0) || (*(long *)((long)SVar10 + 0x28) == 0)) ||
             (pUVar3 = *(UnityEngine_Transform_o **)(*(long *)((long)SVar10 + 0x28) + 0x10),
             pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b84fc;
          _local_50 = (UnityEngine_Vector3_Fields)
                      UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          pUVar2 = *(UnityEngine_Object_o **)((long)SVar10 + 0x38);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (((*(long *)((long)SVar10 + 0x38) == 0) ||
                (lVar8 = *(long *)(*(long *)((long)SVar10 + 0x38) + 0x70), lVar8 == 0)) ||
               (pUVar3 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
               pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b84fc;
            _local_50 = (UnityEngine_Vector3_Fields)
                        UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          }
          values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
          if (values == (System_String_array *)0x0) goto LAB_040b84fc;
          if ((int)values->max_length == 0) {
LAB_040b8501:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          values->m_Items[0] = "Position: ";
          fVar11 = (float)il2cpp_runtime_glue(values->m_Items);
          pSVar7 = System_Single__ToString(fVar11,(System_String_o *)local_50,"F0");
          if ((uint)values->max_length < 2) goto LAB_040b8501;
          values->m_Items[1] = pSVar7;
          il2cpp_runtime_glue(values->m_Items + 1,pSVar7);
          if ((uint)values->max_length < 3) goto LAB_040b8501;
          values->m_Items[2] = ", ";
          local_48.monitor = (void *)SVar10;
          fVar11 = (float)il2cpp_runtime_glue(values->m_Items + 2);
          pSVar7 = System_Single__ToString(fVar11,(System_String_o *)(local_50 + 4),"F0");
          if ((uint)values->max_length < 4) goto LAB_040b8501;
          values->m_Items[3] = pSVar7;
          il2cpp_runtime_glue(values->m_Items + 3,pSVar7);
          if ((uint)values->max_length < 5) goto LAB_040b8501;
          values->m_Items[4] = ", ";
          fVar11 = (float)il2cpp_runtime_glue(values->m_Items + 4);
          pSVar7 = System_Single__ToString(fVar11,(System_String_o *)(local_50 + 8),"F0");
          if ((uint)values->max_length < 6) goto LAB_040b8501;
          values->m_Items[5] = pSVar7;
          il2cpp_runtime_glue(values->m_Items + 5);
          pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
          bVar4 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar7 = System_String__Concat(pSVar7,"\n",(MethodInfo *)0x0);
          }
          SVar10 = (System_String_Fields)local_48.monitor;
          pSVar9 = System_String__Concat(pSVar7,pSVar9,(MethodInfo *)0x0);
        }
        else if (SVar10 == (System_String_Fields)0x0) goto LAB_040b84fc;
        pUVar2 = *(UnityEngine_Object_o **)((long)SVar10 + 0x38);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar4 != '\0') &&
           (0 < ((UI_InGameMenu_Fields *)((long)local_48.fields + 0x10))->_spectateCount)) {
          if (*(Characters_BaseCharacter_o **)((long)SVar10 + 0x38) ==
              (Characters_BaseCharacter_o *)0x0) goto LAB_040b84fc;
          bVar4 = Characters_BaseCharacter__IsMainCharacter
                            (*(Characters_BaseCharacter_o **)((long)SVar10 + 0x38),(MethodInfo *)0x0
                            );
          if ((char)bVar4 != '\0') {
            pSVar7 = System_Int32__ToString(local_48.fields._stringLength + 0x23c,(MethodInfo *)0x0)
            ;
            pSVar7 = System_String__Concat("Spectating: ",pSVar7,(MethodInfo *)0x0);
            bVar4 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              pSVar7 = System_String__Concat(pSVar7,"\n",(MethodInfo *)0x0);
            }
            pSVar9 = System_String__Concat(pSVar7,pSVar9,(MethodInfo *)0x0);
          }
        }
        return pSVar9;
      }
    }
  }
LAB_040b84fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetPlayerListEntry
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListEntry (UI_InGameMenu_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40b8520

System_String_o *
UI_InGameMenu__GetPlayerListEntry
          (UI_InGameMenu_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  int32_t id;
  bool_conflict bVar2;
  uint uVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  undefined8 *puVar9;
  System_String_array *pSVar10;
  long lVar11;
  Il2CppObject *pIVar12;
  ulong uVar13;
  
  if (DAT_05704675 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&" B ");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&" R ");
    il2cpp_init_method_metadata(&" H ");
    il2cpp_init_method_metadata(&" / ");
    il2cpp_init_method_metadata(&" APG ");
    il2cpp_init_method_metadata(&" T ");
    il2cpp_init_method_metadata(&" <color=red>*dead*</color> ");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&" AHSS ");
    il2cpp_init_method_metadata(&" TS ");
    DAT_05704675 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),
                      "",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__op_Inequality
                    (pSVar4,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    pSVar4 = " <color=red>*dead*</color> ";
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar5 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                      "",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = GameManagers_TeamInfo__GetTeamColor(pSVar5,(MethodInfo *)0x0);
  lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x58), lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x20), lVar11 == 0)) goto LAB_040b8f90;
  iVar1 = *(int *)(lVar11 + 0x14);
  pSVar7 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),
                      "",(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality
                    (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__op_Equality
                    (pSVar5,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                     (MethodInfo *)0x0);
  if (iVar1 == 2) {
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_String__op_Equality
                        (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
joined_r0x040b8992:
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        bVar2 = System_String__op_Equality
                          (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = System_String__op_Equality
                            (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            ppSVar8 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
          }
          else {
            ppSVar8 = &" H ";
          }
        }
        else {
          ppSVar8 = &" T ";
        }
      }
      else {
        ppSVar8 = (System_String_o **)&" R ";
      }
    }
    else {
      ppSVar8 = (System_String_o **)&" B ";
    }
    pSVar5 = *ppSVar8;
LAB_040b8a85:
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_String__op_Equality
                        (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
        goto joined_r0x040b8992;
      }
    }
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_String__op_Equality
                      (pSVar7,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_String__op_Equality
                        (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') goto LAB_040b88e7;
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_String__op_Equality
                        (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                         (MethodInfo *)0x0);
      pSVar7 = " T ";
      if ((char)bVar2 == '\0') goto LAB_040b8a85;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
    }
    else {
LAB_040b88e7:
      pSVar7 = " H ";
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
    }
    pSVar6 = GameManagers_TeamInfo__GetTeamColor(pSVar5,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    pSVar5 = pSVar7;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar5 = Utility_Util__ColorText(pSVar5,pSVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                      "",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__op_Equality
                    (pSVar6,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_String__op_Equality
                      (pSVar6,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_String__op_Equality
                        (pSVar6,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        puVar9 = *(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      else {
        puVar9 = &" TS ";
      }
    }
    else {
      puVar9 = &" AHSS ";
    }
  }
  else {
    puVar9 = &" APG ";
  }
  pSVar6 = (System_String_o *)*puVar9;
  pSVar10 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    id = (player->fields).actorNumber;
    uVar3 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
    bVar2 = (player->fields).IsLocal;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = GameManagers_ChatManager__GetIDString
                       (id,uVar3 & 0xff,(uint)(byte)bVar2,(MethodInfo *)0x0);
    if (pSVar10 == (System_String_array *)0x0) goto LAB_040b8f90;
    if ((int)pSVar10->max_length == 0) {
LAB_040b8f95:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10->m_Items[0] = pSVar7;
    il2cpp_runtime_glue(pSVar10->m_Items,pSVar7);
    if ((uint)pSVar10->max_length < 2) goto LAB_040b8f95;
    pSVar10->m_Items[1] = pSVar4;
    il2cpp_runtime_glue(pSVar10->m_Items + 1);
    if ((uint)pSVar10->max_length < 3) goto LAB_040b8f95;
    pSVar10->m_Items[2] = pSVar5;
    il2cpp_runtime_glue(pSVar10->m_Items + 2);
    if ((uint)pSVar10->max_length < 4) goto LAB_040b8f95;
    pSVar10->m_Items[3] = pSVar6;
    il2cpp_runtime_glue(pSVar10->m_Items + 3);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
    if ((uint)pSVar10->max_length < 5) goto LAB_040b8f95;
    pSVar10->m_Items[4] = pSVar4;
    il2cpp_runtime_glue(pSVar10->m_Items + 4);
    pSVar5 = System_String__Concat(pSVar10,(MethodInfo *)0x0);
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar11 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar11 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar11 != 0) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar11 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_040b8f90;
      }
      bVar2 = System_String__op_Inequality
                        (*(System_String_o **)(lVar11 + 0x78),
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                        );
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar11 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_040b8f90;
        pIVar12 = PhotonExtensions__GetCustomProperty
                            (player,*(System_String_o **)(lVar11 + 0x78),(MethodInfo *)0x0);
        if (pIVar12 == (Il2CppObject *)0x0) {
          pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        else {
          pSVar4 = (System_String_o *)
                   (*pIVar12->klass->vtable[3].methodPtr)(pIVar12,pIVar12->klass->vtable[3].method);
        }
        goto LAB_040b8f26;
      }
    }
    pSVar10 = (__this->fields).trackedProperties;
    if (pSVar10 != (System_String_array *)0x0) {
      uVar13 = 0;
      uVar3 = (uint)pSVar10->max_length;
      if (0 < (int)uVar3) {
        do {
          if (uVar3 <= uVar13) goto LAB_040b8f95;
          pIVar12 = PhotonExtensions__GetCustomProperty
                              (player,pSVar10->m_Items[uVar13],(MethodInfo *)0x0);
          if (pIVar12 == (Il2CppObject *)0x0) {
            pSVar6 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
          }
          else {
            pSVar6 = (System_String_o *)
                     (*pIVar12->klass->vtable[3].methodPtr)
                               (pIVar12,pIVar12->klass->vtable[3].method);
          }
          pSVar4 = System_String__Concat(pSVar4,pSVar6,(MethodInfo *)0x0);
          pSVar10 = (__this->fields).trackedProperties;
          if (pSVar10 == (System_String_array *)0x0) goto LAB_040b8f90;
          if ((long)uVar13 < (long)((pSVar10->max_length << 0x20) + -0x100000000) >> 0x20) {
            pSVar4 = System_String__Concat(pSVar4," / ",(MethodInfo *)0x0);
            pSVar10 = (__this->fields).trackedProperties;
          }
          uVar13 = uVar13 + 1;
          if (pSVar10 == (System_String_array *)0x0) goto LAB_040b8f90;
          uVar3 = (uint)pSVar10->max_length;
        } while ((long)uVar13 < (long)(int)uVar3);
      }
LAB_040b8f26:
      pSVar4 = System_String__Concat(pSVar5,": ",pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = Utility_Util__SizeText(pSVar4,0x13,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
LAB_040b8f90:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetAggregateStats
// il2cpp: System_String_o* UI_InGameMenu__GetAggregateStats (UI_InGameMenu_o* __this, System_Linq_IGrouping_string__Player__o* group, const MethodInfo* method);
// 0x40b8fa0

/* WARNING: Removing unreachable block (ram,0x040b96e6) */

System_String_o *
UI_InGameMenu__GetAggregateStats
          (UI_InGameMenu_o *__this,System_Linq_IGrouping_string__Player__o *group,MethodInfo *method
          )

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Linq_IGrouping_string__Player__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Linq_IGrouping_string__Player__o *pSVar6;
  char cVar7;
  int32_t iVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  undefined8 *puVar11;
  Photon_Realtime_Player_o *player;
  System_Object_array *args;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  System_Linq_IGrouping_string__Player__o *local_38;
  
  if (DAT_05704676 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_Player);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_Player);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_IGrouping_string__Player);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata();
    DAT_05704676 = '\x01';
  }
  if (group != (System_Linq_IGrouping_string__Player__o *)0x0) {
    pSVar4 = group->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IEnumerable_Player) {
          pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar16);
          goto LAB_040b90a1;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar16);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(group,TypeInfo_IEnumerable_Player,0);
LAB_040b90a1:
    local_38 = group;
    plVar10 = (long *)(*pVVar9->methodPtr)(group,pVVar9->method);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar18 = 0;
    iVar20 = 0;
    iVar19 = 0;
    local_54 = 0;
    do {
      lVar16 = *plVar10;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138
                      );
            goto LAB_040b9143;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,0);
LAB_040b9143:
      cVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      pSVar6 = local_38;
      if (cVar7 == '\0') goto LAB_040b92e1;
      lVar16 = *plVar10;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_Player) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138
                      );
            goto LAB_040b91b3;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator_Player,0);
LAB_040b91b3:
      player = (Photon_Realtime_Player_o *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar8 = PhotonExtensions__GetIntProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                         (MethodInfo *)0x0);
      iVar18 = iVar18 + iVar8;
      iVar8 = PhotonExtensions__GetIntProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                         (MethodInfo *)0x0);
      iVar20 = iVar20 + iVar8;
      iVar8 = PhotonExtensions__GetIntProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                         (MethodInfo *)0x0);
      iVar19 = iVar19 + iVar8;
      iVar8 = PhotonExtensions__GetIntProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                         (MethodInfo *)0x0);
      local_54 = local_54 + iVar8;
    } while( true );
  }
  goto LAB_040b96e1;
LAB_040b92e1:
  if (plVar10 != (long *)0x0) {
    lVar16 = *plVar10;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto LAB_040b934d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_040b934d:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
  pSVar4 = pSVar6->klass;
  uVar2._0_1_ = (pSVar4->_2).rank;
  uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar5 = (pSVar4->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IGrouping_string__Player) {
        pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar16);
        goto LAB_040b93e1;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar16);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar6,TypeInfo_IGrouping_string__Player,0);
LAB_040b93e1:
  pSVar12 = (System_String_o *)(*pVVar9->methodPtr)(pSVar6,pVVar9->method);
  pSVar4 = pSVar6->klass;
  uVar3._0_1_ = (pSVar4->_2).rank;
  uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar5 = (pSVar4->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IGrouping_string__Player) {
        pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar16);
        goto LAB_040b9441;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar16);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar6,TypeInfo_IGrouping_string__Player,0);
LAB_040b9441:
  pSVar13 = (System_String_o *)(*pVVar9->methodPtr)(pSVar6);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = GameManagers_TeamInfo__GetTeamColor(pSVar13,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar12 = Utility_Util__ColorText(pSVar12,pSVar13,(MethodInfo *)0x0);
  if (args != (System_Object_array *)0x0) {
    if ((pSVar12 != (System_String_o *)0x0) &&
       (lVar16 = il2cpp_runtime_glue(pSVar12,(((args->obj).klass)->_1).element_class), lVar16 == 0))
    {
LAB_040b96d2:
      uVar15 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar15,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar12;
      il2cpp_runtime_glue(args->m_Items,pSVar12);
      local_3c = iVar18;
      pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
      if ((pIVar14 != (Il2CppObject *)0x0) &&
         (lVar16 = il2cpp_runtime_glue(pIVar14,(((args->obj).klass)->_1).element_class), lVar16 == 0)
         ) goto LAB_040b96d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar14;
        il2cpp_runtime_glue(args->m_Items + 1,pIVar14);
        local_40 = iVar20;
        pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
        if ((pIVar14 != (Il2CppObject *)0x0) &&
           (lVar16 = il2cpp_runtime_glue(pIVar14,(((args->obj).klass)->_1).element_class),
           lVar16 == 0)) goto LAB_040b96d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar14;
          il2cpp_runtime_glue(args->m_Items + 2,pIVar14);
          local_44 = iVar19;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
          if ((pIVar14 != (Il2CppObject *)0x0) &&
             (lVar16 = il2cpp_runtime_glue(pIVar14,(((args->obj).klass)->_1).element_class),
             lVar16 == 0)) goto LAB_040b96d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar14;
            il2cpp_runtime_glue(args->m_Items + 3,pIVar14);
            local_48 = local_54;
            pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
            if ((pIVar14 != (Il2CppObject *)0x0) &&
               (lVar16 = il2cpp_runtime_glue(pIVar14,(((args->obj).klass)->_1).element_class),
               lVar16 == 0)) goto LAB_040b96d2;
            if (4 < (uint)args->max_length) {
              args->m_Items[4] = pIVar14;
              il2cpp_runtime_glue(args->m_Items + 4,pIVar14);
              pSVar12 = System_String__Format("{0}: {1}/{2}/{3}/{4}\n",args,(MethodInfo *)0x0);
              return pSVar12;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040b96e1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetPlayerList
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerList (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b9710

System_String_o * UI_InGameMenu__GetPlayerList(UI_InGameMenu_o *__this,MethodInfo *method)

{
  uint uVar1;
  Photon_Realtime_Player_array *pPVar2;
  ulong uVar3;
  System_String_o *str1;
  System_String_o *str0;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  ulong uVar4;
  
  if (DAT_05704677 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"\n");
    DAT_05704677 = '\x01';
  }
  str0 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
    if (0 < (int)pPVar2->max_length) {
      uVar3 = pPVar2->max_length & 0xffffffff;
      uVar4 = 0;
      method_00 = extraout_RDX;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        str1 = UI_InGameMenu__GetPlayerListEntry(__this,pPVar2->m_Items[uVar4],method_00);
        str0 = System_String__Concat(str0,str1,"\n",(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pPVar2->max_length;
        uVar3 = (ulong)uVar1;
        method_00 = extraout_RDX_00;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    return str0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$GetPlayerListTeams
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListTeams (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b97f0

/* WARNING: Removing unreachable block (ram,0x040ba31a) */
/* WARNING: Removing unreachable block (ram,0x040ba30d) */
/* WARNING: Removing unreachable block (ram,0x040b9f25) */
/* WARNING: Removing unreachable block (ram,0x040ba2fe) */
/* WARNING: Removing unreachable block (ram,0x040ba024) */

System_String_o * UI_InGameMenu__GetPlayerListTeams(UI_InGameMenu_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  UI_InGameMenu_c *pUVar9;
  System_Linq_IGrouping_string__Player__c *pSVar10;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  char cVar12;
  Photon_Realtime_Player_array *pPVar13;
  System_Func_TSource__bool__o *pSVar14;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar15;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *pSVar16;
  VirtualInvokeData *pVVar17;
  UI_InGameMenu_o *pUVar18;
  System_Linq_IGrouping_string__Player__o *group;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  long *plVar21;
  undefined8 *puVar22;
  Photon_Realtime_Player_o *player;
  MethodInfo *method_00;
  long lVar23;
  UI_InGameMenu_o *__this_00;
  long lVar24;
  undefined1 auVar25 [16];
  
  if (DAT_05704678 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_System_Str);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_Photon_Realtime_Player__Where_Play);
    il2cpp_init_method_metadata(&TypeInfo_Func_Player__bool);
    il2cpp_init_method_metadata(&TypeInfo_Func_Player__string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_Player);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_IGrouping_string__Player);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_IGrouping_string__Player);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_Player);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetPlayerListTeams_b__108_0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetPlayerListTeams_b__108_1);
    il2cpp_init_method_metadata(&MethodInfo_String__GetPlayerListTeams_b__108_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"\t");
    il2cpp_init_method_metadata(&":\n");
    DAT_05704678 = '\x01';
  }
  pSVar20 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar13 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar14 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar14 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar14 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar14 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__bool);
    System_Func<object__bool>___ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar23 + 8) = pSVar14;
    il2cpp_runtime_glue(lVar23 + 8,pSVar14);
  }
  pSVar15 = System_Linq_Enumerable__Where<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar13,pSVar14,
                       MethodInfo_IEnumerable_1_Photon_Realtime_Player__Where_Play);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar13 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar14 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar14 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar14 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar14 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__bool);
    System_Func<object__bool>___ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar23 + 0x10) = pSVar14;
    il2cpp_runtime_glue(lVar23 + 0x10,pSVar14);
  }
  source = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar13,pSVar14,
                      MethodInfo_IEnumerable_1_Photon_Realtime_Player__Where_Play);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__string);
    System_Func<object__object>___ctor();
    lVar23 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar23 + 0x18) = keySelector;
    il2cpp_runtime_glue(lVar23 + 0x18,keySelector);
  }
  pSVar16 = System_Linq_Enumerable__GroupBy<object__object>(source,keySelector,MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_System_Str);
  if (pSVar16 != (System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *)0x0) {
    pSVar7 = pSVar16->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar8 = (pSVar7->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerable_IGrouping_string__Player) {
          pVVar17 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar23);
          goto LAB_040b9bc1;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar23);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar16,TypeInfo_IEnumerable_IGrouping_string__Player,0);
LAB_040b9bc1:
    pUVar18 = (UI_InGameMenu_o *)(*pVVar17->methodPtr)(pSVar16,pVVar17->method);
    if (pUVar18 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_040b9bf0:
    pUVar9 = pUVar18->klass;
    uVar2._0_1_ = (pUVar9->_2).rank;
    uVar2._1_1_ = (pUVar9->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pUVar9->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerator) {
          pVVar17 = &(pUVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar23);
          goto LAB_040b9c53;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar23);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar18,TypeInfo_IEnumerator,0);
LAB_040b9c53:
    cVar12 = (*pVVar17->methodPtr)(pUVar18,pVVar17->method);
    if (cVar12 != '\0') {
      pUVar9 = pUVar18->klass;
      uVar3._0_1_ = (pUVar9->_2).rank;
      uVar3._1_1_ = (pUVar9->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pUVar9->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerator_IGrouping_string__Player) {
            pVVar17 = &(pUVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar23);
            goto LAB_040b9cd3;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar23);
      }
      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar18,TypeInfo_IEnumerator_IGrouping_string__Player,0);
LAB_040b9cd3:
      __this_00 = pUVar18;
      auVar25 = (*pVVar17->methodPtr)(pUVar18,pVVar17->method);
      group = auVar25._0_8_;
      pSVar19 = UI_InGameMenu__GetAggregateStats(__this_00,group,auVar25._8_8_);
      pSVar20 = System_String__Concat(pSVar20,pSVar19,(MethodInfo *)0x0);
      if (group == (System_Linq_IGrouping_string__Player__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar10 = group->klass;
      uVar4._0_1_ = (pSVar10->_2).rank;
      uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pSVar10->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerable_Player) {
            pVVar17 = pSVar10->vtable + *(int *)((long)&pIVar8->offset + lVar23);
            goto LAB_040b9d63;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar23);
      }
      pVVar17 = (VirtualInvokeData *)il2cpp_runtime_glue(group,TypeInfo_IEnumerable_Player,0);
LAB_040b9d63:
      plVar21 = (long *)(*pVVar17->methodPtr)(group,pVVar17->method);
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar23 = *plVar21;
        if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
              puVar22 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + lVar23 +
                        0x138);
              goto LAB_040b9de3;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
        }
        puVar22 = (undefined8 *)il2cpp_runtime_glue(plVar21,TypeInfo_IEnumerator,0);
LAB_040b9de3:
        cVar12 = (*(code *)*puVar22)(plVar21,puVar22[1]);
        if (cVar12 == '\0') goto LAB_040b9e90;
        lVar23 = *plVar21;
        if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IEnumerator_Player) {
              puVar22 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + lVar23 +
                        0x138);
              goto LAB_040b9e53;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
        }
        puVar22 = (undefined8 *)il2cpp_runtime_glue(plVar21,TypeInfo_IEnumerator_Player,0);
LAB_040b9e53:
        auVar25 = (*(code *)*puVar22)(plVar21,puVar22[1]);
        pSVar19 = UI_InGameMenu__GetPlayerListEntry(__this,auVar25._0_8_,auVar25._8_8_);
        pSVar20 = System_String__Concat(pSVar20,"\t",pSVar19,"\n",(MethodInfo *)0x0)
        ;
      } while( true );
    }
    if (pUVar18 == (UI_InGameMenu_o *)0x0) goto LAB_040ba016;
    pUVar9 = pUVar18->klass;
    uVar5._0_1_ = (pUVar9->_2).rank;
    uVar5._1_1_ = (pUVar9->_2).minimumAlignment;
    if ((ulong)uVar5 == 0) goto LAB_040b9fef;
    pIVar8 = (pUVar9->_1).interfaceOffsets;
    lVar23 = 0;
    goto LAB_040b9fe0;
  }
  goto LAB_040ba303;
LAB_040b9e90:
  if (plVar21 != (long *)0x0) {
    lVar23 = *plVar21;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
          puVar22 = (undefined8 *)
                    (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
          goto LAB_040b9efd;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
    }
    puVar22 = (undefined8 *)il2cpp_runtime_glue(plVar21,TypeInfo_IDisposable,0);
LAB_040b9efd:
    (*(code *)*puVar22)(plVar21,puVar22[1]);
  }
  goto LAB_040b9bf0;
LAB_040ba1ef:
  if (plVar21 != (long *)0x0) {
    lVar23 = *plVar21;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
          puVar22 = (undefined8 *)
                    (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
          goto LAB_040ba24d;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
    }
    puVar22 = (undefined8 *)il2cpp_runtime_glue(plVar21,TypeInfo_IDisposable,0);
LAB_040ba24d:
    (*(code *)*puVar22)(plVar21,puVar22[1]);
  }
  return pSVar20;
  while (lVar23 = lVar23 + 0x10, (ulong)uVar5 << 4 != lVar23) {
LAB_040b9fe0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IDisposable) {
      pVVar17 = &(pUVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar23);
      goto LAB_040ba00d;
    }
  }
LAB_040b9fef:
  pVVar17 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar18,TypeInfo_IDisposable,0);
LAB_040ba00d:
  (*pVVar17->methodPtr)(pUVar18,pVVar17->method);
LAB_040ba016:
  if (pSVar15 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    pSVar11 = pSVar15->klass;
    uVar6._0_1_ = (pSVar11->_2).rank;
    uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar8 = (pSVar11->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerable_Player) {
          pVVar17 = pSVar11->vtable + *(int *)((long)&pIVar8->offset + lVar23);
          goto LAB_040ba091;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar23);
    }
    pVVar17 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar15,TypeInfo_IEnumerable_Player,0);
LAB_040ba091:
    plVar21 = (long *)(*pVVar17->methodPtr)(pSVar15,pVVar17->method);
    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar23 = *plVar21;
      if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
            puVar22 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + lVar23 + 0x138
                      );
            goto LAB_040ba113;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
      }
      puVar22 = (undefined8 *)il2cpp_runtime_glue(plVar21,TypeInfo_IEnumerator,0);
LAB_040ba113:
      cVar12 = (*(code *)*puVar22)(plVar21,puVar22[1]);
      if (cVar12 == '\0') goto LAB_040ba1ef;
      lVar23 = *plVar21;
      if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IEnumerator_Player) {
            puVar22 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + lVar23 + 0x138
                      );
            goto LAB_040ba183;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
      }
      puVar22 = (undefined8 *)il2cpp_runtime_glue(plVar21,TypeInfo_IEnumerator_Player,0);
LAB_040ba183:
      player = (Photon_Realtime_Player_o *)(*(code *)*puVar22)(plVar21,puVar22[1]);
      pSVar19 = (System_String_o *)
                (*pSVar15->klass->vtable[3].methodPtr)(pSVar15,pSVar15->klass->vtable[3].method);
      pSVar20 = System_String__Concat(pSVar20,pSVar19,":\n",(MethodInfo *)0x0);
      pSVar19 = UI_InGameMenu__GetPlayerListEntry(__this,player,method_00);
      pSVar20 = System_String__Concat(pSVar20,"\t",pSVar19,"\n",(MethodInfo *)0x0);
    } while( true );
  }
LAB_040ba303:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$HideAllMenus
// il2cpp: void UI_InGameMenu__HideAllMenus (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40b4eb0

void UI_InGameMenu__HideAllMenus(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_EmoteHandler_o *pUVar1;
  UI_BasePopup_o *pUVar2;
  UI_ItemHandler_o *pUVar3;
  
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  pUVar1 = (__this->fields).EmoteHandler;
  if (pUVar1 != (UI_EmoteHandler_o *)0x0) {
    if (DAT_0570462e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void__SetEmoteWheel_b__25_0);
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&TypeInfo_UnityAction);
      il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
      DAT_0570462e = '\x01';
    }
    pUVar2 = (pUVar1->fields)._emoteWheelPopup;
    if (pUVar2 != (UI_BasePopup_o *)0x0) {
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
      *(undefined1 *)&(pUVar1->fields).IsActive = 0;
      pUVar3 = (__this->fields).ItemHandler;
      if (pUVar3 != (UI_ItemHandler_o *)0x0) {
        if (DAT_05704681 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void__SetItemWheel_b__7_0);
          il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
          il2cpp_init_method_metadata(&TypeInfo_UnityAction);
          il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
          DAT_05704681 = '\x01';
        }
        pUVar2 = (pUVar3->fields)._itemWheelPopup;
        if (pUVar2 != (UI_BasePopup_o *)0x0) {
          (*(pUVar2->klass->vtable)._22_Hide.methodPtr)
                    (pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
          *(undefined1 *)&(pUVar3->fields).IsActive = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InGameMenu$$SetupPopups
// il2cpp: void UI_InGameMenu__SetupPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40ba680

void UI_InGameMenu__SetupPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_IconPickPopup_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Component_o *pUVar7;
  UI_BasePopup_o *pUVar8;
  UI_CustomAssetUrlPopup_o *pUVar9;
  UnityEngine_GameObject_o *__this_01;
  UI_SkillTooltipPopup_o *pUVar10;
  
  if (DAT_05704679 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_init_method_metadata(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGame);
    il2cpp_init_method_metadata(&MethodInfo_CustomAssetUrlPopup_GetComponent_CustomAssetUrlP);
    il2cpp_init_method_metadata(&MethodInfo_PausePopup_GetComponent_PausePopup);
    il2cpp_init_method_metadata(&MethodInfo_CustomAssetUrlPopup_CreateDefaultPopup_CustomAss);
    il2cpp_init_method_metadata(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopu);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_Creat);
    il2cpp_init_method_metadata(&MethodInfo_PausePopup_CreateHeadedPanel_PausePopup);
    il2cpp_init_method_metadata(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_CreateTooltipPopup_SkillTooltipPopup);
    il2cpp_init_method_metadata(&MethodInfo_SkillTooltipPopup_GetComponent_SkillTooltipPopup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704679 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
    (__this->fields)._settingsPopup = pUVar8;
    il2cpp_runtime_glue(&(__this->fields)._settingsPopup);
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_PausePopup_CreateHeadedPanel_PausePopup);
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      pUVar8 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_PausePopup_GetComponent_PausePopup);
      (__this->fields)._pausePopup = pUVar8;
      il2cpp_runtime_glue(&(__this->fields)._pausePopup);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Component_o *)
               UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_Creat);
      if (pUVar7 != (UnityEngine_Component_o *)0x0) {
        pUVar8 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGame);
        (__this->fields)._selectMapPopup = pUVar8;
        il2cpp_runtime_glue(&(__this->fields)._selectMapPopup);
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopu);
        if (pUVar7 != (UnityEngine_Component_o *)0x0) {
          pUVar8 = (UI_BasePopup_o *)
                   UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
          (__this->fields)._createGamePopup = pUVar8;
          il2cpp_runtime_glue(&(__this->fields)._createGamePopup);
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar7 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateDefaultPopup<object>(pUVar6,0,MethodInfo_CustomAssetUrlPopup_CreateDefaultPopup_CustomAss);
          if (pUVar7 != (UnityEngine_Component_o *)0x0) {
            pUVar9 = (UI_CustomAssetUrlPopup_o *)
                     UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CustomAssetUrlPopup_GetComponent_CustomAssetUrlP);
            (__this->fields)._customAssetUrlPopup = pUVar9;
            il2cpp_runtime_glue(&(__this->fields)._customAssetUrlPopup);
            __this_00 = (__this->fields).IconPickPopup;
            if (__this_00 != (UI_IconPickPopup_o *)0x0) {
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              __this_01 = UI_ElementFactory__CreateTooltipPopup<object>(pUVar6,0,MethodInfo_GameObject_CreateTooltipPopup_SkillTooltipPopup);
              if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                pUVar10 = (UI_SkillTooltipPopup_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_SkillTooltipPopup_GetComponent_SkillTooltipPopup);
                (__this->fields).SkillTooltipPopup = pUVar10;
                il2cpp_runtime_glue(&(__this->fields).SkillTooltipPopup,pUVar10);
                lVar5 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._popups;
                if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                  pUVar8 = (__this->fields)._settingsPopup;
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar4 = (pSVar3->fields)._items;
                  if (pUVar4 != (UI_BasePopup_array *)0x0) {
                    uVar2 = (pSVar3->fields)._size;
                    if (uVar2 < (uint)pUVar4->max_length) {
                      (pSVar3->fields)._size = uVar2 + 1;
                      pUVar4->m_Items[(int)uVar2] = pUVar8;
                      il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                      pSVar3 = (__this->fields)._popups;
                      lVar5 = MethodInfo_Void_Add;
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar3,
                                 (Il2CppObject *)pUVar8,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      pSVar3 = (__this->fields)._popups;
                      lVar5 = MethodInfo_Void_Add;
                    }
                    MethodInfo_Void_Add = lVar5;
                    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                      pUVar8 = (__this->fields)._pausePopup;
                      piVar1 = &(pSVar3->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar4 = (pSVar3->fields)._items;
                      if (pUVar4 != (UI_BasePopup_array *)0x0) {
                        uVar2 = (pSVar3->fields)._size;
                        if (uVar2 < (uint)pUVar4->max_length) {
                          (pSVar3->fields)._size = uVar2 + 1;
                          pUVar4->m_Items[(int)uVar2] = pUVar8;
                          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                          pSVar3 = (__this->fields)._popups;
                          lVar5 = MethodInfo_Void_Add;
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar3,
                                     (Il2CppObject *)pUVar8,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          pSVar3 = (__this->fields)._popups;
                          lVar5 = MethodInfo_Void_Add;
                        }
                        MethodInfo_Void_Add = lVar5;
                        if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                          pUVar8 = (__this->fields)._createGamePopup;
                          piVar1 = &(pSVar3->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pUVar4 = (pSVar3->fields)._items;
                          if (pUVar4 != (UI_BasePopup_array *)0x0) {
                            uVar2 = (pSVar3->fields)._size;
                            if (uVar2 < (uint)pUVar4->max_length) {
                              (pSVar3->fields)._size = uVar2 + 1;
                              pUVar4->m_Items[(int)uVar2] = pUVar8;
                              il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                              pSVar3 = (__this->fields)._popups;
                              lVar5 = MethodInfo_Void_Add;
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar3,
                                         (Il2CppObject *)pUVar8,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                              pSVar3 = (__this->fields)._popups;
                              lVar5 = MethodInfo_Void_Add;
                            }
                            MethodInfo_Void_Add = lVar5;
                            if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                              pUVar8 = (__this->fields)._selectMapPopup;
                              piVar1 = &(pSVar3->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pUVar4 = (pSVar3->fields)._items;
                              if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                uVar2 = (pSVar3->fields)._size;
                                if (uVar2 < (uint)pUVar4->max_length) {
                                  (pSVar3->fields)._size = uVar2 + 1;
                                  pUVar4->m_Items[(int)uVar2] = pUVar8;
                                  il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                  pSVar3 = (__this->fields)._popups;
                                  lVar5 = MethodInfo_Void_Add;
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar3,
                                             (Il2CppObject *)pUVar8,
                                             *(MethodInfo_35A7350 **)
                                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                  pSVar3 = (__this->fields)._popups;
                                  lVar5 = MethodInfo_Void_Add;
                                }
                                MethodInfo_Void_Add = lVar5;
                                if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                  pUVar9 = (__this->fields)._customAssetUrlPopup;
                                  piVar1 = &(pSVar3->fields)._version;
                                  *piVar1 = *piVar1 + 1;
                                  pUVar4 = (pSVar3->fields)._items;
                                  if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                    uVar2 = (pSVar3->fields)._size;
                                    if (uVar2 < (uint)pUVar4->max_length) {
                                      (pSVar3->fields)._size = uVar2 + 1;
                                      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                      il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                      pSVar3 = (__this->fields)._popups;
                                      lVar5 = MethodInfo_Void_Add;
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)pSVar3
                                                 ,(Il2CppObject *)pUVar9,
                                                 *(MethodInfo_35A7350 **)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                );
                                      pSVar3 = (__this->fields)._popups;
                                      lVar5 = MethodInfo_Void_Add;
                                    }
                                    MethodInfo_Void_Add = lVar5;
                                    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)
                                                  0x0) {
                                      pUVar10 = (__this->fields).SkillTooltipPopup;
                                      piVar1 = &(pSVar3->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pUVar4 = (pSVar3->fields)._items;
                                      if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                        uVar2 = (pSVar3->fields)._size;
                                        if (uVar2 < (uint)pUVar4->max_length) {
                                          (pSVar3->fields)._size = uVar2 + 1;
                                          pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar10;
                                          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                          pSVar3 = (__this->fields)._allPausePopups;
                                          lVar5 = MethodInfo_Void_Add;
                                        }
                                        else {
                                          System_Collections_Generic_List<object>__AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)
                                                     pSVar3,(Il2CppObject *)pUVar10,
                                                     *(MethodInfo_35A7350 **)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                          pSVar3 = (__this->fields)._allPausePopups;
                                          lVar5 = MethodInfo_Void_Add;
                                        }
                                        MethodInfo_Void_Add = lVar5;
                                        if (pSVar3 != (System_Collections_Generic_List_BasePopup__o
                                                       *)0x0) {
                                          pUVar8 = (__this->fields)._settingsPopup;
                                          piVar1 = &(pSVar3->fields)._version;
                                          *piVar1 = *piVar1 + 1;
                                          pUVar4 = (pSVar3->fields)._items;
                                          if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                            uVar2 = (pSVar3->fields)._size;
                                            if (uVar2 < (uint)pUVar4->max_length) {
                                              (pSVar3->fields)._size = uVar2 + 1;
                                              pUVar4->m_Items[(int)uVar2] = pUVar8;
                                              il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                              pSVar3 = (__this->fields)._allPausePopups;
                                              lVar5 = MethodInfo_Void_Add;
                                            }
                                            else {
                                              System_Collections_Generic_List<object>__AddWithResize
                                                        ((System_Collections_Generic_List_object__o
                                                          *)pSVar3,(Il2CppObject *)pUVar8,
                                                         *(MethodInfo_35A7350 **)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                              pSVar3 = (__this->fields)._allPausePopups;
                                              lVar5 = MethodInfo_Void_Add;
                                            }
                                            MethodInfo_Void_Add = lVar5;
                                            if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                               ) {
                                              pUVar8 = (__this->fields)._pausePopup;
                                              piVar1 = &(pSVar3->fields)._version;
                                              *piVar1 = *piVar1 + 1;
                                              pUVar4 = (pSVar3->fields)._items;
                                              if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                uVar2 = (pSVar3->fields)._size;
                                                if (uVar2 < (uint)pUVar4->max_length) {
                                                  (pSVar3->fields)._size = uVar2 + 1;
                                                  pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                  il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                                  pSVar3 = (__this->fields)._allPausePopups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                }
                                                else {
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._allPausePopups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                }
                                                MethodInfo_Void_Add = lVar5;
                                                if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                  pUVar8 = (__this->fields)._createGamePopup;
                                                  piVar1 = &(pSVar3->fields)._version;
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar4 = (pSVar3->fields)._items;
                                                  if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                    uVar2 = (pSVar3->fields)._size;
                                                    if (uVar2 < (uint)pUVar4->max_length) {
                                                      (pSVar3->fields)._size = uVar2 + 1;
                                                      pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                      il2cpp_runtime_glue(pUVar4->m_Items +
                                                                         (int)uVar2);
                                                      pSVar3 = (__this->fields)._allPausePopups;
                                                      lVar5 = MethodInfo_Void_Add;
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._allPausePopups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar9 = (__this->fields)._customAssetUrlPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar9;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._allPausePopups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar9,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._allPausePopups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._selectMapPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        return;
                                                      }
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
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


// UI.InGameMenu$$.ctor
// il2cpp: void UI_InGameMenu___ctor (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x40bade0

void UI_InGameMenu___ctor(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  System_Collections_Generic_Dictionary_string__bool__o *__this_03;
  System_Collections_Generic_List_string__o *__this_04;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  System_String_array *pSVar1;
  
  if (DAT_0570467a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UI_BasePopup);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__bool);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BasePopup);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_KillFeedSmallPopup);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_KillFeedSmallPopup);
    il2cpp_init_method_metadata(&TypeInfo_List_BasePopup);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_0570467a = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_KillFeedSmallPopup__o *)
              il2cpp_runtime_glue(TypeInfo_List_KillFeedSmallPopup);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_KillFeedSmallPopup);
  (__this->fields)._killFeedSmallPopups = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._killFeedSmallPopups,__this_00);
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_glue(TypeInfo_List_BasePopup);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._allPausePopups = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._allPausePopups,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._labelTimeLeft = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._labelTimeLeft,__this_02);
  __this_03 = (System_Collections_Generic_Dictionary_string__bool__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__bool);
  System_Collections_Generic_Dictionary<object__bool>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,MethodInfo_Dictionary_2_System_String_System_Boolean);
  (__this->fields)._labelHasTimeLeft = __this_03;
  il2cpp_runtime_glue(&(__this->fields)._labelHasTimeLeft,__this_03);
  __this_04 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_System_String);
  (__this->fields).labelsToDeactivate = __this_04;
  il2cpp_runtime_glue(&(__this->fields).labelsToDeactivate,__this_04);
  __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__BasePopup);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_05,MethodInfo_Dictionary_2_System_String_UI_BasePopup);
  (__this->fields)._customPopups =
       (System_Collections_Generic_Dictionary_string__BasePopup__o *)__this_05;
  il2cpp_runtime_glue(&(__this->fields)._customPopups,__this_05);
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "Kills";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Deaths";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "HighestDamage";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "TotalDamage";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            (__this->fields).trackedProperties = pSVar1;
            il2cpp_runtime_glue(&(__this->fields).trackedProperties);
            UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


