// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingRowFrame.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, System_String_o* id, System_String_o* label, float controlWidth, System_Action_AottgUi__o* buildControl, System_String_o* tooltip, System_String_o* searchTitle, System_String_o* searchKeywords, System_String_o* icon, System_Nullable_float__o controlVisualWidth, System_String_o* labelKey, System_String_o* tooltipKey, System_String_o* labelBindKey, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o searchContext, System_Func_string__o* dirtyValue, System_String_o* warningVisibleKey, System_String_o* warningTooltipKey, int32_t layoutMode, const MethodInfo* method);
// 0x18230ec90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,System_String_o *id,
               System_String_o *label,float controlWidth,System_Action_AottgUi__o *buildControl,
               System_String_o *tooltip,System_String_o *searchTitle,System_String_o *searchKeywords,
               System_String_o *icon,System_Nullable_float__o controlVisualWidth,System_String_o *labelKey,
               System_String_o *tooltipKey,System_String_o *labelBindKey,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *searchContext,
               System_Func_string__o *dirtyValue,System_String_o *warningVisibleKey,
               System_String_o *warningTooltipKey,int32_t layoutMode,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434773e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    Il2CppMethodInitialized_18434773e = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey,labelKey);
  (__this->fields)._labelBindKey = labelBindKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelBindKey,labelBindKey);
  (__this->fields)._controlWidth = controlWidth;
  if (controlVisualWidth.fields.hasValue != false) {
    controlWidth = controlVisualWidth.fields.value;
  }
  (__this->fields)._controlVisualWidth = controlWidth;
  (__this->fields)._buildControl = buildControl;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildControl,buildControl);
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,tooltip);
  (__this->fields)._tooltipKey = tooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipKey,tooltipKey);
  (__this->fields)._searchTitle = searchTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchTitle,searchTitle);
  (__this->fields)._searchKeywords = searchKeywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchKeywords,searchKeywords);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon,icon);
  (__this->fields)._warningVisibleKey = warningVisibleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._warningVisibleKey,warningVisibleKey);
  (__this->fields)._warningTooltipKey = warningTooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._warningTooltipKey,warningTooltipKey);
  pSVar1 = (searchContext->fields).CategoryId;
  pSVar2 = (searchContext->fields).CategoryTitle;
  pSVar3 = (searchContext->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (searchContext->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (searchContext->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  (__this->fields)._dirtyValue = dirtyValue;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dirtyValue,dirtyValue);
  (__this->fields)._layoutMode = layoutMode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x18230d430

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  System_Func_string__o *value;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_String_o *keywords;
  System_String_o *sectionTitle;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value_00;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *__this_01;
  System_String_o *pSVar7;
  longlong lVar8;
  longlong lVar9;
  float gap;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *local_res8;
  
  if (Il2CppMethodInitialized_18434773f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"ResponsiveRowLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    il2cpp_codegen_initialize_runtime_metadata(&"Compact");
    Il2CppMethodInitialized_18434773f = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty((__this->fields)._id,(MethodInfo *)0x0);
  if ((bVar3) || ((__this->fields)._buildControl == (System_Action_AottgUi__o *)0x0)) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout);
  }
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory((MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_0,
             (MethodInfo *)0x0);
  local_res8 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)(__this->fields)._id;
  if (Il2CppMethodInitialized_184347749 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347749 = '\x01';
  }
  pSVar6 = "Center";
  pSVar7 = "Row";
  if ((__this->fields)._layoutMode == 1) {
    gap = 12.0;
    pSVar5 = "SpaceBetween";
  }
  else {
    gap = 14.0;
    pSVar5 = (System_String_o *)0x0;
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (pSVar7,pSVar5,pSVar6,(System_String_o *)0x0,(System_String_o *)0x0,gap,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,8.0,6.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"clear",(System_Action_AottgUi__o *)__this_00,
                        (System_String_o *)local_res8,layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).type = "ResponsiveRowLayout";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type,"ResponsiveRowLayout");
      pSVar7 = (System_String_o *)0x0;
      if ((__this->fields)._layoutMode == 1) {
        pSVar7 = "Compact";
      }
      (pGVar4->fields).value = pSVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value,pSVar7);
      bVar3 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
      lVar9 = 0x18;
      lVar8 = 0x18;
      if (!bVar3) {
        lVar8 = 0x48;
      }
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                         (&(__this->fields)._searchContext,
                          *(System_String_o **)((longlong)&__this->klass + lVar8),(MethodInfo *)0x0);
      keywords = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                           (&(__this->fields)._searchContext,(__this->fields)._searchKeywords,
                            (MethodInfo *)0x0);
      pSVar7 = (__this->fields)._icon;
      pSVar6 = (__this->fields)._searchContext.fields.CategoryId;
      sectionTitle = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
                               (&(__this->fields)._searchContext,(MethodInfo *)0x0);
      value_00 = Gisketch_Aottg2UI_Code_AottgUi__Search
                           (pSVar5,keywords,false,pSVar7,"setting",pSVar6,sectionTitle,false,
                            (MethodInfo *)0x0);
      (pGVar4->fields).search = value_00;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).search,value_00);
      pSVar7 = (__this->fields)._id;
      if (Il2CppMethodInitialized_184347742 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&" > ");
        Il2CppMethodInitialized_184347742 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
      if (!bVar3) {
        lVar9 = 0x48;
      }
      pSVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                         (&(__this->fields)._searchContext,
                          *(System_String_o **)((longlong)&__this->klass + lVar9),(MethodInfo *)0x0);
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
                         (&(__this->fields)._searchContext,(MethodInfo *)0x0);
      bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar6 = System_String__Concat_1969b70(pSVar5," > ",pSVar6,(MethodInfo *)0x0);
      }
      value = (__this->fields)._dirtyValue;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      if (Il2CppMethodInitialized_184347772 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_set_Item
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry);
        Il2CppMethodInitialized_184347772 = '\x01';
      }
      local_res8 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0;
      bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      if (value == (System_Func_string__o *)0x0) {
        return;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar2,(Il2CppObject *)pSVar7,(Il2CppObject **)&local_res8,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
                          );
        if (!bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          iVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->
                  _nextOrder;
          TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->_nextOrder =
               iVar1 + 1;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0
                    );
          (__this_01->fields).RowId = pSVar7;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).RowId,pSVar7);
          (__this_01->fields).Order = iVar1;
          local_res8 = __this_01;
          pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                             (value,(MethodInfo *)0x0);
          (__this_01->fields).Baseline = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Baseline,pSVar5);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->
                   Entries;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18230da40;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,(Il2CppObject *)pSVar7,(Il2CppObject *)local_res8,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_set_Item
                    );
        }
        if (pSVar6 == (System_String_o *)0x0) {
          pSVar6 = pSVar7;
        }
        if (local_res8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
          (local_res8->fields).Path = pSVar6;
          Il2CppCodeGenWriteBarrier(&(local_res8->fields).Path,pSVar6);
          if (local_res8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
            (local_res8->fields).Value = value;
            Il2CppCodeGenWriteBarrier(&(local_res8->fields).Value,value);
            return;
          }
        }
      }
