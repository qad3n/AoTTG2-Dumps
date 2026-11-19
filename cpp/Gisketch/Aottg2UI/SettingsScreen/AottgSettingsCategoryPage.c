// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsCategoryPage.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x5e3ace0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,System_String_o *categoryId,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar1;
  uint uVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffff98;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_58;
  
  if (Il2CppMethodInitialized_075485a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    Il2CppMethodInitialized_075485a0 = '\x01';
  }
  local_58.fields.CategoryTitle = (System_String_o *)0x0;
  local_58.fields.GroupId = (System_String_o *)0x0;
  local_58.fields.ScreenTitle = (System_String_o *)0x0;
  local_58.fields.CategoryId = (System_String_o *)0x0;
  local_58.fields.GroupTitle = (System_String_o *)0x0;
  if (Il2CppMethodInitialized_07548630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    Il2CppMethodInitialized_07548630 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Settings",(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase(pSVar3,method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor_5d4b400
            (&local_58,pSVar3,categoryId,context.fields._SectionTitle_k__BackingField,(System_String_o *)0x0,
             (System_String_o *)0x0,in_stack_ffffffffffffff98);
  if (groups == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    groups = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,0);
    if (groups == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_05e3ae9d:
      ThrowNullReferenceException();
    }
  }
  uVar2 = (uint)groups->max_length;
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        pGVar1 = groups->m_Items[(int)uVar5];
        if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
          (pGVar1->fields)._searchContext.fields.GroupTitle = local_58.fields.GroupTitle;
          (pGVar1->fields)._searchContext.fields.CategoryTitle = local_58.fields.CategoryTitle;
          (pGVar1->fields)._searchContext.fields.GroupId = local_58.fields.GroupId;
          (pGVar1->fields)._searchContext.fields.ScreenTitle = local_58.fields.ScreenTitle;
          (pGVar1->fields)._searchContext.fields.CategoryId = local_58.fields.CategoryId;
          Il2CppCodeGenWriteBarrier((void **)&(pGVar1->fields)._searchContext);
          if (uVar5 < (uint)groups->max_length) goto label_05e3ae9d;
          goto label_05e3aea2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  else if (0 < (int)uVar2) {
    uVar4 = groups->max_length & 0xffffffff;
    uVar6 = 0;
    do {
      if (uVar4 <= uVar6) {
label_05e3aea2:
        ThrowIndexOutOfRangeException();
      }
      pGVar1 = groups->m_Items[uVar6];
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
        (pGVar1->fields)._searchContext.fields.GroupTitle = local_58.fields.GroupTitle;
        (pGVar1->fields)._searchContext.fields.CategoryTitle = local_58.fields.CategoryTitle;
        (pGVar1->fields)._searchContext.fields.GroupId = local_58.fields.GroupId;
        (pGVar1->fields)._searchContext.fields.ScreenTitle = local_58.fields.ScreenTitle;
        (pGVar1->fields)._searchContext.fields.CategoryId = local_58.fields.CategoryId;
        Il2CppCodeGenWriteBarrier((void **)&(pGVar1->fields)._searchContext);
        if ((uint)groups->max_length <= uVar6) goto label_05e3aea2;
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)groups->m_Items[uVar6],(MethodInfo *)0x0
                  );
        uVar4 = (ulong)(uint)groups->max_length;
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)uVar4);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildVirtual
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x5e3a780

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,System_String_o *categoryId,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  
  if (Il2CppMethodInitialized_075485a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildVirtual
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, float initialScrollOffset, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x5e3af40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual_5d3af40
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,System_String_o *categoryId,
               float initialScrollOffset,Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  
  if (Il2CppMethodInitialized_075485a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,initialScrollOffset,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x5e3a840

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this;
  bool bVar1;
  ulong uVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  ulong uVar3;
  
  if (Il2CppMethodInitialized_075485a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075485a3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar1) && (groups != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0)) &&
     (0 < (int)groups->max_length)) {
    uVar2 = groups->max_length & 0xffffffff;
    uVar3 = 0;
    method_00 = extraout_RDX;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this = groups->m_Items[uVar3];
      if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
        if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
          ThrowNullReferenceException();
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__SyncState(__this,root,method_00);
        uVar2 = (ulong)(uint)groups->max_length;
        method_00 = extraout_RDX_00;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar2);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId (System_String_o* value, const MethodInfo* method);
// 0x5e3b0b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075485a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075485a4 = '\x01';
  }
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), value != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Replace_5304550
                           (pSVar1," ","-",(MethodInfo *)0x0);
        if (pSVar1 != (System_String_o *)0x0) {
          pSVar1 = System_String__Replace_5304550
                             (pSVar1,"/","-",(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$ContentId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId (System_String_o* categoryId, const MethodInfo* method);
// 0x5e3b170

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
          (System_String_o *categoryId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075485a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    Il2CppMethodInitialized_075485a5 = '\x01';
  }
  pSVar1 = System_String__Concat_5301f10
                     ("settings-",categoryId,"-content",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$OwnerPrefix
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__OwnerPrefix (System_String_o* categoryId, const MethodInfo* method);
// 0x5e3b1c0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__OwnerPrefix
          (System_String_o *categoryId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075485a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    Il2CppMethodInitialized_075485a6 = '\x01';
  }
  pSVar1 = System_String__Concat_5301f10
                     ("settings-",categoryId,"-",(MethodInfo *)0x0);
  return pSVar1;
}


