// Type: UI.ScoreboardInfoPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardInfoPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// --------------------------------

// UI.ScoreboardInfoPanel$$get_DoublePanel
// il2cpp: bool UI_ScoreboardInfoPanel__get_DoublePanel (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x43d9f70

bool_conflict UI_ScoreboardInfoPanel__get_DoublePanel(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardInfoPanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardInfoPanel__get_VerticalSpacing (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x43d9f80

float UI_ScoreboardInfoPanel__get_VerticalSpacing(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.ScoreboardInfoPanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardInfoPanel__get_VerticalPadding (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x43d9f90

int32_t UI_ScoreboardInfoPanel__get_VerticalPadding(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.ScoreboardInfoPanel$$Setup
// il2cpp: void UI_ScoreboardInfoPanel__Setup (UI_ScoreboardInfoPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d9fa0

void UI_ScoreboardInfoPanel__Setup(UI_ScoreboardInfoPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  char cVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_00;
  void *pvVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  bool_conflict bVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_07;
  Photon_Realtime_Room_o *pPVar9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  long *plVar10;
  UI_ScoreboardInfoPanel_o *pUVar11;
  MethodInfo *pMVar12;
  Il2CppObject *pIVar13;
  undefined1 auVar14 [12];
  undefined4 in_stack_ffffffffffffff58;
  int32_t iVar15;
  UI_ElementStyle_o *in_stack_ffffffffffffff60;
  Il2CppObject *in_stack_ffffffffffffff68;
  UI_BasePanel_o *pUStack_90;
  _union_233249 _Stack_88;
  undefined8 uStack_80;
  System_String_o *pSStack_78;
  _union_233249 _Stack_68;
  undefined8 uStack_60;
  System_String_o *pSStack_58;
  _union_233249 _Stack_48;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  
  if (g_data_057ae477 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Logic Hash: ");
    il2cpp_runtime_helper_023445d0(&"Addons");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Room name: ");
    il2cpp_runtime_helper_023445d0(&"Map Hash: ");
    il2cpp_runtime_helper_023445d0(&"Misc");
    il2cpp_runtime_helper_023445d0(&"Max players: ");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Addon");
    il2cpp_runtime_helper_023445d0(&"Mode");
    g_data_057ae477 = '\x01';
  }
  iVar15 = 0;
  _Stack_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  pSStack_58 = (System_String_o *)0x0;
  _Stack_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  pSStack_78 = (System_String_o *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar8 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_07 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_07,0x18,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  pIVar13 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  pUVar11 = (UI_ScoreboardInfoPanel_o *)(__this->fields).DoublePanelLeft;
  pMVar12 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDefaultLabel
            ((UnityEngine_Transform_o *)pUVar11,__this_07,"General",1,3,(MethodInfo *)0x0);
  if ((pIVar13 == (Il2CppObject *)0x0) || (pIVar13[3].monitor == (void *)0x0)) goto label_043da80d;
  UI_ScoreboardInfoPanel__CreateLabels
            (pUVar11,__this_07,(__this->fields).DoublePanelLeft,"General",
             *(System_Collections_Specialized_OrderedDictionary_o **)((long)pIVar13[3].monitor + 0x10),pMVar12
            );
  pUVar2 = (__this->fields).DoublePanelLeft;
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if ((lVar3 == 0) || (pSVar8 = *(System_String_o **)(lVar3 + 0x48), pSVar8 == (System_String_o *)0x0))
  goto label_043da80d;
  pSVar8 = System_String__ToLower(pSVar8,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_3ae5ba0("Map Hash: ",pSVar8,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar2,__this_07,pSVar8,0,3,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).DoublePanelLeft;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
  if (pSVar8 == (System_String_o *)0x0) goto label_043da80d;
  pSVar8 = System_String__ToLower(pSVar8,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_3ae5ba0("Logic Hash: ",pSVar8,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar2,__this_07,pSVar8,0,3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057abf5b == '\0') goto label_043da434;
label_043da329:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043da339;
label_043da457:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (g_data_057abf5b != '\0') goto label_043da329;
label_043da434:
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043da457;
label_043da339:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    pUVar2 = (__this->fields).DoublePanelLeft;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = PhotonExtensions__GetStringProperty_3f67f30
                       ((Photon_Realtime_RoomInfo_o *)pPVar9,
                        (System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    pSVar8 = System_String__Concat_3ae5ba0("Room name: ",pSVar8,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar2,__this_07,pSVar8,0,3,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).DoublePanelLeft;
    pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar9 == (Photon_Realtime_Room_o *)0x0) goto label_043da80d;
    iVar15 = (pPVar9->fields).maxPlayers;
    pSVar8 = System_Int32__ToString((int32_t)&stack0xffffffffffffff5c,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_3ae5ba0("Max players: ",pSVar8,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar2,__this_07,pSVar8,0,3,(MethodInfo *)0x0);
  }
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
  pUVar11 = (UI_ScoreboardInfoPanel_o *)(__this->fields).DoublePanelLeft;
  pMVar12 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDefaultLabel
            ((UnityEngine_Transform_o *)pUVar11,__this_07,"Titans",1,3,(MethodInfo *)0x0);
  if (pIVar13[5].klass != (Il2CppClass *)0x0) {
    UI_ScoreboardInfoPanel__CreateLabels
              (pUVar11,__this_07,(__this->fields).DoublePanelLeft,"Titans",
               (System_Collections_Specialized_OrderedDictionary_o *)((pIVar13[5].klass)->_1).name,pMVar12);
    pMVar12 = (MethodInfo *)0x0;
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).DoublePanelRight,__this_07,"Mode",1,3,(MethodInfo *)0x0);
    if (pIVar13[4].klass != (Il2CppClass *)0x0) {
      UI_ScoreboardInfoPanel__CreateLabels_42da980
                (__this,__this_07,(__this->fields).DoublePanelRight,"Mode",
                 ((pIVar13[4].klass)->_1).byval_arg.data,pMVar12);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel
                ((__this->fields).DoublePanelRight,__this_07,"Addons",1,3,(MethodInfo *)0x0);
      if (((pIVar13[3].monitor != (void *)0x0) &&
          (lVar3 = *(long *)((long)pIVar13[3].monitor + 0x48), lVar3 != 0)) &&
         (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
         __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        in_stack_ffffffffffffff60 = __this_07;
        pUStack_90 = (UI_BasePanel_o *)__this;
        if ((__this_00->fields)._size == 0) {
          UI_ElementFactory__CreateDefaultLabel
                    ((__this->fields).DoublePanelRight,__this_07,"None",0,3,(MethodInfo *)0x0);
          pvVar4 = pIVar13[4].monitor;
        }
        else {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,__this_00,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
          pSStack_58 = pSStack_38;
          _Stack_68 = _Stack_48;
          uStack_60 = uStack_40;
          while (__this_01.fields._list._4_4_ = iVar15,
                __this_01.fields._list._0_4_ = in_stack_ffffffffffffff58,
                __this_01.fields._8_8_ = in_stack_ffffffffffffff60,
                __this_01.fields._current = in_stack_ffffffffffffff68,
                bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_01,(MethodInfo_321A1D0 *)&_Stack_68), (char)bVar6 != '\0') {
            if (pSStack_58 == (System_String_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              __this_07 = in_stack_ffffffffffffff60;
              pIVar13 = in_stack_ffffffffffffff68;
              goto label_043da803;
            }
            UI_ElementFactory__CreateDefaultLabel
                      ((__this->fields).DoublePanelRight,__this_07,(System_String_o *)pSStack_58[1].klass,0,3,
                       (MethodInfo *)0x0);
          }
          __this_02.fields._list._4_4_ = iVar15;
          __this_02.fields._list._0_4_ = in_stack_ffffffffffffff58;
          __this_02.fields._8_8_ = in_stack_ffffffffffffff60;
          __this_02.fields._current = in_stack_ffffffffffffff68;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&_Stack_68);
          pvVar4 = pIVar13[4].monitor;
        }
        if ((pvVar4 != (void *)0x0) &&
           (*(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar4 + 0x20) !=
            (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          iVar7 = System_Collections_Generic_Dictionary_object__object___get_Count
                            (*(System_Collections_Generic_Dictionary_object__object__o **)
                              ((long)pvVar4 + 0x20),MethodInfo_Int32_get_Count);
          if (iVar7 < 1) goto label_043da798;
          if (((pIVar13[4].monitor != (void *)0x0) &&
              (pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         ((long)pIVar13[4].monitor + 0x20),
              pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
             (__this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar5,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic)
             , in_stack_ffffffffffffff68 = pIVar13,
             __this_08 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       &_Stack_48,__this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
            pSStack_78 = pSStack_38;
            _Stack_88 = _Stack_48;
            uStack_80 = uStack_40;
            __this_07 = in_stack_ffffffffffffff60;
            while( true ) {
              __this_03.fields._dictionary._4_4_ = iVar15;
              __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff58;
              __this_03.fields._8_8_ = __this_07;
              __this_03.fields._currentKey = pIVar13;
              bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                (__this_03,(MethodInfo_3251B20 *)&_Stack_88);
              pSVar8 = pSStack_78;
              if ((char)bVar6 == '\0') {
                __this_04.fields._dictionary._4_4_ = iVar15;
                __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff58;
                __this_04.fields._8_8_ = __this_07;
                __this_04.fields._currentKey = pIVar13;
                in_stack_ffffffffffffff60 = __this_07;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (__this_04,(MethodInfo_3251B10 *)&_Stack_88);
                in_stack_ffffffffffffff68 = pIVar13;
                goto label_043da798;
              }
              pMVar12 = (MethodInfo *)0x0;
              UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).DoublePanelRight,__this_07,pSStack_78,1,3,(MethodInfo *)0x0);
              if (pIVar13[4].monitor == (void *)0x0) break;
              pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        ((long)pIVar13[4].monitor + 0x20);
              if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043da808;
              pUVar2 = (__this->fields).DoublePanelRight;
              settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar5,(Il2CppObject *)pSVar8,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              UI_ScoreboardInfoPanel__CreateLabels_42da980
                        (__this,__this_07,pUVar2,"Addon",settings,pMVar12);
            }
label_043da803:
            il2cpp_runtime_helper_022b2c90();
label_043da808:
            il2cpp_runtime_helper_022b2c90();
            in_stack_ffffffffffffff60 = __this_07;
            in_stack_ffffffffffffff68 = pIVar13;
          }
        }
      }
    }
  }
label_043da80d:
  do {
    pIVar13 = in_stack_ffffffffffffff68;
    __this_07 = in_stack_ffffffffffffff60;
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
label_043da91b:
      __this_06.fields._dictionary._4_4_ = iVar15;
      __this_06.fields._dictionary._0_4_ = in_stack_ffffffffffffff58;
      __this_06.fields._8_8_ = __this_07;
      __this_06.fields._currentKey = pIVar13;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_06,(MethodInfo_3251B10 *)&_Stack_88);
      _Unwind_Resume(auVar14._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar3 = *plVar10;
    __cxa_end_catch();
    __this_05.fields._dictionary._4_4_ = iVar15;
    __this_05.fields._dictionary._0_4_ = in_stack_ffffffffffffff58;
    __this_05.fields._8_8_ = __this_07;
    __this_05.fields._currentKey = pIVar13;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&_Stack_88);
    in_stack_ffffffffffffff60 = __this_07;
    in_stack_ffffffffffffff68 = pIVar13;
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_043da91b;
    }
label_043da798:
    UI_BasePanel__CreateHorizontalDivider
              (pUStack_90,(pUStack_90->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
    pUVar11 = (UI_ScoreboardInfoPanel_o *)(pUStack_90->fields).DoublePanelRight;
    pMVar12 = (MethodInfo *)0x0;
    UI_ElementFactory__CreateDefaultLabel
              ((UnityEngine_Transform_o *)pUVar11,__this_07,"Misc",1,3,(MethodInfo *)0x0);
    if (pIVar13[5].monitor != (void *)0x0) {
      UI_ScoreboardInfoPanel__CreateLabels
                (pUVar11,__this_07,(pUStack_90->fields).DoublePanelRight,"Misc",
                 *(System_Collections_Specialized_OrderedDictionary_o **)((long)pIVar13[5].monitor + 0x10),
                 pMVar12);
      return;
    }
  } while( true );
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, System_Collections_Specialized_OrderedDictionary_o* settings, const MethodInfo* method);
// 0x43dabd0

void UI_ScoreboardInfoPanel__CreateLabels
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *category,System_Collections_Specialized_OrderedDictionary_o *settings,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_RuntimeTypeHandle_o handle;
  char cVar7;
  bool_conflict bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  Il2CppObject *item;
  long *left;
  System_Type_o *right;
  System_String_o *str0;
  long lVar13;
  System_String_o *unaff_R13;
  Il2CppObject *unaff_R15;
  undefined1 auVar14 [12];
  long *in_stack_ffffffffffffff78;
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
  if (g_data_057ae478 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeRef_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameDifficulty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PVPMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"RoomName");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"PrevGameMode");
    il2cpp_runtime_helper_023445d0(&"Difficulty");
    il2cpp_runtime_helper_023445d0(&"Allow ahss");
    il2cpp_runtime_helper_023445d0(&"ClearKDROnRestart");
    il2cpp_runtime_helper_023445d0(&"PVP");
    il2cpp_runtime_helper_023445d0(&"MaxPlayers");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"Thunderspear PVP");
    il2cpp_runtime_helper_023445d0(&"AllowAHSS");
    il2cpp_runtime_helper_023445d0(&"Tooltip");
    il2cpp_runtime_helper_023445d0(&"Misc");
    il2cpp_runtime_helper_023445d0(&"Allow apg");
    il2cpp_runtime_helper_023445d0(&"APG PVP");
    il2cpp_runtime_helper_023445d0(&"APGPVP");
    il2cpp_runtime_helper_023445d0(&"Clear KDR on restart");
    il2cpp_runtime_helper_023445d0(&"ThunderspearPVP");
    il2cpp_runtime_helper_023445d0(&"AllowAPG");
    il2cpp_runtime_helper_023445d0(&"Game mode");
    il2cpp_runtime_helper_023445d0(&"Mode");
    g_data_057ae478 = '\x01';
  }
  local_58 = (System_Enum_c *)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  local_48 = (InvokerMethod)0x0;
  bVar8 = System_String__op_Equality(category,"Mode",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (settings != (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_043daeb1;
  }
  else {
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) &&
       (settings != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
      System_Collections_Specialized_OrderedDictionary__Insert
                (settings,0,"Game mode",*(Il2CppObject **)(lVar5 + 0x30),(MethodInfo *)0x0);
label_043daeb1:
      plVar9 = (long *)(*(settings->klass->vtable)._23_GetEnumerator.methodPtr)
                                 (settings,(settings->klass->vtable)._23_GetEnumerator.method);
      in_stack_ffffffffffffff78 = plVar9;
      if (plVar9 == (long *)0x0) goto label_043db815;
label_043daee0:
      left = &TypeInfo_IEnumerator;
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar13) * 0x10 + lVar5 + 0x138);
            goto label_043daf33;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar13);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,0);
label_043daf33:
      cVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (cVar7 == '\0') {
        unaff_R15 = (Il2CppObject *)0x0;
        goto label_043db702;
      }
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar13) + 1) * 0x10 + lVar5 + 0x138);
            goto label_043dafb8;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar13);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,1);
