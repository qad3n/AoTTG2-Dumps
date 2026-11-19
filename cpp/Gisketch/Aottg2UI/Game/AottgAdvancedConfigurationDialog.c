// Type: Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgAdvancedConfigurationDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x58bd670

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass20_0$$<BuildSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0___BuildSection_b__0 (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58be1f0
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58be307: lea rax, [rip + 0x1a343aa]  ; "advanced-configuration"
// asm:   0x58be30e: mov rsi, qword ptr [rax]
// asm:   0x58be311: xor edx, edx
// asm:   0x58be313: xor ecx, ecx
// asm:   0x58be315: add rsp, 8
// asm:   0x58be319: pop rbx
// asm:   0x58be31a: pop r12
// asm:   0x58be31c: pop r13
// asm:   0x58be31e: pop r14
// asm:   0x58be320: pop r15
// asm:   0x58be322: pop rbp
// asm:   0x58be323: jmp 0x53565b0  ; Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent()

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0___BuildSection_b__0
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int32_t maxLength;
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  MethodInfo *in_RAX;
  Settings_StringSetting_o *pSVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  MethodInfo *method_01;
  MethodInfo *id;
  undefined1 auVar8 [16];
  
  if (Il2CppMethodInitialized_075453c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_075453c3 = '\x01';
  }
  pSVar2 = (__this->fields).keys;
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar5,pSVar3,0x40,(MethodInfo *)0x0);
  if (pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) {
label_058be337:
    ThrowNullReferenceException();
  }
  Settings_ListSetting_object___AddItem
            ((Settings_ListSetting_T__o *)pSVar2,(Settings_BaseSetting_o *)pSVar5,
             (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
  pSVar2 = (__this->fields).values;
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  maxLength = (__this->fields).valueMaxLength;
  pSVar5 = (Settings_StringSetting_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar5,pSVar3,maxLength,(MethodInfo *)0x0);
  if (pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_058be337;
  Settings_ListSetting_object___AddItem
            ((Settings_ListSetting_T__o *)pSVar2,(Settings_BaseSetting_o *)pSVar5,
             (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
  if (Il2CppMethodInitialized_075453bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration");
    Il2CppMethodInitialized_075453bf = '\x01';
  }
  pGVar6 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  id = (MethodInfo *)"advanced-configuration";
  if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_058be337;
  __this_02 = (pGVar6->fields)._Overlays_k__BackingField;
  if (__this_02 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  pMVar7 = (MethodInfo *)0x0;
  if (Il2CppMethodInitialized_07542942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542942 = '\x01';
    pMVar7 = extraout_RDX;
  }
  __this_03 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                        (__this_02,(System_String_o *)id,pMVar7);
  if (__this_03 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return;
  }
  pGVar4 = (__this_02->fields)._context;
  if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05356702;
  pSVar1 = (pGVar4->fields).DialogResolver;
  pMVar7 = extraout_RDX_00;
  if (pSVar1 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
label_05356631:
    __this_00 = (pGVar4->fields).Manifest;
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      return;
    }
    overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog
                        (__this_00,(System_String_o *)id,pMVar7);
    method_01 = id;
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      return;
    }
  }
  else {
    method_01 = id;
    auVar8 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,id,(pSVar1->fields).method);
    pMVar7 = auVar8._8_8_;
    overlay = auVar8._0_8_;
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      pGVar4 = (__this_02->fields)._context;
      if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05356702;
      goto label_05356631;
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
            ((__this_03->fields)._ContentRoot_k__BackingField,method_01);
  __this_01 = (__this_03->fields).Host;
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    pGVar4 = (__this_02->fields)._context;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                      (overlay,parent,pGVar4,(MethodInfo *)0x0);
    if (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
                (overlay,(inner->fields)._Root_k__BackingField,(__this_03->fields).HostRect,
                 (UnityEngine_GameObject_o *)0x0,false,false,0.0,in_RAX);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
                (__this_03,inner,method_00);
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
                ((__this_03->fields).Host,1,(MethodInfo *)0x0);
      return;
    }
  }
label_05356702:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x58bda30

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0___ctor
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass22_0$$<BuildHeader>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0___BuildHeader_b__0 (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58be340

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0___BuildHeader_b__0
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_075453c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-value-header");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.KeyHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"-key-header");
    Il2CppMethodInitialized_075453c4 = '\x01';
  }
  pSVar1 = System_String__Concat_5301f10
                     ("advanced-configuration-",(__this->fields).id,"-key-header",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (row,"MainMenu.AdvancedConfigurationPopup.KeyHeader","stateMetaText",pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
      pSVar1 = System_String__Concat_52f0320
                         ("MainMenu.AdvancedConfigurationPopup.",(__this->fields).valueKey,(MethodInfo *)0x0);
      id = System_String__Concat_5301f10
                     ("advanced-configuration-",(__this->fields).id,"-value-header",(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                         (row,pSVar1,"stateMetaText",id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x58bdb10

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass23_0$$<BuildRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0___BuildRow_b__0 (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58be5d0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0___BuildRow_b__0
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t type;
  int32_t maxLength;
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  MethodInfo *pMVar5;
  System_Action_GisketchActionContext__o *__this_00;
  System_String_o *id;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_075453c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0_BuildRow_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"-key");
    il2cpp_codegen_initialize_runtime_metadata(&"-delete");
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_075453c5 = '\x01';
  }
  pSVar2 = System_String__Concat_52f0320((__this->fields).id,"-key",(MethodInfo *)0x0);
  pSVar1 = (__this->fields).key;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
  pMVar5 = (MethodInfo *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Input
            (row,pSVar2,pSVar1,0,0x40,pGVar4,(System_Action_StringSetting__o *)0x0,pMVar5);
  pSVar2 = System_String__Concat_52f0320((__this->fields).id,"-value",(MethodInfo *)0x0);
  pSVar1 = (__this->fields).value;
  type = (__this->fields).valueType;
  maxLength = (__this->fields).valueMaxLength;
  pMVar5 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)pMVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Input
            (row,pSVar2,pSVar1,type,maxLength,pGVar4,(__this->fields).validate,pMVar5);
  pSVar2 = "trashcan";
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0_BuildRow_b__1
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  id = System_String__Concat_5301f10
                 ("advanced-configuration-",(__this->fields).id,"-delete",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  tooltip = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Delete",(MethodInfo *)0x0)
  ;
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                       (row,6,pSVar2,__this_00,id,tooltip,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass23_0$$<BuildRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0___BuildRow_b__1 (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58be990

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0___BuildRow_b__1
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  
  if (Il2CppMethodInitialized_075453c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_075453c6 = '\x01';
  }
  pSVar1 = (__this->fields).keys;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              (pSVar2,(Il2CppObject *)(__this->fields).key,
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    pSVar1 = (__this->fields).values;
    if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                (pSVar2,(Il2CppObject *)(__this->fields).value,
                 (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      if (Il2CppMethodInitialized_075453bf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration");
        Il2CppMethodInitialized_075453bf = '\x01';
      }
      pGVar3 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        __this_00 = (pGVar3->fields)._Overlays_k__BackingField;
        if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          return;
        }
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent
                  (__this_00,"advanced-configuration",false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x58bdcf0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0___ctor
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass24_0$$<Input>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0___Input_b__0 (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58bea70

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0___Input_b__0
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_075453c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_075453c7 = '\x01';
  }
  __this_00 = (__this->fields).setting;
  value = Gisketch_Aottg2UI_Actions_GisketchActionContext__get_InputText(&context,(MethodInfo *)0x0);
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass24_0$$<Input>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0___Input_b__1 (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58bead0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0___Input_b__1
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Action_StringSetting__o *pSVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_075453c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_075453c8 = '\x01';
  }
  __this_00 = (__this->fields).setting;
  value = Gisketch_Aottg2UI_Actions_GisketchActionContext__get_InputText(&context,(MethodInfo *)0x0);
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar1 = (__this->fields).validate;
  if (pSVar1 != (System_Action_StringSetting__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,(__this->fields).setting,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_Title (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, const MethodInfo* method);
// 0x58bcc80

System_String_o *
Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075453b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.AdvancedConfigurationButton");
    Il2CppMethodInitialized_075453b2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.ToolsPopup.AdvancedConfigurationButton",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, const MethodInfo* method);
// 0x58bcce0

System_String_o *
Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    Il2CppMethodInitialized_075453b3 = '\x01';
  }
  return "gear";
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, const MethodInfo* method);
// 0x58bcd10

int32_t Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, const MethodInfo* method);
// 0x58bcd20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075453b4 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(860.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  maxHeight = Gisketch_Aottg2UI_Code_AottgUi__Percent(86.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,maxHeight,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, const MethodInfo* method);
// 0x58bce10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075453b5 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Open (const MethodInfo* method);
// 0x58bcec0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Open(MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Settings_AdvancedSettings_o *pSVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_075453b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_AdvancedSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration");
    Il2CppMethodInitialized_075453b6 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AdvancedSettings);
  Settings_AdvancedSettings___ctor(pSVar1,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft);
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft;
  if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._10_Copy.methodPtr)
              (pSVar1,(Settings_BaseSetting_o *)
                      TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings,
               (pSVar1->klass->vtable)._10_Copy.method);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar2->fields)._Overlays_k__BackingField;
      if (__this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        return;
      }
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this,"advanced-configuration",true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58bcfd0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *keys;
  Settings_ListSetting_StringSetting__o *values;
  Gisketch_Aottg2UI_Code_AottgComponent_o *component;
  System_Action_StringSetting__o *__this_00;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_075453b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_ValidateUrl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-secrets-hint");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.ServicesEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.SecretsTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.SecretsHint");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSecretButton");
    il2cpp_codegen_initialize_runtime_metadata(&"UrlHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.ServicesEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"ValueHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"AddServiceButton");
    il2cpp_codegen_initialize_runtime_metadata(&"secret");
    il2cpp_codegen_initialize_runtime_metadata(&"service");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogSectionHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-services-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-secrets-title");
    Il2CppMethodInitialized_075453b7 = '\x01';
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft;
  if (pSVar1 == (Settings_AdvancedSettings_o *)0x0) {
    return;
  }
  component = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Switch
                        ("advanced-configuration-services-enabled","MainMenu.AdvancedConfigurationPopup.ServicesEnabled",(pSVar1->fields).ServicesEnabled,
                         "MainMenu.AdvancedConfigurationPopup.ServicesEnabledTooltip",(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                        );
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,component,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Separator
              (body,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft;
    if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
      keys = (pSVar1->fields).ServiceKeys;
      values = (pSVar1->fields).ServiceUrls;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_StringSetting);
      pMVar2 = (MethodInfo *)0x58bd17e;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_ValidateUrl,
                 (MethodInfo_4A81BE0 *)0x0);
      Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildSection
                (body,"service",keys,values,"UrlHeader",0,0x800,__this_00,
                 "AddServiceButton",pMVar2);
      pMVar2 = (MethodInfo *)0x58bd1c8;
      Gisketch_Aottg2UI_Code_AottgUi__Separator
                (body,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (body,"MainMenu.AdvancedConfigurationPopup.SecretsTitle","changelogSectionHeader","advanced-configuration-secrets-title",(System_String_o *)0x0
                 ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (body,"MainMenu.AdvancedConfigurationPopup.SecretsHint","stateMetaText","advanced-configuration-secrets-hint",(System_String_o *)0x0
                 ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft;
      if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildSection
                  (body,"secret",(pSVar1->fields).SecretKeys,(pSVar1->fields).SecretValues,
                   "ValueHeader",3,0x1000,(System_Action_StringSetting__o *)0x0,"AddSecretButton",
                   pMVar2);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildSection (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, Settings_ListSetting_StringSetting__o* keys, Settings_ListSetting_StringSetting__o* values, System_String_o* valueKey, int32_t valueType, int32_t valueMaxLength, System_Action_StringSetting__o* validate, System_String_o* addKey, const MethodInfo* method);
// 0x58bd2a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58bd413: nop word ptr cs:[rax + rax]
// asm:   0x58bd51a: jmp 0x58bd662

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildSection
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,
               Settings_ListSetting_StringSetting__o *keys,Settings_ListSetting_StringSetting__o *values,
               System_String_o *valueKey,int32_t valueType,int32_t valueMaxLength,
               System_Action_StringSetting__o *validate,System_String_o *addKey,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Settings_ListSetting_StringSetting__o *values_00;
  int32_t iVar2;
  Settings_ListSetting_StringSetting__o **ppSVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o *pGVar5;
  System_String_o *pSVar6;
  Settings_StringSetting_o *key;
  Settings_StringSetting_o *value;
  System_Action_GisketchActionContext__o *__this;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  MethodInfo *method_00;
  Settings_ListSetting_StringSetting__o *pSVar9;
  MethodInfo *in_stack_ffffffffffffff60;
  int32_t local_64;
  System_String_o *local_60;
  int32_t local_54;
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o *local_50;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_48;
  Settings_ListSetting_StringSetting__o **local_40;
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_Fields *local_38;
  
  method_00 = (MethodInfo *)values;
  local_60 = id;
  local_54 = valueType;
  if (Il2CppMethodInitialized_075453b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass20_0_BuildSection_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-add-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    Il2CppMethodInitialized_075453b8 = '\x01';
  }
  pGVar5 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass20_0);
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass20_0_o *)0x0) {
    local_38 = &pGVar5->fields;
    (pGVar5->fields).keys = keys;
    Il2CppCodeGenWriteBarrier(&local_38->keys);
    local_40 = &(pGVar5->fields).values;
    (pGVar5->fields).values = values;
    Il2CppCodeGenWriteBarrier(local_40);
    (pGVar5->fields).valueMaxLength = valueMaxLength;
    pSVar6 = System_String__Concat_52f0320(local_60,"s",(MethodInfo *)0x0);
    local_48 = body;
    Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildHeader(body,pSVar6,valueKey,method_00);
    local_64 = 0;
    pSVar9 = (pGVar5->fields).keys;
    local_50 = pGVar5;
    if (pSVar9 != (Settings_ListSetting_StringSetting__o *)0x0) {
      while (iVar2 = local_64,
            iVar4 = Settings_ListSetting_object___GetCount
                              ((Settings_ListSetting_T__o *)pSVar9,
                               (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount),
            iVar2 < iVar4) {
        pSVar6 = System_Int32__ToString(&local_64,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_5301f10(local_60,"-",pSVar6,(MethodInfo *)0x0);
        ppSVar3 = local_40;
        pSVar9 = local_38->keys;
        if ((pSVar9 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar1 = (System_Collections_Generic_List_object__o *)(pSVar9->fields)._value,
           pSVar1 == (System_Collections_Generic_List_object__o *)0x0)) goto label_058bd662;
        values_00 = *local_40;
        key = System_Collections_Generic_List_object___get_Item
                        (pSVar1,local_64,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if ((*ppSVar3 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar1 = (System_Collections_Generic_List_object__o *)((*ppSVar3)->fields)._value,
           pSVar1 == (System_Collections_Generic_List_object__o *)0x0)) goto label_058bd662;
        value = System_Collections_Generic_List_object___get_Item
                          (pSVar1,local_64,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        pGVar5 = local_50;
        Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildRow
                  (local_48,pSVar6,pSVar9,values_00,key,value,local_54,(local_50->fields).valueMaxLength,
                   validate,in_stack_ffffffffffffff60);
        local_64 = local_64 + 1;
        pSVar9 = (pGVar5->fields).keys;
        if (pSVar9 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_058bd662;
      }
      pSVar6 = System_String__Concat_52f0320("MainMenu.AdvancedConfigurationPopup.",addKey,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this,(Il2CppObject *)local_50,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass20_0_BuildSection_b__0
                 ,(MethodInfo_4A803E0 *)0x0);
      id_00 = System_String__Concat_52f0320("advanced-configuration-add-",local_60,(MethodInfo *)0x0);
      if (local_48 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                           (local_48,1,pSVar6,__this,id_00,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            "FlexStart",(System_String_o *)0x0,0.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).layout = pGVar8;
          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout);
          return;
        }
      }
    }
  }
label_058bd662:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58bd960

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_075453b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_075453b9 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Back","overlay.close",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_Save,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"Common.Save",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildHeader (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* valueKey, const MethodInfo* method);
// 0x58bd680

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildHeader
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *valueKey,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075453ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass22_0_BuildHeader_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass22_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_075453ba = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass22_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass22_0_o *)0x0) {
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).valueKey = valueKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).valueKey);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass22_0_BuildHeader_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    method_00 = (MethodInfo *)"advanced-configuration-";
    id_00 = System_String__Concat_5301f10
                      ("advanced-configuration-",(__this->fields).id,"-header",(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__RowLayout(method_00);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"clear",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildRow (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, Settings_ListSetting_StringSetting__o* keys, Settings_ListSetting_StringSetting__o* values, Settings_StringSetting_o* key, Settings_StringSetting_o* value, int32_t valueType, int32_t valueMaxLength, System_Action_StringSetting__o* validate, const MethodInfo* method);
// 0x58bd7c0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__BuildRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,
               Settings_ListSetting_StringSetting__o *keys,Settings_ListSetting_StringSetting__o *values,
               Settings_StringSetting_o *key,Settings_StringSetting_o *value,int32_t valueType,
               int32_t valueMaxLength,System_Action_StringSetting__o *validate,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075453bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0_BuildRow_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-");
    Il2CppMethodInitialized_075453bb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass23_0_o *)0x0) {
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).key);
    (__this->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    (__this->fields).valueType = valueType;
    (__this->fields).valueMaxLength = valueMaxLength;
    (__this->fields).validate = validate;
    Il2CppCodeGenWriteBarrier(&(__this->fields).validate);
    (__this->fields).keys = keys;
    Il2CppCodeGenWriteBarrier(&(__this->fields).keys);
    (__this->fields).values = values;
    Il2CppCodeGenWriteBarrier(&(__this->fields).values);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0_BuildRow_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    method_00 = (MethodInfo *)"advanced-configuration-";
    id_00 = System_String__Concat_52f0320("advanced-configuration-",(__this->fields).id,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__RowLayout(method_00);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"clear",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Input
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Input (Gisketch_Aottg2UI_Code_AottgUi_o* row, System_String_o* id, Settings_StringSetting_o* setting, int32_t type, int32_t maxLength, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, System_Action_StringSetting__o* validate, const MethodInfo* method);
// 0x58bdb20

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Input
               (Gisketch_Aottg2UI_Code_AottgUi_o *row,System_String_o *id,Settings_StringSetting_o *setting,
               int32_t type,int32_t maxLength,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
               System_Action_StringSetting__o *validate,MethodInfo *method)

{
  System_String_o *placeholder;
  Settings_StringSetting_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o *__this;
  System_String_o *id_00;
  System_Action_GisketchActionContext__o *__this_00;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075453bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0_Input_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0_Input_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration-");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    Il2CppMethodInitialized_075453bc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___c__DisplayClass24_0_o *)0x0) {
    (__this->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields).setting);
    (__this->fields).validate = validate;
    Il2CppCodeGenWriteBarrier(&(__this->fields).validate);
    id_00 = System_String__Concat_52f0320("advanced-configuration-",id,(MethodInfo *)0x0);
    placeholder = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0_Input_b__0
               ,(MethodInfo_4A803E0 *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0_Input_b__1
               ,(MethodInfo_4A803E0 *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (row,id_00,placeholder,type,"inputField",layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,__this_00,0.05,maxLength,
                          __this_01,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).setting;
      if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
         (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar2->fields).value = (pSVar1->fields)._value;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$ValidateUrl
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__ValidateUrl (Settings_StringSetting_o* url, const MethodInfo* method);
// 0x58bdd00

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__ValidateUrl
               (Settings_StringSetting_o *url,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Uri_o *pSStack_18;
  
  if (Il2CppMethodInitialized_075453bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"InvalidServiceUrl");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    Il2CppMethodInitialized_075453bd = '\x01';
  }
  pSStack_18 = (System_Uri_o *)0x0;
  if (url != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace((url->fields)._value,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pSVar2 = (url->fields)._value;
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar1 = System_Uri__TryCreate(pSVar2,1,&pSStack_18,(MethodInfo *)0x0);
    if (!bVar1) {
label_058bde31:
      pSVar2 = "InvalidServiceUrl";
      if (Il2CppMethodInitialized_075453c2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.");
        Il2CppMethodInitialized_075453c2 = '\x01';
      }
      pSVar2 = System_String__Concat_52f0320("MainMenu.AdvancedConfigurationPopup.",pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Toast
                (1,"warning",pSVar2,(MethodInfo *)&"warning");
      return;
    }
    if (pSStack_18 != (System_Uri_o *)0x0) {
      pSVar2 = System_Uri__get_Scheme(pSStack_18,(MethodInfo *)0x0);
      if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
      }
      bVar1 = System_String__op_Equality
                        (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttp,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      if (pSStack_18 != (System_Uri_o *)0x0) {
        pSVar2 = System_Uri__get_Scheme(pSStack_18,(MethodInfo *)0x0);
        if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
        }
        bVar1 = System_String__op_Equality
                          (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        goto label_058bde31;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58be030

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075453be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Saved");
    il2cpp_codegen_initialize_runtime_metadata(&"checkmark");
    Il2CppMethodInitialized_075453be = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._10_Copy.methodPtr)
              (pSVar1,(Settings_BaseSetting_o *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog->static_fields->_draft,
               (pSVar1->klass->vtable)._10_Copy.method);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
      (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
      pGVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        __this = (pGVar2->fields)._Overlays_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
        }
        pSVar3 = "Saved";
        if (Il2CppMethodInitialized_075453c2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.");
          Il2CppMethodInitialized_075453c2 = '\x01';
        }
        pSVar3 = System_String__Concat_52f0320("MainMenu.AdvancedConfigurationPopup.",pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Toast
                  (4,"checkmark",pSVar3,(MethodInfo *)&"checkmark");
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Refresh (const MethodInfo* method);
// 0x58be190

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Refresh(MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration");
    Il2CppMethodInitialized_075453bf = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (pGVar1->fields)._Overlays_k__BackingField;
  if (__this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent
            (__this,"advanced-configuration",false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Toast
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Toast (int32_t variant, System_String_o* icon, System_String_o* content, const MethodInfo* method);
// 0x58bdf40

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Toast
               (int32_t variant,System_String_o *icon,System_String_o *content,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  System_String_o *title;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075453c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"advanced-configuration");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.AdvancedConfigurationButton");
    Il2CppMethodInitialized_075453c0 = '\x01';
  }
  __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.ToolsPopup.AdvancedConfigurationButton",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
  Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
            (__this_00,variant,icon,title,content,"advanced-configuration",(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this,__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$RowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__RowLayout (const MethodInfo* method);
// 0x58bda40

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__RowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075453c1 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Text (System_String_o* item, const MethodInfo* method);
// 0x58bdec0

System_String_o *
Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog__Text(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075453c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.AdvancedConfigurationPopup.");
    Il2CppMethodInitialized_075453c2 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.AdvancedConfigurationPopup.",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___ctor (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o* __this, const MethodInfo* method);
// 0x58be1e0

void Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


