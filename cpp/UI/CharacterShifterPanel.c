// Type: UI.CharacterShifterPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterShifterPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterShifterPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterShifterPanel$$Setup
// il2cpp: void UI_CharacterShifterPanel__Setup (UI_CharacterShifterPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4096d20

void UI_CharacterShifterPanel__Setup
               (UI_CharacterShifterPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  Settings_TypedSetting_T__o *pSVar5;
  System_Object_array *pSVar6;
  long lVar7;
  UnityEngine_Transform_o *pUVar8;
  Settings_BaseSetting_o *pSVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar12;
  System_String_array *pSVar13;
  System_Nullable_float__Fields SStack_60;
  long lStack_58;
  UI_ElementStyle_o *pUStack_50;
  UI_CharacterShifterPanel_o *pUStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (DAT_057045b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"CharacterPopup");
    il2cpp_init_method_metadata(&"");
    DAT_057045b4 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar4 != 0)) {
    pSStack_38 = "CharacterPopup";
    pSStack_40 = "General";
    lVar3 = *(long *)(lVar3 + 0x58);
    pSVar5 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x28);
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar5 != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                (pSVar5,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),MethodInfo_Void_set_Value);
      pSVar11 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUStack_50 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(pUStack_50,0x18,200.0,20.0,pSVar11,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
      pIVar12 = "Annie";
      lVar7 = MethodInfo_Void_Add;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_00->fields)._items;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = pIVar12;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,pIVar12,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          pIVar12 = "Eren";
          lVar7 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_00->fields)._items;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = pIVar12;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2);
              lVar7 = *(long *)(lVar4 + 0x30);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,pIVar12,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
              lVar7 = *(long *)(lVar4 + 0x30);
            }
            lStack_58 = lVar4;
            if (lVar7 != 0) {
              pUStack_48 = __this;
              bVar10 = System_Collections_Generic_List<object>__Contains
                                 (__this_00,*(Il2CppObject **)(lVar7 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar10 == '\0') {
                pSVar5 = *(Settings_TypedSetting_T__o **)(lStack_58 + 0x30);
                pIVar12 = System_Collections_Generic_List<object>__get_Item
                                    (__this_00,0,MethodInfo_String_get_Item);
                if (pSVar5 == (Settings_TypedSetting_T__o *)0x0) goto LAB_040972dd;
                Settings_TypedSetting<object>__set_Value(pSVar5,pIVar12,MethodInfo_Void_set_Value);
              }
              pUVar8 = (pUStack_48->fields).DoublePanelLeft;
              pSVar9 = *(Settings_BaseSetting_o **)(lStack_58 + 0x30);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = UI_UIManager__GetLocale
                                  (pSStack_38,pSStack_40,"Character","","",
                                   (MethodInfo *)0x0);
              pSVar13 = (System_String_array *)
                        System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
              SStack_60.hasValue = 0;
              SStack_60.value = 0.0;
              System_Nullable<float>___ctor((System_Nullable_float__o)&SStack_60,180.0,MethodInfo_Nullable_1_Single)
              ;
              UI_ElementFactory__CreateDropdownSetting
                        (pUVar8,pUStack_50,pSVar9,pSVar11,pSVar13,"",180.0,40.0,300.0,
                         (System_Nullable_float__o)SStack_60,(UnityEngine_Events_UnityAction_o *)0x0
                         ,(MethodInfo *)0x0);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
                if (*(int *)(lVar3 + 0x14) != 2) {
                  return;
                }
                pUVar8 = (pUStack_48->fields).DoublePanelRight;
                pSVar9 = *(Settings_BaseSetting_o **)(lStack_58 + 0x50);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar11 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
                pSVar13 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (pSVar13 != (System_String_array *)0x0) {
                  if ((int)pSVar13->max_length != 0) {
                    pSVar13->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
                    il2cpp_runtime_glue(pSVar13->m_Items);
                    if (1 < (uint)pSVar13->max_length) {
                      pSVar13->m_Items[1] =
                           *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
                      il2cpp_runtime_glue(pSVar13->m_Items + 1);
                      SStack_60.hasValue = 0;
                      SStack_60.value = 0.0;
                      System_Nullable<float>___ctor
                                ((System_Nullable_float__o)&SStack_60,180.0,MethodInfo_Nullable_1_Single);
                      UI_ElementFactory__CreateDropdownSetting
                                (pUVar8,pUStack_50,pSVar9,pSVar11,pSVar13,"",180.0,40.0,
                                 300.0,(System_Nullable_float__o)SStack_60,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040972dd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterShifterPanel$$.ctor
// il2cpp: void UI_CharacterShifterPanel___ctor (UI_CharacterShifterPanel_o* __this, const MethodInfo* method);
// 0x40972f0

void UI_CharacterShifterPanel___ctor(UI_CharacterShifterPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


