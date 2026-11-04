// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgVirtualSettingsScrollCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o* __this, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, System_String_o* contentId, float initialScrollOffset, System_Nullable_float__o paddingTop, const MethodInfo* method);
// 0x1823a1e40

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,System_String_o *categoryId,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,System_String_o *contentId,
               float initialScrollOffset,System_Nullable_float__o paddingTop,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184347b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    Il2CppMethodInitialized_184347b64 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  iVar3 = (context->fields)._order;
  uVar4 = *(undefined4 *)&(context->fields).field_0xc;
  pSVar1 = (context->fields)._SectionId_k__BackingField;
  pSVar2 = (context->fields)._SectionTitle_k__BackingField;
  (__this->fields)._context.fields._group = (context->fields)._group;
  (__this->fields)._context.fields._order = iVar3;
  *(undefined4 *)&(__this->fields)._context.fields.field_0xc = uVar4;
  (__this->fields)._context.fields._SectionId_k__BackingField = pSVar1;
  (__this->fields)._context.fields._SectionTitle_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier((void **)&__this->fields,(void *)0x0);
  (__this->fields)._categoryId = categoryId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryId,categoryId);
  if (groups == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    groups = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,0);
  }
  (__this->fields)._groups = groups;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groups,groups);
  bVar5 = System_String__IsNullOrEmpty(contentId,(MethodInfo *)0x0);
  if (bVar5) {
    contentId = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                          (categoryId,(MethodInfo *)0x0);
  }
  (__this->fields)._contentId = contentId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._contentId,contentId);
  (__this->fields)._initialScrollOffset = initialScrollOffset;
  if (paddingTop.fields.hasValue != false) {
    (__this->fields)._paddingTop = paddingTop.fields.value;
    return;
  }
  (__this->fields)._paddingTop = 98.0;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory__Build (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823a17f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a19d8: mov rax, qword ptr [rip + 0x1cf0031]  ; "Settings"
// asm:   0x1823a19df: jmp 0x1823a19eb
// asm:   0x1823a1bbf: jmp 0x1823a1b00

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  System_String_o *value;
  System_String_o *value_00;
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  System_String_o *value_01;
  System_Collections_Generic_List_GisketchNodeDefinition__o *items;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_array *value_02;
  System_Globalization_CultureInfo_o *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_03;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_04;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar4;
  uint uVar5;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  System_String_o *local_58 [2];
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_48;
  
  if (Il2CppMethodInitialized_184347b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgVirtualSettingsScrollCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184347b65 = '\x01';
  }
  local_78 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  local_58[0] = (System_String_o *)0x0;
  local_68 = (System_String_o *)0x0;
  uStack_60 = (void *)0x0;
  if (Il2CppMethodInitialized_184347b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_BuildRuntime
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgVirtualSettingsScrollCategory");
    Il2CppMethodInitialized_184347b66 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime->static_fields->
      _registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_BuildRuntime
               ,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) goto label_1823a1e31;
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_00,"AottgVirtualSettingsScrollCategory",__this_01,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime->static_fields->
    _registered = true;
  }
  value_00 = "Settings";
  pSVar3 = (__this->fields)._categoryId;
  value = (__this->fields)._context.fields._SectionTitle_k__BackingField;
  if (Il2CppMethodInitialized_184347b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_184347b10 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  value_01 = "Settings";
  if (!bVar1) {
    value_01 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                         (value_00,(MethodInfo *)0x0);
  }
  local_78 = value_01;
  Il2CppCodeGenWriteBarrier(&local_78,value_01);
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSStack_70 = pSVar3;
  Il2CppCodeGenWriteBarrier(&pSStack_70,pSVar3);
  local_68 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase(value,(MethodInfo *)0x0);
  Il2CppCodeGenWriteBarrier((void **)&local_68,local_68);
  uStack_60 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  Il2CppCodeGenWriteBarrier((void **)&uStack_60,uStack_60);
  if (Il2CppMethodInitialized_184347b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347b12 = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    ThrowNullReferenceException();
  }
  local_58[0] = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  Il2CppCodeGenWriteBarrier(local_58,local_58[0]);
  items = il2cpp_codegen_object_new
                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)items,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  pGVar4 = (__this->fields)._groups;
  if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    uVar5 = 0;
    do {
      if ((int)pGVar4->max_length <= (int)uVar5) {
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (__this_02->fields).type = "AottgVirtualSettingsScrollCategory";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"AottgVirtualSettingsScrollCategory");
        pSVar3 = (__this->fields)._contentId;
        (__this_02->fields).id = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,pSVar3);
        pSVar3 = (__this->fields)._categoryId;
        (__this_02->fields).value = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).value,pSVar3);
        value_02 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar3 = System_Single__ToString_1b49fe0
                           (&(__this->fields)._initialScrollOffset,(System_IFormatProvider_o *)pSVar2,
                            (MethodInfo *)0x0);
        if (value_02 == (System_String_array *)0x0) break;
        if ((int)value_02->max_length != 0) {
          value_02->m_Items[0] = pSVar3;
          Il2CppCodeGenWriteBarrier(value_02->m_Items,pSVar3);
          pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar3 = System_Single__ToString_1b49fe0
                             (&(__this->fields)._paddingTop,(System_IFormatProvider_o *)pSVar2,
                              (MethodInfo *)0x0);
          if (1 < (uint)value_02->max_length) {
            value_02->m_Items[1] = pSVar3;
            Il2CppCodeGenWriteBarrier(value_02->m_Items + 1,pSVar3);
            (__this_02->fields).options = value_02;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).options,value_02);
            if (items != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
              value_03 = System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_T__o *)items,
                                    (MethodInfo_929FE0 *)
                                    MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray)
              ;
              (__this_02->fields).deferredChildren =
                   (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value_03;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).deferredChildren,value_03);
              width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              value_04 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
              (__this_02->fields).layout = value_04;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,value_04);
              if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_02,(MethodInfo *)0x0);
                return;
              }
            }
            break;
          }
        }
label_1823a1e25:
        ThrowIndexOutOfRangeException();
      }
      pGVar4 = (__this->fields)._groups;
      if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) break;
      if ((uint)pGVar4->max_length <= uVar5) goto label_1823a1e25;
      if (pGVar4->m_Items[(int)uVar5] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
        if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) break;
        if ((uint)pGVar4->max_length <= uVar5) goto label_1823a1e25;
        if ((items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) ||
           (pGVar4->m_Items[(int)uVar5] == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0))
        break;
        local_48.fields.ScreenTitle = local_78;
        local_48.fields.CategoryId = pSStack_70;
        local_48.fields.GroupTitle = local_58[0];
        local_48.fields.CategoryTitle._0_4_ = (undefined4)local_68;
        local_48.fields.CategoryTitle._4_4_ = local_68._4_4_;
        local_48.fields.GroupId._0_4_ = (undefined4)uStack_60;
        local_48.fields.GroupId._4_4_ = uStack_60._4_4_;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__AddVirtualScrollItems
                  (pGVar4->m_Items[(int)uVar5],items,ui,&local_48,0 < (items->fields)._size,(MethodInfo *)0x0)
        ;
      }
      pGVar4 = (__this->fields)._groups;
      uVar5 = uVar5 + 1;
    } while (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0);
  }
label_1823a1e31:
  ThrowNullReferenceException();
}