label_043dafb8:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
label_043db7c7:
        plVar11 = (long *)il2cpp_runtime_helper_022b2c90();
        plVar9 = in_stack_ffffffffffffff78;
label_043db7cc:
        il2cpp_runtime_helper_022b2fd0(plVar11);
label_043db7d4:
        il2cpp_runtime_helper_022b2c90();
label_043db7d9:
        il2cpp_runtime_helper_022b2fd0(unaff_R15);
        il2cpp_runtime_helper_022fefe0(left);
        in_stack_ffffffffffffff78 = plVar9;
label_043db7e9:
        il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_043db7f1:
        il2cpp_runtime_helper_022b2c90();
        plVar9 = in_stack_ffffffffffffff78;
label_043db7f6:
        il2cpp_runtime_helper_022b2c90();
label_043db7fb:
        il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_043db803:
        il2cpp_runtime_helper_022b2fd0(unaff_R15);
        in_stack_ffffffffffffff78 = plVar9;
      }
      else {
        plVar9 = in_stack_ffffffffffffff78;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) goto label_043db7cc;
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar11);
        unaff_R13 = (System_String_o *)*puVar10;
        unaff_R15 = (Il2CppObject *)puVar10[1];
        if (unaff_R15 != (Il2CppObject *)0x0) {
          bVar2 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if ((bVar2 <= (unaff_R15->klass->_2).naturalAligment) &&
             ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseSetting)) goto label_043db02b;
