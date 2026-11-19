// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingRowFrame.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, System_String_o* id, System_String_o* label, float controlWidth, System_Action_AottgUi__o* buildControl, System_String_o* tooltip, System_String_o* searchTitle, System_String_o* searchKeywords, System_String_o* icon, System_Nullable_float__o controlVisualWidth, System_String_o* labelKey, System_String_o* tooltipKey, System_String_o* labelBindKey, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o searchContext, System_Func_string__o* dirtyValue, System_String_o* warningVisibleKey, System_String_o* warningTooltipKey, int32_t layoutMode, const MethodInfo* method);
// 0x5dba430

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,System_String_o *id,
               System_String_o *label,float controlWidth,System_Action_AottgUi__o *buildControl,
               System_String_o *tooltip,System_String_o *searchTitle,System_String_o *searchKeywords,
               System_String_o *icon,System_Nullable_float__o controlVisualWidth,System_String_o *labelKey,
               System_String_o *tooltipKey,System_String_o *labelBindKey,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o searchContext,
               System_Func_string__o *dirtyValue,System_String_o *warningVisibleKey,
               System_String_o *warningTooltipKey,int32_t layoutMode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075481e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    Il2CppMethodInitialized_075481e4 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey);
  (__this->fields)._labelBindKey = labelBindKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelBindKey);
  (__this->fields)._controlWidth = controlWidth;
  if (controlVisualWidth.fields.hasValue != false) {
    controlWidth = controlVisualWidth.fields.value;
  }
  (__this->fields)._controlVisualWidth = controlWidth;
  (__this->fields)._buildControl = buildControl;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildControl);
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip);
  (__this->fields)._tooltipKey = tooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipKey);
  (__this->fields)._searchTitle = searchTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchTitle);
  (__this->fields)._searchKeywords = searchKeywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchKeywords);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon);
  (__this->fields)._warningVisibleKey = warningVisibleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._warningVisibleKey);
  (__this->fields)._warningTooltipKey = warningTooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._warningTooltipKey);
  (__this->fields)._searchContext.fields.GroupTitle = searchContext.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = searchContext.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = searchContext.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = searchContext.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = searchContext.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  (__this->fields)._dirtyValue = dirtyValue;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dirtyValue);
  (__this->fields)._layoutMode = layoutMode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dc9ca0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this_00;
  System_Func_string__o *value;
  bool bVar1;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *title;
  System_String_o *keywords;
  System_String_o *sectionTitle;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *method_01;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_075481e5 == '\0') {
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
    Il2CppMethodInitialized_075481e5 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._id,(MethodInfo *)0x0);
  if ((bVar1) || ((__this->fields)._buildControl == (System_Action_AottgUi__o *)0x0)) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout);
  }
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory((MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  method_01 = __this;
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_0,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar5 = (__this->fields)._id;
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__RootLayout(__this,(MethodInfo *)method_01);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"clear",__this_01,pSVar5,layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).type = "ResponsiveRowLayout";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type);
      pSVar5 = (System_String_o *)0x0;
      if ((__this->fields)._layoutMode == 1) {
        pSVar5 = "Compact";
      }
      (pGVar2->fields).value = pSVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
      __this_00 = &(__this->fields)._searchContext;
      bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
      ppSVar4 = &(__this->fields)._label;
      if (!bVar1) {
        ppSVar4 = &(__this->fields)._searchTitle;
      }
      title = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                        (__this_00,*ppSVar4,(MethodInfo *)0x0);
      keywords = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                           (__this_00,(__this->fields)._searchKeywords,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._icon;
      pSVar3 = (__this->fields)._searchContext.fields.CategoryId;
      sectionTitle = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
                               (__this_00,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_Code_AottgUi__Search
                            (title,keywords,false,pSVar5,"setting",pSVar3,sectionTitle,false,
                             (MethodInfo *)0x0);
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)method_00;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).search);
      pSVar5 = (__this->fields)._id;
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__DirtyPath(__this,method_00);
      value = (__this->fields)._dirtyValue;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__Register
                (pSVar5,pSVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildControlShell
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildControlShell (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dca150

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildControlShell
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-control-shell");
    Il2CppMethodInitialized_075481e6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0,
             (MethodInfo_4A81BE0 *)0x0);
  method_00 = (MethodInfo *)"-control-shell";
  id = System_String__Concat_52f0320((__this->fields)._id,"-control-shell",(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout(__this,method_00);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (control,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildLabel
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dca330

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildLabel_b__23_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-label-cell");
    Il2CppMethodInitialized_075481e7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildLabel_b__23_0,
             (MethodInfo_4A81BE0 *)0x0);
  method_00 = (MethodInfo *)"-label-cell";
  id = System_String__Concat_52f0320((__this->fields)._id,"-label-cell",(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__LabelLayout(__this,method_00);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$SearchTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dca060

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields)._label;
  if (!bVar1) {
    ppSVar3 = &(__this->fields)._searchTitle;
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                     (&(__this->fields)._searchContext,*ppSVar3,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$SearchKeywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__SearchKeywords (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dca0a0

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
// 0x5dca0b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__DirtyPath
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_075481e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_075481e8 = '\x01';
  }
  __this_00 = &(__this->fields)._searchContext;
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchTitle,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields)._label;
  if (!bVar1) {
    ppSVar3 = &(__this->fields)._searchTitle;
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                     (__this_00,*ppSVar3,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
                    (__this_00,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return pSVar2;
  }
  pSVar2 = System_String__Concat_5301f10(value," > ",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildDirtyMarker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildDirtyMarker (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dca5d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildDirtyMarker
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075481e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-dirty-marker");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSettingsDirtyMarker");
    Il2CppMethodInitialized_075481e9 = '\x01';
  }
  if ((__this->fields)._dirtyValue == (System_Func_string__o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RegisterFactory((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgSettingsDirtyMarker";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    pSVar1 = System_String__Concat_52f0320((__this->fields)._id,"-dirty-marker",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    pSVar1 = (__this->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    }
    pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyStateKey
                       (pSVar1,(MethodInfo *)0x0);
    (__this_00->fields).value = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(row,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildTooltip
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dca7e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075481ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-info");
    il2cpp_codegen_initialize_runtime_metadata(&"settingInfoIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/information");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_075481ea = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltipKey,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Image";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-info",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).sprite = "Icons/kenney-icons/information";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite);
    (__this_00->fields).style = "settingInfoIcon";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    (__this_00->fields).tooltip = (__this->fields)._tooltip;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip);
    (__this_00->fields).tooltipKey = (__this->fields)._tooltipKey;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltipKey);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075481f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_075481f1 = '\x01';
    }
    if ((__this->fields)._layoutMode == 1) {
      fVar4 = (__this->fields)._controlVisualWidth;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar4 = System_Math__Min_54baee0(fVar4,300.0,(MethodInfo *)0x0);
    }
    else {
      fVar4 = ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5;
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        "Absolute",(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,fVar4 + 8.0
                        ,-10.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(control,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildWarning
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildWarning (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dcab40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcac46: test r13, r13
// asm:   0x5dcac49: je 0x5dcad78
// asm:   0x5dcac4f: test r12, r12
// asm:   0x5dcac52: je 0x5dcad99

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildWarning
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_String_o *str0;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  float offsetX;
  
  if (Il2CppMethodInitialized_075481eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindConflictWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"-warning");
    Il2CppMethodInitialized_075481eb = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._warningVisibleKey,(MethodInfo *)0x0);
  if (!bVar1) {
    pMVar3 = (MethodInfo *)(__this->fields)._warningTooltipKey;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RegisterFactory(pMVar3);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_00->fields).type = "AottgKeybindConflictWarning";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
        pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-warning",(MethodInfo *)0x0);
        (__this_00->fields).id = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
        str0 = (__this->fields)._warningVisibleKey;
        pSVar2 = (__this->fields)._warningTooltipKey;
        if (Il2CppMethodInitialized_0754818c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"\n");
          Il2CppMethodInitialized_0754818c = '\x01';
        }
        if (str0 == (System_String_o *)0x0) {
          str0 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        if (pSVar2 == (System_String_o *)0x0) {
          pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        pMVar3 = (MethodInfo *)
                 System_String__Concat_5301f10(str0,"\n",pSVar2,(MethodInfo *)0x0);
        (__this_00->fields).value = (System_String_o *)pMVar3;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
        offsetX = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__WarningIconOffsetX(__this,pMVar3);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            "Absolute",(System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,offsetX
                            ,-10.0,0.0,0.0,(MethodInfo *)0x0);
        (__this_00->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
        if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Add(control,__this_00,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dcae90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float grow;
  float shrink;
  
  if (Il2CppMethodInitialized_075481ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075481ec = '\x01';
  }
  if ((__this->fields)._layoutMode == 1) {
    shrink = 0.0;
    grow = 0.0;
  }
  else {
    shrink = 1.0;
    grow = 1.0;
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,grow,
                      shrink,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlShellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dca230

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float value;
  
  if (Il2CppMethodInitialized_075481ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075481ed = '\x01';
  }
  if ((__this->fields)._layoutMode == 1) {
    value = 300.0;
  }
  else {
    value = (__this->fields)._controlWidth;
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexStart","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLaneLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLaneLayout (const MethodInfo* method);
// 0x5dcaf80

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLaneLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075481ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075481ee = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexStart","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dc9f10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  float gap;
  System_String_o *alignItems;
  System_String_o *direction;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_String_o *justify;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075481ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075481ef = '\x01';
  }
  direction = "Row";
  alignItems = "Center";
  bVar2 = (__this->fields)._layoutMode == 1;
  justify = (System_String_o *)0x0;
  if (bVar2) {
    justify = "SpaceBetween";
  }
  gap = *(float *)(&g_data_0100ac80 + (ulong)bVar2 * 4);
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
// 0x5dca410

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__LabelLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  float grow;
  float local_c;
  
  if (Il2CppMethodInitialized_075481f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075481f0 = '\x01';
  }
  if ((__this->fields)._dirtyValue == (System_Func_string__o *)0x0) {
    local_c = 24.0;
    iVar1 = (__this->fields)._layoutMode;
  }
  else {
    local_c = 0.0;
    iVar1 = (__this->fields)._layoutMode;
  }
  if (iVar1 == 1) {
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    grow = 1.0;
    width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    grow = 0.0;
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,local_c,0.0,0.0,0.0,0.0,0.0,
                      grow,1.0,(MethodInfo *)0x0);
  return pGVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$TooltipIconOffsetX
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__TooltipIconOffsetX (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dcaaa0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__TooltipIconOffsetX
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075481f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075481f1 = '\x01';
    iVar1 = (__this->fields)._layoutMode;
  }
  else {
    iVar1 = (__this->fields)._layoutMode;
  }
  if (iVar1 != 1) {
    return ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5 + 8.0;
  }
  fVar2 = (__this->fields)._controlVisualWidth;
  if ((((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar2 = System_Math__Min_54baee0(fVar2,300.0,(MethodInfo *)0x0);
  return fVar2 + 8.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$WarningIconOffsetX
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__WarningIconOffsetX (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x5dcadc0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__WarningIconOffsetX
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075481f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075481f1 = '\x01';
    iVar1 = (__this->fields)._layoutMode;
  }
  else {
    iVar1 = (__this->fields)._layoutMode;
  }
  if (iVar1 == 1) {
    fVar3 = (__this->fields)._controlVisualWidth;
    if ((((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar3 = System_Math__Min_54baee0(fVar3,300.0,(MethodInfo *)0x0);
  }
  else {
    fVar3 = ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5;
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
  if ((bVar2) && (bVar2 = System_String__IsNullOrEmpty((__this->fields)._tooltipKey,(MethodInfo *)0x0), bVar2)
     ) {
    return fVar3 + 8.0;
  }
  return fVar3 + 8.0 + 32.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__21_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dcb070

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-control");
    Il2CppMethodInitialized_075481f2 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel(__this,row,method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_1,
             (MethodInfo_4A81BE0 *)0x0);
  method_00 = (MethodInfo *)"-control";
  id = System_String__Concat_52f0320((__this->fields)._id,"-control",(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout(__this,method_00);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__21_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dcb150

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__21_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-control-lane");
    Il2CppMethodInitialized_075481f3 = '\x01';
    method = extraout_RDX;
  }
  if ((__this->fields)._layoutMode == 1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildControlShell(__this,control,method);
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell,
             (MethodInfo_4A81BE0 *)0x0);
  method_00 = (MethodInfo *)(__this->fields)._id;
  id = System_String__Concat_52f0320((System_String_o *)method_00,"-control-lane",(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLaneLayout(method_00);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (control,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildControlShell>b__22_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildControlShell_b__22_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* shell, const MethodInfo* method);
// 0x5dcb240

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildControlShell_b__22_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *shell,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pSVar1 = (__this->fields)._buildControl;
  if (pSVar1 == (System_Action_AottgUi__o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,shell,(pSVar1->fields).method);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip(__this,shell,method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildWarning(__this,shell,method_01);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildLabel>b__23_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildLabel_b__23_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x5dcb290

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildLabel_b__23_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  System_String_o *text;
  bool bVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075481f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    Il2CppMethodInitialized_075481f4 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildDirtyMarker(__this,label,method);
  text = (__this->fields)._label;
  id = System_String__Concat_52f0320((__this->fields)._id,"-label",(MethodInfo *)0x0);
  if (label == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
label_05dcb4d6:
    ThrowNullReferenceException();
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (label,text,"settingLabel",id,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((__this->fields)._layoutMode == 1) {
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05dcb4d6;
    (pGVar2->fields).tooltip = (__this->fields)._label;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).tooltip);
    (pGVar2->fields).tooltipKey = (__this->fields)._labelKey;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).tooltipKey);
    (pGVar2->fields).tooltipMode = "OverflowLabel";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).tooltipMode);
  }
  else if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05dcb4d6;
  (pGVar2->fields).textKey = (__this->fields)._labelKey;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._labelBindKey,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05dcb4d6;
    (__this_00->fields).text = (__this->fields)._labelBindKey;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    (pGVar2->fields).bind = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
  }
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(60.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  (pGVar2->fields).layout = pGVar3;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
  return;
}


