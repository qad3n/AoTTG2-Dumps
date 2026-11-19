// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsKeybindsCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___cctor (const MethodInfo* method);
// 0x5e46a60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075485f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    Il2CppMethodInitialized_075485f2 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c
                     );
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, const MethodInfo* method);
// 0x5e46ad0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$<Build>b__9_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__9_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x5e46ae0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__9_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075485f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.KeybindsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsCategoryTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-title");
    Il2CppMethodInitialized_075485f3 = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (title,"SettingsPopup.Top.KeybindsButton","settingsCategoryTitle","settings-keybinds-title",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$<Build>b__9_3
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__9_3 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o action, System_String_o* tabId, const MethodInfo* method);
// 0x5e46c30

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c___Build_b__9_3
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o action,System_String_o *tabId,
               MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075485f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    Il2CppMethodInitialized_075485f4 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    method = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectTab
            (action.fields.GameObject,tabId,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5e42c00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass9_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* page, const MethodInfo* method);
// 0x5e46c90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *page,MethodInfo *method)

{
  float initialScrollOffset;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context;
  System_String_o *style;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this_00;
  MethodInfo *method_00;
  System_Nullable_float__Fields SStack_60;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  
  if (Il2CppMethodInitialized_075485f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__9_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0_Build_b__2
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
    Il2CppMethodInitialized_075485f5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields;
  pSVar2 = pGVar1->__9__9_1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__9_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields;
    pGVar1->__9__9_1 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__9_1);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,88.0,98.0,0.0,0.0,0.0,
                      0.0,0.0,(MethodInfo *)0x0);
  if (page != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (page,style,pSVar2,"settings-keybinds-category-header",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)"clear";
    pSVar2 = (__this->fields).__9__2;
    if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0_Build_b__2
                 ,(MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__2 = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,88.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (page,(System_String_o *)method_00,pSVar2,"settings-keybinds-tab-header",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddSearchBridge(page,method_00);
    pSStack_58 = (__this->fields).context.fields._group;
    uStack_50 = *(undefined8 *)&(__this->fields).context.fields._order;
    pSStack_48 = (__this->fields).context.fields._SectionId_k__BackingField;
    pSStack_40 = (__this->fields).context.fields._SectionTitle_k__BackingField;
    groups = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,1);
    if (groups != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
      if ((int)groups->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      groups->m_Items[0] = (__this->fields).selectedGroup;
      Il2CppCodeGenWriteBarrier(groups->m_Items);
      initialScrollOffset = (__this->fields).scrollOffset;
      SStack_60.hasValue = false;
      SStack_60._1_3_ = 0;
      SStack_60.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&SStack_60,0.0,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
      context.fields._8_8_ = uStack_50;
      context.fields._group = pSStack_58;
      context.fields._SectionId_k__BackingField = pSStack_48;
      context.fields._SectionTitle_k__BackingField = pSStack_40;
      Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
                (__this_00,context,"keybinds",groups,"settings-keybinds-active-content",initialScrollOffset,
                 (System_Nullable_float__o)SStack_60,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (page,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass9_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0___Build_b__2 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x5e47120

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0___Build_b__2
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *selectedId;
  Il2CppObject *object;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_StaticFields *pGVar1;
  System_Action_T1__T2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c *method_00;
  
  if (Il2CppMethodInitialized_075485f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__9_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-tabs");
    Il2CppMethodInitialized_075485f6 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  tabs = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs((MethodInfo *)method_00);
  selectedId = (__this->fields).selectedTabId;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
  }
  id = "settings-keybinds-tabs";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields;
  __this_00 = (System_Action_T1__T2__o *)pGVar1->__9__9_3;
  if (__this_00 == (System_Action_T1__T2__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
    System_Action_GisketchActionContext__object____ctor
              (__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__9_3,
               (MethodInfo_4A88E80 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c->static_fields;
    pGVar1->__9__9_3 = (System_Action_GisketchActionContext__string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__9_3);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
  Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
            (__this_01,id,tabs,selectedId,(System_Action_GisketchActionContext__string__o *)__this_00,
             (MethodInfo *)0x0);
  if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (header,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e428f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075485d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    Il2CppMethodInitialized_075485d3 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build_5d42950
            (content,context,"general",0.0,in_RDX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, System_String_o* selectedTabId, float scrollOffset, const MethodInfo* method);
// 0x5e42950

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build_5d42950
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,System_String_o *selectedTabId,
               float scrollOffset,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o *__this;
  MethodInfo *pMVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar2;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075485d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0_Build_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_075485d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c__DisplayClass9_0_o *)0x0)
  {
    (__this->fields).selectedTabId = selectedTabId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).selectedTabId);
    (__this->fields).context.fields._SectionId_k__BackingField = context.fields._SectionId_k__BackingField;
    (__this->fields).context.fields._SectionTitle_k__BackingField =
         context.fields._SectionTitle_k__BackingField;
    (__this->fields).context.fields._group = context.fields._group;
    (__this->fields).context.fields._order = context.fields._order;
    *(undefined4 *)&(__this->fields).context.fields.field_0xc = context.fields._12_4_;
    pMVar1 = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).context);
    (__this->fields).scrollOffset = scrollOffset;
    pSVar3 = (__this->fields).selectedTabId;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    pMVar1 = (MethodInfo *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(pSVar3,pMVar1);
    (__this->fields).selectedTabId = (System_String_o *)pMVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).selectedTabId);
    pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupFor
                       ((__this->fields).selectedTabId,pMVar1);
    (__this->fields).selectedGroup = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).selectedGroup);
    pGVar2 = (__this->fields).selectedGroup;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
      (pGVar2->fields)._showHeader = false;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0_Build_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    pSVar3 = "keybinds";
    if (Il2CppMethodInitialized_075485a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"settings-");
      il2cpp_codegen_initialize_runtime_metadata(&"-content");
      Il2CppMethodInitialized_075485a5 = '\x01';
    }
    pSVar3 = System_String__Concat_5301f10
                       ("settings-",pSVar3,"-content",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"clear",__this_00,pSVar3,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e42e40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c *method_01;
  
  if (Il2CppMethodInitialized_075485d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    Il2CppMethodInitialized_075485d5 = '\x01';
  }
  method_01 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups((MethodInfo *)method_01);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups (const MethodInfo* method);
// 0x5e42e90
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e430c3: jmp 0x5e43022
// asm:   0x5e43224: jmp 0x5e43180
// asm:   0x5e43325: jmp 0x5e43284
// asm:   0x5e4342c: jmp 0x5e43385

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups(MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *settings;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar5;
  Il2CppClass *pIVar6;
  MethodInfo *pMVar7;
  MethodInfo *in_R8;
  Settings_ErenShifterInputSettings_o *container;
  Settings_GeneralInputSettings_o *container_00;
  Settings_InteractionInputSettings_o *container_01;
  Settings_HumanInputSettings_o *container_02;
  Settings_TitanInputSettings_o *container_03;
  Settings_AnnieShifterInputSettings_o *container_04;
  
  if (Il2CppMethodInitialized_075485d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"eren-shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    il2cpp_codegen_initialize_runtime_metadata(&"annie-shifter");
    Il2CppMethodInitialized_075485d6 = '\x01';
  }
  settings = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  pMVar7 = (MethodInfo *)&g_data_00000006;
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,6);
  pSVar2 = "general";
  if (settings == (Settings_InputSettings_o *)0x0) {
    container_00 = (Settings_GeneralInputSettings_o *)0x0;
  }
  else {
    container_00 = (settings->fields).General;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GeneralSpecialRows(settings,pMVar7)
  ;
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,(Settings_BaseSettingsContainer_o *)container_00,false,pGVar4,in_R8);
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar3->max_length == 0) goto label_05e43431;
  pGVar3->m_Items[0] = pGVar5;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
  pSVar2 = "interaction";
  pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
  if (settings == (Settings_InputSettings_o *)0x0) {
    container_01 = (Settings_InteractionInputSettings_o *)0x0;
  }
  else {
    container_01 = (settings->fields).Interaction;
  }
  if ((MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
    pIVar6 = *(Il2CppClass **)((long)(pMVar7->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) == 0) goto label_05e43094;
label_05e42ffc:
    if ((pIVar6->_2).cctor_finished_or_no_cctor != 0) goto label_05e43009;
label_05e430a9:
    il2cpp_codegen_runtime_class_init(pIVar6);
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  else {
    pIVar6 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) != 0) goto label_05e42ffc;
label_05e43094:
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) goto label_05e430a9;
label_05e43009:
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pGVar4 = *(Gisketch_Aottg2UI_Code_AottgComponent_array **)pIVar6->static_fields;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,(Settings_BaseSettingsContainer_o *)container_01,false,pGVar4,in_R8);
  if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e43431;
  pGVar3->m_Items[1] = pGVar5;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
  pSVar2 = "human";
  if (settings == (Settings_InputSettings_o *)0x0) {
    container_02 = (Settings_HumanInputSettings_o *)0x0;
  }
  else {
    container_02 = (settings->fields).Human;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialRows
                     (settings,(MethodInfo *)pGVar5);
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,(Settings_BaseSettingsContainer_o *)container_02,false,pGVar4,in_R8);
  if ((uint)pGVar3->max_length < 3) goto label_05e43431;
  pGVar3->m_Items[2] = pGVar5;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
  pSVar2 = "titan";
  pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
  if (settings == (Settings_InputSettings_o *)0x0) {
    container_03 = (Settings_TitanInputSettings_o *)0x0;
  }
  else {
    container_03 = (settings->fields).Titan;
  }
  if ((MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
    pIVar6 = *(Il2CppClass **)((long)(pMVar7->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) == 0) goto label_05e431f5;
label_05e4315a:
    if ((pIVar6->_2).cctor_finished_or_no_cctor != 0) goto label_05e43167;
label_05e4320a:
    il2cpp_codegen_runtime_class_init(pIVar6);
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  else {
    pIVar6 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) != 0) goto label_05e4315a;
label_05e431f5:
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) goto label_05e4320a;
label_05e43167:
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pGVar4 = *(Gisketch_Aottg2UI_Code_AottgComponent_array **)pIVar6->static_fields;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,(Settings_BaseSettingsContainer_o *)container_03,true,pGVar4,in_R8);
  if ((pGVar3->max_length & 0xfffffffc) == 0) goto label_05e43431;
  pGVar3->m_Items[3] = pGVar5;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3);
  pSVar2 = "annie-shifter";
  pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
  if (settings == (Settings_InputSettings_o *)0x0) {
    container_04 = (Settings_AnnieShifterInputSettings_o *)0x0;
  }
  else {
    container_04 = (settings->fields).AnnieShifter;
  }
  if ((MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
    pIVar6 = *(Il2CppClass **)((long)(pMVar7->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) == 0) goto label_05e432f6;
label_05e4325e:
    if ((pIVar6->_2).cctor_finished_or_no_cctor != 0) goto label_05e4326b;
label_05e4330b:
    il2cpp_codegen_runtime_class_init(pIVar6);
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  else {
    pIVar6 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) != 0) goto label_05e4325e;
label_05e432f6:
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) goto label_05e4330b;
label_05e4326b:
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pGVar4 = *(Gisketch_Aottg2UI_Code_AottgComponent_array **)pIVar6->static_fields;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,(Settings_BaseSettingsContainer_o *)container_04,true,pGVar4,in_R8);
  if ((uint)pGVar3->max_length < 5) goto label_05e43431;
  pGVar3->m_Items[4] = pGVar5;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 4);
  pSVar2 = "eren-shifter";
  pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
  if (settings == (Settings_InputSettings_o *)0x0) {
    container = (Settings_ErenShifterInputSettings_o *)0x0;
  }
  else {
    container = (settings->fields).ErenShifter;
  }
  if ((MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
    pIVar6 = *(Il2CppClass **)((long)(pMVar7->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) == 0) goto label_05e433fd;
label_05e4335f:
    if ((pIVar6->_2).cctor_finished_or_no_cctor != 0) goto label_05e4336c;
label_05e43412:
    il2cpp_codegen_runtime_class_init(pIVar6);
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  else {
    pIVar6 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgComponent->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar6->_2).bitflags1 & 1) != 0) goto label_05e4335f;
