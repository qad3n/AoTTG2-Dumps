// Type: UI.ScoreboardInfoPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ScoreboardInfoPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.ScoreboardInfoPanel$$get_DoublePanel
// il2cpp: bool UI_ScoreboardInfoPanel__get_DoublePanel (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x40c7a60

bool_conflict
UI_ScoreboardInfoPanel__get_DoublePanel(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardInfoPanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardInfoPanel__get_VerticalSpacing (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x40c7a70

float UI_ScoreboardInfoPanel__get_VerticalSpacing
                (UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.ScoreboardInfoPanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardInfoPanel__get_VerticalPadding (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x40c7a80

int32_t UI_ScoreboardInfoPanel__get_VerticalPadding
                  (UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.ScoreboardInfoPanel$$Setup
// il2cpp: void UI_ScoreboardInfoPanel__Setup (UI_ScoreboardInfoPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40c7a90

void UI_ScoreboardInfoPanel__Setup
               (UI_ScoreboardInfoPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  char cVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_03;
  Photon_Realtime_Room_o *pPVar7;
  UI_ScoreboardInfoPanel_o *pUVar8;
  MethodInfo *pMVar9;
  undefined1 in_stack_ffffffffffffff88 [12];
  int32_t iVar10;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_057046e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Logic Hash: ");
    il2cpp_init_method_metadata(&"Addons");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Room name: ");
    il2cpp_init_method_metadata(&"Map Hash: ");
    il2cpp_init_method_metadata(&"Misc");
    il2cpp_init_method_metadata(&"Max players: ");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Addon");
    il2cpp_init_method_metadata(&"Mode");
    DAT_057046e6 = '\x01';
  }
  iVar10 = 0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x18,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  pUVar8 = (UI_ScoreboardInfoPanel_o *)(__this->fields).DoublePanelLeft;
  pMVar9 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDefaultLabel
            ((UnityEngine_Transform_o *)pUVar8,__this_03,"General",1,3,(MethodInfo *)0x0);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x38) == 0)) goto LAB_040c8193;
  UI_ScoreboardInfoPanel__CreateLabels
            (pUVar8,__this_03,(__this->fields).DoublePanelLeft,"General",
             *(System_Collections_Specialized_OrderedDictionary_o **)
              (*(long *)(lVar2 + 0x38) + 0x10),pMVar9);
  pUVar3 = (__this->fields).DoublePanelLeft;
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if ((lVar4 == 0) ||
     (pSVar6 = *(System_String_o **)(lVar4 + 0x48), pSVar6 == (System_String_o *)0x0))
  goto LAB_040c8193;
  pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat("Map Hash: ",pSVar6,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_03,pSVar6,0,3,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).DoublePanelLeft;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x20);
  if (pSVar6 == (System_String_o *)0x0) goto LAB_040c8193;
  pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat("Logic Hash: ",pSVar6,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_03,pSVar6,0,3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05702229 != '\0') goto LAB_040c7dc3;
LAB_040c7ed0:
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_040c7dd3;
LAB_040c7ef3:
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (DAT_05702229 == '\0') goto LAB_040c7ed0;
LAB_040c7dc3:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_040c7ef3;
LAB_040c7dd3:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    pUVar3 = (__this->fields).DoublePanelLeft;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = PhotonExtensions__GetStringProperty
                       ((Photon_Realtime_RoomInfo_o *)pPVar7,
                        (System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    pSVar6 = System_String__Concat("Room name: ",pSVar6,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_03,pSVar6,0,3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).DoublePanelLeft;
    pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar7 == (Photon_Realtime_Room_o *)0x0) goto LAB_040c8193;
    iVar10 = (pPVar7->fields).maxPlayers;
    pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff94,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat("Max players: ",pSVar6,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_03,pSVar6,0,3,(MethodInfo *)0x0);
  }
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
  pUVar8 = (UI_ScoreboardInfoPanel_o *)(__this->fields).DoublePanelLeft;
  pMVar9 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDefaultLabel
            ((UnityEngine_Transform_o *)pUVar8,__this_03,"Titans",1,3,(MethodInfo *)0x0);
  if (*(long *)(lVar2 + 0x50) != 0) {
    UI_ScoreboardInfoPanel__CreateLabels
              (pUVar8,__this_03,(__this->fields).DoublePanelLeft,"Titans",
               *(System_Collections_Specialized_OrderedDictionary_o **)
                (*(long *)(lVar2 + 0x50) + 0x10),pMVar9);
    pMVar9 = (MethodInfo *)0x0;
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).DoublePanelRight,__this_03,"Mode",1,3,(MethodInfo *)0x0);
    if (*(long *)(lVar2 + 0x40) != 0) {
      UI_ScoreboardInfoPanel__CreateLabels
                (__this,__this_03,(__this->fields).DoublePanelRight,"Mode",
                 *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                  (*(long *)(lVar2 + 0x40) + 0x20),pMVar9);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
      pMVar9 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateDefaultLabel
                ((__this->fields).DoublePanelRight,__this_03,"Addons",1,3,(MethodInfo *)0x0);
      if (((*(long *)(lVar2 + 0x38) != 0) &&
          (lVar4 = *(long *)(*(long *)(lVar2 + 0x38) + 0x48), lVar4 != 0)) &&
         (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar4 + 0x18),
         __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        if ((__this_00->fields)._size == 0) {
          pMVar9 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateDefaultLabel
                    ((__this->fields).DoublePanelRight,__this_03,"None",0,3,(MethodInfo *)0x0)
          ;
          lVar4 = *(long *)(lVar2 + 0x48);
        }
        else {
          System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,__this_00,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
          pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._version = iVar10,
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
                __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
                __this_01.fields._current = (Il2CppObject *)pSVar11,
                bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar5 != '\0') {
            if (SStack_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pMVar9 = (MethodInfo *)0x0;
            UI_ElementFactory__CreateDefaultLabel
                      ((__this->fields).DoublePanelRight,__this_03,
                       SStack_48.fields._current[1].monitor,0,3,(MethodInfo *)0x0);
          }
          __this_02.fields._version = iVar10;
          __this_02.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar11;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          lVar4 = *(long *)(lVar2 + 0x48);
        }
        if ((lVar4 != 0) &&
           (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x20) !=
            (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          iVar10 = System_Collections_Generic_Dictionary<object__object>__get_Count
                             (*(System_Collections_Generic_Dictionary_object__object__o **)
                               (lVar4 + 0x20),MethodInfo_Int32_get_Count);
          if (0 < iVar10) {
            if (*(long *)(lVar2 + 0x48) == 0) goto LAB_040c8193;
            UI_ScoreboardInfoPanel__CreateLabels
                      (__this,__this_03,(__this->fields).DoublePanelRight,"Addon",
                       *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                        (*(long *)(lVar2 + 0x48) + 0x20),pMVar9);
          }
          UI_BasePanel__CreateHorizontalDivider
                    ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,
                     (MethodInfo *)0x0);
          pUVar8 = (UI_ScoreboardInfoPanel_o *)(__this->fields).DoublePanelRight;
          pMVar9 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateDefaultLabel
                    ((UnityEngine_Transform_o *)pUVar8,__this_03,"Misc",1,3,(MethodInfo *)0x0)
          ;
          if (*(long *)(lVar2 + 0x58) != 0) {
            UI_ScoreboardInfoPanel__CreateLabels
                      (pUVar8,__this_03,(__this->fields).DoublePanelRight,"Misc",
                       *(System_Collections_Specialized_OrderedDictionary_o **)
                        (*(long *)(lVar2 + 0x58) + 0x10),pMVar9);
            return;
          }
        }
      }
    }
  }
