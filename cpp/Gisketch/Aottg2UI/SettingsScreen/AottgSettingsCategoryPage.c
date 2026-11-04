// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsCategoryPage.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x182313d60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182313ddd: mov rsi, rdi
// asm:   0x182313de0: jmp 0x182313dfb
// asm:   0x182313df8: mov rdi, rax
// asm:   0x182313dff: nop 

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,System_String_o *categoryId,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar1;
  uint uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_58;
  
  if (Il2CppMethodInitialized_18434775d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_18434775d = '\x01';
  }
  local_58.fields.ScreenTitle = (System_String_o *)0x0;
  local_58.fields.CategoryId = (System_String_o *)0x0;
  local_58.fields.GroupTitle = (System_String_o *)0x0;
  local_58.fields.CategoryTitle = (System_String_o *)0x0;
  local_58.fields.GroupId = (System_String_o *)0x0;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor
            (&local_58,"Settings",categoryId,(context->fields)._SectionTitle_k__BackingField,
             (System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
  if ((groups == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) &&
     (groups = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,0),
     groups == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0)) {
label_182313e77:
    ThrowNullReferenceException();
  }
  uVar2 = 0;
  do {
    if ((int)groups->max_length <= (int)uVar2) {
      return;
    }
    if ((uint)groups->max_length <= uVar2) {
label_182313e71:
      ThrowIndexOutOfRangeException();
    }
    if (groups->m_Items[(int)uVar2] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
      pGVar1 = groups->m_Items[(int)uVar2];
      (pGVar1->fields)._searchContext.fields.ScreenTitle = local_58.fields.ScreenTitle;
      (pGVar1->fields)._searchContext.fields.CategoryId = local_58.fields.CategoryId;
      (pGVar1->fields)._searchContext.fields.CategoryTitle = local_58.fields.CategoryTitle;
      (pGVar1->fields)._searchContext.fields.GroupId = local_58.fields.GroupId;
      (pGVar1->fields)._searchContext.fields.GroupTitle = local_58.fields.GroupTitle;
      Il2CppCodeGenWriteBarrier((void **)&(pGVar1->fields)._searchContext,(void *)0x0);
      if ((uint)groups->max_length <= uVar2) goto label_182313e71;
      if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_182313e77;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)groups->m_Items[(int)uVar2],
                 (MethodInfo *)0x0);
    }
    uVar2 = uVar2 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildVirtual
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x182313c00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,System_String_o *categoryId,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_58;
  
  if (Il2CppMethodInitialized_18434775e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_18434775e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  local_58.fields._group = (context->fields)._group;
  local_58.fields._order = (context->fields)._order;
  local_58.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_58.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_58.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,&local_58,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildVirtual
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, float initialScrollOffset, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x182313cb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual_2313cb0
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,System_String_o *categoryId,
               float initialScrollOffset,Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_58;
  
  if (Il2CppMethodInitialized_18434775f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_18434775f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  local_58.fields._group = (context->fields)._group;
  local_58.fields._order = (context->fields)._order;
  local_58.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_58.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_58.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,&local_58,categoryId,groups,(System_String_o *)0x0,initialScrollOffset,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, const MethodInfo* method);
// 0x182314310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182314398: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184347760 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347760 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && (groups != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0)) {
    for (uVar2 = 0; (int)uVar2 < (int)groups->max_length; uVar2 = uVar2 + 1) {
      if ((uint)groups->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if (groups->m_Items[(int)uVar2] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__SyncState
                  (groups->m_Items[(int)uVar2],root,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$BuildPlaceholder
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildPlaceholder (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, System_String_array* groups, const MethodInfo* method);
// 0x182313a10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182313b2e: mov rsi, rdi
// asm:   0x182313b31: jmp 0x182313b50
// asm:   0x182313b4d: mov rdi, rax

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildPlaceholder
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,System_String_o *categoryId,
               System_String_array *groups,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  uint uVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_48;
  
  if (Il2CppMethodInitialized_184347761 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    Il2CppMethodInitialized_184347761 = '\x01';
  }
  if (groups == (System_String_array *)0x0) {
label_182313bf4:
    ThrowNullReferenceException();
  }
  pIVar1 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,
                      (uint32_t)groups->max_length);
  for (uVar3 = 0; (int)uVar3 < (int)groups->max_length; uVar3 = uVar3 + 1) {
    if ((uint)groups->max_length <= uVar3) {
label_182313be2:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = (Il2CppClass *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__PlaceholderGroup
                       (categoryId,groups->m_Items[(int)uVar3],(MethodInfo *)0x0);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_182313bf4;
    if (*(uint *)&pIVar1[1].monitor <= uVar3) goto label_182313be2;
    (&pIVar1[2].klass)[(int)uVar3] = pIVar2;
    Il2CppCodeGenWriteBarrier(&pIVar1[2].klass + (int)uVar3,pIVar2);
  }
  if (Il2CppMethodInitialized_18434775d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_18434775d = '\x01';
  }
  local_48.fields.ScreenTitle = (System_String_o *)0x0;
  local_48.fields.CategoryId = (System_String_o *)0x0;
  local_48.fields.GroupTitle = (System_String_o *)0x0;
  local_48.fields.CategoryTitle = (System_String_o *)0x0;
  local_48.fields.GroupId = (System_String_o *)0x0;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor
            (&local_48,"Settings",categoryId,(context->fields)._SectionTitle_k__BackingField,
             (System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
  if ((pIVar1 == (Il2CppObject *)0x0) &&
     (pIVar1 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,0),
     pIVar1 == (Il2CppObject *)0x0)) {
label_182313bee:
    ThrowNullReferenceException();
  }
  uVar3 = 0;
  do {
    if (*(int *)&pIVar1[1].monitor <= (int)uVar3) {
      return;
    }
    if (*(uint *)&pIVar1[1].monitor <= uVar3) {
label_182313be8:
      ThrowIndexOutOfRangeException();
    }
    if ((&pIVar1[2].klass)[(int)uVar3] != (Il2CppClass *)0x0) {
      pIVar2 = (&pIVar1[2].klass)[(int)uVar3];
      (pIVar2->_1).this_arg.data = local_48.fields.ScreenTitle;
      *(System_String_o **)&(pIVar2->_1).this_arg.bits = local_48.fields.CategoryId;
      (pIVar2->_1).element_class = (Il2CppClass *)local_48.fields.CategoryTitle;
      (pIVar2->_1).castClass = (Il2CppClass *)local_48.fields.GroupId;
      (pIVar2->_1).declaringType = (Il2CppClass *)local_48.fields.GroupTitle;
      Il2CppCodeGenWriteBarrier(&(pIVar2->_1).this_arg.data,(void *)0x0);
      if (*(uint *)&pIVar1[1].monitor <= uVar3) goto label_182313be8;
      if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_182313bee;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)(&pIVar1[2].klass)[(int)uVar3],
                 (MethodInfo *)0x0);
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$PlaceholderGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__PlaceholderGroup (System_String_o* categoryId, System_String_o* title, const MethodInfo* method);
// 0x182313f20

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__PlaceholderGroup
          (System_String_o *categoryId,System_String_o *title,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  Il2CppObject *pIVar2;
  System_String_o *value;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *value_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this;
  Gisketch_Aottg2UI_Code_AottgComponent_array *rows;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *obj;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184347762 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"Migration pending. Use legacy settings until this category migrates.");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"-status");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    Il2CppMethodInitialized_184347762 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId(title,(MethodInfo *)0x0);
  str0 = System_String__Concat_1969590
                   ("settings-",categoryId,"-",pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array,1);
  value = System_String__Concat_1969e50(str0,"-status",(MethodInfo *)0x0);
  pIVar3 = (Il2CppClass *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
  pSVar1 = "Status";
  if (Il2CppMethodInitialized_184347721 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_184347721 = '\x01';
  }
  *(undefined4 *)((longlong)&(pIVar3->_1).typeMetadataHandle + 4) = 8;
  pIVar4 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
  (pIVar3->_1).interopData = pIVar4;
  Il2CppCodeGenWriteBarrier(&(pIVar3->_1).interopData,pIVar4);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pIVar3,(MethodInfo *)0x0);
  (pIVar3->_1).name = (char *)value;
  Il2CppCodeGenWriteBarrier(&(pIVar3->_1).name,value);
  (pIVar3->_1).namespaze = (char *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(pIVar3->_1).namespaze,pSVar1);
  *(undefined4 *)&(pIVar3->_1).byval_arg.data = 6;
  *(undefined8 *)&(pIVar3->_1).byval_arg.bits = 0;
  Il2CppCodeGenWriteBarrier((void **)&(pIVar3->_1).byval_arg.bits,(void *)0x0);
  (pIVar3->_1).methods = "Migration pending. Use legacy settings until this category migrates.";
  Il2CppCodeGenWriteBarrier(&(pIVar3->_1).methods,"Migration pending. Use legacy settings until this category migrates.");
  (pIVar3->_1).declaringType = (Il2CppClass *)title;
  Il2CppCodeGenWriteBarrier(&(pIVar3->_1).declaringType,title);
  value_00 = (Il2CppClass *)
             System_String__Concat_1969b70(categoryId," ",title,(MethodInfo *)0x0);
  (pIVar3->_1).parent = value_00;
  Il2CppCodeGenWriteBarrier(&(pIVar3->_1).parent,value_00);
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = pIVar3;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pIVar3);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
      if (Il2CppMethodInitialized_18434778b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow)
        ;
        Il2CppMethodInitialized_18434778b = '\x01';
      }
      rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,*(uint32_t *)&pIVar2[1].monitor);
      uVar5 = 0;
      while( true ) {
        if (*(int *)&pIVar2[1].monitor <= (int)uVar5) {
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                    (__this,str0,title,rows,(MethodInfo *)0x0);
          return __this;
        }
        if (*(uint *)&pIVar2[1].monitor <= uVar5) break;
        pIVar3 = (&pIVar2[2].klass)[(int)uVar5];
        obj = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
        Gisketch_Aottg2UI_Code_AottgComponent___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)obj,(MethodInfo *)0x0);
        (obj->fields)._descriptor = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)pIVar3;
        Il2CppCodeGenWriteBarrier(&(obj->fields)._descriptor,pIVar3);
        if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_18231422e;
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((rows->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((uint)rows->max_length <= uVar5) break;
        rows->m_Items[(int)uVar5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)obj;
        Il2CppCodeGenWriteBarrier(rows->m_Items + (int)uVar5,obj);
        uVar5 = uVar5 + 1;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_18231422e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId (System_String_o* value, const MethodInfo* method);
// 0x182314250

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347763 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184347763 = '\x01';
  }
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), value != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Replace_1970e80
                           (pSVar1," ","-",(MethodInfo *)0x0);
        if (pSVar1 != (System_String_o *)0x0) {
          pSVar1 = System_String__Replace_1970e80
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
// 0x182313e80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
          (System_String_o *categoryId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347764 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    Il2CppMethodInitialized_184347764 = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ("settings-",categoryId,"-content",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage$$OwnerPrefix
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__OwnerPrefix (System_String_o* categoryId, const MethodInfo* method);
// 0x182313ed0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__OwnerPrefix
          (System_String_o *categoryId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347765 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    Il2CppMethodInitialized_184347765 = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ("settings-",categoryId,"-",(MethodInfo *)0x0);
  return pSVar1;
}