label_05e433fd:
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) goto label_05e43412;
label_05e4336c:
    pIVar6 = (pMVar7->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pGVar4 = *(Gisketch_Aottg2UI_Code_AottgComponent_array **)pIVar6->static_fields;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
                     (pSVar2,(Settings_BaseSettingsContainer_o *)container,true,pGVar4,in_R8);
  if (5 < (uint)pGVar3->max_length) {
    pGVar3->m_Items[5] = pGVar5;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 5);
    return pGVar3;
  }
label_05e43431:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SelectedTab
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e43d60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e43e0e: jmp 0x5e43e36

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075485d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
    Il2CppMethodInitialized_075485d7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = (root->fields)._State_k__BackingField;
    if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      method_00 = (MethodInfo *)"settings.keybinds.selectedTab";
      pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (__this,"settings.keybinds.selectedTab","general",(MethodInfo *)0x0);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
              cctor_finished_or_no_cctor;
      goto joined_r0x05e43e0c;
    }
  }
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
          cctor_finished_or_no_cctor;
  pSVar3 = "general";
joined_r0x05e43e0c:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(pSVar3,method_00);
    return pSVar3;
  }
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(pSVar3,method_00);
  return pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$ScrollStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__ScrollStateKey (System_String_o* tabId, const MethodInfo* method);
