// Type: UI.ScoreboardScorePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ScoreboardScorePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___ctor (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x40d6fb0

void UI_ScoreboardScorePanel_<>c__DisplayClass14_0___ctor
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$<CreateRow>b__0
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__0 (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x40d6fc0

void UI_ScoreboardScorePanel_<>c__DisplayClass14_0__<CreateRow>b__0
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardScorePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
    UI_ScoreboardScorePanel__OnClickProfile(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$<CreateRow>b__1
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__1 (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x40d6fe0

void UI_ScoreboardScorePanel_<>c__DisplayClass14_0__<CreateRow>b__1
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardScorePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
    UI_ScoreboardScorePanel__OnClickMute(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$<CreateRow>b__2
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__2 (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x40d7000

void UI_ScoreboardScorePanel_<>c__DisplayClass14_0__<CreateRow>b__2
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardScorePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
    UI_ScoreboardScorePanel__OnClickKick(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass17_0___ctor (UI_ScoreboardScorePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x40d7020

void UI_ScoreboardScorePanel_<>c__DisplayClass17_0___ctor
               (UI_ScoreboardScorePanel___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass17_0$$<OnClickKick>b__0
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass17_0___OnClickKick_b__0 (UI_ScoreboardScorePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x40d7030

void UI_ScoreboardScorePanel_<>c__DisplayClass17_0__<OnClickKick>b__0
               (UI_ScoreboardScorePanel___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardScorePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
    UI_ScoreboardScorePanel__FinishKickPlayer(__this_00,(__this->fields).player,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardScorePanel__get_VerticalSpacing (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x40d4910

float UI_ScoreboardScorePanel__get_VerticalSpacing
                (UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.ScoreboardScorePanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardScorePanel__get_VerticalPadding (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x40d4920

int32_t UI_ScoreboardScorePanel__get_VerticalPadding
                  (UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.ScoreboardScorePanel$$Setup
// il2cpp: void UI_ScoreboardScorePanel__Setup (UI_ScoreboardScorePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40d4930

void UI_ScoreboardScorePanel__Setup
               (UI_ScoreboardScorePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_ScoreboardScorePanel__Sync(__this,(MethodInfo *)parent);
  return;
}


// UI.ScoreboardScorePanel$$Update
// il2cpp: void UI_ScoreboardScorePanel__Update (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x40d4950

void UI_ScoreboardScorePanel__Update(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  UI_ScoreboardScorePanel__Sync(__this,method);
  return;
}


// UI.ScoreboardScorePanel$$Sync
// il2cpp: void UI_ScoreboardScorePanel__Sync (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x40d2440

void UI_ScoreboardScorePanel__Sync(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_array *pPVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  Photon_Realtime_Room_o *pPVar4;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined8 uVar5;
  
  if (DAT_05704748 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_Player);
    DAT_05704748 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_040d24b6;
LAB_040d2467:
    pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_040d2467;
LAB_040d24b6:
    il2cpp_init_class();
    pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  if (pPVar1 != (Photon_Realtime_Player_array *)0x0) {
    pIVar2 = System_Array__Clone((System_Array_o *)pPVar1,(MethodInfo *)0x0);
    uVar5 = TypeInfo_Player;
    if (pIVar2 == (Il2CppObject *)0x0) {
      (__this->fields)._lastPlayers = (Photon_Realtime_Player_array *)0x0;
      lVar3 = 0;
    }
    else {
      pPVar1 = (Photon_Realtime_Player_array *)il2cpp_runtime_glue(pIVar2,TypeInfo_Player);
      if (pPVar1 == (Photon_Realtime_Player_array *)0x0) {
LAB_040d25cb:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar2,uVar5);
      }
      (__this->fields)._lastPlayers = pPVar1;
      uVar5 = TypeInfo_Player;
      lVar3 = il2cpp_runtime_glue(pIVar2,TypeInfo_Player);
      if (lVar3 == 0) goto LAB_040d25cb;
    }
    il2cpp_runtime_glue(&(__this->fields)._lastPlayers,lVar3);
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x20,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._lastPlayers;
    if ((pPVar1 != (Photon_Realtime_Player_array *)0x0) &&
       (pPVar4 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0),
       pPVar4 != (Photon_Realtime_Room_o *)0x0)) {
      UI_ScoreboardScorePanel__SetHeader
                (__this,__this_00,(int32_t)pPVar1->max_length,(pPVar4->fields).maxPlayers,in_R8);
      UI_ScoreboardScorePanel__SetRows(__this,__this_00,method_00);
      (__this->fields)._currentSyncDelay = 1.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$SetRows
// il2cpp: void UI_ScoreboardScorePanel__SetRows (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x40d5030

void UI_ScoreboardScorePanel__SetRows
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Photon_Realtime_Player_array *pPVar4;
  long lVar5;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  Photon_Realtime_Player_o *item;
  UnityEngine_Transform_o *row;
  Photon_Realtime_Player_array *pPVar6;
  ulong uVar7;
  int iVar8;
  System_Collections_Generic_List_Transform__o *pSVar9;
  
  if (DAT_05704749 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704749 = '\x01';
  }
  pSVar9 = (__this->fields)._rows;
  if ((pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0) &&
     (pPVar6 = (__this->fields)._lastPlayers, pPVar6 != (Photon_Realtime_Player_array *)0x0)) {
    iVar2 = (pSVar9->fields)._size;
    iVar8 = (int)pPVar6->max_length;
    if (iVar8 < iVar2) {
      if (0 < iVar2 - iVar8) {
        iVar8 = 0;
        do {
          pSVar9 = (__this->fields)._rows;
          if ((pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) ||
             (__this_00 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,
                                     (pSVar9->fields)._size + -1,MethodInfo_Transform_get_Item),
             __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_040d5292;
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
          pSVar9 = (__this->fields)._rows;
          if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_040d5292;
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar9,(pSVar9->fields)._size + -1
                     ,MethodInfo_Void_RemoveAt);
          pPVar6 = (__this->fields)._lastPlayers;
          if (pPVar6 == (Photon_Realtime_Player_array *)0x0) goto LAB_040d5292;
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2 - (int)pPVar6->max_length);
      }
    }
    else if ((iVar2 < iVar8) && (0 < iVar8 - iVar2)) {
      iVar8 = 0;
      do {
        pSVar9 = (__this->fields)._rows;
        if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_040d5292;
        item = (Photon_Realtime_Player_o *)
               UI_ScoreboardScorePanel__CreateRow
                         (__this,style,(pSVar9->fields)._size,(MethodInfo *)pPVar6);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar6 = (Photon_Realtime_Player_array *)(pSVar9->fields)._items;
        if (pPVar6 == (Photon_Realtime_Player_array *)0x0) goto LAB_040d5292;
        uVar3 = (pSVar9->fields)._size;
        if (uVar3 < (uint)pPVar6->max_length) {
          (pSVar9->fields)._size = uVar3 + 1;
          pPVar6->m_Items[(int)uVar3] = item;
          il2cpp_runtime_glue(pPVar6->m_Items + (int)uVar3,item);
          pPVar4 = (__this->fields)._lastPlayers;
        }
        else {
          pPVar6 = *(Photon_Realtime_Player_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                     (MethodInfo_35A7350 *)pPVar6->m_Items[10]);
          pPVar4 = (__this->fields)._lastPlayers;
        }
        if (pPVar4 == (Photon_Realtime_Player_array *)0x0) goto LAB_040d5292;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)pPVar4->max_length - iVar2);
    }
    pSVar9 = (__this->fields)._rows;
    if (pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0) {
      uVar7 = 0;
      do {
        if ((long)(pSVar9->fields)._size <= (long)uVar7) {
          return;
        }
        row = (UnityEngine_Transform_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar9,(int32_t)uVar7,
                         MethodInfo_Transform_get_Item);
        pPVar6 = (__this->fields)._lastPlayers;
        if (pPVar6 == (Photon_Realtime_Player_array *)0x0) break;
        if (*(uint *)&pPVar6->max_length <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UI_ScoreboardScorePanel__SetRow
                  (__this,row,(Photon_Realtime_Player_o *)pPVar6->m_Items[uVar7],
                   (MethodInfo *)pPVar6);
        uVar7 = uVar7 + 1;
        pSVar9 = (__this->fields)._rows;
      } while (pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0);
    }
  }
LAB_040d5292:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$SetHeader
// il2cpp: void UI_ScoreboardScorePanel__SetHeader (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t currentPlayers, int32_t maxPlayers, const MethodInfo* method);
// 0x40d49a0

void UI_ScoreboardScorePanel__SetHeader
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t currentPlayers,
               int32_t maxPlayers,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  long lVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  System_String_array *values;
  System_String_o *str0;
  float fVar7;
  undefined8 local_38;
  
  local_38 = CONCAT44(currentPlayers,maxPlayers);
  if (DAT_0570474a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Ping");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"Player");
    il2cpp_init_method_metadata(&" (");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Action");
    il2cpp_init_method_metadata(&"ScoreboardPopup");
    il2cpp_init_method_metadata(&"Scoreboard");
    DAT_0570474a = '\x01';
  }
  pUVar4 = (__this->fields)._header;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._header;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this_00 = UI_ElementFactory__CreateHorizontalGroup
                          ((__this->fields).SinglePanel,0.0,4,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_040d501a;
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    *ppUVar1 = pUVar4;
    il2cpp_runtime_glue(ppUVar1,pUVar4);
    pUVar4 = *ppUVar1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Player","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar4,style,pSVar5,1,4,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel
              (*ppUVar1,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),1,4,
               (MethodInfo *)0x0);
    pUVar4 = *ppUVar1;
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Action","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar4,style,pSVar5,1,4,(MethodInfo *)0x0);
    pUVar4 = *ppUVar1;
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Ping","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar4,style,pSVar5,1,4,(MethodInfo *)0x0);
    if ((*ppUVar1 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar4 = UnityEngine_Transform__GetChild(*ppUVar1,0,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_040d501a;
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                             (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_040d501a;
    (*pIVar6->klass->vtable[0x24].methodPtr)(fVar7 / 3.0,pIVar6,pIVar6->klass->vtable[0x24].method);
    if ((*ppUVar1 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar4 = UnityEngine_Transform__GetChild(*ppUVar1,1,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_040d501a;
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                             (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_040d501a;
    (*pIVar6->klass->vtable[0x24].methodPtr)(fVar7 / 3.0,pIVar6,pIVar6->klass->vtable[0x24].method);
    if ((*ppUVar1 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar4 = UnityEngine_Transform__GetChild(*ppUVar1,2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_040d501a;
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                             (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_040d501a;
    (*pIVar6->klass->vtable[0x24].methodPtr)(fVar7 / 6.0,pIVar6,pIVar6->klass->vtable[0x24].method);
    if ((*ppUVar1 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar4 = UnityEngine_Transform__GetChild(*ppUVar1,3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_040d501a;
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                             (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_040d501a;
    (*pIVar6->klass->vtable[0x24].methodPtr)(fVar7 / 6.0,pIVar6,pIVar6->klass->vtable[0x24].method);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = " (";
      il2cpp_runtime_glue(values->m_Items);
      pSVar5 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar5;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar5);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "/";
          il2cpp_runtime_glue(values->m_Items + 2);
          pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar5;
            il2cpp_runtime_glue(values->m_Items + 3,pSVar5);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ")";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
              if ((*ppUVar1 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar4 = UnityEngine_Transform__GetChild(*ppUVar1,0,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                pIVar6 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                str0 = UI_UIManager__GetLocale
                                 ("ScoreboardPopup","Scoreboard","Player","","",
                                  (MethodInfo *)0x0);
                pSVar5 = System_String__Concat(str0,pSVar5,(MethodInfo *)0x0);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  (*pIVar6->klass->vtable[0x4b].methodPtr)
                            (pIVar6,pSVar5,pIVar6->klass->vtable[0x4b].method);
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_init_class();
                    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                  }
                  else {
                    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                  }
                  if (lVar2 == 0) {
                    return;
                  }
                  if ((*ppUVar1 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar4 = UnityEngine_Transform__GetChild(*ppUVar1,1,(MethodInfo *)0x0),
                     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    pIVar6 = UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
                    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                    if ((lVar2 != 0) && (pIVar6 != (Il2CppObject *)0x0)) {
                      (*pIVar6->klass->vtable[0x4b].methodPtr)
                                (pIVar6,*(undefined8 *)(lVar2 + 0x70),
                                 pIVar6->klass->vtable[0x4b].method);
                      return;
                    }
                  }
                }
              }
              goto LAB_040d501a;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040d501a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$CreateRow
// il2cpp: UnityEngine_Transform_o* UI_ScoreboardScorePanel__CreateRow (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t index, const MethodInfo* method);
// 0x40d52b0

UnityEngine_Transform_o *
UI_ScoreboardScorePanel__CreateRow
          (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t index,
          MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  
  if (DAT_0570474b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass14_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Icons/Intro/UserIcon");
    il2cpp_init_method_metadata(&"Icons/Game/VolumeOffIcon");
    il2cpp_init_method_metadata(&"Icons/Game/BladeIcon");
    il2cpp_init_method_metadata(&"Icons/Quests/Skull1Icon");
    il2cpp_init_method_metadata(&"0");
    il2cpp_init_method_metadata(&"Icons/Navigation/CloseIcon");
    DAT_0570474b = '\x01';
  }
  __this_00 = (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass14_0);
  UI_ScoreboardScorePanel_<>c__DisplayClass14_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_00->fields,__this);
    (__this_00->fields).index = index;
    pUVar3 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields).SinglePanel,0.0,4,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateHorizontalGroup(parent,30.0,4,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        UI_ElementFactory__CreateRawImage(pUVar4,style,"Icons/Quests/Skull1Icon",32.0,32.0,(MethodInfo *)0x0);
        UI_ElementFactory__CreateRawImage(pUVar4,style,"Icons/Game/BladeIcon",32.0,32.0,(MethodInfo *)0x0);
        UI_ElementFactory__CreateEffectText
                  (pUVar4,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultLabel
                  (parent,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                   (MethodInfo *)0x0);
        pUVar3 = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateIconButton
                    (pUVar4,style,"Icons/Intro/UserIcon",26.0,26.0,pUVar5,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateIconButton
                    (pUVar4,style,"Icons/Game/VolumeOffIcon",30.0,30.0,pUVar5,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
            bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar1 = (char)bVar2;
          }
          else {
            bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar1 = (char)bVar2;
          }
          if (cVar1 != '\0') {
            pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateIconButton
                      (pUVar4,style,"Icons/Navigation/CloseIcon",24.0,24.0,pUVar5,(MethodInfo *)0x0);
          }
          UI_ElementFactory__CreateDefaultLabel(parent,style,"0",0,4,(MethodInfo *)0x0);
          if ((parent != (UnityEngine_Transform_o *)0x0) &&
             (pUVar4 = UnityEngine_Transform__GetChild(parent,0,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            pIVar6 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                     (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
            if (pIVar6 != (Il2CppObject *)0x0) {
              (*pIVar6->klass->vtable[0x24].methodPtr)
                        (fVar7 / 3.0,pIVar6,pIVar6->klass->vtable[0x24].method);
              pUVar4 = UnityEngine_Transform__GetChild(parent,1,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pIVar6 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                         (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  (*pIVar6->klass->vtable[0x24].methodPtr)
                            (fVar7 / 3.0,pIVar6,pIVar6->klass->vtable[0x24].method);
                  pUVar4 = UnityEngine_Transform__GetChild(parent,2,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pIVar6 = UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                             (__this,(__this->klass->vtable)._30_GetPanelWidth.
                                                     method);
                    if (pIVar6 != (Il2CppObject *)0x0) {
                      (*pIVar6->klass->vtable[0x24].methodPtr)
                                (fVar7 / 6.0,pIVar6,pIVar6->klass->vtable[0x24].method);
                      pUVar4 = UnityEngine_Transform__GetChild(parent,3,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pIVar6 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        fVar7 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                                 (__this,(__this->klass->vtable)._30_GetPanelWidth.
                                                         method);
                        if (pIVar6 != (Il2CppObject *)0x0) {
                          (*pIVar6->klass->vtable[0x24].methodPtr)
                                    (fVar7 / 6.0,pIVar6,pIVar6->klass->vtable[0x24].method);
                          return parent;
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


// UI.ScoreboardScorePanel$$SetRow
// il2cpp: void UI_ScoreboardScorePanel__SetRow (UI_ScoreboardScorePanel_o* __this, UnityEngine_Transform_o* row, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d57b0

void UI_ScoreboardScorePanel__SetRow
               (UI_ScoreboardScorePanel_o *__this,UnityEngine_Transform_o *row,
               Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  undefined4 effect;
  bool_conflict bVar4;
  int iVar5;
  uint uVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar10;
  System_String_array *value;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_UI_RawImage_o *pUVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar15;
  undefined8 *puVar16;
  PatreonEffects_EffectText_o *__this_01;
  TMPro_TMP_FontAsset_o *value_01;
  Photon_Realtime_Player_o *pPVar17;
  UnityEngine_Transform_o *__this_02;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorD;
  UnityEngine_Color_o colorC;
  uint local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  UnityEngine_Color_Fields local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  System_String_o *local_b8;
  System_String_o *local_b0;
  undefined1 local_a8 [8];
  System_String_o *pSStack_a0;
  UnityEngine_Transform_o *local_98;
  System_String_o *pSStack_90;
  UI_ScoreboardScorePanel_o *local_88;
  undefined1 auStack_80 [8];
  System_String_o *local_78;
  UnityEngine_Color_Fields UStack_70;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  UnityEngine_Color_Fields local_48;
  
  local_f8 = __this;
  if (DAT_0570474c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_EffectText_GetComponent_EffectText);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_EffectText);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Icons/Game/ThunderspearIcon");
    il2cpp_init_method_metadata(&"DeadColor");
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"LoadoutTitan");
    il2cpp_init_method_metadata(&"LoadoutShifter");
    il2cpp_init_method_metadata(&" / ");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"Icons/Game/APGIcon");
    il2cpp_init_method_metadata(&"Icons/Game/BladeIcon");
    il2cpp_init_method_metadata(&"Icons/Game/SpectateIcon");
    il2cpp_init_method_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Icons/Quests/Skull1Icon");
    il2cpp_init_method_metadata(&"Icons/Game/TitanIcon");
    il2cpp_init_method_metadata(&"SpectateColor");
    il2cpp_init_method_metadata(&"LoadoutHuman");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_0570474c = '\x01';
  }
  local_78 = (System_String_o *)0x0;
  UStack_70.r = 0.0;
  UStack_70.g = 0.0;
  local_88 = (UI_ScoreboardScorePanel_o *)0x0;
  auStack_80._0_4_ = 0.0;
  auStack_80._4_4_ = 0.0;
  local_98 = (UnityEngine_Transform_o *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  pSStack_a0 = (System_String_o *)0x0;
  UStack_70.b = 0.0;
  UStack_70.a = 0.0;
  local_11c = 0;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = PhotonExtensions__GetStringProperty
                     (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_b8 = MiscExtensions__TruncateRichText(pSVar8,0xf,(MethodInfo *)0x0);
  local_d8 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),
                        "",(MethodInfo *)0x0);
  local_c8 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),
                        "",(MethodInfo *)0x0);
  local_e8 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                        "",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  local_118 = row;
  if (lVar10 == 0) {
LAB_040d5bdf:
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
    lVar10 = il2cpp_glue_02274930(TypeInfo_string,4);
    if (lVar10 == 0) goto LAB_040d6bfa;
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_040d6bda:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar10 + 0x20) = "Kills";
    il2cpp_runtime_glue((undefined8 *)(lVar10 + 0x20));
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_040d6bda;
    *(undefined8 *)(lVar10 + 0x28) = "Deaths";
    il2cpp_runtime_glue(lVar10 + 0x28);
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_040d6bda;
    *(undefined8 *)(lVar10 + 0x30) = "HighestDamage";
    il2cpp_runtime_glue(lVar10 + 0x30);
    if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_040d6bda;
    *(undefined8 *)(lVar10 + 0x38) = "TotalDamage";
    il2cpp_runtime_glue(lVar10 + 0x38);
    local_11c = 0;
    iVar5 = (int)*(undefined8 *)(lVar10 + 0x18);
    if (0 < iVar5) {
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        lVar18 = 0;
        if (iVar5 != 0) {
          do {
            pIVar9 = PhotonExtensions__GetCustomProperty
                               (player,*(System_String_o **)(lVar10 + 0x20 + lVar18 * 8),
                                (MethodInfo *)0x0);
            if (pIVar9 == (Il2CppObject *)0x0) {
              pIVar9 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            else {
              pIVar9 = (Il2CppObject *)
                       (*pIVar9->klass->vtable[3].methodPtr)(pIVar9,pIVar9->klass->vtable[3].method)
              ;
            }
            lVar3 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar2 = (__this_00->fields)._items;
            if (pSVar2 == (System_Object_array *)0x0) goto LAB_040d6bfa;
            uVar6 = (__this_00->fields)._size;
            if (uVar6 < (uint)pSVar2->max_length) {
              (__this_00->fields)._size = uVar6 + 1;
              pSVar2->m_Items[(int)uVar6] = pIVar9;
              il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar6);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,pIVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar18 = lVar18 + 1;
            local_11c = (uint)lVar18;
            uVar6 = (uint)*(undefined8 *)(lVar10 + 0x18);
            if ((int)uVar6 <= (int)local_11c) goto LAB_040d5daa;
          } while (local_11c < uVar6);
        }
        goto LAB_040d6bda;
      }
      pIVar9 = PhotonExtensions__GetCustomProperty
                         (player,*(System_String_o **)(lVar10 + 0x20),(MethodInfo *)0x0);
      if (pIVar9 != (Il2CppObject *)0x0) {
        (*pIVar9->klass->vtable[3].methodPtr)(pIVar9,pIVar9->klass->vtable[3].method);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto LAB_040d6bfa;
    }
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040d6bfa;
LAB_040d5daa:
    value = (System_String_array *)
            System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
    pSVar8 = System_String__Join(" / ",value,(MethodInfo *)0x0);
    row = local_118;
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_040d6bfa;
    }
    bVar4 = System_String__op_Inequality
                      (*(System_String_o **)(lVar10 + 0x78),
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto LAB_040d5bdf;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar10 == 0) goto LAB_040d6bfa;
    pIVar9 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(lVar10 + 0x78),(MethodInfo *)0x0);
    if (pIVar9 == (Il2CppObject *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      pSVar8 = (System_String_o *)(*pIVar9->klass->vtable[3].methodPtr)(pIVar9);
    }
  }
  if (((row == (UnityEngine_Transform_o *)0x0) ||
      (pUVar11 = UnityEngine_Transform__GetChild(row,0,(MethodInfo *)0x0),
      pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar12 = UnityEngine_Transform__GetChild(pUVar11,0,(MethodInfo *)0x0),
     pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_040d6bfa;
  pUVar13 = (UnityEngine_UI_RawImage_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar12,MethodInfo_RawImage_GetComponent_RawImage);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar10 == 0) {
LAB_040d613a:
    if ((pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040d6bfa;
    UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_040d61be;
LAB_040d6178:
    lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar10 == 0) goto LAB_040d61d6;
LAB_040d6188:
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_040d6bfa;
    }
    fVar27 = (float)(uint)*(byte *)(lVar10 + 0x83);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_040d6bfa;
    }
    if (*(char *)(lVar10 + 0x84) == '\0') goto LAB_040d613a;
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_String__op_Equality
                      (local_d8,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = System_String__op_Equality
                        (local_d8,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto LAB_040d613a;
      if ((pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar14 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
         pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040d6bfa;
      UnityEngine_GameObject__SetActive(pUVar14,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset
                           (pSVar15,"Icons/Quests/Skull1Icon",1,(MethodInfo *)0x0);
      if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
      goto LAB_040d6bdf;
      UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
      pSVar15 = (System_String_o *)
                (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar16 = &"DeadColor";
    }
    else {
      if ((pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar14 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
         pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040d6bfa;
      UnityEngine_GameObject__SetActive(pUVar14,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset
                           (pSVar15,"Icons/Game/SpectateIcon",1,(MethodInfo *)0x0);
      if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
      goto LAB_040d6bdf;
      UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
      pSVar15 = (System_String_o *)
                (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar16 = &"SpectateColor";
    }
    UVar35 = UI_UIManager__GetThemeColor
                       (pSVar15,"Icon",(System_String_o *)*puVar16,"DefaultPanel",
                        (MethodInfo *)0x0);
    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
              (UVar35.fields.r,UVar35.fields.b,pUVar13,(pUVar13->klass->vtable)._23_set_color.method
              );
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_040d6178;
LAB_040d61be:
    il2cpp_init_class();
    lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar10 != 0) goto LAB_040d6188;
LAB_040d61d6:
    fVar27 = 0.0;
  }
  if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto LAB_040d6bfa;
  local_108.r = fVar27;
  pUVar12 = UnityEngine_Transform__GetChild(pUVar11,1,(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto LAB_040d6bfa;
  pUVar13 = (UnityEngine_UI_RawImage_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar12,MethodInfo_RawImage_GetComponent_RawImage);
  local_b0 = pSVar8;
  if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_String__op_Equality
                    (local_c8,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_String__op_Equality
                      (local_c8,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = System_String__op_Equality
                        (local_c8,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      pUVar12 = local_118;
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_String_o *)
                 (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar35 = UI_UIManager__GetThemeColor
                           (pSVar8,"Icon","LoadoutShifter","DefaultPanel",(MethodInfo *)0x0);
        if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040d6bfa;
        (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                  (UVar35.fields.r,UVar35.fields.b,pUVar13,
                   (pUVar13->klass->vtable)._23_set_color.method);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value_00 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset
                             (pSVar8,"Icons/Game/ShifterIcon",1,(MethodInfo *)0x0);
        if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
        goto LAB_040d6bdf;
        UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
        pUVar12 = local_118;
      }
      goto LAB_040d67c0;
    }
    pSVar8 = (System_String_o *)
             (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar35 = UI_UIManager__GetThemeColor
                       (pSVar8,"Icon","LoadoutTitan","DefaultPanel",(MethodInfo *)0x0);
    pUVar12 = local_118;
    if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040d6bfa;
    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
              (UVar35.fields.r,UVar35.fields.b,pUVar13,(pUVar13->klass->vtable)._23_set_color.method
              );
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar16 = &"Icons/Game/TitanIcon";
LAB_040d6454:
    value_00 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar8,(System_String_o *)*puVar16,1,(MethodInfo *)0x0);
    if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) {
LAB_040d6bdf:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value_00);
    }
    UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
  }
  else {
    pSVar8 = (System_String_o *)
             (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar35 = UI_UIManager__GetThemeColor
                       (pSVar8,"Icon","LoadoutHuman","DefaultPanel",(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040d6bfa;
    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
              (UVar35.fields.r,UVar35.fields.b,pUVar13,(pUVar13->klass->vtable)._23_set_color.method
              );
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_String__op_Equality
                      (local_e8,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar12 = local_118;
      pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar16 = &"Icons/Game/BladeIcon";
      goto LAB_040d6454;
    }
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_String__op_Equality
                      (local_e8,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = System_String__op_Equality
                        (local_e8,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                         (MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar12 = local_118;
        bVar4 = System_String__op_Equality
                          (local_e8,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                           (MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          puVar16 = &"Icons/Game/ThunderspearIcon";
          goto LAB_040d6454;
        }
      }
      else {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar12 = local_118;
        pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value_00 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset
                             (pSVar8,"Icons/Game/APGIcon",1,(MethodInfo *)0x0);
        if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
        goto LAB_040d6bdf;
        UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
      }
    }
    else {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar12 = local_118;
      pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset
                           (pSVar8,"Icons/Game/AHSSIcon",1,(MethodInfo *)0x0);
      if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
      goto LAB_040d6bdf;
      UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
    }
  }
LAB_040d67c0:
  if (local_108.r == 0.0) {
LAB_040d67fe:
    if ((pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040d6bfa;
    UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_String__op_Equality
                      (local_d8,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto LAB_040d67fe;
    if ((pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040d6bfa;
    UnityEngine_GameObject__SetActive(pUVar14,1,(MethodInfo *)0x0);
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    iVar7 = (player->fields).actorNumber;
    uVar6 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
    bVar4 = (player->fields).IsLocal;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar15 = GameManagers_ChatManager__GetIDString
                        (iVar7,uVar6 & 0xff,(uint)(byte)bVar4,(MethodInfo *)0x0);
    bVar4 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                      (player,(PatreonEffects_ResolvedNameEffect_o *)local_a8,(MethodInfo *)0x0);
    pSVar8 = local_b8;
    if ((char)bVar4 != '\0') {
      effect = local_a8._4_4_;
      uVar19 = (int)pSStack_a0;
      uVar20 = (int)((ulong)pSStack_a0 >> 0x20);
      uVar21 = (int)local_98;
      uVar22 = (int)((ulong)local_98 >> 0x20);
      uVar23 = (int)pSStack_90;
      uVar24 = (int)((ulong)pSStack_90 >> 0x20);
      uVar25 = (int)local_88;
      uVar26 = (int)((ulong)local_88 >> 0x20);
      fVar27 = auStack_80._0_4_;
      fVar28 = auStack_80._4_4_;
      uVar29 = (int)local_78;
      uVar30 = (int)((ulong)local_78 >> 0x20);
      fVar31 = UStack_70.r;
      fVar32 = UStack_70.g;
      fVar33 = UStack_70.b;
      fVar34 = UStack_70.a;
      if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
        local_c8 = pSStack_a0;
        uStack_c0 = 0;
        local_118 = local_98;
        uStack_110 = 0;
        local_d8 = pSStack_90;
        uStack_d0 = 0;
        local_f8 = local_88;
        uStack_f0 = 0;
        local_108.r = (float)auStack_80._0_4_;
        local_108.g = (float)auStack_80._4_4_;
        local_108.b = 0.0;
        local_108.a = 0.0;
        local_e8 = local_78;
        uStack_e0 = 0;
        local_48.r = UStack_70.r;
        local_48.g = UStack_70.g;
        local_48.b = 0.0;
        local_48.a = 0.0;
        local_58 = UStack_70.b;
        fStack_54 = UStack_70.a;
        uStack_50 = 0;
        il2cpp_init_class();
        uVar19 = (undefined4)local_c8;
        uVar20 = local_c8._4_4_;
        uVar21 = (undefined4)local_118;
        uVar22 = local_118._4_4_;
        uVar23 = (undefined4)local_d8;
        uVar24 = local_d8._4_4_;
        uVar25 = (undefined4)local_f8;
        uVar26 = local_f8._4_4_;
        fVar27 = local_108.r;
        fVar28 = local_108.g;
        uVar29 = (undefined4)local_e8;
        uVar30 = local_e8._4_4_;
        fVar31 = local_48.r;
        fVar32 = local_48.g;
        fVar33 = local_58;
        fVar34 = fStack_54;
      }
      UVar35.fields.g = (float)uVar20;
      UVar35.fields.r = (float)uVar19;
      UVar35.fields.a = (float)uVar22;
      UVar35.fields.b = (float)uVar21;
      colorB.fields.g = (float)uVar24;
      colorB.fields.r = (float)uVar23;
      colorB.fields.a = (float)uVar26;
      colorB.fields.b = (float)uVar25;
      colorD.fields.g = fVar32;
      colorD.fields.r = fVar31;
      colorD.fields.a = fVar34;
      colorD.fields.b = fVar33;
      colorC.fields.g = fVar28;
      colorC.fields.r = fVar27;
      colorC.fields.a = (float)uVar30;
      colorC.fields.b = (float)uVar29;
      pSVar8 = PatreonEffects_EffectText__Compose
                         (pSVar8,effect,UVar35,colorB,colorC,colorD,(MethodInfo *)0x0);
    }
    if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar11 = UnityEngine_Transform__GetChild(pUVar11,2,(MethodInfo *)0x0),
       pUVar11 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = (PatreonEffects_EffectText_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar11,MethodInfo_EffectText_GetComponent_EffectText);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value_01 = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,(MethodInfo *)0x0);
      if (__this_01 != (PatreonEffects_EffectText_o *)0x0) {
        PatreonEffects_EffectText__set_font(__this_01,value_01,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat(pSVar15,pSVar8,(MethodInfo *)0x0);
        PatreonEffects_EffectText__set_text(__this_01,pSVar8,(MethodInfo *)0x0);
        pUVar11 = UnityEngine_Transform__GetChild(pUVar12,1,(MethodInfo *)0x0);
        if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
           (pIVar9 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text),
           pIVar9 != (Il2CppObject *)0x0)) {
          (*pIVar9->klass->vtable[0x4b].methodPtr)
                    (pIVar9,local_b0,pIVar9->klass->vtable[0x4b].method);
          pUVar11 = UnityEngine_Transform__GetChild(pUVar12,2,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pPVar17 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          if (((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
              (__this_02 = UnityEngine_Transform__GetChild(pUVar11,1,(MethodInfo *)0x0),
              __this_02 != (UnityEngine_Transform_o *)0x0)) &&
             (pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
             pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar14,(uint)(pPVar17 != player),(MethodInfo *)0x0);
            iVar7 = UnityEngine_Transform__get_childCount(pUVar11,(MethodInfo *)0x0);
            if (2 < iVar7) {
              pUVar11 = UnityEngine_Transform__GetChild(pUVar11,2,(MethodInfo *)0x0);
              if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
                 (pUVar14 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                 pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040d6bfa;
              UnityEngine_GameObject__SetActive(pUVar14,(uint)(pPVar17 != player),(MethodInfo *)0x0)
              ;
            }
            pUVar11 = UnityEngine_Transform__GetChild(pUVar12,3,(MethodInfo *)0x0);
            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
              pIVar9 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
              if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                il2cpp_init_class();
              }
              local_11c = PhotonExtensions__GetIntProperty
                                    (player,*(System_String_o **)
                                             (*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                                     (MethodInfo *)0x0);
              pSVar8 = System_Int32__ToString((int32_t)&local_11c,(MethodInfo *)0x0);
              if (pIVar9 != (Il2CppObject *)0x0) {
                (*pIVar9->klass->vtable[0x4b].methodPtr)
                          (pIVar9,pSVar8,pIVar9->klass->vtable[0x4b].method);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_040d6bfa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$OnClickProfile
// il2cpp: void UI_ScoreboardScorePanel__OnClickProfile (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x40d6c20

void UI_ScoreboardScorePanel__OnClickProfile
               (UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_array *pPVar2;
  UI_BasePanel_o *pUVar3;
  UI_ScoreboardProfilePopup_o *__this_00;
  
  if (DAT_0570474d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ScoreboardPopup);
    DAT_0570474d = '\x01';
  }
  pPVar2 = (__this->fields)._lastPlayers;
  if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
    if ((uint)pPVar2->max_length <= (uint)index) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = (__this->fields).Parent;
    if (pUVar3 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
      if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
          TypeInfo_ScoreboardPopup)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_00 = (UI_ScoreboardProfilePopup_o *)pUVar3[1].fields._currentCategoryPanelName;
      if (__this_00 != (UI_ScoreboardProfilePopup_o *)0x0) {
        UI_ScoreboardProfilePopup__Show(__this_00,pPVar2->m_Items[index],(MethodInfo *)(ulong)bVar1)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$OnClickKick
// il2cpp: void UI_ScoreboardScorePanel__OnClickKick (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x40d6cc0

void UI_ScoreboardScorePanel__OnClickKick
               (UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_array *pPVar2;
  UI_BasePanel_o *pUVar3;
  UI_ConfirmPopup_o *__this_00;
  UI_ScoreboardScorePanel___c__DisplayClass17_0_o *__this_01;
  UnityEngine_Events_UnityAction_o *onConfirm;
  
  if (DAT_0570474e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ScoreboardPopup);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnClickKick_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Kick this player?");
    DAT_0570474e = '\x01';
  }
  __this_01 = (UI_ScoreboardScorePanel___c__DisplayClass17_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
  UI_ScoreboardScorePanel_<>c__DisplayClass17_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ScoreboardScorePanel___c__DisplayClass17_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_01->fields,__this);
    pPVar2 = (__this->fields)._lastPlayers;
    if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
      if ((uint)pPVar2->max_length <= (uint)index) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (__this_01->fields).player = pPVar2->m_Items[index];
      il2cpp_runtime_glue(&(__this_01->fields).player);
      pUVar3 = (__this->fields).Parent;
      if (pUVar3 != (UI_BasePanel_o *)0x0) {
        bVar1 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
        if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
           ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ScoreboardPopup)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        __this_00 = (UI_ConfirmPopup_o *)pUVar3[1].fields._categoryPanelTypes;
        onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_00,"Kick this player?",onConfirm,(System_String_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$FinishKickPlayer
// il2cpp: void UI_ScoreboardScorePanel__FinishKickPlayer (UI_ScoreboardScorePanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d6e10

void UI_ScoreboardScorePanel__FinishKickPlayer
               (UI_ScoreboardScorePanel_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  if (DAT_0570474f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&".");
    DAT_0570474f = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__KickPlayer(player,1,0,".",(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$OnClickMute
// il2cpp: void UI_ScoreboardScorePanel__OnClickMute (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x40d6e80

void UI_ScoreboardScorePanel__OnClickMute
               (UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_array *pPVar2;
  UI_BasePanel_o *pUVar3;
  UnityEngine_UI_RawImage_o *__this_00;
  
  if (DAT_05704750 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ScoreboardPopup);
    DAT_05704750 = '\x01';
  }
  pPVar2 = (__this->fields)._lastPlayers;
  if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
    if ((uint)pPVar2->max_length <= (uint)index) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = (__this->fields).Parent;
    if (pUVar3 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
      if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
          TypeInfo_ScoreboardPopup)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_00 = pUVar3[1].fields.MaskBackground;
      if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
        UI_ScoreboardMutePopup__Show
                  ((UI_ScoreboardMutePopup_o *)__this_00,pPVar2->m_Items[index],
                   (MethodInfo *)(ulong)bVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardScorePanel$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___ctor (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x40d6f20

void UI_ScoreboardScorePanel___ctor(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Transform__o *__this_00;
  
  if (DAT_05704751 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&TypeInfo_List_Transform);
    DAT_05704751 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._rows = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._rows);
  (__this->fields)._currentSyncDelay = 1.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


