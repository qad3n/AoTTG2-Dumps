// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgVirtualSettingsScrollCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o* __this, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* categoryId, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* groups, System_String_o* contentId, float initialScrollOffset, System_Nullable_float__o paddingTop, const MethodInfo* method);
// 0x5e58160

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,System_String_o *categoryId,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups,System_String_o *contentId,
               float initialScrollOffset,System_Nullable_float__o paddingTop,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07548687 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    Il2CppMethodInitialized_07548687 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._context.fields._SectionId_k__BackingField = context.fields._SectionId_k__BackingField;
  (__this->fields)._context.fields._SectionTitle_k__BackingField =
       context.fields._SectionTitle_k__BackingField;
  (__this->fields)._context.fields._group = context.fields._group;
  (__this->fields)._context.fields._order = context.fields._order;
  *(undefined4 *)&(__this->fields)._context.fields.field_0xc = context.fields._12_4_;
  Il2CppCodeGenWriteBarrier((void **)&__this->fields);
  (__this->fields)._categoryId = categoryId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryId);
  if (groups == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    groups = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,0);
  }
  (__this->fields)._groups = groups;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groups);
  bVar1 = System_String__IsNullOrEmpty(contentId,(MethodInfo *)0x0);
  if (bVar1) {
    contentId = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                          (categoryId,(MethodInfo *)0x0);
  }
  (__this->fields)._contentId = contentId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._contentId);
  (__this->fields)._initialScrollOffset = initialScrollOffset;
  if (paddingTop.fields.hasValue == false) {
    fVar2 = 98.0;
  }
  else {
    fVar2 = paddingTop.fields.value;
  }
  (__this->fields)._paddingTop = fVar2;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory__Build (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e58280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e583ed: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context;
  System_Collections_Generic_List_GisketchNodeDefinition__o *items;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_array *pSVar3;
  System_Globalization_CultureInfo_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  long lVar8;
  ulong uVar9;
  System_String_o **method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o GStack_58;
  
  method_00 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07548688 == '\0') {
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
    method_00 = &"Column";
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07548688 = '\x01';
  }
  GStack_58.fields.CategoryTitle = (System_String_o *)0x0;
  GStack_58.fields.GroupId = (System_String_o *)0x0;
  GStack_58.fields.ScreenTitle = (System_String_o *)0x0;
  GStack_58.fields.CategoryId = (System_String_o *)0x0;
  GStack_58.fields.GroupTitle = (System_String_o *)0x0;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__RegisterFactory
            ((MethodInfo *)method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor
            (&GStack_58,(__this->fields)._categoryId,
             (__this->fields)._context.fields._SectionTitle_k__BackingField,(MethodInfo *)0x0);
  items = il2cpp_codegen_object_new
                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)items,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  pGVar2 = (__this->fields)._groups;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    if (items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      uVar1 = (uint)pGVar2->max_length;
      if (0 < (int)uVar1) {
        lVar8 = 0;
        do {
          if (uVar1 <= (uint)lVar8) goto label_05e58635;
          if (pGVar2->m_Items[lVar8] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0)
          goto label_05e58630;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar1);
      }
label_05e5840b:
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_00->fields).type = "AottgVirtualSettingsScrollCategory";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
        (__this_00->fields).id = (__this->fields)._contentId;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
        (__this_00->fields).value = (__this->fields)._categoryId;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
        pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar5 = System_Single__ToString_54d09f0
                           (&(__this->fields)._initialScrollOffset,(System_IFormatProvider_o *)pSVar4,
                            (MethodInfo *)0x0);
        if (pSVar3 != (System_String_array *)0x0) {
          if ((int)pSVar3->max_length != 0) {
            pSVar3->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
            pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            pSVar5 = System_Single__ToString_54d09f0
                               (&(__this->fields)._paddingTop,(System_IFormatProvider_o *)pSVar4,
                                (MethodInfo *)0x0);
            if ((pSVar3->max_length & 0xfffffffe) != 0) {
              pSVar3->m_Items[1] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
              (__this_00->fields).options = pSVar3;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).options);
              if (items != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
                pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                         System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_object__o *)items,
                                    (MethodInfo_395F5A0 *)
                                    MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray)
                ;
                (__this_00->fields).deferredChildren = pGVar6;
                Il2CppCodeGenWriteBarrier(&(__this_00->fields).deferredChildren);
                width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
                height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
                (__this_00->fields).layout = pGVar7;
                Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
                if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                  Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
                  return;
                }
              }
              goto label_05e58630;
            }
          }
label_05e58635:
          ThrowIndexOutOfRangeException();
        }
      }
    }
    else {
      uVar9 = 0;
      do {
        uVar1 = (uint)pGVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar9) goto label_05e5840b;
        if (uVar1 <= uVar9) goto label_05e58635;
        if (pGVar2->m_Items[uVar9] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
          context.fields.CategoryId = GStack_58.fields.CategoryId;
          context.fields.ScreenTitle = GStack_58.fields.ScreenTitle;
          context.fields.CategoryTitle._0_4_ = GStack_58.fields.CategoryTitle._0_4_;
          context.fields.CategoryTitle._4_4_ = GStack_58.fields.CategoryTitle._4_4_;
          context.fields.GroupId._0_4_ = GStack_58.fields.GroupId._0_4_;
          context.fields.GroupId._4_4_ = GStack_58.fields.GroupId._4_4_;
          context.fields.GroupTitle = GStack_58.fields.GroupTitle;
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__AddVirtualScrollItems
                    (pGVar2->m_Items[uVar9],items,ui,context,0 < (items->fields)._size,(MethodInfo *)0x0);
          pGVar2 = (__this->fields)._groups;
        }
        uVar9 = uVar9 + 1;
      } while (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0);
    }
  }
label_05e58630:
  ThrowNullReferenceException();
}