label_043db7bf:
          il2cpp_runtime_helper_022b2fd0(unaff_R15);
          goto label_043db7c7;
        }
label_043db02b:
        if ((unaff_R13 != (System_String_o *)0x0) && (unaff_R13->klass != g_data_057b9c00)) goto label_043db7e9;
        plVar9 = in_stack_ffffffffffffff78;
        if (unaff_R15 == (Il2CppObject *)0x0) goto label_043db7d4;
        pSVar12 = (System_String_o *)
                  (*unaff_R15->klass->vtable[3].methodPtr)(unaff_R15,unaff_R15->klass->vtable[3].method);
        plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R15);
        if (plVar9 != (long *)0x0) {
          __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
          lVar5 = *plVar9;
          if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar13) == TypeInfo_IListSetting) {
                puVar10 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar13) + 2) * 0x10 + lVar5 + 0x138);
                goto label_043db109;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar13);
          }
          puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IListSetting,2);
label_043db109:
          __this_04 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_043db7f1;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_04,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
          local_48 = (InvokerMethod)CONCAT44(uStack_5c,local_60);
          local_58 = (System_Enum_c *)local_70;
          pIStack_50 = pIStack_68;
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_00.fields._8_8_ = category;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
            __this_00.fields._current._0_4_ = in_stack_ffffffffffffff88;
            __this_00.fields._current._4_4_ = in_stack_ffffffffffffff8c;
            bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&local_58);
            if ((char)bVar8 != '\0') {
              if (local_48 == (InvokerMethod)0x0) {
label_043db69b:
                il2cpp_runtime_helper_022b2c90();
                goto label_043db7bf;
              }
              (**(code **)(*(long *)local_48 + 0x168))(local_48,*(undefined8 *)(*(long *)local_48 + 0x170));
              il2cpp_runtime_helper_022b2c90();
              goto label_043db810;
            }
          }
          else {
            while (__this_01.fields._8_8_ = category,
                  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
                  __this_01.fields._current._0_4_ = in_stack_ffffffffffffff88,
                  __this_01.fields._current._4_4_ = in_stack_ffffffffffffff8c,
                  bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_01,(MethodInfo_321A1D0 *)&local_58), (char)bVar8 != '\0') {
              if (local_48 == (InvokerMethod)0x0) goto label_043db69b;
              item = (Il2CppObject *)
                     (**(code **)(*(long *)local_48 + 0x168))
                               (local_48,*(undefined8 *)(*(long *)local_48 + 0x170));
              lVar5 = MethodInfo_Void_Add;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (__this_03->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_043db7bf;
              }
              uVar3 = (__this_03->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (__this_03->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = item;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_03,item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          __this_02.fields._8_8_ = category;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
          __this_02.fields._current._0_4_ = in_stack_ffffffffffffff88;
          __this_02.fields._current._4_4_ = in_stack_ffffffffffffff8c;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&local_58);
          plVar9 = in_stack_ffffffffffffff78;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar12 = "None";
            if (0 < (__this_03->fields)._size) {
              pSVar12 = System_String__Join_3af7e00
                                  (", ",(System_Collections_Generic_IEnumerable_string__o *)__this_03,
                                   (MethodInfo *)0x0);
            }
            goto label_043db28a;
          }
          goto label_043db7f6;
        }