// 0x5e43e50

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__ScrollStateKey
          (System_String_o *tabId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075485d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
    Il2CppMethodInitialized_075485d8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(tabId,method);
  pSVar1 = System_String__Concat_52f0320("settings.keybinds.scroll.",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SavedScroll
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SavedScroll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* tabId, const MethodInfo* method);
// 0x5e43ec0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e43f76: cmp byte ptr [rip + 0x170465b], 0
// asm:   0x5e43f7d: je 0x5e44022

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SavedScroll
                (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *tabId,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  float local_1c;
  
  if (Il2CppMethodInitialized_075485d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075485d9 = '\x01';
  }
  local_1c = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return 0.0;
  }
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (root->fields)._State_k__BackingField;
  if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return 0.0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  if (Il2CppMethodInitialized_075485d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
    Il2CppMethodInitialized_075485d8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(tabId,method_00);
  pSVar3 = System_String__Concat_52f0320("settings.keybinds.scroll.",pSVar3,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get(__this,pSVar3,"0",(MethodInfo *)0x0)
  ;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Single__TryParse_54d11a0
            (pSVar3,0xa7,(System_IFormatProvider_o *)provider,&local_1c,(MethodInfo *)0x0);
  return local_1c;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SelectTab
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectTab (UnityEngine_GameObject_o* source, System_String_o* tabId, const MethodInfo* method);
// 0x5e44060

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectTab
               (UnityEngine_GameObject_o *source,System_String_o *tabId,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *pMVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_075485da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_075485da = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_05e441fa;
    pMVar2 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (source,(MethodInfo_353BB40 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pMVar2 = (MethodInfo *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(tabId,pMVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_05e441fa:
      ThrowNullReferenceException();
    }
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
      }
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab(root,pMVar4);
      pMVar4 = pMVar2;
      bVar1 = System_String__Equals_52ffe30(pSVar3,(System_String_o *)pMVar2,5,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
        }
        pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab(root,pMVar4);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SaveCurrentScroll
                  (root,pSVar3,method_00);
        __this = (root->fields)._State_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__Set
                    (__this,"settings.keybinds.selectedTab",(System_String_o *)pMVar2,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
                    (root,"keybinds",(MethodInfo *)0x0);
          return;
        }
        goto label_05e441fa;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SaveCurrentScroll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SaveCurrentScroll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* tabId, const MethodInfo* method);
// 0x5e44200

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SaveCurrentScroll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *tabId,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar2;
  uint in_EAX;
  UnityEngine_Transform_o *root_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this_00;
  System_String_o *pSVar3;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value;
  MethodInfo *pMVar4;
  float fVar5;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_075485db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075485db = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root_00 = (UnityEngine_Transform_o *)0x0;
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e443ee;
    pMVar4 = (MethodInfo *)0x0;
    root_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll(root_00,pMVar4)
  ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e443ee;
  __this = (root->fields)._State_k__BackingField;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    if (Il2CppMethodInitialized_075485d8 == '\0') goto label_05e443b4;
label_05e44307:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075485d8 != '\0') goto label_05e44307;
label_05e443b4:
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
    Il2CppMethodInitialized_075485d8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId(tabId,pMVar4);
  pSVar3 = System_String__Concat_52f0320("settings.keybinds.scroll.",pSVar3,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
    fVar5 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                      (__this_00,(MethodInfo *)0x0);
    uStack_38 = CONCAT44(fVar5,(uint)uStack_38);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    value = System_Single__ToString_54d09f0
                      ((float *)((long)&uStack_38 + 4),(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
    ;
    if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,pSVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
label_05e443ee:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$FindActiveScroll
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x5e44400

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll
          (UnityEngine_Transform_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *x;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *pGVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075485dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-active-content");
    Il2CppMethodInitialized_075485dc = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    in_RDX = extraout_RDX_00;
  }
  x = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find(root,"settings-keybinds-active-content",in_RDX);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)x,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
    return pGVar2;
  }
  return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Find
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x5e444c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4456f: lea rbp, [rip + 0x14311e2]  ; TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory
// asm:   0x5e44576: nop word ptr cs:[rax + rax]

UnityEngine_Transform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Transform_o *pUVar3;
  int index;
  
  if (Il2CppMethodInitialized_075485dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075485dd = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  if (!bVar1) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar1 = System_String__Equals_52ffe30(a,id,5,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = root;
    }
    else {
      index = 0;
      iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)0x0;
      if (0 < iVar2) {
        do {
          pUVar3 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
          method_00 = extraout_RDX;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory)
            ;
            method_00 = extraout_RDX_00;
          }
          pUVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Find(pUVar3,id,method_00);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            return pUVar3;
          }
          index = index + 1;
          iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Transform_o *)0x0;
        } while (index < iVar2);
      }
    }
  }
  return pUVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GroupFor
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupFor (System_String_o* tabId, const MethodInfo* method);
// 0x5e42d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e42d44: jmp 0x5e42e36

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupFor
          (System_String_o *tabId,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar3;
  il2cpp_array_size_t iVar4;
  System_String_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar5;
  ulong uVar6;
  Il2CppClass *klass;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o **ppGVar7;
  
  if (Il2CppMethodInitialized_075485de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075485de = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory;
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups((MethodInfo *)klass);
  }
  else {
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Groups((MethodInfo *)klass);
  }
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_05e42e36:
    ThrowNullReferenceException();
  }
  iVar4 = pGVar3->max_length;
  if (0 < (int)iVar4) {
    ppGVar7 = pGVar3->m_Items;
    uVar6 = 0;
    do {
      if ((iVar4 & 0xffffffff) <= uVar6) goto label_05e42e31;
      if (*ppGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
        __this = ((*ppGVar7)->fields)._id;
        value = System_String__Concat_52f0320("-",tabId,(MethodInfo *)0x0);
        if (__this == (System_String_o *)0x0) goto label_05e42e36;
        bVar2 = System_String__EndsWith_52ff780(__this,value,5,(MethodInfo *)0x0);
        if (bVar2) {
          if ((uint)pGVar3->max_length <= (uint)uVar6) goto label_05e42e31;
          goto label_05e42e1e;
        }
        iVar4 = pGVar3->max_length;
      }
      uVar6 = uVar6 + 1;
      ppGVar7 = ppGVar7 + 1;
    } while ((long)uVar6 < (long)(int)iVar4);
  }
  if (iVar4 == 0) {
    pGVar5 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0;
  }
  else {
    if ((int)iVar4 == 0) {
label_05e42e31:
      ThrowIndexOutOfRangeException();
    }
    ppGVar7 = pGVar3->m_Items;
label_05e42e1e:
    pGVar5 = *ppGVar7;
  }
  return pGVar5;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Tabs
// il2cpp: Gisketch_Aottg2UI_Game_AottgSubtab_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs (const MethodInfo* method);
// 0x5e44600
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4463a: jmp 0x5e4480d
// asm:   0x5e446d6: nop word ptr cs:[rax + rax]
// asm:   0x5e447aa: jmp 0x5e446e0

Gisketch_Aottg2UI_Game_AottgSubtab_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs(MethodInfo *method)

{
  uint length;
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_String_array *pSVar5;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *__this;
  long lVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_075485df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    Il2CppMethodInitialized_075485df = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor != 0) goto label_05e4462b;