LAB_040c8193:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, System_Collections_Specialized_OrderedDictionary_o* settings, const MethodInfo* method);
// 0x40c84a0

/* WARNING: Removing unreachable block (ram,0x040c914e) */
/* WARNING: Removing unreachable block (ram,0x040c917f) */

void UI_ScoreboardInfoPanel__CreateLabels
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,
               UnityEngine_Transform_o *panel,System_String_o *category,
               System_Collections_Specialized_OrderedDictionary_o *settings,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  Il2CppObject *__this_00;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_RuntimeTypeHandle_o handle;
  char cVar7;
  bool_conflict bVar8;
  long *plVar9;
  undefined8 *puVar10;
  System_String_o *str2;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_object__o *__this_05;
  Il2CppObject *item;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar11;
  long lVar12;
  long *plVar13;
  undefined4 in_stack_ffffffffffffff88;
  float in_stack_ffffffffffffff8c;
  undefined1 local_70 [8];
  Il2CppMethodPointer pIStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  System_Enum_c *local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  UI_ElementStyle_o *local_40;
  System_Collections_Generic_List_Enumerator_T__c *local_38;
  
  local_40 = style;
  local_38 = (System_Collections_Generic_List_Enumerator_T__c *)panel;
  if (DAT_057046e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_DictionaryEntry);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeRef_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_GameDifficulty);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_PVPMode);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"RoomName");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"PrevGameMode");
    il2cpp_init_method_metadata(&"Difficulty");
    il2cpp_init_method_metadata(&"Allow ahss");
    il2cpp_init_method_metadata(&"ClearKDROnRestart");
    il2cpp_init_method_metadata(&"PVP");
    il2cpp_init_method_metadata(&"MaxPlayers");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"Thunderspear PVP");
    il2cpp_init_method_metadata(&" - ");
    il2cpp_init_method_metadata(&"AllowAHSS");
    il2cpp_init_method_metadata(&"Tooltip");
    il2cpp_init_method_metadata(&"Misc");
    il2cpp_init_method_metadata(&"Allow apg");
    il2cpp_init_method_metadata(&"APG PVP");
    il2cpp_init_method_metadata(&"APGPVP");
    il2cpp_init_method_metadata(&"Clear KDR on restart");
    il2cpp_init_method_metadata(&"ThunderspearPVP");
    il2cpp_init_method_metadata(&"AllowAPG");
    il2cpp_init_method_metadata(&"Addon");
    il2cpp_init_method_metadata(&".");
    il2cpp_init_method_metadata(&"Game mode");
    il2cpp_init_method_metadata(&"Mode");
    DAT_057046e7 = '\x01';
  }
  local_58 = (System_Enum_c *)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  local_48 = (InvokerMethod)0x0;
  bVar8 = System_String__op_Equality(category,"Mode",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (settings == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto LAB_040c9170;
  }
  else {
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
       (settings == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
LAB_040c9170:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Specialized_OrderedDictionary__Insert
              (settings,0,"Game mode",*(Il2CppObject **)(lVar5 + 0x30),(MethodInfo *)0x0);
  }
  plVar9 = (long *)(*(settings->klass->vtable)._23_GetEnumerator.methodPtr)
                             (settings,(settings->klass->vtable)._23_GetEnumerator.method);
  plVar13 = plVar9;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040c87d0:
  lVar5 = *plVar9;
  if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
    lVar12 = 0;
    do {
      if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
        puVar10 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar12) * 0x10 + lVar5 + 0x138);
        goto LAB_040c8823;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar12);
  }
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_040c8823:
  cVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if (cVar7 != '\0') {
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar10 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar12) + 1) * 0x10 + lVar5 +
                    0x138);
          goto LAB_040c88a8;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,1);