label_043db28a:
        left = (long *)System_Object__GetType(unaff_R15,(MethodInfo *)0x0);
        handle = TypeRef_FloatSetting;
        plVar9 = in_stack_ffffffffffffff78;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          plVar9 = in_stack_ffffffffffffff78;
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar8 = System_Type__op_Equality((System_Type_o *)left,right,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar2 <= (unaff_R15->klass->_2).naturalAligment) &&
             ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
            in_stack_ffffffffffffff8c = *(float *)((long)&unaff_R15[1].klass + 4);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = Utility_Util__FormatFloat(in_stack_ffffffffffffff8c,2,(MethodInfo *)0x0);
            goto label_043db343;
          }
          goto label_043db7d9;
        }
label_043db343:
        bVar8 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          bVar8 = System_String__op_Equality(unaff_R13,"Difficulty",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') goto label_043db4b0;
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((unaff_R15->klass->_2).naturalAligment < bVar2) ||
             ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) goto label_043db7fb;
          local_60 = *(undefined4 *)((long)&unaff_R15[1].klass + 4);
          local_70 = (undefined1  [8])TypeInfo_GameDifficulty;
          pIStack_68 = (Il2CppMethodPointer)0xffffffffffffffff;
          pSVar12 = System_Enum__ToString((System_Enum_o *)local_70,(MethodInfo *)0x0);