label_05e4467e:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) goto label_05e4467e;
label_05e4462b:
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds;
  }
  if (pSVar5 == (System_String_array *)0x0) {
label_05e4480d:
    ThrowNullReferenceException();
  }
  length = (uint)pSVar5->max_length;
  method_00 = (MethodInfo *)(ulong)length;
  pGVar3 = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array,length);
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds;
    if (pSVar5 == (System_String_array *)0x0) goto label_05e4480d;
    if ((int)pSVar5->max_length < 1) {
      return (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
      pSVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds;
      if (pSVar5 == (System_String_array *)0x0) goto label_05e4480d;
    }
    if ((int)pSVar5->max_length != 0) {
      pSVar2 = pSVar5->m_Items[0];
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupTitle(pSVar2,method_00);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
      Gisketch_Aottg2UI_Game_AottgSubtab___ctor(__this,pSVar2,pSVar4,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
    while( true ) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
      }
      pSVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds;
      if (pSVar5 == (System_String_array *)0x0) goto label_05e4480d;
      if ((long)(int)pSVar5->max_length <= (long)uVar7) {
        return pGVar3;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
        pSVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->
                 TabIds;
        if (pSVar5 == (System_String_array *)0x0) goto label_05e4480d;
      }
      if ((uint)pSVar5->max_length <= uVar7) break;
      pSVar2 = pSVar5->m_Items[uVar7];
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupTitle(pSVar2,method_00);
      method_00 = (MethodInfo *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
      Gisketch_Aottg2UI_Game_AottgSubtab___ctor
                ((Gisketch_Aottg2UI_Game_AottgSubtab_o *)method_00,pSVar2,pSVar4,(MethodInfo *)0x0);
      if ((uint)pGVar3->max_length <= uVar7) break;
      pGVar3->m_Items[uVar7] = (Gisketch_Aottg2UI_Game_AottgSubtab_o *)method_00;
      Il2CppCodeGenWriteBarrier((void **)((long)pGVar3->m_Items + lVar6));
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
              cctor_finished_or_no_cctor;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$NormalizeTabId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId (System_String_o* tabId, const MethodInfo* method);
// 0x5e42c10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e42c42: jmp 0x5e42cf7
// asm:   0x5e42cd3: jmp 0x5e42cea

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
          (System_String_o *tabId,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar4;
  uint uVar5;
  Il2CppClass *klass;
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_075485e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    Il2CppMethodInitialized_075485e0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory;
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs((MethodInfo *)klass);
  }
  else {
    pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Tabs((MethodInfo *)klass);
  }
  if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
label_05e42cf7:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)pGVar4->max_length;
  ppSVar6 = &"general";
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) {
label_05e42cfc:
        ThrowIndexOutOfRangeException();
      }
      if (pGVar4->m_Items[(int)uVar5] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) goto label_05e42cf7;
      bVar2 = System_String__Equals_52ffe30
                        ((pGVar4->m_Items[(int)uVar5]->fields)._Id_k__BackingField,tabId,5,(MethodInfo *)0x0);
      if (bVar2) {
        if ((uint)pGVar4->max_length <= uVar5) goto label_05e42cfc;
        if (pGVar4->m_Items[(int)uVar5] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) goto label_05e42cf7;
        ppSVar6 = &(pGVar4->m_Items[(int)uVar5]->fields)._Id_k__BackingField;
        break;
      }
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pGVar4->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  return ((Gisketch_Aottg2UI_Game_AottgSubtab_Fields *)ppSVar6)->_Id_k__BackingField;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddSearchBridge
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddSearchBridge (Gisketch_Aottg2UI_Code_AottgUi_o* page, const MethodInfo* method);
// 0x5e44930

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddSearchBridge
               (Gisketch_Aottg2UI_Code_AottgUi_o *page,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075485e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-search-bridge");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindTabSearchBridge");
    Il2CppMethodInitialized_075485e1 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__RegisterFactory((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "AottgKeybindTabSearchBridge";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = "settings-keybinds-search-bridge";
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    method_00 = (MethodInfo *)&(__this->fields).options;
    (__this->fields).options =
         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds;
    Il2CppCodeGenWriteBarrier((void **)method_00);
    pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchMetadata(method_00);
    (__this->fields).deferredChildren = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).deferredChildren);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
    if (page != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(page,__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SearchMetadata
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchMetadata (const MethodInfo* method);
// 0x5e44b00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e44ebe: jmp 0x5e44e85

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchMetadata(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  Settings_InputSettings_o *pSVar4;
  System_String_array *pSVar5;
  System_String_o *str3;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_GisketchNodeDefinition__o *nodes;
  System_String_array_array *pSVar7;
  System_String_o *id;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  Settings_HumanInputSettings_o *container;
  Settings_ErenShifterInputSettings_o *container_00;
  MethodInfo *in_R8;
  uint uVar10;
  Settings_InteractionInputSettings_o *container_01;
  Settings_TitanInputSettings_o *container_02;
  Settings_AnnieShifterInputSettings_o *container_03;
  
  if (Il2CppMethodInitialized_075485e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"eren-shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-");
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    il2cpp_codegen_initialize_runtime_metadata(&"annie-shifter");
    Il2CppMethodInitialized_075485e2 = '\x01';
  }
  nodes = il2cpp_codegen_object_new
                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)nodes,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  pSVar8 = "interaction";
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar4 == (Settings_InputSettings_o *)0x0) {
    container_01 = (Settings_InteractionInputSettings_o *)0x0;
  }
  else {
    container_01 = (pSVar4->fields).Interaction;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  container = (Settings_HumanInputSettings_o *)0x0;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
            (nodes,pSVar8,(Settings_BaseSettingsContainer_o *)container_01,false,in_R8);
  pSVar8 = "human";
  if (pSVar4 != (Settings_InputSettings_o *)0x0) {
    container = (pSVar4->fields).Human;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  uVar10 = 0;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
            (nodes,pSVar8,(Settings_BaseSettingsContainer_o *)container,false,in_R8);
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    pSVar8 = "titan";
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->
             HumanSpecialItems;
    if (pSVar7 == (System_String_array_array *)0x0) goto label_05e44f51;
    if ((int)pSVar7->max_length <= (int)uVar10) break;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->
               HumanSpecialItems;
      if (pSVar7 == (System_String_array_array *)0x0) goto label_05e44f51;
    }
    if ((uint)pSVar7->max_length <= uVar10) {
label_05e44f56:
      ThrowIndexOutOfRangeException();
    }
    pSVar5 = pSVar7->m_Items[(int)uVar10];
    if (pSVar5 == (System_String_array *)0x0) goto label_05e44f51;
    if ((int)pSVar5->max_length == 0) goto label_05e44f56;
    id = System_String__Concat_52f0320("settings-keybinds-human-",pSVar5->m_Items[0],(MethodInfo *)0x0);
    pSVar8 = "Keybinds.Human";
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->
             HumanSpecialItems;
    if (pSVar7 == (System_String_array_array *)0x0) goto label_05e44f51;
    if ((uint)pSVar7->max_length <= uVar10) goto label_05e44f56;
    pSVar5 = pSVar7->m_Items[(int)uVar10];
    if (pSVar5 == (System_String_array *)0x0) goto label_05e44f51;
    if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05e44f56;
    str3 = pSVar5->m_Items[1];
    if (Il2CppMethodInitialized_0754862d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
      il2cpp_codegen_initialize_runtime_metadata(&".");
      Il2CppMethodInitialized_0754862d = '\x01';
    }
    in_R8 = (MethodInfo *)0x0;
    pSVar8 = System_String__Concat_5302810
                       ("SettingsPopup.",pSVar8,".",str3,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar8,(MethodInfo *)0x0);
    item = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
                     (id,pSVar8,"human",(MethodInfo *)&"human");
    pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    if (nodes == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_05e44f51;
    piVar1 = &(nodes->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar9 = (nodes->fields)._items;
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_05e44f51;
    uVar2 = (nodes->fields)._size;
    if (uVar2 < (uint)pGVar9->max_length) {
      (nodes->fields)._size = uVar2 + 1;
      pGVar9->m_Items[(int)uVar2] = item;
      Il2CppCodeGenWriteBarrier(pGVar9->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)nodes,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    uVar10 = uVar10 + 1;
  }
  if (pSVar4 == (Settings_InputSettings_o *)0x0) {
    container_02 = (Settings_TitanInputSettings_o *)0x0;
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    container_02 = (pSVar4->fields).Titan;
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
            (nodes,pSVar8,(Settings_BaseSettingsContainer_o *)container_02,true,in_R8);
  pSVar8 = "annie-shifter";
  if (pSVar4 == (Settings_InputSettings_o *)0x0) {
    container_03 = (Settings_AnnieShifterInputSettings_o *)0x0;
  }
  else {
    container_03 = (pSVar4->fields).AnnieShifter;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
            (nodes,pSVar8,(Settings_BaseSettingsContainer_o *)container_03,true,in_R8);
  pSVar8 = "eren-shifter";
  if (pSVar4 == (Settings_InputSettings_o *)0x0) {
    container_00 = (Settings_ErenShifterInputSettings_o *)0x0;
  }
  else {
    container_00 = (pSVar4->fields).ErenShifter;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
            (nodes,pSVar8,(Settings_BaseSettingsContainer_o *)container_00,true,in_R8);
  if (nodes != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)nodes,
                        (MethodInfo_395F5A0 *)
                        MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    return pGVar9;
  }
label_05e44f51:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddContainerMetadata
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata (System_Collections_Generic_List_GisketchNodeDefinition__o* nodes, System_String_o* tabId, Settings_BaseSettingsContainer_o* container, bool titanLabels, const MethodInfo* method);
// 0x5e44f60
// eh: try 0x5e45056..0x5e453de -> pad 0x5e453f5 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e4541b..0x5e45420 -> pad 0x5e45425 cleanup
// eh: try 0x5e45428..0x5e45432 -> pad 0x5e4543a catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e45037: lea r15, [rip + 0x14343ba]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5e4503e: lea r12, [rip + 0x1432a8b]  ; TypeInfo_System_Collections_DictionaryEntry
// asm:   0x5e45045: jmp 0x5e4507d
// asm:   0x5e45070: mov rbx, qword ptr [rsp]
// asm:   0x5e45074: test rbx, rbx
// asm:   0x5e45077: je 0x5e453ba
// asm:   0x5e4509c: nop dword ptr [rax]
// asm:   0x5e45369: nop dword ptr [rax]
// asm:   0x5e453e3: mov rdi, r14
// asm:   0x5e453e6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e453eb: jmp 0x5e45403
// asm:   0x5e453ed: jmp 0x5e45403
// asm:   0x5e453ef: jmp 0x5e45403
// asm:   0x5e453f1: jmp 0x5e45403
// asm:   0x5e453f3: jmp 0x5e45403
// asm:   0x5e453f5: jmp 0x5e45403
// asm:   0x5e453f7: jmp 0x5e45403
// asm:   0x5e453f9: jmp 0x5e45403
// asm:   0x5e453fb: jmp 0x5e45403
// asm:   0x5e453fd: jmp 0x5e45403
// asm:   0x5e453ff: jmp 0x5e45403
// asm:   0x5e45401: jmp 0x5e45403
// asm:   0x5e45403: mov rbx, rax
// asm:   0x5e45406: cmp edx, 1
// asm:   0x5e45409: jne 0x5e45428
// asm:   0x5e4540b: mov rdi, rbx
// asm:   0x5e4540e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e45413: mov r14, qword ptr [rax]
// asm:   0x5e45416: mov qword ptr [rsp + 0x20], r14
// asm:   0x5e4541b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e45420: jmp 0x5e45328
// asm:   0x5e45425: mov rbx, rax
// asm:   0x5e45428: lea rdi, [rsp + 0x20]
// asm:   0x5e4542d: call 0x2fe1180  ; il2cpp_runtime_helper_02fe1180()
// asm:   0x5e45432: mov rdi, rbx
// asm:   0x5e45435: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e4543a: mov rdi, rax
// asm:   0x5e4543d: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddContainerMetadata
               (System_Collections_Generic_List_GisketchNodeDefinition__o *nodes,System_String_o *tabId,
               Settings_BaseSettingsContainer_o *container,bool titanLabels,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  char cVar8;
  bool bVar9;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  undefined8 *puVar12;
  MethodInfo *method_00;
  System_String_o *id;
  System_String_o *sub;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  undefined7 in_register_00000009;
  ulong uVar14;
  System_String_c *method_01;
  MethodInfo *pMVar15;
  long lVar16;
  Il2CppObject *local_68;
  undefined4 local_5c;
  MethodInfo *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  local_5c = (undefined4)CONCAT71(in_register_00000009,titanLabels);
  local_58 = (MethodInfo *)tabId;
  if (Il2CppMethodInitialized_075485e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_075485e3 = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
    return;
  }
  pSVar4 = (container->fields).Settings;
  if (pSVar4 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar10 = (Il2CppObject *)
            (*(pSVar4->klass->vtable)._22_GetEnumerator.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._22_GetEnumerator.method);
  local_40 = (undefined1 *)&local_68;
  local_48 = 0;
  local_38 = &local_50;
joined_r0x05e45031:
  do {
    do {
      local_68 = pIVar10;
      if (pIVar10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = pIVar10->klass;
      uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar6->interfaceType + lVar16) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar11 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar16);
            goto label_05e450d3;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar14 * 0x10 != lVar16);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e450d3:
      cVar8 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      pIVar10 = local_68;
      if (cVar8 == '\0') {
        pIVar10 = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (pIVar10 == (Il2CppObject *)0x0) {
          return;
        }
        pIVar5 = pIVar10->klass;
        uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
        local_50 = pIVar10;
        if (uVar14 == 0) goto label_05e4537f;
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar16 = 0;
        goto label_05e45370;
      }
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = local_68->klass;
      uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar6->interfaceType + lVar16) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar11 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar16) + 1);
            goto label_05e45157;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar14 * 0x10 != lVar16);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e45157:
      pIVar10 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      if (pIVar10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar10->klass->_1).element_class !=
          (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
      }
      puVar12 = il2cpp_vm_Object_Unbox(pIVar10);
      pIVar10 = local_68;
    } while ((long *)puVar12[1] == (long *)0x0);
    lVar16 = *(long *)puVar12[1];
    bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
  } while ((*(byte *)(lVar16 + 0x130) < bVar2) ||
          (*(Settings_KeybindSetting_c **)(*(long *)(lVar16 + 200) + -8 + (long)(ulong)bVar2 * 8) !=
           TypeInfo_Settings_KeybindSetting));
  pSVar13 = (System_String_o *)*puVar12;
  method_01 = (System_String_c *)(ulong)bVar2;
  if ((pSVar13 != (System_String_o *)0x0) && (method_01 = g_data_07556758, pSVar13->klass != g_data_07556758)) {
    il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  if (Il2CppMethodInitialized_075485e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075485e7 = '\x01';
  }
  method_00 = (MethodInfo *)
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId
                        (pSVar13,(MethodInfo *)method_01);
  pMVar15 = local_58;
  id = System_String__Concat_5302810
                 ("settings-keybinds-",(System_String_o *)local_58,"-",
                  (System_String_o *)method_00,(MethodInfo *)0x0);
  sub = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal((System_String_o *)local_58,pMVar15);
  if (Il2CppMethodInitialized_075485ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    Il2CppMethodInitialized_075485ea = '\x01';
  }
  if (((char)local_5c != '\0') &&
     (bVar9 = System_String__op_Equality(pSVar13,"CoverNape1",(MethodInfo *)0x0), bVar9)) {
    pSVar13 = "CoverNape";
  }
  pSVar13 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabel
                      (sub,pSVar13,(bool)(char)local_5c,method_00);
  item = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
                   (id,pSVar13,(System_String_o *)local_58,method_00);
  pMVar15 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
  if (nodes != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    piVar1 = &(nodes->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (nodes->fields)._items;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      uVar3 = (nodes->fields)._size;
      if (uVar3 < (uint)pGVar7->max_length) {
        (nodes->fields)._size = uVar3 + 1;
        pGVar7->m_Items[(int)uVar3] = item;
        Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
        pIVar10 = local_68;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)nodes,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
        pIVar10 = local_68;
      }
      goto joined_r0x05e45031;
    }
  }
  ThrowNullReferenceException();
  while (lVar16 = lVar16 + 0x10, uVar14 * 0x10 != lVar16) {
label_05e45370:
    if (*(System_IDisposable_c **)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar11 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar16);
      goto label_05e4539d;
    }
  }
label_05e4537f:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar10,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e4539d:
  (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SearchNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode (System_String_o* id, System_String_o* label, System_String_o* tabId, const MethodInfo* method);
// 0x5e454b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SearchNode
          (System_String_o *id,System_String_o *label,System_String_o *tabId,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_array *values;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar3;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)label;
  if (Il2CppMethodInitialized_075485e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonA");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"KeybindsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_075485e4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  str2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupTitle(tabId,method_00);
  pSVar2 = "Top";
  pSVar1 = "KeybindsButton";
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar2,".",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    pSVar2 = "Settings";
    if (Il2CppMethodInitialized_0754862e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Common.");
      Il2CppMethodInitialized_0754862e = '\x01';
    }
    pSVar2 = System_String__Concat_52f0320("Common.",pSVar2,(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = " ";
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar1;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = " ";
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = str2;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = " ";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = label;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                    pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                    pSVar1 = System_String__Concat_5301f10
                                       (pSVar1," > ",str2,(MethodInfo *)0x0);
                    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Search
                                       (label,pSVar2,false,"buttonA","setting",
                                        "keybinds",pSVar1,false,(MethodInfo *)0x0);
                    (__this->fields).search = pGVar3;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).search);
                    return __this;
                  }
                }
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Group
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group (System_String_o* tabId, Settings_BaseSettingsContainer_o* container, bool titanLabels, Gisketch_Aottg2UI_Code_AottgComponent_array* extraRows, const MethodInfo* method);
// 0x5e43620

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Group
          (System_String_o *tabId,Settings_BaseSettingsContainer_o *container,bool titanLabels,
          Gisketch_Aottg2UI_Code_AottgComponent_array *extraRows,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *id;
  System_Object_array *rows;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *method_00;
  ulong uVar3;
  
  method_00 = extraRows;
  if (Il2CppMethodInitialized_075485e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    Il2CppMethodInitialized_075485e5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    method_00 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)(ulong)titanLabels;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddKeybindRows
              ((System_Collections_Generic_List_AottgComponent__o *)__this_00,tabId,container,titanLabels,
               method);
  }
  if (extraRows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    id = System_String__Concat_52f0320("settings-keybinds-",tabId,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05e437d7;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05e437d7;
    System_Collections_Generic_List_object___AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)extraRows,
               (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_AottgComponent_AddRange);
    id = System_String__Concat_52f0320("settings-keybinds-",tabId,(MethodInfo *)0x0);
  }
  rows = System_Collections_Generic_List_object___ToArray
                   (__this_00,
                    (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
            (__this_01,id,(Gisketch_Aottg2UI_Code_AottgComponent_array *)rows,(MethodInfo *)method_00);
  if ((__this_01 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) &&
     (pGVar2 = (__this_01->fields)._blocks,
     pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0)) {
    uVar3 = 0;
    do {
      uVar1 = (uint)pGVar2->max_length;
      if ((long)(int)uVar1 <= (long)uVar3) {
        return __this_01;
      }
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this = pGVar2->m_Items[uVar3];
      if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
        if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) break;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
                  (__this,0,(MethodInfo *)(long)(int)uVar1);
        pGVar2 = (__this_01->fields)._blocks;
      }
      uVar3 = uVar3 + 1;
    } while (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0);
  }
label_05e437d7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddKeybindRows
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddKeybindRows (System_Collections_Generic_List_AottgComponent__o* rows, System_String_o* tabId, Settings_BaseSettingsContainer_o* container, bool titanLabels, const MethodInfo* method);
// 0x5e45a20
// eh: try 0x5e45b4e..0x5e45ecd -> pad 0x5e45ee8 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e45f13..0x5e45f18 -> pad 0x5e45fb4 cleanup
// eh: try 0x5e45fb7..0x5e45fc1 -> pad 0x5e45fc9 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e45b8d: nop dword ptr [rax]
// asm:   0x5e45ed2: jmp 0x5e45ef2
// asm:   0x5e45ed4: jmp 0x5e45ef2
// asm:   0x5e45ed6: jmp 0x5e45ef2
// asm:   0x5e45ed8: jmp 0x5e45ef2
// asm:   0x5e45eda: jmp 0x5e45ef2
// asm:   0x5e45edc: jmp 0x5e45ef2
// asm:   0x5e45ede: jmp 0x5e45ef2
// asm:   0x5e45ee0: jmp 0x5e45ef2
// asm:   0x5e45ee2: jmp 0x5e45ef2
// asm:   0x5e45ee4: jmp 0x5e45ef2
// asm:   0x5e45ee6: jmp 0x5e45ef2
// asm:   0x5e45ee8: jmp 0x5e45ef2
// asm:   0x5e45eea: jmp 0x5e45ef2
// asm:   0x5e45eec: jmp 0x5e45ef2
// asm:   0x5e45eee: jmp 0x5e45ef2
// asm:   0x5e45ef0: jmp 0x5e45ef2
// asm:   0x5e45ef2: mov rbx, rax
// asm:   0x5e45ef5: cmp edx, 1
// asm:   0x5e45ef8: jne 0x5e45fb7
// asm:   0x5e45efe: mov rdi, rbx
// asm:   0x5e45f01: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e45f06: mov rcx, qword ptr [rax]
// asm:   0x5e45f09: mov qword ptr [rsp + 0x18], rcx
// asm:   0x5e45f0e: mov qword ptr [rsp + 0x40], rcx
// asm:   0x5e45f13: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e45f59: nop dword ptr [rax]
// asm:   0x5e45fb4: mov rbx, rax
// asm:   0x5e45fb7: lea rdi, [rsp + 0x40]
// asm:   0x5e45fbc: call 0x2fe1220  ; il2cpp_runtime_helper_02fe1220()
// asm:   0x5e45fc1: mov rdi, rbx
// asm:   0x5e45fc4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e45fc9: mov rdi, rax
// asm:   0x5e45fcc: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__AddKeybindRows
               (System_Collections_Generic_List_AottgComponent__o *rows,System_String_o *tabId,
               Settings_BaseSettingsContainer_o *container,bool titanLabels,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Settings_KeybindSetting_o *setting;
  System_Object_array *pSVar7;
  bool bVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  MethodInfo *pMVar11;
  System_String_o *pSVar12;
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this;
  undefined7 in_register_00000009;
  ulong uVar13;
  MethodInfo *labelName;
  MethodInfo *method_00;
  MethodInfo *pMVar14;
  long lVar15;
  Il2CppObject *local_88;
  undefined4 local_7c;
  System_String_o *local_78;
  long local_70;
  System_String_o *local_68;
  Il2CppObject *local_60;
  System_Collections_Generic_List_object__o *local_58;
  MethodInfo *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  local_7c = (undefined4)CONCAT71(in_register_00000009,titanLabels);
  local_78 = tabId;
  if (Il2CppMethodInitialized_075485e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    Il2CppMethodInitialized_075485e6 = '\x01';
  }
  local_88 = (Il2CppObject *)0x0;
  local_60 = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  local_68 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(local_78,(MethodInfo *)tabId);
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    pSVar4 = (container->fields).Settings;
    local_58 = (System_Collections_Generic_List_object__o *)rows;
    if (pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      local_88 = (Il2CppObject *)
                 (*(pSVar4->klass->vtable)._22_GetEnumerator.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._22_GetEnumerator.method);
      local_40 = (undefined1 *)&local_88;
      local_48 = 0;
      local_38 = &local_60;
      if (local_88 != (Il2CppObject *)0x0) {
        local_70 = 0;
        local_40 = (undefined1 *)&local_88;
        do {
          pIVar10 = local_88;
          pIVar5 = local_88->klass;
          uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar13 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar6->interfaceType + lVar15) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar9 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar15);
                goto label_05e45bc3;
              }
              lVar15 = lVar15 + 0x10;
            } while (uVar13 * 0x10 != lVar15);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e45bc3:
          bVar8 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
          pIVar10 = local_88;
          if (!bVar8) {
            pIVar10 = il2cpp_vm_Object_IsInst(local_88,(Il2CppClass *)TypeInfo_System_IDisposable);
            local_60 = pIVar10;
            if (pIVar10 == (Il2CppObject *)0x0) goto label_05e45f96;
            pIVar5 = pIVar10->klass;
            uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
            if (uVar13 == 0) goto label_05e45f6f;
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar15 = 0;
            goto label_05e45f60;
          }
          if (local_88 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar5 = local_88->klass;
          uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar13 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar6->interfaceType + lVar15) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar9 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar15) + 1);
                goto label_05e45c57;
              }
              lVar15 = lVar15 + 0x10;
            } while (uVar13 * 0x10 != lVar15);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e45c57:
          pIVar10 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
          if (pIVar10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pIVar10->klass->_1).element_class !=
              (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
          }
          pMVar11 = il2cpp_vm_Object_Unbox(pIVar10);
          setting = (Settings_KeybindSetting_o *)pMVar11->virtualMethodPointer;
          if (setting != (Settings_KeybindSetting_o *)0x0) {
            bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
            if ((bVar2 <= (setting->klass->_2).typeHierarchyDepth) &&
               ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
              pMVar14 = (MethodInfo *)pMVar11->methodPointer;
              if ((pMVar14 != (MethodInfo *)0x0) &&
                 ((System_String_c *)pMVar14->methodPointer != g_data_07556758)) {
                il2cpp_codegen_raise_invalid_cast_exception(pMVar14);
              }
              if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
              }
              if (Il2CppMethodInitialized_075485ea == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
                il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
                Il2CppMethodInitialized_075485ea = '\x01';
              }
              labelName = pMVar14;
              if ((char)local_7c != '\0') {
                bVar8 = System_String__op_Equality
                                  ((System_String_o *)pMVar14,"CoverNape1",(MethodInfo *)0x0);
                if (bVar8) {
                  labelName = (MethodInfo *)"CoverNape";
                }
              }
              bVar8 = (bool)(char)local_7c;
              method_00 = labelName;
              local_50 = (MethodInfo *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelKey
                                   (local_68,(System_String_o *)labelName,(bool)(char)local_7c,pMVar11);
              if (Il2CppMethodInitialized_075485e7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
                il2cpp_codegen_initialize_runtime_metadata(&"-");
                Il2CppMethodInitialized_075485e7 = '\x01';
              }
              pMVar11 = (MethodInfo *)
                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId
                                  ((System_String_o *)pMVar14,method_00);
              pSVar12 = System_String__Concat_5302810
                                  ("settings-keybinds-",local_78,"-",
                                   (System_String_o *)pMVar11,(MethodInfo *)0x0);
              label = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabel
                                (local_68,(System_String_o *)labelName,bVar8,pMVar11);
              __this = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow);
              Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor
                        (__this,pSVar12,label,setting,(MethodInfo *)0x0);
              if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *)0x0) {
                ThrowNullReferenceException();
              }
              (__this->fields).WarnOnConflict = true;
              (__this->fields).ConflictScopeId = local_78;
              Il2CppCodeGenWriteBarrier(&(__this->fields).ConflictScopeId);
              pMVar11 = local_50;
              (__this->fields).LabelKey = (System_String_o *)local_50;
              pMVar14 = local_50;
              Il2CppCodeGenWriteBarrier(&(__this->fields).LabelKey);
              pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__TooltipKeyIfPresent
                                  ((System_String_o *)pMVar11,pMVar14);
              (__this->fields).TooltipKey = pSVar12;
              Il2CppCodeGenWriteBarrier(&(__this->fields).TooltipKey);
              pMVar11 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
              if (local_58 == (System_Collections_Generic_List_object__o *)0x0) {
label_05e45ebb:
                ThrowNullReferenceException();
              }
              piVar1 = &(local_58->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (local_58->fields)._items;
              if (pSVar7 == (System_Object_array *)0x0) goto label_05e45ebb;
              uVar3 = (local_58->fields)._size;
              if (uVar3 < (uint)pSVar7->max_length) {
                (local_58->fields)._size = uVar3 + 1;
                pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)__this;
                Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (local_58,(Il2CppObject *)__this,
                           (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
              }
            }
          }
        } while (local_88 != (Il2CppObject *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
  while (lVar15 = lVar15 + 0x10, uVar13 * 0x10 != lVar15) {
label_05e45f60:
    if (*(System_IDisposable_c **)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar15);
      goto label_05e45f8d;
    }
  }
label_05e45f6f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar10,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e45f8d:
  (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
label_05e45f96:
  if (local_70 != 0) {
    il2cpp_codegen_rethrow();
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$RowId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__RowId (System_String_o* tabId, System_String_o* name, const MethodInfo* method);
// 0x5e45830

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__RowId
          (System_String_o *tabId,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)name;
  if (Il2CppMethodInitialized_075485e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075485e7 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId(name,method_00);
  pSVar1 = System_String__Concat_5302810
                     ("settings-keybinds-",tabId,"-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Sub
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Sub (System_String_o* tabId, const MethodInfo* method);
// 0x5e458a0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Sub(System_String_o *tabId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(tabId,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GroupTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupTitle (System_String_o* tabId, const MethodInfo* method);
// 0x5e44850

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GroupTitle
          (System_String_o *tabId,MethodInfo *method)

{
  System_String_o *str3;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075485e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"Groups.Keybinds");
    Il2CppMethodInitialized_075485e8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  str3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(tabId,method);
  pSVar1 = "Groups.Keybinds";
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar1,".",str3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabel (System_String_o* sub, System_String_o* labelName, bool titanLabels, const MethodInfo* method);
// 0x5e45920

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabel
          (System_String_o *sub,System_String_o *labelName,bool titanLabels,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *fallback;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075485e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    Il2CppMethodInitialized_075485e9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelKey
                     (sub,labelName,titanLabels,method);
  fallback = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelFallback
                       (labelName,titanLabels,method_00);
  if (pSVar1 == (System_String_o *)0x0) {
    return fallback;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text_525ff30
                     (pSVar1,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabelName
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelName (System_String_o* name, bool titanLabels, const MethodInfo* method);
// 0x5e458b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelName
          (System_String_o *name,bool titanLabels,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075485ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    Il2CppMethodInitialized_075485ea = '\x01';
  }
  if (titanLabels) {
    bVar1 = System_String__op_Equality(name,"CoverNape1",(MethodInfo *)0x0);
    if (bVar1) {
      name = "CoverNape";
    }
  }
  return name;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$IsRawAttackLabel
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__IsRawAttackLabel (System_String_o* labelName, bool titanLabels, const MethodInfo* method);
// 0x5e46370

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__IsRawAttackLabel
               (System_String_o *labelName,bool titanLabels,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075485eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_075485eb = '\x01';
  }
  if (titanLabels) {
    if (labelName == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__StartsWith(labelName,"Attack",(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabelFallback
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelFallback (System_String_o* labelName, bool titanLabels, const MethodInfo* method);
// 0x5e46290
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e462b4: cmp byte ptr [rip + 0x1702330], 0
// asm:   0x5e462bd: test bpl, bpl
// asm:   0x5e462c0: jne 0x5e4631f
// asm:   0x5e462c2: jmp 0x5e46359

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelFallback
          (System_String_o *labelName,bool titanLabels,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075485ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_075485ec = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  if (Il2CppMethodInitialized_075485eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_075485eb = '\x01';
  }
  if (!titanLabels) {
    return labelName;
  }
  if (labelName != (System_String_o *)0x0) {
    bVar2 = System_String__StartsWith(labelName,"Attack",(MethodInfo *)0x0);
    if (!bVar2) {
      return labelName;
    }
    if ("Attack" != (System_String_o *)0x0) {
      pSVar3 = System_String__Substring
                         (labelName,("Attack"->fields)._stringLength,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$TooltipKeyIfPresent
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__TooltipKeyIfPresent (System_String_o* labelKey, const MethodInfo* method);
// 0x5e46140

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__TooltipKeyIfPresent
          (System_String_o *labelKey,MethodInfo *method)

{
  System_String_o *subCategory;
  System_String_o *item;
  bool bVar1;
  System_String_o *pSVar2;
  System_Char_array *separator;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_075485ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075485ed = '\x01';
  }
  if (labelKey == (System_String_o *)0x0) {
    return (System_String_o *)0x0;
  }
  pSVar2 = System_String__Concat_52f0320(labelKey,"Tooltip",(MethodInfo *)0x0);
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    separator->m_Items[0] = 0x2e;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (pSVar3 = System_String__Split_5304fb0(pSVar2,separator,3,(MethodInfo *)0x0),
       pSVar3 != (System_String_array *)0x0)) {
      if ((int)pSVar3->max_length != 3) {
        return (System_String_o *)0x0;
      }
      pSVar2 = pSVar3->m_Items[0];
      subCategory = pSVar3->m_Items[1];
      item = pSVar3->m_Items[2];
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      bVar1 = UI_UIManager__HasLocale(pSVar2,subCategory,item,"English",(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = System_String__Concat_52f0320(labelKey,"Tooltip",(MethodInfo *)0x0);
        return pSVar2;
      }
      return (System_String_o *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabelKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelKey (System_String_o* sub, System_String_o* labelName, bool titanLabels, const MethodInfo* method);
// 0x5e45fe0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4600c: cmp byte ptr [rip + 0x17025d8], 0
// asm:   0x5e46019: test bpl, bpl
// asm:   0x5e4601c: je 0x5e460ba
// asm:   0x5e4611f: lea rax, [rip + 0x149a69a]  ; "Keybinds.Titan"
// asm:   0x5e46126: mov rbp, qword ptr [rax]
// asm:   0x5e46129: cmp byte ptr [rip + 0x17024fd], 0
// asm:   0x5e46132: jmp 0x5e460f9

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__KeybindLabelKey
          (System_String_o *sub,System_String_o *labelName,bool titanLabels,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075485ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.");
    Il2CppMethodInitialized_075485ee = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  if (Il2CppMethodInitialized_075485eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_075485eb = '\x01';
  }
  if (titanLabels) {
    if (labelName == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_String__StartsWith(labelName,"Attack",(MethodInfo *)0x0);
    pSVar3 = "Keybinds.Titan";
    if (bVar2) {
      return (System_String_o *)0x0;
    }
  }
  else {
    pSVar3 = System_String__Concat_52f0320("Keybinds.",sub,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar3 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar3,".",labelName,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GeneralSpecialRows
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GeneralSpecialRows (Settings_InputSettings_o* settings, const MethodInfo* method);
// 0x5e43440

Gisketch_Aottg2UI_Code_AottgComponent_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__GeneralSpecialRows
          (Settings_InputSettings_o *settings,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *pSVar1;
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_075485ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&"TapScoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-general-tap-scoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-general-tap-map");
    il2cpp_codegen_initialize_runtime_metadata(&"TapScoreboardTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"TapMapTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.General");
    il2cpp_codegen_initialize_runtime_metadata(&"TapMap");
    Il2CppMethodInitialized_075485ef = '\x01';
  }
  if (settings == (Settings_InputSettings_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
    return pGVar2;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
  pSVar1 = (settings->fields).General;
  if (pSVar1 == (Settings_GeneralInputSettings_o *)0x0) {
label_05e435fc:
    ThrowNullReferenceException();
  }
  pIVar3 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-keybinds-general-tap-scoreboard","Keybinds.General","TapScoreboard",
                      (pSVar1->fields).TapScoreboard,"TapScoreboardTooltip",
                      (System_Action_GisketchActionContext__o *)0x0,in_RAX);
  if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e435fc;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43606;
  }
  if ((int)pGVar2->max_length != 0) {
    pGVar2->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
    pSVar1 = (settings->fields).General;
    if (pSVar1 == (Settings_GeneralInputSettings_o *)0x0) goto label_05e435fc;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-general-tap-map","Keybinds.General","TapMap",
                        (pSVar1->fields).TapMap,"TapMapTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
label_05e43606:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((pGVar2->max_length & 0xfffffffe) != 0) {
      pGVar2->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
      Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1);
      return pGVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$HumanSpecialRows
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialRows (Settings_InputSettings_o* settings, const MethodInfo* method);
// 0x5e437f0

Gisketch_Aottg2UI_Code_AottgComponent_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__HumanSpecialRows
          (Settings_InputSettings_o *settings,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_075485f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGasTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDash");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttachTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-dash-double-tap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-auto-refill-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-wall-slide-dash");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-reel-in-holding");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-reel-out-scroll-smoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-auto-use-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-wall-slide-attach");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttach");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGas");
    il2cpp_codegen_initialize_runtime_metadata(&"DashDoubleTap");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHolding");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-human-swap-ts-attack-special");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDashTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHoldingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoRefillGas");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecialTooltip");
    Il2CppMethodInitialized_075485f0 = '\x01';
  }
  if (settings == (Settings_InputSettings_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
    return pGVar2;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
  pSVar1 = (settings->fields).Human;
  if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) {
label_05e43d3e:
    ThrowNullReferenceException();
  }
  pIVar3 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-keybinds-human-dash-double-tap","Keybinds.Human","DashDoubleTap",
                      (pSVar1->fields).DashDoubleTap,(System_String_o *)0x0,
                      (System_Action_GisketchActionContext__o *)0x0,in_RAX);
  if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e43d3e;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
  }
  if ((int)pGVar2->max_length != 0) {
    pGVar2->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
    pSVar1 = (settings->fields).Human;
    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-human-wall-slide-dash","Keybinds.Human","WallSlideDash",
                        (pSVar1->fields).WallSlideDash,"WallSlideDashTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
    }
    if ((pGVar2->max_length & 0xfffffffe) == 0) goto label_05e43d43;
    pGVar2->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1);
    pSVar1 = (settings->fields).Human;
    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                       ("settings-keybinds-human-wall-slide-attach","Keybinds.Human","WallSlideAttach",
                        (pSVar1->fields).WallSlideAttach,"WallSlideAttachTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
    }
    if ((uint)pGVar2->max_length < 3) goto label_05e43d43;
    pGVar2->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 2);
    pSVar1 = (settings->fields).Human;
    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-human-auto-use-gas","Keybinds.Human","AutoUseGas",
                        (pSVar1->fields).AutoUseGas,"AutoUseGasTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
    }
    if ((pGVar2->max_length & 0xfffffffc) == 0) goto label_05e43d43;
    pGVar2->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 3);
    pSVar1 = (settings->fields).Human;
    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-human-auto-refill-gas","Keybinds.Human","AutoRefillGas",
                        (pSVar1->fields).AutoRefillGas,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
    }
    if ((uint)pGVar2->max_length < 5) goto label_05e43d43;
    pGVar2->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 4);
    pSVar1 = (settings->fields).Human;
    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-human-swap-ts-attack-special","Keybinds.Human","SwapTSAttackSpecial",
                        (pSVar1->fields).SwapTSAttackSpecial,"SwapTSAttackSpecialTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
    }
    if ((uint)pGVar2->max_length < 6) goto label_05e43d43;
    pGVar2->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 5);
    pSVar1 = (settings->fields).Human;
    if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
    pIVar3 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-keybinds-human-reel-in-holding","Keybinds.Human","ReelInHolding",
                        (pSVar1->fields).ReelInHolding,"ReelInHoldingTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_RAX);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e43d48;
    }
    if (6 < (uint)pGVar2->max_length) {
      pGVar2->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
      Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 6);
      pSVar1 = (settings->fields).Human;
      if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) goto label_05e43d3e;
      pIVar3 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                         ("settings-keybinds-human-reel-out-scroll-smoothing","Keybinds.Human","ReelOutScrollSmoothing",
                          (pSVar1->fields).ReelOutScrollSmoothing,"ReelOutScrollSmoothingTooltip",
                          (System_Action_GisketchActionContext__o *)0x0,in_RAX);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pGVar2->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
label_05e43d48:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((pGVar2->max_length & 0xfffffff8) != 0) {
        pGVar2->m_Items[7] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar3;
        Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 7);
        return pGVar2;
      }
    }
  }
label_05e43d43:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___cctor (const MethodInfo* method);
// 0x5e463d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_StaticFields *pGVar1;
  System_String_array *pSVar2;
  System_String_array_array *pSVar3;
  
  if (Il2CppMethodInitialized_075485f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"interaction");
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"eren-shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"auto-refill-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"wall-slide-dash");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDash");
    il2cpp_codegen_initialize_runtime_metadata(&"auto-use-gas");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"reel-out-scroll-smoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"swap-ts-attack-special");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttach");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGas");
    il2cpp_codegen_initialize_runtime_metadata(&"wall-slide-attach");
    il2cpp_codegen_initialize_runtime_metadata(&"reel-in-holding");
    il2cpp_codegen_initialize_runtime_metadata(&"dash-double-tap");
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    il2cpp_codegen_initialize_runtime_metadata(&"DashDoubleTap");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHolding");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoRefillGas");
    il2cpp_codegen_initialize_runtime_metadata(&"annie-shifter");
    Il2CppMethodInitialized_075485f1 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "general";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "interaction";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "human";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "titan";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "annie-shifter";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "eren-shifter";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5);
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->static_fields->TabIds =
                   pSVar2;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->
                          static_fields->TabIds);
              pSVar3 = (System_String_array_array *)SZArrayNew(TypeInfo_string_array_array,8);
              pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
              if ((int)pSVar2->max_length != 0) {
                pSVar2->m_Items[0] = "dash-double-tap";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                if ((pSVar2->max_length & 0xfffffffe) != 0) {
                  pSVar2->m_Items[1] = "DashDoubleTap";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                  if (pSVar3 == (System_String_array_array *)0x0) {
label_05e46a5a:
                    ThrowNullReferenceException();
                  }
                  if ((int)pSVar3->max_length != 0) {
                    pSVar3->m_Items[0] = pSVar2;
                    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                    if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = "wall-slide-dash";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                      if ((pSVar2->max_length & 0xfffffffe) != 0) {
                        pSVar2->m_Items[1] = "WallSlideDash";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                        if ((pSVar3->max_length & 0xfffffffe) != 0) {
                          pSVar3->m_Items[1] = pSVar2;
                          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
                          pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
                          if ((int)pSVar2->max_length != 0) {
                            pSVar2->m_Items[0] = "wall-slide-attach";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                            if ((pSVar2->max_length & 0xfffffffe) != 0) {
                              pSVar2->m_Items[1] = "WallSlideAttach";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                              if (2 < (uint)pSVar3->max_length) {
                                pSVar3->m_Items[2] = pSVar2;
                                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
                                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
                                if ((int)pSVar2->max_length != 0) {
                                  pSVar2->m_Items[0] = "auto-use-gas";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                  if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                    pSVar2->m_Items[1] = "AutoUseGas";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                    if ((pSVar3->max_length & 0xfffffffc) != 0) {
                                      pSVar3->m_Items[3] = pSVar2;
                                      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3);
                                      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
                                      if ((int)pSVar2->max_length != 0) {
                                        pSVar2->m_Items[0] = "auto-refill-gas";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                        if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                          pSVar2->m_Items[1] = "AutoRefillGas";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                          if (4 < (uint)pSVar3->max_length) {
                                            pSVar3->m_Items[4] = pSVar2;
                                            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 4);
                                            pSVar2 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "swap-ts-attack-special";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                              if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                pSVar2->m_Items[1] = "SwapTSAttackSpecial";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                if (5 < (uint)pSVar3->max_length) {
                                                  pSVar3->m_Items[5] = pSVar2;
                                                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 5);
                                                  pSVar2 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar2 == (System_String_array *)0x0) goto label_05e46a5a;
                                                  if ((int)pSVar2->max_length != 0) {
                                                    pSVar2->m_Items[0] = "reel-in-holding";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                    if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                      pSVar2->m_Items[1] = "ReelInHolding";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                      if (6 < (uint)pSVar3->max_length) {
                                                        pSVar3->m_Items[6] = pSVar2;
                                                        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 6);
                                                        pSVar2 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,2);
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_05e46a5a;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          pSVar2->m_Items[0] = "reel-out-scroll-smoothing";
                                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                          if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                            pSVar2->m_Items[1] = "ReelOutScrollSmoothing";
                                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                            if ((pSVar3->max_length & 0xfffffff8) != 0) {
                                                              pSVar3->m_Items[7] = pSVar2;
                                                              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 7);
                                                              pGVar1 = 
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory
                                                       ->static_fields;
                                                       pGVar1->HumanSpecialItems = pSVar3;
                                                       Il2CppCodeGenWriteBarrier(&pGVar1->HumanSpecialItems);
                                                       return;
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
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