label_18230da40:
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildControlShell
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildControlShell (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230c600

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildControlShell
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_String_o *direction;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *justify;
  float value;
  
  if (Il2CppMethodInitialized_184347740 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-control-shell");
    Il2CppMethodInitialized_184347740 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0,
             (MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-control-shell",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347747 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347747 = '\x01';
  }
  direction = "Row";
  if ((__this->fields)._layoutMode == 1) {
    value = 300.0;
    justify = "FlexEnd";
  }
  else {
    value = (__this->fields)._controlWidth;
    justify = "Center";
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (direction,justify,"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildLabel
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x18230cb00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  float paddingLeft;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  float grow;
  
  if (Il2CppMethodInitialized_184347741 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildLabel_b__23_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-label-cell");
    Il2CppMethodInitialized_184347741 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildLabel_b__23_0,
             (MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-label-cell",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434774a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_18434774a = '\x01';
  }
  if ((__this->fields)._dirtyValue == (System_Func_string__o *)0x0) {
    paddingLeft = 24.0;
  }
  else {
    paddingLeft = 0.0;
  }
  if ((__this->fields)._layoutMode == 1) {
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    grow = 1.0;
    width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    grow = 0.0;
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,paddingLeft,0.0,0.0,0.0,0.0,
                      0.0,grow,1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$SearchTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230e270

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  longlong lVar3;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
  lVar3 = 0x18;
  if (!bVar1) {
    lVar3 = 0x48;
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                     (&(__this->fields)._searchContext,*(System_String_o **)((longlong)&__this->klass + lVar3)
                      ,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$SearchKeywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchKeywords (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230e260

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchKeywords
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                     (&(__this->fields)._searchContext,(__this->fields)._searchKeywords,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$DirtyPath
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__DirtyPath (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230de50

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__DirtyPath
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  longlong lVar3;
  
  if (Il2CppMethodInitialized_184347742 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_184347742 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
  lVar3 = 0x18;
  if (!bVar1) {
    lVar3 = 0x48;
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                     (&(__this->fields)._searchContext,*(System_String_o **)((longlong)&__this->klass + lVar3)
                      ,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
                    (&(__this->fields)._searchContext,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return pSVar2;
  }
  pSVar2 = System_String__Concat_1969b70(value," > ",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildDirtyMarker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildDirtyMarker (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x18230c800

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildDirtyMarker
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347743 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-dirty-marker");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSettingsDirtyMarker");
    Il2CppMethodInitialized_184347743 = '\x01';
  }
  if ((__this->fields)._dirtyValue == (System_Func_string__o *)0x0) {
    return;
  }
  if (Il2CppMethodInitialized_18434776a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSettingsDirtyMarker");
    Il2CppMethodInitialized_18434776a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_Build,
             (MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_00,"AottgSettingsDirtyMarker",__this_01,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).type = "AottgSettingsDirtyMarker";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"AottgSettingsDirtyMarker");
      pSVar1 = System_String__Concat_1969e50((__this->fields)._id,"-dirty-marker",(MethodInfo *)0x0);
      (__this_02->fields).id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,pSVar1);
      (__this_02->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).style,"clear");
      pSVar1 = (__this->fields)._id;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      pSVar1 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow(pSVar1,(MethodInfo *)0x0);
      (__this_02->fields).value = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).value,pSVar1);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
      (__this_02->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,value);
      if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(row,__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildTooltip
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230cdd0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  float offsetX;
  
  if (Il2CppMethodInitialized_184347744 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-info");
    il2cpp_codegen_initialize_runtime_metadata(&"settingInfoIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/information");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_184347744 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltipKey,(MethodInfo *)0x0), bVar1)
     ) {
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Image";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Image");
    pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-info",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar2);
    (__this_00->fields).sprite = "Icons/kenney-icons/information";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,"Icons/kenney-icons/information");
    (__this_00->fields).style = "settingInfoIcon";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"settingInfoIcon");
    pSVar2 = (__this->fields)._tooltip;
    (__this_00->fields).tooltip = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,pSVar2);
    pSVar2 = (__this->fields)._tooltipKey;
    (__this_00->fields).tooltipKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltipKey,pSVar2);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    if ((__this->fields)._layoutMode == 1) {
      offsetX = 308.0;
    }
    else {
      offsetX = ((__this->fields)._controlVisualWidth + (__this->fields)._controlWidth) * 0.5 + 8.0;
    }
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       "Absolute",(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,offsetX,
                       -10.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(control,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildWarning
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildWarning (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230d090

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildWarning
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *str2;
  float offsetX;
  
  if (Il2CppMethodInitialized_184347745 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindConflictWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"-warning");
    Il2CppMethodInitialized_184347745 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._warningVisibleKey,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._warningTooltipKey,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (Il2CppMethodInitialized_1843476e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindConflictWarning");
    Il2CppMethodInitialized_1843476e5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_Build,
             (MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_00,"AottgKeybindConflictWarning",__this_01,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).type = "AottgKeybindConflictWarning";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"AottgKeybindConflictWarning");
      pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-warning",(MethodInfo *)0x0);
      (__this_02->fields).id = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,pSVar2);
      pSVar2 = (__this->fields)._warningVisibleKey;
      str2 = (__this->fields)._warningTooltipKey;
      if (Il2CppMethodInitialized_1843476e7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\n");
        Il2CppMethodInitialized_1843476e7 = '\x01';
      }
      if (pSVar2 == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if (str2 == (System_String_o *)0x0) {
        str2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pSVar2 = System_String__Concat_1969b70(pSVar2,"\n",str2,(MethodInfo *)0x0);
      (__this_02->fields).value = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).value,pSVar2);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      if ((__this->fields)._layoutMode == 1) {
        offsetX = 308.0;
      }
      else {
        offsetX = ((__this->fields)._controlVisualWidth + (__this->fields)._controlWidth) * 0.5 + 8.0;
      }
      bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
      if ((!bVar1) ||
         (bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltipKey,(MethodInfo *)0x0), !bVar1)) {
        offsetX = offsetX + 32.0;
      }
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         "Absolute",(System_String_o *)0x0,0.0,width,height,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,offsetX,
                         -10.0,0.0,0.0,(MethodInfo *)0x0);
      (__this_02->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,value);
      if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(control,__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230db60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347746 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347746 = '\x01';
  }
  if ((__this->fields)._layoutMode == 1) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    return pGVar1;
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlShellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230dd00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  System_String_o *direction;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_String_o *justify;
  float value;
  
  if (Il2CppMethodInitialized_184347747 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347747 = '\x01';
  }
  direction = "Row";
  if ((__this->fields)._layoutMode == 1) {
    value = 300.0;
    justify = "FlexEnd";
  }
  else {
    value = (__this->fields)._controlWidth;
    justify = "Center";
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (direction,justify,"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLaneLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLaneLayout (const MethodInfo* method);
// 0x18230da50

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLaneLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347748 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347748 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230e0e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  System_String_o *direction;
  System_String_o *alignItems;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_String_o *justify;
  float gap;
  
  if (Il2CppMethodInitialized_184347749 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347749 = '\x01';
  }
  alignItems = "Center";
  direction = "Row";
  justify = (System_String_o *)0x0;
  if ((__this->fields)._layoutMode == 1) {
    gap = 12.0;
    justify = "SpaceBetween";
  }
  else {
    gap = 14.0;
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (direction,justify,alignItems,(System_String_o *)0x0,(System_String_o *)0x0,gap,width,
                      height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,8.0,6.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$LabelLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__LabelLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230def0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__LabelLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float paddingLeft;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  float grow;
  
  if (Il2CppMethodInitialized_18434774a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_18434774a = '\x01';
  }
  if ((__this->fields)._dirtyValue == (System_Func_string__o *)0x0) {
    paddingLeft = 24.0;
  }
  else {
    paddingLeft = 0.0;
  }
  if ((__this->fields)._layoutMode == 1) {
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    grow = 1.0;
    width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    grow = 0.0;
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,paddingLeft,0.0,0.0,0.0,0.0,
                      0.0,grow,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$TooltipIconOffsetX
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__TooltipIconOffsetX (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230e2c0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__TooltipIconOffsetX
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  if ((__this->fields)._layoutMode != 1) {
    return ((__this->fields)._controlVisualWidth + (__this->fields)._controlWidth) * 0.5 + 8.0;
  }
  return 308.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$WarningIconOffsetX
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__WarningIconOffsetX (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x18230ec20

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__WarningIconOffsetX
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if ((__this->fields)._layoutMode == 1) {
    fVar2 = 308.0;
  }
  else {
    fVar2 = ((__this->fields)._controlVisualWidth + (__this->fields)._controlWidth) * 0.5 + 8.0;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltipKey,(MethodInfo *)0x0), bVar1)
     ) {
    return fVar2;
  }
  return fVar2 + 32.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__21_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x18230e5f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  float grow;
  float shrink;
  
  if (Il2CppMethodInitialized_18434774b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-control");
    Il2CppMethodInitialized_18434774b = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel(__this,row,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_1,
             (MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-control",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347746 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347746 = '\x01';
  }
  if ((__this->fields)._layoutMode == 1) {
    shrink = 0.0;
    grow = 0.0;
  }
  else {
    shrink = 1.0;
    grow = 1.0;
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,grow,
                      shrink,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__21_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18230e850
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230ea07: mov r9, r14
// asm:   0x18230ea0a: jmp 0x18230ebc5
// asm:   0x18230ebc2: mov r9, r12

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_String_o *direction;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *justify;
  float value;
  
  if (Il2CppMethodInitialized_18434774c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-control-lane");
    Il2CppMethodInitialized_18434774c = '\x01';
  }
  if ((__this->fields)._layoutMode == 1) {
    if (Il2CppMethodInitialized_184347740 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0);
      il2cpp_codegen_initialize_runtime_metadata(&"clear");
      il2cpp_codegen_initialize_runtime_metadata(&"-control-shell");
      Il2CppMethodInitialized_184347740 = '\x01';
    }
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0,
               (MethodInfo *)0x0);
    id = System_String__Concat_1969e50((__this->fields)._id,"-control-shell",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347747 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
      il2cpp_codegen_initialize_runtime_metadata(&"Center");
      il2cpp_codegen_initialize_runtime_metadata(&"Row");
      Il2CppMethodInitialized_184347747 = '\x01';
    }
    direction = "Row";
    if ((__this->fields)._layoutMode == 1) {
      value = 300.0;
      justify = "FlexEnd";
    }
    else {
      value = (__this->fields)._controlWidth;
      justify = "Center";
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       (direction,justify,"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,pGVar1,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell,
               (MethodInfo *)0x0);
    id = System_String__Concat_1969e50((__this->fields)._id,"-control-lane",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347748 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Center");
      il2cpp_codegen_initialize_runtime_metadata(&"Row");
      Il2CppMethodInitialized_184347748 = '\x01';
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
  }
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildControlShell>b__22_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildControlShell_b__22_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* shell, const MethodInfo* method);
// 0x18230e2f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildControlShell_b__22_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *shell,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  
  pSVar1 = (__this->fields)._buildControl;
  if (pSVar1 != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip(__this,shell,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildWarning(__this,shell,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildLabel>b__23_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildLabel_b__23_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x18230e350

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildLabel_b__23_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_18434774d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    Il2CppMethodInitialized_18434774d = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildDirtyMarker(__this,label,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._label;
  id = System_String__Concat_1969e50((__this->fields)._id,"-label",(MethodInfo *)0x0);
  if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (label,pSVar1,"settingLabel",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      if ((__this->fields)._layoutMode == 1) {
        pSVar1 = (__this->fields)._label;
        (pGVar3->fields).tooltip = pSVar1;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltip,pSVar1);
        pSVar1 = (__this->fields)._labelKey;
        (pGVar3->fields).tooltipKey = pSVar1;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltipKey,pSVar1);
        (pGVar3->fields).tooltipMode = "OverflowLabel";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltipMode,"OverflowLabel");
      }
      pSVar1 = (__this->fields)._labelKey;
      (pGVar3->fields).textKey = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey,pSVar1);
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._labelBindKey,(MethodInfo *)0x0);
      if (!bVar2) {
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_18230e5e3;
        pSVar1 = (__this->fields)._labelBindKey;
        (__this_00->fields).text = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_00);
      }
      minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(60.0,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,minWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
      (pGVar3->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value);
      return;
    }
  }
label_18230e5e3:
  ThrowNullReferenceException();
}