label_043db478:
          iVar4 = *(int *)(TypeInfo_Util + 0xe4);
          in_stack_ffffffffffffff78 = plVar9;
          goto joined_r0x043db497;
        }
        bVar8 = System_String__op_Equality(category,"Misc",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          bVar8 = System_String__op_Equality(unaff_R13,"PVP",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            bVar8 = System_String__op_Equality(unaff_R13,"ClearKDROnRestart",(MethodInfo *)0x0);
            in_stack_ffffffffffffff78 = plVar9;
            if ((char)bVar8 == '\0') {
              bVar8 = System_String__op_Equality(unaff_R13,"ThunderspearPVP",(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                bVar8 = System_String__op_Equality(unaff_R13,"APGPVP",(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  bVar8 = System_String__op_Equality(unaff_R13,"AllowAHSS",(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    bVar8 = System_String__op_Equality(unaff_R13,"AllowAPG",(MethodInfo *)0x0);
                    if ((char)bVar8 == '\0') goto label_043db640;
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
            unaff_R13 = (System_String_o *)*puVar10;
            goto label_043db640;
          }
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar2 <= (unaff_R15->klass->_2).naturalAligment) &&
             ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
            local_60 = *(undefined4 *)((long)&unaff_R15[1].klass + 4);
            local_70 = (undefined1  [8])TypeInfo_PVPMode;
            pIStack_68 = (Il2CppMethodPointer)0xffffffffffffffff;
            pSVar12 = System_Enum__ToString((System_Enum_o *)local_70,(MethodInfo *)0x0);
            goto label_043db478;
          }
          goto label_043db803;
        }
        bVar8 = System_String__op_Equality(category,"Mode",(MethodInfo *)0x0);
        in_stack_ffffffffffffff78 = plVar9;
        if ((char)bVar8 == '\0') goto label_043db640;
        if (unaff_R13 != (System_String_o *)0x0) {
          bVar8 = System_String__EndsWith(unaff_R13,"Tooltip",(MethodInfo *)0x0);
          cVar7 = (char)bVar8;
          goto label_043db576;
        }
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_043db810:
  il2cpp_runtime_helper_022b2c90();
label_043db815:
  il2cpp_runtime_helper_022b2c90();
  plVar9 = in_stack_ffffffffffffff78;
  while( true ) {
    auVar14 = il2cpp_runtime_helper_022fefe0(unaff_R15);
    if (auVar14._8_4_ != 1) break;
    in_stack_ffffffffffffff78 = plVar9;
    puVar10 = (undefined8 *)__cxa_begin_catch(auVar14._0_8_);
    unaff_R15 = (Il2CppObject *)*puVar10;
    __cxa_end_catch();
label_043db702:
    plVar9 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_IDisposable);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
            goto label_043db76d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar13);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_043db76d:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
    plVar9 = in_stack_ffffffffffffff78;
    if (unaff_R15 == (Il2CppObject *)0x0) {
      return;
    }
  }
  plVar9 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_IDisposable);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
          goto label_043db96d;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar13);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_043db96d:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  _Unwind_Resume(auVar14._0_8_);
label_043db4b0:
  bVar8 = System_String__op_Equality(unaff_R13,"Password",(MethodInfo *)0x0);
  in_stack_ffffffffffffff78 = plVar9;
  if ((((char)bVar8 == '\0') &&
      (bVar8 = System_String__op_Equality(unaff_R13,"PrevGameMode",(MethodInfo *)0x0), (char)bVar8 == '\0')) &&
     (bVar8 = System_String__op_Equality(unaff_R13,"RoomName",(MethodInfo *)0x0), (char)bVar8 == '\0')) {
    bVar8 = System_String__op_Equality(unaff_R13,"MaxPlayers",(MethodInfo *)0x0);
    cVar7 = (char)bVar8;
label_043db576:
    if (cVar7 == '\0') {
label_043db640:
      iVar4 = *(int *)(TypeInfo_Util + 0xe4);
joined_r0x043db497:
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = Utility_Util__PascalToSentence(unaff_R13,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_3af7150(str0,": ",pSVar12,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel
                ((UnityEngine_Transform_o *)local_38,local_40,pSVar12,0,3,(MethodInfo *)0x0);
    }
  }
  goto label_043daee0;
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, Settings_BaseSettingsContainer_o* container, const MethodInfo* method);
// 0x43da960

void UI_ScoreboardInfoPanel__CreateLabels_42da960
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *category,Settings_BaseSettingsContainer_o *container,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *value;
  long *plVar3;
  UnityEngine_Transform_o *extraout_RDX;
  UI_ScoreboardInfoPanel_o *pUVar4;
  UI_ScoreboardInfoPanel_o *__this_07;
  undefined1 auVar5 [12];
  UI_ScoreboardInfoPanel_c *pUVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *key;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSStack_50;
  UnityEngine_Transform_o *pUStack_48;
  System_String_o *pSStack_40;
  
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    UI_ScoreboardInfoPanel__CreateLabels(__this,style,panel,category,(container->fields).Settings,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UI_ScoreboardInfoPanel_o *)&stack0xffffffffffffff90;
  __this_07 = (UI_ScoreboardInfoPanel_o *)&stack0xffffffffffffff90;
  if (g_data_057ae479 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OrderedDictionary);
    g_data_057ae479 = '\x01';
  }
  pUVar6 = (UI_ScoreboardInfoPanel_c *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  __this_05 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_05,(MethodInfo *)0x0);
  if (((System_Collections_Generic_Dictionary_object__object__o *)container !=
       (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)container,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set
                            ),
     __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff90,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)style;
    pUStack_48 = extraout_RDX;
    pSStack_40 = category;
    if (__this_05 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
      __this_01.fields._currentKey = key;
      bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff90);
      if ((char)bVar2 != '\0') goto label_043dab18;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar7,
            __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6,
            __this_00.fields._currentKey = key,
            bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff90), (char)bVar2 != '\0')
      {
        pIVar8 = key;
        value = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)container,key,
                           MethodInfo_BaseSetting_get_Item);
        System_Collections_Specialized_OrderedDictionary__Add(__this_05,key,value,(MethodInfo *)0x0);
        key = pIVar8;
      }
    }
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff90);
    __this_07 = pUVar4;