LAB_040c88a8:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar9);
    }
    puVar10 = (undefined8 *)il2cpp_glue_022c7330(plVar9);
    pSVar11 = (System_String_o *)*puVar10;
    __this_00 = (Il2CppObject *)puVar10[1];
    if (__this_00 != (Il2CppObject *)0x0) {
      bVar2 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
    }
    if ((pSVar11 != (System_String_o *)0x0) && (pSVar11->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar11);
    }
    if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    str2 = (System_String_o *)
           (*__this_00->klass->vtable[3].methodPtr)(__this_00,__this_00->klass->vtable[3].method);
    plVar9 = (long *)il2cpp_runtime_glue(__this_00);
    if (plVar9 != (long *)0x0) {
      __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar12) == TypeInfo_IListSetting) {
            puVar10 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar12) + 2) * 0x10 + lVar5 +
                      0x138);
            goto LAB_040c89f9;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IListSetting,2);
LAB_040c89f9:
      __this_05 = (System_Collections_Generic_List_object__o *)
                  (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_05,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn)
      ;
      local_48 = (InvokerMethod)CONCAT44(uStack_5c,local_60);
      local_58 = (System_Enum_c *)local_70;
      pIStack_50 = pIStack_68;
      if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_01.fields._8_8_ = category;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)plVar13;
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff88;
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff8c;
        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&local_58);
        if ((char)bVar8 != '\0') {
          if (local_48 != (InvokerMethod)0x0) {
            (**(code **)(*(long *)local_48 + 0x168))
                      (local_48,*(undefined8 *)(*(long *)local_48 + 0x170));
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_040c8ff3:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_02.fields._8_8_ = category,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)plVar13,
              __this_02.fields._current._0_4_ = in_stack_ffffffffffffff88,
              __this_02.fields._current._4_4_ = in_stack_ffffffffffffff8c,
              bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185E20 *)&local_58), (char)bVar8 != '\0') {
          if (local_48 == (InvokerMethod)0x0) goto LAB_040c8ff3;
          item = (Il2CppObject *)
                 (**(code **)(*(long *)local_48 + 0x168))
                           (local_48,*(undefined8 *)(*(long *)local_48 + 0x170));
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_04->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar3 = (__this_04->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (__this_04->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = item;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._8_8_ = category;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)plVar13;
      __this_03.fields._current._0_4_ = in_stack_ffffffffffffff88;
      __this_03.fields._current._4_4_ = in_stack_ffffffffffffff8c;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&local_58);
      if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      str2 = "None";
      if (0 < (__this_04->fields)._size) {
        str2 = System_String__Join(", ",
                                   (System_Collections_Generic_IEnumerable_string__o *)__this_04,
                                   (MethodInfo *)0x0);
      }
    }
    left = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    handle = TypeRef_FloatSetting;
    plVar9 = plVar13;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
      plVar9 = plVar13;
    }
    right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    bVar8 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      in_stack_ffffffffffffff8c = *(float *)((long)&__this_00[1].klass + 4);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      str2 = Utility_Util__FormatFloat(in_stack_ffffffffffffff8c,2,(MethodInfo *)0x0);
    }
    bVar8 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      bVar8 = System_String__op_Equality(pSVar11,"Difficulty",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') goto LAB_040c8da0;
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      local_60 = *(undefined4 *)((long)&__this_00[1].klass + 4);
      local_70 = (undefined1  [8])TypeInfo_GameDifficulty;
      pIStack_68 = (Il2CppMethodPointer)0xffffffffffffffff;
      str2 = System_Enum__ToString((System_Enum_o *)local_70,(MethodInfo *)0x0);
      plVar13 = plVar9;
      goto LAB_040c8d76;
    }
    bVar8 = System_String__op_Equality(category,"Misc",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      bVar8 = System_String__op_Equality(category,"Mode",(MethodInfo *)0x0);
      plVar13 = plVar9;
      if ((char)bVar8 == '\0') {
        bVar8 = System_String__op_Equality(category,"Addon",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto LAB_040c8d76;
        if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = System_String__Replace(pSVar11,"."," - ",(MethodInfo *)0x0);
        iVar4 = *(int *)(TypeInfo_Util + 0xe4);
        goto joined_r0x040c8f9c;
      }
      if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar8 = System_String__EndsWith(pSVar11,"Tooltip",(MethodInfo *)0x0);
      cVar7 = (char)bVar8;
      goto LAB_040c8e62;
    }
    bVar8 = System_String__op_Equality(pSVar11,"PVP",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      local_60 = *(undefined4 *)((long)&__this_00[1].klass + 4);
      local_70 = (undefined1  [8])TypeInfo_PVPMode;
      pIStack_68 = (Il2CppMethodPointer)0xffffffffffffffff;
      str2 = System_Enum__ToString((System_Enum_o *)local_70,(MethodInfo *)0x0);
      plVar13 = plVar9;
      goto LAB_040c8d76;
    }
    bVar8 = System_String__op_Equality(pSVar11,"ClearKDROnRestart",(MethodInfo *)0x0);
    plVar13 = plVar9;
    if ((char)bVar8 == '\0') {
      bVar8 = System_String__op_Equality(pSVar11,"ThunderspearPVP",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        bVar8 = System_String__op_Equality(pSVar11,"APGPVP",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          bVar8 = System_String__op_Equality(pSVar11,"AllowAHSS",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            bVar8 = System_String__op_Equality(pSVar11,"AllowAPG",(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') goto LAB_040c8d76;
            puVar10 = &"Allow apg";
          }
          else {
            puVar10 = &"Allow ahss";
          }
        }
        else {
          puVar10 = &"APG PVP";
        }
      }
      else {
        puVar10 = &"Thunderspear PVP";
      }
    }
    else {
      puVar10 = &"Clear KDR on restart";
    }
    pSVar11 = (System_String_o *)*puVar10;
    iVar4 = *(int *)(TypeInfo_Util + 0xe4);
    goto joined_r0x040c8f9c;
  }
  plVar9 = (long *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable);
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar9;
  if ((ulong)*(ushort *)(lVar5 + 0x12e) == 0) goto LAB_040c90af;
  lVar12 = 0;
  goto LAB_040c90a0;
LAB_040c8da0:
  bVar8 = System_String__op_Equality(pSVar11,"Password",(MethodInfo *)0x0);
  plVar13 = plVar9;
  if ((((char)bVar8 == '\0') &&
      (bVar8 = System_String__op_Equality(pSVar11,"PrevGameMode",(MethodInfo *)0x0),
      (char)bVar8 == '\0')) &&
     (bVar8 = System_String__op_Equality(pSVar11,"RoomName",(MethodInfo *)0x0),
     (char)bVar8 == '\0')) {
    bVar8 = System_String__op_Equality(pSVar11,"MaxPlayers",(MethodInfo *)0x0);
    cVar7 = (char)bVar8;
LAB_040c8e62:
    if (cVar7 == '\0') {
LAB_040c8d76:
      iVar4 = *(int *)(TypeInfo_Util + 0xe4);
joined_r0x040c8f9c:
      if (iVar4 == 0) {
        il2cpp_init_class();
      }
      pSVar11 = Utility_Util__PascalToSentence(pSVar11,(MethodInfo *)0x0);
      pSVar11 = System_String__Concat(pSVar11,": ",str2,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel
                ((UnityEngine_Transform_o *)local_38,local_40,pSVar11,0,3,(MethodInfo *)0x0);
    }
  }
  goto LAB_040c87d0;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar12) {
LAB_040c90a0:
    if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_040c90cd;
    }
  }
LAB_040c90af:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_040c90cd:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, Settings_BaseSettingsContainer_o* container, const MethodInfo* method);
// 0x40c8230

