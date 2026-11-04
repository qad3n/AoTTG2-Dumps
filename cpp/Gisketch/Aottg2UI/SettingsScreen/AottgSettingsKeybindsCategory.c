// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsKeybindsCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___cctor (const MethodInfo* method);
// 0x1823a3570

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *__this;
  
  if (Il2CppMethodInitialized_184347ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    Il2CppMethodInitialized_184347ad9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9,
             __this);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$<Build>b__7_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__7_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x1823a21d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__7_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.KeybindsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsCategoryTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    Il2CppMethodInitialized_184347ada = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (title,"SettingsPopup.Top.KeybindsButton","Keybinds","settingsCategoryTitle",
                        "settings-keybinds-title",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$<Build>b__7_3
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__7_3 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o action, System_String_o* tabId, const MethodInfo* method);
// 0x1823a2380

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__7_3
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *action,System_String_o *tabId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectTab
            ((action->fields).GameObject,tabId,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass7_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* page, const MethodInfo* method);
// 0x1823a2c60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *page,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *object;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *value;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  undefined4 uVar6;
  System_String_o *categoryId;
  bool bVar7;
  bool bVar8;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *value_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *component;
  System_String_o *value_01;
  float fVar13;
  System_Nullable_float__Fields local_res10;
  
  if (Il2CppMethodInitialized_184347adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__7_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass7_0_Build_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-category-header");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-tab-header");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-active-content");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_184347adb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
  }
  pSVar2 = "clear";
  pUVar9 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9__7_1;
  if (pUVar9 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9;
    pUVar9 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar9,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__7_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9__7_1 =
         (System_Action_AottgUi__o *)pUVar9;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->
                __9__7_1,pUVar9);
  }
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,"Stretch",
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar10,pGVar11,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,88.0,98.0,0.0,0.0,0.0,
                       0.0,0.0,(MethodInfo *)0x0);
  if (page == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (page,pSVar2,(System_Action_AottgUi__o *)pUVar9,"settings-keybinds-category-header",pGVar12,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = "clear";
  pUVar9 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
  if (pUVar9 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar9 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar9,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass7_0_Build_b__2
               ,(MethodInfo *)0x0);
    (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar9);
  }
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,"Stretch",
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar10,pGVar11,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,88.0,0.0,0.0,0.0,0.0,
                       0.0,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (page,pSVar2,(System_Action_AottgUi__o *)pUVar9,"settings-keybinds-tab-header",pGVar12,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddSearchBridge(page,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).context.fields._group;
  iVar5 = (__this->fields).context.fields._order;
  uVar6 = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
  pSVar3 = (__this->fields).context.fields._SectionId_k__BackingField;
  pSVar4 = (__this->fields).context.fields._SectionTitle_k__BackingField;
  value_00 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,1);
  if (value_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    if ((int)value_00->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    value = (__this->fields).selectedGroup;
    value_00->m_Items[0] = value;
    Il2CppCodeGenWriteBarrier(value_00->m_Items,value);
    fVar1 = (__this->fields).scrollOffset;
    local_res10.hasValue = false;
    local_res10._1_3_ = 0;
    local_res10.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_res10,0.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    component = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    value_01 = "settings-keybinds-active-content";
    categoryId = "keybinds";
    bVar7 = local_res10.hasValue;
    fVar13 = local_res10.value;
    if (Il2CppMethodInitialized_184347b64 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
      Il2CppMethodInitialized_184347b64 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
    (component->fields)._context.fields._group = pSVar2;
    (component->fields)._context.fields._order = iVar5;
    *(undefined4 *)&(component->fields)._context.fields.field_0xc = uVar6;
    (component->fields)._context.fields._SectionId_k__BackingField = pSVar3;
    (component->fields)._context.fields._SectionTitle_k__BackingField = pSVar4;
    Il2CppCodeGenWriteBarrier((void **)&component->fields,(void *)0x0);
    (component->fields)._categoryId = categoryId;
    Il2CppCodeGenWriteBarrier(&(component->fields)._categoryId,categoryId);
    if (component != (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *)0x0) {
      (component->fields)._groups = value_00;
      Il2CppCodeGenWriteBarrier(&(component->fields)._groups,value_00);
      bVar8 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
      if (bVar8) {
        value_01 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                             (categoryId,(MethodInfo *)0x0);
      }
      (component->fields)._contentId = value_01;
      Il2CppCodeGenWriteBarrier(&(component->fields)._contentId,value_01);
      (component->fields)._initialScrollOffset = fVar1;
      if (bVar7 == false) {
        fVar13 = 98.0;
      }
      (component->fields)._paddingTop = fVar13;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (page,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass7_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___Build_b__2 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x1823a31f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___Build_b__2
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *selectedId;
  Il2CppObject *object;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Action_T1__T2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_01;
  
  if (Il2CppMethodInitialized_184347adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__7_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-tabs");
    Il2CppMethodInitialized_184347adc = '\x01';
  }
  tabs = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs((MethodInfo *)0x0);
  selectedId = (__this->fields).selectedTabId;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
  }
  id = "settings-keybinds-tabs";
  __this_00 = (System_Action_T1__T2__o *)
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->
              __9__7_3;
  if (__this_00 == (System_Action_T1__T2__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9;
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
    System_Action_GisketchActionContext__object____ctor
              (__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__7_3,
               (MethodInfo_1467A10 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9__7_3 =
         (System_Action_GisketchActionContext__string__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->
                __9__7_3,__this_00);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
  Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
            (__this_01,id,tabs,selectedId,(System_Action_GisketchActionContext__string__o *)__this_00,
             (MethodInfo *)0x0);
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (header,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x18231cd20

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    Il2CppMethodInitialized_184347790 = '\x01';
  }
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build_231c980
            (content,&local_28,"general",0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* selectedTabId, float scrollOffset, const MethodInfo* method);
// 0x18231c980

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build_231c980
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,System_String_o *selectedTabId,
               float scrollOffset,MethodInfo *method)

{
  System_String_o *__this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int32_t iVar5;
  undefined4 uVar6;
  bool bVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o *object;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar9;
  System_String_o *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_184347791 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass7_0_Build_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_184347791 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass7_0
                     );
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass7_0_o *)0x0)
  {
    (object->fields).selectedTabId = selectedTabId;
    Il2CppCodeGenWriteBarrier(&(object->fields).selectedTabId,selectedTabId);
    iVar5 = (context->fields)._order;
    uVar6 = *(undefined4 *)&(context->fields).field_0xc;
    uVar1 = *(undefined4 *)&(context->fields)._SectionId_k__BackingField;
    uVar2 = *(undefined4 *)((longlong)&(context->fields)._SectionId_k__BackingField + 4);
    uVar3 = *(undefined4 *)&(context->fields)._SectionTitle_k__BackingField;
    uVar4 = *(undefined4 *)((longlong)&(context->fields)._SectionTitle_k__BackingField + 4);
    (object->fields).context.fields._group = (context->fields)._group;
    (object->fields).context.fields._order = iVar5;
    *(undefined4 *)&(object->fields).context.fields.field_0xc = uVar6;
    *(undefined4 *)&(object->fields).context.fields._SectionId_k__BackingField = uVar1;
    *(undefined4 *)((longlong)&(object->fields).context.fields._SectionId_k__BackingField + 4) = uVar2;
    *(undefined4 *)&(object->fields).context.fields._SectionTitle_k__BackingField = uVar3;
    *(undefined4 *)((longlong)&(object->fields).context.fields._SectionTitle_k__BackingField + 4) = uVar4;
    Il2CppCodeGenWriteBarrier((void **)&(object->fields).context,(void *)0x0);
    (object->fields).scrollOffset = scrollOffset;
    pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                       ((object->fields).selectedTabId,(MethodInfo *)0x0);
    (object->fields).selectedTabId = pSVar8;
    Il2CppCodeGenWriteBarrier(&(object->fields).selectedTabId,pSVar8);
    pSVar8 = (object->fields).selectedTabId;
    if (Il2CppMethodInitialized_18434779a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_18434779a = '\x01';
    }
    pGVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups((MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
      for (uVar11 = 0; (int)uVar11 < (int)pGVar9->max_length; uVar11 = uVar11 + 1) {
        if ((uint)pGVar9->max_length <= uVar11) goto label_18231cd0f;
        if (pGVar9->m_Items[(int)uVar11] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
          __this = (pGVar9->m_Items[(int)uVar11]->fields)._id;
          value = System_String__Concat_1969e50("-",pSVar8,(MethodInfo *)0x0);
          if (__this == (System_String_o *)0x0) goto label_18231cd09;
          bVar7 = System_String__EndsWith_196bd20(__this,value,5,(MethodInfo *)0x0);
          if (bVar7) {
            if ((uint)pGVar9->max_length <= uVar11) goto label_18231cd0f;
            pGVar10 = pGVar9->m_Items[(int)uVar11];
            goto label_18231cb51;
          }
        }
      }
      if (pGVar9->max_length == 0) {
        pGVar10 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0;
      }
      else {
        if ((int)pGVar9->max_length == 0) {
label_18231cd0f:
          ThrowIndexOutOfRangeException();
        }
        pGVar10 = pGVar9->m_Items[0];
      }
label_18231cb51:
      (object->fields).selectedGroup = pGVar10;
      Il2CppCodeGenWriteBarrier(&(object->fields).selectedGroup,pGVar10);
      pGVar10 = (object->fields).selectedGroup;
      if (pGVar10 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
        (pGVar10->fields)._showHeader = false;
      }
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass7_0_Build_b__0
                 ,(MethodInfo *)0x0);
      pSVar8 = "keybinds";
      if (Il2CppMethodInitialized_184347764 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"settings-");
        il2cpp_codegen_initialize_runtime_metadata(&"-content");
        Il2CppMethodInitialized_184347764 = '\x01';
      }
      pSVar8 = System_String__Concat_1969b70
                         ("settings-",pSVar8,"-content",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (content,"clear",(System_Action_AottgUi__o *)__this_00,pSVar8,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18231cd09:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18231f0f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups (const MethodInfo* method);
// 0x18231d450
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231d567: mov rsi, r15
// asm:   0x18231d5cb: mov rsi, r15
// asm:   0x18231d628: mov rsi, r15
// asm:   0x18231d683: mov rsi, r15
// asm:   0x18231d6e0: mov rsi, r15
// asm:   0x18231d739: mov rdi, r15

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups(MethodInfo *method)

{
  Settings_InputSettings_o *settings;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar5;
  Settings_TitanInputSettings_o *pSVar6;
  Settings_TitanInputSettings_o *container;
  
  if (Il2CppMethodInitialized_184347792 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"eren-shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"annie-shifter");
    Il2CppMethodInitialized_184347792 = '\x01';
  }
  settings = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,6);
  pSVar2 = "general";
  pSVar1 = "General";
  container = (Settings_TitanInputSettings_o *)0x0;
  pSVar6 = container;
  if (settings != (Settings_InputSettings_o *)0x0) {
    pSVar6 = (Settings_TitanInputSettings_o *)(settings->fields).General;
  }
  pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GeneralSpecialRows
                     (settings,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,pSVar1,(Settings_BaseSettingsContainer_o *)pSVar6,false,pGVar4,(MethodInfo *)0x0)
  ;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar3->max_length != 0) {
    pGVar3->m_Items[0] = pGVar5;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items,pGVar5);
    pSVar2 = "Interaction";
    pSVar1 = "interaction";
    pSVar6 = container;
    if (settings != (Settings_InputSettings_o *)0x0) {
      pSVar6 = (Settings_TitanInputSettings_o *)(settings->fields).Interaction;
    }
    pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_AottgComponent);
    pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                       (pSVar1,pSVar2,(Settings_BaseSettingsContainer_o *)pSVar6,false,pGVar4,
                        (MethodInfo *)0x0);
    if (1 < (uint)pGVar3->max_length) {
      pGVar3->m_Items[1] = pGVar5;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1,pGVar5);
      pSVar2 = "human";
      pSVar1 = "Human";
      pSVar6 = container;
      if (settings != (Settings_InputSettings_o *)0x0) {
        pSVar6 = (Settings_TitanInputSettings_o *)(settings->fields).Human;
      }
      pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialRows
                         (settings,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                         (pSVar2,pSVar1,(Settings_BaseSettingsContainer_o *)pSVar6,false,pGVar4,
                          (MethodInfo *)0x0);
      if (2 < (uint)pGVar3->max_length) {
        pGVar3->m_Items[2] = pGVar5;
        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2,pGVar5);
        pSVar2 = "titan";
        pSVar1 = "Titan";
        pSVar6 = container;
        if (settings != (Settings_InputSettings_o *)0x0) {
          pSVar6 = (settings->fields).Titan;
        }
        pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                 il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_AottgComponent);
        pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                           (pSVar2,pSVar1,(Settings_BaseSettingsContainer_o *)pSVar6,true,pGVar4,
                            (MethodInfo *)0x0);
        if (3 < (uint)pGVar3->max_length) {
          pGVar3->m_Items[3] = pGVar5;
          Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3,pGVar5);
          pSVar2 = "Annie Shifter";
          pSVar1 = "annie-shifter";
          pSVar6 = container;
          if (settings != (Settings_InputSettings_o *)0x0) {
            pSVar6 = (Settings_TitanInputSettings_o *)(settings->fields).AnnieShifter;
          }
          pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_AottgComponent);
          pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                             (pSVar1,pSVar2,(Settings_BaseSettingsContainer_o *)pSVar6,true,pGVar4,
                              (MethodInfo *)0x0);
          if (4 < (uint)pGVar3->max_length) {
            pGVar3->m_Items[4] = pGVar5;
            Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 4,pGVar5);
            pSVar2 = "eren-shifter";
            pSVar1 = "Eren Shifter";
            if (settings != (Settings_InputSettings_o *)0x0) {
              container = (Settings_TitanInputSettings_o *)(settings->fields).ErenShifter;
            }
            pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                     il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_AottgComponent);
            pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                               (pSVar2,pSVar1,(Settings_BaseSettingsContainer_o *)container,true,pGVar4,
                                (MethodInfo *)0x0);
            if (5 < (uint)pGVar3->max_length) {
              pGVar3->m_Items[5] = pGVar5;
              Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 5,pGVar5);
              return pGVar3;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SelectedTab
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18231f030

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347793 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
    Il2CppMethodInitialized_184347793 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar2 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         ((root->fields)._State_k__BackingField,"settings.keybinds.selectedTab","general",
                          (MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                         (pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                     ("general",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$ScrollStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__ScrollStateKey (System_String_o* tabId, const MethodInfo* method);
// 0x18231e7a0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__ScrollStateKey
          (System_String_o *tabId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
    Il2CppMethodInitialized_184347794 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                     (tabId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("settings.keybinds.scroll.",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SavedScroll
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SavedScroll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* tabId, const MethodInfo* method);
// 0x18231e650

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SavedScroll
                (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *tabId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_Globalization_CultureInfo_o *provider;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347795 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347795 = '\x01';
  }
  local_res8[0] = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      __this = (root->fields)._State_k__BackingField;
      if (Il2CppMethodInitialized_184347794 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
        Il2CppMethodInitialized_184347794 = '\x01';
      }
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                         (tabId,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50("settings.keybinds.scroll.",pSVar2,(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (__this,pSVar2,"0",(MethodInfo *)0x0);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      System_Single__TryParse_1b4a540
                (pSVar2,0xa7,(System_IFormatProvider_o *)provider,local_res8,(MethodInfo *)0x0);
      return local_res8[0];
    }
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SelectTab
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectTab (UnityEngine_GameObject_o* source, System_String_o* tabId, const MethodInfo* method);
// 0x18231ecf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231ee61: mov rax, qword ptr [rip + 0x1dcfa70]  ; "general"

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectTab
               (UnityEngine_GameObject_o *source,System_String_o *tabId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o *b;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *root_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_184347796 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_18231f019;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (source,(MethodInfo_6F53B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  b = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(tabId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      if (Il2CppMethodInitialized_184347793 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&"general");
        il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
        Il2CppMethodInitialized_184347793 = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = "general";
      if ((bVar2) &&
         ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
        pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                           ((root->fields)._State_k__BackingField,"settings.keybinds.selectedTab","general",
                            (MethodInfo *)0x0);
      }
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                         (pSVar3,(MethodInfo *)0x0);
      bVar2 = System_String__Equals_196c550(pSVar3,b,5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab
                           (root,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184347797 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184347797 = '\x01';
        }
        local_res8[0] = 0.0;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          root_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
        }
        else {
          root_00 = (UnityEngine_Transform_o *)0x0;
        }
        __this = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll
                           (root_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pGVar1 = (root->fields)._State_k__BackingField;
          if (Il2CppMethodInitialized_184347794 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
            Il2CppMethodInitialized_184347794 = '\x01';
          }
          pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                             (pSVar3,(MethodInfo *)0x0);
          pSVar3 = System_String__Concat_1969e50("settings.keybinds.scroll.",pSVar3,(MethodInfo *)0x0);
          if (__this == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
label_18231f01f:
            ThrowNullReferenceException();
          }
          local_res8[0] =
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                         (__this,(MethodInfo *)0x0);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          value = System_Single__ToString_1b49fe0
                            (local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
          if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_18231f01f;
          Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar3,value,(MethodInfo *)0x0);
        }
        pGVar1 = (root->fields)._State_k__BackingField;
        if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_18231f019;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"settings.keybinds.selectedTab",b,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
                  (root,"keybinds",(MethodInfo *)0x0);
      }
    }
    return;
  }
label_18231f019:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SaveCurrentScroll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SaveCurrentScroll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* tabId, const MethodInfo* method);
// 0x18231e4d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SaveCurrentScroll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *tabId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar1;
  UnityEngine_Transform_o *root_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this_00;
  System_String_o *pSVar2;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347797 = '\x01';
  }
  local_res8[0] = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_18231e63b;
    root_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
  }
  else {
    root_00 = (UnityEngine_Transform_o *)0x0;
  }
  __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll
                        (root_00,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this = (root->fields)._State_k__BackingField;
    if (Il2CppMethodInitialized_184347794 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
      Il2CppMethodInitialized_184347794 = '\x01';
    }
    pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                       (tabId,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("settings.keybinds.scroll.",pSVar2,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
      local_res8[0] =
           Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                     (__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      value = System_Single__ToString_1b49fe0
                        (local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,pSVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18231e63b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$FindActiveScroll
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x18231cd90

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll
          (UnityEngine_Transform_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *x;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347798 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-active-content");
    Il2CppMethodInitialized_184347798 = '\x01';
  }
  x = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find
                (root,"settings-keybinds-active-content",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (UnityEngine_Transform_o *)0x0) {
      pGVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
      return pGVar2;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Find
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x18231ce30
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231cebf: nop 
// asm:   0x18231cf18: mov rax, rdi
// asm:   0x18231cf1b: jmp 0x18231cf24
// asm:   0x18231cf1d: mov rax, rsi
// asm:   0x18231cf20: jmp 0x18231cf24

UnityEngine_Transform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  UnityEngine_Transform_o *pUVar3;
  int index;
  
  if (Il2CppMethodInitialized_184347799 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347799 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar1 = System_String__Equals_196c550(a,id,5,(MethodInfo *)0x0);
    if (bVar1) {
      return root;
    }
    for (index = 0; iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0), index < iVar2;
        index = index + 1) {
      pUVar3 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      pUVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find
                         (pUVar3,id,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return pUVar3;
      }
    }
  }
  return (UnityEngine_Transform_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GroupFor
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupFor (System_String_o* tabId, const MethodInfo* method);
// 0x18231d170

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupFor
          (System_String_o *tabId,MethodInfo *method)

{
  System_String_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_18434779a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_18434779a = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups((MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_18231d253:
    ThrowNullReferenceException();
  }
  uVar4 = 0;
  do {
    if ((int)pGVar2->max_length <= (int)uVar4) {
      if (pGVar2->max_length == 0) {
        pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0;
      }
      else {
        if ((int)pGVar2->max_length == 0) {
label_18231d259:
          ThrowIndexOutOfRangeException();
        }
        pGVar3 = pGVar2->m_Items[0];
      }
      return pGVar3;
    }
    if ((uint)pGVar2->max_length <= uVar4) goto label_18231d259;
    if (pGVar2->m_Items[(int)uVar4] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
      __this = (pGVar2->m_Items[(int)uVar4]->fields)._id;
      value = System_String__Concat_1969e50("-",tabId,(MethodInfo *)0x0);
      if (__this == (System_String_o *)0x0) goto label_18231d253;
      bVar1 = System_String__EndsWith_196bd20(__this,value,5,(MethodInfo *)0x0);
      if (bVar1) {
        if (uVar4 < (uint)pGVar2->max_length) {
          return pGVar2->m_Items[(int)uVar4];
        }
        goto label_18231d259;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Tabs
// il2cpp: Gisketch_Aottg2UI_Game_AottgSubtab_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs (const MethodInfo* method);
// 0x18231f120

Gisketch_Aottg2UI_Game_AottgSubtab_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *pGVar2;
  
  if (Il2CppMethodInitialized_18434779b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&"interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"eren-shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"annie-shifter");
    Il2CppMethodInitialized_18434779b = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array,6);
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
  Gisketch_Aottg2UI_Game_AottgSubtab___ctor
            (pGVar2,"general","General",(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    if ((int)pGVar1->max_length != 0) {
      pGVar1->m_Items[0] = pGVar2;
      Il2CppCodeGenWriteBarrier(pGVar1->m_Items,pGVar2);
      pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
      Gisketch_Aottg2UI_Game_AottgSubtab___ctor
                (pGVar2,"interaction","Interaction",(MethodInfo *)0x0);
      if (1 < (uint)pGVar1->max_length) {
        pGVar1->m_Items[1] = pGVar2;
        Il2CppCodeGenWriteBarrier(pGVar1->m_Items + 1,pGVar2);
        pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
        Gisketch_Aottg2UI_Game_AottgSubtab___ctor
                  (pGVar2,"human","Human",(MethodInfo *)0x0);
        if (2 < (uint)pGVar1->max_length) {
          pGVar1->m_Items[2] = pGVar2;
          Il2CppCodeGenWriteBarrier(pGVar1->m_Items + 2,pGVar2);
          pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
          Gisketch_Aottg2UI_Game_AottgSubtab___ctor
                    (pGVar2,"titan","Titan",(MethodInfo *)0x0);
          if (3 < (uint)pGVar1->max_length) {
            pGVar1->m_Items[3] = pGVar2;
            Il2CppCodeGenWriteBarrier(pGVar1->m_Items + 3,pGVar2);
            pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
            Gisketch_Aottg2UI_Game_AottgSubtab___ctor
                      (pGVar2,"annie-shifter","Annie Shifter",(MethodInfo *)0x0);
            if (4 < (uint)pGVar1->max_length) {
              pGVar1->m_Items[4] = pGVar2;
              Il2CppCodeGenWriteBarrier(pGVar1->m_Items + 4,pGVar2);
              pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
              Gisketch_Aottg2UI_Game_AottgSubtab___ctor
                        (pGVar2,"eren-shifter","Eren Shifter",(MethodInfo *)0x0);
              if (5 < (uint)pGVar1->max_length) {
                pGVar1->m_Items[5] = pGVar2;
                Il2CppCodeGenWriteBarrier(pGVar1->m_Items + 5,pGVar2);
                return pGVar1;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$NormalizeTabId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId (System_String_o* tabId, const MethodInfo* method);
// 0x18231e410

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
          (System_String_o *tabId,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434779c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    Il2CppMethodInitialized_18434779c = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs((MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
label_18231e4c4:
    ThrowNullReferenceException();
  }
  uVar3 = 0;
  do {
    if ((int)pGVar2->max_length <= (int)uVar3) {
      return "general";
    }
    if ((uint)pGVar2->max_length <= uVar3) {
label_18231e4ca:
      ThrowIndexOutOfRangeException();
    }
    if (pGVar2->m_Items[(int)uVar3] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) goto label_18231e4c4;
    bVar1 = System_String__Equals_196c550
                      ((pGVar2->m_Items[(int)uVar3]->fields)._Id_k__BackingField,tabId,5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((uint)pGVar2->max_length <= uVar3) goto label_18231e4ca;
      if (pGVar2->m_Items[(int)uVar3] != (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
        return (pGVar2->m_Items[(int)uVar3]->fields)._Id_k__BackingField;
      }
      goto label_18231e4c4;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddSearchBridge
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddSearchBridge (Gisketch_Aottg2UI_Code_AottgUi_o* page, const MethodInfo* method);
// 0x18231c5f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddSearchBridge
               (Gisketch_Aottg2UI_Code_AottgUi_o *page,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_String_o *value;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar1;
  System_String_array *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_02;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434779d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-search-bridge");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindTabSearchBridge");
    Il2CppMethodInitialized_18434779d = '\x01';
  }
  if (Il2CppMethodInitialized_1843476f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_Build);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindTabSearchBridge");
    Il2CppMethodInitialized_1843476f4 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge->static_fields->_registered ==
      false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_Build,
               (MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) goto label_18231c965;
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgKeybindTabSearchBridge",__this_00,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge->static_fields->_registered = true;
  }
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs((MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pGVar1->max_length);
    for (uVar2 = 0; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
label_18231c96b:
        ThrowIndexOutOfRangeException();
      }
      if ((pGVar1->m_Items[(int)uVar2] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) ||
         (value_00 == (System_String_array *)0x0)) goto label_18231c965;
      if ((uint)value_00->max_length <= uVar2) goto label_18231c96b;
      value = (pGVar1->m_Items[(int)uVar2]->fields)._Id_k__BackingField;
      value_00->m_Items[(int)uVar2] = value;
      Il2CppCodeGenWriteBarrier(value_00->m_Items + (int)uVar2,value);
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "AottgKeybindTabSearchBridge";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"AottgKeybindTabSearchBridge");
      (__this_01->fields).id = "settings-keybinds-search-bridge";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).id,"settings-keybinds-search-bridge");
      (__this_01->fields).options = value_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).options,value_00);
      value_01 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchMetadata
                           ((MethodInfo *)0x0);
      (__this_01->fields).deferredChildren = value_01;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).deferredChildren,value_01);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      value_02 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
      (__this_01->fields).layout = value_02;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,value_02);
      if (page != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(page,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18231c965:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SearchMetadata
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchMetadata (const MethodInfo* method);
// 0x18231e7f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231e9a0: mov edi, ebp
// asm:   0x18231e9a2: mov eax, ebp

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchMetadata(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_InputSettings_o *pSVar3;
  System_String_array *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  System_String_o *group;
  MethodInfo *pMVar6;
  System_String_o *str1;
  uint uVar7;
  System_Collections_Generic_List_GisketchNodeDefinition__o *nodes;
  System_String_array_array *pSVar8;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  Settings_HumanInputSettings_o *container;
  Settings_HumanInputSettings_o *pSVar10;
  
  if (Il2CppMethodInitialized_18434779e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"eren-shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"annie-shifter");
    Il2CppMethodInitialized_18434779e = '\x01';
  }
  nodes = il2cpp_codegen_object_new
                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)nodes,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  container = (Settings_HumanInputSettings_o *)0x0;
  if (pSVar3 == (Settings_InputSettings_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
              (nodes,"interaction","Interaction",(Settings_BaseSettingsContainer_o *)0x0,false
               ,(MethodInfo *)0x0);
    pSVar10 = container;
  }
  else {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
              (nodes,"interaction","Interaction",
               (Settings_BaseSettingsContainer_o *)(pSVar3->fields).Interaction,false,(MethodInfo *)0x0);
    pSVar10 = (pSVar3->fields).Human;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
            (nodes,"human","Human",(Settings_BaseSettingsContainer_o *)pSVar10,
             false,(MethodInfo *)0x0);
  pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialMetadata
                     ((MethodInfo *)0x0);
  str1 = "human";
  group = "Human";
  if (Il2CppMethodInitialized_1843477a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_1843477a0 = '\x01';
  }
  pSVar10 = container;
  if (pSVar8 != (System_String_array_array *)0x0) {
    while (uVar7 = (uint)pSVar10, (int)uVar7 < (int)pSVar8->max_length) {
      if ((uint)pSVar8->max_length <= uVar7) {
label_18231eb70:
        ThrowIndexOutOfRangeException();
      }
      pSVar4 = pSVar8->m_Items[(int)uVar7];
      if (pSVar4 == (System_String_array *)0x0) goto label_18231eb6a;
      if (((int)pSVar4->max_length == 0) ||
         (id = System_String__Concat_1969590
                         ("settings-keybinds-",str1,"-",pSVar4->m_Items[0],
                          (MethodInfo *)0x0), (uint)pSVar8->max_length <= uVar7)) goto label_18231eb70;
      pSVar4 = pSVar8->m_Items[(int)uVar7];
      if (pSVar4 == (System_String_array *)0x0) goto label_18231eb6a;
      if ((uint)pSVar4->max_length < 2) goto label_18231eb70;
      item = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
                       (id,pSVar4->m_Items[1],group,(MethodInfo *)0x0);
      pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
      if (nodes == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_18231eb6a;
      piVar1 = &(nodes->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (nodes->fields)._items;
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_18231eb6a;
      uVar2 = (nodes->fields)._size;
      if (uVar2 < (uint)pGVar5->max_length) {
        (nodes->fields)._size = uVar2 + 1;
        if ((uint)pGVar5->max_length <= uVar2) goto label_18231eb70;
        pGVar5->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2,item);
        pSVar10 = (Settings_HumanInputSettings_o *)(ulonglong)(uVar7 + 1);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)nodes,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        pSVar10 = (Settings_HumanInputSettings_o *)(ulonglong)(uVar7 + 1);
      }
    }
    if (pSVar3 == (Settings_InputSettings_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
                (nodes,"titan","Titan",(Settings_BaseSettingsContainer_o *)0x0,
                 true,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
                (nodes,"annie-shifter","Annie Shifter",(Settings_BaseSettingsContainer_o *)0x0,
                 true,(MethodInfo *)0x0);
    }
    else {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
                (nodes,"titan","Titan",
                 (Settings_BaseSettingsContainer_o *)(pSVar3->fields).Titan,true,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
                (nodes,"annie-shifter","Annie Shifter",
                 (Settings_BaseSettingsContainer_o *)(pSVar3->fields).AnnieShifter,true,(MethodInfo *)0x0);
      container = (Settings_HumanInputSettings_o *)(pSVar3->fields).ErenShifter;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
              (nodes,"eren-shifter","Eren Shifter",(Settings_BaseSettingsContainer_o *)container
               ,true,(MethodInfo *)0x0);
    if (nodes != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      pUVar9 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)nodes,
                          (MethodInfo_929FE0 *)
                          MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pUVar9;
    }
  }
label_18231eb6a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddContainerMetadata
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata (System_Collections_Generic_List_GisketchNodeDefinition__o* nodes, System_String_o* id, System_String_o* title, Settings_BaseSettingsContainer_o* container, bool titanLabels, const MethodInfo* method);
// 0x18231bc00
// eh: try 0x18231bd05..0x18231bfa6 -> pad 0x183315b20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231bd0d: nop dword ptr [rax]
// asm:   0x18231be49: mov rdi, qword ptr [rip + 0x1d706f0]  ; "CoverNape"
// asm:   0x18231be50: jmp 0x18231be7b
// asm:   0x18231bf49: jmp 0x18231bf5f
// asm:   0x18231bf4b: lea rcx, [rsp + 0x48]
// asm:   0x18231bf50: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18231bf55: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18231bf5a: test rcx, rcx
// asm:   0x18231bf5d: jne 0x18231bfa6
// asm:   0x18231bfa6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
               (System_Collections_Generic_List_GisketchNodeDefinition__o *nodes,System_String_o *id,
               System_String_o *title,Settings_BaseSettingsContainer_o *container,bool titanLabels,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  longlong lVar6;
  bool bVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  ulonglong *puVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  ushort uVar15;
  System_String_o *pSVar16;
  Il2CppObject *local_res20;
  Il2CppObject *local_58 [2];
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_18434779f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_18434779f = '\x01';
  }
  pSVar16 = (System_String_o *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  local_58[0] = (Il2CppObject *)0x0;
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    pSVar3 = (container->fields).Settings;
    if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res20 = (Il2CppObject *)
                  (*(pSVar3->klass->vtable)._22_GetEnumerator.methodPtr)
                            (pSVar3,(pSVar3->klass->vtable)._22_GetEnumerator.method);
    local_48 = 0;
    local_40 = &local_res20;
    local_38 = local_58;
    while( true ) {
      if (local_res20 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
      pIVar10 = local_res20;
      if ((char)pvVar8 == '\0') break;
      if (local_res20 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_res20->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      if (uVar2 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        pSVar12 = pSVar16;
        do {
          if (pIVar5[(longlong)pSVar12].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar4->vtable + (pIVar5[(longlong)pSVar12].offset + 1);
            goto label_18231bd99;
          }
          uVar15 = (short)pSVar12 + 1;
          pSVar12 = (System_String_o *)(ulonglong)uVar15;
        } while (uVar15 < uVar2);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_18231bd99:
      pIVar10 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
      if (pIVar10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar10->klass->_1).element_class !=
          (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_System_Collections_DictionaryEntry);
      }
      puVar11 = il2cpp_object_unbox(pIVar10);
      if ((longlong *)puVar11[1] != (longlong *)0x0) {
        lVar6 = *(longlong *)puVar11[1];
        bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
           (*(Settings_KeybindSetting_c **)(*(longlong *)(lVar6 + 200) + -8 + (ulonglong)bVar1 * 8) ==
            TypeInfo_Settings_KeybindSetting)) {
          pSVar12 = (System_String_o *)*puVar11;
          pSVar13 = pSVar16;
          if (pSVar12 != (System_String_o *)0x0) {
            if (pSVar12->klass == g_data_184354e50) {
              pSVar13 = pSVar12;
            }
            if (pSVar13 == (System_String_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
          }
          if (((titanLabels) &&
              (bVar7 = System_String__op_Equality(pSVar13,"CoverNape1",(MethodInfo *)0x0),
              pSVar12 = "CoverNape", bVar7)) || (pSVar12 = pSVar13, titanLabels)) {
            if (pSVar12 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_String__StartsWith(pSVar12,"Attack",(MethodInfo *)0x0);
            if (bVar7) {
              if ("Attack" == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar12 = System_String__Substring
                                  (pSVar12,("Attack"->fields)._stringLength,(MethodInfo *)0x0);
            }
          }
          pSVar13 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId
                              (pSVar13,(MethodInfo *)0x0);
          pSVar13 = System_String__Concat_1969590
                              ("settings-keybinds-",id,"-",pSVar13,(MethodInfo *)0x0);
          pGVar14 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
                              (pSVar13,pSVar12,title,(MethodInfo *)0x0);
          if (nodes == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(nodes,pGVar14,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
        }
      }
    }
    local_58[0] = il2cpp_vm_Object_IsInst(local_res20,(Il2CppClass *)TypeInfo_System_IDisposable);
    if (local_58[0] != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_58[0]);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddMetadata
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddMetadata (System_Collections_Generic_List_GisketchNodeDefinition__o* nodes, System_String_o* id, System_String_o* title, System_String_array_array* metadata, const MethodInfo* method);
// 0x18231c460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231c4c9: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddMetadata
               (System_Collections_Generic_List_GisketchNodeDefinition__o *nodes,System_String_o *id,
               System_String_o *title,System_String_array_array *metadata,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  MethodInfo *pMVar5;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843477a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_1843477a0 = '\x01';
  }
  if (metadata != (System_String_array_array *)0x0) {
    uVar6 = 0;
    do {
      if ((int)metadata->max_length <= (int)uVar6) {
        return;
      }
      if ((uint)metadata->max_length <= uVar6) {
label_18231c5de:
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = metadata->m_Items[(int)uVar6];
      if (pSVar3 == (System_String_array *)0x0) break;
      if ((int)pSVar3->max_length == 0) goto label_18231c5de;
      id_00 = System_String__Concat_1969590
                        ("settings-keybinds-",id,"-",pSVar3->m_Items[0],(MethodInfo *)0x0);
      if ((uint)metadata->max_length <= uVar6) goto label_18231c5de;
      pSVar3 = metadata->m_Items[(int)uVar6];
      if (pSVar3 == (System_String_array *)0x0) break;
      if ((uint)pSVar3->max_length < 2) goto label_18231c5de;
      item = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
                       (id_00,pSVar3->m_Items[1],title,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
      if (nodes == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) break;
      piVar1 = &(nodes->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (nodes->fields)._items;
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
      uVar2 = (nodes->fields)._size;
      if (uVar2 < (uint)pGVar4->max_length) {
        (nodes->fields)._size = uVar2 + 1;
        if ((uint)pGVar4->max_length <= uVar2) goto label_18231c5de;
        pGVar4->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar2,item);
        uVar6 = uVar6 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)nodes,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        uVar6 = uVar6 + 1;
      }
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SearchNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode (System_String_o* id, System_String_o* label, System_String_o* group, const MethodInfo* method);
// 0x18231eb80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
          (System_String_o *id,System_String_o *label,System_String_o *group,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *keywords;
  System_String_o *sectionTitle;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value;
  
  if (Il2CppMethodInitialized_1843477a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonA");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings Keybinds ");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds > ");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_1843477a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
    keywords = System_String__Concat_1969590
                         ("Settings Keybinds ",group," ",label,(MethodInfo *)0x0);
    sectionTitle = System_String__Concat_1969e50("Keybinds > ",group,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Search
                      (label,keywords,false,"buttonA","setting","keybinds",
                       sectionTitle,false,(MethodInfo *)0x0);
    (__this->fields).search = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).search,value);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$HumanSpecialMetadata
// il2cpp: System_String_array_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialMetadata (const MethodInfo* method);
// 0x18231d7a0

System_String_array_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialMetadata(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array_array *pSVar2;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_1843477a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Wall slide attach");
    il2cpp_codegen_initialize_runtime_metadata(&"auto-refill-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"wall-slide-dash");
    il2cpp_codegen_initialize_runtime_metadata(&"Wall slide dash");
    il2cpp_codegen_initialize_runtime_metadata(&"auto-use-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"reel-out-scroll-smoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"swap-ts-attack-special");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto use gas");
    il2cpp_codegen_initialize_runtime_metadata(&"wall-slide-attach");
    il2cpp_codegen_initialize_runtime_metadata(&"reel-in-holding");
    il2cpp_codegen_initialize_runtime_metadata(&"dash-double-tap");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel out scroll smoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash double tap");
    il2cpp_codegen_initialize_runtime_metadata(&"Swap TS attack special");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel in holding");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto refill gas");
    Il2CppMethodInitialized_1843477a2 = '\x01';
  }
  pSVar2 = (System_String_array_array *)SZArrayNew(TypeInfo_string_array_array,8);
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "dash-double-tap";
  if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = "dash-double-tap";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
    pSVar1 = "Dash double tap";
    if (1 < (uint)pSVar3->max_length) {
      pSVar3->m_Items[1] = "Dash double tap";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
      if (pSVar2 == (System_String_array_array *)0x0) {
label_18231dc49:
        ThrowNullReferenceException();
      }
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = pSVar3;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
        pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar1 = "wall-slide-dash";
        if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
        if ((int)pSVar3->max_length != 0) {
          pSVar3->m_Items[0] = "wall-slide-dash";
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
          pSVar1 = "Wall slide dash";
          if (1 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[1] = "Wall slide dash";
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
            if (1 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[1] = pSVar3;
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3);
              pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              pSVar1 = "wall-slide-attach";
              if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
              if ((int)pSVar3->max_length != 0) {
                pSVar3->m_Items[0] = "wall-slide-attach";
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
                pSVar1 = "Wall slide attach";
                if (1 < (uint)pSVar3->max_length) {
                  pSVar3->m_Items[1] = "Wall slide attach";
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
                  if (2 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[2] = pSVar3;
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar3);
                    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                    pSVar1 = "auto-use-gas";
                    if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
                    if ((int)pSVar3->max_length != 0) {
                      pSVar3->m_Items[0] = "auto-use-gas";
                      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
                      pSVar1 = "Auto use gas";
                      if (1 < (uint)pSVar3->max_length) {
                        pSVar3->m_Items[1] = "Auto use gas";
                        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
                        if (3 < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[3] = pSVar3;
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar3);
                          pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          pSVar1 = "auto-refill-gas";
                          if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
                          if ((int)pSVar3->max_length != 0) {
                            pSVar3->m_Items[0] = "auto-refill-gas";
                            Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
                            pSVar1 = "Auto refill gas";
                            if (1 < (uint)pSVar3->max_length) {
                              pSVar3->m_Items[1] = "Auto refill gas";
                              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
                              if (4 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[4] = pSVar3;
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar3);
                                pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar1 = "swap-ts-attack-special";
                                if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
                                if ((int)pSVar3->max_length != 0) {
                                  pSVar3->m_Items[0] = "swap-ts-attack-special";
                                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
                                  pSVar1 = "Swap TS attack special";
                                  if (1 < (uint)pSVar3->max_length) {
                                    pSVar3->m_Items[1] = "Swap TS attack special";
                                    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
                                    if (5 < (uint)pSVar2->max_length) {
                                      pSVar2->m_Items[5] = pSVar3;
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar3);
                                      pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      pSVar1 = "reel-in-holding";
                                      if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
                                      if ((int)pSVar3->max_length != 0) {
                                        pSVar3->m_Items[0] = "reel-in-holding";
                                        Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
                                        pSVar1 = "Reel in holding";
                                        if (1 < (uint)pSVar3->max_length) {
                                          pSVar3->m_Items[1] = "Reel in holding";
                                          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
                                          if (6 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[6] = pSVar3;
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar3);
                                            pSVar3 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            pSVar1 = "reel-out-scroll-smoothing";
                                            if (pSVar3 == (System_String_array *)0x0) goto label_18231dc49;
                                            if ((int)pSVar3->max_length != 0) {
                                              pSVar3->m_Items[0] = "reel-out-scroll-smoothing";
                                              Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
                                              pSVar1 = "Reel out scroll smoothing";
                                              if (1 < (uint)pSVar3->max_length) {
                                                pSVar3->m_Items[1] = "Reel out scroll smoothing";
                                                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
                                                if (7 < (uint)pSVar2->max_length) {
                                                  pSVar2->m_Items[7] = pSVar3;
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar3);
                                                  return pSVar2;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Group
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group (System_String_o* id, System_String_o* title, Settings_BaseSettingsContainer_o* container, bool titanLabels, Gisketch_Aottg2UI_Code_AottgComponent_array* extraRows, const MethodInfo* method);
// 0x18231d260
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231d428: jmp 0x18231d3f1

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
          (System_String_o *id,System_String_o *title,Settings_BaseSettingsContainer_o *container,
          bool titanLabels,Gisketch_Aottg2UI_Code_AottgComponent_array *extraRows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *rows;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843477a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_1843477a3 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    if (title == (System_String_o *)0x0) goto label_18231d438;
    pSVar2 = System_String__Replace_1970e80
                       (title," ",(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                        ,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddKeybindRows
              ((System_Collections_Generic_List_AottgComponent__o *)__this,id,pSVar2,container,titanLabels,
               (MethodInfo *)0x0);
  }
  if (extraRows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    pSVar2 = System_String__Concat_1969e50("settings-keybinds-",id,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_18231d438;
  }
  else {
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_18231d438;
    System_Collections_Generic_List_object___AddRange
              (__this,(System_Collections_Generic_IEnumerable_T__o *)extraRows,
               (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_AottgComponent_AddRange);
    pSVar2 = System_String__Concat_1969e50("settings-keybinds-",id,(MethodInfo *)0x0);
  }
  rows = System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_T__o *)__this,
                    (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
            (__this_00,pSVar2,title,(Gisketch_Aottg2UI_Code_AottgComponent_array *)rows,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
    uVar3 = 0;
    pGVar1 = (__this_00->fields)._blocks;
    while (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return __this_00;
      }
      pGVar1 = (__this_00->fields)._blocks;
      if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar1->m_Items[(int)uVar3] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
                  (pGVar1->m_Items[(int)uVar3],0,(MethodInfo *)0x0);
      }
      uVar3 = uVar3 + 1;
      pGVar1 = (__this_00->fields)._blocks;
    }
  }
label_18231d438:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddKeybindRows
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddKeybindRows (System_Collections_Generic_List_AottgComponent__o* rows, System_String_o* id, System_String_o* sub, Settings_BaseSettingsContainer_o* container, bool titanLabels, const MethodInfo* method);
// 0x18231bfc0
// eh: try 0x18231c0f7..0x18231c44f -> pad 0x183315b20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231c239: mov rdi, qword ptr [rip + 0x1d70300]  ; "CoverNape"
// asm:   0x18231c240: jmp 0x18231c307
// asm:   0x18231c275: mov r14, rdi
// asm:   0x18231c304: mov rdi, rbx
// asm:   0x18231c3f9: lea rcx, [rsp + 0x48]
// asm:   0x18231c3fe: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18231c403: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18231c408: test rcx, rcx
// asm:   0x18231c40b: jne 0x18231c44f
// asm:   0x18231c44f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddKeybindRows
               (System_Collections_Generic_List_AottgComponent__o *rows,System_String_o *id,
               System_String_o *sub,Settings_BaseSettingsContainer_o *container,bool titanLabels,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  longlong *plVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this;
  System_String_o *displayMember;
  System_String_o *pSVar12;
  ushort uVar13;
  System_String_o *pSVar14;
  Il2CppObject *local_res20;
  Il2CppObject *local_68 [2];
  undefined8 local_58;
  Il2CppObject **local_50;
  Il2CppObject **local_48;
  
  if (Il2CppMethodInitialized_1843477a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.");
    Il2CppMethodInitialized_1843477a4 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_68[0] = (Il2CppObject *)0x0;
  if ((container == (Settings_BaseSettingsContainer_o *)0x0) ||
     (pSVar3 = (container->fields).Settings,
     pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_res20 = (Il2CppObject *)
                (*(pSVar3->klass->vtable)._22_GetEnumerator.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._22_GetEnumerator.method);
  local_58 = 0;
  local_50 = &local_res20;
  local_48 = local_68;
  do {
    if (local_res20 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
    pIVar9 = local_res20;
    if ((char)pvVar7 == '\0') {
      local_68[0] = il2cpp_vm_Object_IsInst(local_res20,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_68[0] != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_68[0]);
      }
      return;
    }
    if (local_res20 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_res20->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      uVar13 = 0;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar4->vtable + (pIVar5[uVar13].offset + 1);
          goto label_18231c189;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar2);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_18231c189:
    pIVar9 = (*pVVar8->methodPtr)(pIVar9,pVVar8->method);
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar9->klass->_1).element_class != (TypeInfo_System_Collections_DictionaryEntry->_1).element_class)
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar9,TypeInfo_System_Collections_DictionaryEntry);
    }
    plVar10 = il2cpp_object_unbox(pIVar9);
    pSVar12 = (System_String_o *)plVar10[1];
    if (pSVar12 != (System_String_o *)0x0) {
      bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar12->klass->_2).typeHierarchyDepth) &&
         ((pSVar12->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
        pSVar14 = (System_String_o *)*plVar10;
        pSVar11 = (System_String_o *)0x0;
        if (pSVar14 != (System_String_o *)0x0) {
          if (pSVar14->klass == g_data_184354e50) {
            pSVar11 = pSVar14;
          }
          if (pSVar11 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
        }
        if ((titanLabels) &&
           ((bVar6 = System_String__op_Equality(pSVar11,"CoverNape1",(MethodInfo *)0x0),
            pSVar14 = "CoverNape", bVar6 || (pSVar14 = pSVar11, titanLabels)))) {
          if (pSVar14 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = System_String__StartsWith(pSVar14,"Attack",(MethodInfo *)0x0);
          displayMember = pSVar14;
          if (bVar6) {
            if ("Attack" == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            displayMember =
                 System_String__Substring
                           (pSVar14,("Attack"->fields)._stringLength,(MethodInfo *)0x0);
          }
        }
        else {
          bVar6 = false;
          pSVar14 = pSVar11;
          displayMember = pSVar11;
        }
        pSVar11 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId
                            (pSVar11,(MethodInfo *)0x0);
        pSVar11 = System_String__Concat_1969590
                            ("settings-keybinds-",id,"-",pSVar11,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow);
        Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor
                  ((System_ComponentModel_LookupBindingPropertiesAttribute_o *)__this,pSVar11,displayMember,
                   pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *)0x0) {
          ThrowNullReferenceException();
        }
        (__this->fields).WarnOnConflict = true;
        (__this->fields).ConflictScopeId = id;
        Il2CppCodeGenWriteBarrier(&(__this->fields).ConflictScopeId,id);
        if (bVar6 == false) {
          if (titanLabels) {
            pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key
                                ("Keybinds.Titan",pSVar14,(MethodInfo *)0x0);
          }
          else {
            pSVar12 = System_String__Concat_1969e50("Keybinds.",sub,(MethodInfo *)0x0);
            pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key
                                (pSVar12,pSVar14,(MethodInfo *)0x0);
          }
        }
        else {
          pSVar12 = (System_String_o *)0x0;
        }
        (__this->fields).LabelKey = pSVar12;
        Il2CppCodeGenWriteBarrier(&(__this->fields).LabelKey,pSVar12);
        if (rows == (System_Collections_Generic_List_AottgComponent__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(rows,__this,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
      }
    }
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GeneralSpecialRows
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GeneralSpecialRows (Settings_InputSettings_o* settings, const MethodInfo* method);
// 0x18231cf40

Gisketch_Aottg2UI_Code_AottgComponent_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GeneralSpecialRows
          (Settings_InputSettings_o *settings,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *pSVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_1843477a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Tap scoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"TapScoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-general-tap-scoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-general-tap-map");
    il2cpp_codegen_initialize_runtime_metadata(&"TapScoreboardTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"TapMapTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Tap map");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.General");
    il2cpp_codegen_initialize_runtime_metadata(&"TapMap");
    Il2CppMethodInitialized_1843477a5 = '\x01';
  }
  if (settings == (Settings_InputSettings_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
    return pGVar2;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
  pSVar1 = (settings->fields).General;
  if (pSVar1 != (Settings_GeneralInputSettings_o *)0x0) {
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-general-tap-scoreboard","Keybinds.General","TapScoreboard",
                        (pSVar1->fields).TapScoreboard,"Tap scoreboard","TapScoreboardTooltip",
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                       );
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)pGVar2->max_length != 0) {
        pGVar2->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
        Il2CppCodeGenWriteBarrier(pGVar2->m_Items,pIVar3);
        pSVar1 = (settings->fields).General;
        if (pSVar1 == (Settings_GeneralInputSettings_o *)0x0) goto label_18231d167;
        pIVar3 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-keybinds-general-tap-map","Keybinds.General","TapMap",
                            (pSVar1->fields).TapMap,"Tap map","TapMapTooltip",
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                            (MethodInfo *)0x0);
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)pGVar2->max_length) {
          pGVar2->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
          Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1,pIVar3);
          return pGVar2;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18231d167:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$HumanSpecialRows
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialRows (Settings_InputSettings_o* settings, const MethodInfo* method);
// 0x18231dc60

Gisketch_Aottg2UI_Code_AottgComponent_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialRows
          (Settings_InputSettings_o *settings,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_IntSetting_o *setting;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_array *options;
  
  if (Il2CppMethodInitialized_1843477a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Wall slide attach");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGasTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Wall slide dash");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDash");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttachTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-dash-double-tap");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-auto-refill-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"Strafe");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-wall-slide-dash");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-reel-in-holding");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-reel-out-scroll-smoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-auto-use-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-wall-slide-attach");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttach");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto use gas");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGas");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel out scroll smoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"DashDoubleTap");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHolding");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash double tap");
    il2cpp_codegen_initialize_runtime_metadata(&"Swap TS attack special");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel in holding");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-swap-ts-attack-special");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDashTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHoldingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoRefillGas");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto refill gas");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecialTooltip");
    Il2CppMethodInitialized_1843477a6 = '\x01';
  }
  if (settings == (Settings_InputSettings_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
    return pGVar3;
  }
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
  pSVar1 = (settings->fields).Human;
  if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-human-dash-double-tap","Keybinds.Human","DashDoubleTap",
                        (pSVar1->fields).DashDoubleTap,"Dash double tap",(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                       );
    if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if ((int)pGVar3->max_length == 0) {
label_18231e3fc:
        ThrowIndexOutOfRangeException();
      }
      pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items,pIVar4);
      pSVar1 = (settings->fields).Human;
      if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-keybinds-human-wall-slide-dash","Keybinds.Human","WallSlideDash",
                            (pSVar1->fields).WallSlideDash,"Wall slide dash","WallSlideDashTooltip",
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                            (MethodInfo *)0x0);
        if (pIVar4 != (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
        }
        if ((uint)pGVar3->max_length < 2) goto label_18231e3fc;
        pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1,pIVar4);
        pSVar1 = (settings->fields).Human;
        if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
          setting = (pSVar1->fields).WallSlideAttach;
          options = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
          pSVar2 = "None";
          if (options != (System_String_array *)0x0) {
            if ((int)options->max_length != 0) {
              options->m_Items[0] = "None";
              Il2CppCodeGenWriteBarrier(options->m_Items,pSVar2);
              pSVar2 = "Strafe";
              if (1 < (uint)options->max_length) {
                options->m_Items[1] = "Strafe";
                Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar2);
                pSVar2 = "Auto";
                if (2 < (uint)options->max_length) {
                  options->m_Items[2] = "Auto";
                  Il2CppCodeGenWriteBarrier(options->m_Items + 2,pSVar2);
                  pIVar4 = (Il2CppObject *)
                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                     ("settings-keybinds-human-wall-slide-attach","Keybinds.Human","WallSlideAttach",
                                      setting,"Wall slide attach",options,"WallSlideAttachTooltip",
                                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                      (MethodInfo *)0x0);
                  if (pIVar4 != (Il2CppObject *)0x0) {
                    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
                    if (pIVar5 == (Il2CppObject *)0x0) {
                      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                    }
                  }
                  if (2 < (uint)pGVar3->max_length) {
                    pGVar3->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
                    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2,pIVar4);
                    pSVar1 = (settings->fields).Human;
                    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_18231e402;
                    pIVar4 = (Il2CppObject *)
                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                       ("settings-keybinds-human-auto-use-gas","Keybinds.Human","AutoUseGas",
                                        (pSVar1->fields).AutoUseGas,"Auto use gas",
                                        "AutoUseGasTooltip",(System_String_o *)0x0,
                                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                    if (pIVar4 != (Il2CppObject *)0x0) {
                      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
                      if (pIVar5 == (Il2CppObject *)0x0) {
                        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                      }
                    }
                    if (3 < (uint)pGVar3->max_length) {
                      pGVar3->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
                      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3,pIVar4);
                      pSVar1 = (settings->fields).Human;
                      if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_18231e402;
                      pIVar4 = (Il2CppObject *)
                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                         ("settings-keybinds-human-auto-refill-gas","Keybinds.Human","AutoRefillGas",
                                          (pSVar1->fields).AutoRefillGas,"Auto refill gas",
                                          (System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                      if (pIVar4 != (Il2CppObject *)0x0) {
                        pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
                        if (pIVar5 == (Il2CppObject *)0x0) {
                          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                        }
                      }
                      if (4 < (uint)pGVar3->max_length) {
                        pGVar3->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
                        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 4,pIVar4);
                        pSVar1 = (settings->fields).Human;
                        if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_18231e402;
                        pIVar4 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                           ("settings-keybinds-human-swap-ts-attack-special","Keybinds.Human","SwapTSAttackSpecial",
                                            (pSVar1->fields).SwapTSAttackSpecial,"Swap TS attack special",
                                            "SwapTSAttackSpecialTooltip",(System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                        if (pIVar4 != (Il2CppObject *)0x0) {
                          pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
                          if (pIVar5 == (Il2CppObject *)0x0) {
                            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                          }
                        }
                        if (5 < (uint)pGVar3->max_length) {
                          pGVar3->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
                          Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 5,pIVar4);
                          pSVar1 = (settings->fields).Human;
                          if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_18231e402;
                          pIVar4 = (Il2CppObject *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                             ("settings-keybinds-human-reel-in-holding","Keybinds.Human",
                                              "ReelInHolding",(pSVar1->fields).ReelInHolding,
                                              "Reel in holding","ReelInHoldingTooltip",
                                              (System_String_o *)0x0,
                                              (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0)
                          ;
                          if (pIVar4 != (Il2CppObject *)0x0) {
                            pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class)
                            ;
                            if (pIVar5 == (Il2CppObject *)0x0) {
                              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                            }
                          }
                          if (6 < (uint)pGVar3->max_length) {
                            pGVar3->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
                            Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 6,pIVar4);
                            pSVar1 = (settings->fields).Human;
                            if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_18231e402;
                            pIVar4 = (Il2CppObject *)
                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                               ("settings-keybinds-human-reel-out-scroll-smoothing","Keybinds.Human",
                                                "ReelOutScrollSmoothing",(pSVar1->fields).ReelOutScrollSmoothing,
                                                "Reel out scroll smoothing","ReelOutScrollSmoothingTooltip",
                                                (System_String_o *)0x0,
                                                (System_Action_GisketchActionContext__o *)0x0,
                                                (MethodInfo *)0x0);
                            if (pIVar4 != (Il2CppObject *)0x0) {
                              pIVar5 = il2cpp_vm_Object_IsInst
                                                 (pIVar4,(((pGVar3->obj).klass)->_1).element_class);
                              if (pIVar5 == (Il2CppObject *)0x0) {
                                pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                              }
                            }
                            if (7 < (uint)pGVar3->max_length) {
                              pGVar3->m_Items[7] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
                              Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 7,pIVar4);
                              return pGVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_18231e3fc;
          }
        }
      }
    }
  }
label_18231e402:
  ThrowNullReferenceException();
}


