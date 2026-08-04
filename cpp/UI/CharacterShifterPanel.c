// Type: UI.CharacterShifterPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterShifterPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterShifterPanel.cs
// --------------------------------

// UI.CharacterShifterPanel$$Setup
// il2cpp: void UI_CharacterShifterPanel__Setup (UI_CharacterShifterPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43a5010

void UI_CharacterShifterPanel__Setup
               (UI_CharacterShifterPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  Settings_TypedSetting_T__o *pSVar5;
  long lVar6;
  long lVar7;
  Settings_BaseSetting_o *pSVar8;
  UnityEngine_Transform_o *parent_00;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  UI_CharacterShifterPanel_o *__this_00;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  UI_CharacterShifterPanel_o *__this_01;
  System_Nullable_float__Fields SStack_60;
  long lStack_58;
  UI_ElementStyle_o *pUStack_50;
  UI_CharacterShifterPanel_o *pUStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (g_data_057ae330 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae330 = '\x01';
  }
  __this_01 = __this;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar4 != 0)) {
    pSStack_38 = "CharacterPopup";
    pSStack_40 = "General";
    lVar3 = *(long *)(lVar3 + 0x58);
    pSVar5 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x28);
    __this_01 = TypeInfo_PlayerCharacter;
    if (*(int *)((long)&TypeInfo_PlayerCharacter[2].fields.m_CachedPtr + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar5 != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                (pSVar5,&(((TypeInfo_PlayerCharacter[1].fields._categoryPanelTypes)->fields)._buckets)->obj,MethodInfo_Void_set_Value);
      pSVar10 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUStack_50 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(pUStack_50,0x18,200.0,20.0,pSVar10,(MethodInfo *)0x0);
      __this_00 = (UI_CharacterShifterPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      __this_01 = __this_00;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
      pIVar11 = "Annie";
      lVar7 = MethodInfo_Void_Add;
      if (__this_00 != (UI_CharacterShifterPanel_o *)0x0) {
        piVar1 = (int *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        lVar6 = (__this_00->fields).m_CachedPtr;
        if (lVar6 != 0) {
          uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
            __this_01 = (UI_CharacterShifterPanel_o *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
            *(Il2CppObject **)(lVar6 + 0x20 + (long)(int)uVar2 * 8) = pIVar11;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            __this_01 = __this_00;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,pIVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          pIVar11 = "Eren";
          lVar6 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar7 = (__this_00->fields).m_CachedPtr;
          if (lVar7 != 0) {
            uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
              __this_01 = (UI_CharacterShifterPanel_o *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              *(Il2CppObject **)(lVar7 + 0x20 + (long)(int)uVar2 * 8) = pIVar11;
              il2cpp_runtime_helper_022b4080();
              lVar7 = *(long *)(lVar4 + 0x30);
            }
            else {
              __this_01 = __this_00;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,pIVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              lVar7 = *(long *)(lVar4 + 0x30);
            }
            lStack_58 = lVar4;
            if (lVar7 != 0) {
              pUStack_48 = __this;
              bVar9 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 *(Il2CppObject **)(lVar7 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar9 == '\0') {
                pSVar5 = *(Settings_TypedSetting_T__o **)(lStack_58 + 0x30);
                __this_01 = __this_00;
                pIVar11 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
                if (pSVar5 == (Settings_TypedSetting_T__o *)0x0) goto label_043a55cd;
                Settings_TypedSetting_object___set_Value(pSVar5,pIVar11,MethodInfo_Void_set_Value);
              }
              __this_01 = (UI_CharacterShifterPanel_o *)(pUStack_48->fields).DoublePanelLeft;
              pSVar8 = *(Settings_BaseSetting_o **)(lStack_58 + 0x30);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar10 = UI_UIManager__GetLocale
                                  (pSStack_38,pSStack_40,"Character","","",
                                   (MethodInfo *)0x0);
              pSVar12 = (System_String_array *)
                        System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_String_ToArray);
              SStack_60.hasValue = 0;
              SStack_60.value = 0.0;
              System_Nullable_float____ctor((System_Nullable_float__o)&SStack_60,180.0,MethodInfo_Nullable_1_Single);
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)__this_01,pUStack_50,pSVar8,pSVar10,pSVar12,"",
                         180.0,40.0,300.0,(System_Nullable_float__o)SStack_60,
                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
                if (*(int *)(lVar3 + 0x14) != 2) {
                  return;
                }
                parent_00 = (pUStack_48->fields).DoublePanelRight;
                pSVar8 = *(Settings_BaseSetting_o **)(lStack_58 + 0x50);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar10 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
                pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
                if (*(int *)((long)&TypeInfo_TeamInfo[2].fields.m_CachedPtr + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_01 = TypeInfo_TeamInfo;
                if (pSVar12 != (System_String_array *)0x0) {
                  if ((int)pSVar12->max_length != 0) {
                    __this_01 = (UI_CharacterShifterPanel_o *)pSVar12->m_Items;
                    pSVar12->m_Items[0] =
                         (System_String_o *)(TypeInfo_TeamInfo[1].fields._categoryPanelTypes)->klass;
                    il2cpp_runtime_helper_022b4080();
                    if (1 < (uint)pSVar12->max_length) {
                      pSVar12->m_Items[1] = (TypeInfo_TeamInfo[1].fields._categoryPanelTypes)->monitor;
                      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
                      SStack_60.hasValue = 0;
                      SStack_60.value = 0.0;
                      System_Nullable_float____ctor((System_Nullable_float__o)&SStack_60,180.0,MethodInfo_Nullable_1_Single);
                      UI_ElementFactory__CreateDropdownSetting
                                (parent_00,pUStack_50,pSVar8,pSVar10,pSVar12,"",180.0,40.0,300.0,
                                 (System_Nullable_float__o)SStack_60,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                  goto label_043a55d2;
                }
              }
            }
          }
        }
      }
    }
  }
label_043a55cd:
  il2cpp_runtime_helper_022b2c90();
label_043a55d2:
  il2cpp_runtime_helper_022b2ca0();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CharacterShifterPanel$$.ctor
// il2cpp: void UI_CharacterShifterPanel___ctor (UI_CharacterShifterPanel_o* __this, const MethodInfo* method);
// 0x43a55e0

void UI_CharacterShifterPanel___ctor(UI_CharacterShifterPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


