// Type: UI.EditProfileEmotePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EditProfileEmotePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/EditProfileEmotePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.EditProfileEmotePanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileEmotePanel__get_ScrollBar (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x40e7100

bool_conflict
UI_EditProfileEmotePanel__get_ScrollBar(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileEmotePanel$$get_VerticalSpacing
// il2cpp: float UI_EditProfileEmotePanel__get_VerticalSpacing (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x40e7110

float UI_EditProfileEmotePanel__get_VerticalSpacing
                (UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.EditProfileEmotePanel$$Setup
// il2cpp: void UI_EditProfileEmotePanel__Setup (UI_EditProfileEmotePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40e7120

void UI_EditProfileEmotePanel__Setup
               (UI_EditProfileEmotePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  UI_EditProfileEmotePanel_o *__this_00;
  System_String_o *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  MethodInfo *method_00;
  int iVar5;
  MethodInfo *method_01;
  UnityEngine_Transform_o *pUVar6;
  int iStack_54;
  UI_EditProfileEmotePanel_o *pUStack_50;
  long lStack_48;
  System_String_array *pSStack_40;
  System_String_array *pSStack_38;
  
  if (DAT_057047ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Emoji");
    il2cpp_init_method_metadata(&"");
    DAT_057047ca = '\x01';
  }
  iStack_54 = 0;
  iVar5 = 0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_EditProfileEmotePanel_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  method_01 = (MethodInfo *)0x18;
  pUStack_50 = __this_00;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,100.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSStack_38 = UI_EditProfileEmotePanel__GetAvailableEmotes(__this_00,method_01);
  pSStack_40 = UI_EditProfileEmotePanel__GetEmotePaths(__this_00,pSStack_38,method_00);
  lStack_48 = lVar1;
  if (lVar1 != 0) {
    pUVar6 = (__this->fields).SinglePanel;
    do {
      if (*(Settings_ListSetting_T__o **)(lStack_48 + 0x20) == (Settings_ListSetting_T__o *)0x0)
      goto LAB_040e7450;
      pSVar4 = Settings_ListSetting<object>__GetItemAt
                         (*(Settings_ListSetting_T__o **)(lStack_48 + 0x20),iVar5,MethodInfo_BaseSetting_GetItemAt);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = UI_UIManager__GetLocaleCommon("Text",(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      iStack_54 = iVar5;
      pSVar3 = System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2," ",pSVar3,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar6,(UI_ElementStyle_o *)pUStack_50,pSVar4,pSVar2,"",260.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar6 = (__this->fields).SinglePanel;
    } while (iVar5 != 8);
    iVar5 = 0;
    UI_BasePanel__CreateHorizontalDivider((UI_BasePanel_o *)__this,pUVar6,1.0,(MethodInfo *)0x0);
    while (*(Settings_ListSetting_T__o **)(lStack_48 + 0x28) != (Settings_ListSetting_T__o *)0x0) {
      pUVar6 = (__this->fields).SinglePanel;
      pSVar4 = Settings_ListSetting<object>__GetItemAt
                         (*(Settings_ListSetting_T__o **)(lStack_48 + 0x28),iVar5,MethodInfo_BaseSetting_GetItemAt);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = UI_UIManager__GetLocaleCommon("Emoji",(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      iStack_54 = iVar5;
      pSVar3 = System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2," ",pSVar3,(MethodInfo *)0x0);
      lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar1 == 0) break;
      UI_ElementFactory__CreateIconPickSetting
                (pUVar6,(UI_ElementStyle_o *)pUStack_50,pSVar4,pSVar2,pSStack_38,pSStack_40,
                 *(UI_IconPickPopup_o **)(lVar1 + 0x50),"",(System_String_array *)0x0,
                 180.0,40.0,(UnityEngine_Events_UnityAction_o *)0x0,(UI_TooltipPopup_o *)0x0,
                 (MethodInfo *)0x0);
      if (iVar5 == 8) {
        return;
      }
    }
  }
LAB_040e7450:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileEmotePanel$$GetAvailableEmotes
// il2cpp: System_String_array* UI_EditProfileEmotePanel__GetAvailableEmotes (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x40e7460

System_String_array *
UI_EditProfileEmotePanel__GetAvailableEmotes(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_06;
  System_String_array *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_057047cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Emoji");
    DAT_057047cb = '\x01';
  }
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_06,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x48);
  if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar9 = (Il2CppType *)local_48._8_8_;
    pSVar10 = local_38;
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = local_48._8_4_;
      __this_01.fields._version = local_48._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      __this_01.fields._current = (Il2CppObject *)local_38;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar9,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
            __this_00.fields._current = (Il2CppObject *)pSVar10,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            lVar5 = MethodInfo_Void_Add, (char)bVar6 != '\0') {
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_06->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_06->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_06->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar10;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_06,(Il2CppObject *)pSVar10,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar9 = (Il2CppType *)local_48._8_8_;
      pSVar10 = local_38;
      if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_04.fields._8_8_ = pIVar9,
              __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              __this_04.fields._current = (Il2CppObject *)pSVar10,
              bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              (char)bVar6 != '\0') {
          if (pSVar10 == (System_String_o *)0x0) goto LAB_040e77b5;
          bVar6 = System_String__StartsWith(pSVar10,"Emoji",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        while (pSVar10 = local_38, __this_03.fields._8_8_ = pIVar9,
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              __this_03.fields._current = (Il2CppObject *)pSVar10,
              bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              (char)bVar6 != '\0') {
          if (pSVar10 == (System_String_o *)0x0) {
LAB_040e77b5:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar11 = pSVar10;
          bVar6 = System_String__StartsWith(pSVar10,"Emoji",(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          local_38 = pSVar11;
          if ((char)bVar6 == '\0') {
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_06->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_06->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_06->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar10;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar10);
              local_38 = pSVar11;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_06,(Il2CppObject *)pSVar10,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              local_38 = pSVar11;
            }
          }
        }
      }
      __this_05.fields._8_8_ = pIVar9;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_05.fields._current = (Il2CppObject *)pSVar10;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_06,MethodInfo_String___ToArray);
        return pSVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileEmotePanel$$GetEmotePaths
// il2cpp: System_String_array* UI_EditProfileEmotePanel__GetEmotePaths (UI_EditProfileEmotePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x40e7920

System_String_array *
UI_EditProfileEmotePanel__GetEmotePaths
          (UI_EditProfileEmotePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Object_array *pSVar2;
  long lVar3;
  uint uVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_01;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  uint uVar9;
  System_String_o *str1;
  System_String_o *str0;
  
  if (DAT_057047cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Emoji");
    il2cpp_init_method_metadata(&"/Icons/Emotes/");
    il2cpp_init_method_metadata(&"_0");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"/Icons/Profile/");
    DAT_057047cc = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_01,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    uVar4 = (uint)options->max_length;
    if (0 < (int)uVar4) {
      uVar9 = 0;
LAB_040e7a49:
      do {
        if (uVar4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar7 = options->m_Items[(int)uVar9];
        if (pSVar7 == (System_String_o *)0x0) goto LAB_040e7bf4;
        bVar5 = System_String__StartsWith(pSVar7,"Emoji",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          str0 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          puVar6 = &"Icon";
          str1 = "/Icons/Profile/";
LAB_040e7b4d:
          pSVar7 = System_String__Concat
                             (str0,str1,pSVar7,(System_String_o *)*puVar6,(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
        }
        else {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                       (*(long *)(TypeInfo_UIManager + 0xb8) + 0x50);
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_040e7bf4;
          bVar5 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_00,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Contains);
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          str0 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if ((char)bVar5 != '\0') {
            puVar6 = &"_0";
            str1 = "/Icons/Emotes/";
            goto LAB_040e7b4d;
          }
          pSVar7 = System_String__Concat(str0,"/Icons/Emotes/",pSVar7,(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = lVar3;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040e7bf4;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar2 = (__this_01->fields)._items;
        if (pSVar2 == (System_Object_array *)0x0) goto LAB_040e7bf4;
        uVar4 = (__this_01->fields)._size;
        if (uVar4 < (uint)pSVar2->max_length) {
          (__this_01->fields)._size = uVar4 + 1;
          pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)pSVar7;
          il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar4,pSVar7);
          uVar9 = uVar9 + 1;
          uVar4 = (uint)options->max_length;
          if ((int)uVar4 <= (int)uVar9) break;
          goto LAB_040e7a49;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,(Il2CppObject *)pSVar7,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar9 = uVar9 + 1;
        uVar4 = (uint)options->max_length;
      } while ((int)uVar9 < (int)uVar4);
    }
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_01,MethodInfo_String___ToArray);
      return pSVar8;
    }
  }
LAB_040e7bf4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileEmotePanel$$.ctor
// il2cpp: void UI_EditProfileEmotePanel___ctor (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x40e7c00

void UI_EditProfileEmotePanel___ctor(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


