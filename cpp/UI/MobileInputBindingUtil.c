// Type: UI.MobileInputBindingUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputBindingUtil.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputBindingUtil$$GetActionGroups
// il2cpp: System_String_array* UI_MobileInputBindingUtil__GetActionGroups (const MethodInfo* method);
// 0x5c77f50

System_String_array * UI_MobileInputBindingUtil__GetActionGroups(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547951 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    Il2CppMethodInitialized_07547951 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
    pSVar2 = Settings_MobileInputBindingRegistry__GetGroups((MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Settings_MobileInputBindingRegistry__GetGroups((MethodInfo *)0x0);
  return pSVar2;
}


// UI.MobileInputBindingUtil$$GetActionGroup
// il2cpp: System_String_o* UI_MobileInputBindingUtil__GetActionGroup (System_String_o* value, const MethodInfo* method);
// 0x5c77fb0

System_String_o * UI_MobileInputBindingUtil__GetActionGroup(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  Settings_MobileInputBinding_o *local_10;
  
  if (Il2CppMethodInitialized_07547952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    Il2CppMethodInitialized_07547952 = '\x01';
  }
  local_10 = (Settings_MobileInputBinding_o *)0x0;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  bVar1 = Settings_MobileInputBindingRegistry__TryGetBinding(value,&local_10,(MethodInfo *)0x0);
  if (bVar1) {
    if (local_10 == (Settings_MobileInputBinding_o *)0x0) {
      ThrowNullReferenceException();
    }
    return (local_10->fields)._Group_k__BackingField;
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.MobileInputBindingUtil$$GetActionNamesForGroup
// il2cpp: System_String_array* UI_MobileInputBindingUtil__GetActionNamesForGroup (System_String_o* group, const MethodInfo* method);
// 0x5c78050

System_String_array *
UI_MobileInputBindingUtil__GetActionNamesForGroup(System_String_o *group,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    Il2CppMethodInitialized_07547953 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
    pSVar2 = Settings_MobileInputBindingRegistry__GetIdsForGroup(group,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Settings_MobileInputBindingRegistry__GetIdsForGroup(group,(MethodInfo *)0x0);
  return pSVar2;
}


// UI.MobileInputBindingUtil$$GetActionLabel
// il2cpp: System_String_o* UI_MobileInputBindingUtil__GetActionLabel (System_String_o* value, int32_t role, const MethodInfo* method);
// 0x5c780c0

System_String_o *
UI_MobileInputBindingUtil__GetActionLabel(System_String_o *value,int32_t role,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  Settings_MobileInputBinding_o *local_18;
  
  if (Il2CppMethodInitialized_07547954 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547954 = '\x01';
  }
  local_18 = (Settings_MobileInputBinding_o *)0x0;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  method_00 = (MethodInfo *)&local_18;
  bVar1 = Settings_MobileInputBindingRegistry__TryGetBinding(value,&local_18,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = UI_MobileInputBindingUtil__GetActionLabel_5b78190(local_18,method_00);
  }
  else {
    bVar1 = System_String__Equals_52ffe30(value,"None",4,(MethodInfo *)0x0);
    if (!bVar1) {
      return value;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
  }
  return pSVar2;
}


// UI.MobileInputBindingUtil$$GetActionLabel
// il2cpp: System_String_o* UI_MobileInputBindingUtil__GetActionLabel (Settings_MobileInputBinding_o* binding, const MethodInfo* method);
// 0x5c78190

System_String_o *
UI_MobileInputBindingUtil__GetActionLabel_5b78190(Settings_MobileInputBinding_o *binding,MethodInfo *method)

{
  bool bVar1;
  System_String_o *defaultValue;
  System_String_o *pSVar2;
  System_String_o *subCategory;
  MethodInfo *pMVar3;
  System_String_o *category;
  
  if (Il2CppMethodInitialized_07547955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547955 = '\x01';
  }
  if (binding == (Settings_MobileInputBinding_o *)0x0) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
    return pSVar2;
  }
  pMVar3 = (MethodInfo *)"MapEditor";
  bVar1 = System_String__op_Equality
                    ((binding->fields)._Group_k__BackingField,"MapEditor",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (binding->fields)._Name_k__BackingField;
    defaultValue = UI_MobileInputBindingUtil__Labelize(pSVar2,pMVar3);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    subCategory = "Keybinds";
    category = "MapEditorSettings";
label_05c7829d:
    pSVar2 = UI_UIManager__GetLocale
                       (category,subCategory,pSVar2,"",defaultValue,(MethodInfo *)0x0);
    return pSVar2;
  }
  pMVar3 = (MethodInfo *)"Titan";
  bVar1 = System_String__op_Equality
                    ((binding->fields)._Group_k__BackingField,"Titan",(MethodInfo *)0x0);
  if (!bVar1) {
    pMVar3 = (MethodInfo *)"AnnieShifter";
    bVar1 = System_String__op_Equality
                      ((binding->fields)._Group_k__BackingField,"AnnieShifter",(MethodInfo *)0x0);
    if (!bVar1) {
      pMVar3 = (MethodInfo *)"ErenShifter";
      bVar1 = System_String__op_Equality
                        ((binding->fields)._Group_k__BackingField,"ErenShifter",(MethodInfo *)0x0);
      if (!bVar1) {
        pMVar3 = (MethodInfo *)(binding->fields)._Group_k__BackingField;
        subCategory = System_String__Concat_52f0320
                                ("Keybinds.",(System_String_o *)pMVar3,(MethodInfo *)0x0);
        pSVar2 = (binding->fields)._Name_k__BackingField;
        defaultValue = UI_MobileInputBindingUtil__Labelize(pSVar2,pMVar3);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        category = "SettingsPopup";
        goto label_05c7829d;
      }
    }
  }
  pSVar2 = UI_MobileInputBindingUtil__GetTitanActionLabel((binding->fields)._Name_k__BackingField,pMVar3);
  return pSVar2;
}


// UI.MobileInputBindingUtil$$GetTitanActionLabel
// il2cpp: System_String_o* UI_MobileInputBindingUtil__GetTitanActionLabel (System_String_o* name, const MethodInfo* method);
// 0x5c78670

System_String_o * UI_MobileInputBindingUtil__GetTitanActionLabel(System_String_o *name,MethodInfo *method)

{
  uint startIndex;
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_07547956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547956 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"CoverNape1",(MethodInfo *)0x0);
  if (bVar1) {
    name = "CoverNape";
  }
  if (name != (System_String_o *)0x0) {
    pMVar3 = (MethodInfo *)"Attack";
    bVar1 = System_String__StartsWith(name,"Attack",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = UI_MobileInputBindingUtil__Labelize(name,pMVar3);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetLocale
                         ("SettingsPopup","Keybinds.Titan",name,"",pSVar2,
                          (MethodInfo *)0x0);
      return pSVar2;
    }
    if ("Attack" != (System_String_o *)0x0) {
      startIndex = ("Attack"->fields)._stringLength;
      pMVar3 = (MethodInfo *)(ulong)startIndex;
      pSVar2 = System_String__Substring(name,startIndex,(MethodInfo *)0x0);
      pSVar2 = UI_MobileInputBindingUtil__Labelize(pSVar2,pMVar3);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputBindingUtil$$Labelize
// il2cpp: System_String_o* UI_MobileInputBindingUtil__Labelize (System_String_o* value, const MethodInfo* method);
// 0x5c783a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7849b: jmp 0x5c78630

System_String_o * UI_MobileInputBindingUtil__Labelize(System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  uint16_t uVar5;
  uint16_t c;
  System_Collections_Generic_List_char__o *__this;
  System_Char_array *pSVar6;
  System_String_o *pSVar7;
  int iVar8;
  int iVar9;
  
  if (Il2CppMethodInitialized_07547957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_char);
    Il2CppMethodInitialized_07547957 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar4) {
    return value;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_char);
  System_Collections_Generic_List_char____ctor
            (__this,(MethodInfo_51E82A0 *)MethodInfo_System_Collections_Generic_List_char_ctor);
  if (value == (System_String_o *)0x0) goto label_05c78661;
  if (0 < (value->fields)._stringLength) {
    uVar5 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
    pMVar3 = MethodInfo_System_Collections_Generic_List_char_Add;
    if (__this == (System_Collections_Generic_List_char__o *)0x0) goto label_05c78661;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this->fields)._items;
    if (pSVar6 == (System_Char_array *)0x0) goto label_05c78661;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar6->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar6->m_Items[(int)uVar2] = uVar5;
      iVar9 = (value->fields)._stringLength;
    }
    else {
      System_Collections_Generic_List_char___AddWithResize
                (__this,uVar5,(MethodInfo_51E8BC0 *)pMVar3->klass->rgctx_data[0xe].method);
      iVar9 = (value->fields)._stringLength;
    }
    if (1 < iVar9) {
      iVar9 = 0;
      do {
        uVar5 = System_String__get_Chars(value,iVar9 + 1,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar4 = System_Char__IsUpper(uVar5,(MethodInfo *)0x0);
        if (bVar4) {
          c = System_String__get_Chars(value,iVar9,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar4 = System_Char__IsUpper(c,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_char_Add;
          if (bVar4) goto label_05c78594;
          if (__this == (System_Collections_Generic_List_char__o *)0x0) goto label_05c78661;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this->fields)._items;
          if (pSVar6 == (System_Char_array *)0x0) goto label_05c78661;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = 0x20;
          }
          else {
            System_Collections_Generic_List_char___AddWithResize
                      (__this,0x20,(MethodInfo_51E8BC0 *)pMVar3->klass->rgctx_data[0xe].method);
          }
        }
        else {
label_05c78594:
          if (__this == (System_Collections_Generic_List_char__o *)0x0) goto label_05c78661;
        }
        pMVar3 = MethodInfo_System_Collections_Generic_List_char_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_Char_array *)0x0) goto label_05c78661;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = uVar5;
        }
        else {
          System_Collections_Generic_List_char___AddWithResize
                    (__this,uVar5,(MethodInfo_51E8BC0 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        iVar8 = iVar9 + 2;
        iVar9 = iVar9 + 1;
      } while (iVar8 < (value->fields)._stringLength);
    }
  }
  if (__this != (System_Collections_Generic_List_char__o *)0x0) {
    pSVar6 = System_Collections_Generic_List_char___ToArray
                       (__this,(MethodInfo_51EAEB0 *)MethodInfo_System_Collections_Generic_List_char_ToArray);
    pSVar7 = System_String__CreateString_52fe930((System_String_o *)0x0,pSVar6,(MethodInfo *)0x0);
    return pSVar7;
  }
label_05c78661:
  ThrowNullReferenceException();
}