void UI_ScoreboardInfoPanel__CreateLabels
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,
               UnityEngine_Transform_o *panel,System_String_o *category,
               Settings_BaseSettingsContainer_o *container,MethodInfo *method)

{
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    UI_ScoreboardInfoPanel__CreateLabels
              (__this,style,panel,category,(container->fields).Settings,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x40c8250

void UI_ScoreboardInfoPanel__CreateLabels
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,
               UnityEngine_Transform_o *panel,System_String_o *category,
               System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar1;
  System_Collections_Specialized_OrderedDictionary_o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *value;
  UI_ScoreboardInfoPanel_o *__this_05;
  UI_ScoreboardInfoPanel_c *pUVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *key;
  Il2CppObject *pIVar4;
  
  __this_05 = (UI_ScoreboardInfoPanel_o *)&stack0xffffffffffffff98;
  if (DAT_057046e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_OrderedDictionary);
    DAT_057046e8 = '\x01';
  }
  pUVar2 = (UI_ScoreboardInfoPanel_c *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  __this_03 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_glue(TypeInfo_OrderedDictionary)
  ;
  System_Collections_Specialized_OrderedDictionary___ctor(__this_03,(MethodInfo *)0x0);
  if ((settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                             MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff98,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    if (__this_03 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar2
      ;
      __this_01.fields._currentKey = key;
      bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                        (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
      if ((char)bVar1 != '\0') {
        System_Collections_Generic_Dictionary<object__object>__get_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)settings,key,
                   MethodInfo_BaseSetting_get_Item);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar3,
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar2,
            __this_00.fields._currentKey = key,
            bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
            (char)bVar1 != '\0') {
        pIVar4 = key;
        value = System_Collections_Generic_Dictionary<object__object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)settings,key,
                           MethodInfo_BaseSetting_get_Item);
        System_Collections_Specialized_OrderedDictionary__Add(__this_03,key,value,(MethodInfo *)0x0)
        ;
        key = pIVar4;
      }
    }
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar2;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
    UI_ScoreboardInfoPanel__CreateLabels(__this_05,style,panel,category,__this_03,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardInfoPanel$$.ctor
// il2cpp: void UI_ScoreboardInfoPanel___ctor (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x40c9340

void UI_ScoreboardInfoPanel___ctor(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