label_043daaed:
    UI_ScoreboardInfoPanel__CreateLabels
              (__this_07,(UI_ElementStyle_o *)pSStack_50,pUStack_48,pSStack_40,__this_05,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_043dab18:
  System_Collections_Generic_Dictionary_object__object___get_Item
            ((System_Collections_Generic_Dictionary_object__object__o *)container,key,MethodInfo_BaseSetting_get_Item);
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
    __this_03.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff90);
    if (lVar1 == 0) goto label_043daaed;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
  __this_04.fields._currentKey = key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x43da980

void UI_ScoreboardInfoPanel__CreateLabels_42da980
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *category,
               System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *value;
  long *plVar3;
  UI_ScoreboardInfoPanel_o *pUVar4;
  UI_ScoreboardInfoPanel_o *__this_07;
  undefined1 auVar5 [12];
  UI_ScoreboardInfoPanel_c *pUVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *key;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *local_48;
  UnityEngine_Transform_o *local_40;
  System_String_o *local_38;
  
  pUVar4 = (UI_ScoreboardInfoPanel_o *)&stack0xffffffffffffff98;
  __this_07 = (UI_ScoreboardInfoPanel_o *)&stack0xffffffffffffff98;
  if (g_data_057ae479 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OrderedDictionary);
    g_data_057ae479 = '\x01';
  }
  pUVar6 = (UI_ScoreboardInfoPanel_c *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  __this_05 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_05,(MethodInfo *)0x0);
  if ((settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) &&
     (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)settings,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set)
     , __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff98,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    local_48 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)style;
    local_40 = panel;
    local_38 = category;
    if (__this_05 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
      __this_01.fields._currentKey = key;
      bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
      if ((char)bVar2 != '\0') goto label_043dab18;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar7,
            __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6,
            __this_00.fields._currentKey = key,
            bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98), (char)bVar2 != '\0')
      {
        pIVar8 = key;
        value = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)settings,key,
                           MethodInfo_BaseSetting_get_Item);
        System_Collections_Specialized_OrderedDictionary__Add(__this_05,key,value,(MethodInfo *)0x0);
        key = pIVar8;
      }
    }
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    __this_07 = pUVar4;
label_043daaed:
    UI_ScoreboardInfoPanel__CreateLabels
              (__this_07,(UI_ElementStyle_o *)local_48,local_40,local_38,__this_05,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_043dab18:
  System_Collections_Generic_Dictionary_object__object___get_Item
            ((System_Collections_Generic_Dictionary_object__object__o *)settings,key,MethodInfo_BaseSetting_get_Item);
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
    __this_03.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) goto label_043daaed;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar6;
  __this_04.fields._currentKey = key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.ScoreboardInfoPanel$$.ctor
// il2cpp: void UI_ScoreboardInfoPanel___ctor (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x43db9d0

void UI_ScoreboardInfoPanel___ctor(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


